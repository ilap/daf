project('com.github.ilap.daf.demos.selectionlist', ['vala', 'c'],
    version : '0.1.0',
    license: 'GPL-3.0'
)

project_deps = [
        dependency('granite'),
        dependency('glib-2.0'),
        dependency('gee-0.8')
]

dafcore = subproject('dafcore')
dafcore_dep = dafcore.get_variable('daf_dep')
dafioc = subproject('dafioc')
dafioc_dep = dafioc.get_variable('daf_dep')
dafui = subproject('dafui')
dafui_dep = dafui.get_variable('daf_dep')

daf_deps = [
        dafcore_dep,
        dafioc_dep,
        dafui_dep
]

subdir('src')

executable(meson.project_name(),
    sources,
    dependencies : [daf_deps, project_deps] ,
    install : true
)
