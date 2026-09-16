#pragma once
#include "../windissect_forwards.h"

// Reconstructed from QuickActionsDataModel.dll by Windissect. 19 member(s).
namespace Windows::Internal::PlatformExtensions::Details {
class ActivationFactoryContractRedirectorContext {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ActivationFactoryContractRedirectorContext@Details@PlatformExtensions@Internal@Windows@@QEAA@XZ
    ActivationFactoryContractRedirectorContext();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ActivationFactoryContractRedirectorContext@Details@PlatformExtensions@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ActivationFactoryContractRedirectorContext@Details@PlatformExtensions@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ActivationFactoryContractRedirectorContext@Details@PlatformExtensions@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ActivationFactoryContractRedirectorContext@Details@PlatformExtensions@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ActivationFactoryContractRedirectorContext@Details@PlatformExtensions@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ActivationFactoryContractRedirectorContext@Details@PlatformExtensions@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProcessId@ActivationFactoryContractRedirectorContext@Details@PlatformExtensions@Internal@Windows@@UEAAJPEAK@Z
    virtual long get_ProcessId(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowId@ActivationFactoryContractRedirectorContext@Details@PlatformExtensions@Internal@Windows@@UEAAJPEAUWindowId@WindowManagement@ApplicationModel@45@@Z
    virtual long get_WindowId(::Windows::Internal::ApplicationModel::WindowManagement::WindowId *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ProcessId@ActivationFactoryContractRedirectorContext@Details@PlatformExtensions@Internal@Windows@@UEAAJK@Z
    virtual long put_ProcessId(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_WindowId@ActivationFactoryContractRedirectorContext@Details@PlatformExtensions@Internal@Windows@@UEAAJUWindowId@WindowManagement@ApplicationModel@45@@Z
    virtual long put_WindowId(::Windows::Internal::ApplicationModel::WindowManagement::WindowId);
};
} // namespace Windows::Internal::PlatformExtensions::Details
