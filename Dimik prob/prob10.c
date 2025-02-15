#include<stdio.h>

int main()
{
    int i, t, r1, r2, b, ball_played;

    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d",&r1, &r2, &b);
        ball_played = 300 - b;
        float curr_ran = ((r2 ) / (float) ball_played) * 6;
        float ask_run = ((r1 - r2 + 1) / (float) b) *6;
        if(r2 > r1)
        {
            ask_run = 0.00;
        }
        printf("%0.2f %0.2f\n", curr_ran, ask_run);
    }
    return 0;
}
