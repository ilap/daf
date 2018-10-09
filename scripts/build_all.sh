#!/bin/bash

MODULES="dafunit dafcore dafvalidation dafioc dafui"


for module in ${MODULES}
do
  pushd ./${module}
  rm -rf build && meson build  && cd build
  ninja
  popd
done
 
