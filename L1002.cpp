#include<stdio.h>
#include<math.h>

int Shaloushu_ScopeIs(int n);//判断沙漏规模 
void Print_Shalou(int n,char c);//打印沙漏 
int main(void){
	int N,n;
	char c;
	scanf("%d %c",&N,&c);
	
	n = Shaloushu_ScopeIs(N);
	//测试函数
	//printf("%d",n); 
	Print_Shalou(n,c);
	printf("%d\n",N-2*n*n+1);
	//测试函数
	//printf("%c",c); 
} 
int Shaloushu_ScopeIs(int n){//判断沙漏规模 
	//double mid1 = n+1;
	//int s;
	int s = floor(sqrt((n+1)/2));//沙漏层数是小于或等于mid1的开根 
	return s;
}

void Print_Shalou(int n,char c){
	int i;			//内循环 
	int j;			//外循环 

	for(j=0 ; j<n ; j++){  //上半个图形 
	    int k=j;
		while(k){
			printf(" ");
			k--;
			}
		for(i=0 ; i<2*(n-j)-1 ; i++){
			printf("%c",c);
		}
		printf("\n");
	}
	
	for(j=1 ; j<n ; j++ ){  //下半个图形 
		int k=n-j-1;
		while(k){
			printf(" ");
			k--;
			}
		for(i=0 ; i<2*j+1 ; i++){
			printf("%c",c);

		}
		printf("\n");
	} 

	
}

