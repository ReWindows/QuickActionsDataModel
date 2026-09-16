#pragma once
#include "../windissect_forwards.h"

// Reconstructed from QuickActionsDataModel.dll by Windissect. 4 member(s).
namespace QuickActionsTelemetry {
class InitializeQuickAction {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@InitializeQuickAction@QuickActionsTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InitializeQuickAction@QuickActionsTelemetry@@QEAA@XZ
    ~InitializeQuickAction();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@InitializeQuickAction@QuickActionsTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@InitializeQuickAction@QuickActionsTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace QuickActionsTelemetry
