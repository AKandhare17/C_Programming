#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<string.h>
#include<fcntl.h>
// ./statx   Filename  
//  argv[0]  argv[1]       
// argc 2
/*
Accept filename from command line
call acess to check file present or not
call stat to get file metedata
display metadata




*/

int main(int argc,char * argv[])
{
     int iRet=0;
     if(argc!=2)
     {
      printf("ERROR:INSufficient Arguments\n");
      printf("Use As: statX filename\n");
      return-1;
     }
     if(access(argv[1],F_OK)==0)
     {
          struct stat sobj;
          iRet=stat(argv[1],&sobj);
          if(iRet==-1)
          {
               printf("ERROR:Unable to fetch Stataistical Information\n");
               return -1;
          }
          printf("File Name:%s\n",argv[1]);
          printf("File Size:%ld\n",(long)sobj.st_size);
            printf("Inode No:%ld\n",(long)sobj.st_ino);
          
     
     }
     else
     {
          printf("ERROR:File not Found\n");
          return -1;
      

     }

     return 0;
}