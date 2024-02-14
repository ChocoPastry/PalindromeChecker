#include <stdio.h>
int IsPalindrome(int n)
{
    int c = 0, x;
    int a = n;
    while (n != 0)
    {
        x = n % 10;
        c = c * 10 + n%10;
        n = n/ 10;
    }
    if (c == a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int x = IsPalindrome(num);
    if (x == 1)
    {
        printf("Its a palindrome");
    }
    else
    {
        printf("Its not a palindrome");
    }
    return 0;
}