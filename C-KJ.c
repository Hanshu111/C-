/*//���� 1-3+5-7+9
#include<stdio.h>
int main()
{
    int i=1,sum=0,k=1;    // k:��ʾ����
    while (i<10)
    {
        sum+=k*i;
        i+=2;
        k=k*(-1);
    }
    printf("sum=%d\n",sum);
    return 0;
}
 * // ����1-3+5-7+9 (ÿ�����ķ�֮һ֮��)
#include<stdio.h>
int main()
{
    int i=1;
    float sum=0.0;
    while (i<10)
    {
        sum+=1.0/i;
        i+=2;
    }
    printf("sum=%lf",sum);
    return 0;
}
 //�ж�ˮ�ɻ���
#include<stdio.h>
int main()
{
    int n;
    int a,b,c;
    printf("������һ����λ��:");
    scanf("%d",&n);
    a=n%10;
    b=n/10%10;
    c=n/100;
    if((a*a*a+b*b*b+c*c*c)==n)
        printf("������ˮ�ɻ���\n");
    else printf("��������ˮ�ɻ���\n");
    return 0;
}
 //���������ˮ�ɻ���
#include<stdio.h>
int main() {
    int i;
    int a, b, c;
    for (i = 100; i < 1000; i++) {
        a = i % 10;
        b = i / 10 % 10;
        c = i / 100;
        if ((a * a * a + b * b * b + c * c * c) == i)
            printf("%d\n", i);
    }
    return 0;
}

 //����:6��һ������,6����������1,2,3  6=1+2+3
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("������һ����");
    scanf("%d",&n);
    for(i=1;i<n;i++)
        if(n%i==0) sum+=i;
    if(n==sum) printf("������");
    else printf("��������");
    return 0;
}


 //����: һ������1������ֻ�ܱ�1���Լ�����������(��С��������2)
#include<stdio.h>
int main()
{
    int n,i,k=1;
    printf("������һ����:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        k=0;
        break;
    }
    if(k==1) printf("������");
    else printf("��������");
    return 0;
}

 //ѭ����Ƕ��ʹ��
#include<stdio.h>   //�������
int main()
{
    int i,j;
    for(i=0;i<3;i++)
        for(j=0;j<2;j++)
            printf("!");
    return 0;
}

 #include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<3;i++) {
        for (j = 0; j < 2; j++)
            printf("*");
        printf("\n");   //��ѭ����ѭ����
    }
    return 0;
}


 #include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<=i;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}

 // �����Լ��
#include<stdio.h>   //�������
int main()
{
    int a=63,b=15;
    while (a!=b)
    {
        if(a>b) a-=b;
        if(a<b) b-=a;
    }
    printf("%d",a);
    return 0;
}

 //�����Լ��
#include<stdio.h>   //շת�����
int main()
{
    int a=63,b=15,t;
    while (b!=0)
    {
        t=a%b;
        a=b;
        b=t;
    }
    printf("%d",a);
    return 0;
}
 * */
/*//���� 1-3+5-7+9
 * #include<stdio.h>
int main()
{
    int i=1,sum=0;
    int k=1;
    while (i<10)
    {
        sum+=i*k;
        i+=2;
        k=k*(-1);
    }
    printf("%d\n",sum);
    return 0;
}
 //��ѭ������ѭ��������
#include<stdio.h>
int main()
{
    int i,n;
    for(i=6;i>0;i--)
    {
        for(n=1;n<i;n++)
            printf("*");
        printf("\n");
    }
    return 0;
}
*/

/*
//������ȫ��Ԫ�ؽ������
#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int i,j,sum=0;
    for(i=0;i<5;i++){
        sum+=a[i];
    }
    printf("sum=%d",sum);
    return 0;

}

 //��������е�����
#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int i;
    for(i=0;i<5;i++)
    {
        if(a[i]%2==1) printf("%d",a[i]);
    }
    return 0;
}
*/

