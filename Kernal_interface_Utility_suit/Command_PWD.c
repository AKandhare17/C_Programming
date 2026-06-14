#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
// ./pwdx 
//  argv[0]       
// argc 1
/*
call system call getexd()
print result of getcwd()
*/

int main(int argc,char * argv[])
{
     char Buffer[1024]={'\0'};
      getcwd(Buffer,sizeof(Buffer));
      printf("%s\n",Buffer);


     return 0;
}
