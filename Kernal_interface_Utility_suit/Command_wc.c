#include<stdio.h>
#include<unistd.h>
#include<stdbool.h>
#include<string.h>
#include<string.h>
#include<fcntl.h>
// ./wcx  -l  filename
//  argv[0]     argv[1]   argv[2]
// argc 1

/*
Accept filename 
give option such as -l (count new lines)
-w (count word)
-c (bytes count)

*/

int main(int argc,char * argv[])
{
     int iRet=0;
     int newLineCount=0,bytesCount=0,wordCount=0;
     int fd=0;
     bool inword=false;
     char data;
     if(argc!=3)
     {
      printf("ERROR:INSufficient Arguments\n");
      printf("Use As:wcx option filename\n");
      return-1;
     }

     if(access(argv[2],F_OK)==0)
    {
         fd=open(argv[2],O_RDONLY);
         if(fd<0)
         {
            printf("ERROR:Cannot Open File\n");
            close(fd);
            return-1;

         }
            
            while (read(fd,&data,1)!=0)
            {
                bytesCount++;

                   if(data == '\n')
                   {
                    newLineCount++;
                    inword=false;
                   }
                else if(data == ' '|| data == '\t')
                {
                    inword=false;
                }
                else if(inword == false)
                {
                    inword=true;
                    wordCount++;

                }

            }
            close(fd);

        if(strcmp(argv[1],"-l")==0)
         {
        
           printf("Total Lines:%d\n",newLineCount);
            
        }

        if(strcmp(argv[1],"-c")==0)
        {
            printf("No Of Bytes:%d\n",bytesCount);

        }

        if(strcmp(argv[1],"-w")==0)
        {
            printf("No Of Words:%d\n",wordCount);

     }
    } 
     else
     {
        printf("ERROR : File %s Not Exists\n",argv[2]);
        return -1;
        
     }
     return 0;
}