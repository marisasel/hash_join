//***************** "Hash table *********************
//	Implementation:	Marisa Sel Franco				*
//	HiPES - UFPR									*
//***************************************************

#ifndef __HASHTABLE__
#define __HASHTABLE__

#include <stdlib.h>
#include <stdint.h>
#include <sys/types.h>
#include <unistd.h>

typedef struct htype{
	//long int key;					// real value of the key/id
	uint32_t key;					// real value of the key/id
	int hits;						// number of hits 
	char match;						// sinalize if there is a correspondence 
	struct htype *next;				// pointer to the next value with the same index
} htype;

typedef struct ctype{
	int number_repetition;			// number of pseudorandom repetitions
	int collision;					// number of collisions
} ctype;

//void init_table(htype *table, long int size);
void init_table(htype *table, uint32_t size);
void init_counter(ctype *counter);
//void store(long int key, uint32_t index, htype *table, ctype *counter);
void store(uint32_t key, uint32_t index, htype *table, ctype *counter);
void init_hits_counter(int *hits_counter);
//void histogram(htype *table, int *hits_counter, long int size);
void histogram(htype *table, int *hits_counter, uint32_t size);
void print_hashtable(htype *table, uint32_t size);

#endif