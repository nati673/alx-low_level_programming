#include "main.h"
#include <string.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: size of buffer
 *
 * Return: pointer to the result, or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
        int len1 = strlen(n1);
        int len2 = strlen(n2);
        int len = len1 > len2 ? len1 : len2;
        int carry = 0;
        int i, j;

        if (len + 1 > size_r)
                return (0);

        r[len + 1] = '\0';
        for (i = len1 - 1, j = len2 - 1, len = len + 1; len > 0; i--, j--, len--)
        {
                int digit1 = i >= 0 ? n1[i] - '0' : 0;
                int digit2 = j >= 0 ? n2[j] - '0' : 0;
                int sum = digit1 + digit2 + carry;
                if (sum >= 10)
                {
                        carry = 1;
                        sum -= 10;
                }
                else
                {
                        carry = 0;
                }
                r[len - 1] = sum + '0';
        }

        if (r[0] == '0')
        {
                for (i = 0; r[i]; i++)
                        r[i] = r[i + 1];
        }
        else if (carry == 1)
        {
                return (0);
        }

        return (r);
}
