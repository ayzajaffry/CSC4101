#include <iostream>
#include <string>
void Trap_State();
using namespace std;

// Main function
int main () {
	char True_Transition[] = {'T', 'T', 'T', 'T', 'T'};
	char False_Transition[] = {'T', 'T', 'F', 'F', 'T'};
	char decision;
	int i = 0;
	
	cout << "Do you want to test the proper transition or the false transition? (y/n) \n";
	cin >> decision;
	
	if (decision == 'y' || decision == 'Y')
	{
		while (i < 5) {
			{
			if (True_Transition[i] == 'T')
					i++;
			else
				Trap_State();	
			}	
		}
		
		cout << "The input "<< True_Transition << " is correct"; 
	}
	
	else if (decision == 'n' || decision == 'N')
	{
			while (i < 5) {
			{
			if (False_Transition[i] == 'T')
					i++;
			else
				Trap_State();	
			}	
		}
		
		cout << "The input "<< False_Transition << " is incorrect"; 
	}

    return 0; 
}

void Trap_State() {
	cout << "Invalid input. Please try again.\n";
	
	return;
}
