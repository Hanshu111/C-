/*
 *
// 1.计算1!+2!+3!+4!+5!
#include<stdio.h>
int main()
{
    int i,p=1,sum=0;
    for(i=1;i<=5;i++)
    {
        p*=i;
        sum+=p;
    }
    printf("sum=%d",sum);
    return 0;
}

 // 2.计算7+77+777+7777+77777
#include<stdio.h>
int main()
{
    int i,n=0,sum=0;
    for(i=1;i<=5;i++)
    {
        n=n*10+7;
        sum+=n;
    }
    printf("sum=%d",sum);
    return 0;
}

 // 3.计算 1+12+123+1234+12345
#include<stdio.h>
int main()
{
    int i,n=0,sum=0;
    for(i=1;i<=5;i++)
    {
        n=n*10+i;
        sum+=n;
    }
    printf("sum=%d",sum);
    return 0;
}

 // 4.判断某正整数n是几位数
#include<stdio.h>
int main()
{
    int n;
    int count=0;
    printf("请输入一个正整数");
    scanf("%d",&n);
    do {
        n/=10;
        count++;
    } while (n!=0);
    printf("%d",count);
    return 0;
}


// 5.计算X的y次方
#include<stdio.h>
int main()
{
    int i,p=1;
    int x,y;
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
        p=p*x;
    printf("%d",p);
    return 0;
}


 // 6. 判断某正整数是否为回文数.(例:12321 和12344321)
#include<stdio.h>
int main()
{
    int n,s=0,m;
    printf("请输入一组数");
    scanf("%d",&n);
    m=n;
    while (n!=0)
    {
        s=s*10+n%10;
        n/=10;
    }
    if(s==m) printf("是回文数");
    else printf("不是回文数");
    return 0;
}


 // 7.输出九九乘法表
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d*%d=%d\t",j,i,j*i);
        printf("\n");
    }
    return 0;
}

 // 8.计算1*2+2*3+3*4+...+n(n-1)
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum+=i*(i+1);
    printf("sum=%d",sum);
    return 0;
}


 // 9.输出10000以内的所有完数
#include<stdio.h>
int main()
{
    int j,sum,i;
    for(i=1;i<1000;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
            if(i%j==0) sum+=j;
        if(i==sum) printf("%d\n",i);
    }
    return 0;
}


 // 10.输出100以内的所有质数
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=2;i<100;i++)
    {
        k=1;
        for(j=2;j<i;j++)
            if(i%j==0)
            {
                k=0;
                break;
            }
        if(k==1) printf("%d\t",i);
    }
    return 0;
}

 // 11.输入一行字符,分别统计出其中英文字母、空格、数字和其他字符的个数
#include<stdio.h>
int main()
{
    char ch;
    int a,b,c,d;
    a=b=c=d=0;
    while((ch=getchar())!='\n')
    {
            if((ch>='a'&&ch<='z') || (ch>='A'&& ch<='Z')) a++;
            else if(ch==32) b++;
            else if(ch>='0' && ch<='9') c++;
            else d++;
    }
    printf("a=%d,b=%d,c=%d,d=%d",a,b,c,d);
    return 0;
}


 // 12.输入10个数,计算平均值。(结果保留2位小数)
#include<stdio.h>
int main()
{
    int i;
    float n,sum=0,aver;
    for(i=1;i<=10;i++)
    {
        scanf("%f",&n);
        sum+=n;
    }
    aver=sum/10;
    printf("aver=%.2f",aver);
    return 0;
}
*/






















