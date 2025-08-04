## Create building environment:
cmake -S . -B Release -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release -DCMAKE_TOOLCHAIN_FILE="cubeide-gcc.cmake"

## After this build with:
cmake --build Release

