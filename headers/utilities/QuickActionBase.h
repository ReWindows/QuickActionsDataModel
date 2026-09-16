#pragma once
#include "../windissect_forwards.h"

// Reconstructed from QuickActionsDataModel.dll by Windissect. 18 member(s).
namespace Windows::Internal::QuickActions {
class QuickActionBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@QuickActionBase@QuickActions@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long GetValue(HSTRING__*, IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0QuickActionBase@QuickActions@Internal@Windows@@QEAA@XZ
    QuickActionBase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContext@QuickActionBase@QuickActions@Internal@Windows@@UEAAJPEAVDataModelContext@234@@Z
    virtual long SetContext(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFriendlyName@QuickActionBase@QuickActions@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long SetFriendlyName(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIcon@QuickActionBase@QuickActions@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long SetIcon(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetId@QuickActionBase@QuickActions@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long SetId(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTitle@QuickActionBase@QuickActions@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long SetTitle(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUser@QuickActionBase@QuickActions@Internal@Windows@@UEAAJPEAUIUser@System@4@@Z
    virtual long SetUser(::Windows::System::IUser *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@QuickActionBase@QuickActions@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIInspectable@@@Z
    virtual long SetValue(HSTRING__*, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_QuickActionPropertyChanged@QuickActionBase@QuickActions@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_QuickActionPropertyChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FriendlyName@QuickActionBase@QuickActions@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_FriendlyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@QuickActionBase@QuickActions@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QuickActionIcon@QuickActionBase@QuickActions@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_QuickActionIcon(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QuickActionTitle@QuickActionBase@QuickActions@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_QuickActionTitle(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_QuickActionPropertyChanged@QuickActionBase@QuickActions@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_QuickActionPropertyChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QuickActionBase@QuickActions@Internal@Windows@@UEAA@XZ
    virtual ~QuickActionBase();
};
} // namespace Windows::Internal::QuickActions
