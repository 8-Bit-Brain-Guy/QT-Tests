# QT-Tests: Repository for testing gui development using QT
<br>
<br>

# Kompilieren und ausführen:
<br>

## 1. Erstelle eine CMake-Projektdatei (z.B. CMakeLists.txt):
```
cmake_minimum_required(VERSION 3.5)

project(example LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

add_executable(example main.cpp)
target_link_libraries(example Qt5::Widgets)
```

<br>
<br>

## 2. Erstelle ein Build-Verzeichnis und kompiliere das Projekt:
```
mkdir build
cd build
cmake ..
make
```

<br>
<br>

## 3. Führe das Programm aus:
`./example`