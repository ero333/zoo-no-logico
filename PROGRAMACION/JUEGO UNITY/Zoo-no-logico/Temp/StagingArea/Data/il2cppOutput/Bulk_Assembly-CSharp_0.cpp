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


// AnimalCombination
struct AnimalCombination_t1548985709;
// ChangeScene
struct ChangeScene_t1879279510;
// Inventory
struct Inventory_t1050226016;
// Item
struct Item_t2953980098;
// Item[]
struct ItemU5BU5D_t583508471;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.List`1<Item>
struct List_1_t131087544;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UI_Inventory
struct UI_Inventory_t1695485313;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.Transform
struct Transform_t3600365921;

extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* Inventory_t1050226016_il2cpp_TypeInfo_var;
extern RuntimeClass* Item_t2953980098_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t131087544_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2461718551;
extern String_t* _stringLiteral2581096877;
extern String_t* _stringLiteral2920315059;
extern String_t* _stringLiteral45401622;
extern String_t* _stringLiteral608904331;
extern const RuntimeMethod* Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3775310734_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3872794208_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m214865278_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m620119229_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2480522249_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1712275079_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3397684528_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisTransform_t3600365921_m3225670752_RuntimeMethod_var;
extern const uint32_t AnimalCombination_Awake_m2668901350_MetadataUsageId;
extern const uint32_t ChangeScene_MoveToScene_m1759362718_MetadataUsageId;
extern const uint32_t ChangeScene_Start_m3097412992_MetadataUsageId;
extern const uint32_t Inventory_AddItem_m28232587_MetadataUsageId;
extern const uint32_t Inventory__ctor_m912618405_MetadataUsageId;
extern const uint32_t UI_Inventory_Awake_m2564090482_MetadataUsageId;
extern const uint32_t UI_Inventory_RefreshInventoryItems_m3972557750_MetadataUsageId;



#ifndef U3CMODULEU3E_T692745544_H
#define U3CMODULEU3E_T692745544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745544 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745544_H
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
#ifndef INVENTORY_T1050226016_H
#define INVENTORY_T1050226016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Inventory
struct  Inventory_t1050226016  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Item> Inventory::itemList
	List_1_t131087544 * ___itemList_0;

public:
	inline static int32_t get_offset_of_itemList_0() { return static_cast<int32_t>(offsetof(Inventory_t1050226016, ___itemList_0)); }
	inline List_1_t131087544 * get_itemList_0() const { return ___itemList_0; }
	inline List_1_t131087544 ** get_address_of_itemList_0() { return &___itemList_0; }
	inline void set_itemList_0(List_1_t131087544 * value)
	{
		___itemList_0 = value;
		Il2CppCodeGenWriteBarrier((&___itemList_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVENTORY_T1050226016_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T131087544_H
#define LIST_1_T131087544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Item>
struct  List_1_t131087544  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ItemU5BU5D_t583508471* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t131087544, ____items_1)); }
	inline ItemU5BU5D_t583508471* get__items_1() const { return ____items_1; }
	inline ItemU5BU5D_t583508471** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ItemU5BU5D_t583508471* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t131087544, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t131087544, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t131087544_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ItemU5BU5D_t583508471* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t131087544_StaticFields, ___EmptyArray_4)); }
	inline ItemU5BU5D_t583508471* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ItemU5BU5D_t583508471** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ItemU5BU5D_t583508471* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T131087544_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
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
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUMERATOR_T2020331421_H
#define ENUMERATOR_T2020331421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Item>
struct  Enumerator_t2020331421 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t131087544 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Item_t2953980098 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2020331421, ___l_0)); }
	inline List_1_t131087544 * get_l_0() const { return ___l_0; }
	inline List_1_t131087544 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t131087544 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2020331421, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2020331421, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2020331421, ___current_3)); }
	inline Item_t2953980098 * get_current_3() const { return ___current_3; }
	inline Item_t2953980098 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Item_t2953980098 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2020331421_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
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
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef ITEMTYPE_T4089864049_H
#define ITEMTYPE_T4089864049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Item/ItemType
struct  ItemType_t4089864049 
{
public:
	// System.Int32 Item/ItemType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ItemType_t4089864049, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITEMTYPE_T4089864049_H
#ifndef DRIVENTRANSFORMPROPERTIES_T3813433528_H
#define DRIVENTRANSFORMPROPERTIES_T3813433528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenTransformProperties
struct  DrivenTransformProperties_t3813433528 
{
public:
	// System.Int32 UnityEngine.DrivenTransformProperties::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DrivenTransformProperties_t3813433528, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENTRANSFORMPROPERTIES_T3813433528_H
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
#ifndef ITEM_T2953980098_H
#define ITEM_T2953980098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Item
struct  Item_t2953980098  : public RuntimeObject
{
public:
	// Item/ItemType Item::itemType
	int32_t ___itemType_0;
	// System.Int32 Item::amount
	int32_t ___amount_1;

public:
	inline static int32_t get_offset_of_itemType_0() { return static_cast<int32_t>(offsetof(Item_t2953980098, ___itemType_0)); }
	inline int32_t get_itemType_0() const { return ___itemType_0; }
	inline int32_t* get_address_of_itemType_0() { return &___itemType_0; }
	inline void set_itemType_0(int32_t value)
	{
		___itemType_0 = value;
	}

	inline static int32_t get_offset_of_amount_1() { return static_cast<int32_t>(offsetof(Item_t2953980098, ___amount_1)); }
	inline int32_t get_amount_1() const { return ___amount_1; }
	inline int32_t* get_address_of_amount_1() { return &___amount_1; }
	inline void set_amount_1(int32_t value)
	{
		___amount_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITEM_T2953980098_H
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
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
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
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:
	// System.Int32 UnityEngine.Transform::<hierarchyCount>k__BackingField
	int32_t ___U3ChierarchyCountU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3ChierarchyCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Transform_t3600365921, ___U3ChierarchyCountU3Ek__BackingField_4)); }
	inline int32_t get_U3ChierarchyCountU3Ek__BackingField_4() const { return ___U3ChierarchyCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3ChierarchyCountU3Ek__BackingField_4() { return &___U3ChierarchyCountU3Ek__BackingField_4; }
	inline void set_U3ChierarchyCountU3Ek__BackingField_4(int32_t value)
	{
		___U3ChierarchyCountU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
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
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:
	// UnityEngine.Object UnityEngine.RectTransform::<drivenByObject>k__BackingField
	Object_t631007953 * ___U3CdrivenByObjectU3Ek__BackingField_6;
	// UnityEngine.DrivenTransformProperties UnityEngine.RectTransform::<drivenProperties>k__BackingField
	int32_t ___U3CdrivenPropertiesU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CdrivenByObjectU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025, ___U3CdrivenByObjectU3Ek__BackingField_6)); }
	inline Object_t631007953 * get_U3CdrivenByObjectU3Ek__BackingField_6() const { return ___U3CdrivenByObjectU3Ek__BackingField_6; }
	inline Object_t631007953 ** get_address_of_U3CdrivenByObjectU3Ek__BackingField_6() { return &___U3CdrivenByObjectU3Ek__BackingField_6; }
	inline void set_U3CdrivenByObjectU3Ek__BackingField_6(Object_t631007953 * value)
	{
		___U3CdrivenByObjectU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CdrivenByObjectU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CdrivenPropertiesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025, ___U3CdrivenPropertiesU3Ek__BackingField_7)); }
	inline int32_t get_U3CdrivenPropertiesU3Ek__BackingField_7() const { return ___U3CdrivenPropertiesU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CdrivenPropertiesU3Ek__BackingField_7() { return &___U3CdrivenPropertiesU3Ek__BackingField_7; }
	inline void set_U3CdrivenPropertiesU3Ek__BackingField_7(int32_t value)
	{
		___U3CdrivenPropertiesU3Ek__BackingField_7 = value;
	}
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_5;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_5() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_5)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_5() const { return ___reapplyDrivenProperties_5; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_5() { return &___reapplyDrivenProperties_5; }
	inline void set_reapplyDrivenProperties_5(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_5 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef ANIMALCOMBINATION_T1548985709_H
#define ANIMALCOMBINATION_T1548985709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimalCombination
struct  AnimalCombination_t1548985709  : public MonoBehaviour_t3962482529
{
public:
	// UI_Inventory AnimalCombination::uiInventory
	UI_Inventory_t1695485313 * ___uiInventory_4;
	// Inventory AnimalCombination::inventory
	Inventory_t1050226016 * ___inventory_5;

public:
	inline static int32_t get_offset_of_uiInventory_4() { return static_cast<int32_t>(offsetof(AnimalCombination_t1548985709, ___uiInventory_4)); }
	inline UI_Inventory_t1695485313 * get_uiInventory_4() const { return ___uiInventory_4; }
	inline UI_Inventory_t1695485313 ** get_address_of_uiInventory_4() { return &___uiInventory_4; }
	inline void set_uiInventory_4(UI_Inventory_t1695485313 * value)
	{
		___uiInventory_4 = value;
		Il2CppCodeGenWriteBarrier((&___uiInventory_4), value);
	}

	inline static int32_t get_offset_of_inventory_5() { return static_cast<int32_t>(offsetof(AnimalCombination_t1548985709, ___inventory_5)); }
	inline Inventory_t1050226016 * get_inventory_5() const { return ___inventory_5; }
	inline Inventory_t1050226016 ** get_address_of_inventory_5() { return &___inventory_5; }
	inline void set_inventory_5(Inventory_t1050226016 * value)
	{
		___inventory_5 = value;
		Il2CppCodeGenWriteBarrier((&___inventory_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMALCOMBINATION_T1548985709_H
#ifndef CHANGESCENE_T1879279510_H
#define CHANGESCENE_T1879279510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChangeScene
struct  ChangeScene_t1879279510  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANGESCENE_T1879279510_H
#ifndef UI_INVENTORY_T1695485313_H
#define UI_INVENTORY_T1695485313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UI_Inventory
struct  UI_Inventory_t1695485313  : public MonoBehaviour_t3962482529
{
public:
	// Inventory UI_Inventory::inventory
	Inventory_t1050226016 * ___inventory_4;
	// UnityEngine.Transform UI_Inventory::itemSlotContainer
	Transform_t3600365921 * ___itemSlotContainer_5;
	// UnityEngine.Transform UI_Inventory::itemSlotTemplate
	Transform_t3600365921 * ___itemSlotTemplate_6;

public:
	inline static int32_t get_offset_of_inventory_4() { return static_cast<int32_t>(offsetof(UI_Inventory_t1695485313, ___inventory_4)); }
	inline Inventory_t1050226016 * get_inventory_4() const { return ___inventory_4; }
	inline Inventory_t1050226016 ** get_address_of_inventory_4() { return &___inventory_4; }
	inline void set_inventory_4(Inventory_t1050226016 * value)
	{
		___inventory_4 = value;
		Il2CppCodeGenWriteBarrier((&___inventory_4), value);
	}

	inline static int32_t get_offset_of_itemSlotContainer_5() { return static_cast<int32_t>(offsetof(UI_Inventory_t1695485313, ___itemSlotContainer_5)); }
	inline Transform_t3600365921 * get_itemSlotContainer_5() const { return ___itemSlotContainer_5; }
	inline Transform_t3600365921 ** get_address_of_itemSlotContainer_5() { return &___itemSlotContainer_5; }
	inline void set_itemSlotContainer_5(Transform_t3600365921 * value)
	{
		___itemSlotContainer_5 = value;
		Il2CppCodeGenWriteBarrier((&___itemSlotContainer_5), value);
	}

	inline static int32_t get_offset_of_itemSlotTemplate_6() { return static_cast<int32_t>(offsetof(UI_Inventory_t1695485313, ___itemSlotTemplate_6)); }
	inline Transform_t3600365921 * get_itemSlotTemplate_6() const { return ___itemSlotTemplate_6; }
	inline Transform_t3600365921 ** get_address_of_itemSlotTemplate_6() { return &___itemSlotTemplate_6; }
	inline void set_itemSlotTemplate_6(Transform_t3600365921 * value)
	{
		___itemSlotTemplate_6 = value;
		Il2CppCodeGenWriteBarrier((&___itemSlotTemplate_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UI_INVENTORY_T1695485313_H


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m1061214600_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Transform_t3600365921 * p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Void Inventory::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Inventory__ctor_m912618405 (Inventory_t1050226016 * __this, const RuntimeMethod* method);
// System.Void UI_Inventory::SetInventory(Inventory)
extern "C" IL2CPP_METHOD_ATTR void UI_Inventory_SetInventory_m3771866947 (UI_Inventory_t1695485313 * __this, Inventory_t1050226016 * ___inventory0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m3463216446 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Item>::.ctor()
inline void List_1__ctor_m1712275079 (List_1_t131087544 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t131087544 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void Item::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Item__ctor_m64206515 (Item_t2953980098 * __this, const RuntimeMethod* method);
// System.Void Inventory::AddItem(Item)
extern "C" IL2CPP_METHOD_ATTR void Inventory_AddItem_m28232587 (Inventory_t1050226016 * __this, Item_t2953980098 * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Item>::get_Count()
inline int32_t List_1_get_Count_m3397684528 (List_1_t131087544 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t131087544 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Item>::Add(!0)
inline void List_1_Add_m620119229 (List_1_t131087544 * __this, Item_t2953980098 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t131087544 *, Item_t2953980098 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_Find_m1729760951 (Transform_t3600365921 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UI_Inventory::RefreshInventoryItems()
extern "C" IL2CPP_METHOD_ATTR void UI_Inventory_RefreshInventoryItems_m3972557750 (UI_Inventory_t1695485313 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Item> Inventory::GetItemList()
extern "C" IL2CPP_METHOD_ATTR List_1_t131087544 * Inventory_GetItemList_m1427485951 (Inventory_t1050226016 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Item>::GetEnumerator()
inline Enumerator_t2020331421  List_1_GetEnumerator_m2480522249 (List_1_t131087544 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2020331421  (*) (List_1_t131087544 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Item>::get_Current()
inline Item_t2953980098 * Enumerator_get_Current_m214865278 (Enumerator_t2020331421 * __this, const RuntimeMethod* method)
{
	return ((  Item_t2953980098 * (*) (Enumerator_t2020331421 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Transform>(!!0,UnityEngine.Transform)
inline Transform_t3600365921 * Object_Instantiate_TisTransform_t3600365921_m3225670752 (RuntimeObject * __this /* static, unused */, Transform_t3600365921 * p0, Transform_t3600365921 * p1, const RuntimeMethod* method)
{
	return ((  Transform_t3600365921 * (*) (RuntimeObject * /* static, unused */, Transform_t3600365921 *, Transform_t3600365921 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1061214600_gshared)(__this /* static, unused */, p0, p1, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t3704657025 * Component_GetComponent_TisRectTransform_t3704657025_m3396022872 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t3704657025 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m4126691837 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Item>::MoveNext()
inline bool Enumerator_MoveNext_m3872794208 (Enumerator_t2020331421 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2020331421 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Item>::Dispose()
inline void Enumerator_Dispose_m3775310734 (Enumerator_t2020331421 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2020331421 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AnimalCombination::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AnimalCombination__ctor_m2660982502 (AnimalCombination_t1548985709 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AnimalCombination::Awake()
extern "C" IL2CPP_METHOD_ATTR void AnimalCombination_Awake_m2668901350 (AnimalCombination_t1548985709 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimalCombination_Awake_m2668901350_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Inventory_t1050226016 * L_0 = (Inventory_t1050226016 *)il2cpp_codegen_object_new(Inventory_t1050226016_il2cpp_TypeInfo_var);
		Inventory__ctor_m912618405(L_0, /*hidden argument*/NULL);
		__this->set_inventory_5(L_0);
		UI_Inventory_t1695485313 * L_1 = __this->get_uiInventory_4();
		Inventory_t1050226016 * L_2 = __this->get_inventory_5();
		UI_Inventory_SetInventory_m3771866947(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AnimalCombination::Start()
extern "C" IL2CPP_METHOD_ATTR void AnimalCombination_Start_m3301626214 (AnimalCombination_t1548985709 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void AnimalCombination::Update()
extern "C" IL2CPP_METHOD_ATTR void AnimalCombination_Update_m586103175 (AnimalCombination_t1548985709 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ChangeScene::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ChangeScene__ctor_m669148122 (ChangeScene_t1879279510 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChangeScene::Start()
extern "C" IL2CPP_METHOD_ATTR void ChangeScene_Start_m3097412992 (ChangeScene_t1879279510 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChangeScene_Start_m3097412992_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2461718551, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ChangeScene::MoveToScene(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ChangeScene_MoveToScene_m1759362718 (ChangeScene_t1879279510 * __this, int32_t ___sceneID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChangeScene_MoveToScene_m1759362718_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2581096877, /*hidden argument*/NULL);
		int32_t L_0 = ___sceneID0;
		SceneManager_LoadScene_m3463216446(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Inventory::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Inventory__ctor_m912618405 (Inventory_t1050226016 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Inventory__ctor_m912618405_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Item_t2953980098 * V_0 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		List_1_t131087544 * L_0 = (List_1_t131087544 *)il2cpp_codegen_object_new(List_1_t131087544_il2cpp_TypeInfo_var);
		List_1__ctor_m1712275079(L_0, /*hidden argument*/List_1__ctor_m1712275079_RuntimeMethod_var);
		__this->set_itemList_0(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral45401622, /*hidden argument*/NULL);
		Item_t2953980098 * L_1 = (Item_t2953980098 *)il2cpp_codegen_object_new(Item_t2953980098_il2cpp_TypeInfo_var);
		Item__ctor_m64206515(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		Item_t2953980098 * L_2 = V_0;
		L_2->set_itemType_0(0);
		Item_t2953980098 * L_3 = V_0;
		L_3->set_amount_1(1);
		Item_t2953980098 * L_4 = V_0;
		Inventory_AddItem_m28232587(__this, L_4, /*hidden argument*/NULL);
		Item_t2953980098 * L_5 = (Item_t2953980098 *)il2cpp_codegen_object_new(Item_t2953980098_il2cpp_TypeInfo_var);
		Item__ctor_m64206515(L_5, /*hidden argument*/NULL);
		V_0 = L_5;
		Item_t2953980098 * L_6 = V_0;
		L_6->set_itemType_0(2);
		Item_t2953980098 * L_7 = V_0;
		L_7->set_amount_1(1);
		Item_t2953980098 * L_8 = V_0;
		Inventory_AddItem_m28232587(__this, L_8, /*hidden argument*/NULL);
		Item_t2953980098 * L_9 = (Item_t2953980098 *)il2cpp_codegen_object_new(Item_t2953980098_il2cpp_TypeInfo_var);
		Item__ctor_m64206515(L_9, /*hidden argument*/NULL);
		V_0 = L_9;
		Item_t2953980098 * L_10 = V_0;
		L_10->set_itemType_0(1);
		Item_t2953980098 * L_11 = V_0;
		L_11->set_amount_1(1);
		Item_t2953980098 * L_12 = V_0;
		Inventory_AddItem_m28232587(__this, L_12, /*hidden argument*/NULL);
		List_1_t131087544 * L_13 = __this->get_itemList_0();
		int32_t L_14 = List_1_get_Count_m3397684528(L_13, /*hidden argument*/List_1_get_Count_m3397684528_RuntimeMethod_var);
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_15);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Inventory::AddItem(Item)
extern "C" IL2CPP_METHOD_ATTR void Inventory_AddItem_m28232587 (Inventory_t1050226016 * __this, Item_t2953980098 * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Inventory_AddItem_m28232587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t131087544 * L_0 = __this->get_itemList_0();
		Item_t2953980098 * L_1 = ___item0;
		List_1_Add_m620119229(L_0, L_1, /*hidden argument*/List_1_Add_m620119229_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.List`1<Item> Inventory::GetItemList()
