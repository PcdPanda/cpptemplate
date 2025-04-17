# Set up executable
1. Write cpp and hpp files and put them at correct places
2. Add important variables in CmakeLists
```
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)  # Set export directory
set(TARGET_NAME main) # Add the executable target
```
3. `mkdir build && cd build`
4. `cmake ..`
5. `make`
6. `cd ../bin`
7. `./main`