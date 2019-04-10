#include <iostream>
#include <string>
#include "Car.cpp"

using namespace std;

int main(){
	
	string s1, s2, s3;
	char playeranswer;
	
	car chevy;
	
	cout << "Here's your current car and its condition. \n";
	
	cout << Chevy.getStatus() << endl;
	
	do{
		cout << "\n Select an action: \n";
		cout << " > \t set make (m) \n";
		cout << " > \t set Model (M) \n";
		cout << " > \t set color (c) \n";
		cout << " > \t turn car on (o) \n";
		cout << " > \t turn car off (O) \n";
		cout << " > \t increase speed (s) \n";
		cout << " > \t decrease speed (d) \n";
		cout << " > \t turn left (l) or right (r) \n";
		cout << " > \t quit program (q) \n";
		cin >> playeranswer;
		
		swtich (playeranswer) {
			case 'm':
					cout << "Enter your make ";
					cin >> s1;
					chevy.setMake(s1);	
					
			break;
			
			case 'M':
					cout << "Enter your model ";
					cin >> s1;
					chevy.setModel(s1);
					
			break;
			
			case 'c':
					cout << "Enter your car color ";
					cin >> s1;
					chevy.setColor(s1);
					
			break;
			
			case 'o':
					// turn car on
					chevy.turnOnCar(s1);
					
			break;
			
			case 'O':
					// turn car off
					chevy.turnOffCar(s1);
					
			break;
			
			case 's':
					chevy.increaseSpeed(s1);
					
			break;
			
			case 'd':
					chevy.decreaseSpeed(s1);
					
			break;
			
			case 'l':
					chevy.turnLeft(s1);
					
			break;
			
			case 'r':
					chevy.turnRight(s1);
					
			break;
			
			case 'q':
					cout << "thank you for playing\n";
					playeranswer = 'q';
					
			break;
			
		}
		
		cout << chevy.getStatus() << endl;
		
	}while(playeranswer != 'q');
	
	return 0;
}