#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_tF42287527472FA89789873F068A87C60A00EC7D3;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,System.String>
struct Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83;
// System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>
struct IDictionary_2_tC2DD277FD757B5D1EBE17DDC9278C21DA48CE13D;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t60509816D8966320E2A9660FC756B6C440ADFC50;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>>
struct IEnumerable_1_tFC9242B5B3DCD0BF18FEC722FFF6CD3541950112;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>
struct IReadOnlyDictionary_2_t50D88EB60993FA9259A95B21D3156E7D87374052;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>
struct TaskFactory_1_t2AB428330E6C0DBAD27B0CBDE7EF31A2FDB89E9B;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>
struct Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// Unity.Services.Core.Configuration.ConfigurationEntry[]
struct ConfigurationEntryU5BU5D_t52C052ED69E59F867806855793A30109BBA9EEF3;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// Unity.Services.Core.Configuration.CloudProjectId
struct CloudProjectId_t14C34E1DB1EB955BA21ECB1126EACEC9818A68F0;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// Unity.Services.Core.Configuration.ConfigurationEntry
struct ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// Unity.Services.Core.Configuration.ExternalUserId
struct ExternalUserId_t9C3CCC17970C998BDD5330AE110097669EBA0018;
// Unity.Services.Core.ExternalUserIdProperty
struct ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// Unity.Services.Core.Configuration.IConfigurationLoader
struct IConfigurationLoader_tC5D49E531BA88F2FA7772F0EF305AF524FF0AEE4;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Unity.Services.Core.IUnityServices
struct IUnityServices_t49EC0D24FF18A25F42A1FF0B56962B5E7AD1E9A9;
// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// Unity.Services.Core.Configuration.ProjectConfiguration
struct ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader
struct StreamingAssetsConfigurationLoader_tDB162F80417A64081A3F8D509A29D6A01A25D712;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Services.Core.Configuration.ProjectConfiguration/<>c
struct U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigurationUtils_tF385B43626BC064FCBAA5093770ABE0C3D291DAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tC2DD277FD757B5D1EBE17DDC9278C21DA48CE13D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t1F32F711C91AEBCFA4770668CA067447D2A4F665_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t913F242211877D391217C9D75152235266FDAF10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_t50D88EB60993FA9259A95B21D3156E7D87374052_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamingAssetsConfigurationLoader_tDB162F80417A64081A3F8D509A29D6A01A25D712_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0BABD447B478833BDA1B9F70E833040EF5CFF2C9;
IL2CPP_EXTERN_C String_t* _stringLiteral4540301C7180D00AA270A854C8E7DBB9BDB00630;
IL2CPP_EXTERN_C String_t* _stringLiteral562CEAFE746CF9C5A3294C09EBB603054B01D9A3;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E_m7D4BBC1AB06B05804C3C1F6841F0D13BF7DB8F0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575_m5CA7EDCE372B57E75B99733153DC3252CB7188F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m89B5BA03DA316036913206FFEEA6A9D8E745C1EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mE9032DEA4D4F04D39F2BB96331FE5C51183CE474_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mDE15666015F1143D9287A7822A4159C983532CDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m3C74BB5A5D3D09F1922FDF6992392CEABFDEC2CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575_mCCFB331A256AA722B25B653C3CD6B4BDE6C09A75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m980F6BE8A7E9C23C317117386E0E05D982ED045D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToDictionary_TisKeyValuePair_2_t231FF4C6AF4640803EEA9BC51476864B326F6581_TisString_t_TisString_t_m1160F28AB6108884120CC63227CF251E7021F7A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisSerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE_m9F1E65A3E81A7445C9948FAF65329D362F09439F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC7B0EE5B72832A0511243341B971423E4C99862A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mF131719B7FA5DF061E7D2AB4BCD0C5B798DA1A60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToJsonU3Eb__7_0_m6073058870D1C084D6BE1FC371737D8304A7275D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToJsonU3Eb__7_1_m53380D730152E815B4DA34143791BCD270FD0EF4_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ConfigurationEntryU5BU5D_t52C052ED69E59F867806855793A30109BBA9EEF3;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t0267161C6C027BA3CDC8B3933902448EE205B45B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};
struct Il2CppArrayBounds;

// Unity.Services.Core.Configuration.CloudProjectId
struct CloudProjectId_t14C34E1DB1EB955BA21ECB1126EACEC9818A68F0  : public RuntimeObject
{
};

// Unity.Services.Core.Configuration.ConfigurationCollectionHelper
struct ConfigurationCollectionHelper_t117485823F5BCB9D4E56EDFEF1652CF5C9968BFC  : public RuntimeObject
{
};

// Unity.Services.Core.Configuration.ConfigurationEntry
struct ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E  : public RuntimeObject
{
	// System.String Unity.Services.Core.Configuration.ConfigurationEntry::m_Value
	String_t* ___m_Value_0;
	// System.Boolean Unity.Services.Core.Configuration.ConfigurationEntry::m_IsReadOnly
	bool ___m_IsReadOnly_1;
};

// Unity.Services.Core.Configuration.ConfigurationUtils
struct ConfigurationUtils_tF385B43626BC064FCBAA5093770ABE0C3D291DAC  : public RuntimeObject
{
};

struct ConfigurationUtils_tF385B43626BC064FCBAA5093770ABE0C3D291DAC_StaticFields
{
	// System.String Unity.Services.Core.Configuration.ConfigurationUtils::<RuntimeConfigFullPath>k__BackingField
	String_t* ___U3CRuntimeConfigFullPathU3Ek__BackingField_0;
	// Unity.Services.Core.Configuration.IConfigurationLoader Unity.Services.Core.Configuration.ConfigurationUtils::<ConfigurationLoader>k__BackingField
	RuntimeObject* ___U3CConfigurationLoaderU3Ek__BackingField_1;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Unity.Services.Core.Configuration.ExternalUserId
struct ExternalUserId_t9C3CCC17970C998BDD5330AE110097669EBA0018  : public RuntimeObject
{
};

// Unity.Services.Core.ExternalUserIdProperty
struct ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9  : public RuntimeObject
{
	// System.Action`1<System.String> Unity.Services.Core.ExternalUserIdProperty::UserIdChanged
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___UserIdChanged_0;
	// System.String Unity.Services.Core.ExternalUserIdProperty::m_UserId
	String_t* ___m_UserId_1;
};

// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Unity.Services.Core.InitializationOptions::<Values>k__BackingField
	RuntimeObject* ___U3CValuesU3Ek__BackingField_0;
};

// Unity.Services.Core.Configuration.ProjectConfiguration
struct ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4  : public RuntimeObject
{
	// System.String Unity.Services.Core.Configuration.ProjectConfiguration::m_JsonCache
	String_t* ___m_JsonCache_0;
	// System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry> Unity.Services.Core.Configuration.ProjectConfiguration::m_ConfigValues
	RuntimeObject* ___m_ConfigValues_1;
};

// Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader
struct StreamingAssetsConfigurationLoader_tDB162F80417A64081A3F8D509A29D6A01A25D712  : public RuntimeObject
{
};

