#include<stdio.h>
#include<stdlib.h>

int FirstOCC(int Arr[],int iLength,int No)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==No)
        {
            return iCnt;
        }
    }
    return -1;

}

int main()
{
    int iSize=0,iCnt=0,No=0;
    int iRet=0;
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
     printf("Enter no to be searched:");
     scanf("%d",&No);
     iRet=FirstOCC(p,iSize,No);
     if(-1==iRet)
     {
        printf("%d is Not present",No);
     }
     else
     {
         printf("%d is present At Index: %d",No,iRet);
     }
     
     free(p);

    return 0;
}