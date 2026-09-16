#pragma once
#include "../windissect_forwards.h"

// Reconstructed from QuickActionsDataModel.dll by Windissect. 5 member(s).
namespace QuickActionsTelemetry {
class InvokingQuickSetting {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@InvokingQuickSetting@QuickActionsTelemetry@@QEAAXPEBGW4QuickSettingInvokeType@2@@Z
    void StartActivity(unsigned short const *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InvokingQuickSetting@QuickActionsTelemetry@@QEAA@XZ
    ~InvokingQuickSetting();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@InvokingQuickSetting@QuickActionsTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@InvokingQuickSetting@QuickActionsTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace QuickActionsTelemetry
