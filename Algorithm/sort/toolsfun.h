/*
  *Copyright(C)
  *FileName:  
  *Author:  wally<wan.rui@qq.com>
  *Version:
  *Date: 
  *Description:  // 
  *Others:  http://blog.jobbole.com/11745/
  *Function List:  //
     1.…………
     2.…………
  *History:  //
     1.Date:
       Author:
       Modification:
     2.…………
*/
#ifndef TOOLSFUN_H
#define TOOLSFUN_H

//打印数组内容
void print_int_array_content(int *int_array,int array_len);

//冒泡排序方法
void my_bubble_sort(int * int_array,int array_len );
void my_bubble_sort_optimize(int * int_array,int array_len );


//插入排序
void my_insert_sort(int * int_array,int array_len );

//选择排序
void my_select_sort(int * int_array,int array_len );

//希尔排序
void my_shell_sort(int * int_array,int array_len )

#endif
