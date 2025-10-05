# Version 3.13 or later is required for calling `target_link_libraries` in subdirectories.
cmake_minimum_required(VERSION 3.22)

set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)

set(CMAKE_ASM_SOURCE_FILE_EXTENSIONS "s;850")
# system for all compile 
project(rh850 LANGUAGES C ASM)
enable_language(ASM)

set(ECU_TARGET_NAME rh850_p1xc)

set(CMAKE_VERBOSE_MAKEFILE ON)


# cache 加速
# find_program(CCACHE_PROGRAM ccache)
# if(CCACHE_PROGRAM)
#     set(CMAKE_C_COMPILER_LAUNCHER "ccache")
# endif()

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Include the corresponding build configuration file
include(${CMAKE_CURRENT_LIST_DIR}/cmake_scripts/ecu_cfg.cmake)

# Include the corresponding compile configuration file 
include(${CMAKE_CURRENT_LIST_DIR}/cmake_scripts/toolchain_cfg.cmake)

#  列出所有缓存变量
get_cmake_property(cache_vars CACHE_VARIABLES)
foreach(var IN LISTS cache_vars)
    message("${var} = $CACHE{${var}}")
endforeach()

if(PRE_SCRIPT)
  # add_custom_command(PRECOMMAND ${PRE_SCRIPT_PATH})  # 执行预处理脚本
endif()

# 检测硬件版本
if(HW_VERSION STREQUAL "V2")
    add_compile_definitions(DEBUG_MODE HW_VERSION=2)
elseif(HW_VERSION STREQUAL "V0")
    add_compile_definitions(DEBUG_MODE HW_VERSION=0)
endif()

if(PMIC_WINDOW_WDG_ON STREQUAL "ON")
    add_compile_definitions(PMIC_WINDOW_WDG_ON)
elseif(PMIC_WINDOW_WDG_ON STREQUAL "OFF")
    
endif()


set(CMAKE_BUILD_TYPE ${BUILD_TYPE})
add_compile_options(${CUSTOM_FLAGS})                 # 传递多值参数

set(CMAKE_EXECUTABLE_SUFFIX ".elf")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

set(CMAKE_C_FLAGS          "${ECU_C_FLAGS}")
set(CMAKE_ASM_FLAGS        "${ECU_ASM_FLAGS}")
set(CMAKE_C_ARCHIVE_CREATE "${ECU_AR_FLAGS}")
set(CMAKE_EXE_LINKER_FLAGS ${ECU_LINKER_FLAGS})

message("CMAKE_ASM_SOURCE_FILE_EXTENSIONS ${CMAKE_ASM_SOURCE_FILE_EXTENSIONS}")

add_executable(${ECU_TARGET_NAME} "")

add_subdirectory(Bsw)
add_subdirectory(Mcal)
add_subdirectory(Micro)
target_link_libraries(${ECU_TARGET_NAME}  ${ECU_USE_COMP_LIBS})