#include<stdio.h>
int FindLargest(int x, int y,int z)
{
    if(x<y)
    {
      if(y<z)
    {
       return z;
    }    
    return y;

    }
    else
    {
     return x;
    }
    


    

}
int main()
{
    int a,b,c,result;
    printf("Enter Three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    result=FindLargest(a,b,c);
    printf("Lagest no is:%d",result);

    return 0;
}