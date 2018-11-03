#include <iostream>
// Library needed to get a random number
#include <time.h>
using namespace std;

 
int main ()
{
  
int Number, Balance, Bet, Prize, Loss,y;
  
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
  
 
while(Balance > 0)

 {
      
cout << "You Have " << Balance << " For Bet" << endl; // print the current balance of user

cout << "Enter Your Bet Ammount: "; // ask the user to enter the bet and start the loop

cin>>Bet;


 if (Bet < Balance)                          //condition if bet is less than balance

  {
    cout << "Choose Number 1 or 0: "; //ask the user to enter number between 1 and 0
      
    cin >> Number;

         if (Number == random)	                   // if the number is right at the moment
         {  
             cout << "Your Guess Is Right" << endl;
             
             cout << "Congratulation! You Win The Bet" << endl; // print the wining message
	  
             Prize = 2 * Bet + Balance; //mathematical operation to calculate the prize
	  
             cout << "Your Balance Become: " << Prize << endl;	// print the balance after win

             Balance = Prize;

             cout<<"Press 1 To Continue....."<<endl; // continue the program

             cin>>y;
         }

      
         else if (Number==1 || Number==0 )               // condition if Number is wrong at the moment
	
         {
	      
         cout << "Your Guess Is Wrong" << endl; 

         cout << "Sorry! You Loose The Bet" << endl;    // bet loose
	  
         Loss = Balance - Bet;   //mathematical operation to calculate the loss

         cout << "You Balance Become: " << Loss << endl; // shows the balance after loss

         Balance = Loss;

         cout<<"Press 1 To Continue....."<<endl; // it continue the program

         cin>>y;
         }
         else
	
	     {
        
         cout <<"You Enter The Number Rather Then 1 and 0" << endl; //if the user enter the number rather than 1 and 0

         cout << "You Break The Rule Of Game" << endl;

         cout << "You Are Cashing Out" << endl; // print the cashing out message
	  
         cout << "***GAME OVER***" << endl;

         break; // quit the program

         }     

    }
 else
    {   
         cout << "You Balance Is Not Enough To Continue The Game" << endl;

         cout << "SORRY! You Are Cashing Out" << endl; // print the cashing out message
	  
         cout << "***GAME OVER***" << endl;
         
         break; // quit the program
    } 
 }       
  while (y ==1 ); // it continue the program

  return 0; // it return the zero value
}
