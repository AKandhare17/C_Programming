#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
// ./cpx     Source.txt   Dest.txt
//  argc[0]  argc[1]      argc[1]    
// argc 3
/*
open source file for reading
create destination file
read data from Source file
write it into Destination file
close both files




*/
#define MAX_BUFFER_SIZE 1024
int main(int argc,char * argv[])
{
     int FdSrc=0,FdDest=0,iRet=0;
     char Buffer[MAX_BUFFER_SIZE]={'\0'};
   if(argc!=3)
   {
    printf("ERROR:Insufficient Arguments\n");
    printf("Use Command As: ./cpx Sourcefilename destinationFilename\n");
    return -1;
   }
   memset(Buffer,'\0',sizeof(Buffer));
   FdSrc=open(argv[1],O_RDONLY);
   if(FdSrc<0)
   {
    printf("ERROR:Unable to open Source File:%s\n",argv[1]);
    return -1;
   }
  FdDest=creat(argv[2],0777);
  if(FdDest<0)
  {
    printf("ERROR:Unable to create Destination File:%s\n",argv[2]);
    close(FdSrc);
    return-1;
  }
  while((iRet=read(FdSrc,Buffer,sizeof(Buffer)))!=0)
  {
    write(FdDest,Buffer,iRet);
     memset(Buffer,'\0',sizeof(Buffer));


  }
  printf("Sucess:Copying of File Done\n");
  close(FdDest);
  close(FdSrc);


    return 0;
}