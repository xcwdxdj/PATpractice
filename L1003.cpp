#include<stdio.h>
#include<string.h>  //strlen()function�ǰ��������ͷ�ļ���� 
void TongJi(char* a,int* b,int n);//ͳ�Ʋ��ֵ����ݴ��� 
void PrintTJ(int* b);//���ͳ�ƺ�Ľ�� 

int main(void){
	char a[1000];
//	char* p=a;
//	scanf("%s",a);
	gets(a);  		//����ô����gets���� 
	int n=strlen(a);   //�ַ��������ָ���Ǻ���ͨ�� 
	int b[10]={0};
//testfunction
//	printf("%d",a[0]);   //�����ַ����ֺ�����֮���48������1��-1=48 
//	����ͳ�Ʋ��ֵĺ��������������һ��������
	TongJi(a,b,n);
	PrintTJ(b);
} 
void TongJi(char* a,int* b,int n){
	int i;
		for(i=0; i<n; i++){
			int c=a[i]-48;
			b[c]++;
		} 
	}
	
void PrintTJ(int* b){
	for(int i=0; i<10; i++){
		if(b[i]){
			printf("%d:%d\n",i,b[i]);
		}
	}
} 
