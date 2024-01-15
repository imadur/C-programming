#include<stdio.h>
int main()
{
    int a,n;
    printf("enter a number: ");
    scanf("%d",&a);
    printf("enter a number again: ");
    scanf("%d",&n);
    if(a>n)
    {
        printf("%d is bigger than %d\n",a,n);
    }
    else if("a<n")
    {
        printf("%d is bigger than %d\n",n,a);
    }
    else{
        printf("Two numbers are equal\n");
    }
    return 0;
}