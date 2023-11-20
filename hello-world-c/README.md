## project structure
```
build/  
include/  
src/  
public/  
CMakeLists.txt  
```
* Build directory starts empty, place header (.h) files inside /include and source (.cpp) files inside /src.  
* The public folder is where the output files will go, also keep the index.html, images and css here too.  
* CMakeLists.txt stays the root directory.

* In the root directory, set the CMAKE Toolchain file by running: `CMAKE_TOOLCHAIN_FILE=yourPathToTheSDK/emsdk/upstream/emscripten/cmake/Modules/Platform/Emscripten.cmake`	
(this is not needed if you run it from within the repo folder)

## emsdk
for usage of emscripten see [emscripten-hello-world](../emscripten-hello-world/README.md)

## Create makefiles for wasm
```
mkdir build
cd build  
emcmake cmake ..  
```
./

## compile
```
make
```

## run
in the public folder a webassembly a.wasm.wasm and a javascript a.wasm.js is compiled. so a is the name of the executable specified in CMakeLists.txt
you can run the javascript which calls the webassebly with node
```
cd ..
cd public
node a.wasm.js
```

## create makefile for js  
if you like to, but there is no reason for it.
in this case there will be create only one file a.js
```
cd build  
emcmake cmake .. -DJS_ONLY=ON  
```