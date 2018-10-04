#!/bin/bash

MODULES="dafunit dafcore dafvalidation dafioc dafui"

COMM_MSG="Fixed includes files."

for module in ${MODULES}
do
  pushd ./${module}
  rm -rf build
  git add .
  git commit -m "${COMM_MSG}"   
  git push origin master
  popd
done
 
