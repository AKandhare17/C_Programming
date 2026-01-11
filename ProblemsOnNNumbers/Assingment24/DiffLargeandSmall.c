#include<stdio.h>
#include<stdlib.h>
int Diffrance(int Arr[],int iLength)
{
    int iCnt=0;
    int iMax=Arr[0];
    int iMin=Arr[0];
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
        else if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
    }
    printf("imax:%d  imin:%d\n",iMax,iMin);
    return (iMax-iMin);


}
int main()
{
    int iSize=0,iRet=0,iCnt=0,iValue=0;
    int*P=NULL;
    printf("Enter number of elements:");
    scanf("%d",&iSize);
    P=(int*)malloc(iSize*sizeof(int));
    if(P==NULL)
    {
        printf("Resource Allocation Unsucessfull\n");
        return -1;
    }
    printf("Enter %d Elements.\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter Element%d:",iCnt+1);
        scanf("%d",&P[iCnt]);
    }
    iRet=Diffrance(P,iSize);
    printf("Differance is:%d",iRet);
    free(P);

    return 0;
}