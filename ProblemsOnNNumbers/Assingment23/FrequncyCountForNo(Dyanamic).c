#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr[],int iLength,int No)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==No)
        {
            return TRUE;
        }
    }
    return FALSE;

}

int main()
{
    int iSize=0,iCnt=0,No=0;
    BOOL bRet=FALSE;
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
     bRet=Check(p,iSize,No);
     if(TRUE==bRet)
     {
        printf("Number is present");
     }
     else
     {
         printf("Number Not is present");
     }
     
     free(p);

    return 0;
}