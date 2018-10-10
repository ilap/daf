#!/bin/bash

MODULES="dafunit dafcore dafvalidation dafioc dafui"

if [ "${1}" = "install" ]; then
	echo "Will install modules."
	UNINS="sudo ninja uninstall"
	INS="sudo ninja install"
else
	INS=""
	UNINS=""
fi


for module in ${MODULES}
do
  pushd ./${module}
  if [ -d "build" ]; then
    cd build 
    sudo ninja uninstall
    cd ..
  fi

  rm -rf build 
  meson build || ( echo "Meson build error."; exit 127 )
  cd build
  #meson configure -Dprefix=/usr
  ninja
  ${INS}
  popd
done
