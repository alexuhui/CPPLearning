@echo off
rem 这里等号两边不能有空格
set folder_path=.\build

if not exist "%folder_path%" (
    echo %folder_path% 文件夹不存在，正在创建...
    mkdir "%folder_path%"
    echo  %folder_path% 文件夹已创建
)

rem 删除文件夹里的内容
for /d %%i in ("%folder_path%\*") do rmdir /s /q "%%i"
del /q "%folder_path%\*.*"


rem 源文件字符集
set argfi=-finput-charset=UTF-8  
rem 可执行程序字符集
set argfe=-fexec-charset=GB18030
rem 可执行程序输出路径
set app=-o .\build\app

rem 判断是否有需要包含的头文件
if exist .\include (
    g++ %argfi% %argfe% %app% -I include main.cpp
) else (
    g++ %argfi% %argfe% %app% main.cpp
)

.\build\app.exe 