#include <stdio.h>
#include <string.h>


#define LEAST_FLOOR -3    //the  min floor the elevator can go to
#define GREATEST_FLOOR 5  //the max floor the elevator can go to

int current_floor = 0;
char*  direction = "up";  //the elevator is moving up
 
int Floor(char WantedFloor[]){
	int floor;
	char NewName[4];
	if (strcmp(WantedFloor, "B3") == 0){
		floor = -3;
	}
	else if(strcmp(WantedFloor, "B2" ) ==0){
		floor = -2;
	}
	else if(strcmp(WantedFloor, "B1")== 0){
		floor = -1;
	}
	else{
		switch ( WantedFloor[3]) { 
				
		case 'E':  //so a player can exit
		    floor = 7;
		    break;
		case 'G':
		   floor = 0;
		   break;
		case '1':
		   floor = 1;
		   break;
		case '2':
		   floor = 2;
		   break;
		case '3':
		   floor = 3;
		   break;
		case '4':
		   floor = 4;
		   break;
		case '5':
		   floor = 5;
		   break;
		default:
		   floor = 6;
		   break;

	    } //endSwitch

	} //endIf
	return floor;
	

 


void NumberToFloorName(int floor){
	switch ( floor) {
        case -3:
	   printf("B3  \n" );
	   break;
	case -2:
	   printf("B2 \n");
	   break;
	case -1:
	   printf("B1 \n");
	   break;
	case 0:
	   printf("G \n");
	   break;
	case 1:
	   printf("1 \n");
	   break;
	case 2:
	   printf("2 \n");
	   break;
	case 3:
	   printf("3 \n");
	   break;
	case 4:
	   printf("4 \n");
	   break;
	case 5:
	  printf("5 \n");
	  break;
	case 6:
	  printf("6 \n");
	  break;
	case 7:
	  printf("Exit \n");
	  break;

	}

}
	
void move_elevator(int destination){
	printf("Moving %s to floor \n" );
}

int main()
{
	int initial_floor=0, wanted_floor, passenger;

while(1){

	//the current floor
	printf("You are currently on floor ");
	NumberToFloorName(current_floor);

	//as the plauyer which floort hey want to go to
	char destination [9];
	printf("Hey, which floor would you like to go to (B3, B2, B1,G,1,2,3,4,5)?\n");
    scanf("%s", destination);


