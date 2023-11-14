cmake_minimum_required(VERSION 3.6)

project(learn-algo)

set(CHAPTER_DIRS
        computational_complexity
)

# Find all source files
foreach (CHAPTER_DIR ${CHAPTER_DIRS})
    file(GLOB CHAPTER_FILES ${CHAPTER_DIR}/*.cpp)
    foreach (CHAPTER_FILE ${CHAPTER_FILES})
        get_filename_component(CHAPTER_FILE_NAME ${CHAPTER_FILE} NAME_WE)
        add_executable(${CHAPTER_DIR}-${CHAPTER_FILE_NAME} ${CHAPTER_FILE})
    endforeach ()
endforeach ()

file(GLOB_RECURSE COMMON_SOURCES common/*.cpp common/*.h)
include_directories(common)
add_library(common ${COMMON_SOURCES})
set_target_properties(common PROPERTIES LINKER_LANGUAGE CXX)
link_libraries(common)
