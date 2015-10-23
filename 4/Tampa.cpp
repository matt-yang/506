/*
 * Tampa.cpp
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

#include "goldfis.h"

using namespace std;


//function to add number of patients
void add (int *pnum, record *pat ) {
stringstream mys;
char sexTypes;
string bTypes;
string oTypes;
string uin ="";
int x = *pnum;

//Displaying guidelines for user input
cout << "[Add Patient]" << endl;
cout << "Please enter the Patient Record: " << endl;
cout << "Order: First Name - Last Name - Sex - Bloodtype - Organ - Age - YearWaitingSince" << endl;

//Getting line from the user
cin.ignore();
getline(cin,uin);
cout << "[Adding]... " << endl;

//pushing different strings into struct variables
mys.str(uin);
mys >> pat[x].fname;
mys >> pat[x].lname;


//computing user choices on enums
mys >> sexTypes;
switch (sexTypes){
case 'M':
pat[x].sex= M;
break;
case 'F':
pat[x].sex= F;
break;
}

//computing user choices on enums
mys >> bTypes;
if(bTypes == "A"){
	pat[x].blood = A;
}else if (bTypes == "AB"){
	pat[x].blood = AB;
}else if (bTypes == "O"){
	pat[x].blood = O;
}else if (bTypes == "B"){
	pat[x].blood = B;
}

//computing user choices on enums
mys >> oTypes;

if(oTypes == "Heart"){
	pat[x].organ = Heart;
}else if (oTypes == "Kidney"){
	pat[x].organ = Kidney;
}else if (oTypes == "Lung"){
	pat[x].organ = Lung;
}else if (oTypes == "Liver"){
	pat[x].organ = Liver;
}
mys >> pat[x].age;
mys >> pat[x].year;


}
//function to display the patient record
void show (int *pnum, record *pat){
cout << "[Show Patients]" << endl;
cout << "ID\tName\tSex\tBlood\tOrgan\tAge\tWaiting Since" << endl;
cout << "===================================================================" << endl;
for (int i=1; i<=*pnum; i++){
cout << i << "\t" << pat[i].lname << "," << pat[i].fname[0] << "\t";

//computing char types to display gender type
if (pat[i].sex == 0){
cout << "M";
} else {
	cout << "F";
}

//computing string type to display blood types
if (pat[i].blood == 0){
	cout << "\tA";
} else if (pat[i].blood == 1){
	cout << "\tAB";

}else if (pat[i].blood == 2){
	cout << "\tO";
}else if (pat[i].blood == 3){
	cout << "\tB";
}

//computing string type to display organ type
if (pat[i].organ == 0){
	cout << "\tHeart";
} else if (pat[i].organ == 1){
	cout << "\tKidney";

}else if (pat[i].organ == 2){
	cout << "\tLung";
}else if (pat[i].organ == 3){
	cout << "\tLiver";
}

cout << "\t" << pat[i].age << "\t" << pat[i].year << endl;

}
}

//function to end the program
int quit (){
cout << "---------Thank you for using this program.---------" << endl;
while (true){
return 0;
}
}


