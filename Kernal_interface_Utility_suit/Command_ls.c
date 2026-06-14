#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<dirent.h>
// ./lsx     
//  argc[0]   
// argc 1
/*
open current directory(".")
read all entries from that directory
read all filenames from that directorty
close directory



*/

int main(int argc,char * argv[])
{
   char * path=".";
    DIR * dp=NULL;
    struct dirent * dobj;
    dp=opendir(path);
    if(dp==NULL)
    {
      printf("ERROR:Unable To Open Directory\n");
      return -1;
    }
    while((dobj=readdir(dp))!=NULL)
    {
      printf("%s\n",dobj->d_name);

    }
    closedir(dp);




   return 0;
}