/* �p������׹��-�򥻽m�ߧ@�~-�@�~9*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/03/08 10:00*/  
#include <stdio.h> //��ܮw
#include <stdlib.h>
int main(void){
	int i,j; //�w�q 
	for (i=1;i<=9;i++){  //�w�q��1-9���E�E���k�� 
		for(j=1;j<=9;j++)  //�w�q��1��9��,��1*1=1 1*2=2 ...........�H������ 
		printf("%d*%d=%2d  ",i,j,i*j); //��ܤE�E���k�� 
		printf("\n"); 
     }
	system("pause"); //�Ȱ����� 
	return 0; //�^�ǭȬ�0
}
