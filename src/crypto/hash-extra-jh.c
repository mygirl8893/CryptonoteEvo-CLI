#include <assert.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "jh.h"
#include "hash-impl.h"

void hash_extra_jh(const void *data, size_t length, unsigned char *hash) {
  int r = jh_hash(HASH_SIZE * 8, data, 8 * length, hash);
  assert(SUCCESS == r);
}
