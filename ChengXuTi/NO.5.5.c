/*
 * // 1.�ú����Ĺ����Ƿ��������ε����,�����߲��ܹ����������򷵻�-1
#include<stdio.h>
#include<math.h>    // �õ���ƽ������ sqrt()
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
    if(s!=-1)printf("�����ε����Ϊ:%lf\n",s);
    else printf("���������޷�����������");
    return 0;
}
// 2.����λA��a�򷵻�10,����ΪB��b�򷵻�11,����ΪC��c�򷵻�12,����ΪD��d�򷵻�13,����ΪE��e�򷵻�14,����ΪF��f�򷵻�15
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

// ����2:
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

 // 3.����n�Ľ׳�,�������ú�������1!+2!+3!+4!+5!
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
    printf("%d�Ľ׳�֮��Ϊ:%d",n,sum);
    return 0;
}

 //����2��
 #include<stdio.h>
int fun(int n)
{
    int i,p=1;
    for(i=1;i<=n;i++)
        p=p*i;
    return p;
}

 //��ʦ����
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

 // 4.����Ϊ�ж�ĳ���������Ƿ�Ϊ����,��Ϊ�����򷵻�1,����Ϊ�����򷵻�0
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

// 4.����Ϊ�ж�ĳ���������Ƿ�Ϊ����,��Ϊ�����򷵻�1,����Ϊ�����򷵻�0
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

















