#include<stdio.h>
#include<stdlib.h>
//Calculated Memory allocation
int main()
{
  int iSize=0;
  int * Cptr=NULL;
printf("Enter a size of Memory:");
scanf("%d",&iSize);
//Step1:Allocate the memory
Cptr=(int*)calloc(iSize,sizeof(int));
if(Cptr==NULL)
{
    printf("Memory allocation unsucessfull.\n");
}
else
{
    printf("Memory Allocation Sucessfull.\n");

}

//Step2:use the memory

//step3:Deallocate the memory
free(Cptr);

    return 0;
}