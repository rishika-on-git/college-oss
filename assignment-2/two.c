#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 1000
#define MAX_WORD_LEN 50

typedef struct {
    char word[MAX_WORD_LEN];
    int count;
} WordFrequency;

void toLowerCase(char str[]) {
    for(int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char paragraph[1000];
    WordFrequency wordFreq[MAX_WORDS] = {0};
    int wordCount = 0;

    printf("Enter a paragraph: ");
    fgets(paragraph, sizeof(paragraph), stdin);
    toLowerCase(paragraph);

    char *word = strtok(paragraph, " .,;!?\"\n");

    while(word != NULL) {
        int found = 0;
        for(int i = 0; i < wordCount; i++) {
            if(strcmp(wordFreq[i].word, word) == 0) {
                wordFreq[i].count++;
                found = 1;
                break;
            }
        }

        if(!found) {
            strcpy(wordFreq[wordCount].word, word);
            wordFreq[wordCount].count = 1;
            wordCount++;
        }

        word = strtok(NULL, " .,;!?\"\n");
    }

    printf("Word frequencies:\n");
    for(int i = 0; i < wordCount; i++) {
        printf("%s: %d\n", wordFreq[i].word, wordFreq[i].count);
    }

    return 0;
}
