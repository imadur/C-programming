#include<stdio.h>


struct table
{
    int length;
    int width;
};

void printTable(struct table t) {
    printf("lend = %d, wid = %d", t.length, t.width);
}


struct table add(struct table a, struct table b) {
    struct table k;
    k.length=a.length+b.length;
    k.width=a.width+b.width;
    return k;

}


int main() {
    int a = 4;
    //struct table t;
    //t.length = 2;
    //t.width = 3;
    struct table j,i;
    j.length=7;
    j.width=9;
    i.length=5;
    i.width=3;







    struct table res;
    //res = 
    res=add(j,i);
    printTable(res);
}