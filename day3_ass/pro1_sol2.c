#include <stdio.h>
#include <string.h>

void sortBooks(char books[][50], int n) {
    char temp[50];
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(strcmp(books[i], books[j]) > 0) {
                strcpy(temp, books[i]);
                strcpy(books[i], books[j]);
                strcpy(books[j], temp);
            }
        }
    }
}

int searchBook(char books[][50], int n, char bookToSearch[]) {
    for(int i = 0; i < n; i++) {
        if(strcmp(books[i], bookToSearch) == 0) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int n;
    printf("Enter number of books: ");
    scanf("%d", &n);
    char books[n][50];
    for(int i = 0; i < n; i++) {
        printf("Enter title of book %d: ", i + 1);
        scanf(" %[^\n]s", books[i]);
    }

    sortBooks(books, n);
    
    printf("Sorted List:\n");
    for(int i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, books[i]);
    }

    char bookToSearch[50];
    printf("Enter book title to search: ");
    scanf(" %[^\n]s", bookToSearch);

    int index = searchBook(books, n, bookToSearch);
    if(index != -1) {
        printf("Book found in the library.\n");
    } else {
        printf("Book not found in the library.\n");
    }

    return 0;
}
