#include <stdio.h>

#define RESPONSES_SIZE 40
#define FREQUENCY_SIZE 11

int main()
{
    int frequency[FREQUENCY_SIZE] = {0};
    
    int responses[RESPONSES_SIZE] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
        1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
        5, 6, 7, 5, 6, 4, 8, 6, 8, 10};
    
    int answer, rating;
    
    for(answer = 0; answer < RESPONSES_SIZE; answer++)
    {
        frequency[responses[answer]]++;
    }
    
    printf("Rating \tFrequency\n");
    
    for(rating = 1; rating < FREQUENCY_SIZE; rating++)
    {
        printf("%d \t\t%d\n", rating, frequency[rating]);
    }
    
    return 0;
}
