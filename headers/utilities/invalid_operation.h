#pragma once
#include "../windissect_forwards.h"

// Reconstructed from QuickActionsDataModel.dll by Windissect. 6 member(s).
namespace pplx {
class invalid_operation {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0invalid_operation@pplx@@QEAA@PEBD@Z
    invalid_operation(char const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0invalid_operation@pplx@@QEAA@AEBV01@@Z
    invalid_operation(::pplx::invalid_operation const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?what@invalid_operation@pplx@@UEBAPEBDXZ
    virtual char const * what() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1invalid_operation@pplx@@UEAA@XZ
    virtual ~invalid_operation();
};
} // namespace pplx
