#include<stdio.h>
int main(){
		float tall,fat,bmi;
		while(scanf("%f %f",&tall,&fat)!=EOF){
				tall=tall*0.01;
				bmi=fat/(tall*tall);
				printf("%.1f",bmi);
				if(bmi<18.5){
						printf(" underweight\n");
				}
				else if(18.5<=bmi&&bmi<24){
						printf(" normal\n");
				}
				else if(24<=bmi&&bmi<27){
						printf(" overweight\n");
				}
				else if(27<=bmi&&bmi<30){
						printf(" mild obesity\n");
				}
				else if(30<=bmi&&bmi<35){
						printf(" moderate obesity\n");
				}
				else if(35<=bmi){
						printf(" severe obesity\n");
				}
		}
		return 0;
}