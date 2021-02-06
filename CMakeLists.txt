cmake_minimum_required(VERSION 3.13.0)
project(BlueNoiseGenerator)

file(GLOB SRC
	"*.h"
	"*.cpp"
)

add_executable(
	BlueNoiseGenerator ${SRC}
)