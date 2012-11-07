#define _XOPEN_SOURCE 500 /* Enable certain library functions (strdup) on linux.  See feature_test_macros(7) */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <time.h>

#define HASH_TABLE_SIZE 65536

/* Hash a string for a particular hash table size. */
int ht_hash( int size, char *key ) {

	unsigned long int hashval = 1;
	int i = 0;

	/* Convert our string to an integer */
	while( hashval < ULONG_MAX && i < strlen( key ) ) {
		hashval = hashval << 8;
		hashval += key[i];
		i++;
	}

	return hashval % size;
}

void gen_random(char *s, const int len) {
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < len; ++i) {
        s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    s[len] = 0;
}

int main( int argc, char **argv ) {

    srand(time(NULL));

    int bin;
    int entry;
    int length;
    int count;
    char *test;

    bin = ht_hash(HASH_TABLE_SIZE, "key1");
    entry = ht_hash(HASH_TABLE_SIZE, "ay1");

    count = 0;

    while(1) {
        length = (rand() % 15) + 2;

        test = (char *)malloc(sizeof(char) * (length+1));

        gen_random(test, length);

        count++;

        if (bin == ht_hash(HASH_TABLE_SIZE, test)) {
            printf("Match: %s\n", test);
            printf("Count: %d\n", count);
            break;
        }

        free(test);
    }

    /*
     * Gen a random number up to 15 char (n)
     * Gen a random string up to n len
     * Hash random string
     * Compare to bin
     * Loop
     */

	return 0;
}
