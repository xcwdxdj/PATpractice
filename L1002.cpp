#include<stdio.h>
#include<math.h>

int Shaloushu_ScopeIs(int n);//�ж�ɳ©��ģ 
void Print_Shalou(int n,char c);//��ӡɳ© 
int main(void){
	int N,n;
	char c;
	scanf("%d %c",&N,&c);
	
	n = Shaloushu_ScopeIs(N);
	//���Ժ���
	//printf("%d",n); 
	Print_Shalou(n,c);
	printf("%d\n",N-2*n*n+1);
	//���Ժ���
	//printf("%c",c); 
} 
int Shaloushu_ScopeIs(int n){//�ж�ɳ©��ģ 
	//double mid1 = n+1;
	//int s;
	int s = floor(sqrt((n+1)/2));//ɳ©������С�ڻ����mid1�Ŀ��� 
	return s;
}

void Print_Shalou(int n,char c){
	int i;			//��ѭ�� 
	int j;			//��ѭ�� 

	for(j=0 ; j<n ; j++){  //�ϰ��ͼ�� 
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
	
	for(j=1 ; j<n ; j++ ){  //�°��ͼ�� 
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

