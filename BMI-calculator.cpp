#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{

home:

	float x;
	float y;
	float BMI;
	int type;
	char again;


	cout << " Please choose your unit sets : " << endl;
	cout << " Enter 1 for using 'kg' in weight and 'm' in height " << endl;
	cout << " Enter 2 for using 'lb' in weight and 'in' in height " << endl;

	    cin >> type;

	if ( type == 1 )
	{
unit1x:
		cout << " Please enter your weight in kilogram " << endl;
	    cin >> x;

	    if ( x <= 10 or x >= 500 )
	    {
	    	cin.clear();
	    	cin.ignore(1024,'\n');
	    	cout << " Are you kidding me ?! Please renter your weight ! " << endl;
	    	goto unit1x;
	    }


unit1y:
	    cout << " Please enter your height in meters " << endl;
	    cin >> y;

	    if ( y > 110 and y <= 400 )
	    {
	    	cout << " Your height is in 'centimeter' and it is automaticlly converted ! " << endl;
	    	
	    	y = y/100;

	    }

	    else if ( y <= 1.1 or y >= 4.0 )
	    {
	    	cin.clear();
	    	cin.ignore(1024,'\n');
	    	cout << " This is crazy ! I'm not gonna calculate for you ! Please renter your height ! " << endl;
	    	goto unit1y;
	    	return y;
	    }

	    

	    BMI = x/(y*y);

	}
	
	else if ( type == 2 )
	{
unit2x:
		cout << " Please enter your weight in pounds " << endl;
		cin >> x;

		if ( x<= 22 or x >= 1100 )
		{
			cin.clear();
	    	cin.ignore(1024,'\n');
			cout << " Are you kidding me ?! Please renter your weight ! " << endl;
	    	goto unit2x;
	    	return x;
		}
unit2y:
		cout << " Please enter your height in inches " << endl;
		cin >> y;

		if ( y<= 43 or y >= 160 )
		{
			cin.clear();
	    	cin.ignore(1024,'\n');
			cout << " It's impossible ! Please renter your height ! " << endl;
	    	goto unit2y;
	    	return y;
		}

		BMI = (x/(y*y))*703;

    }

	else
	{
		cin.clear();
	    cin.ignore(1024,'\n');
		cout << " Error ! Please renter your choice ! " << endl;

		goto home;

		return 0;
	}

	cout << " Your BMI is " << BMI << " ! " << endl;

    if ( BMI <= 18.5 )
    {
    	cout << " Oops , You are under weight ! " << endl;
    }
    
    else if ( BMI >= 18.5 and BMI <= 25 )
    {
    	cout << " Congratulations ! You are in normal weight ! " << endl;
    }

    else if ( BMI >= 25 and BMI <= 30 )
    {
    	cout << " Oops , You are overweight ! " << endl;
    }

    else if ( BMI >= 30 and BMI <= 40 )
    {
    	cout << " Caution ! You are obistiy ! " << endl;
    }

    else if ( BMI > 40 )
    {
    	cout << " Dangerous !!!!!! Your are morbid obesity ! " << endl;
    }

final:

    cout << " Want one more try ? [y/n] " << endl;

       cin >> again;

    if ( again == 'y' )
    {
       cin.clear();
       goto home;
       
       return 0;
       
    }

    else if ( again == 'n' )
    {

    	cout << " Thank you for using ! " << endl;
        cin.clear();
    	return 0;
    	
    }

    else
    {
    	cin.clear();
	    cin.ignore(1024,'\n');
    	cout << " Come on ~ Make your choice again ! " << endl;

    	goto final;

    	return again;
    }


	return 0;
}