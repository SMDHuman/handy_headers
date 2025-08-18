#define HH_BIGINT_IMPLEMENTATION
#include "../../include/hh_bigint.h"
#include <stdio.h>

int main(){
    printf("Hello Numbers\n");
    hh_bigint_t a; hh_bigint_init(&a, 5);
    hh_bigint_t b; hh_bigint_init(&b, 3);
    hh_bigint_t c; hh_bigint_init(&c, 123);

    //uint32_t val = 0xffffffff;
    //hh_bigint_set_buffer(&b, &val, 4);

    hh_bigint_print_hex(&c);
    hh_bigint_add(&a, &b, &c);
    hh_bigint_print_hex(&c);
    hh_bigint_subtract(&a, &b, &c);
    hh_bigint_print_hex(&c);
    
    hh_bigint_multiply(&a, &b, &c);
    hh_bigint_print_hex(&c);


    hh_bigint_convert_from_string(&a, "0b100110101001001001");
    hh_bigint_print_hex(&a);

    hh_bigint_deinit(&a);
    hh_bigint_deinit(&b);
    return 0;
}
