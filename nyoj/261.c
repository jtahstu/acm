/*��ת�����CС��
ʱ�����ƣ�3000 ms  |  �ڴ����ƣ�65535 KB
����
ACM��CС���ں̵ܶ�ʱ���ڽ�����ת�ã���ô�����������һ���������PKһ�°ɣ�ϣ��������ս�ɹ���
����
��һ�������������N,0 <N < 100,���ļ�������һ��3*3�ľ���
���
���ת�ú�ľ���
��������
1
1 2 3
4 5 6
7 8 9
�������
1 4 7
2 5 8
3 6 9*/
#include<stdio.h>
int main()
{
    int n,a[3][3]={0},i,j;
    scanf("%d",&n);
    while(n--)
    {
        for(i=0;i<3;i++)
            for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
        for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                printf("%d ",a[j][i]);
                 printf("\n");
            }
    }
    return 0;
}