@echo off
rem ����Ⱥ����߲����пո�
set folder_path=.\build

if not exist "%folder_path%" (
    echo %folder_path% �ļ��в����ڣ����ڴ���...
    mkdir "%folder_path%"
    echo  %folder_path% �ļ����Ѵ���
)

rem ɾ���ļ����������
for /d %%i in ("%folder_path%\*") do rmdir /s /q "%%i"
del /q "%folder_path%\*.*"


rem Դ�ļ��ַ���
set argfi=-finput-charset=UTF-8  
rem ��ִ�г����ַ���
set argfe=-fexec-charset=GB18030
rem ��ִ�г������·��
set app=-o .\build\app

rem �ж��Ƿ�����Ҫ������ͷ�ļ�
if exist .\include (
    g++ %argfi% %argfe% %app% -I include main.cpp
) else (
    g++ %argfi% %argfe% %app% main.cpp
)

.\build\app.exe 