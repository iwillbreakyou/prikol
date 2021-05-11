
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	setlocale(0, "rus");
	const int rad=25, mesto=36;
	int zal[rad][mesto];
	int d =1 ;
	cout << endl<<"";
	cout << "1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36"<<endl<<endl;
	for (unsigned int j = 0; j < 25; j++) {
		for (unsigned int i = 0; i < 36; i++) {
			zal[j][i] = 0 + rand() % 2;
			cout << zal[j][i] << "  ";
			
			if (i == 35) {
				cout <<"  " <<d;
			}
			
		}
		d++;
		cout<<endl;
		
	}
	cout << "----------------------------------------------------------------------------------------------------------"<<endl;
	int sum = 0;
	for (unsigned int j = 0; j < 36; j++) {
		sum += zal[11][j];
	}


	cout << "Проданых мест в 12 ряду: "<<sum;
	






}
