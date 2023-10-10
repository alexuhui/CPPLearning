### 工具 
[Compiler Explorer](https://godbolt.org/)

### 1.2 cpu 眼里的程序运行
```cpp
#include <stdio.h>
#include <stdlib.h>

char a[] = "password";

int main()
{
    int b = 2;
    int *c = (int*)malloc(4);
    *c = 0x1122334;

    printf("%p  %p   %p  %p\n", &a, &b, c, main);
    return 0;
}
```

总结：<br>
- 不要将密码写在代码中，可能被破解
