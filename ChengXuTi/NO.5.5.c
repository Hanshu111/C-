/*
 * // 1.该函数的功能是返回三角形的面积,若三边不能构成三角形则返回-1
#include<stdio.h>
#include<math.h>    // 用到开平方函数 sqrt()
double fun(double a,double b,double c)
{
    double s,p;
    p=(a+b+c)/2.0;
    if(a+b>c && a+c>b && b+c>a){
        s=sqrt(p*(p-a)*(p-b)*(p-c));
    }else
        s=-1;
    return s;
}
int main()
{
    double x,y,z,s;
    scanf("%lf%lf%lf",&x,&y,&z);
    s= fun(x,y,z);
    if(s!=-1)printf("三角形的面积为:%lf\n",s);
    else printf("该三角形无法构成三角形");
    return 0;
}
// 2.参数位A或a则返回10,参数为B或b则返回11,参数为C或c则返回12,参数为D或d则返回13,参数为E或e则返回14,参数为F或f则返回15
#include<stdio.h>
int fun(char ch)
{
    if(ch=='A'||ch=='a') return 11;
    if(ch=='B'||ch=='b') return 12;
    if(ch=='C'||ch=='c') return 13;
    if(ch=='D'||ch=='d') return 14;
    if(ch=='E'||ch=='e') return 15;
}
int main()
{
    char ch;
    int z;
    ch=getchar();
    z=fun(ch);
    printf("%d\n",z);
    return 0;
}

// 方法2:
 #include<stdio.h>
int fun(char ch)
{
    int n;
    switch (ch) {
        case 'a':
        case 'A': n=10; break;
        case 'b':
        case 'B': n=11; break;
        case 'c':
        case 'C': n=12;  break;
        case 'f':
        case 'F': n=15;
    }
    return n;
}

 // 3.计算n的阶乘,并且利用函数计算1!+2!+3!+4!+5!
#include<stdio.h>
int fun(int n)
{
        if(n==1) return 1;
        else return n* fun(n-1);
}
int main()
{
    int sum=0;
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+= fun(i);
    }
    printf("%d的阶乘之和为:%d",n,sum);
    return 0;
}

 //方法2：
 #include<stdio.h>
int fun(int n)
{
    int i,p=1;
    for(i=1;i<=n;i++)
        p=p*i;
    return p;
}

 //老师代码
 #include<stdio.h>
int fun(int n)
{
    int i,p=1;
    for(i=1;i<=n;i++)
        p=p*i;
    return p;
}
int main()
{
    int i;
    int sum=0;
    for(i=1;i<=5;i++)
        sum+= fun(i);
    printf("%d\n",sum);
    return 0;
}

 // 4.功能为判断某个正整数是否为质数,若为质数则返回1,若不为质数则返回0
#include<stdio.h>
int fun(int n)
{
    int i,k=1;
    for(i=2;i<n;i++)
    if(n%i==0) {
        k=0;
        break;
    }
    return k;
}
int main()
{
    int n,k;
    scanf("%d",&n);
    k=fun(n);
    printf("%d",k);
    return 0;
}
 * */

// 4.功能为判断某个正整数是否为质数,若为质数则返回1,若不为质数则返回0
#include<stdio.h>
int fun(int n)
{
    int i,k=1;
    for(i=2;i<n;i++)
    if(n%i==0) {
        k=0;
        break;
    }
    return k;
}
int main()
{
    int n,k;
    scanf("%d",&n);
    k=fun(n);
    printf("%d",k);
    return 0;
}

















