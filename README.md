# emscripten-hello-world
A hello world on how you can easily create WebAssembly with glue code for a node project with [emscripten]
(git clone https://github.com/emscripten-core/emsdk.git).


## install emscripten SDK
you can clone the emscripten-core repo somewhere on your system or you can make it a submodule of your project.
This repo contains the emscripten core as a git submodule.
[emscription Download and Install](https://emscripten.org/docs/getting_started/downloads.html#sdk-download-and-install)

### Get the emsdk repo
```sh
git clone https://github.com/emscripten-core/emsdk.git
```

### Enter that directory
```sh
cd emsdk
```

### Fetch the latest version of the emsdk (not needed the first time you clone)
```sh
git pull
```

### Download and install the latest SDK tools.
```sh
./emsdk install latest
```

### Make the "latest" SDK "active" for the current user. (writes .emscripten file)
```sh
./emsdk activate latest
```

### Activate PATH and other environment variables in the current terminal
```sh
source ./emsdk_env.sh
```

# hello world c
## build
### Create makefiles for wasm
```
mkdir build
cd build  
emcmake cmake ..  
```

### compile
```
make
```

## run
```
node main.js
```

# hello world connecting c++
