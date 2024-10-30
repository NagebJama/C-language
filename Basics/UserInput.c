#include <stdio.h>
#include <string.h> // Include string.h for strcspn

int main()
{
    char name[35];
    char city[34];
    char course[50];
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Use sizeof for safer code
    name[strcspn(name, "\n")] = '\0'; // Remove newline character

    printf("Enter where you live: ");
    fgets(city, sizeof(city), stdin); // Use sizeof for safer code
    city[strcspn(city, "\n")] = '\0'; // Remove newline character

    printf("Enter the course you study: ");
    fgets(course, sizeof(course), stdin); // Use sizeof for safer code
    course[strcspn(course, "\n")] = '\0'; // Remove newline character

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hello %s, How are you doing bro \n", name);
    printf("I live in: %s\n", city);
    printf("I study: %s\n", course);
    printf("My age is: %d\n", age);

    return 0; // Return statement for main function
}
