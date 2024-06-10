Diketahui data sebagai berikut (1,2,3,4,5,5) Carilah angka 5 berada pada indexs berapa saja menggunakan sequential search!

#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int data[n] = {1,2,3,4,5,5};
    int find = 5;
    int found = false;
    int i;

    for (i = 0; i < n; i++){
        if(data[i] == find){
            found == true;
            break if data[i] = finished;
        }
    }
    cout << "\t Diketahui data sebagai berikut (1,2,3,4,5,5) Carilah angka 5 berada pada
     indexs berapa saja menggunakan sequential search!\n" << endl;
		cout << " data: {1,2,3,4,5,5} "<< endl;
	if (found){
		cout << "\n angka "<< cari << " Ditemukan pada indeks ke- " << i << endl;
	} else {
		cout << find << " Tidak Ada Find Didalam Data " << endl;
	}
	return 0;
}


