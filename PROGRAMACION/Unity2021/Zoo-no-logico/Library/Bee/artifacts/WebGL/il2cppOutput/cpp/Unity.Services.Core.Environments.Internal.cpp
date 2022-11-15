#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// Unity.Services.Core.Environments.Internal.Environments
struct Environments_tC4B2F50A927F4B9798E0EA1415765D81DC7C0A00;
// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD7D5A4C49FDBA2AFB002462DF64609318A53BF85 
{
};
struct Il2CppArrayBounds;

// Unity.Services.Core.Environments.Internal.Environments
struct Environments_tC4B2F50A927F4B9798E0EA1415765D81DC7C0A00  : public RuntimeObject
{
	// System.String Unity.Services.Core.Environments.Internal.Environments::<Current>k__BackingField
	String_t* ___U3CCurrentU3Ek__BackingField_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
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
// System.String Unity.Services.Core.Environments.Internal.Environments::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environments_get_Current_m672842AC5C842317A6EE2D4EBE3AEDAE201D141C (Environments_tC4B2F50A927F4B9798E0EA1415765D81DC7C0A00* __this, const RuntimeMethod* method) 
{
	{
		// public string Current { get; internal set; }
		String_t* L_0 = __this->___U3CCurrentU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Environments.Internal.Environments::set_Current(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Environments_set_Current_mF2F9146800431DE9BBE5F95E94919DF01477BB84 (Environments_tC4B2F50A927F4B9798E0EA1415765D81DC7C0A00* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Current { get; internal set; }
		String_t* L_0 = ___value0;
		__this->___U3CCurrentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Core.Environments.Internal.Environments::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Environments__ctor_m907828E3A910416469C90CF39C6D863F6C0B5A6B (Environments_tC4B2F50A927F4B9798E0EA1415765D81DC7C0A00* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
