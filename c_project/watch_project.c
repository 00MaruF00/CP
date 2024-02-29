#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <windows.h>

#define CYCLE 60

void simple_clock_design(int a[][4], int x, int y)
{
    int i, j;
    printf("\n\n\n\n\n");
    for (i = 0; i < x; i++)
    {
        printf("                                                            ");
        for (j = 0; j < y; j++)
        {
            if (i != 0)
            {
                if (j == 0)
                    printf("|");
                else
                    printf(":");
                printf("    ");
                if (i == 1 && j == 3)
                {
                    if (a[i][j] == 2)
                        printf("pm");
                    else
                        printf("am");
                }
                else
                    printf("%.2d", a[i][j]);
                printf("    ");
                if (j == y - 1)
                    printf("|");
            }
        }
        printf("\n");
        printf("                                                            ---------------------------------------------");
        printf("\n");
    }
}
void stop_watch()
{
    int hr = 0, min = 0, sec = 0;
    int h, m, s;
TOO:
    printf("Hours minutes and second : ");
    scanf("%d%d%d", &h, &m, &s);
    if (m > 59 || m < 0 || s > 59 || s < 0)
    {
        printf("Minutes and second range should be 1 - 59\n\n");
        goto TOO;
    }
    while (1)
    {
        system("cls");
        printf("\n######### target time- %.2d : %.2d : %.2d #########\n", h, m, s);
        printf("#                                           #\n");
        printf("#               %.2d : %.2d : %.2d                #\n", hr, min, sec);
        printf("#                                           #\n");
        printf("#############################################\n");
        sleep(1);
        if (h == hr && m == min && sec == s)
        {
            Beep(1000, 3000);
            break;
        }
        sec++;
        if (sec == CYCLE)
        {
            sec = 0;
            min++;
        }
        if (min == CYCLE)
        {
            min = 0;
            hr++;
        }
    }
}

void simple_clock(int a[][4], int r, int c)
{
    int hr, min, sec, day;
    printf("Set time on the clock :\n");
HR:
    printf("Enter hours :");
    scanf("%d", &hr);
    if (hr > 12 || hr < 1)
    {
        printf("Invalide Hour !!\n\n");
        goto HR;
    }
MIN:
    printf("Enter minutes :");
    scanf("%d", &min);
    if (min > 59 || min < 0)
    {
        printf("Invalide minute !!\n\n");
        goto MIN;
    }
SEC:
    printf("Enter seconds :");
    scanf("%d", &sec);
    if (sec > 59 || sec < 0)
    {
        printf("Invalide second !!\n\n");
        goto SEC;
    }
CH:
    printf("Choose one \n1) am \t 2)pm\n");
    scanf("%d", &day);
    if (day != 1 && day != 2)
    {
        printf("Select 1 or 2 \n\n");
        goto CH;
    }
    system("cls");

    while (1)
    {
        system("cls");
        a[1][0] = hr;
        a[1][1] = min;
        a[1][2] = sec;
        a[1][3] = day;

        simple_clock_design(a, r, c);
        sleep(1);
        sec++;

        if (sec == CYCLE)
        {
            sec = 0;
            min++;
        }
        if (min == CYCLE)
        {
            min = 0;
            hr++;
        }
        if (hr == 13)
            hr = 1;
        if (hr == 12 && min == 0 && sec == 0)
        {
            if (day == 1)
                day = 2;
            else
                day = 1;
        }
    }
}

int main()
{
    int n;
    printf("1) Clock\n2) Stop_Watch\n");
    scanf("%d", &n);
    if (n == 1)
    {
        int n = 4, m = 2;
        int ara[m][n];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
                ara[i][j] = 0;
        }
        simple_clock(ara, m, n);
    }
    else
        stop_watch();
    return 0;
}