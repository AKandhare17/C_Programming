#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<sys/utsname.h>
#include<fcntl.h>
// ./rmxx   Sourcepath
//  argv[0]  argv[1]     
// argc 2
/*
call system call uname()
print information from utsname structure
*/

int main(int argc,char * argv[])
{
     int iRet=0;
     if(argc!=2)
     {
      printf("Missing Operands\n");
      printf("usage:./rm Sourcepath\n");
      return-1;
     }
     iRet=unlink(argv[1]);
     if(iRet==-1)
     {
      printf("cannot remove:%s No such file or directory\n",argv[1]);
     }
     else
     {
      printf("%s File gets Deleted Sucessfully\n",argv[1]);
     }
    


     return 0;
}
