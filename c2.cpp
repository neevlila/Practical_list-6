#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	cout<<"Name. Lila Neev "<<endl;
	cout<<"Enrollment no. 220130318021";
	string srg;
	ifstream filestream("test.txt");
	if(filestream.is_open())
	{
		while(getline(filestream,srg))
		{
			cout<<srg<<endl;
		}
		filestream.close();
	}
	else
	{
		cout<<"File opening is fail"<<endl;
	}
	return 0;
}
