#include<stdio.h>
int main()
{
    int Arr[5]={10,20,30,40,50};
   // (address could be change when recompile)
   printf("Sizeof Arr:%lu\n",sizeof(Arr));//20 bytes
    printf("Arr:%lu\n",Arr);//284
    printf("&Arr:%lu\n",&Arr);//284
    printf("&Arr[0]:%lu\n",&Arr[0]);//284
    printf("Arr+1:%lu\n",(Arr+1));//288
    printf("(&Arr)+1:%lu\n",(&Arr)+1);//304(incresed by its whole size)

    return 0;
}