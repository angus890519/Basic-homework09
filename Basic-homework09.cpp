/* 計算機概論實務-基本練習作業-作業9*/
/* 製作人：郭柏鋒 */
/* 完成時間：2019/03/08 10:00*/  
#include <stdio.h> //函示庫
#include <stdlib.h>
int main(void){
	int i,j; //定義 
	for (i=1;i<=9;i++){  //定義做1-9的九九乘法表 
		for(j=1;j<=9;j++)  //定義做1的9次,做1*1=1 1*2=2 ...........以此類推 
		printf("%d*%d=%2d  ",i,j,i*j); //顯示九九乘法表 
		printf("\n"); 
     }
	system("pause"); //暫停視窗 
	return 0; //回傳值為0
}
