#include<iostream>
using namespace std;
int main()
{
	int ** test=new int *[4];
	for (int i = 0; i < 4; i++)
	{
		test[i] = new int [4];
	}
	for(int i=0;i<4;i++)
		for (int j = 0; j < 4; j++)
		{
			test[i][j] = (i + 1)*(j + 1);
			cout << test[i][j] << endl;
		}
	delete test[2];
	for (int i = 0; i<4; i++)
		for (int j = 0; j < 4; j++)
		{
			cout << test[i][j] << endl;
		}
	return 0;
}