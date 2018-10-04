#!/bin/bash

MODULES="dafunit dafcore dafvalidation dafioc dafui"


for module in ${MODULES}
do
  pushd ./${module}
  rm -rf build && mkdir build && cd build
  cmake .. -DCMAKE_INSTALL_PREFIX=/usr
  make
  sudo make install
  popd
done
 
