#include<sys/vfs.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;
void getcpuinfo()
{
FILE *fp=fopen("/proc/cpuinfo","r");
   if(fp==NULL)
      {printf("fail");
      exit(0);
      }

char ch;
while(!feof(fp))
{
ch=fgetc(fp);
cout<<ch;
}
fclose(fp);
}





void getMemoryInfo()
{
    FILE *fp = fopen("/proc/meminfo", "r");
    if(NULL == fp)
        printf("failed to open meminfo\n");
    char ch;
    while(!feof(fp))
    {
      
        ch=fgetc(fp);
        cout<<ch;
    }
    fclose(fp);
}

int main()
{
getcpuinfo();
getMemoryInfo();
struct statfs diskInfo;
		statfs("/", &diskInfo);
		unsigned long long totalBlocks = diskInfo.f_bsize;
		unsigned long long totalSize = totalBlocks * diskInfo.f_blocks;
		size_t mbTotalsize = totalSize>>20;
		unsigned long long freeDisk = diskInfo.f_bfree*totalBlocks;
		size_t mbFreedisk = freeDisk>>20;
		printf ("total=%dGB, free=%dGB\n", mbTotalsize/1024, mbFreedisk/1024);

//;
//sjkd
}
