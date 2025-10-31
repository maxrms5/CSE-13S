#include <stdio.h>

int main() {
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) return 0; // gets number of students

    // student struct
    typedef struct { 
        char name[32]; 
        int score;
    } Student;

    // init an array of 100 students
    Student s[100]; 

    // vars for score calculations
    long long sum = 0;
    int best_score_index = 0;
    int num_even_scores = 0;

    // gets n names and scores and addes them to the array of students
    printf("Enter %d student names and scores:\n", n);
    for (int i=0; i<n; i++) {
        if (scanf("%31s %d", s[i].name, &s[i].score) != 2) return 0; // gets names and scores, makes sure 2 inputs are given
        sum += s[i].score; // updates sum of scores, helps find average
        if (s[i].score > s[best_score_index].score) best_score_index = i; // checks and updates best score index
        if (s[i].score % 2 == 0) num_even_scores++; // checks in score is even and updates count
    }

    // prints average score, top score, and number of even socres
    double average = sum / (double) n; // calc average score
    printf("\nAverage: %.2f\n", average);
    printf("Top Score: %s %d\n", s[best_score_index].name, s[best_score_index].score);
    printf("Even Scores: %d\n", num_even_scores);

    return 0;
}

