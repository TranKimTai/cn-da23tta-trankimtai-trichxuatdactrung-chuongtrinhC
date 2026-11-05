/* ex3_2
   moka223711 */

#include <stdio.h>

int main(void){
	int num;
	// 入力numを受け取る
	scanf("%d", &num);

	// num % 10で1の位を取得する
	// switch文で各値に対してnum本の本の読み方を出力する
	switch(num % 10){
		case 2: case 4: case 5: case 7: case 9:
			printf("hon");
			break;
		case 0: case 1: case 6: case 8:
			printf("pon");
			break;
		default:
			printf("bon");
	}

	return 0;
}
