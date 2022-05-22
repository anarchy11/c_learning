#include <stdio.h>

#define IN 1
#define OUT 0

void forCounting() {
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%ld\n", nc);
}

void lineCounting() {
    int nc, nl;
    nl = 1;
    while((nc = getchar()) != EOF)
        if (nc == '\n')
            ++nl;
    printf("%d\n", nl);
}

void word_counting() {
    int c, nl, nw, nc, state;

    state = OUT;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') {
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++nw;
        }

        printf("%d %d %d\n", nl, nw, nc);
    }
    
}

int main() {
    // long nc;

    // while(getchar() != EOF)
    //     ++nc;
    // printf("%ld\n", nc);
    // lineCounting();
    word_counting();
    return 0;
}