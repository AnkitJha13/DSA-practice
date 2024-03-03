int fibSum(long long int N)
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
