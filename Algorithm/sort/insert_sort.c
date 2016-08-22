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
        printf("用法：./insert_sort 数字1 数字2...\r\n");
    }
    int i = 0,input_array_len = (argc-1);
    int * input_char_array = (int *) malloc(input_array_len*sizeof(int));
    memset(input_char_array,0,input_array_len*sizeof(int));

    for(i = 0; i < input_array_len ; i++) 
    {
        input_char_array[i] = atoi(argv[i+1]);
    }
    
    //--展示插入排序的情况 
    printf("before my_insert_sort \r\n ");
    print_int_array_content(input_char_array,input_array_len);
    my_insert_sort(input_char_array,input_array_len);
    printf("after my_insert_sort \r\n ");
    print_int_array_content(input_char_array,input_array_len);


    free(input_char_array);
    input_char_array = NULL;
    return 0;
}


/*
插入排序:
    升序排序
算法原理：
    1、把数据分为非排序区（n-1）和排序区（1）。
    2、从非排序区域中，取出第一个元素与排序区中元素相比较，如果比排序区中取出来的元素要小，那么就直接把当前取出来的元素往后移动一位，直到大于等于或者已经到开始位置了，就放入当前比较位置的下一位。
    3、重复第2步骤。直到非排序区 无元素可操作。
*/
void my_insert_sort(int * int_array,int array_len )
{
    int i,j,temp;
    for(i  = 1 ;i < array_len ; i++)
    {
        //取出当前待排序的元素，放入到排序区中合适的位置。
        temp = int_array[i];

        for( j= i-1 ; j >=0 ;j--){
            //如果当前取出来的元素与排序区中取出来的元素要小，那么把取出来的元素往后移动一位。
            if(temp < int_array[j]  )
            {
                int_array[j+1] = int_array[j];
            }else{
                //当前元素已经比取出来比较的元素还要大，那么就放在该位置就可以了。
                int_array[j+1] = temp;
                break;
            }
        }
    }
}
