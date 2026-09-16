#pragma once
#include "../windissect_forwards.h"

// Reconstructed from QuickActionsDataModel.dll by Windissect. 11 member(s).
class CActivatedEventArgsWithViewIdBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CActivatedEventArgsWithViewIdBase@@QEAA@XZ
    CActivatedEventArgsWithViewIdBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalObjectToPropertySet@CActivatedEventArgsWithViewIdBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    long MarshalObjectToPropertySet(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z
    virtual long get_ActivationViewSwitcher(::Windows::UI::ViewManagement::IActivationViewSwitcher * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentlyShownApplicationViewId@CActivatedEventArgsWithViewIdBase@@UEAAJPEAH@Z
    virtual long get_CurrentlyShownApplicationViewId(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Properties@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUMultiviewActivationProperties@Activation@ApplicationModel@Windows@@@Z
    virtual long get_Properties(::Windows::ApplicationModel::Activation::MultiviewActivationProperties *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z
    virtual long get_ViewSwitcher(::Windows::UI::ViewManagement::IActivationViewSwitcher * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z
    virtual long put_ActivationViewSwitcher(::Windows::UI::ViewManagement::IActivationViewSwitcher *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Properties@CActivatedEventArgsWithViewIdBase@@UEAAJUMultiviewActivationProperties@Activation@ApplicationModel@Windows@@@Z
    virtual long put_Properties(::Windows::ApplicationModel::Activation::MultiviewActivationProperties);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CActivatedEventArgsWithViewIdBase@@MEAA@XZ
    virtual ~CActivatedEventArgsWithViewIdBase();
};
