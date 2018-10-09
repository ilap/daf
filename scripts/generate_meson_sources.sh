#!/bin/bash


modules=("dafunit" "dafcore" "dafvalidation" "dafioc" "dafui")

sources=("lib" "src" "test")

generate_meson() {
	DIR="$*"
	echo "sources = files ("
	find . -name \*.vala -print | sed -e "s@^..@    '@g" -e "s@\$@',@g"
	echo ")"
}


for module in ${modules[*]}
do
	for source_dir in ${sources[*]}
	do
		DIR=./${module}/${source_dir}
		if [ -d ${DIR} ]
		then
			pushd "${DIR}" >/dev/null
			generate_meson "${DIR}" > meson.build
			popd >/dev/null
		fi

	done
done
