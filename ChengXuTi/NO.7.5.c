/*
// 1.��д����ͳ���ַ����е������ַ���Ӣ��Сд��ĸ��Ӣ�Ĵ�д��ĸ�ĸ���
#include<stdio.h>
void fun(char s[],int a[])
{
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='0'&&s[i]<='9') a[0]++;
        else if(s[i]>='a'&&s[i]<='z') a[1]++;
        else if(s[i]>='A'&&s[i]<='Z') a[2]++;
    }
}
int main()
{
    char s[50];
    int a[3]={0};   //��ʼ��
    int i;
    scanf("%s",s);
    fun(s,a);
    for(i=0;i<3;i++)
        printf("%d\t",a[i]);
    return 0;
}

 // 2.��д����ʵ����֤���빦��,������������е��������ƥ��,�������������ȷ��,�������"�������,����������",������������������������
#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="abcd";
    char s[50];
    int n=3;
    while(n!=0)
    {
        scanf("%s",s);
        if(strcmp(a,s)==0)
        {
            printf("������ȷ\n");
            break;
        }
        else
        {
            printf("�������,����������\n");
            n--;
        }
    }
    return 0;
}
 // 3.��д����ɾ���ַ��������һ���ַ�
#include<stdio.h>
void fun(char s[])
{
    char *p;
    p=s;
    while (*p!='\0') p++;
    p--;
    *p='\0';
}
int main()
{
    char s[]="ABCD";
    fun(s);
    puts(s);
    return 0;
}
 // 4.��д�����ж��ַ����Ƿ�Ϊ�����ַ���,(�� abccba Ϊ�����ַ���,abcabc���ǻ����ַ���)
#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    char *p,*q;
    int k=1;    // 1�����ǻ�����,0������
    scanf("%s",s);
    p=s;
    q=s+strlen(s)-1;    //ָ�����һ���ַ�
    while (p<q)
    {
        if(*p!=*q)
        {
            k=0;
            break;
        }
        p++;
        q--;
    }
    if(k==1) printf("�����ǻ�����\n");
    else printf("�������ǻ�����");
    return 0;
}
 */
// ��һ���ַ�����ɾ��ĳ��ָ�����ַ�
#include<stdio.h>
void fun(char *p,char ch)
{
    int i,j=0;
    for(i=0;p[i]!='\0';i++)
    {
        if(p[i]!=ch)
        {
            p[j]=p[i];
            j++;
        }
    }
    p[j]='\0';
}
int main()
{
    char s[]="abcabc";
    fun(s,'a');
    puts(s);
    return 0;
}

