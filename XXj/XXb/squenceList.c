//遍历元素
#include<stdio.h>
#include<stdlib.h>  //库函数
int main()
{
    int i,*p;   //p:基地址
    p=(int *)malloc(10*sizeof(int));    //动态分配10个int型变量的内存空间
    for(i=0;i<10;i++)
    {
        p[i]=i;
        printf("%d\t",p[i]);
    }
    printf("\n");
    free(p);    //释放内存
    return 0;
}





















