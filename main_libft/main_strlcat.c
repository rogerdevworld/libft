#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t ft_strlcat(char *dest, const char *src, size_t size); // Tu implementación
size_t strlcat(char *dest, const char *src, size_t size); // Supongamos que esta es la original

void test_strlcat(char *dest, const char *src, size_t size) {
    char original_dest[100];
    char ft_dest[100];

    // Copia de dest para ambas funciones
    strncpy(original_dest, dest, sizeof(original_dest));
    strncpy(ft_dest, dest, sizeof(ft_dest));

    // Llama a las funciones
    size_t original_result = strlcat(original_dest, src, size);
    size_t ft_result = ft_strlcat(ft_dest, src, size);

    // Imprime los resultados
    printf("Testing dest: \"%s\", src: \"%s\", size: %zu\n", dest, src, size);
    printf("Original strlcat result: \"%s\" (length: %zu)\n", original_dest, original_result);
    printf("ft_strlcat result: \"%s\" (length: %zu)\n", ft_dest, ft_result);

    // Verifica si los resultados coinciden
    if (strcmp(original_dest, ft_dest) == 0 && original_result == ft_result) {
        printf("Test passed!\n");
    } else {
        printf("Test failed!\n");
    }
    printf("-------------------------------------------------\n");
}

int main() {
    const char *src = " World!";
    
    // Inicializa el contador de pruebas
    size_t i = 0;
    
    // Realiza 100 casos de prueba con un bucle while
    while (i < 100) {
        char dest[100];
        size_t size = (i % 50) + 1; // Tamaño de prueba entre 1 y 50
        snprintf(dest, sizeof(dest), "Hello %zu", i); // Crea un destino diferente para cada prueba
        
        test_strlcat(dest, src, size);
        
        i++; // Incrementa el contador
    }

    return 0;
}
