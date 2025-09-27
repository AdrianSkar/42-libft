#include "libft.h"
#include <stdint.h>

/**
 * @brief Allocates memory for an array of nmemb elements of size bytes each
 * and returns a pointer to the allocated memory.
 * The memory is set to zero.
 * @param nmemb Number of elements
 * @param size Size of each element
 * @return void* Pointer to the allocated memory
 * @note If nmemb or size is 0, then calloc() returns either NULL, or a unique
 * 		pointer value that can later be successfully passed to free().
 * @note If an overflow is detected, calloc() returns NULL.
 * @note The memory allocated by calloc() is aligned on a boundary of
 * 		sizeof(max_align_t) bytes.
 * @note The value of errno is not modified on error. That is managed by malloc.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	bytes_count;

	if (nmemb && size > SIZE_MAX / nmemb)
		return (NULL);
	bytes_count = (nmemb * size);
	ptr = malloc(bytes_count);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, bytes_count);
	return (ptr);
}

/*
Int overflow test
https://man7.org/linux/man-pages/man3/malloc.3.html
 */
/*
#include <stdio.h>
int main() {
	size_t nmemb = 5;
	size_t size = sizeof(int);
	size_t nmemb = SIZE_MAX / sizeof(int) +  1; // Intentional overflow
  size_t size = sizeof(int);

	printf("size_t: %zu\n", SIZE_MAX);
	printf("size: %zu\n", size);
	printf("nmbem * size: %zu\n", nmemb * size);

	int* array = (int*)calloc(nmemb, size);
	printf("returned ptr: %p\n", array);

	if (array == NULL) {
		printf("Memory allocation failed\n");
		return 1;
	}

	for (size_t i = 0; i < nmemb; i++) {
		printf("%d ", array[i]);
	}

	free(array);
	return 0;

	///////////////////////////////// test for error set
	// char	*foo;
	// 	errno = 0;
	// foo = ft_calloc(184467440737095516, 8321713848);
	// if (errno == ENOMEM)
	// 	printf("overflow on ft_calloc\n");
	// foo = calloc(184467440737095516, 8321713848);
	// if (errno == ENOMEM)
	// 	printf("overflow and error set on calloc\n");
	// return 0;
}
 */
/*
#include <assert.h>
#include <stdio.h>
int main(void){
	int n = 5, i = 0;

	int *ptr1 = (int*)ft_calloc(n, sizeof(int));
	int *ptr2 = (int*)calloc(n, sizeof(int));

	assert(ptr1 != NULL);
	assert(ptr2 != NULL);

	while(i < n){
		assert(ptr1[i] == 0);
		assert(ptr2[i] == 0);
		i++;
	}

	free(ptr1);
	free(ptr2);
	printf("All test passed");
	return 0;
} */
