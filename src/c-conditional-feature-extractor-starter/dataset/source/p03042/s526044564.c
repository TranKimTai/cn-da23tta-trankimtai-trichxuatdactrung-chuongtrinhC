#include<stdio.h>

static char CheckFormat(int a_iS);

int main(void) {
	int		iS;
	char	cFormat;	
	//長さ4の数字列を入力
	scanf("%d", &iS);
	
	//入力された値がYYMM,MMYYフォーマットのどちらかと考えられるか求める
	cFormat = CheckFormat(iS);
	//求めた結果を出力
	switch (cFormat){
	case 1:
		printf("AMBIGUOUS\n");
		break;
	case 2:
		printf("YYMM\n");
		break;
	case 3:
		printf("MMYY\n");
		break;
	case 4:
		printf("NA\n");
		break;

	default:
		break;
	}
	return 0;
}

/*****************
*	YYMM,MMYYのどちらのフォーマットに合うか確認する関数
*	a_iS 入力された長さ4の数字列
*/

static char CheckFormat(int a_iS) {
	int iHigh2, iLow2;
	int j;

	iHigh2	= a_iS / 100;
	iLow2	= a_iS % 100;

	//どちらの可能性も存在するとき
	if ((1 <= iHigh2 && iHigh2 <= 12) && (1 <= iLow2 && iLow2 <= 12)) {
		j = 1;
	}
	//YYMMフォーマットのとき
	else if (1 <= iLow2 && iLow2 <= 12) {
		j = 2;
	}
	//MMYYフォーマットのとき
	else if (1 <= iHigh2 && iHigh2 <= 12) {
		j = 3;
	}
	//どちらでもないとき
	else {
		j = 4;
	}
	return(j);
}
