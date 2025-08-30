#include<stdio.h>
#include<omp.h>


int main()
{

    int a[] = {1,2,3}; 
    int b[] = {1,2,3};
    int s = 3;
    int sum [3];


    
    #pragma omp parallel 
    {
    
     
    for(int i = 0 ;i < s;i++)
    {
        sum[i] = a[i] + b[i];
        printf("thread %d has iteration %d\n",omp_get_thread_num(),i);
    }

    }


    for(int  i = 0 ; i< s;i++)
    {
        printf("sum[%d] is %d\n",i,sum[i]);
    }
}
