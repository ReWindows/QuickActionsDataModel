#pragma once
#include "../windissect_forwards.h"

// Reconstructed from QuickActionsDataModel.dll by Windissect. 12 member(s).
namespace Windows::Internal::QuickActions {
class QuickAppLauncher {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@QuickAppLauncher@QuickActions@Internal@Windows@@UEAAJXZ
    virtual long Invoke();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SecondaryInvoke@QuickAppLauncher@QuickActions@Internal@Windows@@UEAAJXZ
    virtual long SecondaryInvoke();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActionType@QuickAppLauncher@QuickActions@Internal@Windows@@UEAAJPEAW4QuickActionType@234@@Z
    virtual long get_ActionType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsApplicable@QuickAppLauncher@QuickActions@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsApplicable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnabled@QuickAppLauncher@QuickActions@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QuickActionIsActive@QuickAppLauncher@QuickActions@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_QuickActionIsActive(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QuickActionIsAttentionRequired@QuickAppLauncher@QuickActions@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_QuickActionIsAttentionRequired(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QuickActionIsBlinking@QuickAppLauncher@QuickActions@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_QuickActionIsBlinking(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QuickActionStatus@QuickAppLauncher@QuickActions@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_QuickActionStatus(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QuickAppLauncher@QuickActions@Internal@Windows@@UEAA@XZ
    virtual ~QuickAppLauncher();
};
} // namespace Windows::Internal::QuickActions
