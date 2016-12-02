#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	char letter;
	int  numa = 0, numb = 0, numc = 0, numd = 0, unknown = 0;
	double num=0, price, suma=0, sumb =0, sumc=0, sumd=0, sume=0;
	string partname;


	ifstream inputfile;
	inputfile.open("text.txt");

	cout << " ------------Inventory Report------------------------- "<<endl;
	cout << fixed << setprecision(2);

	
	while (inputfile >> partname >> letter >> num >> price)
	{
		
			if (letter == 'A')
			{
				numa++;
				suma = suma + (num * price);
			}
			else if (letter == 'B')
			{
				numb++;
				sumb = sumb + (num * price);

			}
			else if (letter == 'C')
			{

				numc++;
				sumc = sumc + (num * price);
			}
			else if (letter == 'D')
			{
				numd++;
				sumd = sumd + (num * price);

			}
			else
			{
				unknown++;
				sume = sume + (num * price);

			}



		}
	

	cout << "A parts cout:" << setw(3 )<<  numa << "  Value of invertory: "<< setw(5) << suma <<endl;
	cout << "B parts cout:" << setw(3) << numb << "  Value of invertory: "<< setw(5) << sumb<<endl;
	cout << "C parts cout:" << setw(3) << numc << "  Value of invertory: "<< setw(5) << sumc<<endl;
	cout << "D parts cout:" << setw(3) << numd << "  Value of invertory: "<< setw(5) << sumd<<endl;
	cout << "Unknown cout:" << setw(3) << unknown <<"  Value of invertory: "<< setw(5) << sume<<endl;
	
	inputfile.close();
	return 0;

    
	/* Here is the output
     
	------------Inventory Report-------------------------
	A parts cout: 85  Value of invertory: 191180.07
	B parts cout: 69  Value of invertory: 74764.16
	C parts cout: 76  Value of invertory: 49506.06
	D parts cout: 61  Value of invertory: 22738.69
	Unknown cout: 13  Value of invertory: 4282.68
	Press any key to continue . . .

	
	*/
	



	


}
