#include <iostream>
#include <vector>
#include <string>
using namespace std
int main()
{
	string name="Michael";
	string name2=name+"Ellis";
	vector <int> vec={1,2,3,4,5,6,7,8,9,10};
	vector <char> veca;
	
	vec.pop_back(10);
	veca.push_back('a','b','c','d','e','f','g');
	
	for (int d=0; d<3;d++)
	{
		veca.push_back('m');
	}
	
	for(int i=0; i<vec.size();i++)
	{
		cout<<vec[i]<<" ";
	}
	
	cout<<"First name"<<name<<endl;
	cout<<"Full name"<<name2<<endl;
	
	
}
