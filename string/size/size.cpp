#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string line="hello world";
	int len=line.size();
	cout<<len<<endl;
//	cin>>endl;
	for (int i=0;i<=len;i++)
	{
		if (line[i]==' ')
		{
			cout<<"The string has space"<<endl;
			cout<<i<<endl;
		}
	}
	system("pause");
	return 0;
}
