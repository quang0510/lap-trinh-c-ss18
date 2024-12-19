#include<stdio.h>

struct SinhVien{
	char name[50];
	int age;
	char phoneNumber[50];
};
	
int main() {
	struct SinhVien sv;
	strcpy(sv.name,"Nguyen Dang Quang");
	sv.age=18;
	strcpy(sv.phoneNumber,"0836668889");
	printf("Ten cua sinh vien : %s\n", sv.name);
	printf("Tuoi cua sinh vien : %d\n", sv.age);
	printf("Sdt cua sinh vien : %s", sv.phoneNumber);
	return 0;
}

