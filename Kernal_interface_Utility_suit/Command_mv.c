#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
// ./mvx     Source path   Dest path
//  argc[0]  argc[1]      argc[1]    
// argc 3
/*

*/
int main(int argc,char * argv[])
{
     int FdSrc=0,FdDest=0,iRet=0;
     
   if(argc!=3)
   {
    printf("ERROR:Insufficient Arguments\n");
    printf("Use Command As: ./mvx Sourcepath destinationpath\n");
    return -1;
   }
   if(rename(argv[1],argv[2])==-1)
   {
    printf("ERROR:Unable to move\n");
    return -1;
   }
   

    return 0;
}