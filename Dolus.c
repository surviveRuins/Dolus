#include <stdio.h>
#include <gcrypt.h>
#include <limits.h>
#include <math.h>

int main(void) {

  //if (!gcry_check_version(GCRYPT_VERSION)) {
    //printf(GCRYPT_VERSION);
  //}

  // Ensure the input of the iterator that will be hashed to generate the hashes is always 64 bit.
  // Start at 1 Billion, end at UINT_MAX, so round about a search space of 3 Billion, later add a salt
  // to this number to make it less deterministic --> find hashes for any desired deceptive integrity has

  unsigned int startIter = UINT_MAX - pow(10, 6);
  unsigned int endIter = UINT_MAX;

  while(1) {
    printf("%u\n", startIter);
    startIter += 1;    
    if(startIter == endIter) {
      break;
    }
  }

  printf("hello");

  // Output format of sha256 is hexadezimal, length is 64 chars: example ea6f856357f5c351106dc9073376898b9530444250457a3a0984c3c63beb4510
  return 0;
}
