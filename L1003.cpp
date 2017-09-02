#include<stdio.h>
#include<string.h>  //strlen()function是包含在这个头文件里的 
void TongJi(char* a,int* b,int n);//统计部分的数据处理 
void PrintTJ(int* b);//输出统计后的结果 

int main(void){
	char a[1000];
//	char* p=a;
//	scanf("%s",a);
	gets(a);  		//不怎么会用gets函数 
	int n=strlen(a);   //字符串数组和指针是很相通的 
	int b[10]={0};
//testfunction
//	printf("%d",a[0]);   //发现字符数字和数字之间差48，即‘1’-1=48 
//	处理统计部分的函数，结果储存在一个数组中
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
