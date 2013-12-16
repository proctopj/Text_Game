

#include <iostream>
#include <string>
#include "Character.h"
#include "Encounter.h"
#include "Foe.h"
using std::string;
using std::endl;
using std::cout;
using std::cin;


Character buildCharacter(){
	string name;
	unsigned short int age;
	bool sex=false;

	//this block determines one's gender
	cout << "Welcome player to Super Awesome Adventure Game (trademark pending). Before we begin, \nwhat is your gender (male/female)? " << endl;
	getline (cin, name);
	for(int i=0;name[i]!='\0';i++){
		name[i]=tolower(name[i]);
	}

	if(name.compare("female")!=0 && name.compare("male")!=0){
		while(true){
			cout << "You gave an invalid input for your gender. Qhat is your gender (male/female)? " << endl;
			getline (cin, name);
			for(unsigned short int i=0;name[i]!='\0';i++)
			{
				name[i]=tolower(name[i]);
			}
			if(name.compare("female")==0){
				cout << "You are female." << endl << endl;
				sex = true;
				break;
			}
			if(name.compare("male")==0){
				cout << "You are male." << endl << endl;
				break;
			}
		}
	}else{
		if(name.compare("female")==0){
			cout << "You are female." << endl;
			sex=true;
		} else
			cout << "You are male." << endl << endl;
	}

	//this block generates one's name
	if(sex)
		cout << "So then miss, what is your name? " << endl;
	else
		cout << "So then sir, what is your name? " << endl;

	getline (cin, name);

	while(true){
		cout << "Are you sure your name is: " << name << "? (y/n)" << endl;
		string check;
		getline (cin, check);
		for(unsigned short int i=0;name[i]!='\0';i++){
				name[i]=tolower(name[i]);
		}
		if(check.compare("y")==0){
			cout << endl;
			break;
		}
		while(true){
			if(check.compare("n")!=0){
				cout << "Are you sure your name is: " << name << "? (y/n)" << endl;
				getline (cin, check);
				for(unsigned short int i=0;name[i]!='\0';i++){
					name[i]=tolower(name[i]);
				}
			} else
				break;
		}
		if(sex)
			cout << "So then miss, what is your name? " << endl;
		else
			cout << "So then sir, what is your name? " << endl;
		getline (cin, name);
	}

	//this block generate's one's age
	cout << "How old are you? " << endl;
	cin >> age;
	cin.clear(); 
	while(true){
		cout << "Are you sure you are " << age << " years old? (y/n) " << endl;
		string ageCheck;
		getline (cin, ageCheck);
		for(unsigned short int i=0;name[i]!='\0';i++){
			name[i]=tolower(name[i]);
		}
		if(ageCheck.compare("y")==0){
			cout << endl;
			break;
		}
		while(true){
			if(ageCheck.compare("n")!=0){
				cout <<  "Are you sure you are " << age << " years old? (y/n) " << endl;
				getline (cin, ageCheck);
				for(unsigned short int i=0;name[i]!='\0';i++){
					name[i]=tolower(name[i]);
				}
			} else
				break;
		}
		cout << "How old are you? " << endl;
		cin >> age;
	}

	return Character(name,age,sex);
}//end buildCharacter

void Introduction(){
	cout << "This is where the introduction will go..." << endl;
}

int main(){
	Character myCharacter = buildCharacter();




  return 0;
}
