#include<stdio.h>

int main(void){
	int num[1000];
	num[0]=2; num[1]=3;
	int a=0;//num's index which will be divid the candi
	int i=1;//num's index
	int candi=3;//후보군 숫자
	char ndiv=1;//나누지지 않을시에 참
	while(i<=999){
		while(ndiv&&a<=i){
			if(candi%num[a]==0)
				ndiv=0;
			else
				a++;
		}
		if(ndiv){
			num[++i]=candi;
		}
		a=0;candi++;ndiv=1;//초기화과정
	}
	for(i=0;i<1000;i++){
		printf("%7d, ",num[i]);
	}
}
