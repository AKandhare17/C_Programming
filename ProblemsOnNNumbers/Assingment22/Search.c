#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool SearchNo(int Arr[],int iLength)
{
    int iCnt=0,no=11;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==no)
        {
            return true;
        }
       
    }
    return false;
   

}
int main()
{
    int iSize=0,iCnt=0;
    bool bRet=false;
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
     bRet=SearchNo(p,iSize);
     if(bRet==true)
     {
         printf("11 is present.\n");
     }
     else
     {
        printf("11 is not present.\n");
     }
    
     free(p);

    return 0;
}