#pragma once
#include "../windissect_forwards.h"

// Reconstructed from QuickActionsDataModel.dll by Windissect. 10 member(s).
namespace Windows::Internal::PlatformExtensions::Details {
class ExtensionRegistrationRegistry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivatableClassId@ExtensionRegistrationRegistry@Details@PlatformExtensions@Internal@Windows@@UEBAJPEAG_K@Z
    virtual long GetActivatableClassId(unsigned short *, uint64_t) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtensionClass@ExtensionRegistrationRegistry@Details@PlatformExtensions@Internal@Windows@@UEBAJPEAG_K@Z
    virtual long GetExtensionClass(unsigned short *, uint64_t) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVelocityFeatureId@ExtensionRegistrationRegistry@Details@PlatformExtensions@Internal@Windows@@UEBAKXZ
    virtual unsigned long GetVelocityFeatureId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ExtensionRegistrationRegistry@Details@PlatformExtensions@Internal@Windows@@QEAAJPEAUHKEY__@@PEBG@Z
    long Initialize(HKEY__*, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDefaultExtension@ExtensionRegistrationRegistry@Details@PlatformExtensions@Internal@Windows@@UEBA_NXZ
    virtual bool IsDefaultExtension() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTestExtension@ExtensionRegistrationRegistry@Details@PlatformExtensions@Internal@Windows@@UEBA_NXZ
    virtual bool IsTestExtension() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExtensionRegistrationRegistry@Details@PlatformExtensions@Internal@Windows@@UEAA@XZ
    virtual ~ExtensionRegistrationRegistry();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetRegValue@ExtensionRegistrationRegistry@Details@PlatformExtensions@Internal@Windows@@CAJPEAUHKEY__@@PEBGKPEAXPEAK@Z
    static long TryGetRegValue(HKEY__*, unsigned short const *, unsigned long, void *, unsigned long *);
};
} // namespace Windows::Internal::PlatformExtensions::Details
