#cmake 最低版本
cmake_minimum_required(VERSION 3.15)

#工程名
project(opt_test)
# 执行程序名
set(APP_NAME FileTransfer)

# ------------- 目标平台
if(CMAKE_SYSTEM_NAME STREQUAL "Windows")
    set(IS_WIN TRUE)
elseif(CMAKE_SYSTEM_NAME STREQUAL "Linux")
    set(IS_LINUX TRUE)
elseif(CMAKE_SYSTEM_NAME STREQUAL "Darwin")
    set(IS_MAC TRUE)
endif()

if(IS_MAC)
    # macOS
    message(FATAL_ERROR "not support macOS")
endif()

# 平台标识 宏
if(IS_WIN)
    set(_TAG win)
    add_definitions(-D_WIN)  # windows 平台自定义 _WIN 宏 
elseif(IS_LINUX)
    set(_TAG linux)
    add_definitions(-D_LINUX)  # linux 平台自定义 _LINUX 宏
elseif(IS_MAC)
    set(_TAG mac)
    add_definitions(-D_MAC)
endif()

# 头文件目录
set(HEAD_PATH ${CMAKE_CURRENT_SOURCE_DIR}/include)
# 执行程序目录
set(EXEC_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/${_TAG})

# -------- 第三方库
# 判断目标平台
set(THIRD_PARTY_PATH ${CMAKE_CURRENT_SOURCE_DIR}/third_party/${_TAG})

# --------------- 静态库路径
# 静态库输出目录
set(STATIC_LIB_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib/${_TAG})
set(LIBRARY_OUTPUT_PATH ${STATIC_LIB_PATH}) 
# 静态库头文件目录
set(STATIC_LIB_HEAD_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib/include)

# 清空静态库头文件目录
file(REMOVE_RECURSE ${STATIC_LIB_HEAD_PATH})

# ------------- 生成静态库
# ---- getopt (windows)
# if (IS_WIN)
#     # --将静态库引用文件拷贝到静态库头文件目录
#     file(COPY ${THIRD_PARTY_PATH}/getopt/getopt.h DESTINATION ${STATIC_LIB_HEAD_PATH})
#     set(STATIC_OPT_LIB getopt)
#     add_library(${STATIC_OPT_LIB} STATIC ${THIRD_PARTY_PATH}/getopt/getopt.c)
#     # 链接静态库
#     link_libraries(${STATIC_OPT_LIB})
# endif()

# 指定链接静态库路径
link_directories(${STATIC_LIB_PATH})
# 指定静态库头文件路径
include_directories(${STATIC_LIB_HEAD_PATH})


# 指定源代码路径
aux_source_directory(./src/ SRC)
# 指定头文件路径
include_directories(${HEAD_PATH})

# 指定输出路径
set(EXECUTABLE_OUTPUT_PATH ${EXEC_PATH})
# 生成执行文件
add_executable(${APP_NAME} ${SRC})