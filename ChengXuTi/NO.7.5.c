/*
// 1.编写函数统计字符串中的数字字符、英文小写字母和英文大写字母的个数
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
    int a[3]={0};   //初始化
    int i;
    scanf("%s",s);
    fun(s,a);
    for(i=0;i<3;i++)
        printf("%d\t",a[i]);
    return 0;
}

 // 2.编写程序实现验证密码功能,输入密码和已有的密码如果匹配,则输出“密码正确”,否则输出"密码错误,请重新输入",三次输入错误密码则结束输入
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
            printf("密码正确\n");
            break;
        }
        else
        {
            printf("密码错误,请重新输入\n");
            n--;
        }
    }
    return 0;
}
 // 3.编写函数删除字符串的最后一个字符
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
 // 4.编写程序判断字符串是否为回文字符串,(例 abccba 为回文字符串,abcabc则不是回文字符串)
#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    char *p,*q;
    int k=1;    // 1代表是回文数,0代表不是
    scanf("%s",s);
    p=s;
    q=s+strlen(s)-1;    //指向最后一个字符
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
    if(k==1) printf("该数是回文数\n");
    else printf("该数不是回文数");
    return 0;
}
 */
// 在一个字符串中删除某个指定的字符
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

