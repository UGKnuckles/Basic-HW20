#include<stdio.h>
#include<stdlib.h>

struct Phone{
	
	char *phone_brand;
	char *phone_model;
	char *phone_yearofmanufacture;
	int   phone_price;
	char *use_name;
	char *use_cellphone;
	
}phone[2]; 
int main(void){
	int i=0;
	struct Phone phone[5]={"HTC","820","2015/3/20",24000,"a","0952589503",
	                     "HTC","U11+","2019/5/3",15900,"b","0916855800",
						 "iphone","8","2017/2/24",21500,"c","0922738558",
						 "iphone","8 plus","2019/3/8",22500,"d","0975187483",
						 "HTC","U12+","2019/7/12",18900,"e","0282625396"};
	for(i=0;i<5;i++){
		printf("%s�����----------\n",phone[i].use_name);
		printf("����~�P:");
		puts(phone[i].phone_brand);
		printf("�������:");
		puts(phone[i].phone_model);
		printf("����X�t���:");
		puts(phone[i].phone_yearofmanufacture);
		printf("�������:");
		printf("%d\n",phone[i].phone_price);
		printf("�ϥΪ�:");
		puts(phone[i].use_name);
		printf("������X:");
		puts(phone[i].use_cellphone);
		printf("----------------\n\n");
	}                    
	
	system("pause");
	return 0;
	
}
