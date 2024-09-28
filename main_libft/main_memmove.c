#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*local_dest;
	const unsigned char	*local_src;
	size_t				i;

	i = 0;
	local_dest = (unsigned char *)dest;
	local_src = (const unsigned char *)src;
	while (i < n)
	{
		local_dest[i] = local_src[i];
		i++;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n);

void test(char *dest, const char *src, size_t n) {
    char ft_dest[50];
    char std_dest[50];

    strcpy(ft_dest, dest);
    strcpy(std_dest, dest);

    ft_memmove(ft_dest, src, n);
    memmove(std_dest, src, n);
    
    printf("Input: %s | %s\n", ft_dest, std_dest);
    printf("ft_memmove result: %s\n", ft_dest);
    printf("memmove result: %s\n", std_dest);

    if (strcmp(ft_dest, std_dest) == 0) {
        printf("Good!!!!!!!!1\n");
    } else {
        printf("Error!!!!!!!!!!\n");
    }
    printf("--------\n");
}

int main() {
    char dest[50] = "original_string";

    test(dest, "abcdef", 6);
    test(dest, "1234567890", 10);
    test(dest, "a b c d e f", 11);
    test(dest, "\t\n\r", 3);
    test(dest, "abcdefgabcdefg", 14);
    test(dest, "0x1234ABCD", 10);
    test(dest, "long string test case example", 27);
    test(dest, "short", 5);
    test(dest, "!@#$%^&*()", 10);
    test(dest, "____---===", 10);
    test(dest, "teststringwithspaces", 19);
    test(dest, "0123456789abcdef", 16);
    test(dest, "UPPERCASE", 9);
    test(dest, "lowercase", 9);
    test(dest, "MixedCase123", 12);
    test(dest, "a_b_c_d_e", 9);
    test(dest, "\x01\x02\x03\x04\x05", 5);
    test(dest, "spaces   in   between", 21);
    test(dest, "edgecasewith\nnewline", 20);
    test(dest, "randomstring123456789", 20);
    test(dest, "just another test", 17);
    test(dest, "punctuation!@#$%^&*()", 20);
    test(dest, "newline\nnewline", 14);
    test(dest, "\t\twhitespace\t", 15);
    test(dest, "thequickbrownfox", 16);
    test(dest, "jumpsoverlazydog", 17);
    test(dest, "aaaaaaaaaaaaaaaaaaaa", 20);
    test(dest, "01234567890123456789", 20);
    test(dest, "abcdefghijklmnopqrstuvwx", 24);
    test(dest, "yetanothertestcase", 18);
    test(dest, "stringwithmixed1234", 19);
    test(dest, "specialchars_)(*&^%$#@!", 22);
    test(dest, "whitespace at end    ", 22);
    test(dest, "tab\tseparator\tcase", 20);
    test(dest, "multiple\nlines\ntest", 20);
    test(dest, "spacestestwith  gaps", 22);
    test(dest, "\nnewlineatthebeginning", 24);
    test(dest, "\rnewline\rattheend", 18);
    test(dest, "capsLOCKEDCASE", 14);
    test(dest, "symmetrysymmetry", 16);
    test(dest, "palindromeemordnilap", 19);
    test(dest, "one-two-three", 13);
    test(dest, "no-special-chars", 17);
    test(dest, "123-456-7890", 12);
    test(dest, "simple_test_case", 17);
    test(dest, "snake_case_example", 19);
    test(dest, "kebab-case-example", 19);
    test(dest, "PascalCaseExample", 18);
    test(dest, "camelCaseString", 16);
    test(dest, "underscore_string_", 19);
    test(dest, "double  spaces", 14);
    test(dest, "hyphen-ated-words", 18);
    test(dest, "shortstring", 11);
    test(dest, "alphanumeric12345", 19);
    test(dest, "numbers1234567890", 18);
    test(dest, "spaces in middle", 17);
    test(dest, "control\tchars\tin\ttext", 22);
    test(dest, "tabs\tand\tspaces\tmixed", 23);
    test(dest, "newline_in_middle\n", 20);
    test(dest, "stringwithnonprintable\x7f", 23);
    test(dest, "\x00\x01\x02binary\x03\x04\x05", 18);
    test(dest, "random_symbols!@#$$%^", 21);
    test(dest, "0123456789abcdefgh", 20);
    test(dest, "trailing space ", 15);
    test(dest, "preceding space", 16);
    test(dest, "short", 5);
    test(dest, "medium length", 13);
    test(dest, "thisisaveryveryverylongstring", 33);

    test(dest, "", 0);
    return 0;
}

