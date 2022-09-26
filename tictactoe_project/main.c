#include <stdio.h>
#include <unistd.h>
#include <dirent.h> //STANDARD LIBRARIES
#include <string.h>
#include <stdlib.h>
#include "./functions/functions_header.h" //USER-DEFINED LIBRARIES

int main()
{
    fflush(stdin);

    FILE *fp; // FILE POINTERS

    // VARIABLES DECLARATION
    int player = 1, i = 0, Game_index = 0, choice, winner = 0, userinput = 0, resume = 0, Wincounter[3] = {0, 0, 0}, session_loaded = 0, load = 0;
    char square[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char mark, name[100], player1[100], player2[100], winner_name[100], rename[100];
    // OPENING THE FILE WHERE THE STATS WILL BE SAVED OF CURRENT GAMING SESSION
    remove("sessions.txt");
    while (userinput != -1) //-1 WILL MAKE THE GAMING SESSION STOP(LOOP)
    {
        userinput = main_menu(Game_index); // ASKING USERINPUT FOR DIFFERENT FUNCTIONALITIES OF TIC-TAC-TOE
        if ((userinput > 3) && session_loaded == 0)
        {
            Game_index = 0;
            printf("\n you can only choose from 1-3 numbers\n");
        }
        else if ((userinput < 1) && session_loaded == 0)
        {
            Game_index = 0;
            printf("\n you can only choose from 1-3 numbers\n");
            if (userinput == -1)
            {
                printf("\n Gaming session stopped\n");
            }
        }
        else if (userinput == 1) // 2 PLAYERS GAME TIC-TAC-TOE
        {
            fp = fopen("sessions.txt", "a");
            char square[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}; // VALUES TO BE DISPLAYED ON GAMEBOARD
            if (userinput == 1 && session_loaded == 0)                      // WHEN NO GAME IS PLAYED
            {
                fp = fopen("sessions.txt", "a");
                printf("Enter the name of Player 1 :"); // PLAYER 1 NAME INPUT
                scanf("%s", &player1);
                // PRINTING NAME INTO STATS FILE
                printf("Enter the name of Player 2 :"); // PLAYER 1 NAME INPUT
                scanf("%s", &player2);
                // PLAYER 2 == "COMPUTER"
                session_loaded = 1;
                Game_index++;
            }
            do // GAME STARTS
            {

                displayboard(square); // GAMEBOARD IS DISPLAYED ON THE SCREEN
                // PLAYER-TURNS DECISION
                if (player % 2 == 1)
                {
                    player = 1;
                }
                else
                {
                    player = 2;
                }

                printf("Player %d turns:  \n ", player);
                scanf("%d", &choice); // PLAYER CHOOSE TO MARK ON A SPECIFIC BOARD LOCATION
                // PLAYER-MARKS DECISION
                if (player == 1)
                    mark = 'X';
                else
                    mark = 'O';

                mark_board(square, choice, mark); // FUNCTION THAT MARK THE BOARD EVERYTIME USER ENTERS A CHOICE

                i = check_for_win(square); // FUCTION TO CHECK THE WINNER AFTER FIRST 3 MOVES
                                           // GAME-WIN DECISIONS
                if (i == 1)
                {
                    if (player == 1)
                    {
                        winner = 1;
                    }
                    else
                    {
                        winner = 2;
                    }
                }
                player++;

                // WINNERNAMES
                if (winner == 1)
                {
                    strcpy(winner_name, player1);
                }
                else
                {
                    strcpy(winner_name, player2);
                }

                displayboard(square); // GAMEBOARD

                if (i == 1) // PLAYER WINS
                {
                    printf("player %d is winner_name : %s", winner, winner_name);

                    // COUNTER INC++
                    if (winner == 1)
                    {
                        Wincounter[0] = Wincounter[0] + 1; // IF PLAYER 1 WINS
                    }
                    else
                    {
                        Wincounter[1] = Wincounter[1] + 1; // IF PLAYER 2 WINS
                    }
                    // PRINTING IN SESSIONS.TXT
                    fprintf(fp, "%s\n", player1);
                    fprintf(fp, "%s\n", player2);
                    fprintf(fp, "\n%s vs %s : %s", player1, player2, winner_name);
                    fprintf(fp, "\n%s : %d | %s : %d | DRAW : %d\n", player1, Wincounter[0], player2, Wincounter[1], Wincounter[2]);
                    fclose(fp);
                }

                if (i == 0) // GAME DRAW
                {
                    printf("Game Draw\n");
                    Wincounter[2] = Wincounter[2] + 1; // IF THE GAME IS DRAWN
                    // PRINTING IN SESSIONS.TXT
                    fprintf(fp, "\n%s\n", player1);
                    fprintf(fp, "%s\n", player2);
                    fprintf(fp, "\n%s vs %s : %s", player1, player2, winner_name);
                    fprintf(fp, "\n%s : %d | %s : %d | DRAW : %d\n", player1, Wincounter[0], player2, Wincounter[1], Wincounter[2]);
                    fclose(fp);
                }

            } while (i == -1);
            // printf("\npress 3 to resume\n"); //WHEN GAME IS PLAYED ONCE
            // scanf("%d", &userinput);
            userinput = main_menu(Game_index);
            while (userinput == 3)
            {
                if (resume != 0) // RESUME INCREMENTS WHEN A GAME IS ALREADY RESUMED ONCE
                {
                    userinput = main_menu(Game_index); // 6 OPTIONS MENU DISPLAYS
                }

                if (userinput == 3) // RESUMING THE 2 PLAYER GAME
                {

                    fp = fopen("sessions.txt", "a");
                    char square[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}; // VALUES TO BE DISPLAYED ON GAMEBOARD
                    do                                                              // GAME STARTS
                    {

                        displayboard(square); // GAMEBOARD IS DISPLAYED ON THE SCREEN
                        // PLAYER-TURNS DECISION
                        if (player % 2 == 1)
                        {
                            player = 1;
                        }
                        else
                        {
                            player = 2;
                        }

                        printf("Player %d turns:  \n ", player);
                        scanf("%d", &choice); // PLAYER CHOOSE TO MARK ON A SPECIFIC BOARD LOCATION
                        // PLAYER-MARKS DECISION
                        if (player == 1)
                            mark = 'X';
                        else
                            mark = 'O';

                        mark_board(square, choice, mark); // FUNCTION THAT MARK THE BOARD EVERYTIME USER ENTERS A CHOICE

                        i = check_for_win(square); // FUCTION TO CHECK THE WINNER AFTER FIRST 3 MOVES
                                                   // GAME-WIN DECISIONS
                        if (i == 1)
                        {
                            if (player == 1)
                            {
                                winner = 1;
                            }
                            else
                            {
                                winner = 2;
                            }
                        }
                        player++;

                        // WINNERNAMES
                        if (winner == 1)
                        {
                            strcpy(winner_name, player1);
                        }
                        else
                        {
                            strcpy(winner_name, player2);
                        }

                        displayboard(square); // GAMEBOARD

                        if (i == 1) // PLAYER WINS
                        {
                            printf("player %d is winner_name : %s", winner, winner_name);

                            // COUNTER INC++
                            if (winner == 1)
                            {
                                Wincounter[0] = Wincounter[0] + 1; // IF PLAYER 1 WINS
                            }
                            else
                            {
                                Wincounter[1] = Wincounter[1] + 1; // IF PLAYER 2 WINS
                            }
                            // OPENING A TEMP FILE BEFORE PLAYER SAVE THE STATS OF CURRENT GAMING-SESSION

                            fprintf(fp, "\n%s vs %s : %s", player1, player2, winner_name);
                            fprintf(fp, "\n%s : %d | %s : %d | DRAW : %d\n", player1, Wincounter[0], player2, Wincounter[1], Wincounter[2]);
                            fclose(fp);
                        }

                        if (i == 0) // GAME DRAW
                        {
                            printf("Game Draw\n");
                            Wincounter[2] = Wincounter[2] + 1; // IF THE GAME IS DRAWN
                                                               // OPENING A TEMP FILE BEFORE PLAYER SAVE THE STATS OF CURRENT GAMING-SESSION

                            fprintf(fp, "\n%s vs %s : %s", player1, player2, winner_name);
                            fprintf(fp, "\n%s : %d | %s : %d | DRAW : %d\n", player1, Wincounter[0], player2, Wincounter[1], Wincounter[2]);
                            fclose(fp);
                        }

                    } while (i == -1);
                }
                resume++; // RESUME INCREMENTS
            }
        }

        else if (userinput == 2) // SINGLE PLAYER GAME WITH MACHINE
        {
            // STATS FILE TO STORE ALL STATS
            fp = fopen("sessions.txt", "a");
            char square[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}; // VALUES DISPLAYED ON GAMEBOARD
            if (userinput == 2 && session_loaded == 0)                      // WHEN NO GAME IS PLAYED
            {
                fp = fopen("sessions.txt", "a");
                printf("Enter the name of Player 1 :"); // PLAYER 1 NAME INPUT
                scanf("%s", &player1);
                // PRINTING NAME INTO SESSIONS FILE
                session_loaded = 1;
                Game_index++;
            }

            do
            {
                player = player % 2 == 0 ? 1 : 2; // PLAYERS-TURN DECISION

                displayboard(square); // DISPLAYING GAMING BOARD

                if (player == 1) // PLAYERS-MARK DECISION
                {
                    mark = 'X';
                }
                else
                {
                    mark = 'O';
                }

                if (player == 1) // PLAYER 1
                {
                    printf("Player %d turns:  \n ", player);
                    scanf("%d", &choice);
                }
                else // PLAYER 2
                {
                    choice = compmove(square, player, winner) + 1; // FUNCTION HOW COMPUTER CHOOSES TO MARK THE GB
                }

                mark_board(square, choice, mark); // MARK-BOARD FUNCTION

                i = check_for_win(square); // WIN-CHECK FUNCTION

            } while (i == -1); // LOOP REPEATS UNTIL i==0 || i==1

            displayboard(square); // DISPLAYING GAMEBOARD FUNCTION
            if (i == 1)           // WHEN THE COMPUTER WINS
            {
                printf("computer is winner  ");

                Wincounter[1] = Wincounter[1] + 1; // COUNTER++

                // TEMP FILE TO STORE STATS OF CURRENT GAMING SESSION BEFORE IT'S SAVED
                fprintf(fp, "%s\n", player1);
                fprintf(fp, "Computer\n");
                fprintf(fp, "\n%s vs Computer : Computer", player1);
                fprintf(fp, "\n%s : %d | Computer : %d | DRAW : %d", player1, Wincounter[0], Wincounter[1], Wincounter[2]);

                fclose(fp);
            }
            if (i == 0) // GAME DRAW
            {
                printf("Game Draw\n");

                Wincounter[2] = Wincounter[2] + 1; // COUNTER++

                // TEMP FILE TO STORE STATS OF CURRENT GAMING SESSION BEFORE IT'S SAVED
                fprintf(fp, "%s\n", player1);
                fprintf(fp, "Computer\n");
                fprintf(fp, "\n%s vs Computer : Computer", player1, winner_name);
                fprintf(fp, "\n%s : %d | Computer : %d | DRAW : %d\n", player1, Wincounter[0], Wincounter[1], Wincounter[2]);

                fclose(fp);
            }
            // printf("\npress 3 to resume\n");  //GAME IS RESUMED AFTER GAME IS PLAYED ONCE
            // scanf("%d", &userinput);
            userinput = main_menu(Game_index);
            while (userinput == 3)
            {
                if (resume != 0) // WHEN GAME IS ALREADY RESUMED ONCE
                {
                    userinput = main_menu(Game_index);
                }

                if (userinput == 3) // RESUMING SINGLE PLAYER GAME
                {

                    fp = fopen("sessions.txt", "a");
                    char square[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}; // VALUES DISPLAYED ON GAMEBOARD

                    do
                    {
                        player = player % 2 == 0 ? 1 : 2; // PLAYERS-TURN DECISION

                        displayboard(square); // DISPLAYING GAMING BOARD

                        if (player == 1) // PLAYERS-MARK DECISION
                        {
                            mark = 'X';
                        }
                        else
                        {
                            mark = 'O';
                        }

                        if (player == 1) // PLAYER 1
                        {
                            printf("Player %d turns:  \n ", player);
                            scanf("%d", &choice);
                        }
                        else // PLAYER 2
                        {
                            choice = compmove(square, player, winner) + 1; // FUNCTION HOW COMPUTER CHOOSES TO MARK THE GB
                        }

                        mark_board(square, choice, mark); // MARK-BOARD FUNCTION

                        i = check_for_win(square); // WIN-CHECK FUNCTION

                    } while (i == -1); // LOOP REPEATS UNTIL i==0 || i==1

                    displayboard(square); // DISPLAYING GAMEBOARD FUNCTION
                    if (i == 1)           // WHEN THE COMPUTER WINS
                    {
                        printf("computer is winner  ");

                        Wincounter[1] = Wincounter[1] + 1; // COUNTER++

                        // TEMP FILE TO STORE STATS OF CURRENT GAMING SESSION BEFORE IT'S SAVED
                        fprintf(fp, "\n%s vs Computer : Computer", player1);
                        fprintf(fp, "\n%s : %d | Computer : %d | DRAW : %d\n", player1, Wincounter[0], Wincounter[1], Wincounter[2]);

                        fclose(fp);
                    }
                    if (i == 0) // GAME DRAW
                    {
                        printf("Game Draw\n");

                        Wincounter[2] = Wincounter[2] + 1; // COUNTER++

                        // TEMP FILE TO STORE STATS OF CURRENT GAMING SESSION BEFORE IT'S SAVED
                        fprintf(fp, "\n%s vs Computer : %s", player1, winner_name);
                        fprintf(fp, "\n%s : %d | Computer : %d | DRAW : %d\n", player1, Wincounter[0], Wincounter[1], Wincounter[2]);

                        fclose(fp);
                    }
                }
                resume++;
            }
            fclose(fp); // CLOSING STATS FILE
        }
        else if (userinput == 3 && Game_index != 0)
        {
            printf("\nyou can't resume without playing\n");
        }
        else if (userinput == 4) // SHOW CURRENT AND ALL STATS FROM STATS.TXT FILE
        {
            printf("\nBEWARE, you can't resume once you asked to show stats\n");
            current_stats(); // FUNCTION TO PRINT STATS ON SCREEN
        }
        else if (userinput == 5) // SAVE CURRENT GAMING SESSION TO A .TXT FILE
        {
            savingGAMEtofile(); // SAVING GAMESESSION FUNCTION
        }
        // LOADING THE SAVED GAME USING 3 IN 1ST MENU(GAME-INDEX == 0) AND USING 6 IN 2ND MENU(GAME-INDEX ! =0)
        else if ((userinput == 6 && Game_index != 0) || (userinput == 3 && Game_index == 0))
        { // VARIABLES
            int check = 0;
            openfiles();
            check = existing_files(name); // ASK THE FILENAME
            if (check == 0 || check == 1)
                printf("\n%s\n", name);

            loadsavedGames(name, player1, player2); // READ DATA FROM SAVED FILE AND APPEND IT TO SESSION.TXT
            Game_index++;
           
            load++;
        }
        else // INVALID INPUT
        {
            printf("Game Session Stopped\n");
            break;
        }
    }
 session_loaded=1;
    remove("sessions.txt"); // REMOVING TEMP FILE AFTER A GAMING SESSION HAS BEEN SAVED
    return 0;
}
