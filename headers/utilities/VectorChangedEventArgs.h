#pragma once
#include "../windissect_forwards.h"

// Reconstructed from QuickActionsDataModel.dll by Windissect. 13 member(s).
namespace Windows::Foundation::Collections::Internal {
class VectorChangedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VectorChangedEventArgs@Internal@Collections@Foundation@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@VectorChangedEventArgs@Internal@Collections@Foundation@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@VectorChangedEventArgs@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@VectorChangedEventArgs@Internal@Collections@Foundation@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VectorChangedEventArgs@Internal@Collections@Foundation@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VectorChangedEventArgs@Internal@Collections@Foundation@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CollectionChange@VectorChangedEventArgs@Internal@Collections@Foundation@Windows@@UEAAJPEAW4CollectionChange@345@@Z
    virtual long get_CollectionChange(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Index@VectorChangedEventArgs@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z
    virtual long get_Index(unsigned int *);
};
} // namespace Windows::Foundation::Collections::Internal
