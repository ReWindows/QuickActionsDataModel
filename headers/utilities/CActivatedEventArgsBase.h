#pragma once
#include "../windissect_forwards.h"

// Reconstructed from QuickActionsDataModel.dll by Windissect. 20 member(s).
class CActivatedEventArgsBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CActivatedEventArgsBase@@QEAA@XZ
    CActivatedEventArgsBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CActivatedEventArgsBase@@UEAAJ_KPEAUHSTRING__@@W4ApplicationExecutionState@Activation@ApplicationModel@Windows@@EE0U_GUID@@@Z
    virtual long Initialize(uint64_t, HSTRING__*, int, unsigned char, unsigned char, uint64_t, _GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeViewDependent@CActivatedEventArgsBase@@UEAAJW4ApplicationExecutionState@Activation@ApplicationModel@Windows@@HPEAUISplashScreen@345@E@Z
    virtual long InitializeViewDependent(int, int, ::Windows::ApplicationModel::Activation::ISplashScreen *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalObjectToPropertySet@CActivatedEventArgsBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    long MarshalObjectToPropertySet(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivationManagerActivityId@CActivatedEventArgsBase@@UEAAJPEAU_GUID@@@Z
    virtual long get_ActivationManagerActivityId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivationManagerId@CActivatedEventArgsBase@@UEAAJPEA_K@Z
    virtual long get_ActivationManagerId(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivationValueSetReference@CActivatedEventArgsBase@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_ActivationValueSetReference(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsForegroundActivation@CActivatedEventArgsBase@@UEAAJPEAE@Z
    virtual long get_IsForegroundActivation(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsHolographic@CActivatedEventArgsBase@@UEAAJPEAE@Z
    virtual long get_IsHolographic(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@CActivatedEventArgsBase@@UEAAJPEAW4ActivationKind@Activation@ApplicationModel@Windows@@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreviousExecutionState@CActivatedEventArgsBase@@UEAAJPEAW4ApplicationExecutionState@Activation@ApplicationModel@Windows@@@Z
    virtual long get_PreviousExecutionState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SplashScreen@CActivatedEventArgsBase@@UEAAJPEAPEAUISplashScreen@Activation@ApplicationModel@Windows@@@Z
    virtual long get_SplashScreen(::Windows::ApplicationModel::Activation::ISplashScreen * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@CActivatedEventArgsBase@@UEAAJPEAPEAUIUser@System@Windows@@@Z
    virtual long get_User(::Windows::System::IUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UserContext@CActivatedEventArgsBase@@UEAAJPEA_K@Z
    virtual long get_UserContext(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ActivationValueSetReference@CActivatedEventArgsBase@@UEAAJPEAUIInspectable@@@Z
    virtual long put_ActivationValueSetReference(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_UserContext@CActivatedEventArgsBase@@UEAAJ_K@Z
    virtual long put_UserContext(uint64_t);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CActivatedEventArgsBase@@MEAA@XZ
    virtual ~CActivatedEventArgsBase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetActivationKind@CActivatedEventArgsBase@@EEAAJPEAUHSTRING__@@PEAW4ActivationKind@Activation@ApplicationModel@Windows@@@Z
    virtual long v_GetActivationKind(HSTRING__*, int *);
};
