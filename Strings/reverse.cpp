int low = 0;
int high = n - 1;
while (low <= high)
{
    swap(s[low++], s[high--]);
}