#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

#define END "end of file"

struct Sentence{
    char* sentence;
    int memSentence;
    int sizeSentence;
};


int readSentence(struct Sentence* sentence, FILE* file);
int printSentence(struct Sentence sentence);

	// Format Sentence
int sentenceCaps(const struct Sentence sent);


