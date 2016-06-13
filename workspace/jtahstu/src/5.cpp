#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> INTVECTOR;//�Զ�������INTVECTOR
//����vector�����Ĺ���

int main5()
{
    //vec1�����ʼΪ��
    INTVECTOR vec1;
    //vec2���������10��ֵΪ6��Ԫ��
    INTVECTOR vec2(10,6);
    //vec3���������3��ֵΪ6��Ԫ�أ���������
    INTVECTOR vec3(vec2.begin(),vec2.begin()+3);
    //����һ����Ϊi��˫�������
    INTVECTOR::iterator i;
    //��ǰ�����ʾvec1�е�����
    cout<<"vec1.begin()--vec1.end():"<<endl;
    for (i =vec1.begin(); i !=vec1.end(); ++i)
        cout << *i << " ";
    cout << endl;
    //��ǰ�����ʾvec2�е�����
    cout<<"vec2.begin()--vec2.end():"<<endl;
    for (i =vec2.begin(); i !=vec2.end(); ++i)
        cout << *i << " ";
    cout << endl;
    //��ǰ�����ʾvec3�е�����
    cout<<"vec3.begin()--vec3.end():"<<endl;
    for (i =vec3.begin(); i !=vec3.end(); ++i)
        cout << *i << " ";
    cout << endl;
    //�������ӺͲ����Ա������vector��֧�ִ�ǰ����
    vec1.push_back(2);//�Ӻ�������һ����Ա
    vec1.push_back(4);
    vec1.insert(vec1.begin()+1,5);//��vec1��һ����λ���ϲ����Ա5
    //��vec1��һ��λ�ÿ�ʼ����vec3�����г�Ա
    vec1.insert(vec1.begin()+1,vec3.begin(),vec3.end());
    cout<<"after push() and insert() now the vec1 is:" <<endl;
    for (i =vec1.begin(); i !=vec1.end(); ++i)
        cout << *i << " ";
    cout << endl;
    //���Ը�ֵ��Ա����
    vec2.assign(8,1);   // ���¸�vec2��ֵ��8����Ա�ĳ�ʼֵ��Ϊ1
    cout<<"vec2.assign(8,1):" <<endl;
    for (i =vec2.begin(); i !=vec2.end(); ++i)
        cout << *i << " ";
    cout << endl;
    //���������ຯ��
    cout<<"vec1.front()="<<vec1.front()<<endl;//vec1�������Ա
    cout<<"vec1.back()="<<vec1.back()<<endl;//vec1�����һ����Ա
    cout<<"vec1.at(4)="<<vec1.at(4)<<endl;//vec1�ĵ������Ա
    cout<<"vec1[4]="<<vec1[4]<<endl;
    //�����Ƴ���ɾ��
    vec1.pop_back();//�����һ����Ա�Ƴ�vec1
    vec1.erase(vec1.begin()+1,vec1.end()-2);//ɾ����Ա
    cout<<"vec1.pop_back() and vec1.erase():" <<endl;
    for (i =vec1.begin(); i !=vec1.end(); ++i)
        cout << *i << " ";
    cout << endl;
    //��ʾ���е�״̬��Ϣ
    cout<<"vec1.size(): "<<vec1.size()<<endl;//��ӡ��Ա����
    cout<<"vec1.empty(): "<<vec1.empty()<<endl;//���
    return 0;
}

