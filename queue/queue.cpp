/*************************************************************************
	> File Name: queue.cpp
	> Author: yinshangqing
	> Mail: 841668821@qq.com 
	> Created Time: 2018年01月18日 星期四 09时24分23秒
 ************************************************************************/

#include <iostream>
#include <queue>
#include <unistd.h>
#include <stdio.h>

using namespace std;

int main()
{
	queue<int> v;
	for(int i=0;i<10;i++)
	{
		v.push(i);// 入队
	}
	static int gnCount = 0;
	while(!v.empty())
	{
		cout << v.front() << " ";	// 取队列第一个值
		v.pop();					// 出队
		fflush(stdout);
		sleep(1);
		//cout << "............." << ++ gnCount << endl;
	}
	cout << endl;
	return 0;
}

