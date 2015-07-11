#include <stdio.h>


//----------------------------------------------
int arr[100][100] = { 0, };
int n = 0;
//----------------------------------------------


int main()
{
	int itr;
	int nCount;
	scanf("%d", &nCount);
	for (itr = 0; itr < nCount; itr++)
	{

		printf("#testcase%d\n", itr + 1);
		scanf("%d", &n);
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				scanf("%d", &arr[i][j]);
			}
		}

		/*init*/

	}

	return 0;
}