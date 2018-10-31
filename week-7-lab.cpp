#include <iostream>
// Library needed to get a random seed
#include <time.h>
using namespace std;

 
int main ()
{
  
int Number, Balance, Bet, Prize, Loss, y;
  
Balance = 500;
  
    // Gets a random seed for our rand() function
    // ONLY RUN ONCE
    srand (time (NULL));
  
 
    // Picks either 0 or 1 randomly with equal probablilty      
    // CAN BE RUN AS MANY TIMES AS NEEDED
  int random = rand () % 2;
  
  
cout << "*************" << endl;
  
cout << "** WELCOME **" << endl; // print the welcome message
  
cout << "*************" << endl;
  
 
  do
    
    {
      
cout << "You Have " << Balance << " For Bet" << endl; // print the current balance of user
      
cout << "Choose Number 1 or 0: "; //ask the user to enter number between 1 and 0
      
cin >> Number;

cout << "Enter Your Bet Ammount: "; // ask the user to enter the bet

cin>>Bet;

 if (Bet > Balance)                          // condition if bet is more then balance

{
  cout << "SORRY! You Are Cashing Out" << endl; // it end the program if the above condition meet

  cout<< "***GAME OVER***";

  return 0; // quit the program

}

 if (Number == 0)	                            // condition if input Number is 0
	  
{
	  
cout << "Sorry! You Loose The Bet" << endl;    // bet loose
	  
Loss = Balance - Bet;
cout << "You Balance Become: " << Loss << endl; // shows the lost ammount

Balance = Loss;

cout<<"Press 1 To Continue....."<<endl; // it continue the program

cin>>y;

}
      
else if (Number == 1)               // condition if Number is equal to 1
	
{
	  
cout << "Congratulation! You Win The Bet" << endl; // print the wining message
	  
Prize = 2 * Bet + Balance;
	  
cout << "Your Balance Become: " << Prize << endl;	// print the balance after win

Balance = Prize;

cout<<"Press 1 To Continue....."<<endl; // continue the program

cin>>y;

}
      
      else
	
	{
	  
cout << "SORRY! You Are Cashing Out" << endl; // print the cashing out message
	  
cout << "***GAME OVER***" << endl;

return 0; // quit the program

     }     

}
while (y ==1 ); // it continue the program
while(Bet>=Balance || Loss==Balance); //it repeat the program according to condition
 
return 0; // it return the zero value

}
