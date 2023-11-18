#include <stdio.h>
void avg(int a,int b,int c,int d,int e);
int  main()
{
    int a,b,c,d,e;
    printf("\n enter the integers:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    avg(a,b,c,d,e);
    return 0;   
}
void avg(int a,int b,int c,int d,int e)
{
    float t;
    t=(a+b+c+d+e)/5 ;
    printf("The avg is: %f",t);
}