#include "vcml/models/ethernet/randomdev.h"
#include <cstdlib>  // for rand()

namespace vcml {
namespace ethernet {

randomdev::randomdev(const sc_module_name& nm):
    peripheral(nm),
    RANDOM_VAL("RANDOM_VAL", 0x00, 0x0) {

    RANDOM_VAL.sync_always();
    RANDOM_VAL.allow_read_only();
    RANDOM_VAL.on_read(&randomdev::read_random);
}

randomdev::~randomdev() {
    // nothing to clean up
}

u32 randomdev::generate_random() {
    return rand();  // simple non-secure RNG
}

u32 randomdev::read_random() {
    u32 value = generate_random();
    log_debug("Random value read: 0x%08x", value);
    return value;
}

void randomdev::reset() {
    peripheral::reset();
    RANDOM_VAL = 0;
}

} // namespace ethernet
} // namespace vcml
