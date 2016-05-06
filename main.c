#include <avr/io.h>
#include <avr/eeprom.h>


//Recipies in the order
float EEMEM curry1[6] = {4,0.65,0.5,1.5,0.5,0.75};
float EEMEM curry2[6] = {6,6,3,3,1,2.5};
float EEMEM curry3[6] = {3,2.5,0.5,0.75,0.5,0};
float EEMEM curry4[6] = {0.5,1,0.5,1,0,0};

//Define this function to get user input
int get_input();

int main(){

	
	//getting user input
	int recpNum = get_input();
	float  crntRcp[6];

	//decoding the recipe
	switch(recpNum){
		case 1:
			eeprom_read_block((void*)&crntRcp, (const void*)&curry1, 24);
			break;
		case 2:
			eeprom_read_block((void*)&crntRcp, (const void*)&curry2, 24);
			break;
		case 3:
			eeprom_read_block((void*)&crntRcp, (const void*)&curry3, 24);
			break;
		case 4:
			eeprom_read_block((void*)&crntRcp, (const void*)&curry4, 24);
			break;
	}

	 
	return 0;	
}

