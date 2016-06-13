/*谁是最好的Coder
时间限制：1000 ms  |  内存限制：65535 KB
难度：0

描述
    计科班有很多Coder，帅帅想知道自己是不是综合实力最强的coder。
    帅帅喜欢帅，所以他选了帅气和编程水平作为评选标准。
    每个同学的综合得分是帅气程度得分与编程水平得分的和。
    他希望你能写一个程序帮他一下。

输入
    数据有多组。
    输入一个数n，代表计科班的总人数。
    接下来有n行数，一行数有两个数a,b。
    其中a代表该同学的编程水平，b代表该同学的帅气程度。
    n=0表示输入结束。
输出
    每组数据占一行，输出所有同学中综合得分最高的分数。
样例输入

    5
    9 10
    7 11
    1 6
    5 7
    3 5
    2
    7 3
    7 6
    0

样例输出

    19
    13
*/
#include "stdio.h"
int main()
{
    int n,max=0,a,b,i;
    // freopen("input.txt","r",stdin);
    while(scanf("%d",&n),n)
    {
        max=0;
        for(i=0; i<n; i++)
        {
            scanf("%d%d",&a,&b);
            if((a+b)>max)max=(a+b);
        }
        printf("%d\n",max);
    }
    return 0;
}

/*#include<stdio.h>
main()
{
    int n;
    while(scanf("%d",&n),n)
    {
        int a,b,s=0;
        while(n--)
        {
            scanf("%d%d",&a,&b);
            if(a+b>s) s=a+b;
        }
        printf("%d\n",s);
    }
}最优代码
*/