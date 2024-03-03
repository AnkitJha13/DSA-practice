int getSum(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }
    return sum;
}

// ex 1234 - output is 10 (1+2+3+4)
