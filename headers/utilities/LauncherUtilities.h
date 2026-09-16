#pragma once
#include "../windissect_forwards.h"

// Reconstructed from QuickActionsDataModel.dll by Windissect. 2 member(s).
namespace Windows::Internal::QuickActions {
class LauncherUtilities {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateApplicationForSignedInUser@LauncherUtilities@QuickActions@Internal@Windows@@SAXPEAUHSTRING__@@0@Z
    static void ActivateApplicationForSignedInUser(HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriWithUserSelectionIfNecessary@LauncherUtilities@QuickActions@Internal@Windows@@SAXPEAUHSTRING__@@@Z
    static void LaunchUriWithUserSelectionIfNecessary(HSTRING__*);
};
} // namespace Windows::Internal::QuickActions
