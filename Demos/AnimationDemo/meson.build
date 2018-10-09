project('com.github.ilap.daf.demos.animation', ['vala', 'c'],
    version : '0.1.0',
    license: 'GPL-3.0'
)

project_deps = [
        dependency('granite'),
        dependency('glib-2.0'),
        dependency('gtk+-3.0'),
        dependency('gee-0.8')
]

dafcore = subproject('dafcore')
dafcore_dep = dafcore.get_variable('daf_dep')
dafui = subproject('dafui')
dafui_dep = dafui.get_variable('daf_dep')

daf_deps = [
        dafcore_dep,
        dafui_dep
]

conf = configuration_data()
pkgdatadir = join_paths(get_option('datadir'), meson.project_name())
conf.set_quoted('PACKAGE_DATADIR', join_paths(get_option('prefix'), pkgdatadir))
install_subdir('img', install_dir : join_paths([pkgdatadir, 'img']))
configure_file(output: 'config.h', configuration: conf)
config_h_dir = include_directories('.')

subdir('data')
subdir('src')

executable(meson.project_name(),
    sources,
    dependencies : [daf_deps, project_deps] ,
    install : true
)
