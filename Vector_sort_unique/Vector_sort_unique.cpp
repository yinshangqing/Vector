
#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
#include <string>
#include <iterator>

using namespace std;

 int main()
{
    //cout<<"Illustrating the generic unique algorithm."<<endl;
    const int N=11;
    int array1[N]={1,2,0,3,3,0,7,7,7,0,8};
    vector<int> vector1;
    for (int i=0;i<N;++i)
        vector1.push_back(array1[i]);

	sort(vector1.begin(),vector1.end());
    vector<int>::iterator new_end;
    new_end=unique(vector1.begin(),vector1.end());    //"ɾ��"���ڵ��ظ�Ԫ��
    assert(vector1.size()==N);

    vector1.erase(new_end,vector1.end());  //ɾ����������ɾ�����ظ���Ԫ��
    copy(vector1.begin(),vector1.end(),ostream_iterator<int>(cout," "));
    cout<<endl;

    return 0;
}
