#pragma once
#include "../windissect_forwards.h"

// Reconstructed from QuickActionsDataModel.dll by Windissect. 5 member(s).
namespace Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry {
class TryActivateContractExtension {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TryActivateContractExtension@PlatformExtensionsTelemetry@Details@PlatformExtensions@Internal@Windows@@QEAAXPEAUHSTRING__@@UWindowId@WindowManagement@ApplicationModel@56@AEBU_GUID@@@Z
    void StartActivity(HSTRING__*, ::Windows::Internal::ApplicationModel::WindowManagement::WindowId, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@TryActivateContractExtension@PlatformExtensionsTelemetry@Details@PlatformExtensions@Internal@Windows@@QEAAX_N0PEBG@Z
    void Stop(bool, bool, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TryActivateContractExtension@PlatformExtensionsTelemetry@Details@PlatformExtensions@Internal@Windows@@QEAA@XZ
    ~TryActivateContractExtension();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TryActivateContractExtension@PlatformExtensionsTelemetry@Details@PlatformExtensions@Internal@Windows@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TryActivateContractExtension@PlatformExtensionsTelemetry@Details@PlatformExtensions@Internal@Windows@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace Windows::Internal::PlatformExtensions::Details::PlatformExtensionsTelemetry
