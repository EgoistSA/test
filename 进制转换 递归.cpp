#include<cstdio>
using namespace std;
char change(int num){
	switch(num){
		case 10:return 'a';
		case 11:return 'b';
		case 12:return 'c';
		case 13:return 'd';
		case 14:return 'e';
		case 15:return 'f';
		default:return '0'+num;
	}
}
void tentok(int num,int k)
{
	char a;
	if(num==0) return;
 	tentok(num/k,k);
 	a=change(num%k);
  printf("%c",a);
 
 
}
//char change(int num){
//	switch(num){
//		case 10:return 'a';
//		case 11:return 'b';
//		case 12:return 'c';
//		case 13:return 'd';
//		case 14:return 'e';
//		case 15:return 'f';
//		default:'0'+num;
//	}
//}
int main(){
	int n,k;
	scanf("%x%d",&n,&k);
    if(n!=0)tentok(n,k);
	else printf("error");
	return 0;
}

