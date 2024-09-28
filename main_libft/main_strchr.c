/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarrero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:36:22 by rmarrero          #+#    #+#             */
/*   Updated: 2024/09/27 17:36:26 by rmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c);

void test(const char *s, int c) {
    char *ft_result = ft_strchr(s, c);
    char *std_result = strchr(s, c);
    
    printf("Input: \"%s\", Char: '%c' (%d)\n", s, c, c);
    printf("ft_strchr result: %s\n", ft_result ? ft_result : "NULL");
    printf("strchr result: %s\n", std_result ? std_result : "NULL");

    if ((ft_result == NULL && std_result == NULL) || (strcmp(ft_result, std_result) == 0)) {
        printf("Good!!!!!!!!\n");
    } else {
        printf("Error!!!!!!!!!!\n");
    }
    printf("--------\n");
}

int main()
{
    test("abcdef", 'f');
    test("abcdef", 'a');
    test("abcdef", 'b');
    test("abcdef", 'c');
    test("abcdef", 'd');
    test("abcdef", 'e');
    test("abcdef", 'z');
    test("abcdef", '\0');
    test("a", 'a');
    test("a", 'b');
    test("a", '\0');
    test("", 'a');
    test("", '\0');
    test("1234567890", '1');
    test("1234567890", '9');
    test("1234567890", '0');
    test("1234567890", '5');
    test("1234567890", '\0');
    test("!@#$%^&*()", '@');
    test("!@#$%^&*()", '^');
    test("!@#$%^&*()", '*');
    test("!@#$%^&*()", ')');
    test("!@#$%^&*()", '!');
    test("!@#$%^&*()", '\0');
    test("hello world", 'h');
    test("hello world", 'e');
    test("hello world", ' ');
    test("hello world", 'o');
    test("hello world", 'd');
    test("hello world", 'z');
    test("hello world", '\0');
    test("testing123", 't');
    test("testing123", '1');
    test("testing123", '3');
    test("testing123", 'g');
    test("testing123", '9');
    test("testing123", '\0');
    test("this is a test", 't');
    test("this is a test", 's');
    test("this is a test", ' ');
    test("this is a test", 'i');
    test("this is a test", '\0');
    test("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 'A');
    test("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 'Z');
    test("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 'M');
    test("ABCDEFGHIJKLMNOPQRSTUVWXYZ", '\0');
    test("abcdefghijklmnopqrstuvwxyz", 'a');
    test("abcdefghijklmnopqrstuvwxyz", 'z');
    test("abcdefghijklmnopqrstuvwxyz", 'm');
    test("abcdefghijklmnopqrstuvwxyz", '\0');
    test("     ", ' ');
    test("     ", '\0');
    test("123123123", '1');
    test("123123123", '3');
    test("123123123", '2');
    test("123123123", '\0');
    test("repeated letters", 'r');
    test("repeated letters", 'e');
    test("repeated letters", 't');
    test("repeated letters", '\0');
    test("samecharssamechars", 's');
    test("samecharssamechars", 'a');
    test("samecharssamechars", 'm');
    test("samecharssamechars", '\0');
    test("p@ssw0rd", '@');
    test("p@ssw0rd", '0');
    test("p@ssw0rd", 'd');
    test("p@ssw0rd", 'p');
    test("p@ssw0rd", 'z');
    test("p@ssw0rd", '\0');
    test("NULL\0", '\0');
    test("abcde\0fg", 'f');
    test("abcde\0fg", 'a');
    test("abcde\0fg", 'g');
    test("empty\0string", 'y');
    test("empty\0string", '\0');
    test("Newline\nTest", '\n');
    test("Tab\tTest", '\t');
    test("Space Test", ' ');
    test("Non-printable\x01Test", '\x01');
    test("All nulls\0\0\0", '\0');
    test("Trailing spaces   ", ' ');
    test("trailing nuls\0\0\0", 'n');
    test("Special_chars!@#$", '!');
    test("Control\x04Chars", '\x04');
    test("Quotes\"Test", '"');
    test("Slashes\\Test", '\\');
    test("Singlechar", 'S');
    test("CaseSensitive", 'C');
    test("CaseSensitive", 'S');
    test("CaseSensitive", 'e');
    test("CaseSensitive", 'v');
    test("CaseSensitive", '\0');
    test("The quick brown fox", 'q');
    test("The quick brown fox", 'x');
    test("The quick brown fox", ' ');
    test("The quick brown fox", '\0');
    test("abcdef", 'c');
    test("abcdef", 'z');
    test("abcdef", '\0');
    return 0;
}

