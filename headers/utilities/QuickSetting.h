#pragma once
#include "../windissect_forwards.h"

// Reconstructed from QuickActionsDataModel.dll by Windissect. 31 member(s).
namespace Windows::Internal::QuickActions {
class QuickSetting {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@QuickSetting@QuickActions@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long GetValue(HSTRING__*, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@QuickSetting@QuickActions@Internal@Windows@@UEAAJXZ
    virtual long Invoke();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnQuickActionPropertyChanged@QuickSetting@QuickActions@Internal@Windows@@UEAAXPEAUHSTRING__@@@Z
    virtual void OnQuickActionPropertyChanged(HSTRING__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0QuickSetting@QuickActions@Internal@Windows@@QEAA@XZ
    QuickSetting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SecondaryInvoke@QuickSetting@QuickActions@Internal@Windows@@UEAAJXZ
    virtual long SecondaryInvoke();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@QuickSetting@QuickActions@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIInspectable@@@Z
    virtual long SetValue(HSTRING__*, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WrapAsQuickSetting@QuickSetting@QuickActions@Internal@Windows@@SAJPEAUISettingItem@DataModel@SystemSettings@@PEAPEAV1234@@Z
    static long WrapAsQuickSetting(::SystemSettings::DataModel::ISettingItem *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActionType@QuickSetting@QuickActions@Internal@Windows@@UEAAJPEAW4QuickActionType@234@@Z
    virtual long get_ActionType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsApplicable@QuickSetting@QuickActions@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsApplicable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnabled@QuickSetting@QuickActions@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QuickActionIsActive@QuickSetting@QuickActions@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_QuickActionIsActive(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QuickActionIsAttentionRequired@QuickSetting@QuickActions@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_QuickActionIsAttentionRequired(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QuickActionIsBlinking@QuickSetting@QuickActions@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_QuickActionIsBlinking(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QuickActionStatus@QuickSetting@QuickActions@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_QuickActionStatus(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QuickSetting@QuickActions@Internal@Windows@@UEAA@XZ
    virtual ~QuickSetting();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingBooleanProperty@QuickSetting@QuickActions@Internal@Windows@@KAJPEAUISettingItem@DataModel@SystemSettings@@PEAUHSTRING__@@PEAE@Z
    static long GetSettingBooleanProperty(::SystemSettings::DataModel::ISettingItem *, HSTRING__*, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingIsEnabled@QuickSetting@QuickActions@Internal@Windows@@KAJPEAUISettingItem@DataModel@SystemSettings@@PEAUHSTRING__@@PEAE@Z
    static long GetSettingIsEnabled(::SystemSettings::DataModel::ISettingItem *, HSTRING__*, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingString@QuickSetting@QuickActions@Internal@Windows@@KAJPEAUISettingItem@DataModel@SystemSettings@@PEAUHSTRING__@@PEAPEAU8@@Z
    static long GetSettingString(::SystemSettings::DataModel::ISettingItem *, HSTRING__*, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingChanged@QuickSetting@QuickActions@Internal@Windows@@IEAAJPEAUIInspectable@@PEAUHSTRING__@@@Z
    long OnSettingChanged(IInspectable *, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNextValue@QuickSetting@QuickActions@Internal@Windows@@MEAAJXZ
    virtual long SetNextValue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSettingProperty@QuickSetting@QuickActions@Internal@Windows@@KAJPEAUISettingItem@DataModel@SystemSettings@@PEAUHSTRING__@@PEAUIInspectable@@@Z
    static long SetSettingProperty(::SystemSettings::DataModel::ISettingItem *, HSTRING__*, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetSettingProperty@QuickSetting@QuickActions@Internal@Windows@@KAJPEAUISettingItem@DataModel@SystemSettings@@PEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    static long TryGetSettingProperty(::SystemSettings::DataModel::ISettingItem *, HSTRING__*, IInspectable * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSubscriptions@QuickSetting@QuickActions@Internal@Windows@@AEAAXXZ
    void AddSubscriptions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@QuickSetting@QuickActions@Internal@Windows@@AEAAXXZ
    void Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAsync@QuickSetting@QuickActions@Internal@Windows@@AEAAXXZ
    void InitializeAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSubscriptions@QuickSetting@QuickActions@Internal@Windows@@AEAAXXZ
    void RemoveSubscriptions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SecondaryInvokeAppLaunch@QuickSetting@QuickActions@Internal@Windows@@AEAAJXZ
    long SecondaryInvokeAppLaunch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SecondaryInvokeUriLaunch@QuickSetting@QuickActions@Internal@Windows@@AEAAJXZ
    long SecondaryInvokeUriLaunch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryWrapSettingsList@QuickSetting@QuickActions@Internal@Windows@@CAJAEAV?$ComPtr@UIInspectable@@@WRL@Microsoft@@0@Z
    static long TryWrapSettingsList(WindissectOpaque &, WindissectOpaque &);
};
} // namespace Windows::Internal::QuickActions
