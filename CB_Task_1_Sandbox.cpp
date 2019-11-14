//You are allowed to define your own function to fulfill the requirement of tasks
//Dont change the name of following functions

#include "CB_Task_1_Sandbox.h"

/*
*
* Function Name: forward_wls
* Input: node
* Output: void
* Logic: Uses white line sensors to go forward by the number of nodes specified
* Example Call: forward_wls(2); //Goes forward by two nodes
*
*/
void forward_wls(unsigned char node)
{

}
/*
*
* Function Name: left_turn_wls
* Input: void
* Output: void
* Logic: Uses white line sensors to turn left until black line is encountered
* Example Call: left_turn_wls(); //Turns right until black line is encountered
*
*/
void left_turn_wls(void)
{

}

/*
*
* Function Name: right_turn_wls
* Input: void
* Output: void
* Logic: Uses white line sensors to turn right until black line is encountered
* Example Call: right_turn_wls(); //Turns right until black line is encountered
*/
void right_turn_wls(void)
{

}

/*
*
* Function Name: e_shape
* Input: void
* Output: void
* Logic: Use this function to make the robot trace a e shape path on the arena
* Example Call: e_shape();
*/
void e_shape(void)
{
	unsigned char a = ADC_Conversion(1);
	unsigned char b = ADC_Conversion(2);
	unsigned char c = ADC_Conversion(3);
	int x = 0;
	while (1)
	{
		unsigned char a = ADC_Conversion(1);
		unsigned char b = ADC_Conversion(2);
		unsigned char c = ADC_Conversion(3);
		switch (x)
		{
		case 0:

			while (a == 0 && b == 255 && c == 0)
			{
				forward();
				_delay_ms(6500);
			}
			break;


		case 1:
			right();
			_delay_ms(450);

			while (a == 0 && b == 255 && c == 0)
			{
				forward();
			}
			break;
		case 2:

			while (a == 0 && b == 255 && c == 0)
			{
				forward();
			}
			break;
		case 3:
			right();
			_delay_ms(450);

			while (a == 0 && b == 255 && c == 0)
			{
				forward();
			}
			break;
		case 4:
			right();
			_delay_ms(450);

			while (a == 0 && b == 255 && c == 0)
			{
				forward();
			}
			break;
		case 5:
			right();
			_delay_ms(450);

			while (a == 0 && b == 255 && c == 0)
			{
				forward();
			}
			break;
		default:
			stop();
			break;

		}
		if ( a == 255 && b == 255 && c == 255)
		{
			x = x + 1;
		}


	}
	
}


/*
*
* Function Name: Task_1_1
* Input: void
* Output: void
* Logic: Use this function to encapsulate your Task 1.1 logic
* Example Call: Task_1_1();
*/
void Task_1_1(void)
{
	forward();
	_delay_ms(500);

	right();
	_delay_ms(450);

	forward();
	_delay_ms(8000);

	left();
	_delay_ms(450);

	forward();
	_delay_ms(500);

	soft_right();
	_delay_ms(450);
	
	forward();
	_delay_ms(500);
		
	soft_left();
	_delay_ms(450);

	forward();
	_delay_ms(900);

	soft_right();
	_delay_ms(900);
	
	forward();
	_delay_ms(500);

    left();
	_delay_ms(450);

	forward();
	_delay_ms(6500);

}

/*
*
* Function Name: Task_1_2
* Input: void
* Output: void
* Logic: Use this function to encapsulate your Task 1.2 logic
* Example Call: Task_1_2();
*/
void Task_1_2(void)
{
	//write your task 1.2 logic here
}