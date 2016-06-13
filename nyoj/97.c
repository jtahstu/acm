/*兄弟郊游问题
时间限制：3000 ms  |  内存限制：65535 KB
难度：2
描述
兄弟俩骑车郊游，弟弟先出发，每分钟X米，M分钟后，哥哥带一条狗出发。以每分钟Y米的速度去追弟弟，而狗则以每分钟Z米的速度向弟弟跑去，追上弟弟后又立即返回，直到哥哥追上弟弟时，狗跑了多少米？
输入
第一行输入一个整数N，表示测试数据的组数(N<100)
每组测试数据占一行，是四个正整数，分别为M,X,Y,Z（数据保证X<Y<Z)
输出
输出狗跑的路径，结果保留小数点后两位。
样例输入
1
5 10 15 20
样例输出
200.00*/

#include "stdio.h"
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
        double m,x,y,z,s;
		scanf("%lf%lf%lf%lf",&m,&x,&y,&z);
		s=x*m/(y-x)*z;
		printf("%.2lf\n",s);
	}
    return 0;
}
//最优代码 
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int s,a,b,c;
		cin>>s>>a>>b>>c;
		printf("%.2lf\n",s*a/(double)(b-a)*c);
	}

}        