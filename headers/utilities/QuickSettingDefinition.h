#pragma once
#include "../windissect_forwards.h"

// Reconstructed from QuickActionsDataModel.dll by Windissect. 2 member(s).
namespace Windows::Internal::QuickActions {
class QuickSettingDefinition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeQuickAction@QuickSettingDefinition@QuickActions@Internal@Windows@@UEAAJV?$ComPtr@VDataModelContext@QuickActions@Internal@Windows@@@WRL@Microsoft@@PEAUIUser@System@4@PEAPEAUIQuickAction@234@@Z
    virtual long MakeQuickAction(WindissectOpaque, ::Windows::System::IUser *, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QuickSettingDefinition@QuickActions@Internal@Windows@@QEAA@XZ
    ~QuickSettingDefinition();
};
} // namespace Windows::Internal::QuickActions
