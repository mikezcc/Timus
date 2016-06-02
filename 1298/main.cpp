#include<stdio.h>
#include<iostream>
#define N 8
using namespace std;

int solveKTUtil(int x, int y, int movei, int sol[N][N], int n);

int xMove[N] = {  2, 1, -1, -2, -2, -1,  1,  2 };
int yMove[N] = {  1, 2,  2,  1, -1, -2, -2, -1 };



int isValid (int x, int y, int n, int sol[N][N])
{
    if ( x >= 0 && x < n && y >= 0 && y < n && sol[x][y] == -1)
        return 1;
    return 0;
}

int solveKTUtil(int x, int y, int movei, int sol[N][N], int n)
{
    int k, next_x, next_y;
    if (movei == n*n)
        return true;
    for (k = 0; k < 8; k++)
    {
        next_x = x + xMove[k];
        next_y = y + yMove[k];
        if (isValid(next_x, next_y, n, sol))
        {
            sol[next_x][next_y] = movei;
            if (solveKTUtil(next_x, next_y, movei+1, sol, n) == true)
                return true;
            else
                sol[next_x][next_y] = -1;// backtracking
        }
    }
    
    return false;
}

void printSolution(int n, int sol[N][N])
{
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < n; y++)
            printf(" %2d ", sol[x][y]);
        printf("\n");
    }
}

bool solveKT(int n)
{
    int sol[N][N];
    for (int x = 0; x < N; x++)
        for (int y = 0; y < N; y++)
            sol[x][y] = -1;
    
    sol[0][0]  = 0;
    
    /* Start from 0,0 and explore all tours using solveKTUtil() */
    if(solveKTUtil(0, 0, 1, sol, n) == false)
    {
        printf("Solution does not exist");
        return false;
    }
    else
        printSolution(n, sol);
    
    return true;
}

/* Driver program to test above functions */
int main()
{
    int n;
    cin>>n;
    solveKT(n);
    return 0;
}