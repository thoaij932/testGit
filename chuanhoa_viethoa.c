#include<stdio.h>
#include<conio.h>
#include<string.h>
void Xoa(char a[200], int vt)
{	int i;
	for(i=vt;i<strlen(a);i++)
	 {	a[i]=a[i+1];
	 
	}
		}
void ChuanHoa(char a[100]){
	int i;
	for(i=0;i<strlen(a);i++){
	 if(a[i]==' '&&a[i+1]==' ' ){ Xoa(a,i); i--;}
	 if(a[0]==' ') { Xoa(a,0);}
	 if(a[strlen(a)-1]==' ') {Xoa(a,strlen(a)-1);}}
	}
int Tu(char a[200]){
	int i;
	int dem=1;
	for(i=0;i<strlen(a);i++){
		if(a[i]==' ') dem=dem+1;}
		return dem;
		}
void VietHoa(char a[200]){
	int i;
	strlwr(a);
	for(i=1;i<strlen(a);i++)
	{	if(a[i]==' ') a[i+1]=toupper(a[i+1]);}
	a[0]=toupper(a[0]);
	}		
int main(){
	char a[200];
	printf("nhap chuoi:");
	gets(a);
	ChuanHoa(a);
	printf("chuoi sau chuan hoa:");
	puts(a);
	printf("so tu cua chuoi =%d\n",Tu(a));
	 VietHoa(a);
	 printf("chuoi sau viet hoa:");
	puts(a);
	}		
