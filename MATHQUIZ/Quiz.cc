#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

#include "Quiz.h"

int counter = 0;

int Quiz::questions(){
	
	cout<< "MATH QUIZ" << endl;
	cout<< "-------------" << endl;
	cout<< "Here is the list of questions: " << "\n" <<endl;
	//array w/ math questions
	string questions[8] = {"1) What is 77 + 134?", "2) What is 52 + 99?", "3) What is 23 - 33?", "4) What is 65 - 43?", "5) What is 13 * 13?", "6) What is 36 * 45?", "7) What is 120 / 60?", "8) What is 45 / 13?"};
	int counter = 0;
	float input = 0.0; 	
	for(unsigned int i = 0;  i< sizeof(questions)/sizeof(questions[0]); i= i+1){
		cout<< questions[i] << " " ;
		cin>>input;
		if(input == 211 | input == 151 | input == -10 | input == 22| input == 169 | input == 1620| input == 2 | input == 3)
			counter++;
			
	}
		cout<< "\n"<<"You scored " << counter << "/8! "<<endl;
}

