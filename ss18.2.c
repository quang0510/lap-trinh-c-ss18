#include<stdio.h>
	struct SinhVien{
		char name[50];
		int age;
		char phoneNumber[50];
	};

int main(){
	struct SinhVien sv;
	printf("moi ban nhap ten : ");
	fgets(sv.name,sizeof(sv),stdin);
	printf("moi ban nhap tuoi : ");
	scanf("%d",&sv.age);
	fflush(stdin);
	printf("moi ban nhap so dien thoai : ");
	fgets(sv.phoneNumber,sizeof(sv),stdin);
	
	printf("\n");
	
	printf("ten cua ban la : %s\n", sv.name);
	printf("tuoi cua ban la : %d\n", sv.age);
	printf("so dien thoai cua ban la : %s\n", sv.phoneNumber);

  return 0;
}

