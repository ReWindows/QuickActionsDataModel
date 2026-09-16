#pragma once
#include "../windissect_forwards.h"

// Reconstructed from QuickActionsDataModel.dll by Windissect. 7 member(s).
namespace pplx::details {
class _CancellationTokenState {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Cancel@_CancellationTokenState@details@pplx@@QEAAXXZ
    void _Cancel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0_CancellationTokenState@details@pplx@@QEAA@XZ
    _CancellationTokenState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeregisterCallback@_CancellationTokenState@details@pplx@@QEAAXPEAV_CancellationTokenRegistration@23@@Z
    void _DeregisterCallback(::pplx::details::_CancellationTokenRegistration *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterCallback@_CancellationTokenState@details@pplx@@QEAAXPEAV_CancellationTokenRegistration@23@@Z
    void _RegisterCallback(::pplx::details::_CancellationTokenRegistration *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1_CancellationTokenState@details@pplx@@UEAA@XZ
    virtual ~_CancellationTokenState();
};
} // namespace pplx::details
