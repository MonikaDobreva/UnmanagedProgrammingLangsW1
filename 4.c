#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void chess(int column, char row);

int main(){
    printf("start\n");
    int a = 1;
    char b = 'B';
    chess(a, b);
    return 0;
}

void chess(int column, char row){
    char rows[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    bool contains = false;
    for (int i = 0; i < 8; i++) {
        if (strchr(rows, row)) {
            contains = true;
            break;
        }
    }

    if (contains == false)
    {
        printf("Invalid row input! Try again!\n");
    }
    
    // if((strchr(rows, row) != 0)){
    //     printf("Invalid row input! Try again!\n");
    // }
    else if (row == 'A')
	{
		row = '0';
	}
	else if (row == 'B')
	{
		row = '1';
	}
	else if (row == 'C')
	{
		row = '2';
	}
	else if (row == 'D')
	{
		row = '3';
	}
	else if (row == 'E')
	{
		row = '4';
	}
	else if (row == 'F')
	{
		row = '5';
	}
	else if (row == 'G')
	{
		row = '6';
	}
	else if (row == 'H')
	{
		row = '7';
	}

    if (column >= 1 && column <=8){
    column = column--;
    } else {
        printf("Invalid column input! Try again!\n");
    }

    printf("%d, %c\n", column, row);
}