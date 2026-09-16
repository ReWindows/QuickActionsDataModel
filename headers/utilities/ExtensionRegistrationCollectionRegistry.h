#pragma once
#include "../windissect_forwards.h"

// Reconstructed from QuickActionsDataModel.dll by Windissect. 5 member(s).
namespace Windows::Internal::PlatformExtensions::Details {
class ExtensionRegistrationCollectionRegistry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@ExtensionRegistrationCollectionRegistry@Details@PlatformExtensions@Internal@Windows@@UEBAJPEA_K@Z
    virtual long GetCount(uint64_t *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ExtensionRegistrationCollectionRegistry@Details@PlatformExtensions@Internal@Windows@@QEAAJPEAUHSTRING__@@@Z
    long Initialize(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExtensionRegistrationCollectionRegistry@Details@PlatformExtensions@Internal@Windows@@UEAA@XZ
    virtual ~ExtensionRegistrationCollectionRegistry();
};
} // namespace Windows::Internal::PlatformExtensions::Details
