#include <stdint.h>
#include <stdio.h>
#include <gcrypt.h>
#include <limits.h>
#include <math.h>

int main(void) {

  if (!gcry_check_version(GCRYPT_VERSION)) {
    printf(GCRYPT_VERSION);
  }

  // Ensure the input of the iterator that will be hashed to generate the hashes is always 64 bit.
  // Start at 1 Billion, end at UINT_MAX, so round about a search space of 3 Billion, later add a salt
  // to this number to make it less deterministic --> find hashes for any desired deceptive integrity has

  unsigned int startIter = 1000000000;
  unsigned int endIter = UINT_MAX;

  // Test case with gcrypt implementation ready with a test string.
  // Successful hash, verified against sha256sum

  unsigned char d[32];
  gcry_md_hash_buffer(GCRY_MD_SHA256, d, "hello123", 8);
  for (int i = 0; i < 32; i++) {
    printf("%02x", d[i]);
  }

    
 

  while(1) {
    startIter += 1;    
    if(startIter == endIter) {
      break;
    }
  }

  unsigned int tmp = startIter - 1000000000;
  printf("\n\n\nhello, just iterated through %u numbers", tmp);

  // Output format of sha256 is hexadezimal, length is 64 chars: example ea6f856357f5c351106dc9073376898b9530444250457a3a0984c3c63beb4510
  
  return 0;
}
