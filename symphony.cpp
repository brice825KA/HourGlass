// Symphony program

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

#define re return

void reply_combine(char **sent) {
    for (auto i = 0; sent[i]; i += 1) {
        for (auto k = 0; k <= i; k += 1)
            printf("%s ", sent[k]);
        for (auto j = i - 2; j >= 0; j -= 1)
            printf("%s ", sent[j]);
        printf("\n");
    }
}

void print_sent_split(char **sent) {
    if (!sent)
        exit (0);
    for (auto i = 0; sent[i]; i += 1)
        cout << sent[i] << endl;
}

int count_word(char *lim, char *sent) {
    int count = 0;
    for (auto i = 0; lim[i]; i += 1) {
        for (auto j = 0; sent[j]; j += 1) {
            if (lim[i] == sent[j])
                count += 1;
        }
    }
    re count;
}

char **split_sent(char *sent, char *lim) {
    char **new_split = (char **)malloc(sizeof(char *) * (count_word(lim, sent) + 2));
    char *buffer = NULL;
    auto i = 0;

    buffer = strtok(sent, lim);
    while (buffer != NULL) {
        new_split[i] = strdup(buffer);
        buffer = (strtok(NULL, lim));
        i += 1;
    }
    new_split[i] = NULL;
    re new_split;
}

int main(int argc, char **argv) {
    char **split = NULL;
    auto i = 1;
    
    if (argc < 2)
        exit(84);
    while (argv[i]) {
        split = split_sent(argv[i], " \t");
        reply_combine(split);
        i += 1;
    }
    re 0;
}