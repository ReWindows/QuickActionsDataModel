#pragma once
#include "../windissect_forwards.h"

// Reconstructed from QuickActionsDataModel.dll by Windissect. 30 member(s).
namespace Windows::Internal::QuickActions {
class ControlCenterSettings {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ControlCenterSettings@QuickActions@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyDefaultPins@ControlCenterSettings@QuickActions@Internal@Windows@@UEAAJXZ
    virtual long ApplyDefaultPins();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ControlCenterSettings@QuickActions@Internal@Windows@@QEAA@XZ
    ControlCenterSettings();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ControlCenterSettings@QuickActions@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ControlCenterSettings@QuickActions@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ControlCenterSettings@QuickActions@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@ControlCenterSettings@QuickActions@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@ControlCenterSettings@QuickActions@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinQuickAction@ControlCenterSettings@QuickActions@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long PinQuickAction(HSTRING__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ControlCenterSettings@QuickActions@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ControlCenterSettings@QuickActions@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnpinQuickAction@ControlCenterSettings@QuickActions@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long UnpinQuickAction(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SettingsChanged@ControlCenterSettings@QuickActions@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIControlCenterSettings@QuickActions@Internal@Windows@@PEAUHSTRING__@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_SettingsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UnpinnedQuickActions@ControlCenterSettings@QuickActions@Internal@Windows@@UEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long get_UnpinnedQuickActions(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SettingsChanged@ControlCenterSettings@QuickActions@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SettingsChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ControlCenterSettings@QuickActions@Internal@Windows@@UEAA@XZ
    virtual ~ControlCenterSettings();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyDefaultPinsIfNecessary@ControlCenterSettings@QuickActions@Internal@Windows@@AEAAJXZ
    long ApplyDefaultPinsIfNecessary();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteKeyValues@ControlCenterSettings@QuickActions@Internal@Windows@@AEAAJPEAUHKEY__@@@Z
    long DeleteKeyValues(HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeRegistryListener@ControlCenterSettings@QuickActions@Internal@Windows@@AEAAJXZ
    long InitializeRegistryListener();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateCachedPins@ControlCenterSettings@QuickActions@Internal@Windows@@AEAAXXZ
    void InvalidateCachedPins();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadQuickActionsList@ControlCenterSettings@QuickActions@Internal@Windows@@AEAAJPEAUHKEY__@@PEAPEAV?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@3Collections@Foundation@4@@Z
    long ReadQuickActionsList(HKEY__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopRegistryListener@ControlCenterSettings@QuickActions@Internal@Windows@@AEAAXXZ
    void StopRegistryListener();
};
} // namespace Windows::Internal::QuickActions
