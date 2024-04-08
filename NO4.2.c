/*
 //1.输入半径,计算圆的面积
#include<stdio.h>
int main()
{
    float S,r;
    printf("请输入半径",&r);
    scanf("%f",&r);
    S=3.14159*r*r;
    printf("圆的面积为:.2%f",S);
    return 0;
}


//2.把华氏温度转化为摄氏温度,已知转化公式为: C=5/9(F-32),其中F是华氏温度值,C是摄氏温度值,F值由键盘输入
#include<stdio.h>
int main()
{
    double F,C;
    printf("请输入华氏温度");
    scanf("%lf",&F);
    C=(5%9)*(F-32);
    printf("摄氏温度值为:%lf",C);
    return 0;
}

改错后:
 #include<stdio.h>
int main()
{
    float F,C;
    printf("请输入华氏温度");
    scanf("%f",&F);
    C=5.0/9*(F-32);
    printf("摄氏温度值为:.2%f",C);
    return 0;
}



//3.任意输入一个四位正整数,将该数逆序打印输出
#include<stdio.h>
int main() {
    int a,b,c,d;
    printf("请输入四个整数:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("倒序结果为:\t%d\t%d\t%d\t%d",d,c,b,a);
    return 0;
}

更改后:
 #include<stdio.h>
int main()
{
    int n,a,b,c,d;
    printf("请输入四个整数:");
    scanf("%d",&n);
    a=n%10;
    b=n/10%10;
    c=n/100%10;
    d=n/1000;
    printf("倒序输出结果为:%d%d%d%d\n",a,b,c,d);
    return 0;
}


//4.从键盘上输入五名学生的成绩(实型),计算总成绩和平均成绩,输出结果保留2位小数
#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    float aver,sum=0.0;
    printf("输入五个学生的成绩:\n");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    sum+=a+b+c+d+e;
    aver=sum/5.0;
    printf("总成绩为:%.2f \t平均成绩为:%.2f \t",sum,aver);
    return 0;
}

//5.从键盘上为两个变量输入整数,交换两个变量的数值并且输出
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("请输入两个整数:");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("交换后两个整数的值为:%d\t%d",a,b);
    return 0;
}

 * */

























