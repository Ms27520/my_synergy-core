# Synergy Core

This is the open source core component of Synergy, a keyboard and mouse sharing tool.

* [Download Synergy](https://symless.com/synergy/download)
* [Contact support](https://symless.com/synergy/contact)
* [Help articles](https://symless.com/synergy/help)

## Developer quick start

Instructions for those who want to contribute to development of Synergy Core.

*Windows:* Install the Visual Studio 'Desktop development with C++' workload.

**Dependencies:**
```
# Every OS (including Windows)
python scripts/install_deps.py

# Windows only (in addition to above)
python scripts/install_deps.py --only qt
```

**Configure:**
```
# Windows
cmake -B build --preset=windows-release

# macOS
cmake -B build --preset=macos-release

# Linux
cmake -B build --preset=linux-release
```

**Build:**
```
cmake --build build
```

**Test:**
```
./build/bin/unittests
```

## Developer resources

For people who want to contribute to the development of Synergy.

* [Getting started](https://github.com/symless/synergy-core/wiki/Getting-Started) - How to checkout the code from git and use the right branch.
* [Compiling](https://github.com/symless/synergy-core/wiki/Compiling) - Instructions on how to compile Synergy Core from source.
* [Text config](https://github.com/symless/synergy-core/wiki/Text-Config) - Write a text config file when running Synergy Core manually.
* [Command line](https://github.com/symless/synergy-core/wiki/Command-Line) - Go full manual and run Synergy Core from the command line.
* [Synergy Vintage](https://github.com/nbolton/synergy-vintage) - Use Synergy on operating systems available between 1995 and 2006.
