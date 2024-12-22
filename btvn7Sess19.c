#include<stdio.h>

void printSVList();
void deleteSVId();
typedef struct{
    int id;
    char name[50];
    int age;
    char phoneNum[15];
}SinhVien;

int main(){
    SinhVien sv[5]={
	{1,"Nguyen Van A",20,"0123456789"},
	{2,"Le Thi B",21,"0987654321"},
	{3,"Tran Van C",22,"0111222333"},
	{4,"Pham Thi D",19,"0999888777"},
	{5,"Hoang Van E",23,"0888666555"}
	};
    int n=5;
    printSV(sv,n);
    int idDelete;
    printf("\nNhap ID sinh vien can xoa: ");
    scanf("%d",&idDelete);
    deleteSV(idDelete,sv,&n);
    printSV(sv,n);
    return 0;
}

void printSV(SinhVien sv[],int n){
    printf("\nDanh sach sinh vien:\n");
    for(int i=0;i<n;i++){
        printf("ID: %d|Ten: %s|Tuoi: %d|SDT: %s\n",sv[i].id,sv[i].name,sv[i].age,sv[i].phoneNum);
    }
}

void deleteSV(int id,SinhVien sv[],int *n){
    int found=0;
    for(int i=0;i<*n;i++){
        if(sv[i].id==id){
            found=1;
            for(int j=i;j<*n-1;j++){
                sv[j]=sv[j+1];
            }
            (*n)--;
            printf("Sinh vien voi ID %d da duoc xoa.\n",id);
            break;
        }
    }
    if(!found){
        printf("Khong tim thay sinh vien voi ID %d.\n",id);
    }
}
