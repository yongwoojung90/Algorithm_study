#include <stdio.h>
//----------------------------------------------
int arr[100][100] = { 0, };
int n = 0;
int check[100] = { 0, };
int flag = 0;
//----------------------------------------------
void check_row(int row){
	for (int j = 0; j < n; j++){
		if (arr[row][j] == 0){ 
			check[j] = 1; 
			printf("%d ", j + 1);
		}
	}
	printf("\n");
}
int invalid_check(){
	if (n == 1){
		return 0;
	}
	int cnt = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (arr[i][j] == 0){
				cnt++;
			}
		}
		if (cnt < 2){
			return 0;
		}
		else{
			cnt = 0;
		}
	}
	return 1;
}
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
		if (0 == invalid_check()){
			flag = 1;
			printf("0\n");
		}
		if (flag == 0){
			for (int i = 0; i < n; i++){
				if (check[i] == 1) continue;
					check_row(i);
			}
		}
		/*init*/
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				arr[i][j] = 0;
			}
			check[i] = 0;
		}
		flag = 0;
	}

	return 0;
}