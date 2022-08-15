#define _CRT_SECURE_NO_WARNINGS 1
int bubble(int arr[], int sz){
	for (int i = 0; i <= sz - 1; i++){
		int flag = 1;
		for (int j = 0; j < sz - i - 1; j++){
			if (arr[j] >= arr[j + 1]){
				int tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
				flag = 0;
			}
		}
			if (flag == 1){
				break;
			}
		}
	}