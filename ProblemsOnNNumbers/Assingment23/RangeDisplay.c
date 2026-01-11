#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int start,int end)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]>=start)&&(Arr[iCnt]<=end))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
    

}

int main()
{
    int iSize=0,iCnt=0,iStart=0,iEnd=0;
    
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
     printf("Enter Starting Range:\n");
     scanf("%d",&iStart);

     printf("Enter End Of Range:\n");
     scanf("%d",&iEnd);

     Range(p,iSize,iStart,iEnd);
     
     free(p);

    return 0;
}