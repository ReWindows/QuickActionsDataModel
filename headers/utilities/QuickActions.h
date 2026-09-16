#pragma once
#include "../windissect_forwards.h"

// Reconstructed from QuickActionsDataModel.dll by Windissect. 4 member(s).
namespace Windows::Internal {
class QuickActions {
public:
    class ControlCenterSettings;
    class ControlCenterSettingsFactory;
    class DataModelContext;
    class LauncherUtilities;
    class PropValueHelper;
    class QuickActionBase;
    class QuickActionDefinition;
    class QuickActionsProvider;
    class QuickAppLauncher;
    class QuickAppLauncherDefinition;
    class QuickSetting;
    class QuickSettingDefinition;
    class QuickUriLauncher;
    class QuickUriLauncherDefinition;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHstringEqual@QuickActions@Internal@Windows@@YA_NPEAUHSTRING__@@0@Z
    bool IsHstringEqual(HSTRING__*, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHstringEqual@QuickActions@Internal@Windows@@YA_NPEAUHSTRING__@@PEBG@Z
    bool IsHstringEqual(HSTRING__*, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUseWlanStrKeyOn@QuickActions@Internal@Windows@@YA_NXZ
    bool IsUseWlanStrKeyOn();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetKeyIfHasSubkeys@QuickActions@Internal@Windows@@YAJPEAUHKEY__@@PEBGPEAPEAU4@PEAK@Z
    long _GetKeyIfHasSubkeys(HKEY__*, unsigned short const *, HKEY__* *, unsigned long *);
};
} // namespace Windows::Internal
