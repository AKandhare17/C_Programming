#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
// ./touchx   Filename  
//  argv[0]  argv[1]       
// argc 2
/*
Acceept filename from command line
check if file existing or not
if exists then return;
if it does not exists then create.



*/

int main(int argc,char * argv[])
{
     if(argc!=2)
     {
      printf("ERROR:INSufficient Arguments\n");
      printf("Use As: touchX filename\n");
      return-1;
     }
     if(access(argv[1],F_OK)==0)
     {
          return 0;
     }
     else
     {
      creat(argv[1],0777);

     }

     return 0;
}