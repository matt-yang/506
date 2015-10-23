/*
 * pen.cpp
 *
 *  Created on: Oct 21, 2015
 *      Author: m23yang
 */

#include <iostream>	//basic standard input-output library
#include <stdlib.h>	//standard library definitions
#include <math.h>	//math library, enables mathematical functions
#include <sstream>  //string stream
#include <string>   //string type
#include <fstream> //function stream library
#include <ostream>

#include "goldfis.h"

using namespace std;


int main() {

int pnum = 0;
int user1;
record pat[100];


while (1)
{

cout << endl <<  "==========================" << endl;
cout << "[Organ Transplant List]" << endl;
cout << "There are currently " << pnum << " patient(s) in the list" << endl;

cout << "Please choose an option:" << endl;
cout << "1. Add Patient" << endl;
cout << "2. Show Patients" << endl;
cout << "3. Save the List" << endl;
cout << "4. Quit" << endl;

cin >> user1;
cout << endl;

//switch-case to call other functions depending on user's choice
switch (user1){
case 1:
pnum++;
add(&pnum, pat); //Adds a patient
break;
case 2:
show(&pnum, pat); //Displays the patient list
break;
case 3:
{{
	{
	ofstream(file);
	file.open ("list.txt");
	file << pnum << " - number of patients";
	file << "ID\tName\tSex\tBlood\tOrgan\tAge\tWaiting Since" << endl;
	file << "===================================================================" << endl;
	for (int i=1; i<=pnum; i++)
	{
	file << i << "\t" << pat[i].lname << "," << pat[i].fname[0] << "\t";

	//computing char types to display gender type
	if (pat[i].sex == 0)
	{
	file << "M";
	} else
	{
		file << "F";
	}

	//computing string type to display blood types
	if (pat[i].blood == 0)
	{
		file << "\tA";
	} else if (pat[i].blood == 1)
	{
		file << "\tAB";

	}else if (pat[i].blood == 2)
	{
		file << "\tO";
	}else if (pat[i].blood == 3)
	{
		file << "\tB";
	}

	//computing string type to display organ type
	if (pat[i].organ == 0)
	{
		file << "\tHeart";
	} else if (pat[i].organ == 1)
	{
		file << "\tKidney";

	}else if (pat[i].organ == 2)
	{
		file << "\tLung";
	}else if (pat[i].organ == 3)
	{
		file << "\tLiver";
	}

	file << "\t" << pat[i].age << "\t" << pat[i].year << endl;

	}

	file.close();
	cout << "Writing to list..." << endl;
	break;
}}}
case 4:
quit(); //Ends the program
return 0;
break;
default:
cout << "Enter integer between 1 to 4!!!";
}

}
return 0;
}


