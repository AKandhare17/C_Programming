#include<stdio.h>
#include<stdlib.h>

int productOfOdd(int Arr[],int iLength)
{
    int iCnt=0,Mul=1;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2!=0)
        {
            Mul=Mul*Arr[iCnt];
        }
    }
    return Mul;
    

}

int main()
{
    int iSize=0,iCnt=0,iRet=0;
    
    int * p=NULL;

    printf("Enter No Of Elements:");
    scanf("%d",&iSize);
    p=(int*)malloc(iSize*sizeof(int));
    if(NULL==p)
    {
        printf("Unable To allocate memory.");
        return-1;
    }
     printf("Enter %d Elements\n",iSize);
     for(iCnt=0;iCnt<iSize;iCnt++)
     {
        printf("Enter Element %d:\t",iCnt+1);
        scanf("%d",&p[iCnt]);
     }
    

    printf("Product of Odd Elements is:%d",productOfOdd(p,iSize));

     
     free(p);

    return 0;
}