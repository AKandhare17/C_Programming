#include<stdio.h>
int main()
{
    int Arr[5]={10,20,30,40,50};
   // (address could be change when recompile)
    printf("Arr:%lu\n",Arr);//284
    printf("&Arr:%lu\n",&Arr);//284
    printf("&Arr[0]:%lu\n",&Arr[0]);//284

    return 0;
}