#include<stdio.h>
struct box
{
    int length;
    int width;
    int height;
};
    void printBox(struct box x){
          printf("%d=length,%d=width,%d=height",x.length,x.width,x.height);
    }
    int dv(struct box w){
        int wa,l;
        wa=w.length*w.width*w.height;
        return wa;
    }
int main(){
    struct box s;
    int yu,a,b,c;
    printf("Enter Length: ");
    scanf("%d",&a);
    printf("Enter Width: ");
    scanf("%d",&b);
    printf("Enter Height: ");
    scanf("%d",&c);
    s.length=a;
    s.width=b;
    s.height=c;
    yu=dv(s);
    printf("Volume= %d",yu);

}