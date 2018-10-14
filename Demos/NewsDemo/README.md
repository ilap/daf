# News' App Splash Screen Demo

A very simple DaF UI (2D Property Animation Module) splash screens demo inspired by Apple's News app.

![NewsDemo Screencast](https://raw.githubusercontent.com/ilap/daf/master/Demos/NewsDemo/data/screencast.gif)

## Building end Testing

You'll need the following dependencies to build:
* libgtk-3-dev
* meson
* dafui
* valac

You'll need the following dependencies to run:
* dafui

Run `meson build` to configure the build environment and run `./src/com.github.ilap.daf.demos.news` to test.

    meson build
    cd build
    ninja
    ./src/com.github.ilap.daf.demos.news
