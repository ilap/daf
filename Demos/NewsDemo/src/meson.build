app_sources = [
  'NewsDemo.vala',
  'Views/SplashView.vala',
]

app_deps = [
  dependency('gio-2.0', version: '>= 2.50'),
  dependency('gtk+-3.0', version: '>= 3.22'),
  dependency('gee-0.8', version: '>= 0.8'),
  dependency('dafui', version: '>= 0.1'),
  dependency('dafcore', version: '>= 0.1'),
  dependency('granite', version: '>= 0.29.1'),
]

executable('com.github.ilap.daf.demos.news',
  [app_sources, app_resources],
  vala_args: '--target-glib=2.50',
  dependencies: app_deps,
  install: true,
)
