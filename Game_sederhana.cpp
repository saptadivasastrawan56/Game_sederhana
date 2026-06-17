#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));
	for (int i=1; i<=5; i++){
		int angka = rand() % 10 + 1;
		cout << "Angka Random : " <<angka<<endl;
	}
	return 0;
}
