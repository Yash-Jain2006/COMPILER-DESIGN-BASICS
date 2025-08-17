#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_LEN 100

// List of C keywords
const char *keywords[] = {
    "int", "float", "char", "double", "if", "else", "while", "for", "return",
    "void", "main", "break", "continue", "switch", "case", "default", "do",
    "struct", "typedef", "const", "unsigned", "signed", "long", "short"
};
int keyword_count = sizeof(keywords) / sizeof(keywords[0]);

// Check if a word is a keyword
int isKeyword(const char *word) {
    for (int i = 0; i < keyword_count; i++) {
        if (strcmp(word, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

// Check if a character is a valid operator
int isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' ||
           ch == '=' || ch == '<' || ch == '>' || ch == '!';
}

int main() {
    FILE *fp;
    char ch, buffer[MAX_LEN], filename[100];
    int i = 0;

    // Ask user for file name
    printf("Enter the input file name (e.g., input.c): ");
    scanf("%s", filename);

    fp = fopen(filename, "r");  // Open file entered by user
    if (fp == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        return 1;
    }

    printf("\nLEXICAL ANALYSIS OUTPUT:\n\n");

    while ((ch = fgetc(fp)) != EOF) {
        if (isspace(ch) || ch == ';' || ch == ',' || ch == '(' || ch == ')' || ch == '{' || ch == '}') {
            if (i != 0) {
                buffer[i] = '\0';
                if (isKeyword(buffer))
                    printf("[Keyword: %s]\n", buffer);
                else if (isalpha(buffer[0]) || buffer[0] == '_')
                    printf("[Identifier: %s]\n", buffer);
                else
                    printf("[Unknown: %s]\n", buffer);
                i = 0;
            }
        } else if (isOperator(ch)) {
            if (i != 0) {
                buffer[i] = '\0';
                if (isKeyword(buffer))
                    printf("[Keyword: %s]\n", buffer);
                else if (isalpha(buffer[0]) || buffer[0] == '_')
                    printf("[Identifier: %s]\n", buffer);
                else
                    printf("[Unknown: %s]\n", buffer);
                i = 0;
            }

            char next = fgetc(fp);
            if ((ch == '=' && next == '=') || (ch == '!' && next == '=') ||
                (ch == '<' && next == '=') || (ch == '>' && next == '=')) {
                printf("[Operator: %c%c]\n", ch, next);
            } else {
                printf("[Operator: %c]\n", ch);
                ungetc(next, fp);
            }
        } else {
            buffer[i++] = ch;
        }
    }

    fclose(fp);
    return 0;
}
