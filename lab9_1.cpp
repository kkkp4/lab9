#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double principle,interest,ppy;
	cout << "Enter initial loan: ";
	cin >> principle;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> ppy;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	for (int i = 1;principle>0;i++){
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i; 
		cout << setw(13) << left << principle;
		cout << setw(13) << left << principle*interest*10e-3;
		cout << setw(13) << left << principle+principle*interest*10e-3;
		if ((principle+principle*interest*10e-3)-ppy > 0){
			principle = (principle+principle*interest*10e-3)-ppy ;
		}
		else{
			ppy = (principle+principle*interest*10e-3) ;
			principle = 0 ;
		}
		cout << setw(13) << left << ppy;
		cout << setw(13) << left << principle;
		cout << "\n";	
	}
	return 0;
}
 