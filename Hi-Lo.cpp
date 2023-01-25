#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<string>

using namespace std;
int main(){
// total chances
int tchance=5;
// x=number a=guess b=Score of each successful chance chance= chances utilized
int x, chance, a;
char b,c,d;
string guess;

//Start
cout << "--------------- Hi-Lo ---------------" << endl << endl;
cout << "Welcome to the game" << endl;
cout << "Wait system is picking a random number" << endl << endl;

cout << "Note:" << endl;
cout << "	1. You have 5 tries to guess the number" << endl;
cout<< "	2. Number should be between 0 & 100" << endl << endl;

//srand for changing of number every time user plays
unsigned change = time(0);
srand (change);

// rand%100 so number should be between 0-100
x= (rand()%100);


// Chances at start
chance=0;

cout << "Number has been Picked successfully" << endl << endl;

// Taking guess from user
cout << "What is your Guess of number" << endl;
cin >> guess;


a= guess[0,1,2,3,4,5,6,7];


//Conditions for number & Guess
if ( a<=100 && a>=0 ){
	
	//For higher Guess
	if (a>x){
		cout << "Your guess is high. Try a lower one" << endl << endl;
		cout << "----------------------------------------------------" << endl << endl;
		}
		
	//For lower Guess
	else if (a<x){
		cout << "Your guess is low. Try a higher one" << endl << endl;
		cout << "----------------------------------------------------" << endl << endl;
		}
			
	//For correct guess
	else if (a=x){
		cout << "Congratulations Your Guess is correct" << endl << endl;
		cout << "----------------------------------------------------" << endl << endl;
		return 0;
		}
}

//For number not between 0-100
else{
	cout << "Your guess " << a << " is invalid it must be between 0-100" << endl;
	cout << "----------------------------------------------------" << endl << endl;
}

//After every trial chance increases
 chance++;
 
 
 // for 2nd guess
 cout << "What is your Guess of number" << endl;
cin >> guess;
a= guess[0,1,2,3,4,5,6,7];
 
 //Conditions for number & Guess
if ( a<=100 && a>=0){
	
	//For higher Guess
	if (a>x){
		cout << "Your guess is high. Try a lower one" << endl << endl;
		cout << "----------------------------------------------------" << endl << endl;
		}
		
	//For lower Guess
	else if (a<x){
		cout << "Your guess is low. Try a higher one" << endl << endl;
		cout << "----------------------------------------------------" << endl << endl;
		}
			
	//For correct guess
	else if (a=x){
		cout << "Congratulations Your Guess is correct" << endl << endl;
		cout << "----------------------------------------------------" << endl << endl;
		return 0;
		}
}

//For number not between 0-100
else{
	cout << "Your guess " << a << " is invalid it must be between 0-100" << endl;
	cout << "----------------------------------------------------" << endl << endl;
}

//After every trial chance increases
 chance++;
 
 // for 3rd Guess
 cout << "What is your Guess of number" << endl;
cin >> guess;
a= guess[0,1,2,3,4,5,6,7];

 //Conditions for number & Guess
if ( a<=100 && a>=0){
	
	//For higher Guess
	if (a>x){
		cout << "Your guess is high. Try a lower one" << endl << endl;
		cout << "----------------------------------------------------" << endl << endl;
		}
		
	//For lower Guess
	else if (a<x){
		cout << "Your guess is low. Try a higher one" << endl << endl;
		cout << "----------------------------------------------------" << endl << endl;
		}
		
	else if (b== 'x' || c=='x' || d=='x'){
		cout << "Invalid Guess" << endl << endl;
		cout << "----------------------------------------------------" << endl << endl;
	}
			
	//For correct guess
	else if (a=x){
		cout << "Congratulations Your Guess is correct" << endl << endl;
		cout << "----------------------------------------------------" << endl << endl;
		return 0;
		}
}

//For number not between 0-100
else{
	cout << "Your guess " << a << " is invalid it must be between 0-100" << endl;
	cout << "----------------------------------------------------" << endl << endl;
}

//After every trial chance increases
 chance++;
 
 // for 4th guess
 cout << "What is your Guess of number" << endl;
cin >> guess;
a= guess[0,1,2,3,4,5,6,7];

 //Conditions for number & Guess
if ( a<=100 && a>=0){
	
	//For higher Guess
	if (a>x){
		cout << "Your guess is high. Try a lower one" << endl << endl;
		cout << "----------------------------------------------------" << endl << endl;
		}
		
	//For lower Guess
	else if (a<x){
		cout << "Your guess is low. Try a higher one" << endl << endl;
		cout << "----------------------------------------------------" << endl << endl;
		}
			
	//For correct guess
	else if(a=x) {
		cout << "Congratulations Your Guess is correct" << endl << endl;
		cout << "----------------------------------------------------" << endl << endl;
		return 0;
		}
}

//For number not between 0-100
else{
	cout << "Your guess " << a << " is invalid it must be between 0-100" << endl;
	cout << "----------------------------------------------------" << endl << endl;
}

//After every trial chance increases
 chance++;
 

 // for 5th guess
 cout << "What is your Guess of number" << endl;
cin >> guess;
a= guess[0,1,2,3,4,5,6,7];
cout << endl << endl;
if ( a<=100 && a>=0){
	
	//For higher Guess
	if (a>x){
		cout << "Your guess is high. Try a lower one" << endl << endl;
		cout << "----------------------------------------------------" << endl << endl;
		}
		
	//For lower Guess
	else if (a<x){
		cout << "Your guess is low. Try a higher one" << endl << endl;
		cout << "----------------------------------------------------" << endl << endl;
		}
			
	//For correct guess
	else if(a=x) {
		cout << "Congratulations Your Guess is correct" << endl << endl;
		cout << "----------------------------------------------------" << endl << endl;
		return 0;
		}
}
 
 //when all chances are utilized
	   cout<<"Only 5 chances are allowed. Better luck next time" << endl;
	   cout<<"The actual number was "<< x <<endl << endl;
	   cout << "----------------------------------------------------" << endl << endl;
	   

cout << "Thank you for playing hi-lo" << endl << endl; 

return 0;

}
