int fibSum(int N)
{
    // code here
    int a = 0;
    int b = 1;
    int sum = 1;

    for (int i = 2; i <= N; i++)
    {
        int c = (a + b) % 1000000007;
        sum = (sum + c) % 1000000007;
        a = b;
        b = c;
    }
    return sum;
}

// for N = 3 (0 , 1 , 1 , 2 , 3 , 5 , 8)
// output is 4
// for N = 5 
// output is 12
