#pragma once

#include "vcml/core/peripheral.h"
#include "vcml/core/types.h"
#include "vcml/core/range.h"
#include "vcml/core/systemc.h"

namespace vcml {
namespace ethernet {

class randomdev : public peripheral {
public:
    // Mandatory TLM socket so VCML bus can bind this peripheral
    tlm_target_socket in;

    // Register that exposes a random value on read
    reg<u32> RANDOM_VAL;

    randomdev(const sc_module_name& name);
    virtual ~randomdev();
    VCML_KIND(randomdev);

    virtual void reset() override;

private:
    u32 generate_random();   // Helper to generate random value
    u32 read_random();       // Hook for register read
};

} // namespace ethernet
} // namespace vcml
