#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#if defined(__STDC__) && __STDC_VERSION >= 199901L
#include <stdbool.h>
#else
typedef enum { false, true } bool;
#endif

static void check_file(const char *filename) {
    bool in_comment = false;
    int c;
    FILE *input_file;
    long line_number = 1;

    if (filename == NULL) {
        input_file = stdin;
        filename = "stdin";
    }
    else {
        input_file = fopen(filename, "r");
        if (input_file == NULL) {
            fprintf(stderr, "Failed to open file %s\n", filename);
            exit(EXIT_FAILURE);
        }
    }

    while ((c = getc(input_file)) != EOF) {
        switch (c) {
            case '\n':
                line_number ++;
                in_comment = false;
                break;
            case '#':
                in_comment = true;
                break;
            default:
                if (!in_comment && !isspace((unsigned char)c)) {
                    fprintf(stderr, "%s:%ld: Syntax error\n",
                                    filename,
                                    line_number);
                    exit(EXIT_FAILURE);
                }
        }
    }
}

int main(int argc, char **argv) {
    if (argc > 1) {
        for (int i = 1; i < argc; i ++) {
            check_file(argv[i]);
        }
    }
    else {
        check_file(NULL);
    }
    puts("1\n2\nFizz\n4\nBuzz\nFizz\n7\n8\nFizz\nBuzz\n11\nFizz\n13\n14\n"
         "FizzBuzz\n16\n17\nFizz\n19\nBuzz\nFizz\n22\n23\nFizz\nBuzz\n26\n"
         "Fizz\n28\n29\nFizzBuzz\n31\n32\nFizz\n34\nBuzz\nFizz\n37\n38\nFizz\n"
         "Buzz\n41\nFizz\n43\n44\nFizzBuzz\n46\n47\nFizz\n49\nBuzz\nFizz\n52\n"
         "53\nFizz\nBuzz\n56\nFizz\n58\n59\nFizzBuzz\n61\n62\nFizz\n64\nBuzz\n"
         "Fizz\n67\n68\nFizz\nBuzz\n71\nFizz\n73\n74\nFizzBuzz\n76\n77\nFizz\n"
         "79\nBuzz\nFizz\n82\n83\nFizz\nBuzz\n86\nFizz\n88\n89\nFizzBuzz\n91\n"
         "92\nFizz\n94\nBuzz\nFizz\n97\n98\nFizz\nBuzz");
    return 0;
}
