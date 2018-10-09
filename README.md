# Design Application Framework

A set of "Design Driven Development" helper modules for Linux based distributions (e.g. Ubuntu).

It was orignally uploaded into [Canonical's Launchpad](https://launchpad.net/dafproject) in 2013.

## Description

This project provides a set of modules which can help to create GUI applications (by using [Objectum-oriented design patterns/techniques][1]) in Vala more testable, understandable and more easily.

Using these modules and applying some [Architectural Patterns][2] used in the _Software Engineering_, such as [MVVM][4]/[Presentation Model][3], helps to separate the Graphical User Interface (GUI code) from the Business logic (Application or Domain model). 

This separation of roles allows the Designers to focus on UX and Design.

## Modules
 * [Core (dafcore)](https://github.com/ilap/dafcore): Core module of the DaF, which implements some part of the Visual Works Smalltalk Application Framework's Value Model and an own Data Binding solution.
 * [Data Validation (dafvalidation)](https://github.com/ilap/dafvalidation): Data Validation module
 * [Animation (dafui)](https://github.com/ilap/dafui): Simple Animation service for Gtk+3 based Widgets until Gtk+4 and Clutter 2.0 arrives. It similar to Clutter's functions, but in 2D, and includes property animation, timeline, keyframes. Also, it contains some components which extends functionality of Widgets (such as adding opacity/offset) and a _very-light-weight_ animated DeckLayout (similar to the Gtk's notebook widget just much simpler).
 * [IoC (dafioc)](https://github.com/ilap/dafioc): It implements IoC's Dependency Injection (Constructor Injection).
 * [Unit Tests (dafunit)](https://github.com/ilap/dafunit): Unit test module which uses Valadate classes integrated to DaF.

## Installation

Install the required toolchains.

```bash
$ sudo apt-get install valac cmake gobject-introspection libgtk-3-dev libgee-0.8-dev libglib2.0-dev libgirepository1.0-dev meson
$ ./build_all.sh
```

### Requirements

  - Ubuntu 18.04 or eLementary OS 5.0

## References


1. http://en.wikipedia.org/wiki/Object-oriented_design
2. http://en.wikipedia.org/wiki/Common_layers_in_an_information_system_logical_architecture
3. http://martinfowler.com/eaaDev/PresentationModel.html
4. http://en.wikipedia.org/wiki/Model_View_ViewModel
