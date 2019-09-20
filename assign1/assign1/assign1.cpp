#include <iostream>
using namespace std; 

const int maxwith = 300;
const int minwith = 1;
int calcBill(int reqamt); 



int main()
{
	int reqamt = 0;

	//request withdrawal amount 

		cout << "Enter amount to withdraw. " << endl;
		
		cin >> reqamt;
		do
		{
			if (reqamt <= minwith || reqamt > maxwith) // ensure withdrawals are between 1 and 300 
			{
				cout << "Invalid withdrawal amount. " << endl;
				cout << "Enter amount to withdraw." << endl;
				cin >> reqamt;
			}
			else if (reqamt >= minwith && reqamt <= maxwith)
			{

				calcBill(reqamt);

				cout << "Request new withdrawal or enter 0 to quit. " << endl; 
			}
			cin >> reqamt;

		} while (reqamt != 0); // enter 0 to quit function 


	system("pause"); 
	return 0;

}

int calcBill( int reqamt)
{
	string no; 
	
	int $1 = 0, $5 = 0, $10 = 0, $20 = 0, $50 = 0;
	$50 = reqamt / 50;
	reqamt = reqamt % 50;
	$20 = reqamt / 20;
	reqamt = reqamt % 20;
	$10 = reqamt / 10;
	reqamt = reqamt % 10;
	$5 = reqamt / 5;
	reqamt = reqamt % 5;
	$1 = reqamt / 1;
	reqamt = reqamt % 1;

	// print out results, prevent 0 from being listed if there are no bills 

	if ($50 < 1)
		cout << "you have no " << "$50 bills." << endl; 
	else 
	cout << "you have " << $50 <<" $50 bills." << endl;
	if ($20 < 1)
		cout << "you have no $20 bills." << endl; 
	else
	cout << "you have " << $20 <<" $20 bills." << endl;
	if ($10 < 1)
		cout << "you have no $10 bills. " << endl; 
	else 
		cout << "you have " << $10 <<" $10 bills. " << endl;
	if ($5 < 1)
		cout << "you have no $5 bills. " << endl; 
	else 
		cout << "you have " << $5 <<" $5 bills." << endl;
	if ($1 < 1)
		cout << "you have no $1 bills. " << endl; 
	else
		cout << "you have " << $1 << " $1 bills. "<< endl;
	
	return 0;

}

