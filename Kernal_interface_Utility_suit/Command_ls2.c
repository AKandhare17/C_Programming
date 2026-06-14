#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<dirent.h>
// ./lsx     -1
//  argc[0]  argc[1] 
// argc 2
/*



*/

int main(int argc,char * argv[])
{
   char * path=".";
    DIR * dp=NULL;
    int option=0;
    struct dirent * dobj;
    dp=opendir(path);
   option =argc;
   // 1  ls -a
   // 2 ls -i
   if(argc==1)
   {
    option=1;

   }
   else if(strcmp(argv[1],"-a")==0)
   {
     option=1;
   }
   else if(strcmp(argv[1],"-1")==0)
   {
     option=2;
   }

   if(dp==NULL)
    {
      printf("ERROR:Unable To Open Directory\n");
      return -1;
    }
    while((dobj=readdir(dp))!=NULL)
    {
     
      if(option==1)
      {
         printf("%s\n",dobj->d_name);
      }
      else if(option==2)
      {
         printf("%lu\t%s\n",dobj->d_ino,dobj->d_name);
      }
     

    }
    closedir(dp);




   return 0;
}