#include<iostream>
#include<string>
#include<stdlib.h>
#include<conio.h>

using namespace std;

/*This is a program to manage a hotel viz LTS Hotel 
 This is a menu driven program where the user is given a menu to choose from:
 * Signin
* Use the hotel Faclties 
* Signout

Upon signin the user will be asked for his bio data, upon filling it correctly he will be provided with a roomnumber

The user will be hourly or as per use of the facilties

when the user sign out he will be presented with his final bill
*/
class Hotel
{
private:
	string name;
	int age;
	int hotelId;
	int roomNumber;
	float charges;
	string address;

public:

	//Constructor
	Hotel();
	//Function to get the variables
	void GetDetails();
	//Function to display the variables
	void DisplayDetails();
	//Function to charge the user 
	void  CalcBill(int time, float cost);
	
	//Getter Functions
	float ReturnBill()
	{
		return charges;
	}

	string ReturnName()
	{
		return name;
	}

	string ReturnAddress()
	{
		return address;
	}
	
	int ReturnAge()
	{
		return age;
	}

	int ReturnHotelId()
	{
		return hotelId;
	}

	int ReturnRoomNumber()
	{
		return roomNumber;
	}


}h;


//Prototypes
void SignIn();
void UseFacilities();
void DisplayBill();

//Function defintions 
Hotel::Hotel()
{
	name = "INVALID";
	age = 0;
	hotelId = 0;
	charges = 300.0f;
	address = "INVALID";

}

void Hotel::GetDetails()
{
	system("CLS");
	cout << "\nEnter the name: ";
	cin >> name;
	cout << "\nEnter your address: \n";
	cin >> address;
	cout << "\nEnter your age: ";
	cin >> age;

	// Assinging a random room number
	roomNumber = 100 + (rand() % static_cast<int>(500 - 100 + 1));

}


void Hotel::DisplayDetails()
{
	system("CLS");
	cout << "\t\t\t\t\t\t\t LTS HOTEL";
	cout << "\n\n\nNAME: " << name;
	cout << "\nAGE: " << age;
	cout << "\nADDRESS: " << address; 
	cout << "\nROOMID: " << roomNumber;
	cout << "\n\n\n";

}


void Hotel::CalcBill(int time,float cost)
{
	charges += time * cost;
}


// Function to display the menu and call the needed functions
void Menu()
{
	int choice=0;


	while (choice != 3)
	{
		system("CLS");

		//Main menu display
		cout << "\t\t\t\t\t\t\t LTS HOTELS";
		cout << "\n\n\n1) Register";
		cout << "\n2) Facilties";
		cout << "\n3) Sign out\n\n";
		cout << "\n\n  Enter your choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1: SignIn();
			break;

		case 2: UseFacilities();
			break;

		case 3:
			break;

		default:cout << "\n\n Please enter the correct option";
			break;
		}

		cout << "\n\nPress any key to continue";
		_getch();
	}

	cout << "\n\nPress any key to display the bill";
	
	DisplayBill();
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout<<"\n\n\n\n";
}


//Function to sign in the user
void SignIn()
{
	h.GetDetails();
	

}


//Function to display the facilities and call the required charge function
void UseFacilities()
{
	int choice=0, hours,use=0;

	while (choice!=6)
	{
		system("CLS");

		//Facilities menu display
		cout << "\t\t\t\t\t\t\t LTS HOTEL FACILTIES";
		cout << "\n\n\n1) Gym ($3/hr)";
		cout << "\n2) Pool ($5/hr)";
		cout << "\n3) Restaurent($25/hr)";
		cout << "\n4) Valet Services($20/hr)";
		cout << "\n5) Room Services($45/use)";
		cout << "\n6)End of service use";
		cout << "\n\n  Enter your choice: ";
		cin >> choice;

		//Choice based selection
		switch (choice)
		{
		case 1: cout << "\n Enter the number of hours used: ";
			cin >> hours;
			h.CalcBill(3, hours);
			break;

		case 2: cout << "\n Enter the number of hours used: ";
			cin >> hours;
			h.CalcBill(5, hours);
			break;

		case 3: cout << "\n Enter the number of hours used: ";
				cin >> hours;
			    h.CalcBill(25, hours);
				break;

		case 4: cout << "\n Enter the number of hours used: ";
			    cin >> hours;
				h.CalcBill(25, hours);
				break; 

		case 5: use++;
				h.CalcBill(45, use);
				break;

		case 6: break;
		
		default: cout << "Please enter the correct option";
			break;
		}
		cout << "\n\nEnter any key to continue";
		_getch();
	


	}
}

//Function to display the final bill
void DisplayBill()
{
	system("CLS");
	cout << "\t\t\t\t\t\t\t LTS HOTEL BILL";
	cout << "\n\n\nNAME: "<<h.ReturnName();
	cout << "\nROOM NUMBER: "<<h.ReturnRoomNumber();
	cout << "\nBILL: "<<h.ReturnBill();
}



//Main Function
int main()
{
	Menu();

	return 0;
}
