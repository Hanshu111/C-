/*
 * // 1.求两个数的最大值
#include<stdio.h>
int main()
{
    int a,b;
    printf("请输入两个数");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("最大数为:%d",a);
    else if(a<b) printf("最大数为:%d",b);
    return 0;
}

 #include<stdio.h>
int main()
{
    int a,b,max;
    scanf("%d%d",&a,&b);
    if(a>b) max=a;
    else max=b;
    printf("max=%d",max);
    return 0;
}


 // 2.求三个数的最大值
#include<stdio.h>
int main()
{
    int a,b,c;
    int max;
    printf("请输入三个数:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c) max=a;
        else if(b>a && b>c) max=b;
        else if(c>b && c>a) max=c;
    printf("最大值为:%d\n",max);
    return 0;
}

 #include<stdio.h>
int main()
{
    int a,b,c,max;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b) max=a;
    else max=b;
    if(c>max) max=c;
    printf("max=%d",max);
    return 0;
}

 // 3.已知能被4整除而不能被100整除的或者能被400整除的年份是闰年,则判断某一年是否为闰年。
#include<stdio.h>
int main()
{
    int year;
    printf("请输入年份:");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0)||(year%400==0))
        printf("该年是闰年");
    else printf("不是闰年");
    return 0;
}

 // 4.求一元二次方程a*(x*x)+b*x+c=0的根,其中a,b,c的值由键盘任意输入
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,x1,x2;
    scanf("%lf%lf%lf",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        x1=-b+ sqrt(d)/(2*a);
        x2=-b- sqrt(d)/(2*a);
        printf("两个不同的实根为:%lf%lf",x1,x2);
    }
    else if(d==0)
    {
        x1=x2=-b*(2*a);
        printf("有两个相同实根:%lf",x1);
    }
    else printf("无实根");
    return 0;
}


 // 5.从键盘输入三条边长,a,b,c 判断三边是否能构成三角形,若构成三角形则进一步判断该三角形是等腰三角形,等边三角形或一般三角形
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a+b>c) && (a+c>b) && (b+c>a))
    {
        if(a==b && b==c ) printf("该三角形为等边三角形");
        else if(a==b || a==c || b==c ) printf("该三角形为等腰三角形");
        else printf("该三角形为一般三角形");
    } else printf("该三边无法构成三角形");
    return 0;
}


 // 6.用if语句编写
#include<stdio.h>
int main()
{
    int x;
    int sum=0;
    printf("请输入x的值:");
    scanf("%d",&x);
    if(x<=0) sum+=7*x+10;
     else if(x>0 && x<=10) sum+=3*(x*x);
        else if(x>10 && x<=20) sum+=(-x);
            else if(x>20) sum+=30;
    printf("计算后结果为:%d\n",sum);
    return 0;
}

 // 7.输入一个1~7之间的任意整数,输出一个对应的星期的英文单词,要求用switch语句编写。
#include<stdio.h>
int main()
{
    int week;
    printf("请输入1~7:");
    scanf("%d",&week);
    switch (week) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;

    }
    return 0;
}
 * */
























