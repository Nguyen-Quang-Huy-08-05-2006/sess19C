#include<stdio.h>

void printfSV();
void sortSV();

typedef struct{
	int id;
	char name[50];
	int age;
	char phoneNum[15];
}SinhVien;

int main(){
    SinhVien sv[5]={
        {1,"Nguyen Van F",20,"0123456789"},
        {2,"Le Thi A",21,"0987654321"},
        {3,"Tran Van P",22,"0123454321"},
        {4,"Pham Thi O",19,"0999999876"},
        {5,"Hoang Van L",23,"0456123789"}
    };
    int size=5;
    printf("danh sach truoc khi sap xep:\n");
    printfSV(sv,size);
    sortSV(sv,size);
   	printf("\ndanh sach sau khi sap xep:\n");
    printfSV(sv,size);
    
	return 0;
}

void printfSV(SinhVien sv[],int size){
	for(int i=0;i<size;i++){
		printf("ID: %d|Ten: %s|Tuoi: %d|SDT: %s\n",sv[i].id,sv[i].name,sv[i].age,sv[i].phoneNum);
	}
}

void sortSV(SinhVien sv[],int size){
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(strcmp(sv[i].name,sv[j].name)>0){
				SinhVien temp=sv[i];
				sv[i]=sv[j];
				sv[j]=temp;
			}
		}
	}
}
