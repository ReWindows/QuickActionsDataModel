#pragma once
#include "../windissect_forwards.h"

// Reconstructed from QuickActionsDataModel.dll by Windissect. 13 member(s).
namespace Windows::Internal::QuickActions {
class QuickUriLauncher {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@QuickUriLauncher@QuickActions@Internal@Windows@@UEAAJXZ
    virtual long Invoke();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0QuickUriLauncher@QuickActions@Internal@Windows@@QEAA@XZ
    QuickUriLauncher();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SecondaryInvoke@QuickUriLauncher@QuickActions@Internal@Windows@@UEAAJXZ
    virtual long SecondaryInvoke();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActionType@QuickUriLauncher@QuickActions@Internal@Windows@@UEAAJPEAW4QuickActionType@234@@Z
    virtual long get_ActionType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsApplicable@QuickUriLauncher@QuickActions@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsApplicable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnabled@QuickUriLauncher@QuickActions@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QuickActionIsActive@QuickUriLauncher@QuickActions@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_QuickActionIsActive(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QuickActionIsAttentionRequired@QuickUriLauncher@QuickActions@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_QuickActionIsAttentionRequired(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QuickActionIsBlinking@QuickUriLauncher@QuickActions@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_QuickActionIsBlinking(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QuickActionStatus@QuickUriLauncher@QuickActions@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_QuickActionStatus(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QuickUriLauncher@QuickActions@Internal@Windows@@UEAA@XZ
    virtual ~QuickUriLauncher();
};
} // namespace Windows::Internal::QuickActions
