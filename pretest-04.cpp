/*
Nama : Muhamad Farid Ridho Rambe
NPM  : 140810180033
Program : Sorting Singly Linked List
*/
#include <iostream>
#include <string.h>
using namespace std;

struct ElemtList{
	char npm[14];
	char nama[40];
	float ipk;
	ElemtList* next;
};
typedef ElemtList* pointer;
typedef pointer list;

void createList(list& first){
	first=NULL;
}
void createElement(pointer& pBaru,int n){
	pBaru = new ElemtList;
	cout<<"Masukkan NPM : ";
	cin>>pBaru->npm;
	cout<<"Masukkan Nama : ";
	cin.ignore();cin.getline(pBaru->nama,40);
	cout<<"Masukkan IPK : ";
	cin>>pBaru->ipk;
	pBaru->next = NULL;
}
void insertSortNPM(list& first,pointer pBaru){
	int n;
	for(int i=0;i<n;i++){
		int j,bd;
		j=i;
		for(int k=i+1;k<n;k++){
			bd=strcmp(pBaru[j].npm,pBaru[k].npm);
			if(bd==1){
				j=k;
			}
			else if(j!=i){
				char temp[14]; 
                strcpy(temp,pBaru[j].npm);
                strcpy(pBaru[j].npm,pBaru[i].npm);
                strcpy(pBaru[i].npm,temp);
			}
		}
	}
}
void traversal(list first){
	pointer pBantu;

    if (first == NULL)
    {
        cout << "List kosong" << endl;
    }

    else
    {
        int i = 1;
        pBantu = first;
        do
        {
            cout << "Nama " << i << " : " << pBantu->npm << endl;
            cout << "Nama " << i << " : " << pBantu->nama << endl;
            cout << "Nama " << i << " : " << pBantu->ipk << endl;
            ++i;
            pBantu = pBantu->next;
        } while (pBantu != NULL);
        
    }
}

int main(){
	pointer p;
	list Mhs;
	int pil,n;
	cout<<"Masukkan banyak data : ";
	cin>>n;
	createList(Mhs);
	for(int i=0;i<n;i++){
		createElement(p,i);
		system("cls");
	}
	insertSortNPM(Mhs,p);
	traversal(Mhs);
}
