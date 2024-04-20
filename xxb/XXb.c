/*
 * //���Ա�
//malloc(��̬�ڴ���亯��)
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,*p;   // P:����ַ
    p=(int *) malloc (10*sizeof(int));  //��̬����10��int�ͱ������ڴ�ռ�
    for(i=0;i<10;i++)
    {
        p[i]=i;
        printf("%d\n",p[i]);
    }
    printf("\n");
    return 0;

}
*/


//�鲢�㷨
#include<stdio.h>
#include<stdlib.h>
//��ĿҪ��:���ø������У����й鲢����
//˼·�����ཫ����ֳ����룬Ȼ���ÿһ����������������õ�������кϲ���
//����:��һ������һ��Merge�����������������
//    �ڶ�������MergeSort ����������ݹ����
//    ������������������Ҫ low  mid  high  ��ֵ

//��������B
int *B;

//������ A[low...mid] �� [mid+1....high] �������򣬽��������ֹ鲢
void Merge(int A[], int low, int mid, int high) // Merge:�����ϲ������������
{
    int i,j,k;
    for(k=low; k<=high; k++)
            B[k]=A[k];  // ��A������Ԫ�ظ��Ƶ�������B��
    for(i=low, j=mid+1, k=i; i<=mid && j<=high; k++)  //׼����дA
    {
        if (B[i]<=B[j])  // �ȿ��� i �� ��֤�㷨���ȶ���
            A[k]=B[i++]; //����Сֵ���Ƶ�A��
        else
            A[k]=B[j++];
    }
    while (i<=mid)
        A[k++]=B[i++];  //�����벿�ֻ���ʣ��Ԫ�أ������Ǹ��ƻ�A��
    while (j<=high)
        A[k++]=B[j++];  //����Ұ벿�ֻ���ʣ��Ԫ�أ������Ǹ��ƻ�A��
}
void MergeSort(int A[], int low, int high) // mergesort�ǵݹ����
{
    if (low < high)
    {
        int mid = (low + high) / 2;  //�м仮��
        // low high һ��ʼ�� 0�����鳤��
        MergeSort(A,low,mid);   //����벿�ֹ鲢����
        MergeSort(A,mid+1,high); //���Ұ벿�ֹ鲢����
        Merge(A,low,mid,high);  //ÿһ�ζ�Ҫ�鲢
        // ÿ�κϲ��Ķ������ڵķ���
    }
}

//���Դ���
int main()
{
    int A[]={12,11,23,1,4,9};
    int n=sizeof(A)/sizeof(A[0]);

    B=(int *)malloc(n * sizeof(int)); //���丨������B�Ŀռ�

    printf("������������: \n");
    for(int i=0;i<n;i++)
        printf("%d ",A[i]);
    printf("\n");

    MergeSort(A,0,n-1);

    printf("\n������������: \n");
    for(int i=0;i<n;i++)
        printf("%d ",A[i]);
    printf("\n");

    free(B);    //�ͷŸ�������B�Ŀռ�
    return 0;
}

/*�ܽ�:�鲢������һ���ȶ��������㷨��ʱ�临�Ӷ�Ϊo(nlog n)
 * ��Ҫ˼���ǽ������Ϊ�����֣��ֱ��������Ȼ��ϲ���������
 *ע�ͣ�
 * 1��Merge ��������������ǹ鲢����ĺ��ģ�������ϲ���������������顣
 *����������ȴ���������ʱ���飬Ȼ��ԭ�����Ԫ�ظ��Ƶ���������ʱ�����С�
 * Ȼ��������������ʱ�����Ԫ�ذ�˳��ϲ���ԭ����
 * 2��MergeSort �������������ֵ�鲢�����������������������ֳ������֣�
 * ����ÿһ���ֽ�������Ȼ�������� Merge �������ϲ�������������Ĳ��֡�
 * 3��main ��������������ǳ������ڵ㡣�����ȴ���һ�������һ���������飬
 * Ȼ����� MergeSort���� �����������������ӡ���������顣


*/








