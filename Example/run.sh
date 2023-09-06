folder_path="./build"

# 检查文件夹是否存在
if [ ! -d "$folder_path" ]; then
    echo "${folder_path} 文件夹不存在，正在创建..."
    mkdir -p "$folder_path"  # 使用mkdir -p以便创建多级目录
    echo "${folder_path} 文件夹已创建"
# else
#     echo "${folder_path} 文件夹已存在"
fi

rm -rf $folder_path/*

# if [ -d "./include" ]; then 
    gcc -o ./build/app main.cpp -I./include/eigen-3.4.0/
# else
#     gcc -o ./build/app main.cpp
# fi

cd $folder_path
 ./app
