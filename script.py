#!/usr/bin/python3.6
import sys
import psutil
import cpuinfo
print('总内存:')
men=psutil.virtual_memory()
print(str(men.total/1024/1024/1024)+'G')
print('磁盘大小:')
di=psutil.disk_usage('/')
print(str(di.total/1024/1024/1024)+'G')
print('cpu型号：'+str(cpuinfo.get_cpu_info()['brand_raw']))
