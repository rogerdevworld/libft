#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n);

void test_memchr(const char *str, int c, size_t n)
{
    void *ft_result;
    void *std_result;

    ft_result = ft_memchr(str, c, n);
    std_result = memchr(str, c, n);
    printf("Test: searching for '%c' in \"%s\" (n = %zu)\n", c, str, n);
    if (ft_result == std_result)
    {
        printf("Good!\n");
    }
    else
    {
        printf("Results differ!\n");
        printf("ft_memchr result: %s\n", ft_result ? (char *)ft_result : "NULL");
        printf("memchr result: %s\n", std_result ? (char *)std_result : "NULL");
    }
    printf("--------\n");
}

int main(void)
{
        test_memchr("Hello, world!", 'e', 13);
    test_memchr("Hello, world!", 'l', 13);
    test_memchr("Hello, world!", 'w', 13);
    test_memchr("Hello, world!", 'r', 13);
    test_memchr("Hello, world!", 'd', 13);
    test_memchr("Hello, world!", 'H', 13);
    test_memchr("Hello, world!", '!', 13);
    test_memchr("Hello, world!", ',', 13);
    test_memchr("Hello, world!", ' ', 13);
    test_memchr("Hello, world!", 'o', 5);
    test_memchr("Hello, world!", 'o', 0);
    test_memchr("Hello, world!", 'e', 5);
    test_memchr("Hello, world!", 'l', 3);
    test_memchr("Hello, world!", 'o', 3);
    test_memchr("Hello, world!", 'r', 5);
    test_memchr("Hello, world!", 'x', 13);
    test_memchr("A quick brown fox jumps over the lazy dog", 'b', 43);
    test_memchr("A quick brown fox jumps over the lazy dog", 'q', 43);
    test_memchr("A quick brown fox jumps over the lazy dog", 'd', 43);
    test_memchr("A quick brown fox jumps over the lazy dog", 'x', 43);
    test_memchr("A quick brown fox jumps over the lazy dog", 'o', 43);
    test_memchr("A quick brown fox jumps over the lazy dog", 'g', 43);
    test_memchr("A quick brown fox jumps over the lazy dog", 'l', 43);
    test_memchr("A quick brown fox jumps over the lazy dog", 'a', 43);
    test_memchr("A quick brown fox jumps over the lazy dog", 'z', 43);
    test_memchr("A quick brown fox jumps over the lazy dog", ' ', 43);
    test_memchr("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 'Z', 26);
    test_memchr("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 'A', 26);
    test_memchr("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 'M', 26);
    test_memchr("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 'Z', 10);
    test_memchr("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 'Z', 0);
    test_memchr("1234567890", '5', 10);
    test_memchr("1234567890", '0', 10);
    test_memchr("1234567890", '1', 10);
    test_memchr("1234567890", '9', 10);
    test_memchr("1234567890", '5', 5);
    test_memchr("1234567890", '3', 3);
    test_memchr("1234567890", '8', 5);
    test_memchr("1234567890", 'x', 10);
    test_memchr("1234567890", '\0', 10);
    test_memchr("Lorem ipsum dolor sit amet", 's', 26);
    test_memchr("Lorem ipsum dolor sit amet", 'm', 26);
    test_memchr("Lorem ipsum dolor sit amet", 'L', 26);
    test_memchr("Lorem ipsum dolor sit amet", 'o', 10);
    test_memchr("Lorem ipsum dolor sit amet", 'i', 5);
    test_memchr("Lorem ipsum dolor sit amet", 't', 10);
    test_memchr("Lorem ipsum dolor sit amet", 'a', 10);
    test_memchr("Lorem ipsum dolor sit amet", 'r', 10);
    test_memchr("Lorem ipsum dolor sit amet", 'd', 10);
    test_memchr("Lorem ipsum dolor sit amet", 'x', 26);
    test_memchr("Lorem ipsum dolor sit amet", '\0', 26);
    test_memchr("Testing string functions.", 'g', 30);
    test_memchr("Testing string functions.", 'T', 30);
    test_memchr("Testing string functions.", 'f', 30);
    test_memchr("Testing string functions.", 's', 30);
    test_memchr("Testing string functions.", 'x', 30);
    test_memchr("Testing string functions.", ' ', 30);
    test_memchr("Testing string functions.", '\0', 30);
    test_memchr("Unit tests are important!", 't', 27);
    test_memchr("Unit tests are important!", 'U', 27);
    test_memchr("Unit tests are important!", 'i', 27);
    test_memchr("Unit tests are important!", '!', 27);
    test_memchr("Unit tests are important!", 'x', 27);
    test_memchr("Unit tests are important!", ' ', 27);
    test_memchr("Unit tests are important!", '\0', 27);
    test_memchr("abcdefg", 'a', 7);
    test_memchr("abcdefg", 'g', 7);
    test_memchr("abcdefg", 'b', 7);
    test_memchr("abcdefg", 'h', 7);
    test_memchr("abcdefg", '\0', 7);
    test_memchr("abcdefg", 'd', 4);
    test_memchr("abcdefg", 'e', 4);
    test_memchr("abcdefg", 'f', 4);
    test_memchr("abcdefg", 'g', 4);
    test_memchr("abcdefg", 'a', 0);
    test_memchr("", 'a', 0);
    test_memchr("Hello", 'H', 5);
    test_memchr("Hello", 'o', 5);
    test_memchr("Hello", 'x', 5);
    test_memchr("Hello", 'e', 5);
    test_memchr("Hello", 'l', 5);
    test_memchr("Hello, world!", 'o', 13);
    test_memchr("Hello, world!", 'z', 13);
    test_memchr("Hello, world!", '\0', 13);
    test_memchr("Hello, world!", '!', 13);
    test_memchr("Hello, world!", 'H', 5);
    return 0;
}
