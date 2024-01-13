#include<stdio.h>
int aat(int flb,int vlc){
    int ik;
    ik=flb-vlc;
    return ik;
}
int main()
{
    int j=9,z=8,sk;
    sk=aat(j,z);
    printf("%d",sk);
}