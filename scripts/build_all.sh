#!/bin/bash

MODULES="dafunit dafcore dafvalidation dafioc dafui"

if [ "${1}" = "install" ]; then
	echo "Will install modules."
	INS="sudo ninja install"
else
	INS=""
fi


for module in ${MODULES}
do
  pushd ./${module}
  cd build && sudo ninja uninstall
  rm -rf build && meson build  && cd build
  meson configure -Dprefix=/usr
  ninja
  ${INS}
  popd
done
 
