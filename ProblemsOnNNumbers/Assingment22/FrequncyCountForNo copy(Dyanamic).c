#include<stdio.h>
#include<stdlib.h>
int Frequncy(int Arr[],int iLength,int No)
{
    int iCnt=0,iCount=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==No)
        {
            iCount++;
        }
    }
    return iCount;

}
int main()
{
    int iSize=0,iRet=0,iCnt=0,No=0;
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
     iRet=Frequncy(p,iSize,No);
     printf("Occurance of %d is: %d\n",No,iRet);
     free(p);

    return 0;
}