# emscripten-hello-world
A hello world on how you can easily create WebAssembly with glue code for a node project with [emscripten]
(git clone https://github.com/emscripten-core/emsdk.git).


## Prerequisties

### Install emscripten SDK
You can clone the emscripten-core repo somewhere on your system or you can make it a submodule of your project.
This repo contains the emscripten core as a git submodule.
[emscription Download and Install](https://emscripten.org/docs/getting_started/downloads.html#sdk-download-and-install)

### Clone this repo recusrively

Please clone this repo recursively, so you have to `emsdk` (emscripten) available, therefore type:


```
git clone https://github.com/yguenduez/emscripten-hello-world.git --recurse
```

### Update and Activate

Enter the directory install as well as activate the latest stable version of `emsdk`

```sh
cd emsdk
./emsdk install latest
./emsdk activate latest
```

### Make emsdk available in your PATH (use the one appropriate for your shell, e.g. fish/bash/etc.)

E.g. shell:
```sh
source ./emsdk_env.sh
```

## Building

Cd into the C sources, create a build directory and generate a makefile with cmake. Afterwards build it with make.

```sh
cd emscripten-hello-world/hello-world-c
mkdir build
cd build  
emcmake cmake ..  
make
```

## Running

If you have build the webassembly and its glue code successfully, then you can go to the root of the project and run the main.js script (which uses the above webassembly) like the following:

```sh
cd emscripten-hello-world
node main.js
```