extern "C" IL2CPP_METHOD_ATTR List_1_t131087544 * Inventory_GetItemList_m1427485951 (Inventory_t1050226016 * __this, const RuntimeMethod* method)
{
	{
		List_1_t131087544 * L_0 = __this->get_itemList_0();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Item::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Item__ctor_m64206515 (Item_t2953980098 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UI_Inventory::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UI_Inventory__ctor_m1523885969 (UI_Inventory_t1695485313 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UI_Inventory::Awake()
extern "C" IL2CPP_METHOD_ATTR void UI_Inventory_Awake_m2564090482 (UI_Inventory_t1695485313 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UI_Inventory_Awake_m2564090482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = Transform_Find_m1729760951(L_0, _stringLiteral608904331, /*hidden argument*/NULL);
		__this->set_itemSlotContainer_5(L_1);
		Transform_t3600365921 * L_2 = __this->get_itemSlotContainer_5();
		Transform_t3600365921 * L_3 = Transform_Find_m1729760951(L_2, _stringLiteral2920315059, /*hidden argument*/NULL);
		__this->set_itemSlotTemplate_6(L_3);
		return;
	}
}
// System.Void UI_Inventory::SetInventory(Inventory)
extern "C" IL2CPP_METHOD_ATTR void UI_Inventory_SetInventory_m3771866947 (UI_Inventory_t1695485313 * __this, Inventory_t1050226016 * ___inventory0, const RuntimeMethod* method)
{
	{
		Inventory_t1050226016 * L_0 = ___inventory0;
		__this->set_inventory_4(L_0);
		UI_Inventory_RefreshInventoryItems_m3972557750(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UI_Inventory::RefreshInventoryItems()
extern "C" IL2CPP_METHOD_ATTR void UI_Inventory_RefreshInventoryItems_m3972557750 (UI_Inventory_t1695485313 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UI_Inventory_RefreshInventoryItems_m3972557750_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	Item_t2953980098 * V_3 = NULL;
	Enumerator_t2020331421  V_4;
	memset(&V_4, 0, sizeof(V_4));
	RectTransform_t3704657025 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = (30.0f);
		Inventory_t1050226016 * L_0 = __this->get_inventory_4();
		List_1_t131087544 * L_1 = Inventory_GetItemList_m1427485951(L_0, /*hidden argument*/NULL);
		Enumerator_t2020331421  L_2 = List_1_GetEnumerator_m2480522249(L_1, /*hidden argument*/List_1_GetEnumerator_m2480522249_RuntimeMethod_var);
		V_4 = L_2;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0073;
		}

IL_0021:
		{
			Item_t2953980098 * L_3 = Enumerator_get_Current_m214865278((Enumerator_t2020331421 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m214865278_RuntimeMethod_var);
			V_3 = L_3;
			Transform_t3600365921 * L_4 = __this->get_itemSlotTemplate_6();
			Transform_t3600365921 * L_5 = __this->get_itemSlotContainer_5();
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			Transform_t3600365921 * L_6 = Object_Instantiate_TisTransform_t3600365921_m3225670752(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/Object_Instantiate_TisTransform_t3600365921_m3225670752_RuntimeMethod_var);
			RectTransform_t3704657025 * L_7 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(L_6, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
			V_5 = L_7;
			RectTransform_t3704657025 * L_8 = V_5;
			GameObject_t1113636619 * L_9 = Component_get_gameObject_m442555142(L_8, /*hidden argument*/NULL);
			GameObject_SetActive_m796801857(L_9, (bool)1, /*hidden argument*/NULL);
			RectTransform_t3704657025 * L_10 = V_5;
			int32_t L_11 = V_0;
			float L_12 = V_2;
			int32_t L_13 = V_1;
			float L_14 = V_2;
			Vector2_t2156229523  L_15;
			memset(&L_15, 0, sizeof(L_15));
			Vector2__ctor_m3970636864((&L_15), ((float)il2cpp_codegen_multiply((float)(((float)((float)L_11))), (float)L_12)), ((float)il2cpp_codegen_multiply((float)(((float)((float)L_13))), (float)L_14)), /*hidden argument*/NULL);
			RectTransform_set_anchoredPosition_m4126691837(L_10, L_15, /*hidden argument*/NULL);
			int32_t L_16 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
			int32_t L_17 = V_0;
			if ((((int32_t)L_17) <= ((int32_t)4)))
			{
				goto IL_0073;
			}
		}

IL_006d:
		{
			V_0 = 0;
			int32_t L_18 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		}

IL_0073:
		{
			bool L_19 = Enumerator_MoveNext_m3872794208((Enumerator_t2020331421 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m3872794208_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_0021;
			}
		}

IL_007f:
		{
			IL2CPP_LEAVE(0x92, FINALLY_0084);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0084;
	}

FINALLY_0084:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3775310734((Enumerator_t2020331421 *)(&V_4), /*hidden argument*/Enumerator_Dispose_m3775310734_RuntimeMethod_var);
		IL2CPP_END_FINALLY(132)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(132)
	{
		IL2CPP_JUMP_TBL(0x92, IL_0092)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0092:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
