#include<stdio.h>
int main()
{
    int Arr[4]= {10,20,30,40};
    int Brr[]={10,20,30,40,50,60,70};
    int Crr[6]={10,20,30};

    printf("size of Arr:%lu\n",sizeof(Arr));//16
      printf("size of Brr:%lu\n",sizeof(Brr));//28
        printf("size of Crr:%lu\n",sizeof(Crr));//24

    return 0;
}