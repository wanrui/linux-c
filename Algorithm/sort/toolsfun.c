/*
  *Copyright(C)
  *FileName:  
  *Author:  wally<wan.rui@qq.com>
  *Version:
  *Date: 2016年8月22日
  *Description:  // 
  *Others:  //
  *Function List:  //
     1.…………
     2.…………
  *History:  //
     1.Date:
       Author:
       Modification:
     2.…………
*/
#include "toolsfun.h"
#include <stdio.h>

/*
输出数组中所有的数据
*/
void print_int_array_content(int *int_array,int array_len)
{
    int i = 0;
    printf("The array elements is : ");
    for( i=0; i < array_len ; i ++)
    {
        printf(" %d  ", i, int_array[i]);
    }
    printf("\r\n");
}