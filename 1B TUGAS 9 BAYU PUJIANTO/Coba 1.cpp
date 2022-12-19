#include <iostream>
using namespace std;
int search(int arr[], int n, int x){
for (int i=0;i<n;i++)
    if(arr[i]== x)
    return i;
    return -1;
}

int main(){
    int n, x, result;
    cout<<"Jumlah element array yang kita inginkan: ";
    cin>>n;
    }


int nilai [n];
for (int i = 0; i < n; i++){
    cout<<"Masukkan data pada indeks ["<<i<<":]: ";
    cin>>nilai[i];
}
cout<<endl;

    for (const &i:nilai){
        cout<<i;
        cout<<endl;
    }

    cout<<"Data yang ingin kita cari: ";
    cin>>b;

{

    int n = sizeof(nilai) / sizeof(nilai[0]);
    int result = search(nilai, n, x);
    (result == -1) ? cout << "Tidak Ditemukan" : cout << "Elemen ditemukan pada index: " <<
    result;
}
