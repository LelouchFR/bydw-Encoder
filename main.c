#include <stdio.h>
#include <string.h>

int encoder()
{
    printf("Phrase a encoder: ");
    char *phrase;
    scanf("%s", phrase);
    char *alpha = "abcdefghijklmnopqrstuvwxyz";

    int sch = 0;
    int index;
    char *foo;

    for (int i = 0; i < strlen(phrase); i++) {
        foo = strchr(alpha, phrase[i]);
        index = (int)(foo - alpha);
        
        sch = -index - i;

        if (i % 2 == 0) {
            sch = -sch + 1;
            printf("%c", alpha[sch]);
        } else {
            sch = -sch - i * 2;
            printf("%c", alpha[sch - 1]);
        }
    }

    return 0;
}

int decoder()
{
    printf("Phrase a encoder: ");
    char *phrase;
    scanf("%s", phrase);
    char *alpha = "zyxwvutsrqponmlkjihgfedcba";

    int sch = 0;
    int index;
    char *foo;

    for (int i = 0; i < strlen(phrase); i++) {
        foo = strchr(alpha, phrase[i]);
        index = (int)(foo - alpha);

        sch = -index - i;

        if (i % 2 == 0) {
            sch = -sch + 1;
            printf("%c", alpha[sch]);
        } else {
            sch = -sch - i * 2;
            printf("%c", alpha[sch - 1]);
        }
    }
    
    return 0;
}

int choice()
{
    int c;
    printf("1 -> Encode\n2 -> Decode\n3 -> Quit\n");
    scanf("%d", &c);

    if (c == 1) {
        return encoder();
    } else if (c == 2) {
        return decoder();
    } else {
        return 0;
    }
}

int main()
{
    choice();
    return 0;
}
