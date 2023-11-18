#include <stdio.h>
int main()
{
    int a = 100;
    int* ptra = &a;
    printf("the address of pointer is %p\n",&ptra);
    printf("the address of a is %p\n", &a);
    printf("the address of a is %p\n", ptra);
    printf("the value of a is %d\n",a);
    printf("the value of a is %d\n", *ptra);
    
    return 0;
}