#include<stdio.h>
int main()
{
    double dArr[]={10.0,20.0,30.0,40.0};
    printf("sizeof dArr:%lu\n",sizeof(dArr));

    //dArr++;(we cannot directly change base address of array)Error

    return 0;
}