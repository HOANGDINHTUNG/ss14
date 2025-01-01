#include<stdio.h>
int main(){
	char arr[]="HOANG DINH TUNG";
	int lentgh=sizeof(arr)/sizeof(char);
	for(int i=0;i<lentgh;i++){
		printf("strings[%d] = %c\n",i,arr[i]);
	}
	printf("Do dai cua chuoi la: %d",lentgh);
	return 0;
}
