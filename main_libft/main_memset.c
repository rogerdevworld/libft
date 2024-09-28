#include <stdio.h>
#include <string.h>

void test_memset(void *s, int c, size_t n)
{
    void *ft_result = ft_memset(s, c, n);
    void *std_result = memset(s, c, n);

    printf("ft_memset: ");
    for (size_t i = 0; i < n; i++)
        printf("%02x ", ((unsigned char *)ft_result)[i]);
    printf("\n");

    printf("memset: ");
    for (size_t i = 0; i < n; i++)
        printf("%02x ", ((unsigned char *)std_result)[i]);
    printf("\n");

    if (ft_result == std_result)
    {
        printf("Good!\n");
    }
    else
    {
        printf("Results differ!\n");
    }
    printf("--------\n");
}

int main(void)
{
    unsigned char buffer1[10];
    unsigned char buffer2[10];
    test_memset(buffer1, 0x42, sizeof(buffer1));
    test_memset(buffer2, 0x00, sizeof(buffer2));
    test_memset(buffer1, 0xFF, sizeof(buffer1));
    test_memset(buffer2, 0x01, sizeof(buffer2));
    test_memset(buffer1, 0x7F, sizeof(buffer1));
    test_memset(buffer2, 0xAA, sizeof(buffer2));
    test_memset(buffer1, 0x55, sizeof(buffer1));
    test_memset(buffer2, 0x33, sizeof(buffer2));
    test_memset(buffer1, 0xC0, sizeof(buffer1));
    test_memset(buffer2, 0x99, sizeof(buffer2));
    test_memset(buffer1, 0x12, sizeof(buffer1));
    test_memset(buffer2, 0x34, sizeof(buffer2));
    test_memset(buffer1, 0x78, sizeof(buffer1));
    test_memset(buffer2, 0x56, sizeof(buffer2));
    test_memset(buffer1, 0x9A, sizeof(buffer1));
    test_memset(buffer2, 0xBC, sizeof(buffer2));
    test_memset(buffer1, 0xFF, sizeof(buffer1));
    test_memset(buffer2, 0x00, sizeof(buffer2));
    test_memset(buffer1, 0x0F, sizeof(buffer1));
    test_memset(buffer2, 0x11, sizeof(buffer2));
    test_memset(buffer1, 0x88, sizeof(buffer1));
    test_memset(buffer2, 0x22, sizeof(buffer2));
    test_memset(buffer1, 0x7B, sizeof(buffer1));
    test_memset(buffer2, 0x45, sizeof(buffer2));
    test_memset(buffer1, 0x67, sizeof(buffer1));
    test_memset(buffer2, 0x89, sizeof(buffer2));
    test_memset(buffer1, 0xA5, sizeof(buffer1));
    test_memset(buffer2, 0xC3, sizeof(buffer2));
    test_memset(buffer1, 0xE1, sizeof(buffer1));
    test_memset(buffer2, 0xD4, sizeof(buffer2));
    test_memset(buffer1, 0x2B, sizeof(buffer1));
    test_memset(buffer2, 0x74, sizeof(buffer2));
    test_memset(buffer1, 0x3C, sizeof(buffer1));
    test_memset(buffer2, 0x8D, sizeof(buffer2));
    test_memset(buffer1, 0x5E, sizeof(buffer1));
    test_memset(buffer2, 0x7A, sizeof(buffer2));
    test_memset(buffer1, 0x94, sizeof(buffer1));
    test_memset(buffer2, 0xF6, sizeof(buffer2));
    test_memset(buffer1, 0x9F, sizeof(buffer1));
    test_memset(buffer2, 0xB1, sizeof(buffer2));
    test_memset(buffer1, 0x36, sizeof(buffer1));
    test_memset(buffer2, 0x28, sizeof(buffer2));
    test_memset(buffer1, 0x40, sizeof(buffer1));
    test_memset(buffer2, 0x29, sizeof(buffer2));
    test_memset(buffer1, 0x47, sizeof(buffer1));
    test_memset(buffer2, 0x4C, sizeof(buffer2));
    test_memset(buffer1, 0x1A, sizeof(buffer1));
    test_memset(buffer2, 0x7D, sizeof(buffer2));
    test_memset(buffer1, 0x7E, sizeof(buffer1));
    test_memset(buffer2, 0x0E, sizeof(buffer2));
    test_memset(buffer1, 0x58, sizeof(buffer1));
    test_memset(buffer2, 0x1B, sizeof(buffer2));
    test_memset(buffer1, 0x71, sizeof(buffer1));
    test_memset(buffer2, 0x46, sizeof(buffer2));
    test_memset(buffer1, 0x24, sizeof(buffer1));
    test_memset(buffer2, 0x8A, sizeof(buffer2));
    test_memset(buffer1, 0xC6, sizeof(buffer1));
    test_memset(buffer2, 0x5C, sizeof(buffer2));
    test_memset(buffer1, 0xAD, sizeof(buffer1));
    test_memset(buffer2, 0x8F, sizeof(buffer2));
    test_memset(buffer1, 0xF0, sizeof(buffer1));
    test_memset(buffer2, 0x22, sizeof(buffer2));
    test_memset(buffer1, 0xD0, sizeof(buffer1));
    test_memset(buffer2, 0xBA, sizeof(buffer2));
    test_memset(buffer1, 0x39, sizeof(buffer1));
    test_memset(buffer2, 0x0D, sizeof(buffer2));
    test_memset(buffer1, 0x26, sizeof(buffer1));
    test_memset(buffer2, 0x30, sizeof(buffer2));
    test_memset(buffer1, 0x83, sizeof(buffer1));
    test_memset(buffer2, 0x82, sizeof(buffer2));
    test_memset(buffer1, 0x3A, sizeof(buffer1));
    test_memset(buffer2, 0x4F, sizeof(buffer2));
    test_memset(buffer1, 0x2C, sizeof(buffer1));
    test_memset(buffer2, 0xC5, sizeof(buffer2));
    test_memset(buffer1, 0x27, sizeof(buffer1));
    test_memset(buffer2, 0xD9, sizeof(buffer2));
    test_memset(buffer1, 0x8C, sizeof(buffer1));
    test_memset(buffer2, 0xA9, sizeof(buffer2));
    test_memset(buffer1, 0x8E, sizeof(buffer1));
    test_memset(buffer2, 0x6F, sizeof(buffer2));
    test_memset(buffer1, 0xA1, sizeof(buffer1));
    test_memset(buffer2, 0x7C, sizeof(buffer2));
    test_memset(buffer1, 0x9B, sizeof(buffer1));
    test_memset(buffer2, 0x72, sizeof(buffer2));
    test_memset(buffer1, 0x9C, sizeof(buffer1));
    test_memset(buffer2, 0x73, sizeof(buffer2));
    test_memset(buffer1, 0x1D, sizeof(buffer1));
    test_memset(buffer2, 0x91, sizeof(buffer2));
    test_memset(buffer1, 0x92, sizeof(buffer1));
    test_memset(buffer2, 0x1F, sizeof(buffer2));
    test_memset(buffer1, 0xD8, sizeof(buffer1));
    test_memset(buffer2, 0x1C, sizeof(buffer2));
    test_memset(buffer1, 0xF4, sizeof(buffer1));
    test_memset(buffer2, 0x2E, sizeof(buffer2));
    test_memset(buffer1, 0x4D, sizeof(buffer1));
    test_memset(buffer2, 0x5A, sizeof(buffer2));
    test_memset(buffer1, 0xC8, sizeof(buffer1));
    test_memset(buffer2, 0x5E, sizeof(buffer2));
    test_memset(buffer1, 0x65, sizeof(buffer1));
    test_memset(buffer2, 0xC9, sizeof(buffer2));
    test_memset(buffer1, 0xF5, sizeof(buffer1));
    test_memset(buffer2, 0xD2, sizeof(buffer2));
    test_memset(buffer1, 0xF1, sizeof(buffer1));
    test_memset(buffer2, 0x3E, sizeof(buffer2));
    test_memset(buffer1, 0xC7, sizeof(buffer1));
    test_memset(buffer2, 0x4E, sizeof(buffer2));
    test_memset(buffer1, 0xC2, sizeof(buffer1));
    test_memset(buffer2, 0x0A, sizeof(buffer2));
    test_memset(buffer1, 0xE6, sizeof(buffer1));

    return 0;
}
