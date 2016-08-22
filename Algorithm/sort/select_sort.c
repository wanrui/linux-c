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
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc,char *argv[])
{
    if(argc <= 1){
        printf("用法：./select_sort 数字1 数字2...\r\n");
    }
    int i = 0,input_array_len = (argc-1);
    int * input_char_array = (int *) malloc(input_array_len*sizeof(int));
    memset(input_char_array,0,input_array_len*sizeof(int));

    for(i = 0; i < input_array_len ; i++) 
    {
        input_char_array[i] = atoi(argv[i+1]);
    }
    
    //--展示选择排序的情况 
    printf("before my_select_sort \r\n ");
    print_int_array_content(input_char_array,input_array_len);
    my_select_sort(input_char_array,input_array_len);
    printf("after my_select_sort \r\n ");
    print_int_array_content(input_char_array,input_array_len);


    free(input_char_array);
    input_char_array = NULL;
    return 0;
}


/*
选择排序:
    升序排序:
    选择排序（Selection sort）是一种简单直观的排序算法。
    它的工作原理是每一次从待排序的数据元素中选出最小（或最大）的一个元素，
    存放在序列的起始位置，直到全部待排序的数据元素排完。 
    选择排序是不稳定的排序方.
算法原理：
    1、把数据分为非排序区（n）和排序区（0）。
    2、从非排序区域中，取出最小的元素，然后与非排序区的第一个元素进行交换，此时 ，非排序区数量变为n-1，排序区为1；
    3、重复第2步骤。直到非排序区 无元素可操作；
*/
void my_select_sort(int * int_array,int array_len )
{
    int i,j,temp;
    for(i  = 0 ;i < array_len ; i++)
    {
        int pos = i;
        temp = int_array[i];
        for( j = i+1; j < array_len ; j++)
        {
            //找到当前非排序区的最小元素的位置
            if(temp > int_array[j])
            {
                //记录当前最小的值，及位置
                temp = int_array[j];
                pos = j;
            }
        }
        //将最小的元素放到排序区
        if(i != pos)
        {
            temp = int_array[i];
            int_array[i] = int_array[pos];
            int_array[pos] = temp;
        }


    }
}
