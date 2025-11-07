#include <stdio.h>
#include <string.h>

#define MAXN 100

typedef struct {
    char name[50];
    char species[50];
    int age;
    float weight;
} Animal;

int has_b(const char *s) {
    char b = 'b';
    const char *result = strchr(s, b);
    if (result != NULL) return 1;
    return 0;
}

int should_keep(Animal *a) {
    if (has_b(a->name)) return 1;
    else if (a->age > 15) return 1;
    else if (a->weight > 200.0) return 1;
    else return 0;
}

int compare_animals(Animal *A, Animal *B) {
    if (strcmp(A->species, B->species) != 0) return strcmp(A->species, B->species);
    else if (A->age != B->age) return (B->age - A->age);
    else return (strcmp(A->name, B->name)); 
}

void sort_animals(Animal *arr, int size) {
    Animal x, y; // temp vars for swapping
    for (int i=0; i<size-1; i++) { // iterates over every element
        for (int j=0; j<size-i-1; j++) { // iterates over every element and places target element
            Animal *curr = (arr + j);
            Animal *next = (arr + j + 1);
            int result = compare_animals(curr, next); // returns positive value if next should be higher in list
            if (result > 0) {
                x = *curr;
                y = *next;
                *curr = y;
                *next = x;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of animals: ");
    scanf("%d", &n);

    Animal animals[MAXN], filtered[MAXN];
    int filtered_count = 0;

    /* Read info for n animals from the user */
    for (int i = 0; i < n; i++) {
        scanf("%s %s %d %f", animals[i].name, animals[i].species, &animals[i].age, &animals[i].weight);
    }

    /* Input animals */
    printf("\n");
    printf("Input animals: \n");
    for (int i = 0; i < n; i++) {
        printf("%s %s %d %.2f\n", animals[i].name, animals[i].species, animals[i].age, animals[i].weight);
    }
    printf("\n");
    
    /* Filter the animals based on the given criteria */
    for (int i = 0; i < n; i++) {
        if (should_keep(&animals[i])) {
            filtered[filtered_count++] = animals[i];
        }
    }

    /* Sort the filtered animals and print them */
    sort_animals(filtered, filtered_count);

    /* Filtered and sorted animals */
    printf("Filtered and Sorted animals: \n");
    for (int i = 0; i < filtered_count; i++) {
        printf("%s %s %d %.2f\n", filtered[i].name, filtered[i].species, filtered[i].age, filtered[i].weight);
    }

    return 0;
}
