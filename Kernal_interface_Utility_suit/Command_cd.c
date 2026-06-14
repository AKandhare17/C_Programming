#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
// ./cdx      directoryPath
//  argv[0]     argv[1]   
// argc 1

/*
Accept new directory path
call chdir() system call with that path
call getcwd() toc check changed path




*/

int main(int argc,char * argv[])
{
     int iRet=0;
     char Buffer[256]={'\0'};
     if(argc!=2)
     {
      printf("ERROR:INSufficient Arguments\n");
      printf("Use As:cdx Directorypath\n");
      return-1;
     }
     
     if(chdir(argv[1])==-1)
     {
          printf("Unable to change current directory\n");
          return-1;
     }
     else
     {
          getcwd(Buffer,sizeof(Buffer)-1);
          printf("Current directory changed to:%s\n",Buffer);
          //open
     }
     return 0;
}