#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

void test_memcmp(const void *s1, const void *s2, size_t n)
{
    int ft_result;
    int std_result;

    ft_result = ft_memcmp(s1, s2, n);
    std_result = memcmp(s1, s2, n);

    printf("Comparing: \"%s\" and \"%s\" (n = %zu)\n", (char *)s1, (char *)s2, n);

    if (ft_result == std_result)
    {
        printf("Good! Both functions returned the same result.\n");
    }
    else
    {
        printf("Results differ!\n");
        printf("ft_memcmp result: %d\n", ft_result);
        printf("memcmp result: %d\n", std_result);
    }
    printf("--------\n");
}

int main(void)
{
    test_memcmp("Hello, world!", "Hello, world!", 13);
    test_memcmp("Hello, world!", "Hello, worl!", 13);
    test_memcmp("Hello, world!", "Hello, worlds!", 13);
    test_memcmp("Hello, world!", "Hello, World!", 13);
    test_memcmp("abc", "abc", 3);
    test_memcmp("abc", "abd", 3);
    test_memcmp("abc", "abC", 3);
    test_memcmp("abc", "xyz", 3);
    test_memcmp("12345", "12345", 5);
    test_memcmp("12345", "12346", 5);
    test_memcmp("12345", "12340", 5);
    test_memcmp("abcd", "abce", 4);
    test_memcmp("abcd", "abcd", 4);
    test_memcmp("abcd", "abcde", 4);
    test_memcmp("abcd", "abc", 4);
    test_memcmp("xyz", "xy", 3);
    test_memcmp("xyz", "xyZ", 3);
    test_memcmp("xyz", "xYz", 3);
    test_memcmp("Hello", "Hello, world!", 5);
    test_memcmp("Hello, world!", "Hello", 5);
    test_memcmp("", "", 0);
    test_memcmp("abc", "abc", 0);
    test_memcmp("abc", "", 3);
    test_memcmp("", "abc", 3);

    // Casos básicos
    test_memcmp("test", "test", 4);
    test_memcmp("test", "tests", 4);
    test_memcmp("tests", "test", 4);
    test_memcmp("abcd", "abcd", 4);
    test_memcmp("abcd", "abce", 4);
    test_memcmp("abcd", "ab", 4);
    test_memcmp("ab", "abcd", 2);
    
    // Diferencias en mayúsculas y minúsculas
    test_memcmp("abc", "ABC", 3);
    test_memcmp("AbC", "abc", 3);
    test_memcmp("A", "a", 1);
    test_memcmp("ABC", "abc", 3);
    
    // Casos vacíos
    test_memcmp("", "", 0);
    test_memcmp("", "abc", 3);
    test_memcmp("abc", "", 3);
    test_memcmp("", "abc", 0);
    
    // Diferencias en longitud
    test_memcmp("123456", "12345", 6);
    test_memcmp("12345", "123456", 5);
    
    // Diferencias en caracteres
    test_memcmp("abcdefg", "abcdefh", 7);
    test_memcmp("hello", "hello!", 6);
    test_memcmp("hello!", "hello", 7);
    test_memcmp("123456", "654321", 6);
    
    // Caracteres especiales
    test_memcmp("Hello\nWorld", "Hello\nWorld", 12);
    test_memcmp("Hello\tWorld", "Hello\tWorld", 12);
    test_memcmp("Hello\vWorld", "Hello\vWorld", 12);
    test_memcmp("Hello\rWorld", "Hello\rWorld", 12);
    
    // Comparaciones parciales
    test_memcmp("abcde", "abc", 5);
    test_memcmp("abc", "abcde", 3);
    
    // Comparaciones con números
    test_memcmp("1234", "1234", 4);
    test_memcmp("1234", "1235", 4);
    test_memcmp("1234", "2234", 4);
    
    // Diferentes longitudes de cadenas
    test_memcmp("a", "aa", 1);
    test_memcmp("aa", "a", 2);
    
    // Comparaciones de subcadenas
    test_memcmp("substring", "substring", 9);
    test_memcmp("substring", "substring!", 9);
    
    // Casos en los que una cadena es un prefijo de otra
    test_memcmp("prefix", "prefix_something", 6);
    test_memcmp("prefix_something", "prefix", 7);
    
    // Comparaciones con cadenas de longitud máxima
    char str1[1000], str2[1000];
    memset(str1, 'A', 999);
    memset(str2, 'A', 999);
    str1[999] = '\0';
    str2[999] = '\0';
    test_memcmp(str1, str2, 1000);
    
    // Diferentes cadenas de longitud máxima
    str2[998] = 'B';
    test_memcmp(str1, str2, 1000);
    
    // Comparaciones de cadenas idénticas con diferentes longitudes
    test_memcmp("abcd", "abcdxyz", 4);
    test_memcmp("abcdxyz", "abcd", 8);
    
    // Diferencias en caracteres al final
    test_memcmp("abc", "abC", 3);
    test_memcmp("abc", "abd", 3);
    
    // Comparaciones con un carácter diferente al principio
    test_memcmp("xyz", "abc", 3);
    test_memcmp("abc", "xyz", 3);
    
    // Casos de prueba con combinaciones aleatorias
    test_memcmp("aaa", "aab", 3);
    test_memcmp("bbb", "baa", 3);
    test_memcmp("cba", "abc", 3);
    test_memcmp("abc", "cba", 3);
    return 0;
}
