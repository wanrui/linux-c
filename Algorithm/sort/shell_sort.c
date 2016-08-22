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
        printf("用法：./shell_sort 数字1 数字2...\r\n");
    }
    int i = 0,input_array_len = (argc-1);
    int * input_char_array = (int *) malloc(input_array_len*sizeof(int));
    memset(input_char_array,0,input_array_len*sizeof(int));

    for(i = 0; i < input_array_len ; i++) 
    {
        input_char_array[i] = atoi(argv[i+1]);
    }
    
    //--展示希尔排序的情况 
    printf("before my_shell_sort \r\n ");
    print_int_array_content(input_char_array,input_array_len);
    my_shell_sort(input_char_array,input_array_len);
    printf("after my_shell_sort \r\n ");
    print_int_array_content(input_char_array,input_array_len);


    free(input_char_array);
    input_char_array = NULL;
    return 0;
}


/*
希尔排序:
    升序排序:
算法原理：

*/
void my_shell_sort(int * int_array,int array_len )
{
    int i,j,temp;
    for(i  = 0 ;i < array_len ; i++)
    {

    }
}
