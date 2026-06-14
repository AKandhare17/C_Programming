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
void displayPermissions(mode_t m)
{
     char arr[11]="-----------";
    if( S_ISDIR(m)) arr[0]='d';//for directory
    if( S_ISLNK(m)) arr[0]='l';//for link


    //regular file permissions
     if(m & S_IRUSR) arr[1]='r';
      if(m & S_IRUSR) arr[2]='w';
        if(m & S_IRUSR) arr[3]='x';

          if(m & S_IRGRP) arr[4]='r';
           if(m & S_IRGRP) arr[5]='w';
            if(m & S_IRGRP) arr[6]='x';

          if(m & S_IROTH) arr[7]='r';
           if(m & S_IROTH) arr[8]='w';
            if(m & S_IROTH) arr[9]='x';

printf("File Permission:%10s\n",arr);


}


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
            displayPermissions(sobj.st_mode);
          
     
     }
     else
     {
          printf("ERROR:File not Found\n");
          return -1;
      

     }

     return 0;
}