// Unity.Services.Core.Configuration.StreamingAssetsUtils
struct StreamingAssetsUtils_tA32B07F0AAC9291ED90B0B55281F247B4A57911F  : public RuntimeObject
{
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// Unity.Services.Core.UnityServices
struct UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317  : public RuntimeObject
{
};

struct UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields
{
	// Unity.Services.Core.IUnityServices Unity.Services.Core.UnityServices::<Instance>k__BackingField
	RuntimeObject* ___U3CInstanceU3Ek__BackingField_0;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> Unity.Services.Core.UnityServices::<InstantiationCompletion>k__BackingField
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___U3CInstantiationCompletionU3Ek__BackingField_1;
	// Unity.Services.Core.ExternalUserIdProperty Unity.Services.Core.UnityServices::ExternalUserIdProperty
	ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* ___ExternalUserIdProperty_2;
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

// Unity.Services.Core.Configuration.ProjectConfiguration/<>c
struct U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F  : public RuntimeObject
{
};

struct U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_StaticFields
{
	// Unity.Services.Core.Configuration.ProjectConfiguration/<>c Unity.Services.Core.Configuration.ProjectConfiguration/<>c::<>9
	U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F* ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,System.String> Unity.Services.Core.Configuration.ProjectConfiguration/<>c::<>9__7_0
	Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83* ___U3CU3E9__7_0_1;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,System.String> Unity.Services.Core.Configuration.ProjectConfiguration/<>c::<>9__7_1
	Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83* ___U3CU3E9__7_1_2;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>
struct KeyValuePair_2_t231FF4C6AF4640803EEA9BC51476864B326F6581 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>
struct TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_22;
};

struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106* ___s_defaultFactory_23;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Unity.Services.Core.Configuration.SerializableProjectConfiguration
struct SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE 
{
	// System.String[] Unity.Services.Core.Configuration.SerializableProjectConfiguration::Keys
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___Keys_0;
	// Unity.Services.Core.Configuration.ConfigurationEntry[] Unity.Services.Core.Configuration.SerializableProjectConfiguration::Values
	ConfigurationEntryU5BU5D_t52C052ED69E59F867806855793A30109BBA9EEF3* ___Values_1;
};
// Native definition for P/Invoke marshalling of Unity.Services.Core.Configuration.SerializableProjectConfiguration
struct SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE_marshaled_pinvoke
{
	char** ___Keys_0;
	ConfigurationEntryU5BU5D_t52C052ED69E59F867806855793A30109BBA9EEF3* ___Values_1;
};
// Native definition for COM marshalling of Unity.Services.Core.Configuration.SerializableProjectConfiguration
struct SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE_marshaled_com
{
	Il2CppChar** ___Keys_0;
	ConfigurationEntryU5BU5D_t52C052ED69E59F867806855793A30109BBA9EEF3* ___Values_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>
struct AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B* ___s_defaultResultTask_0;
};

// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>
struct Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE ___m_result_22;
};

struct Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t2AB428330E6C0DBAD27B0CBDE7EF31A2FDB89E9B* ___s_defaultFactory_23;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__0
struct U3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575 
{
	// System.Int32 Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration> Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__0::<>t__builder
	AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C ___U3CU3Et__builder_1;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__0::<>u__1
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 ___U3CU3Eu__1_2;
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,System.String>
struct Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.Services.Core.Configuration.ConfigurationEntry[]
struct ConfigurationEntryU5BU5D_t52C052ED69E59F867806855793A30109BBA9EEF3  : public RuntimeArray
{
	ALIGN_FIELD (8) ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* m_Items[1];

