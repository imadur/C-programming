#include<stdio.h>
void sum(int a,int b)
{
    printf("the result of the sum is:%d\n",a+b);
}
void sub(int a,int b,int c)
{
    printf("the result of the subtraction:%d\n",a+b+c);
}
int main()
{
    sub(1,2,4);
    sum(4,5);
    
}