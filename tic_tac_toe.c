//Simple C tic tac toe game

#include <stdio.h>
#include <stdlib.h>

// number of squares
#define SIZE 9





//draw the board
void draw(char arr[]){

//write the header
printf("\n\n\n\n\n            Tic Tac Toe\n\n\n      Player1 (X)     Player2 (O)");


//draw board and put the numbers or signs into squares
printf("\n\n\n\n");
printf("    _____ _____ _____ \n");
printf("   |     |     |     |\n");
printf("   |  %c  |  %c  |  %c  |\n", arr[0], arr[1], arr[2]);
printf("   |_____|_____|_____|\n");
printf("   |     |     |     |\n");
printf("   |  %c  |  %c  |  %c  |\n", arr[3], arr[4], arr[5]);
printf("   |_____|_____|_____|\n");
printf("   |     |     |     |\n");
printf("   |  %c  |  %c  |  %c  |\n", arr[6], arr[7], arr[8]);
printf("   |_____|_____|_____|\n\n\n");



}






// find whose turn and and put the X or O to the relative square
char* choice(int index, char arr[]){
int player = index;
printf("Player %d enter the number: ", index % 2 +1 );






        scanf("%d", &index);

        while(arr[index-1] != index +48){
          printf("Wrong.  Please chose an empty square: ");
        scanf("%d", &index);

        }

        if(player % 2 == 0){
            arr[index - 1] = 'X';
        }
        else
            arr[index -1] = 'O';

        return arr;

        }







// check if a player has won by looking at every possible line
int check(char arr[]){

int num = -1;
    if ( (arr[0] == arr[1] && arr[0] == arr[2]) || (arr[0] == arr[4] && arr[0] == arr[8]) || (arr[0] == arr[3] && arr[0] == arr[6]) ){
        num = 0;
    }

    else if ( (arr[1] == arr[4] && arr[1] == arr[7]) ) {
        num = 1;
    }

    else if ( (arr[2] == arr[4] && arr[2] == arr[6]) || (arr[2] == arr[5] && arr[2] == arr[8]) ) {
        num = 2;
    }

    else if ( (arr[3] == arr[4] && arr[3] == arr[5]) ) {
        num = 3;
    }

    else if (arr[6] == arr[7] && arr[6] == arr[8]){
        num = 6;
    }

    return num;

}



int main() {

    int i;
    int number;
    
    fill the char array for the numbers in table
    char arr[SIZE];
    for(i = 0; i < SIZE; i++)
    arr[i] = 49 + i;

    //draw the table with array just has been created
    draw(arr);

    //take the input for char array draw the table control if game over
    // and print who has won or it is a draw
    for(i = 0; i < SIZE; i++){
        choice(i, arr);
        draw(arr);
        number = check(arr);
        if(number != -1)
        {
            if(arr[number] == 'X')
                printf("    Player 1 has won!\n\n\n\n");
            else
                printf("    Player 2 has won!\n\n\n\n");
        break;
        }
        if(i == SIZE-1)
    		printf("       DRAW");
        }


    return 0;
}