	inline ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* Enumerable_ToDictionary_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_TisRuntimeObject_TisRuntimeObject_mFAD38355767A6BC98DB0AF76ADAB9AEDE1A401CB_gshared (RuntimeObject* ___source0, Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* ___keySelector1, Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* ___elementSelector2, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C AsyncTaskMethodBuilder_1_Create_m89B5BA03DA316036913206FFEEA6A9D8E745C1EE_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::Start<Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__0>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575_mCCFB331A256AA722B25B653C3CD6B4BDE6C09A75_gshared (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* __this, U3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B* AsyncTaskMethodBuilder_1_get_Task_m980F6BE8A7E9C23C317117386E0E05D982ED045D_gshared (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__0>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575_m2AE7E69CB253E8E31B293838C652D4F5928D1782_gshared (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<Unity.Services.Core.Configuration.SerializableProjectConfiguration>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE JsonConvert_DeserializeObject_TisSerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE_m9F1E65A3E81A7445C9948FAF65329D362F09439F_gshared (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mE9032DEA4D4F04D39F2BB96331FE5C51183CE474_gshared (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mDE15666015F1143D9287A7822A4159C983532CDF_gshared (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* __this, SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3C74BB5A5D3D09F1922FDF6992392CEABFDEC2CA_gshared (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;

// System.String UnityEngine.Application::get_cloudProjectId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_cloudProjectId_m84C5E847485178EEDA2E56E5EF72B0A740453EF9 (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Configuration.ConfigurationCollectionHelper::SetOrCreateEntry(System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,System.String,Unity.Services.Core.Configuration.ConfigurationEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationCollectionHelper_SetOrCreateEntry_m11BE77AC3DA32FB16FC23F008850923C7DC678CC (RuntimeObject* ___self0, String_t* ___key1, ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* ___entry2, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Unity.Services.Core.InitializationOptions::get_Values()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InitializationOptions_get_Values_m9D5E5B39B0E681240EC6C34E848D201B625A497B_inline (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Object,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m833ABF9C901B707B28FB10DEBFCC511A87E6C827 (RuntimeObject* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// Unity.Services.Core.Configuration.ConfigurationEntry Unity.Services.Core.Configuration.ConfigurationEntry::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* ConfigurationEntry_op_Implicit_m70B888797326BC9FC906390542AE0F24CC5F20B0 (String_t* ___value0, const RuntimeMethod* method) ;
// System.String Unity.Services.Core.Configuration.ConfigurationEntry::op_Implicit(Unity.Services.Core.Configuration.ConfigurationEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigurationEntry_op_Implicit_m0B1AB7411B225ECE931BDC3749159CE3F1699408 (ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* ___entry0, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.Configuration.ConfigurationEntry::TrySetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfigurationEntry_TrySetValue_m36B9719FC8D14A2DEABFB0912F93B8A68A635B0E (ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreLogger::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreLogger_LogWarning_m0ADFEA332A24159D7EBDE589D840C9F563736073 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.Configuration.ConfigurationEntry::get_IsReadOnly()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ConfigurationEntry_get_IsReadOnly_m4A02F8AB788F6FD65D2A2E84437ABFA1172DFCCF_inline (ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Core.Configuration.ConfigurationEntry::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ConfigurationEntry_get_Value_m944FBBF65EA57CD01D02AB3BDFCDB966C21F95D9_inline (ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Configuration.ConfigurationEntry::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationEntry__ctor_mCDEE0FDC493789EC96FE73A25242EB76EE73786C (ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* __this, String_t* ___value0, bool ___isReadOnly1, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5 (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingAssetsConfigurationLoader__ctor_m8165498CC916C07162A23DA6CE740D8C782B12AB (StreamingAssetsConfigurationLoader_tDB162F80417A64081A3F8D509A29D6A01A25D712* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Core.ExternalUserIdProperty::get_UserId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ExternalUserIdProperty_get_UserId_mF463E7814BFC0294128FEB39259BEB00692F3295_inline (ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.ExternalUserIdProperty::add_UserIdChanged(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalUserIdProperty_add_UserIdChanged_mE4C2F6301DC04C3244B15D69B253325A8EF52B77 (ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.ExternalUserIdProperty::remove_UserIdChanged(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalUserIdProperty_remove_UserIdChanged_m9A12F1EF44ABF2FE2DB38C00232C6929DD2D0CA6 (ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___value0, const RuntimeMethod* method) ;
// System.String Unity.Services.Core.Configuration.ProjectConfiguration::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProjectConfiguration_GetString_m214B5FAD0ADC6D5110B72CE4FBD13E44D9813F7D (ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4* __this, String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method) ;
// System.Boolean System.Boolean::TryParse(System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_TryParse_m417053B6E8D3724D0EED9E87C90D143622158352 (String_t* ___value0, bool* ___result1, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mFB8CC32F0016FBB6EFCB97953CF3515767EB6431 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, float* ___result3, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mDBF372E85C2D84B89B556F3E03CB9D03707C4BFD (Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary<System.Collections.Generic.KeyValuePair`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,System.String,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
inline Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* Enumerable_ToDictionary_TisKeyValuePair_2_t231FF4C6AF4640803EEA9BC51476864B326F6581_TisString_t_TisString_t_m1160F28AB6108884120CC63227CF251E7021F7A3 (RuntimeObject* ___source0, Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83* ___keySelector1, Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83* ___elementSelector2, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* (*) (RuntimeObject*, Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83*, Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83*, const RuntimeMethod*))Enumerable_ToDictionary_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_TisRuntimeObject_TisRuntimeObject_mFAD38355767A6BC98DB0AF76ADAB9AEDE1A401CB_gshared)(___source0, ___keySelector1, ___elementSelector2, method);
}
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_SerializeObject_m277670BD344964CB2A61751E5A3D62DB5B1321C7 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Configuration.ProjectConfiguration/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD0E2BD6F748611140704512CCAF1670044C15F83 (U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mC7B0EE5B72832A0511243341B971423E4C99862A_inline (KeyValuePair_2_t231FF4C6AF4640803EEA9BC51476864B326F6581* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t231FF4C6AF4640803EEA9BC51476864B326F6581*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>::get_Value()
inline ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* KeyValuePair_2_get_Value_mF131719B7FA5DF061E7D2AB4BCD0C5B798DA1A60_inline (KeyValuePair_2_t231FF4C6AF4640803EEA9BC51476864B326F6581* __this, const RuntimeMethod* method)
{
	return ((  ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* (*) (KeyValuePair_2_t231FF4C6AF4640803EEA9BC51476864B326F6581*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// T[] System.Array::Empty<System.String>()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline (const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// T[] System.Array::Empty<Unity.Services.Core.Configuration.ConfigurationEntry>()
inline ConfigurationEntryU5BU5D_t52C052ED69E59F867806855793A30109BBA9EEF3* Array_Empty_TisConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E_m7D4BBC1AB06B05804C3C1F6841F0D13BF7DB8F0D_inline (const RuntimeMethod* method)
{
	return ((  ConfigurationEntryU5BU5D_t52C052ED69E59F867806855793A30109BBA9EEF3* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::Create()
inline AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C AsyncTaskMethodBuilder_1_Create_m89B5BA03DA316036913206FFEEA6A9D8E745C1EE (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m89B5BA03DA316036913206FFEEA6A9D8E745C1EE_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::Start<Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__0>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575_mCCFB331A256AA722B25B653C3CD6B4BDE6C09A75 (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* __this, U3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C*, U3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575_mCCFB331A256AA722B25B653C3CD6B4BDE6C09A75_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::get_Task()
inline Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B* AsyncTaskMethodBuilder_1_get_Task_m980F6BE8A7E9C23C317117386E0E05D982ED045D (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B* (*) (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m980F6BE8A7E9C23C317117386E0E05D982ED045D_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<System.String> Unity.Services.Core.Configuration.StreamingAssetsUtils::GetFileTextFromStreamingAssetsAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* StreamingAssetsUtils_GetFileTextFromStreamingAssetsAsync_m9E49560DF4218CAED97B714AC3EF6691A2288C28 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.String>::GetAwaiter()
inline TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 (*) (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__0>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575_m5CA7EDCE372B57E75B99733153DC3252CB7188F0 (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* __this, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* ___awaiter0, U3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C*, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, U3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575_m2AE7E69CB253E8E31B293838C652D4F5928D1782_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::GetResult()
inline String_t* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// T Newtonsoft.Json.JsonConvert::DeserializeObject<Unity.Services.Core.Configuration.SerializableProjectConfiguration>(System.String)
inline SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE JsonConvert_DeserializeObject_TisSerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE_m9F1E65A3E81A7445C9948FAF65329D362F09439F (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisSerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE_m9F1E65A3E81A7445C9948FAF65329D362F09439F_gshared)(___value0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mE9032DEA4D4F04D39F2BB96331FE5C51183CE474 (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mE9032DEA4D4F04D39F2BB96331FE5C51183CE474_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mDE15666015F1143D9287A7822A4159C983532CDF (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* __this, SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C*, SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mDE15666015F1143D9287A7822A4159C983532CDF_gshared)(__this, ___result0, method);
}
// System.Void Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetConfigAsyncU3Ed__0_MoveNext_m538992053742D5C50095EB0052A81C03C779385C (U3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m3C74BB5A5D3D09F1922FDF6992392CEABFDEC2CA (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3C74BB5A5D3D09F1922FDF6992392CEABFDEC2CA_gshared)(__this, ___stateMachine0, method);
}
// System.Void Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetConfigAsyncU3Ed__0_SetStateMachine_m2657D5C581E8F6F7C197790CF2576C6BDF742DED (U3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.String> Unity.Services.Core.Internal.UnityWebRequestUtils::GetTextAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* UnityWebRequestUtils_GetTextAsync_m2503C3E630F795B5151BBD61295F45AE38AD7EC2 (String_t* ___uri0, const RuntimeMethod* method) ;
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
// System.String Unity.Services.Core.Configuration.CloudProjectId::GetCloudProjectId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CloudProjectId_GetCloudProjectId_m869FB68DB9939F1F1DAA6AFCE8935CDC6EE755D6 (CloudProjectId_t14C34E1DB1EB955BA21ECB1126EACEC9818A68F0* __this, const RuntimeMethod* method) 
{
	{
		// return Application.cloudProjectId;
		String_t* L_0;
		L_0 = Application_get_cloudProjectId_m84C5E847485178EEDA2E56E5EF72B0A740453EF9(NULL);
		return L_0;
	}
}
// System.Void Unity.Services.Core.Configuration.CloudProjectId::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudProjectId__ctor_m04C6207EF478495335469EA975A65E82B79BACF7 (CloudProjectId_t14C34E1DB1EB955BA21ECB1126EACEC9818A68F0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Unity.Services.Core.Configuration.ConfigurationCollectionHelper::FillWith(System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,Unity.Services.Core.Configuration.SerializableProjectConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationCollectionHelper_FillWith_mCDB35187B66375CFBB5C5F022BE831EE650A17CE (RuntimeObject* ___self0, SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE ___config1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* V_2 = NULL;
	{
		// for (var i = 0; i < config.Keys.Length; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_0004:
	{
		// var entryKey = config.Keys[i];
		SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE L_0 = ___config1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0.___Keys_0;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// var entryValue = config.Values[i];
		SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE L_5 = ___config1;
		ConfigurationEntryU5BU5D_t52C052ED69E59F867806855793A30109BBA9EEF3* L_6 = L_5.___Values_1;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// self.SetOrCreateEntry(entryKey, entryValue);
		RuntimeObject* L_10 = ___self0;
		String_t* L_11 = V_1;
		ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* L_12 = V_2;
		ConfigurationCollectionHelper_SetOrCreateEntry_m11BE77AC3DA32FB16FC23F008850923C7DC678CC(L_10, L_11, L_12, NULL);
		// for (var i = 0; i < config.Keys.Length; i++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0022:
	{
		// for (var i = 0; i < config.Keys.Length; i++)
		int32_t L_14 = V_0;
		SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE L_15 = ___config1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15.___Keys_0;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Configuration.ConfigurationCollectionHelper::FillWith(System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationCollectionHelper_FillWith_mF07E069209AC19C3DBDF9ABF39FA7F358FC6D1BD (RuntimeObject* ___self0, InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1F32F711C91AEBCFA4770668CA067447D2A4F665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t913F242211877D391217C9D75152235266FDAF10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	{
		// foreach (var option in options.Values)
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_0 = ___options1;
		RuntimeObject* L_1;
		L_1 = InitializationOptions_get_Values_m9D5E5B39B0E681240EC6C34E848D201B625A497B_inline(L_0, NULL);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator() */, IEnumerable_1_t1F32F711C91AEBCFA4770668CA067447D2A4F665_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003a_1;
			}

IL_000e_1:
			{
				// foreach (var option in options.Values)
				RuntimeObject* L_5 = V_0;
				KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_6;
				L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t913F242211877D391217C9D75152235266FDAF10_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				// var optionValue = Convert.ToString(option.Value, CultureInfo.InvariantCulture);
				RuntimeObject* L_7;
				L_7 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_1), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
				CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_8;
				L_8 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
				il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
				String_t* L_9;
				L_9 = Convert_ToString_m833ABF9C901B707B28FB10DEBFCC511A87E6C827(L_7, L_8, NULL);
				V_2 = L_9;
				// self.SetOrCreateEntry(option.Key, optionValue);
				RuntimeObject* L_10 = ___self0;
				String_t* L_11;
				L_11 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_1), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				String_t* L_12 = V_2;
				ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* L_13;
				L_13 = ConfigurationEntry_op_Implicit_m70B888797326BC9FC906390542AE0F24CC5F20B0(L_12, NULL);
				ConfigurationCollectionHelper_SetOrCreateEntry_m11BE77AC3DA32FB16FC23F008850923C7DC678CC(L_10, L_11, L_13, NULL);
			}

IL_003a_1:
			{
				// foreach (var option in options.Values)
				RuntimeObject* L_14 = V_0;
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_004e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Configuration.ConfigurationCollectionHelper::SetOrCreateEntry(System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>,System.String,Unity.Services.Core.Configuration.ConfigurationEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationCollectionHelper_SetOrCreateEntry_m11BE77AC3DA32FB16FC23F008850923C7DC678CC (RuntimeObject* ___self0, String_t* ___key1, ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* ___entry2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tC2DD277FD757B5D1EBE17DDC9278C21DA48CE13D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BABD447B478833BDA1B9F70E833040EF5CFF2C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral562CEAFE746CF9C5A3294C09EBB603054B01D9A3);
		s_Il2CppMethodInitialized = true;
	}
	ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* V_0 = NULL;
	{
		// if (self.TryGetValue(key, out var existingEntry))
		RuntimeObject* L_0 = ___self0;
		String_t* L_1 = ___key1;
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, String_t*, ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>::TryGetValue(TKey,TValue&) */, IDictionary_2_tC2DD277FD757B5D1EBE17DDC9278C21DA48CE13D_il2cpp_TypeInfo_var, L_0, L_1, (&V_0));
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// if (!existingEntry.TrySetValue(entry))
		ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* L_3 = V_0;
		ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* L_4 = ___entry2;
		String_t* L_5;
		L_5 = ConfigurationEntry_op_Implicit_m0B1AB7411B225ECE931BDC3749159CE3F1699408(L_4, NULL);
		bool L_6;
		L_6 = ConfigurationEntry_TrySetValue_m36B9719FC8D14A2DEABFB0912F93B8A68A635B0E(L_3, L_5, NULL);
		if (L_6)
		{
			goto IL_0037;
		}
	}
	{
		// CoreLogger.LogWarning(
		//     $"You are attempting to initialize Operate Solution SDK with an option \"{key}\"" +
		//     " which is readonly at runtime and can be modified only through Project Settings." +
		//     " The value provided as initialization option will be ignored." +
		//     $" Please update {nameof(InitializationOptions)} in order to remove this warning.");
		String_t* L_7 = ___key1;
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0BABD447B478833BDA1B9F70E833040EF5CFF2C9, L_7, _stringLiteral562CEAFE746CF9C5A3294C09EBB603054B01D9A3, NULL);
		CoreLogger_LogWarning_m0ADFEA332A24159D7EBDE589D840C9F563736073(L_8, NULL);
		return;
	}

IL_002f:
	{
		// self[key] = entry;
		RuntimeObject* L_9 = ___self0;
		String_t* L_10 = ___key1;
		ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* L_11 = ___entry2;
		InterfaceActionInvoker2< String_t*, ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>::set_Item(TKey,TValue) */, IDictionary_2_tC2DD277FD757B5D1EBE17DDC9278C21DA48CE13D_il2cpp_TypeInfo_var, L_9, L_10, L_11);
	}

IL_0037:
	{
		// }
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
// System.String Unity.Services.Core.Configuration.ConfigurationEntry::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigurationEntry_get_Value_m944FBBF65EA57CD01D02AB3BDFCDB966C21F95D9 (ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* __this, const RuntimeMethod* method) 
{
	{
		// public string Value => m_Value;
		String_t* L_0 = __this->___m_Value_0;
		return L_0;
	}
}
// System.Boolean Unity.Services.Core.Configuration.ConfigurationEntry::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfigurationEntry_get_IsReadOnly_m4A02F8AB788F6FD65D2A2E84437ABFA1172DFCCF (ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* __this, const RuntimeMethod* method) 
{
	{
		// get => m_IsReadOnly;
		bool L_0 = __this->___m_IsReadOnly_1;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Configuration.ConfigurationEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationEntry__ctor_m98FB4B9FD350C75E83223B483BF8DDCB82F82802 (ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* __this, const RuntimeMethod* method) 
{
	{
		// public ConfigurationEntry() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public ConfigurationEntry() {}
		return;
	}
}
// System.Void Unity.Services.Core.Configuration.ConfigurationEntry::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationEntry__ctor_mCDEE0FDC493789EC96FE73A25242EB76EE73786C (ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* __this, String_t* ___value0, bool ___isReadOnly1, const RuntimeMethod* method) 
{
	{
		// public ConfigurationEntry(string value, bool isReadOnly = false)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Value = value;
		String_t* L_0 = ___value0;
		__this->___m_Value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Value_0), (void*)L_0);
		// m_IsReadOnly = isReadOnly;
		bool L_1 = ___isReadOnly1;
		__this->___m_IsReadOnly_1 = L_1;
		// }
		return;
	}
}
// System.Boolean Unity.Services.Core.Configuration.ConfigurationEntry::TrySetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfigurationEntry_TrySetValue_m36B9719FC8D14A2DEABFB0912F93B8A68A635B0E (ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// if (IsReadOnly)
		bool L_0;
		L_0 = ConfigurationEntry_get_IsReadOnly_m4A02F8AB788F6FD65D2A2E84437ABFA1172DFCCF_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// m_Value = value;
		String_t* L_1 = ___value0;
		__this->___m_Value_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Value_0), (void*)L_1);
		// return true;
		return (bool)1;
	}
}
// System.String Unity.Services.Core.Configuration.ConfigurationEntry::op_Implicit(Unity.Services.Core.Configuration.ConfigurationEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigurationEntry_op_Implicit_m0B1AB7411B225ECE931BDC3749159CE3F1699408 (ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* ___entry0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator string(ConfigurationEntry entry) => entry.Value;
		ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* L_0 = ___entry0;
		String_t* L_1;
		L_1 = ConfigurationEntry_get_Value_m944FBBF65EA57CD01D02AB3BDFCDB966C21F95D9_inline(L_0, NULL);
		return L_1;
	}
}
// Unity.Services.Core.Configuration.ConfigurationEntry Unity.Services.Core.Configuration.ConfigurationEntry::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* ConfigurationEntry_op_Implicit_m70B888797326BC9FC906390542AE0F24CC5F20B0 (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static implicit operator ConfigurationEntry(string value) => new ConfigurationEntry(value);
		String_t* L_0 = ___value0;
		ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* L_1 = (ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E*)il2cpp_codegen_object_new(ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E_il2cpp_TypeInfo_var);
		ConfigurationEntry__ctor_mCDEE0FDC493789EC96FE73A25242EB76EE73786C(L_1, L_0, (bool)0, NULL);
		return L_1;
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
// Unity.Services.Core.Configuration.IConfigurationLoader Unity.Services.Core.Configuration.ConfigurationUtils::get_ConfigurationLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConfigurationUtils_get_ConfigurationLoader_mB619F0CDCB950AAFD0C6EBAFFCCBD1FB4C4E6688 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationUtils_tF385B43626BC064FCBAA5093770ABE0C3D291DAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IConfigurationLoader ConfigurationLoader { get; internal set; }
		il2cpp_codegen_runtime_class_init_inline(ConfigurationUtils_tF385B43626BC064FCBAA5093770ABE0C3D291DAC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ConfigurationUtils_tF385B43626BC064FCBAA5093770ABE0C3D291DAC_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationUtils_tF385B43626BC064FCBAA5093770ABE0C3D291DAC_il2cpp_TypeInfo_var))->___U3CConfigurationLoaderU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Configuration.ConfigurationUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationUtils__cctor_mA5BD13AE78F4A7ADA1DDCB08C371E406BB89D622 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationUtils_tF385B43626BC064FCBAA5093770ABE0C3D291DAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingAssetsConfigurationLoader_tDB162F80417A64081A3F8D509A29D6A01A25D712_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4540301C7180D00AA270A854C8E7DBB9BDB00630);
		s_Il2CppMethodInitialized = true;
	}
	{
		// = Path.Combine(Application.streamingAssetsPath, ConfigFileName);
		String_t* L_0;
		L_0 = Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_0, _stringLiteral4540301C7180D00AA270A854C8E7DBB9BDB00630, NULL);
		((ConfigurationUtils_tF385B43626BC064FCBAA5093770ABE0C3D291DAC_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationUtils_tF385B43626BC064FCBAA5093770ABE0C3D291DAC_il2cpp_TypeInfo_var))->___U3CRuntimeConfigFullPathU3Ek__BackingField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ConfigurationUtils_tF385B43626BC064FCBAA5093770ABE0C3D291DAC_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationUtils_tF385B43626BC064FCBAA5093770ABE0C3D291DAC_il2cpp_TypeInfo_var))->___U3CRuntimeConfigFullPathU3Ek__BackingField_0), (void*)L_1);
		// = new StreamingAssetsConfigurationLoader();
		StreamingAssetsConfigurationLoader_tDB162F80417A64081A3F8D509A29D6A01A25D712* L_2 = (StreamingAssetsConfigurationLoader_tDB162F80417A64081A3F8D509A29D6A01A25D712*)il2cpp_codegen_object_new(StreamingAssetsConfigurationLoader_tDB162F80417A64081A3F8D509A29D6A01A25D712_il2cpp_TypeInfo_var);
		StreamingAssetsConfigurationLoader__ctor_m8165498CC916C07162A23DA6CE740D8C782B12AB(L_2, NULL);
		((ConfigurationUtils_tF385B43626BC064FCBAA5093770ABE0C3D291DAC_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationUtils_tF385B43626BC064FCBAA5093770ABE0C3D291DAC_il2cpp_TypeInfo_var))->___U3CConfigurationLoaderU3Ek__BackingField_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ConfigurationUtils_tF385B43626BC064FCBAA5093770ABE0C3D291DAC_StaticFields*)il2cpp_codegen_static_fields_for(ConfigurationUtils_tF385B43626BC064FCBAA5093770ABE0C3D291DAC_il2cpp_TypeInfo_var))->___U3CConfigurationLoaderU3Ek__BackingField_1), (void*)L_2);
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
// System.String Unity.Services.Core.Configuration.ExternalUserId::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExternalUserId_get_UserId_m1268EF581536451C575FFE42AB7A5FA8C41854AE (ExternalUserId_t9C3CCC17970C998BDD5330AE110097669EBA0018* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string UserId => UnityServices.ExternalUserIdProperty.UserId;
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* L_0 = ((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___ExternalUserIdProperty_2;
		String_t* L_1;
		L_1 = ExternalUserIdProperty_get_UserId_mF463E7814BFC0294128FEB39259BEB00692F3295_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Unity.Services.Core.Configuration.ExternalUserId::add_UserIdChanged(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalUserId_add_UserIdChanged_mDC960AA45420844A9419398970EB546AD8D150D8 (ExternalUserId_t9C3CCC17970C998BDD5330AE110097669EBA0018* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// add => UnityServices.ExternalUserIdProperty.UserIdChanged += value;
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* L_0 = ((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___ExternalUserIdProperty_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = ___value0;
		ExternalUserIdProperty_add_UserIdChanged_mE4C2F6301DC04C3244B15D69B253325A8EF52B77(L_0, L_1, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Configuration.ExternalUserId::remove_UserIdChanged(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalUserId_remove_UserIdChanged_m18B647E61958C72EEEBE176878AE27E3DB373C29 (ExternalUserId_t9C3CCC17970C998BDD5330AE110097669EBA0018* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// remove => UnityServices.ExternalUserIdProperty.UserIdChanged -= value;
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* L_0 = ((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___ExternalUserIdProperty_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = ___value0;
		ExternalUserIdProperty_remove_UserIdChanged_m9A12F1EF44ABF2FE2DB38C00232C6929DD2D0CA6(L_0, L_1, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Configuration.ExternalUserId::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalUserId__ctor_m100FCF5DA7EFE0D30CE2A9663F0D73510421C555 (ExternalUserId_t9C3CCC17970C998BDD5330AE110097669EBA0018* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Unity.Services.Core.Configuration.ProjectConfiguration::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectConfiguration__ctor_m0A5FDD512808538C313AFD2B5D56D0FD864A9FE5 (ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4* __this, RuntimeObject* ___configValues0, const RuntimeMethod* method) 
{
	{
		// public ProjectConfiguration(IReadOnlyDictionary<string, ConfigurationEntry> configValues)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_ConfigValues = configValues;
		RuntimeObject* L_0 = ___configValues0;
		__this->___m_ConfigValues_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ConfigValues_1), (void*)L_0);
		// }
		return;
	}
}
// System.Boolean Unity.Services.Core.Configuration.ProjectConfiguration::GetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProjectConfiguration_GetBool_m51112BD46FB55C94F84AA22134C6ED61198EB84A (ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4* __this, String_t* ___key0, bool ___defaultValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// var stringConfig = GetString(key);
		String_t* L_0 = ___key0;
		String_t* L_1;
		L_1 = ProjectConfiguration_GetString_m214B5FAD0ADC6D5110B72CE4FBD13E44D9813F7D(__this, L_0, (String_t*)NULL, NULL);
		// if (bool.TryParse(stringConfig, out var parsedValue))
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Boolean_TryParse_m417053B6E8D3724D0EED9E87C90D143622158352(L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return parsedValue;
		bool L_3 = V_0;
		return L_3;
	}

IL_0013:
	{
		// return defaultValue;
		bool L_4 = ___defaultValue1;
		return L_4;
	}
}
// System.Int32 Unity.Services.Core.Configuration.ProjectConfiguration::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProjectConfiguration_GetInt_mBD29323C27EC1451D01755B0065FCCBE4FC34E88 (ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4* __this, String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var stringConfig = GetString(key);
		String_t* L_0 = ___key0;
		String_t* L_1;
		L_1 = ProjectConfiguration_GetString_m214B5FAD0ADC6D5110B72CE4FBD13E44D9813F7D(__this, L_0, (String_t*)NULL, NULL);
		// if (int.TryParse(stringConfig, out var parsedValue))
		bool L_2;
		L_2 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return parsedValue;
		int32_t L_3 = V_0;
		return L_3;
	}

IL_0013:
	{
		// return defaultValue;
		int32_t L_4 = ___defaultValue1;
		return L_4;
	}
}
// System.Single Unity.Services.Core.Configuration.ProjectConfiguration::GetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ProjectConfiguration_GetFloat_m763DBCCF811387657CAB52FF3E0114C04B52AFFF (ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4* __this, String_t* ___key0, float ___defaultValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// var stringConfig = GetString(key);
		String_t* L_0 = ___key0;
		String_t* L_1;
		L_1 = ProjectConfiguration_GetString_m214B5FAD0ADC6D5110B72CE4FBD13E44D9813F7D(__this, L_0, (String_t*)NULL, NULL);
		// if (float.TryParse(stringConfig, NumberStyles.Float, CultureInfo.InvariantCulture, out var parsedValue))
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		bool L_3;
		L_3 = Single_TryParse_mFB8CC32F0016FBB6EFCB97953CF3515767EB6431(L_1, ((int32_t)167), L_2, (&V_0), NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return parsedValue;
		float L_4 = V_0;
		return L_4;
	}

IL_001d:
	{
		// return defaultValue;
		float L_5 = ___defaultValue1;
		return L_5;
	}
}
// System.String Unity.Services.Core.Configuration.ProjectConfiguration::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProjectConfiguration_GetString_m214B5FAD0ADC6D5110B72CE4FBD13E44D9813F7D (ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4* __this, String_t* ___key0, String_t* ___defaultValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_t50D88EB60993FA9259A95B21D3156E7D87374052_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* V_0 = NULL;
	{
		// if (m_ConfigValues.TryGetValue(key, out var configValue))
		RuntimeObject* L_0 = __this->___m_ConfigValues_1;
		String_t* L_1 = ___key0;
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, String_t*, ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t50D88EB60993FA9259A95B21D3156E7D87374052_il2cpp_TypeInfo_var, L_0, L_1, (&V_0));
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// return configValue.Value;
		ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* L_3 = V_0;
		String_t* L_4;
		L_4 = ConfigurationEntry_get_Value_m944FBBF65EA57CD01D02AB3BDFCDB966C21F95D9_inline(L_3, NULL);
		return L_4;
	}

IL_0017:
	{
		// return defaultValue;
		String_t* L_5 = ___defaultValue1;
		return L_5;
	}
}
// System.String Unity.Services.Core.Configuration.ProjectConfiguration::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProjectConfiguration_ToJson_mC2BF8223376DA40872BDEDDD1CD7EE60E34DC918 (ProjectConfiguration_t653308465893F727E0FA58993E3D000D74630CC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToDictionary_TisKeyValuePair_2_t231FF4C6AF4640803EEA9BC51476864B326F6581_TisString_t_TisString_t_m1160F28AB6108884120CC63227CF251E7021F7A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToJsonU3Eb__7_0_m6073058870D1C084D6BE1FC371737D8304A7275D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToJsonU3Eb__7_1_m53380D730152E815B4DA34143791BCD270FD0EF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83* G_B5_0 = NULL;
	Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83* G_B5_1 = NULL;
	RuntimeObject* G_B5_2 = NULL;
	Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83* G_B4_0 = NULL;
	Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83* G_B4_1 = NULL;
	RuntimeObject* G_B4_2 = NULL;
	{
		// if (m_JsonCache == null)
		String_t* L_0 = __this->___m_JsonCache_0;
		if (L_0)
		{
			goto IL_005e;
		}
	}
	{
		// var dict = m_ConfigValues.ToDictionary(pair => pair.Key, pair => pair.Value.Value);
		RuntimeObject* L_1 = __this->___m_ConfigValues_1;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_il2cpp_TypeInfo_var);
		Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83* L_2 = ((U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1;
		Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83* L_3 = L_2;
		G_B2_0 = L_3;
		G_B2_1 = L_1;
		if (L_3)
		{
			G_B3_0 = L_3;
			G_B3_1 = L_1;
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_il2cpp_TypeInfo_var);
		U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F* L_4 = ((U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83* L_5 = (Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83*)il2cpp_codegen_object_new(Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83_il2cpp_TypeInfo_var);
		Func_2__ctor_mDBF372E85C2D84B89B556F3E03CB9D03707C4BFD(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CToJsonU3Eb__7_0_m6073058870D1C084D6BE1FC371737D8304A7275D_RuntimeMethod_var), NULL);
		Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83* L_6 = L_5;
		((U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1), (void*)L_6);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_1;
	}

IL_002d:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_il2cpp_TypeInfo_var);
		Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83* L_7 = ((U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_il2cpp_TypeInfo_var))->___U3CU3E9__7_1_2;
		Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83* L_8 = L_7;
		G_B4_0 = L_8;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
		if (L_8)
		{
			G_B5_0 = L_8;
			G_B5_1 = G_B3_0;
			G_B5_2 = G_B3_1;
			goto IL_004c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_il2cpp_TypeInfo_var);
		U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F* L_9 = ((U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83* L_10 = (Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83*)il2cpp_codegen_object_new(Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83_il2cpp_TypeInfo_var);
		Func_2__ctor_mDBF372E85C2D84B89B556F3E03CB9D03707C4BFD(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3CToJsonU3Eb__7_1_m53380D730152E815B4DA34143791BCD270FD0EF4_RuntimeMethod_var), NULL);
		Func_2_t11DD57C1EB9132463A717B2C6D6C5321F4728D83* L_11 = L_10;
		((U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_il2cpp_TypeInfo_var))->___U3CU3E9__7_1_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_il2cpp_TypeInfo_var))->___U3CU3E9__7_1_2), (void*)L_11);
		G_B5_0 = L_11;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
	}

IL_004c:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_12;
		L_12 = Enumerable_ToDictionary_TisKeyValuePair_2_t231FF4C6AF4640803EEA9BC51476864B326F6581_TisString_t_TisString_t_m1160F28AB6108884120CC63227CF251E7021F7A3(G_B5_2, G_B5_1, G_B5_0, Enumerable_ToDictionary_TisKeyValuePair_2_t231FF4C6AF4640803EEA9BC51476864B326F6581_TisString_t_TisString_t_m1160F28AB6108884120CC63227CF251E7021F7A3_RuntimeMethod_var);
		V_0 = L_12;
		// m_JsonCache = JsonConvert.SerializeObject(dict);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = JsonConvert_SerializeObject_m277670BD344964CB2A61751E5A3D62DB5B1321C7(L_13, NULL);
		__this->___m_JsonCache_0 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_JsonCache_0), (void*)L_14);
	}

IL_005e:
	{
		// return m_JsonCache;
		String_t* L_15 = __this->___m_JsonCache_0;
		return L_15;
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
// System.Void Unity.Services.Core.Configuration.ProjectConfiguration/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mEC4335E15D926AC84739C2302812FD7C41B89399 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F* L_0 = (U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F*)il2cpp_codegen_object_new(U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD0E2BD6F748611140704512CCAF1670044C15F83(L_0, NULL);
		((U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Core.Configuration.ProjectConfiguration/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD0E2BD6F748611140704512CCAF1670044C15F83 (U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Unity.Services.Core.Configuration.ProjectConfiguration/<>c::<ToJson>b__7_0(System.Collections.Generic.KeyValuePair`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToJsonU3Eb__7_0_m6073058870D1C084D6BE1FC371737D8304A7275D (U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F* __this, KeyValuePair_2_t231FF4C6AF4640803EEA9BC51476864B326F6581 ___pair0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC7B0EE5B72832A0511243341B971423E4C99862A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var dict = m_ConfigValues.ToDictionary(pair => pair.Key, pair => pair.Value.Value);
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_mC7B0EE5B72832A0511243341B971423E4C99862A_inline((&___pair0), KeyValuePair_2_get_Key_mC7B0EE5B72832A0511243341B971423E4C99862A_RuntimeMethod_var);
		return L_0;
	}
}
// System.String Unity.Services.Core.Configuration.ProjectConfiguration/<>c::<ToJson>b__7_1(System.Collections.Generic.KeyValuePair`2<System.String,Unity.Services.Core.Configuration.ConfigurationEntry>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToJsonU3Eb__7_1_m53380D730152E815B4DA34143791BCD270FD0EF4 (U3CU3Ec_t6520A1FBE29CA9972B831C3DDBF3153B6E7E858F* __this, KeyValuePair_2_t231FF4C6AF4640803EEA9BC51476864B326F6581 ___pair0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mF131719B7FA5DF061E7D2AB4BCD0C5B798DA1A60_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var dict = m_ConfigValues.ToDictionary(pair => pair.Key, pair => pair.Value.Value);
		ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* L_0;
		L_0 = KeyValuePair_2_get_Value_mF131719B7FA5DF061E7D2AB4BCD0C5B798DA1A60_inline((&___pair0), KeyValuePair_2_get_Value_mF131719B7FA5DF061E7D2AB4BCD0C5B798DA1A60_RuntimeMethod_var);
		String_t* L_1;
		L_1 = ConfigurationEntry_get_Value_m944FBBF65EA57CD01D02AB3BDFCDB966C21F95D9_inline(L_0, NULL);
		return L_1;
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
// Conversion methods for marshalling of: Unity.Services.Core.Configuration.SerializableProjectConfiguration
IL2CPP_EXTERN_C void SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE_marshal_pinvoke(const SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE& unmarshaled, SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Keys_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Keys' of type 'SerializableProjectConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Keys_0Exception, NULL);
}
IL2CPP_EXTERN_C void SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE_marshal_pinvoke_back(const SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE_marshaled_pinvoke& marshaled, SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE& unmarshaled)
{
	Exception_t* ___Keys_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Keys' of type 'SerializableProjectConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Keys_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Configuration.SerializableProjectConfiguration
IL2CPP_EXTERN_C void SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE_marshal_pinvoke_cleanup(SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Services.Core.Configuration.SerializableProjectConfiguration
IL2CPP_EXTERN_C void SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE_marshal_com(const SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE& unmarshaled, SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE_marshaled_com& marshaled)
{
	Exception_t* ___Keys_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Keys' of type 'SerializableProjectConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Keys_0Exception, NULL);
}
IL2CPP_EXTERN_C void SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE_marshal_com_back(const SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE_marshaled_com& marshaled, SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE& unmarshaled)
{
	Exception_t* ___Keys_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Keys' of type 'SerializableProjectConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Keys_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Configuration.SerializableProjectConfiguration
IL2CPP_EXTERN_C void SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE_marshal_com_cleanup(SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE_marshaled_com& marshaled)
{
}
// Unity.Services.Core.Configuration.SerializableProjectConfiguration Unity.Services.Core.Configuration.SerializableProjectConfiguration::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE SerializableProjectConfiguration_get_Empty_m12BD1FCCEBF166B16137D60C5EB6C5CF9E74FF04 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E_m7D4BBC1AB06B05804C3C1F6841F0D13BF7DB8F0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//     => new SerializableProjectConfiguration
		// {
		//     Keys = Array.Empty<string>(),
		//     Values = Array.Empty<ConfigurationEntry>(),
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline(Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		(&V_0)->___Keys_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Keys_0), (void*)L_0);
		ConfigurationEntryU5BU5D_t52C052ED69E59F867806855793A30109BBA9EEF3* L_1;
		L_1 = Array_Empty_TisConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E_m7D4BBC1AB06B05804C3C1F6841F0D13BF7DB8F0D_inline(Array_Empty_TisConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E_m7D4BBC1AB06B05804C3C1F6841F0D13BF7DB8F0D_RuntimeMethod_var);
		(&V_0)->___Values_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Values_1), (void*)L_1);
		SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE L_2 = V_0;
		return L_2;
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
// System.Threading.Tasks.Task`1<Unity.Services.Core.Configuration.SerializableProjectConfiguration> Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader::GetConfigAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B* StreamingAssetsConfigurationLoader_GetConfigAsync_m4670747CC5108D64D96AFC3A7A4C48F47C86B11F (StreamingAssetsConfigurationLoader_tDB162F80417A64081A3F8D509A29D6A01A25D712* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m89B5BA03DA316036913206FFEEA6A9D8E745C1EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575_mCCFB331A256AA722B25B653C3CD6B4BDE6C09A75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m980F6BE8A7E9C23C317117386E0E05D982ED045D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m89B5BA03DA316036913206FFEEA6A9D8E745C1EE(AsyncTaskMethodBuilder_1_Create_m89B5BA03DA316036913206FFEEA6A9D8E745C1EE_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575_mCCFB331A256AA722B25B653C3CD6B4BDE6C09A75(L_1, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575_mCCFB331A256AA722B25B653C3CD6B4BDE6C09A75_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t1975707D1E76FF508132D6A04F85270E8DAF8A9B* L_3;
		L_3 = AsyncTaskMethodBuilder_1_get_Task_m980F6BE8A7E9C23C317117386E0E05D982ED045D(L_2, AsyncTaskMethodBuilder_1_get_Task_m980F6BE8A7E9C23C317117386E0E05D982ED045D_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingAssetsConfigurationLoader__ctor_m8165498CC916C07162A23DA6CE740D8C782B12AB (StreamingAssetsConfigurationLoader_tDB162F80417A64081A3F8D509A29D6A01A25D712* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetConfigAsyncU3Ed__0_MoveNext_m538992053742D5C50095EB0052A81C03C779385C (U3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575_m5CA7EDCE372B57E75B99733153DC3252CB7188F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mDE15666015F1143D9287A7822A4159C983532CDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisSerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE_m9F1E65A3E81A7445C9948FAF65329D362F09439F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4540301C7180D00AA270A854C8E7DBB9BDB00630);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE V_1;
	memset((&V_1), 0, sizeof(V_1));
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0043_1;
			}
		}
		{
			// var jsonConfig = await StreamingAssetsUtils.GetFileTextFromStreamingAssetsAsync(
			//     ConfigurationUtils.ConfigFileName);
			Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_2;
			L_2 = StreamingAssetsUtils_GetFileTextFromStreamingAssetsAsync_m9E49560DF4218CAED97B714AC3EF6691A2288C28(_stringLiteral4540301C7180D00AA270A854C8E7DBB9BDB00630, NULL);
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_3;
			L_3 = Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F(L_2, Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
			V_2 = L_3;
			bool L_4;
			L_4 = TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8((&V_2), TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_005f_1;
			}
		}
		{
			int32_t L_5 = 0;
			V_0 = L_5;
			__this->___U3CU3E1__state_0 = L_5;
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_6 = V_2;
			__this->___U3CU3Eu__1_2 = L_6;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_2))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* L_7 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575_m5CA7EDCE372B57E75B99733153DC3252CB7188F0(L_7, (&V_2), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575_m5CA7EDCE372B57E75B99733153DC3252CB7188F0_RuntimeMethod_var);
			goto IL_0099;
		}

IL_0043_1:
		{
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_8 = __this->___U3CU3Eu__1_2;
			V_2 = L_8;
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* L_9 = (&__this->___U3CU3Eu__1_2);
			il2cpp_codegen_initobj(L_9, sizeof(TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6));
			int32_t L_10 = (-1);
			V_0 = L_10;
			__this->___U3CU3E1__state_0 = L_10;
		}

IL_005f_1:
		{
			String_t* L_11;
			L_11 = TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9((&V_2), TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
			// var config = JsonConvert.DeserializeObject<SerializableProjectConfiguration>(jsonConfig);
			il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
			SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE L_12;
			L_12 = JsonConvert_DeserializeObject_TisSerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE_m9F1E65A3E81A7445C9948FAF65329D362F09439F(L_11, JsonConvert_DeserializeObject_TisSerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE_m9F1E65A3E81A7445C9948FAF65329D362F09439F_RuntimeMethod_var);
			// return config;
			V_1 = L_12;
			goto IL_0085;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006e;
		}
		throw e;
	}

CATCH_006e:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* L_13 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_14 = V_3;
		AsyncTaskMethodBuilder_1_SetException_mE9032DEA4D4F04D39F2BB96331FE5C51183CE474(L_13, L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mE9032DEA4D4F04D39F2BB96331FE5C51183CE474_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0099;
	}// end catch (depth: 1)

IL_0085:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* L_15 = (&__this->___U3CU3Et__builder_1);
		SerializableProjectConfiguration_tBAE4D3A66EC38C1869E294396DB79F127B8F58EE L_16 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mDE15666015F1143D9287A7822A4159C983532CDF(L_15, L_16, AsyncTaskMethodBuilder_1_SetResult_mDE15666015F1143D9287A7822A4159C983532CDF_RuntimeMethod_var);
	}

IL_0099:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetConfigAsyncU3Ed__0_MoveNext_m538992053742D5C50095EB0052A81C03C779385C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575*>(__this + _offset);
	U3CGetConfigAsyncU3Ed__0_MoveNext_m538992053742D5C50095EB0052A81C03C779385C(_thisAdjusted, method);
}
// System.Void Unity.Services.Core.Configuration.StreamingAssetsConfigurationLoader/<GetConfigAsync>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetConfigAsyncU3Ed__0_SetStateMachine_m2657D5C581E8F6F7C197790CF2576C6BDF742DED (U3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m3C74BB5A5D3D09F1922FDF6992392CEABFDEC2CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t317FE70D757AFEA76E7E60CE379D5D15652D2F0C* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m3C74BB5A5D3D09F1922FDF6992392CEABFDEC2CA(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m3C74BB5A5D3D09F1922FDF6992392CEABFDEC2CA_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetConfigAsyncU3Ed__0_SetStateMachine_m2657D5C581E8F6F7C197790CF2576C6BDF742DED_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetConfigAsyncU3Ed__0_tB474C0421068C1EDF5D74A30795870493106C575*>(__this + _offset);
	U3CGetConfigAsyncU3Ed__0_SetStateMachine_m2657D5C581E8F6F7C197790CF2576C6BDF742DED(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Threading.Tasks.Task`1<System.String> Unity.Services.Core.Configuration.StreamingAssetsUtils::GetFileTextFromStreamingAssetsAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* StreamingAssetsUtils_GetFileTextFromStreamingAssetsAsync_m9E49560DF4218CAED97B714AC3EF6691A2288C28 (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var fullPath = Path.Combine(Application.streamingAssetsPath, path);
		String_t* L_0;
		L_0 = Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5(NULL);
		String_t* L_1 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_0, L_1, NULL);
		// return UnityWebRequestUtils.GetTextAsync(fullPath);
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_3;
		L_3 = UnityWebRequestUtils_GetTextAsync_m2503C3E630F795B5151BBD61295F45AE38AD7EC2(L_2, NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InitializationOptions_get_Values_m9D5E5B39B0E681240EC6C34E848D201B625A497B_inline (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, const RuntimeMethod* method) 
{
	{
		// internal IDictionary<string, object> Values { get; }
		RuntimeObject* L_0 = __this->___U3CValuesU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ConfigurationEntry_get_IsReadOnly_m4A02F8AB788F6FD65D2A2E84437ABFA1172DFCCF_inline (ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* __this, const RuntimeMethod* method) 
{
	{
		// get => m_IsReadOnly;
		bool L_0 = __this->___m_IsReadOnly_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ConfigurationEntry_get_Value_m944FBBF65EA57CD01D02AB3BDFCDB966C21F95D9_inline (ConfigurationEntry_t9DC70834AC631CC28DFF4C96C859E4106EF5E75E* __this, const RuntimeMethod* method) 
{
	{
		// public string Value => m_Value;
		String_t* L_0 = __this->___m_Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ExternalUserIdProperty_get_UserId_mF463E7814BFC0294128FEB39259BEB00692F3295_inline (ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* __this, const RuntimeMethod* method) 
{
	{
		// get => m_UserId;
		String_t* L_0 = __this->___m_UserId_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
