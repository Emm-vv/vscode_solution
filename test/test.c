#include <stdio.h>

int main() 
{
    char c[20] = "你好呀！";
    int a = 10;
    if(1){
        int a = 20;
        printf("%d\n",a);
    }
    printf("%d\n",a);
    printf("%lld\n",sizeof(long));
    printf("%s\n",c);
}