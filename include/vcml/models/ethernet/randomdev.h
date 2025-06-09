#pragma once

#include "vcml/core/peripheral.h"
#include "vcml/core/types.h"
#include "vcml/core/range.h"
#include "vcml/core/systemc.h"

namespace vcml {
namespace ethernet {

class randomdev : public peripheral {
public:
    reg<u32> RANDOM_VAL;

    randomdev(const sc_module_name& name);
    virtual ~randomdev();
    VCML_KIND(randomdev);

    virtual void reset() override;

private:
    u32 generate_random();
    u32 read_random();
};

} // namespace ethernet
} // namespace vcml
