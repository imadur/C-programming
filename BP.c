#include<stdio.h>
int main(){
    int a,b;
    printf("Enter The 1st Number:");
    scanf("%d",&a);
    printf("Enter The 2nd Number:");
    scanf("%d",&b);
    if(a>=b)
    {
        printf("The Biggest Number is: %d\n",a);
    }
    else{
        printf("The Biggest Number is: %d\n",b);
    }
    return 0;

}