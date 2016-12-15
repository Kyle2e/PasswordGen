#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void PassWordOne();
void PassWordTwo();
void PassWordThree();
void PassWordFour();
void PassWordFive();
void PassWordSix();
void MainMenu();

int main()
{
	MainMenu();
	return 0;
}
void MainMenu()
{
	int select;

	cout << "Welcome To PassLogic 1.0" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "1. 8 Character Password" << endl;
	cout << "2. 16 Character Password" << endl;
	cout << "3. 32 Character Password" << endl;
	cout << "4. 64 Character Password" << endl;
	cout << "5. 128 Character Password" << endl;
	cout << "6. 255 Character Password" << endl;
	cout << "7. Exit Program" << endl;
	cout << "" << endl;
	cin >> select;

	system("CLS");
	if (select < 1 || select > 7)
	{
		cout << "That is an invalid number try agin !!" << endl;
		system("PAUSE");
		MainMenu();
	}
	switch (select)
	{
	case 1:
		PassWordOne();
		break;
	case 2:
		PassWordTwo();
		break;
	case 3:
		PassWordThree();
		break;
	case 4:
		PassWordFour();
		break;
	case 5:
		PassWordFive();
		break;
	case 6:
		PassWordSix();
		break;
	case 7:
		system("EXIT");
		break;
	}
}
void PassWordOne()
{
	int random1[1000];
	string charPool[70]{"!","@","#","$","%","&","*","q","w","e","r","t","y","u","i","o","p","a","s","d","f","g","h","j","k","l","z","x","c","v","b","n","m","Q","W","E","R","T","Y","U","I","O","P","A","S","D","F","G","H","J","K","L","Z","X","C","V","B","N","M","1","2","3","4","5","6","7","8","9","0" };
	int temp = 0;
	int temp2 = 0;
	srand(time(0));

	for (int x = 0; x <= 8; x++)
	{
		temp = (rand() % 70);
		random1[x] = temp;
	}
	cout << "" << endl;
	cout << "Your password" << endl;
	cout << "" << endl;
	for (int i = 0; i <= 8; i++)
	{
		temp2 = random1[i];
		cout << charPool[temp2] << "" << "" << "" << "";
	}
	cout << "" << endl;
	cout << "" << endl;
	system("PAUSE");
	system("CLS");
	MainMenu();
}
void PassWordTwo()
{
	int random2[1000];
	string charPool[70]{ "!","@","#","$","%","&","*","q","w","e","r","t","y","u","i","o","p","a","s","d","f","g","h","j","k","l","z","x","c","v","b","n","m","Q","W","E","R","T","Y","U","I","O","P","A","S","D","F","G","H","J","K","L","Z","X","C","V","B","N","M","1","2","3","4","5","6","7","8","9","0" };
	int temp = 0;
	int temp2 = 0;
	srand(time(0));

	for (int x = 0; x <= 16; x++)
	{
		temp = (rand() % 70);
		random2[x] = temp;
	}
	cout << "" << endl;
	cout << "Your password" << endl;
	cout << "" << endl;
	for (int i = 0; i <= 16; i++)
	{
		temp2 = random2[i];
		cout << charPool[temp2] << "" << "" << "" << "";
	}
	cout << "" << endl;
	cout << "" << endl;
	system("PAUSE");
	system("CLS");
	MainMenu();
}
void PassWordThree()
{
	int random3[1000];
	string charPool[70]{ "!","@","#","$","%","&","*","q","w","e","r","t","y","u","i","o","p","a","s","d","f","g","h","j","k","l","z","x","c","v","b","n","m","Q","W","E","R","T","Y","U","I","O","P","A","S","D","F","G","H","J","K","L","Z","X","C","V","B","N","M","1","2","3","4","5","6","7","8","9","0" };
	int temp = 0;
	int temp2 = 0;
	srand(time(0));

	for (int x = 0; x <= 32; x++)
	{
		temp = (rand() % 70);
		random3[x] = temp;
	}
	cout << "" << endl;
	cout << "Your password" << endl;
	cout << "" << endl;
	for (int i = 0; i <= 32; i++)
	{
		temp2 = random3[i];
		cout << charPool[temp2] << "" << "" << "" << "";
	}
	cout << "" << endl;
	cout << "" << endl;
	system("PAUSE");
	system("CLS");
	MainMenu();
}
void PassWordFour()
{
	int random4[100];
	string charPool[70]{ "!","@","#","$","%","&","*","q","w","e","r","t","y","u","i","o","p","a","s","d","f","g","h","j","k","l","z","x","c","v","b","n","m","Q","W","E","R","T","Y","U","I","O","P","A","S","D","F","G","H","J","K","L","Z","X","C","V","B","N","M","1","2","3","4","5","6","7","8","9","0" };
	int temp = 0;
	int temp2 = 0;
	srand(time(0));

	for (int x = 0; x <= 64; x++)
	{
		temp = (rand() % 70);
		random4[x] = temp;
	}
	cout << "" << endl;
	cout << "Your password" << endl;
	cout << "" << endl;
	for (int i = 0; i <= 64; i++)
	{
		temp2 = random4[i];
		cout << charPool[temp2] << "" << "" << "" << "";
	}
	cout << "" << endl;
	cout << "" << endl;
	system("PAUSE");
	system("CLS");
	MainMenu();
}
void PassWordFive()
{
	int random5[1000];
	string charPool[70]{ "!","@","#","$","%","&","*","q","w","e","r","t","y","u","i","o","p","a","s","d","f","g","h","j","k","l","z","x","c","v","b","n","m","Q","W","E","R","T","Y","U","I","O","P","A","S","D","F","G","H","J","K","L","Z","X","C","V","B","N","M","1","2","3","4","5","6","7","8","9","0" };
	int temp = 0;
	int temp2 = 0;
	srand(time(0));

	for (int x = 0; x <= 128; x++)
	{
		temp = (rand() % 70);
		random5[x] = temp;
	}
	cout << "" << endl;
	cout << "Your password" << endl;
	cout << "" << endl;
	for (int i = 0; i <= 128; i++)
	{
		temp2 = random5[i];
		cout << charPool[temp2] << "" << "" << "" << "";
	}
	cout << "" << endl;
	cout << "" << endl;
	system("PAUSE");
	system("CLS");
	MainMenu();
}
void PassWordSix()
{
	int random6[1000];
	string charPool[70]{ "!","@","#","$","%","&","*","q","w","e","r","t","y","u","i","o","p","a","s","d","f","g","h","j","k","l","z","x","c","v","b","n","m","Q","W","E","R","T","Y","U","I","O","P","A","S","D","F","G","H","J","K","L","Z","X","C","V","B","N","M","1","2","3","4","5","6","7","8","9","0" };
	int temp = 0;
	int temp2 = 0;
	srand(time(0));

	for (int x = 0; x <= 255; x++)
	{
		temp = (rand() % 70);
		random6[x] = temp;
	}
	cout << "" << endl;
	cout << "Your password" << endl;
	cout << "" << endl;
	for (int i = 0; i <= 255; i++)
	{
		temp2 = random6[i];
		cout << charPool[temp2] << "" << "" << "" << "";
	}
	cout << "" << endl;
	cout << "" << endl;
	system("PAUSE");
	system("CLS");
	MainMenu();
}






