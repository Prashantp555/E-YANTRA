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
	int l = ADC_Conversion(1);
	int m = ADC_Conversion(2);
	int r = ADC_Conversion(3);
	int nodes = node;
	int node_counter = 0;
	velocity(50, 50);
	while (node_counter != nodes) {
		l = ADC_Conversion(1);
		m = ADC_Conversion(2);
		r = ADC_Conversion(3);

		if (l == 0 && m == 255 && r == 0) {
			forward();
		}
		else if (l == 0 && m == 0 && r == 255) {
			right();
			_delay_ms(2);
		}
		else if(l ==  0 && m == 255 && r == 255)
		{
			right();
			_delay_ms(1);
		}
		else if (l == 255 && m == 255 && r == 0) {
			left();
			_delay_ms(1);
		}
		else if (l == 255 && m == 0 && r == 0) {
			left();
			_delay_ms(2);
		}
		else if( l == 255 && m == 255 && r == 255)
		{
			forward();
			_delay_ms(8);
			l = ADC_Conversion(1);
			m = ADC_Conversion(2);
			r = ADC_Conversion(3);
			if (l == 255 && m == 255 && r == 255) {
				printf("%d",node_counter);
				node_counter++;
				forward();
				_delay_ms(200);
			}
		}
	}
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
	velocity(50, 50);
	left();
	_delay_ms(25);
	int l = ADC_Conversion(1);
	while (l != 255)
	{
		l = ADC_Conversion(1);
	}
	stop();
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
	velocity(50, 50);
	right();
	_delay_ms(25);
	int r = ADC_Conversion(3);
	while (r != 255) {
		r = ADC_Conversion(3);
		printf("%d", r);
	}
	stop();
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
	printf("E Shape Called");
	forward_wls(1);
	stop();
	_delay_ms(2);
	printf("E Shape Called");
	right_turn_wls();
	forward_wls(2);
	stop();
	_delay_ms(2);
	right_turn_wls();
	forward_wls(1);
	stop();
	_delay_ms(2);
	right_turn_wls();
	forward_wls(1);
	stop();
	_delay_ms(50000);
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