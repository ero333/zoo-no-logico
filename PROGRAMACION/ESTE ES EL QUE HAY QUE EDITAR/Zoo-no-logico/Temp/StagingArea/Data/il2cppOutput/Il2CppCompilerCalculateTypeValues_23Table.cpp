#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// StasisManager/Cruza[]
struct CruzaU5BU5D_t1458076274;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.UI.Button
struct Button_t4055032469;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef CRUZALIST_T2699855931_H
#define CRUZALIST_T2699855931_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StasisManager/CruzaList
struct  CruzaList_t2699855931  : public RuntimeObject
{
public:
	// StasisManager/Cruza[] StasisManager/CruzaList::cruza
	CruzaU5BU5D_t1458076274* ___cruza_0;

public:
	inline static int32_t get_offset_of_cruza_0() { return static_cast<int32_t>(offsetof(CruzaList_t2699855931, ___cruza_0)); }
	inline CruzaU5BU5D_t1458076274* get_cruza_0() const { return ___cruza_0; }
	inline CruzaU5BU5D_t1458076274** get_address_of_cruza_0() { return &___cruza_0; }
	inline void set_cruza_0(CruzaU5BU5D_t1458076274* value)
	{
		___cruza_0 = value;
		Il2CppCodeGenWriteBarrier((&___cruza_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRUZALIST_T2699855931_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef TEST_T650638817_H
#define TEST_T650638817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Test
struct  Test_t650638817  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEST_T650638817_H
#ifndef TOGGLEPERDER2_T634227794_H
#define TOGGLEPERDER2_T634227794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TogglePerder2
struct  TogglePerder2_t634227794  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject TogglePerder2::PerdistePopu
	GameObject_t1113636619 * ___PerdistePopu_4;

public:
	inline static int32_t get_offset_of_PerdistePopu_4() { return static_cast<int32_t>(offsetof(TogglePerder2_t634227794, ___PerdistePopu_4)); }
	inline GameObject_t1113636619 * get_PerdistePopu_4() const { return ___PerdistePopu_4; }
	inline GameObject_t1113636619 ** get_address_of_PerdistePopu_4() { return &___PerdistePopu_4; }
	inline void set_PerdistePopu_4(GameObject_t1113636619 * value)
	{
		___PerdistePopu_4 = value;
		Il2CppCodeGenWriteBarrier((&___PerdistePopu_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLEPERDER2_T634227794_H
#ifndef TOGGLEPERDIDA_T4222204437_H
#define TOGGLEPERDIDA_T4222204437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TogglePerdida
struct  TogglePerdida_t4222204437  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject TogglePerdida::Perdiste
	GameObject_t1113636619 * ___Perdiste_4;

public:
	inline static int32_t get_offset_of_Perdiste_4() { return static_cast<int32_t>(offsetof(TogglePerdida_t4222204437, ___Perdiste_4)); }
	inline GameObject_t1113636619 * get_Perdiste_4() const { return ___Perdiste_4; }
	inline GameObject_t1113636619 ** get_address_of_Perdiste_4() { return &___Perdiste_4; }
	inline void set_Perdiste_4(GameObject_t1113636619 * value)
	{
		___Perdiste_4 = value;
		Il2CppCodeGenWriteBarrier((&___Perdiste_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLEPERDIDA_T4222204437_H
#ifndef UIZOOMIMAGE_T3969755560_H
#define UIZOOMIMAGE_T3969755560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIZoomImage
struct  UIZoomImage_t3969755560  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector3 UIZoomImage::initialScale
	Vector3_t3722313464  ___initialScale_4;
	// System.Single UIZoomImage::zoomSpeed
	float ___zoomSpeed_5;
	// System.Single UIZoomImage::maxZoom
	float ___maxZoom_6;

public:
	inline static int32_t get_offset_of_initialScale_4() { return static_cast<int32_t>(offsetof(UIZoomImage_t3969755560, ___initialScale_4)); }
	inline Vector3_t3722313464  get_initialScale_4() const { return ___initialScale_4; }
	inline Vector3_t3722313464 * get_address_of_initialScale_4() { return &___initialScale_4; }
	inline void set_initialScale_4(Vector3_t3722313464  value)
	{
		___initialScale_4 = value;
	}

	inline static int32_t get_offset_of_zoomSpeed_5() { return static_cast<int32_t>(offsetof(UIZoomImage_t3969755560, ___zoomSpeed_5)); }
	inline float get_zoomSpeed_5() const { return ___zoomSpeed_5; }
	inline float* get_address_of_zoomSpeed_5() { return &___zoomSpeed_5; }
	inline void set_zoomSpeed_5(float value)
	{
		___zoomSpeed_5 = value;
	}

	inline static int32_t get_offset_of_maxZoom_6() { return static_cast<int32_t>(offsetof(UIZoomImage_t3969755560, ___maxZoom_6)); }
	inline float get_maxZoom_6() const { return ___maxZoom_6; }
	inline float* get_address_of_maxZoom_6() { return &___maxZoom_6; }
	inline void set_maxZoom_6(float value)
	{
		___maxZoom_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIZOOMIMAGE_T3969755560_H
#ifndef UNLOCKSTOREANIMALS_T1320687291_H
#define UNLOCKSTOREANIMALS_T1320687291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnlockStoreAnimals
struct  UnlockStoreAnimals_t1320687291  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Button UnlockStoreAnimals::aveButton
	Button_t4055032469 * ___aveButton_4;
	// UnityEngine.UI.Button UnlockStoreAnimals::aranaButton
	Button_t4055032469 * ___aranaButton_5;
	// UnityEngine.UI.Button UnlockStoreAnimals::serpienteButton
	Button_t4055032469 * ___serpienteButton_6;
	// UnityEngine.GameObject UnlockStoreAnimals::aveImg
	GameObject_t1113636619 * ___aveImg_7;
	// UnityEngine.GameObject UnlockStoreAnimals::aranaImg
	GameObject_t1113636619 * ___aranaImg_8;
	// UnityEngine.GameObject UnlockStoreAnimals::serpienteImg
	GameObject_t1113636619 * ___serpienteImg_9;
	// UnityEngine.GameObject UnlockStoreAnimals::aveMiniImg
	GameObject_t1113636619 * ___aveMiniImg_10;
	// UnityEngine.GameObject UnlockStoreAnimals::aranaMiniImg
	GameObject_t1113636619 * ___aranaMiniImg_11;
	// UnityEngine.GameObject UnlockStoreAnimals::serpienteMiniImg
	GameObject_t1113636619 * ___serpienteMiniImg_12;

public:
	inline static int32_t get_offset_of_aveButton_4() { return static_cast<int32_t>(offsetof(UnlockStoreAnimals_t1320687291, ___aveButton_4)); }
	inline Button_t4055032469 * get_aveButton_4() const { return ___aveButton_4; }
	inline Button_t4055032469 ** get_address_of_aveButton_4() { return &___aveButton_4; }
	inline void set_aveButton_4(Button_t4055032469 * value)
	{
		___aveButton_4 = value;
		Il2CppCodeGenWriteBarrier((&___aveButton_4), value);
	}

	inline static int32_t get_offset_of_aranaButton_5() { return static_cast<int32_t>(offsetof(UnlockStoreAnimals_t1320687291, ___aranaButton_5)); }
	inline Button_t4055032469 * get_aranaButton_5() const { return ___aranaButton_5; }
	inline Button_t4055032469 ** get_address_of_aranaButton_5() { return &___aranaButton_5; }
	inline void set_aranaButton_5(Button_t4055032469 * value)
	{
		___aranaButton_5 = value;
		Il2CppCodeGenWriteBarrier((&___aranaButton_5), value);
	}

	inline static int32_t get_offset_of_serpienteButton_6() { return static_cast<int32_t>(offsetof(UnlockStoreAnimals_t1320687291, ___serpienteButton_6)); }
	inline Button_t4055032469 * get_serpienteButton_6() const { return ___serpienteButton_6; }
	inline Button_t4055032469 ** get_address_of_serpienteButton_6() { return &___serpienteButton_6; }
	inline void set_serpienteButton_6(Button_t4055032469 * value)
	{
		___serpienteButton_6 = value;
		Il2CppCodeGenWriteBarrier((&___serpienteButton_6), value);
	}

	inline static int32_t get_offset_of_aveImg_7() { return static_cast<int32_t>(offsetof(UnlockStoreAnimals_t1320687291, ___aveImg_7)); }
	inline GameObject_t1113636619 * get_aveImg_7() const { return ___aveImg_7; }
	inline GameObject_t1113636619 ** get_address_of_aveImg_7() { return &___aveImg_7; }
	inline void set_aveImg_7(GameObject_t1113636619 * value)
	{
		___aveImg_7 = value;
		Il2CppCodeGenWriteBarrier((&___aveImg_7), value);
	}

	inline static int32_t get_offset_of_aranaImg_8() { return static_cast<int32_t>(offsetof(UnlockStoreAnimals_t1320687291, ___aranaImg_8)); }
	inline GameObject_t1113636619 * get_aranaImg_8() const { return ___aranaImg_8; }
	inline GameObject_t1113636619 ** get_address_of_aranaImg_8() { return &___aranaImg_8; }
	inline void set_aranaImg_8(GameObject_t1113636619 * value)
	{
		___aranaImg_8 = value;
		Il2CppCodeGenWriteBarrier((&___aranaImg_8), value);
	}

	inline static int32_t get_offset_of_serpienteImg_9() { return static_cast<int32_t>(offsetof(UnlockStoreAnimals_t1320687291, ___serpienteImg_9)); }
	inline GameObject_t1113636619 * get_serpienteImg_9() const { return ___serpienteImg_9; }
	inline GameObject_t1113636619 ** get_address_of_serpienteImg_9() { return &___serpienteImg_9; }
	inline void set_serpienteImg_9(GameObject_t1113636619 * value)
	{
		___serpienteImg_9 = value;
		Il2CppCodeGenWriteBarrier((&___serpienteImg_9), value);
	}

	inline static int32_t get_offset_of_aveMiniImg_10() { return static_cast<int32_t>(offsetof(UnlockStoreAnimals_t1320687291, ___aveMiniImg_10)); }
	inline GameObject_t1113636619 * get_aveMiniImg_10() const { return ___aveMiniImg_10; }
	inline GameObject_t1113636619 ** get_address_of_aveMiniImg_10() { return &___aveMiniImg_10; }
	inline void set_aveMiniImg_10(GameObject_t1113636619 * value)
	{
		___aveMiniImg_10 = value;
		Il2CppCodeGenWriteBarrier((&___aveMiniImg_10), value);
	}

	inline static int32_t get_offset_of_aranaMiniImg_11() { return static_cast<int32_t>(offsetof(UnlockStoreAnimals_t1320687291, ___aranaMiniImg_11)); }
	inline GameObject_t1113636619 * get_aranaMiniImg_11() const { return ___aranaMiniImg_11; }
	inline GameObject_t1113636619 ** get_address_of_aranaMiniImg_11() { return &___aranaMiniImg_11; }
	inline void set_aranaMiniImg_11(GameObject_t1113636619 * value)
	{
		___aranaMiniImg_11 = value;
		Il2CppCodeGenWriteBarrier((&___aranaMiniImg_11), value);
	}

	inline static int32_t get_offset_of_serpienteMiniImg_12() { return static_cast<int32_t>(offsetof(UnlockStoreAnimals_t1320687291, ___serpienteMiniImg_12)); }
	inline GameObject_t1113636619 * get_serpienteMiniImg_12() const { return ___serpienteMiniImg_12; }
	inline GameObject_t1113636619 ** get_address_of_serpienteMiniImg_12() { return &___serpienteMiniImg_12; }
	inline void set_serpienteMiniImg_12(GameObject_t1113636619 * value)
	{
		___serpienteMiniImg_12 = value;
		Il2CppCodeGenWriteBarrier((&___serpienteMiniImg_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLOCKSTOREANIMALS_T1320687291_H
#ifndef SWIPE_INVENTORY_T4197138063_H
#define SWIPE_INVENTORY_T4197138063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// swipe_inventory
struct  swipe_inventory_t4197138063  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject swipe_inventory::scrollbar
	GameObject_t1113636619 * ___scrollbar_4;
	// System.Single swipe_inventory::scroll_pos
	float ___scroll_pos_5;
	// System.Single[] swipe_inventory::pos
	SingleU5BU5D_t1444911251* ___pos_6;

public:
	inline static int32_t get_offset_of_scrollbar_4() { return static_cast<int32_t>(offsetof(swipe_inventory_t4197138063, ___scrollbar_4)); }
	inline GameObject_t1113636619 * get_scrollbar_4() const { return ___scrollbar_4; }
	inline GameObject_t1113636619 ** get_address_of_scrollbar_4() { return &___scrollbar_4; }
	inline void set_scrollbar_4(GameObject_t1113636619 * value)
	{
		___scrollbar_4 = value;
		Il2CppCodeGenWriteBarrier((&___scrollbar_4), value);
	}

	inline static int32_t get_offset_of_scroll_pos_5() { return static_cast<int32_t>(offsetof(swipe_inventory_t4197138063, ___scroll_pos_5)); }
	inline float get_scroll_pos_5() const { return ___scroll_pos_5; }
	inline float* get_address_of_scroll_pos_5() { return &___scroll_pos_5; }
	inline void set_scroll_pos_5(float value)
	{
		___scroll_pos_5 = value;
	}

	inline static int32_t get_offset_of_pos_6() { return static_cast<int32_t>(offsetof(swipe_inventory_t4197138063, ___pos_6)); }
	inline SingleU5BU5D_t1444911251* get_pos_6() const { return ___pos_6; }
	inline SingleU5BU5D_t1444911251** get_address_of_pos_6() { return &___pos_6; }
	inline void set_pos_6(SingleU5BU5D_t1444911251* value)
	{
		___pos_6 = value;
		Il2CppCodeGenWriteBarrier((&___pos_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWIPE_INVENTORY_T4197138063_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2300 = { sizeof (CruzaList_t2699855931), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2300[1] = 
{
	CruzaList_t2699855931::get_offset_of_cruza_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2301 = { sizeof (swipe_inventory_t4197138063), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2301[3] = 
{
	swipe_inventory_t4197138063::get_offset_of_scrollbar_4(),
	swipe_inventory_t4197138063::get_offset_of_scroll_pos_5(),
	swipe_inventory_t4197138063::get_offset_of_pos_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2302 = { sizeof (Test_t650638817), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2303 = { sizeof (TogglePerder2_t634227794), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2303[1] = 
{
	TogglePerder2_t634227794::get_offset_of_PerdistePopu_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2304 = { sizeof (TogglePerdida_t4222204437), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2304[1] = 
{
	TogglePerdida_t4222204437::get_offset_of_Perdiste_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2305 = { sizeof (UIZoomImage_t3969755560), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2305[3] = 
{
	UIZoomImage_t3969755560::get_offset_of_initialScale_4(),
	UIZoomImage_t3969755560::get_offset_of_zoomSpeed_5(),
	UIZoomImage_t3969755560::get_offset_of_maxZoom_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2306 = { sizeof (UnlockStoreAnimals_t1320687291), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2306[9] = 
{
	UnlockStoreAnimals_t1320687291::get_offset_of_aveButton_4(),
	UnlockStoreAnimals_t1320687291::get_offset_of_aranaButton_5(),
	UnlockStoreAnimals_t1320687291::get_offset_of_serpienteButton_6(),
	UnlockStoreAnimals_t1320687291::get_offset_of_aveImg_7(),
	UnlockStoreAnimals_t1320687291::get_offset_of_aranaImg_8(),
	UnlockStoreAnimals_t1320687291::get_offset_of_serpienteImg_9(),
	UnlockStoreAnimals_t1320687291::get_offset_of_aveMiniImg_10(),
	UnlockStoreAnimals_t1320687291::get_offset_of_aranaMiniImg_11(),
	UnlockStoreAnimals_t1320687291::get_offset_of_serpienteMiniImg_12(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
