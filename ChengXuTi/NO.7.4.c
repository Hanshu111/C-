/*
 * // 1.�������������ֵ
#include<stdio.h>
int main()
{
    int a,b;
    printf("������������");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("�����Ϊ:%d",a);
    else if(a<b) printf("�����Ϊ:%d",b);
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


 // 2.�������������ֵ
#include<stdio.h>
int main()
{
    int a,b,c;
    int max;
    printf("������������:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c) max=a;
        else if(b>a && b>c) max=b;
        else if(c>b && c>a) max=c;
    printf("���ֵΪ:%d\n",max);
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

 // 3.��֪�ܱ�4���������ܱ�100�����Ļ����ܱ�400���������������,���ж�ĳһ���Ƿ�Ϊ���ꡣ
#include<stdio.h>
int main()
{
    int year;
    printf("���������:");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0)||(year%400==0))
        printf("����������");
    else printf("��������");
    return 0;
}

 // 4.��һԪ���η���a*(x*x)+b*x+c=0�ĸ�,����a,b,c��ֵ�ɼ�����������
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
        printf("������ͬ��ʵ��Ϊ:%lf%lf",x1,x2);
    }
    else if(d==0)
    {
        x1=x2=-b*(2*a);
        printf("��������ͬʵ��:%lf",x1);
    }
    else printf("��ʵ��");
    return 0;
}


 // 5.�Ӽ������������߳�,a,b,c �ж������Ƿ��ܹ���������,���������������һ���жϸ��������ǵ���������,�ȱ������λ�һ��������
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a+b>c) && (a+c>b) && (b+c>a))
    {
        if(a==b && b==c ) printf("��������Ϊ�ȱ�������");
        else if(a==b || a==c || b==c ) printf("��������Ϊ����������");
        else printf("��������Ϊһ��������");
    } else printf("�������޷�����������");
    return 0;
}


 // 6.��if����д
#include<stdio.h>
int main()
{
    int x;
    int sum=0;
    printf("������x��ֵ:");
    scanf("%d",&x);
    if(x<=0) sum+=7*x+10;
     else if(x>0 && x<=10) sum+=3*(x*x);
        else if(x>10 && x<=20) sum+=(-x);
            else if(x>20) sum+=30;
    printf("�������Ϊ:%d\n",sum);
    return 0;
}

 // 7.����һ��1~7֮�����������,���һ����Ӧ�����ڵ�Ӣ�ĵ���,Ҫ����switch����д��
#include<stdio.h>
int main()
{
    int week;
    printf("������1~7:");
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
























