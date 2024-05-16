#include<iostream>
#include<cstdlib>
#include<ctime>


//cstdlib = generating random numbers
//ctime = working with time and date

using namespace std;
int main()
{
//	Rock beats Scissor
//Paper beats rock
//Scissor beats Paper

srand(time(NULL));
int user, computer;
char ans = 'y';

while(ans=='y' || ans=='Y'){


cout<<"************************************************************************************************************************\n\n";
cout<<"_______________________________________________Welcome to Rock Paper Scissor Game_______________________________________\n\n";
cout<<"************************************************************************************************************************\n\n";
cout<<"Rock = 1 \n";
cout<<"Paper = 2 \n";
cout<<"Scissor = 3 \n\n";
cout<<"Enter your choice : ";
cin>>user;

if(user==1){
	cout<<"You choose : Rock\n";
}
else if(user==2){
	cout<<"You choose : Paper\n";
}
else if(user==3){
	cout<<"You choose : Scissor\n";
}
else{
	cout<<"Invalid choice";
	return 0;
	}

computer = rand()%3+1;

if(computer==1){
	cout<<"Computer choose : Rock\n";
}
else if(computer==2){
	cout<<"Computer choose : Paper\n";
}
else if(computer==3){
	cout<<"Computer choose : Scissor\n";
}

//Now we match the results

if(user==computer){
	cout<<"Match Tie \n";
}

else if(user==1){
	if(computer==2){
		cout<<"You loose \n";
}
	 else if(computer==3){
		cout<<"You win \n";
	}
}

else if(user==2){
	if(computer==1){
		cout<<"You win \n";
}
	 else if(computer==3){
		cout<<"You loose \n";
	}
}

else if(user==3){
	if(computer==2){
		cout<<"You win \n";
}
	 else if(computer==1){
		cout<<"You loose \n";
	}
}

cout<<"Do you want to continue the game Enter Y/N\n";
cin>>ans;
}
if (ans == 'n' || ans == 'N') {
        cout << "Thanks for playing!\n";
    }

return 0;
}
