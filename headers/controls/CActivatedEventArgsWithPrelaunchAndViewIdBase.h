#pragma once
#include "../windissect_forwards.h"

// Reconstructed from QuickActionsDataModel.dll by Windissect. 5 member(s).
class CActivatedEventArgsWithPrelaunchAndViewIdBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalObjectToPropertySet@CActivatedEventArgsWithPrelaunchAndViewIdBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    long MarshalObjectToPropertySet(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrelaunchActivated@CActivatedEventArgsWithPrelaunchAndViewIdBase@@UEAAJPEAE@Z
    virtual long get_PrelaunchActivated(unsigned char *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CActivatedEventArgsWithPrelaunchAndViewIdBase@@MEAA@XZ
    virtual ~CActivatedEventArgsWithPrelaunchAndViewIdBase();
};
