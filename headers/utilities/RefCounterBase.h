#pragma once
#include "../windissect_forwards.h"

// Reconstructed from QuickActionsDataModel.dll by Windissect. 5 member(s).
namespace pplx::details {
class _RefCounterBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Release@_RefCounterBase@details@pplx@@QEAAJXZ
    long _Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1_RefCounterBase@details@pplx@@UEAA@XZ
    virtual ~_RefCounterBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Destroy@_RefCounterBase@details@pplx@@MEAAXXZ
    virtual void _Destroy();
};
} // namespace pplx::details
