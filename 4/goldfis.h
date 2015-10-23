/*
 * goldfis.h
 *
 *  Created on: Oct 21, 2015
 *      Author: m23yang
 */

#ifndef GOLDFIS_H_
#define GOLDFIS_H_

using namespace std;

enum sexTypes{
M,
F,
} ;

//enumerating the blood types
enum bTypes {
A,
B,
O,
AB,
};

//enumerating the organ types
enum oTypes{
Heart,
Kidney,
Lung,
Liver,
};

//structure declaration for
 struct record { //Declaration of variables and enum types
string fname;
string lname;
sexTypes sex;
bTypes blood;
oTypes organ;
int age;
int year;

};

typedef record pat[100];

void add (int *pnum, record *pat );
void show (int *pnum, record *pat);

int quit ();




#endif /* GOLDFIS_H_ */
