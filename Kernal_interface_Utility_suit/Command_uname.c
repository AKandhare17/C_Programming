#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<sys/utsname.h>
#include<fcntl.h>
// ./unamex 
//  argv[0]       
// argc 1
/*
call system call uname()
print information from utsname structure
*/

int main(int argc,char * argv[])
{
     int iRet=0;
    struct utsname uobj;//inbuilt structure object from sys/utsname
    iRet=uname(&uobj);
    if(iRet==-1)
    {
      printf("ERROR:Unable to fetch System Information\n");
    return -1;
    }
    else
    {
      printf("OS Name:%s\n",uobj.sysname);
     printf("OS Nodename:%s\n",uobj.nodename);
      printf("OS Version:%s\n",uobj.release);
    }



     return 0;
}
