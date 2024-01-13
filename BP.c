#include<stdio.h>
int main(){
    int a,b;
    printf("Enter The 1st Number:");
    scanf("%d",&a);
    printf("Enter The 2nd Number:");
    scanf("%d",&b);
    if(a>=b)
    {
        printf("1st number is the Biggest");
    }
    else{
        printf("2nd number is the Biggest");
    }
    return 0;

}