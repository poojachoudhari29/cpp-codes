#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 2

struct student {
    char nm[50];
    char prn[20];
    char id[30];
    char class[20];
    char address[50];
    long int mobileNo;
    float gradept;
} s[N];

int setData() {
    for (int i = 0; i < N; i++) {
        printf("\nEnter the name of student: ");
        fgets(s[i].nm, 50, stdin);
        s[i].nm[strcspn(s[i].nm, "\n")] = '\0'; // Remove the newline character

        printf("\nEnter the prn of student: ");
        fgets(s[i].prn, 20, stdin);
        s[i].prn[strcspn(s[i].prn, "\n")] = '\0'; // Remove the newline character

        printf("\nEnter the email id of student: ");
        fgets(s[i].id, 30, stdin);
        s[i].id[strcspn(s[i].id, "\n")] = '\0'; // Remove the newline character

        printf("\nEnter the class of student: ");
        fgets(s[i].class, 20, stdin);
        s[i].class[strcspn(s[i].class, "\n")] = '\0'; // Remove the newline character

        printf("\nEnter the address of student: ");
        fgets(s[i].address, 50, stdin);
        s[i].address[strcspn(s[i].address, "\n")] = '\0'; // Remove the newline character

        printf("\nEnter the grade point of student: ");
        scanf("%f", &s[i].gradept);

        printf("\nEnter the mobile no. of student: ");
        scanf("%ld", &s[i].mobileNo);

        // Clear the input buffer
        while (getchar() != '\n');
    }
    return 0;
}

int display() {
    for (int i = 0; i < N; i++) {
        printf("\nThe name of student: ");
        puts(s[i].nm);

        printf("\nThe prn of student: ");
        puts(s[i].prn);

        printf("\nThe email id of student: ");
        puts(s[i].id);

        printf("\nThe class of student: ");
        puts(s[i].class);

        printf("\nThe address of student: ");
        puts(s[i].address);

        printf("\nThe grade point of student: ");
        printf("%f\n", s[i].gradept);

        printf("\nThe mobile no. of student: ");
        printf("%ld\n", s[i].mobileNo);
    }
    return 0;
}

int main() {
    printf("\nStudent data:\n");
    setData();
    display();
    return 0;
}
