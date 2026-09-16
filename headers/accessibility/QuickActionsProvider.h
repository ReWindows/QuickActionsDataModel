#pragma once
#include "../windissect_forwards.h"

// Reconstructed from QuickActionsDataModel.dll by Windissect. 54 member(s).
namespace Windows::Internal::QuickActions {
class QuickActionsProvider {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@QuickActionsProvider@QuickActions@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForUserQuickActionByFriendlyName@QuickActionsProvider@QuickActions@Internal@Windows@@UEAAJPEAUIUser@System@4@PEAUHSTRING__@@PEAPEAUIQuickAction@234@@Z
    virtual long GetForUserQuickActionByFriendlyName(::Windows::System::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@QuickActionsProvider@QuickActions@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQuickActionByFriendlyName@QuickActionsProvider@QuickActions@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIQuickAction@234@@Z
    virtual long GetQuickActionByFriendlyName(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@QuickActionsProvider@QuickActions@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@QuickActionsProvider@QuickActions@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@QuickActionsProvider@QuickActions@Internal@Windows@@QEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializePinnedQuickActionsListener@QuickActionsProvider@QuickActions@Internal@Windows@@QEAAJXZ
    long InitializePinnedQuickActionsListener();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeQuickActionLayout@QuickActionsProvider@QuickActions@Internal@Windows@@UEAAJXZ
    virtual long InitializeQuickActionLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@QuickActionsProvider@QuickActions@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@QuickActionsProvider@QuickActions@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingsEnvironmentChanged@QuickActionsProvider@QuickActions@Internal@Windows@@QEAAJPEAUISettingsEnvironmentDatabase@DataModel@SystemSettings@@PEAUHSTRING__@@@Z
    long OnSettingsEnvironmentChanged(::SystemSettings::DataModel::ISettingsEnvironmentDatabase *, HSTRING__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@QuickActionsProvider@QuickActions@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0QuickActionsProvider@QuickActions@Internal@Windows@@QEAA@XZ
    QuickActionsProvider();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@QuickActionsProvider@QuickActions@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_QuickActionsChanged@QuickActionsProvider@QuickActions@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_QuickActionsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AvailableQuickActions@QuickActionsProvider@QuickActions@Internal@Windows@@UEAAJPEAPEAU?$IVector@PEAUIQuickAction@QuickActions@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long get_AvailableQuickActions(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PinnedQuickActions@QuickActionsProvider@QuickActions@Internal@Windows@@UEAAJPEAPEAU?$IVector@PEAUIQuickAction@QuickActions@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long get_PinnedQuickActions(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SettingsDatabase@QuickActionsProvider@QuickActions@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_SettingsDatabase(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SettingsEnvironment@QuickActionsProvider@QuickActions@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_SettingsEnvironment(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SettingsDatabase@QuickActionsProvider@QuickActions@Internal@Windows@@UEAAJPEAUIInspectable@@@Z
    virtual long put_SettingsDatabase(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SettingsEnvironment@QuickActionsProvider@QuickActions@Internal@Windows@@UEAAJPEAUIInspectable@@@Z
    virtual long put_SettingsEnvironment(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_QuickActionsChanged@QuickActionsProvider@QuickActions@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_QuickActionsChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QuickActionsProvider@QuickActions@Internal@Windows@@UEAA@XZ
    virtual ~QuickActionsProvider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyDefaultPins@QuickActionsProvider@QuickActions@Internal@Windows@@AEAAJXZ
    long CopyDefaultPins();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillInOrRemoveGaps@QuickActionsProvider@QuickActions@Internal@Windows@@AEAAJXZ
    long FillInOrRemoveGaps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindQuickActionByFriendlyName@QuickActionsProvider@QuickActions@Internal@Windows@@AEAA_NPEAU?$IVector@PEAUIQuickAction@QuickActions@Internal@Windows@@@Collections@Foundation@4@PEAUHSTRING__@@PEAV?$ComPtr@UIQuickAction@QuickActions@Internal@Windows@@@WRL@Microsoft@@@Z
    bool FindQuickActionByFriendlyName(WindissectOpaque *, HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindQuickActionById@QuickActionsProvider@QuickActions@Internal@Windows@@AEAA_NPEAU?$IVector@PEAUIQuickAction@QuickActions@Internal@Windows@@@Collections@Foundation@4@PEAUHSTRING__@@PEAV?$ComPtr@UIQuickAction@QuickActions@Internal@Windows@@@WRL@Microsoft@@@Z
    bool FindQuickActionById(WindissectOpaque *, HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutInitializationState@QuickActionsProvider@QuickActions@Internal@Windows@@AEAA_NAEAK@Z
    bool GetLayoutInitializationState(unsigned long &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPinnedQuickActionIdAtSlot@QuickActionsProvider@QuickActions@Internal@Windows@@AEAAJPEAUHKEY__@@HPEAPEAUHSTRING__@@@Z
    long GetPinnedQuickActionIdAtSlot(HKEY__*, int, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPinnedQuickActionIds@QuickActionsProvider@QuickActions@Internal@Windows@@AEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    long GetPinnedQuickActionIds(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPinnedQuickActionSlotById@QuickActionsProvider@QuickActions@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAH@Z
    long GetPinnedQuickActionSlotById(HSTRING__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideUnpinnedByDefaultQuickActions@QuickActionsProvider@QuickActions@Internal@Windows@@AEAAJAEAV?$ComPtr@V?$AgileObservableVector@PEAUIQuickAction@QuickActions@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIQuickAction@QuickActions@Internal@Windows@@@3Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIQuickAction@QuickActions@Internal@Windows@@@3674@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z
    long HideUnpinnedByDefaultQuickActions(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIdPinned@QuickActionsProvider@QuickActions@Internal@Windows@@AEAAJPEAUHSTRING__@@PEA_N@Z
    long IsIdPinned(HSTRING__*, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLayoutInitializationRequired@QuickActionsProvider@QuickActions@Internal@Windows@@AEAA_NXZ
    bool IsLayoutInitializationRequired();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MigrateToCustomizableQuickActions@QuickActionsProvider@QuickActions@Internal@Windows@@AEAAJXZ
    long MigrateToCustomizableQuickActions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinInapplicableQuickActionsToEndOfList@QuickActionsProvider@QuickActions@Internal@Windows@@AEAAJXZ
    long PinInapplicableQuickActionsToEndOfList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinRS2QuickActions@QuickActionsProvider@QuickActions@Internal@Windows@@AEAAJXZ
    long PinRS2QuickActions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinRS5QuickActions@QuickActionsProvider@QuickActions@Internal@Windows@@AEAAJXZ
    long PinRS5QuickActions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPinRegValue@QuickActionsProvider@QuickActions@Internal@Windows@@AEAAJPEAUHKEY__@@HPEAUHSTRING__@@@Z
    long SetPinRegValue(HKEY__*, int, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPinRegValue@QuickActionsProvider@QuickActions@Internal@Windows@@AEAAJPEAUHKEY__@@PEBGPEAUHSTRING__@@@Z
    long SetPinRegValue(HKEY__*, unsigned short const *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncDisplayedQuickActions@QuickActionsProvider@QuickActions@Internal@Windows@@AEAAJXZ
    long SyncDisplayedQuickActions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncExpandedQuickActions@QuickActionsProvider@QuickActions@Internal@Windows@@AEAAJXZ
    long SyncExpandedQuickActions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncPinnedQuickActions@QuickActionsProvider@QuickActions@Internal@Windows@@AEAAJ_N@Z
    long SyncPinnedQuickActions(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncQuickActions@QuickActionsProvider@QuickActions@Internal@Windows@@AEAAJXZ
    long SyncQuickActions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncQuickActionsLegacy@QuickActionsProvider@QuickActions@Internal@Windows@@AEAAJXZ
    long SyncQuickActionsLegacy();
};
} // namespace Windows::Internal::QuickActions
