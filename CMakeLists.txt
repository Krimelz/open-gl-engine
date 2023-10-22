# CMakeList.txt: проект CMake для open-gl-engine; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("open-gl-engine")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (open-gl-engine "open-gl-engine.cpp" "open-gl-engine.h")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
