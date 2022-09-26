#include "functions_header.h"

int main_menu(int Game_index) // FUNCTION TO ASK USERINPUT
{
    int userinput;
    if (Game_index != 0) // THIS MENU WILL BE SHOWN AFTER FIRST GAME HAS BEEN PLAYED
    {
        printf("\nPress 1 to play with human (New Game)\nPress 2 to play with Machine (New Game)\nPress 3 to resume Game\nPress 4 to view current gaming stats\nPress 5 to save current progress\nPress 6 to load saved gaming session\nPress -1 to exit the Game\n");
    }
    else // MAIN-MENU BEFORE THE FIRST GAME STARTS
    {
        printf("\nPress 1 to play with human (New Game)\nPress 2 to play with Machine (New Game)\nPress 3 to load saved Game.\nPress -1 to exit the Game\n ");
    }
    scanf("%d", &userinput); // TAKING INPUT
    return userinput; // RETURN VALUE
}

void savingGAMEtofile() // SAVING THE TEMP FILE STATS INTO A NEW FILE
{
    char character, filename[100], name[100];
    int check = 0;
    FILE *file, *fp; // FILE POINTERS
    while (check == 0)
    {
        printf("Enter the file name\n");
        scanf("%s", &name);
        sprintf(filename, "./tictactoe/%s.txt", name); // FILE WILL BE MADE IN TIC-TAC-TOE FOLDER
        if (access(filename, F_OK) != 0)               // IF FILE IS NOT ALREADY CREATED, CREATE A NEW ONE
        {
            fp = fopen("sessions.txt", "r"); // READ STATS FROM TEMP FILE
            file = fopen(filename, "a");     // SAVE INTO NEW FILE (GAMING-SESSION)
            while ((character = fgetc(fp)) != EOF)
            {
                fputc(character, file);
            }
            fclose(fp);
            remove("sessions.txt"); // TEMP FILE REMOVED
            fclose(file);
            printf("Your file name is %s \nIf you want to see it enter 6 to access saved load games from main menu.\n\n ", name);
            check = 1;
        }
        else // IF FILE ALREADY EXISTS
        {
            printf("file is already created, please choose another name of file\n");
        }
    }
}

void current_stats() // SHOW THE CURRENT STATS WHICH ARE NOT SAVED YET
{

    FILE *fp;
    char ch;
    fp = fopen("sessions.txt", "r"); // OPEN AND PRINT(READ) THE STATS OF ALL GAMES FROM STATS.TXT
    while (1)
    {
        ch = fgetc(fp);
        printf("%c", ch);
        if (ch == EOF)
        {
            break;
        }
    }
    fclose(fp);
}

int loadsavedGames(char name[100], char player1[100], char player2[100]) // LOAD STATS FROM SAVED GAMES
{

    FILE *file, *fp;
    char character, filename[100];
    sprintf(filename, "%s", name);
    file = fopen(filename, "r"); // READ THE CHOOSEN FILE
    fp = fopen("sessions.txt", "a");
    if (access(filename, F_OK) == 0) // IF FILE ALREADY EXISTS OPEN IT
    {

        if (file == NULL)
        {
            printf("No file exists\n");
            return 0;
        }
        // fscanf(file, "%s", player1); //SCANF FIRST AND SECOND LINE FROM SAVED FINALLY
        // fscanf(file, "%s", player2);
        // fprintf(fp,"%s\n",player1); //PRINTING PLAYERS NAME INTO SESSION.TXT
        // fprintf(fp,"%s",player2);
        while ((character = fgetc(file)) != EOF)
        {
            fputc(character, fp);
        }
        fclose(file);
        fclose(fp);
    }
    // printf("\nPress 6 to resume the game from the main menu\n");
    return 0;
}

int openfiles() // OPEN ALL SAVED FILES IN TIC-TAC-TOE FOLDER
{
    DIR *d;
    struct dirent *directory;
    d = opendir("./tictactoe");
    if (d != NULL)
    {
        while ((directory = readdir(d)) != NULL) // PRINT ALL FILE NAMES IF EXIST
        {
            printf("%s\n", directory->d_name);
        }
        closedir(d);
        return 1;
    }
    else // IF NO FILE IS IN THE DIRECTORY
    {
        printf("error\n");
        return 0;
    }
}

int existing_files(char name[100]) // CHECKING THE FILE ENTERED EXISTS OR NOT
{
    char filename[100];
    printf("Enter the name of file\n");
    scanf("%s", &filename); // ASKING THE FILE NAME
    sprintf(name, "./tictactoe/%s.txt", filename);
    if (access(name, F_OK) == 0) // IF THE FILE ALREADY EXISTS
    {
        return 0;
    }
    printf("can't open file\n");
    return 1;
}

