#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<sys/utsname.h>
#include<fcntl.h>
// ./psx 
//  argv[0]       
// argc 1
/*
open directory /proc(opendir() system call)
open all subdirectories whose name is integer
inside that directory open comm file
display name inside that file

*/

int main(int argc,char * argv[])
{
      if(argc!=2)
     {
      printf("Missing Operands\n");
      printf("usage:./psx\n");
      return-1;
     }
   
     return 0;
}
