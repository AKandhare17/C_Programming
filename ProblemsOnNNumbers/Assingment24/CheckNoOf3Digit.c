#include<stdio.h>
#include<stdlib.h>
void Digits(int Arr[],int iLength)
{
    int iCnt=0,no=0;
    int temp=0;
    int iCount=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        no=Arr[iCnt];
        iCount=0;
        while(no!=0)
        {
            temp=no%10;
            no=no/10;
            iCount++;
            
        }
        if(iCount==3)
        {
       printf("%d\n",Arr[iCnt]);
        }
        
       
    }
   


}
int main()
{
    int iSize=0,iCnt=0;
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
    Digits(P,iSize);

    free(P);

    return 0;
}