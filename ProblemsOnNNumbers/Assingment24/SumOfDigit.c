#include<stdio.h>
#include<stdlib.h>
void DigitSum(int Arr[],int iLength)
{
    int iCnt=0,no=0;
    int temp=0,iSum=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        no=Arr[iCnt];
        iSum=0;
        while(no!=0)
        {
            temp=no%10;
            iSum=iSum+temp;
            no=no/10;
            
            
        }
        printf("%d\t",iSum);
      
        
       
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
    DigitSum(P,iSize);

    free(P);

    return 0;
}