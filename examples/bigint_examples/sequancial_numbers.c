#define HH_BIGINT_IMPLEMENTATION
#include "../../include/hh_bigint.h"
#include <stdio.h>

int main(){
    printf("Hello Numbers\n");
    hh_bigint_t a; hh_bigint_init(&a, 0x1);
    hh_bigint_t b; hh_bigint_init(&b, 0);
    hh_bigint_t c; hh_bigint_init(&c, 0);

    uint32_t val = 0xffffffff;
    hh_bigint_set_buffer(&b, &val, 4);

    hh_bigint_add(&a, &b, &c);
    hh_bigint_print_hex(&c);
    hh_bigint_subtract(&a, &b, &c);
    hh_bigint_print_hex(&c);
    
    hh_bigint_deinit(&a);
    hh_bigint_deinit(&b);
    return 0;
}
