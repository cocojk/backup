#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> arr;
	int i;

	for(i=0;i<10;i++)
	{
		arr.push_back((i*i-i)%10);
		printf("%d\n",arr[i]);
	}


	sort(arr.begin(),arr.end());
	reverse(arr.begin(),arr.end());
	for(i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
	}

	return 0;

}