//����
/*
 * // 1.5 ���޷�
 * #include<stdio.h>
int main()
{
    int a[10]={1,-9,0,3,5,1,13,-16,2,8};
    int i,max;
    max=a[0];
    for(i=0;i<10;i++)
        if(a[i]>max) max=a[i];
    printf("max=%d",max);
    return 0;
}
 *
 * //ͬʱ������ֵ���ڵ������±�
#include<stdio.h>
int main()
{
    int a[10]={1,-9,0,3,5,1,13,-16,2,8};
    int i,max;
    max=a[0];
    for(i=0;i<10;i++)
        if(a[i]>max) max=a[i];
    printf("max=%d\n",max);
    for(i=0;i<10;i++)
        if(a[i]==max) printf("�±�=%d",i);
    return 0;
}
 //��ʦ����
 #include<stdio.h>
int main()
{
    int a[10]={1,-9,0,3,5,1,13,-16,2,8};
    int i,max;
    max=a[0];
    int k=0;
    for(i=0;i<10;i++)
        if(a[i]>max)
        {
            max=a[i];
            k=i;
        }
    printf("max=%d",max);
    printf("�±�=%d",k);
    return 0;
}
 *
 //����Сֵ
#include<stdio.h>
int main()
{
    int a[10]={1,-9,0,3,5,1,13,-16,-112,8};
    int i,min;
    min=a[0];
    for(i=0;i<10;i++)
        if(a[i]<min) min=a[i];
    printf("min=%d",min);
    return 0;
}

 // 1.6 ѭ������
#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int i,k;
    k=a[4];
    for(i=3;i>=0;i--)
        a[i+1]=a[i];
    a[0]=k;
    for(i=0;i<5;i++)
    printf("%d\t",a[i]);
    return 0;
}

 // 1.6 ѭ������
#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int i,k;
    k=a[0];
    for(i=0;i<=4;i++)
        a[i]=a[i+1];
    a[4]=k;
    for(i=0;i<5;i++)
        printf("%d\t",a[i]);
    return 0;
}
//��ʦ����
#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int i,k;
    k=a[0];
    for(i=1;i<5;i++)
        a[i-1]=a[i];
    a[4]=k;
    for(i=0;i<5;i++)
        printf("%d\t",a[i]);
    return 0;
}

// 1.7 һ�����������
#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int i,j,t;
    for(i=0,j=9;i<j;i++,j--)
    {
        t=a[i];a[i]=a[j];a[j]=t;
    }
    for(i=0;i<10;i++)
        printf("%d\t",a[i]);
    return 0;
}

 // 1.8 �۰����
#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int p=0,q=9,m=0,flag=0;
    int num;
    printf("������Ҫ���ҵ���");
    scanf("%d",&num);
    while(p<=q){
        m=(p+q)/2;
        if(num<a[m]) q=m-1;
        if(num>a[m]) p=m+1;
        if(num==a[m]) {flag=1; break;}
    }
    if(flag==1) printf("%d",m);
    else printf("Not Found");
    return 0;
}
 //˳�����
#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int i,n;
    scanf("%d",&n);
    for(i=0;i<5;i++)
        if(n==a[i]) break;
    if(i<5) printf("%d\n",i);
    else printf("%d\t",-1);
    return 0;
}

 // 1.9 ����ת��
#include<stdio.h>
int main()
{
    int num,i=0;
    int a[50];
    scanf("%d",&num);
    while(num!=0)
    {
        a[i]=num%2;
        num=num/2;
        i++;
    }
    for(i-=1;i>=0;i--)
        printf("%d",a[i]);
    return 0;
}

 // 1.10 쳲���������
#include<stdio.h>
int main()
{
    int a[50],i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        if(i==1 || i==2) a[i]=1;
            else a[i]=a[i-1]+a[i-2];
            for(i=1;i<n;i++)
                printf("%d\t",a[i]);
            return 0;
}

 // 1.11 ð������
#include<stdio.h>   //��С����
int  main()
{
    int a[6]={0,-9,3,2,1,-8};
    int i,j,t;
    for(i=0;i<5;i++)        //�����㷨 ѭ����� ,ע��Ҫ�ͱ�������Ԫ������
        for(j=0;j<5-i;j++)
            if(a[j]>a[j+1])
            {
                t=a[j];a[j]=a[j+1];a[j+1]=t;
            }
    for(i=0;i<6;i++)
        printf("%d\t",a[i]);
    return 0;
}
 //ð������
#include<stdio.h>   //�Ӵ�С
int main()
{
    int a[7]={2,-9,7,4,3,0,1};
    int i,j,t;
    for(i=0;i<6;i++)
        for(j=0;j<6-i;j++)
            if(a[j]<a[j+1])
            {
                t=a[j];a[j]=a[j+1];a[j+1]=t;
            }
    for(i=0;i<7;i++)
        printf("%d\t",a[i]);
    return 0;

}
 //ð�������n������������
#include<stdio.h>
int main()
{
    int a[100];
    int i,j,t,n;
    // 1.����Ҫ���������
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    // 2.������Ĳ���
    for(i=0;i<n-1;i++)
        for(j=0;j<n-1-i;j++)
            if(a[j]>a[j+1])
            {
                t=a[j];a[j]=a[j+1];a[j+1]=t;
            }
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}
 * */
//��ά����
/*
 * //���ά����Ԫ�ص����ֵ
#include<stdio.h>
int main()
{
    int a[3][4];
    int i,j,max;
    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
            scanf("%d",&a[i][j]);
    max=a[0][0];
    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
            if(a[i][j]>max)
                max=a[i][j];
    printf("max=%d",max);
    return 0;
}


 * */


//���ά����Ԫ�ص�ƽ��ֵ,�������2ΪλС��
#include<stdio.h>
int main()
{
    float a[2][2],sum=0.0,aver;
    int i,j;
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        {
            scanf("%f",&a[i][j]);
            sum+=a[i][j];
            printf("sum=%.2f\t",sum);
        }
    aver=sum/4.0;
    printf("aver=%0.2f",aver);
    return 0;
}
















































