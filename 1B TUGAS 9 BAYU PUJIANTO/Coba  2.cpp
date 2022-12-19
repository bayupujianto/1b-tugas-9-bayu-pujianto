#include <iostream>
using namespace std;
int binarySearch(int array[], int x, int awal, int akhir) {
 while (awal <= akhir) {
int tengah = awal + (akhir - awal) / 2;
 if (array[tengah] == x)
 return tengah;
 if (array[tengah] < x)
 awal = tengah + 1;
 else
 akhir = tengah - 1;
 }
 return -1;
}

int main(void) {
int x, n, result, awal, akhir, tengah;
cout<<"Jumlah element yg di inginkan: ";
cin>>n;

int nilai [n];
for (int i = 0; i < n; i++){
    cout<<"Masukkan data pada indeks ["<<i<<":]: ";
    cin>>nilai[i];
}

cout<<endl;

for (const &i: nilai){
        cout<<i;
}
        cout<<endl;

cout<<"Data yang ingin dicari: ";
cin>> x;
n = sizeof(nilai)/sizeof(nilai[0]);
result = binarySearch(nilai, x, 0, n-1);
(result == -1)?cout<<"Tidak Ditemukan":cout<<"Data Ditemukan Pada Indeks: "<<result;
}
