<div align="center">
  <span align="center"> <img width="80" height="70" class="center" src="https://github.com/robertsanseries/template-for-vala-apps/blob/master/data/images/com.github.robertsanseries.template-for-vala-apps.png" alt="Icon"></span>
  <h1 align="center">App Template</h1>
  <h3 align="center">My application template Vala for elementary OS.</h3>
</div>

<br/>

<p align="center">
   <a href="https://github.com/robertsanseries/template-for-vala-apps/blob/master/LICENSE">
    <img src="https://img.shields.io/badge/License-GPL--3.0-blue.svg">
   </a>
  <a href="https://github.com/robertsanseries/template-for-vala-apps/releases">
    <img src="https://img.shields.io/badge/Release-v%200.1.0-orange.svg">
   </a>
  <a href="https://github.com/robertsanseries/template-for-vala-apps/releases/download/0.1.0/com.github.robertsanseries.template-for-vala-apps_0.1.0_amd64.deb">
     <img src="https://img.shields.io/badge/Download-%20Package .deb-yellow.svg">
    </a>
</p>

<p align="center">
    <img  src="https://github.com/robertsanseries/template-for-vala-apps/blob/master/data/images/screenshot.png" alt="Screenshot"> <br>
  <a href="https://github.com/robertsanseries/template-for-vala-apps/issues/new"> Report a problem! </a>
</p>

## Installation

### Dependencies
These dependencies must be present before building
 - `meson (>=0.40)`
 - `valac (>=0.16)`
 - `debhelper (>= 9)`
 - `libgranite-dev`
 - `libgtk-3-dev`

 
 ### Building

```
git clone https://github.com/robertsanseries/template-for-vala-apps.git && cd template-for-vala-apps
meson build && cd build
meson configure -Dprefix=/usr
ninja
sudo ninja install
com.github.robertsanseries.template-for-vala-apps
```

### Deconstruct

```
sudo ninja uninstall
```

### Contributing

To help, access the links below:

- [Guide on Code Style](https://github.com/robertsanseries/ciano/wiki/Guide-on-code-style)

- [Proposing Design Changes](https://github.com/robertsanseries/ciano/wiki/Proposing-Design-Changes)

- [Reporting Bugs](https://github.com/robertsanseries/ciano/wiki/Reporting-Bugs)

- [Translate](https://github.com/robertsanseries/ciano/wiki/Translate)


### License

This project is licensed under the GPL3 License - see the [LICENSE](LICENSE.md) file for details.
