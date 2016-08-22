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
        printf("用法：./bubble_sort 数字1 数字2...\r\n");
    }
    int i = 0,input_array_len = (argc-1);
    int * input_char_array = (int *) malloc(input_array_len*sizeof(int));
    memset(input_char_array,0,input_array_len*sizeof(int));

    for(i = 0; i < input_array_len ; i++) 
    {
        input_char_array[i] = atoi(argv[i+1]);
    }
    
    //--展示普通冒泡排序的情况 
    printf("before my_bubble_sort \r\n ");
    print_int_array_content(input_char_array,input_array_len);
    my_bubble_sort(input_char_array,input_array_len);
    printf("after my_bubble_sort \r\n ");
    print_int_array_content(input_char_array,input_array_len);

    //--优化后的冒泡排序的情况
    for(i = 0; i < input_array_len ; i++) 
    {
        input_char_array[i] = atoi(argv[i+1]);
    }

    printf("before my_bubble_sort_optimize \r\n ");
    print_int_array_content(input_char_array,input_array_len);
    my_bubble_sort_optimize(input_char_array,input_array_len);
    printf("after my_bubble_sort_optimize \r\n ");
    print_int_array_content(input_char_array,input_array_len);


    free(input_char_array);
    input_char_array = NULL;
    return 0;
}

/*
冒泡排序:
    升序排序
算法原理：
    1、把数据分为非排序区（n）和排序区（0）。
    2、在非排序去中，比较相邻的元素，如果第一个元素比第二个元素大，交换他们
    3、从开始第一对到结尾的最后一对，此时最后一个元素就位最大的元素，排序区的元素为1，非排序区的元素为n-1
    4、重复上面第2,3步 的操作，直到无元素可排。
*/
void my_bubble_sort(int * int_array,int array_len )
{
    int i ,j,ncount =0;
    for( i=array_len ;i>0 ;i--)
    {
        for( j =0; j<(i-1); j++)
        {
            ncount  ++;
            if(int_array[j] > int_array[j+1])
            {
                int temp = int_array[j];
                int_array[j] = int_array[j+1];
                int_array[j+1] =  temp;
            }
        }
    }
    printf("my_bubble_sort swap %d times \r\n ",ncount);
}

/*
冒泡排序:
    升序排序,优化版本
算法原理：
    当在第3步骤 中无元素交换的情况下，说明已经排好序，无需再次比较
*/
void my_bubble_sort_optimize(int * int_array,int array_len )
{
    int i ,j,ncount =0;
    int flag = 0;
    for( i=array_len ;i>0 ;i--)
    {
        // 初始化状态都要进行排序
        flag = 0;
        for( j =0; j<(i-1); j++)
        {
            ncount ++;
            if(int_array[j] > int_array[j+1])
            {
                int temp = int_array[j];
                int_array[j] = int_array[j+1];
                int_array[j+1] =  temp;
                //仍然有数据交换，说明还需要回到第一个元素，再进行第二三步骤
                flag =  1;
            }
        }
        //判定已经没有元素交换 ，直接跳出排序
        if(flag == 0)
        {
            break;
        }
    }
    printf("my_bubble_sort_optimize swap %d times \r\n ",ncount);
}
