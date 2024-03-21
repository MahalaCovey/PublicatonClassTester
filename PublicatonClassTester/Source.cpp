// Mahala Covey
// CIS 1202 800
// March 20, 2024


// Driver for the Publication class.
#include <iostream>
#include "Publication.h"
using namespace std;

// Function prototype
void getPublicationInfo(Publication&);

int main()
{
	Publication media; 
	getPublicationInfo(media);
	cout << "The title is: " << media.getTitle() << endl;
	media.checkOut();
	cout << media.getStock() << " in stock" << endl;
	media.checkIn();
	cout << media.getStock() << " in stock" << endl;
	
	return 0;
}

//***********************************************************************************************************************************************************
// getPublicationInfo asks the user for publication information and stores it in the referenced Publication object parameter p by calling storePublication. *
//***********************************************************************************************************************************************************

void getPublicationInfo(Publication& p)
{
	// Variables to hold Publication members
	string pTitle = "";
	string pPublisher = "";
	float pPrice = 0; 
	int pYear = 0; 
	int iType; // To hold int type that will be assigned PublicationType pType
	PublicationType pType; 
	int pStock = 0; 

	// Prompt for and get input 
	cout << "Title: ";
	getline(cin, pTitle);
	cout << "Publisher: ";
	getline(cin, pPublisher);
	cout << "Price: ";
	cin >> pPrice;
	cout << "Year: ";
	cin >> pYear;
	cout << "1. Book / 2. Magazine / 3. Newspaper / 4. Audio / 5. Video" << endl;
	cout << "Type: ";
	cin >> iType;
	pType = static_cast<PublicationType>(iType - 1);
	cout << "Stock: ";
	cin >> pStock;

	p.storePublication(pTitle, pPublisher, pPrice, pYear, pType, pStock);
}