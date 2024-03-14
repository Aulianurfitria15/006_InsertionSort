

#include <iostream>
using namespace std;

int n;
int arr[9];

void input() {      //procedur untuk input

	while (true) {
		cout << "Masukan banyaknya elemen pada array : ";     // output ke layar
		cin >> n;       //input dari pengguna
		if (n <= 20)    //jika n kurang dari atau sama dengan 20
			break;      //keluar dari loop
		else {          //jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";  //output ke layar
		}
	}

	cout << endl;                                 //output baris kosong
	cout << "=======================" << endl;              //output ke layar
	cout << "Masukan Elemen Array" << endl;       //output ke layar
	cout << "=======================" << endl;    //output ke layar

	for (int i = 0; i < n; i++) {         //looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ": ";   //output ke layar
		cin >> arr[i];   //input pengguna
	}

}

void display() {
	cout << endl;
	cout << "=================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "=================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << arr[j];
		if (j < n - 1) {
			cout << " --> ";
		}
	}
	cout << endl;
	cout << endl;
	cout << "Jumlah pass = " << n - 1 << endl;
	cout << endl;

}

void insertionSort() {
    int i, n, temp, j;
    int arr[9];

    for (i = 1; i <= n - 1; i++) {     //step 1

        temp = arr[i];    //step 2

        j = i - 1;    //step 3

        while (j >= 0 && arr[j] > temp)   //step 4
        {
            arr[j + 1] = arr[j];    //step 4a
            j = j - 1;   // step 4b
        }

        arr[j + 1] = temp;   //step 5
    }
}

int main() {
	input(); // call the input function to get user input
	insertionSort();  //call the selection sort function
	display();   // display the sorted array
	system("pause");

	return 0;
}