void displayboard(char square[]) // GAMEBOARD FUNCTION
{
    system("cls");

    printf("\n\n Tic Tac Toe \n\n");
    printf("Player 1 (X) - Player 2 (O) \n\n");
    printf("           |     |     \n");
    printf("       %c   |  %c  |  %c \n", square[0], square[1], square[2]);
    printf("      _____|_____|_____\n");
    printf("           |     |     \n");
    printf("        %c  |  %c  |  %c \n", square[3], square[4], square[5]);
    printf("      _____|_____|_____\n");
    printf("           |     |     \n");
    printf("        %c  |  %c  |  %c \n", square[6], square[7], square[8]);
    printf("           |     |     \n");
}

void mark_board(char square[], int choice, char mark) // FUNCTION TO MARK ON GAMEBOARD ACC TO PLAYER CHOICE
{
    if (choice == 1 && square[0] == '1')
    {
        square[0] = mark;
    }
    else if (choice == 2 && square[1] == '2')
    {
        square[1] = mark;
    }
    else if (choice == 3 && square[2] == '3')
    {
        square[2] = mark;
    }
    else if (choice == 4 && square[3] == '4')
    {
        square[3] = mark;
    }
    else if (choice == 5 && square[4] == '5')
    {
        square[4] = mark;
    }
    else if (choice == 6 && square[5] == '6')
    {
        square[5] = mark;
    }
    else if (choice == 7 && square[6] == '7')
    {
        square[6] = mark;
    }
    else if (choice == 8 && square[7] == '8')
    {
        square[7] = mark;
    }
    else if (choice == 9 && square[8] == '9')
    {
        square[8] = mark;
    }
    else
    {
        ("Invalid option\n");
    }
}

int check_for_win(char square[]) // FUNCTION RETURNS 1 WHEN A PLAYER WINS OTHERWISE RETURNS 0
{
    if (square[0] == square[1] && square[1] == square[2])
        return 1;

    else if (square[3] == square[4] && square[4] == square[5])
        return 1;

    else if (square[6] == square[7] && square[7] == square[8])
        return 1;

    else if (square[0] == square[3] && square[3] == square[6])
        return 1;

    else if (square[1] == square[4] && square[4] == square[7])
        return 1;

    else if (square[2] == square[5] && square[5] == square[8])
        return 1;

    else if (square[0] == square[4] && square[4] == square[8])
        return 1;

    else if (square[2] == square[4] && square[4] == square[6])
        return 1;

    else if (square[0] != '1' && square[1] != '2' && square[2] != '3' && square[3] != '4' && square[4] != '5' && square[5] != '6' && square[6] != '7' && square[7] != '8' && square[8] != '9')
        return 0;

    else
        return -1;
}

int minimax(char square[], int player) // ARTIFICIAL INTELLIGENCE
{
    int winner_name = check_for_win(square); // CHECKWIN FUNCTION

    int turn = -1;
    int score = -2;

    if (winner_name == 0)
        return 0; // IF DRAW

    if (winner_name != -1)
    {
        if (winner_name == 1)
            return -1; // IF PLAYER WINS
        else
            return 1; // IF COMPUTER WINS
    }

    for (int i = 0; i < 9; i++)
    {
        if (square[i] != 'X' && square[i] != 'O')
        {
            square[i] = player % 2 == 1 ? 'X' : 'O';
            int tempscore = -minimax(square, (player % 2 == 1 ? 2 : 1)); // MINIMAX ALGO (RECURSION)
            square[i] = 48 + (i + 1);

            if (tempscore > score) // WINCHANCES==TEMPSCORE
            {
                score = tempscore; // turns laga raha hai or dekh raha hai kis jagah py turn use kerny se max win possibility hai!
                turn = i;          // CHECKING ON EACH INDEX WHERE WINNING CHANCES ARE MOST HIGH
            }
        }
    }

 

    return score;
}

int compmove(char square[], int player, int winner_name) // FUNCTION HOW COMPUTER TAKES TURN
{
    int turn = -1;
    int score = -2;

    for (int i = 0; i < 9; ++i)
    {
        if (square[i] != 'X' && square[i] != 'O')
        {
            square[i] = 'O';
            int tempScore = -minimax(square, (player % 2 == 1 ? 2 : 1)); // RECURSION
            square[i] = 48 + (i + 1);

            if (tempScore > score)
            {
                score = tempScore;
                turn = i;
            }
        }
    }

    return turn;
}