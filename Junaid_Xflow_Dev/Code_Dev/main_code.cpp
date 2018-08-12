		
		//***********************	Main Body 	**********************************
		
#include <iostream>
#include <conio.h>
#include <string.h>
#include"FUNCT.h"

using namespace std;

main()
{
	 cout<<"\n**********************************************************************\n";
     cout<<"\n************************** Calulator ******************************* \n";
     cout<<"\n********************************************************************** \n";


float a,b;
int option;
	
	while(1)
	{
			cout<<"\n \n \t THIS CALCULATOR CAN PERFORM \n \n 1- ADDITION \t \t  2- SUBTRACTION \n \n 3- MULTIPLICATION \t  4- DIVISION \n ";
			cout<<" \n \n TO SELECT ANY OPERATION USING 1 , 2 , 3 or 4 ";
			cout<<"\n \n TYPE YOUR OPTION :  ";

					cin>>option;
					if(option>4)
								{
									cout<<"\n ************* -Error  Incorrect option entered- ***************** \n";
									break;
								}
					else{

						cout<<"\n Enter Your 1st Number \n ";
						cin>>a;

						cout<<"\n Enter Your 2nd Number \n";
						cin>>b;

								if(option==1)
									add(a,b);


								else if(option==2)
									sub(a,b);

								else if(option==3)
									mult(a,b);

								else if(option==4)
									div(a,b);

						}
}
}

