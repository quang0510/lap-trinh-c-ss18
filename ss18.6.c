#include<stdio.h>
#include<string.h>
struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};
int main() {
    struct SinhVien sv[50] = {
    	{1, "Nguyen Dang Quang", 18, "038529321"},
        {2, "Nguyen Dang Xuan", 21, "092742184"},
        {3, "Vu Thi Dung", 22, "0948217451"},
        {4, "Nguyen Truc Nhat Mai", 18, "092467842"},
        {5, "Nguyen Dang Vinh", 24, "092174778"}
       
    };
    int size = 5;
        printf("Nhap thong tin sinh vien moi:\n");
        sv[size].id = size + 1;
        printf("Ten: ");
        getchar(); 
        fgets(sv[size].name, sizeof(sv[size].name), stdin);
        printf("Tuoi: ");
        scanf("%d", &sv[size].age);
        printf("So dien thoai: ");
        getchar();  
        fgets(sv[size].phoneNumber, sizeof(sv[size].phoneNumber), stdin);
        size++;
        printf("\nDanh sach sinh vien sau khi them moi:\n");
        for (int i = 0; i < size; i++) {
            printf("Sinh vien %d:\n", sv[i].id);
            printf("Ten: %s\n", sv[i].name);
            printf("Tuoi: %d\n", sv[i].age);
            printf("So dien thoai: %s\n", sv[i].phoneNumber);
            printf("\n");
        }
    return 0;
}

