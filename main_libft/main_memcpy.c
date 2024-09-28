#include <stdio.h>
#include <string.h>

void test_memcpy(void *dest, const void *src, size_t n)
{
    void *ft_result = ft_memcpy(dest, src, n);
    void *std_result = memcpy(dest, src, n);

    printf("ft_memcpy: \"%s\"\n", (char *)ft_result);
    printf("memcpy: \"%s\"\n", (char *)std_result);
    
    if (ft_result == std_result)
    {
        printf("Good! Both functions returned the same result.\n");
    }
    else
    {
        printf("Results differ!\n");
    }
    printf("--------\n");
}

int main(void)
{
    char dest[50];

    test_memcpy(dest, "Hello, world!", 13);
    test_memcpy(dest, "everyone!", 9);
    test_memcpy(dest, "Overlap test!", 13);
    test_memcpy(dest, "Some text", strlen("Some text") + 1);
    test_memcpy(dest, "abcdef", 6);
    test_memcpy(dest, "1234567890", 10);
    test_memcpy(dest, "a b c d e f", 11);
    test_memcpy(dest, "\t\n\r", 3);
    test_memcpy(dest, "abcdefgabcdefg", 14);
    test_memcpy(dest, "0x1234ABCD", 10);
    test_memcpy(dest, "long string test case example", 27);
    test_memcpy(dest, "short", 5);
    test_memcpy(dest, "!@#$%^&*()", 10);
    test_memcpy(dest, "____---===", 10);
    test_memcpy(dest, "randomstring123456789", 20);
    test_memcpy(dest, "just another test", 17);
    test_memcpy(dest, "punctuation!@#$%^&*()", 20);
    test_memcpy(dest, "newline\nnewline", 14);
    test_memcpy(dest, "\t\twhitespace\t", 15);
    test_memcpy(dest, "thequickbrownfox", 16);
    test_memcpy(dest, "jumpsoverlazydog", 17);
    test_memcpy(dest, "aaaaaaaaaaaaaaaaaaaa", 20);
    test_memcpy(dest, "01234567890123456789", 20);
    test_memcpy(dest, "abcdefghijklmnopqrstuvwx", 24);
    test_memcpy(dest, "yetanothertestcase", 18);
    test_memcpy(dest, "stringwithmixed1234", 19);
    test_memcpy(dest, "specialchars_)(*&^%$#@!", 22);
    test_memcpy(dest, "whitespace at end    ", 22);
    test_memcpy(dest, "tab\tseparator\tcase", 20);
    test_memcpy(dest, "multiple\nlines\ntest", 20);
    test_memcpy(dest, "spacestestwith  gaps", 22);
    test_memcpy(dest, "\nnewlineatthebeginning", 24);
    test_memcpy(dest, "\rnewline\rattheend", 18);
    test_memcpy(dest, "capsLOCKEDCASE", 14);
    test_memcpy(dest, "symmetrysymmetry", 16);
    test_memcpy(dest, "palindromeemordnilap", 19);
    test_memcpy(dest, "one-two-three", 13);
    test_memcpy(dest, "no-special-chars", 17);
    test_memcpy(dest, "123-456-7890", 12);
    test_memcpy(dest, "simple_test_case", 17);
    test_memcpy(dest, "snake_case_example", 19);
    test_memcpy(dest, "kebab-case-example", 19);
    test_memcpy(dest, "PascalCaseExample", 18);
    test_memcpy(dest, "camelCaseString", 16);
    test_memcpy(dest, "underscore_string_", 19);
    test_memcpy(dest, "double  spaces", 14);
    test_memcpy(dest, "hyphen-ated-words", 18);
    test_memcpy(dest, "shortstring", 11);
    test_memcpy(dest, "alphanumeric12345", 19);
    test_memcpy(dest, "numbers1234567890", 18);
    test_memcpy(dest, "spaces in middle", 17);
    test_memcpy(dest, "control\tchars\tin\ttext", 22);
    test_memcpy(dest, "tabs\tand\tspaces\tmixed", 23);
    test_memcpy(dest, "newline_in_middle\n", 20);
    test_memcpy(dest, "stringwithnonprintable\x7f", 23);
    test_memcpy(dest, "\x00\x01\x02binary\x03\x04\x05", 18);
    test_memcpy(dest, "random_symbols!@#$$%^", 21);
    test_memcpy(dest, "0123456789abcdefgh", 20);
    test_memcpy(dest, "trailing space ", 15);
    test_memcpy(dest, "preceding space", 16);
    test_memcpy(dest, "thisisaveryveryverylongstring", 33);

    return 0;
}
