#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE_LENGTH 100

void sortBooks(char books[][MAX_TITLE_LENGTH], int n) {
    char temp[MAX_TITLE_LENGTH];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(books[i], books[j]) > 0) {
                strcpy(temp, books[i]);
                strcpy(books[i], books[j]);
                strcpy(books[j], temp);
            }
        }
    }
}

int main() {
    int n;
    char books[MAX_BOOKS][MAX_TITLE_LENGTH];
    printf("Enter number of books: ");
    scanf("%d", &n);
    getchar(); 
    printf("Book Titles:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. ", i + 1);
        fgets(books[i], MAX_TITLE_LENGTH, stdin);
       
        books[i][strcspn(books[i], "\n")] = 0;
    }

    sortBooks(books, n);

    printf("\nSorted List:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, books[i]);
    }

    char searchTitle[MAX_TITLE_LENGTH];
    printf("\nEnter book title to search: ");
    fgets(searchTitle, MAX_TITLE_LENGTH, stdin);
    searchTitle[strcspn(searchTitle, "\n")] = 0; 
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(books[i], searchTitle) == 0) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Book found in the library.\n");
    } else {
        printf("Book not found in the library.\n");
    }

    return 0;
}
