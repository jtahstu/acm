/**
 * Project Name: P65 
 * File Name: 55.cpp
 * Created on: 2015��4��6�� ����3:19:38
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//55�����п˳���
//��֤�����п����㡣����һ����λ����ֻҪ���Ǹ���λ�ϵ������ǲ�ȫ��ͬ�ģ����������Ĺ��ɣ�
//1)����ɸ���λ�����ĸ������ɴ�С���У��γ������ĸ����ֹ��ɵ�������λ����
//2)����ɸ���λ�����ĸ�������С�������У��γ������ĸ����ֹ��ɵ���С����λ��(����ĸ����к���0����õ�����������λ)��
//3)���������Ĳ�õ�һ���µ���λ��(��λ�㱣��)��
//�ظ����Ϲ��̣����õ��Ľ����6174�����������Ϊ�����п�����
//
//*���н��
//1) Enter a number:4312
//[1]:4321-1234=3078
//[2]:8730-378=8352
//[3]:8532-2358=6174
//2) Enter a number:8720
//[1]:8720-278=8442
//[2]:8442-2448=5994
//[3]:9954-4599=5355
//[4]:5553-3555=1998
//[5]:9981-1899=8082
//[6]:8820-288=8523
//[7]:8532-2358=6174
//3)Enter a number:9643
//[1]:9643-3469=6174
#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int jt55(int n) {
	int a[5], b, c;
	a[0] = n % 10;
	a[1] = n / 10 % 10;
	a[2] = n / 100 % 10;
	a[3] = n / 1000;
	sort(a, a + 4);//�������������Сֵ
	b = a[0] + a[1] * 10 + a[2] * 100 + a[3] * 1000;
	c = a[3] + a[2] * 10 + a[1] * 100 + a[0] * 1000;
	cout << b << "-" << c << "=" << b - c << endl;
	return b - c;
}
int main55() {
	int n;
	while (cin >> n) {
		int count = 1;
		while (jt55(n) != 6174) {//�жϵ�ʱ��Ҳ�����һ�������������ôӰ�죬��������ȷ�ģ�������Ŀ���������Ǵ���
			count++;
			n = jt55(n);

		}
		cout << "��" << count << "�α�,��ת����6174" << endl;
	}
	return 0;
}
