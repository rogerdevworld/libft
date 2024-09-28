#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t count, size_t size);

void test_calloc(size_t count, size_t size)
{
    void *ft_ptr;
    void *std_ptr;

    ft_ptr = ft_calloc(count, size);
    std_ptr = calloc(count, size);
    printf("Test: count = %zu, size = %zu\n", count, size);
    if (ft_ptr == NULL && std_ptr == NULL)
    {
        printf("Both returned NULL\n");
    }
    else if (ft_ptr != NULL && std_ptr != NULL)
    {
        if (memcmp(ft_ptr, std_ptr, count * size) == 0)
        {
            printf("Good! Both allocations are identical.\n");
        }
        else
        {
            printf("Error! Memory contents differ.\n");
        }
    }
    else
    {
        printf("Error! One of the allocations returned NULL.\n");
    }
    free(ft_ptr);
    free(std_ptr);
    printf("--------\n");
}

int main(void)
{
    test_calloc(5, 10);
    test_calloc(0, 10);
    test_calloc(10, 0);
    test_calloc(0, 0);
    test_calloc(100, sizeof(int));
    test_calloc(50, sizeof(char));
    test_calloc(20, sizeof(double));

    test_calloc(1, SIZE_MAX);
    test_calloc(SIZE_MAX, 2);
    test_calloc(SIZE_MAX / 2, 2);
    test_calloc(SIZE_MAX / 4, 4);

    for (size_t i = 1; i <= 100; i++) {
        test_calloc(i, sizeof(int));
        test_calloc(i, sizeof(char));
    }

    test_calloc(1000000, sizeof(int));
    test_calloc(1000000, sizeof(char));
    test_calloc(500000, sizeof(double));
    test_calloc(123456, sizeof(short));
    test_calloc(100, sizeof(long));

    test_calloc(10, sizeof(void*));
    test_calloc(5, sizeof(float));
    test_calloc(20, sizeof(int));
    test_calloc(10, sizeof(char));
    test_calloc(1000, sizeof(double));
    test_calloc(200, sizeof(char));
    test_calloc(100, sizeof(int));
    test_calloc(256, sizeof(short));

    test_calloc(SIZE_MAX / 2 + 1, 2);
    test_calloc(SIZE_MAX, sizeof(int));
    test_calloc(1, SIZE_MAX);

    return 0;
}

