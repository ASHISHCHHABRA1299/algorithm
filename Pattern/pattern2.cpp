#include <iostream>

using namespace std;

int main()
{
	int n = 5;

	for (int i = 1; i <= 5; ++i)
	{
		for(int k =n-i; k> 0; k--){
			cout<<" ";
		}
		for (int j = 1; j <= 2*i-1; ++j)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}