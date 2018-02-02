#include <string>
#include <iostream>
using namespace std;

int main (){
	// string word="ivivilfvi";
	// // while (cin >> word )
	// // 	cout << word <<endl;
	// for (auto c1:word)
	// 	cout << c1 <<endl;

	// string s1("Hello World!!!");
	// decltype(s1.size()) punct_cnt=0;
	// //统计s1中标点符号的数量
	// for(auto c2:s1)
	// 	if (ispunct(c2))
	// 		++punct_cnt;
	// cout<<punct_cnt<<" punctuation characters in "<<s1<<endl;

	//转换成大写形式
	string s2("Hello World!!!");
	for (auto &c3:s2)
		c3=toupper(c3);
	cout<<s2<<endl;

	system("pause");
	return 0;
}