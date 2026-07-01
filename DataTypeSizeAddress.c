#include<stdio.h>
int imarks=45;
int main()
{
    char cvalue='s';
    int iValue=22;
    float fValue=90.66f;
    double dValue=80.753627;

    printf("Size of Integer:%lu\n",sizeof(iValue));
     printf("Size of Charecter:%lu\n",sizeof(cvalue));
      printf("Size of Float:%lu\n",sizeof(fValue));
       printf("Size of Double:%lu\n",sizeof(dValue));

       printf("Address of cvalue:%lu\n",&cvalue);
        printf("Address of iValue:%lu\n",&iValue);
         printf("Address of fValue:%lu\n",&fValue);
          printf("Address of dValue:%lu\n",&dValue);

    return 0;
}