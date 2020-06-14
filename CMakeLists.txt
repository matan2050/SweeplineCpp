cmake_minimum_required(VERSION 3.17)

project("SweeplineCpp" CXX)

add_library( SweeplineCpp STATIC
	src/Containers.cpp
	include/Containers.h
	include/GeometryTypes.h )