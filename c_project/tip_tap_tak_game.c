// This is my first project  in  my life  .

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include<windows.h>

void design_box(int a[][4], int n)
{
    int i, j;
    for (int i = 0; i < n; i++)
    {
        for (j = 1; j < n && i != 0; j++)
        {
            printf("|");
            printf("    ");
            if (a[i][j] == -1)
                printf(" ");
            else if (a[i][j] == 1)
                printf("O");
            else
                printf("X");
            printf("   ");
            if (j == n - 1)
                printf("|");
        }
        printf("\n");
        if (i == n - 1)
            printf("----------------------------");
        else
            printf("____________________________");
        printf("\n");
    }
}

void show_result_row(int arr[][4], int a, int b, int n)
{
    int k, j;
    for (k = 1; k < n; k++)
    {
        for (j = 1; j < n; j++)
        {
            if (k != a)
                arr[k][j] = -1;
        }
    }
}

void show_result_col(int arr[][4], int a, int b, int n)
{
    int k, j;
    for (k = 1; k < n; k++)
    {
        for (j = 1; j < n; j++)
        {
            if (k != a)
                arr[j][k] = -1;
        }
    }
}

void show_result_corner(int a[][4], int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            if (i != j)
                a[i][j] = -1;
        }
    }
}

void show_result_corner_1(int ar[][4], int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            if (i == 1 && j == 3)
            {
            }
            else if (i == 2 && j == 2)
            {
            }
            else if (i == 3 && j == 1)
            {
            }
            else
            {
                ar[i][j] = -1;
            }
        }
    }
}

int draw(int ara[][4], int n)
{
    int i, j, flag = 1;
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            if (ara[i][j] == -1)
            {
                flag = 0;
                return flag;
            }
        }
    }
    return flag;
}

void restart(int ara[][4], int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
        {
            ara[i][j] = -1;
        }
    }
}

int wininng_condition_cheacker(int b[][4], int n, int x)
{
    int i, j, flag = 0, k;
    for (i = 1; i < n; i++)
    {
        if (b[i][1] == b[i][2] && b[i][2] == b[i][3] && b[i][1] != -1)
        {
            show_result_row(b, i, x, n);
            flag = 1;
        }
        else if (b[1][i] == b[2][i] && b[2][i] == b[3][i] && b[1][i] != -1)
        {
            show_result_col(b, i, x, n);
            flag = 1;
        }
    }
    if (b[1][1] == b[2][2] && b[2][2] == b[3][3] && b[1][1] != -1)
    {
        show_result_corner(b, n);
        flag = 1;
    }
    else if (b[1][3] == b[2][2] && b[2][2] == b[3][1] && b[1][3] != -1)
    {
        show_result_corner_1(b, n);
        flag = 1;
    }

    return flag;
}

void continue_playing(int ara[][4], int n)
{
    int row, col, m, d, i, j, play_again;
    char p_1[6], p_2[6];

Name_error:
    printf("Enter 1st player name :");
    scanf("%s", p_1);
    printf("Enter 2nd player name :");
    scanf("%s", p_2);

    if (strcmp(p_1, p_2) == 0)
    {
        printf("\n");
        printf("Player name should not be matched\n");
        printf("\n");
        Beep(560,300);
        goto Name_error;
    }

    bool player_1 = true;
    bool player_2 = false;

    while (true)
    {
        system("cls");
        design_box(ara, n);

        d = draw(ara, n);
        if (d)
        {
            printf("Match draw !!\t Play Again\n");
            Beep(560,300);
            restart(ara, n);
            design_box(ara, n);
        }

    Start_again:
        if (player_1)
        {
            printf(" Now , %s's turn ( o ) . Enter row and collumn on the cheacker_Board : \n", p_1);
            scanf("%d%d", &row, &col);
            if (ara[row][col] != -1 || row<1 || row>3 || col>3 || col<1)
                goto Start_again;
            else
                ara[row][col] = 1;
            m = wininng_condition_cheacker(ara, n, 1);

            if (m)
            {
                design_box(ara, n);
                Beep(560,300);
                printf("Congratulation !!  %s\nYou Have won this match \n", p_1);
            RESTART:
                printf("\n\nDo you want you pay again :\n1)Yes\t2)Exit \n");
                scanf("%d", &play_again);
                if (play_again != 1 && play_again != 2)
                {
                    printf("You have pressed invalide key\nPress 1 or 2\n");
                    goto RESTART;
                }
                if (play_again == 1)
                    restart(ara, n);
                else
                    break;
            }

            player_1 = false;
            player_2 = true;
        }
        else
        {
        Start_again_2:
            printf("Now , %s's turn ( x ) . Enter row and collumn on the the cheacker_Board : \n", p_2);
            scanf("%d%d", &row, &col);
            if (ara[row][col] != -1 || (row<1 || row>=4) || (col>3 || col<1))
                goto Start_again_2;
            else
                ara[row][col] = 2;
            int z = wininng_condition_cheacker(ara, n, 2);
            if (z)
            {
                design_box(ara, n);
                Beep(560,300);
                printf("Congratulation !!  %s\nYou Have won this match \n", p_2);
            RESTART_1:
                printf("\n\nDo you want you pay again :\n1)Yes\t2)Exit \n");
                scanf("%d", &play_again);
                if (play_again != 1 && play_again != 2)
                {
                    printf("You have pressed invalide key\nPress 1 or 2\n");
                    goto RESTART_1;
                }
                if (play_again == 1)
                    restart(ara, n);
                else
                    break;
            }
            player_1 = true;
            player_2 = false;
        }
    }
}

int main()
{
    int n = 4, i, j;
    int box[n][n];
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n; j++)
            box[i][j] = -1;
    }

    continue_playing(box, n);

    return 0;
}