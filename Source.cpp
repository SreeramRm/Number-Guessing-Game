#include<iostream>
#include<Windows.h>

int hostUserNum, guestUserNum;

int main()
{
	int choice;

	do {
		
		std::cout << "1.start 2.end \n Enter the option:";
		std::cin >> choice;

		system("cls");


		if (choice > 0 && choice<=2)
		{
			switch (choice)
			{

			case 1:		std::cout << "Enter a number for 1st guess:";
				std::cin >> hostUserNum;
				system("cls");

				std::cout << "Enter a number for 2rd guess::";
				std::cin >> guestUserNum;

				(hostUserNum == guestUserNum) ? std::cout << "correct!!" : std::cout << "failed";
				Sleep(1800);
				break;

			case 2:exit(0);
				
				break;
			
			default:("enter valid option");
			}
		
			
		}
		

		else
			std::cout << "Enter valid option\n\n";



	} while (choice > -1);



	/*if (hostUserNum == guestUserNum)
	{
		std::cout << "u were guess correct!!";
	}
	else
		std::cout << "guess failed";
		*/


	system("pause>0");
}
