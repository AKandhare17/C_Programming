#include<stdio.h>//comile and run both files togather
 int A;
int main()
{
    printf("%d",A);//Acessed value from Externstorageclass1.c  file(thorows warning)

    return 0;
}
//concept used for:
//1.sharing global variable across files
//2.linking with external libraries
//3.modular programming