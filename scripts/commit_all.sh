#!/bin/bash

MODULES="dafunit dafcore dafvalidation dafioc dafui"

COMM_MSG="$*"

if [ -z "${COMM_MSG}" ]; then
	echo "Usages: `basename $0` <commit messag>" >&2
	exit 127
fi

for module in ${MODULES}
do
  pushd ./${module}
  rm -rf build
  git add .
  git commit -m "${COMM_MSG}"   
  git push origin master
  popd
done
 
