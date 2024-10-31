# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)

project ("Homework_10")

set(INCLUDE
	"inc/main.h"
	"inc/figure.h"
	"inc/function.h"
	"inc/game.h"
)

set(SRC
	"src/main.cpp"
	"src/function.cpp"
)

add_executable (Homework_10 
	${INCLUDE} 
	${SRC}
)

target_include_directories(Homework_10
        PUBLIC
        ./inc
        ./src
)