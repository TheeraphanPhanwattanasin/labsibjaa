#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,rate,per;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> per;

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
	cout << fixed << setprecision(2); 
	int i=0;
	double inter,total,prev,newb;
	prev = loan;
	inter = prev*(rate/100);
	total = prev+inter;
	newb = total - per;

while(total > per){
	i++;
		cout << setw(13) << left << i; 
		cout << setw(13) << left << prev;
		cout << setw(13) << left << inter;
		cout << setw(13) << left << total;
		cout << setw(13) << left << per;
		cout << setw(13) << left << newb;
		cout << "\n";	
	prev = newb;
	inter = prev*(rate/100);
	total = prev+inter;
	newb = total - per;
}

		cout << setw(13) << left << i+1; 
		cout << setw(13) << left << prev;
		cout << setw(13) << left << inter;
		cout << setw(13) << left << total;
		cout << setw(13) << left << total;
		cout << setw(13) << left << 0.00;
		cout << "\n";	

	return 0;
}