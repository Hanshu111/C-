/*
 //1.����뾶,����Բ�����
#include<stdio.h>
int main()
{
    float S,r;
    printf("������뾶",&r);
    scanf("%f",&r);
    S=3.14159*r*r;
    printf("Բ�����Ϊ:.2%f",S);
    return 0;
}


//2.�ѻ����¶�ת��Ϊ�����¶�,��֪ת����ʽΪ: C=5/9(F-32),����F�ǻ����¶�ֵ,C�������¶�ֵ,Fֵ�ɼ�������
#include<stdio.h>
int main()
{
    double F,C;
    printf("�����뻪���¶�");
    scanf("%lf",&F);
    C=(5%9)*(F-32);
    printf("�����¶�ֵΪ:%lf",C);
    return 0;
}

�Ĵ��:
 #include<stdio.h>
int main()
{
    float F,C;
    printf("�����뻪���¶�");
    scanf("%f",&F);
    C=5.0/9*(F-32);
    printf("�����¶�ֵΪ:.2%f",C);
    return 0;
}



//3.��������һ����λ������,�����������ӡ���
#include<stdio.h>
int main() {
    int a,b,c,d;
    printf("�������ĸ�����:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("������Ϊ:\t%d\t%d\t%d\t%d",d,c,b,a);
    return 0;
}

���ĺ�:
 #include<stdio.h>
int main()
{
    int n,a,b,c,d;
    printf("�������ĸ�����:");
    scanf("%d",&n);
    a=n%10;
    b=n/10%10;
    c=n/100%10;
    d=n/1000;
    printf("����������Ϊ:%d%d%d%d\n",a,b,c,d);
    return 0;
}


//4.�Ӽ�������������ѧ���ĳɼ�(ʵ��),�����ܳɼ���ƽ���ɼ�,����������2λС��
#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    float aver,sum=0.0;
    printf("�������ѧ���ĳɼ�:\n");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    sum+=a+b+c+d+e;
    aver=sum/5.0;
    printf("�ܳɼ�Ϊ:%.2f \tƽ���ɼ�Ϊ:%.2f \t",sum,aver);
    return 0;
}

//5.�Ӽ�����Ϊ����������������,����������������ֵ�������
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("��������������:");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("����������������ֵΪ:%d\t%d",a,b);
    return 0;
}

 * */

























