#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// Unity.Services.Core.ExternalUserIdProperty
struct ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// Unity.Services.Core.IUnityServices
struct IUnityServices_t49EC0D24FF18A25F42A1FF0B56962B5E7AD1E9A9;
// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// System.Threading.Lock
struct Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Runtime.CompilerServices.PreserveDependencyAttribute
struct PreserveDependencyAttribute_t72A2C1DD2EBD97F1CD1CE1B418B9300B66C80789;
// Unity.Services.Core.RequestFailedException
struct RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Unity.Services.Core.ServicesInitializationException
struct ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// Unity.Services.Core.UnityProjectNotLinkedException
struct UnityProjectNotLinkedException_t59C31CD6D4353D68B7205AAC8E35391D88B0ABF8;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityServices_t49EC0D24FF18A25F42A1FF0B56962B5E7AD1E9A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02DC5487F216AE25A9C6B6F775A8CF9EE1920C91;
IL2CPP_EXTERN_C String_t* _stringLiteral2E8D89FA256D52FDC3705DD1E01B226056587734;
IL2CPP_EXTERN_C String_t* _stringLiteral99F5E171221B0CB9D6DE6F675428CD7AA265CFD0;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_m5CFA197F7E5FA9D58D7182FD5117CD2042E8866D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_m1EA53742EDE25C95CA2E0134115E212D41315465_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_mBBB8519D1AD7C68A746F7F7639F71AAEBB2ABC56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mDA2BD7D4F4563746BD486C91295E8A3952A20AF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InitializationOptions_TryGetOption_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0C968CB439049288F026A9B8C3FEB7939D45314E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InitializationOptions_TryGetOption_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m87C03FA9BF54E6D84E29ED6B8D814E98BA9E1417_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InitializationOptions_TryGetOption_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5D8040801B159E425DA3C318DA0C8A6424E9DAA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InitializationOptions_TryGetOption_TisString_t_mFA1B8F68BCEFCD31DE1BD5293DF5A286311CBA4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeAsyncU3Ed__15_MoveNext_m84D0CC8DED8AFCA17443A63B13FD7104ECEEABB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityServices_get_State_mF530C62B86FBF1BF3B379006DACF9C110FD7BC9D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4052AFC804778757171A467E5C89680322791B94 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ____task_0;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Unity.Services.Core.CommonErrorCodes
struct CommonErrorCodes_t9AC42A2F061C6322E48134A4A3A4DD8CA2F8E73C  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
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

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_2;
};

struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields
{
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___s_defaultTaskScheduler_0;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_1;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A* ____unobservedTaskException_3;
	// System.Threading.Lock System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7* ____unobservedTaskExceptionLockObject_4;
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

// Unity.Services.Core.UnityThreadUtils
struct UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA  : public RuntimeObject
{
};

struct UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_StaticFields
{
	// System.Int32 Unity.Services.Core.UnityThreadUtils::s_UnityThreadId
	int32_t ___s_UnityThreadId_0;
	// System.Threading.Tasks.TaskScheduler Unity.Services.Core.UnityThreadUtils::<UnityThreadScheduler>k__BackingField
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___U3CUnityThreadSchedulerU3Ek__BackingField_1;
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

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B* ___s_defaultFactory_23;
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

// System.Runtime.CompilerServices.PreserveDependencyAttribute
struct PreserveDependencyAttribute_t72A2C1DD2EBD97F1CD1CE1B418B9300B66C80789  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.Runtime.CompilerServices.PreserveDependencyAttribute::<Condition>k__BackingField
	String_t* ___U3CConditionU3Ek__BackingField_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_defaultResultTask_0;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
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

// Unity.Services.Core.RequestFailedException
struct RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00  : public Exception_t
{
	// System.Int32 Unity.Services.Core.RequestFailedException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_18;
};

// Unity.Services.Core.ServicesInitializationException
struct ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631  : public Exception_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// Unity.Services.Core.UnityProjectNotLinkedException
struct UnityProjectNotLinkedException_t59C31CD6D4353D68B7205AAC8E35391D88B0ABF8  : public ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631
{
};

// Unity.Services.Core.UnityServices/<InitializeAsync>d__15
struct U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB 
{
	// System.Int32 Unity.Services.Core.UnityServices/<InitializeAsync>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Services.Core.UnityServices/<InitializeAsync>d__15::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Unity.Services.Core.InitializationOptions Unity.Services.Core.UnityServices/<InitializeAsync>d__15::options
	InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___options_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object> Unity.Services.Core.UnityServices/<InitializeAsync>d__15::<>u__1
	TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA ___U3CU3Eu__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter Unity.Services.Core.UnityServices/<InitializeAsync>d__15::<>u__2
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__2_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m623BF34EB93B2B3A3B7D46743B508E2E2958939E_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.InitializationOptions::TryGetOption<System.Boolean>(System.String,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InitializationOptions_TryGetOption_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0C968CB439049288F026A9B8C3FEB7939D45314E_gshared (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___key0, bool* ___option1, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.InitializationOptions::TryGetOption<System.Int32>(System.String,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InitializationOptions_TryGetOption_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m87C03FA9BF54E6D84E29ED6B8D814E98BA9E1417_gshared (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___key0, int32_t* ___option1, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.InitializationOptions::TryGetOption<System.Single>(System.String,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InitializationOptions_TryGetOption_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5D8040801B159E425DA3C318DA0C8A6424E9DAA2_gshared (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___key0, float* ___option1, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.InitializationOptions::TryGetOption<System.Object>(System.String,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InitializationOptions_TryGetOption_TisRuntimeObject_m8472B96337AA7DC6DF5E835D5B014B4D1CEF7FA6_gshared (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___key0, RuntimeObject** ___option1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Core.UnityServices/<InitializeAsync>d__15>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_mBBB8519D1AD7C68A746F7F7639F71AAEBB2ABC56_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Core.UnityServices/<InitializeAsync>d__15>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_m5CFA197F7E5FA9D58D7182FD5117CD2042E8866D_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Services.Core.UnityServices/<InitializeAsync>d__15>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_m1EA53742EDE25C95CA2E0134115E212D41315465_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB* ___stateMachine1, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Unity.Services.Core.InitializationOptions::.ctor(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationOptions__ctor_mC00A133821529371B703109EC8884F73D3A43504 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, RuntimeObject* ___values0, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Unity.Services.Core.InitializationOptions::get_Values()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InitializationOptions_get_Values_m9D5E5B39B0E681240EC6C34E848D201B625A497B_inline (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void Dictionary_2__ctor_mDA2BD7D4F4563746BD486C91295E8A3952A20AF5 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m623BF34EB93B2B3A3B7D46743B508E2E2958939E_gshared)(__this, ___dictionary0, method);
}
// System.Boolean Unity.Services.Core.InitializationOptions::TryGetOption<System.Boolean>(System.String,T&)
inline bool InitializationOptions_TryGetOption_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0C968CB439049288F026A9B8C3FEB7939D45314E (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___key0, bool* ___option1, const RuntimeMethod* method)
{
	return ((  bool (*) (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A*, String_t*, bool*, const RuntimeMethod*))InitializationOptions_TryGetOption_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0C968CB439049288F026A9B8C3FEB7939D45314E_gshared)(__this, ___key0, ___option1, method);
}
// System.Boolean Unity.Services.Core.InitializationOptions::TryGetOption<System.Int32>(System.String,T&)
inline bool InitializationOptions_TryGetOption_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m87C03FA9BF54E6D84E29ED6B8D814E98BA9E1417 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___key0, int32_t* ___option1, const RuntimeMethod* method)
{
	return ((  bool (*) (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A*, String_t*, int32_t*, const RuntimeMethod*))InitializationOptions_TryGetOption_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m87C03FA9BF54E6D84E29ED6B8D814E98BA9E1417_gshared)(__this, ___key0, ___option1, method);
}
// System.Boolean Unity.Services.Core.InitializationOptions::TryGetOption<System.Single>(System.String,T&)
inline bool InitializationOptions_TryGetOption_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5D8040801B159E425DA3C318DA0C8A6424E9DAA2 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___key0, float* ___option1, const RuntimeMethod* method)
{
	return ((  bool (*) (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A*, String_t*, float*, const RuntimeMethod*))InitializationOptions_TryGetOption_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5D8040801B159E425DA3C318DA0C8A6424E9DAA2_gshared)(__this, ___key0, ___option1, method);
}
// System.Boolean Unity.Services.Core.InitializationOptions::TryGetOption<System.String>(System.String,T&)
inline bool InitializationOptions_TryGetOption_TisString_t_mFA1B8F68BCEFCD31DE1BD5293DF5A286311CBA4E (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___key0, String_t** ___option1, const RuntimeMethod* method)
{
	return ((  bool (*) (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A*, String_t*, String_t**, const RuntimeMethod*))InitializationOptions_TryGetOption_TisRuntimeObject_m8472B96337AA7DC6DF5E835D5B014B4D1CEF7FA6_gshared)(__this, ___key0, ___option1, method);
}
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.ServicesInitializationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicesInitializationException__ctor_m92C4F3ACACE7EC3753B8BFEE082221D752CA751C (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.ServicesInitializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicesInitializationException__ctor_m638AF9055D8C8C6BA7AC554FF3066C26EA869F55 (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.RequestFailedException::.ctor(System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestFailedException__ctor_m5F2BC9B778764EF58CA947E789CAEEAD27341C7A (RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* __this, int32_t ___errorCode0, String_t* ___message1, Exception_t* ___innerException2, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.UnityThreadUtils::get_IsRunningOnUnityThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityThreadUtils_get_IsRunningOnUnityThread_m5FD8E9090E2A2EE035677BC109B12A234B91A1B4 (const RuntimeMethod* method) ;
// Unity.Services.Core.IUnityServices Unity.Services.Core.UnityServices::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnityServices_get_Instance_m5BA0D657E90B0A0837290E98A0CB13F9D39CA0CD_inline (const RuntimeMethod* method) ;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object> Unity.Services.Core.UnityServices::get_InstantiationCompletion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* UnityServices_get_InstantiationCompletion_mA867A00609D9BFFD19B8404887CA781DB60F0AE7_inline (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
inline Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* (*) (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline)(__this, method);
}
// System.Threading.Tasks.TaskStatus System.Threading.Tasks.Task::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Task_get_Status_m9707FD4B44416BA03FA2FDBEB3D0F0F281D90AD8 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Core.ExternalUserIdProperty::get_UserId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ExternalUserIdProperty_get_UserId_mF463E7814BFC0294128FEB39259BEB00692F3295_inline (ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.ExternalUserIdProperty::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalUserIdProperty_set_UserId_m49AF583912638B80D441E07E46D5743BC8FA50E7 (ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.InitializationOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationOptions__ctor_m2D43EFD29B0A3E387D43FA9395F7D960D667E8F0 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Unity.Services.Core.UnityServices::InitializeAsync(Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UnityServices_InitializeAsync_m06F67CD34C2A60139443202D98F16E7130CB6A1F (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___options0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Core.UnityServices/<InitializeAsync>d__15>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_mBBB8519D1AD7C68A746F7F7639F71AAEBB2ABC56 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_mBBB8519D1AD7C68A746F7F7639F71AAEBB2ABC56_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.ExternalUserIdProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalUserIdProperty__ctor_m2FEBC14C2B8A45DEE3B1250F0B577EB3B8F629F7 (ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
inline void TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60 (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared)(__this, method);
}
// System.Void Unity.Services.Core.UnityServices::set_InstantiationCompletion(System.Threading.Tasks.TaskCompletionSource`1<System.Object>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityServices_set_InstantiationCompletion_mA4D8862E87057DD28B48E93BDA0545E5CDCE8DEC_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___value0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
inline TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3 (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA (*) (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54 (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Core.UnityServices/<InitializeAsync>d__15>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_m5CFA197F7E5FA9D58D7182FD5117CD2042E8866D (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA*, U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_m5CFA197F7E5FA9D58D7182FD5117CD2042E8866D_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
inline RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Services.Core.UnityServices/<InitializeAsync>d__15>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_m1EA53742EDE25C95CA2E0134115E212D41315465 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_m1EA53742EDE25C95CA2E0134115E212D41315465_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.UnityServices/<InitializeAsync>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAsyncU3Ed__15_MoveNext_m84D0CC8DED8AFCA17443A63B13FD7104ECEEABB8 (U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.UnityServices/<InitializeAsync>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAsyncU3Ed__15_SetStateMachine_m64D4E0EC42AF9A1FF73B65B44D22A07A1B450990 (U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD (const RuntimeMethod* method) ;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::FromCurrentSynchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_FromCurrentSynchronizationContext_m0520B4EAEC13A789C28A47B5215826D435973EE7 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.UnityThreadUtils::set_UnityThreadScheduler(System.Threading.Tasks.TaskScheduler)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityThreadUtils_set_UnityThreadScheduler_m5AE27DBA9F88FE1CDCB8FBF241A3C1B5628F9BB6_inline (TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___value0, const RuntimeMethod* method) ;
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
// System.Void System.Runtime.CompilerServices.PreserveDependencyAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveDependencyAttribute__ctor_m3D09DF018713F6AFEC76CD25A7EF25AA73601FDE (PreserveDependencyAttribute_t72A2C1DD2EBD97F1CD1CE1B418B9300B66C80789* __this, String_t* ___memberSignature0, const RuntimeMethod* method) 
{
	{
		// public PreserveDependencyAttribute(string memberSignature)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// }
		return;
	}
}
// System.Void System.Runtime.CompilerServices.PreserveDependencyAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveDependencyAttribute__ctor_m42B4417CCD79D74D0BE88B3A366BA5D2BAC10E5C (PreserveDependencyAttribute_t72A2C1DD2EBD97F1CD1CE1B418B9300B66C80789* __this, String_t* ___memberSignature0, String_t* ___typeName1, const RuntimeMethod* method) 
{
	{
		// public PreserveDependencyAttribute(string memberSignature, string typeName)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// }
		return;
	}
}
// System.Void System.Runtime.CompilerServices.PreserveDependencyAttribute::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveDependencyAttribute__ctor_mB521F00D6CDEE0243E4ED00EA74F194E6118D8C3 (PreserveDependencyAttribute_t72A2C1DD2EBD97F1CD1CE1B418B9300B66C80789* __this, String_t* ___memberSignature0, String_t* ___typeName1, String_t* ___assembly2, const RuntimeMethod* method) 
{
	{
		// public PreserveDependencyAttribute(string memberSignature, string typeName, string assembly)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// }
		return;
	}
}
// System.String System.Runtime.CompilerServices.PreserveDependencyAttribute::get_Condition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PreserveDependencyAttribute_get_Condition_m373DA883FF7B32C77C5A9C8E60940B6E3682E424 (PreserveDependencyAttribute_t72A2C1DD2EBD97F1CD1CE1B418B9300B66C80789* __this, const RuntimeMethod* method) 
{
	{
		// public string Condition { get; set; }
		String_t* L_0 = __this->___U3CConditionU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void System.Runtime.CompilerServices.PreserveDependencyAttribute::set_Condition(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveDependencyAttribute_set_Condition_m4F7C09C7BB107F0D025F869DE179C0C207E62854 (PreserveDependencyAttribute_t72A2C1DD2EBD97F1CD1CE1B418B9300B66C80789* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Condition { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CConditionU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConditionU3Ek__BackingField_0), (void*)L_0);
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
// System.Void Unity.Services.Core.ExternalUserIdProperty::add_UserIdChanged(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalUserIdProperty_add_UserIdChanged_mE4C2F6301DC04C3244B15D69B253325A8EF52B77 (ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___UserIdChanged_0;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A** L_5 = (&__this->___UserIdChanged_0);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Services.Core.ExternalUserIdProperty::remove_UserIdChanged(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalUserIdProperty_remove_UserIdChanged_m9A12F1EF44ABF2FE2DB38C00232C6929DD2D0CA6 (ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___UserIdChanged_0;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A** L_5 = (&__this->___UserIdChanged_0);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.String Unity.Services.Core.ExternalUserIdProperty::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExternalUserIdProperty_get_UserId_mF463E7814BFC0294128FEB39259BEB00692F3295 (ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* __this, const RuntimeMethod* method) 
{
	{
		// get => m_UserId;
		String_t* L_0 = __this->___m_UserId_1;
		return L_0;
	}
}
// System.Void Unity.Services.Core.ExternalUserIdProperty::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalUserIdProperty_set_UserId_m49AF583912638B80D441E07E46D5743BC8FA50E7 (ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B1_0 = NULL;
	{
		// m_UserId = value;
		String_t* L_0 = ___value0;
		__this->___m_UserId_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UserId_1), (void*)L_0);
		// UserIdChanged?.Invoke(m_UserId);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = __this->___UserIdChanged_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		String_t* L_3 = __this->___m_UserId_1;
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B2_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.ExternalUserIdProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalUserIdProperty__ctor_m2FEBC14C2B8A45DEE3B1250F0B577EB3B8F629F7 (ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* __this, const RuntimeMethod* method) 
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
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Unity.Services.Core.InitializationOptions::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InitializationOptions_get_Values_m9D5E5B39B0E681240EC6C34E848D201B625A497B (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, const RuntimeMethod* method) 
{
	{
		// internal IDictionary<string, object> Values { get; }
		RuntimeObject* L_0 = __this->___U3CValuesU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Core.InitializationOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationOptions__ctor_m2D43EFD29B0A3E387D43FA9395F7D960D667E8F0 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(new Dictionary<string, object>()) {}
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		InitializationOptions__ctor_mC00A133821529371B703109EC8884F73D3A43504(__this, L_0, NULL);
		// : this(new Dictionary<string, object>()) {}
		return;
	}
}
// System.Void Unity.Services.Core.InitializationOptions::.ctor(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationOptions__ctor_mC00A133821529371B703109EC8884F73D3A43504 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, RuntimeObject* ___values0, const RuntimeMethod* method) 
{
	{
		// internal InitializationOptions(IDictionary<string, object> values)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Values = values;
		RuntimeObject* L_0 = ___values0;
		__this->___U3CValuesU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValuesU3Ek__BackingField_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.InitializationOptions::.ctor(Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationOptions__ctor_mACA25E99BB9C236F1D65A7BBC84AC194E201FB80 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___source0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mDA2BD7D4F4563746BD486C91295E8A3952A20AF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(new Dictionary<string, object>(source.Values)) {}
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_0 = ___source0;
		RuntimeObject* L_1;
		L_1 = InitializationOptions_get_Values_m9D5E5B39B0E681240EC6C34E848D201B625A497B_inline(L_0, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mDA2BD7D4F4563746BD486C91295E8A3952A20AF5(L_2, L_1, Dictionary_2__ctor_mDA2BD7D4F4563746BD486C91295E8A3952A20AF5_RuntimeMethod_var);
		InitializationOptions__ctor_mC00A133821529371B703109EC8884F73D3A43504(__this, L_2, NULL);
		// : this(new Dictionary<string, object>(source.Values)) {}
		return;
	}
}
// System.Boolean Unity.Services.Core.InitializationOptions::TryGetOption(System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InitializationOptions_TryGetOption_m7EAF52F67FF2B11AB605558A26E843C28036EB5A (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___key0, bool* ___option1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_TryGetOption_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0C968CB439049288F026A9B8C3FEB7939D45314E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return TryGetOption<bool>(key, out option);
		String_t* L_0 = ___key0;
		bool* L_1 = ___option1;
		bool L_2;
		L_2 = InitializationOptions_TryGetOption_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0C968CB439049288F026A9B8C3FEB7939D45314E(__this, L_0, L_1, InitializationOptions_TryGetOption_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0C968CB439049288F026A9B8C3FEB7939D45314E_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Unity.Services.Core.InitializationOptions::TryGetOption(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InitializationOptions_TryGetOption_mCB9A0D6A99D5B358266EBB638140D5DFB185A8D3 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___key0, int32_t* ___option1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_TryGetOption_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m87C03FA9BF54E6D84E29ED6B8D814E98BA9E1417_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return TryGetOption<int>(key, out option);
		String_t* L_0 = ___key0;
		int32_t* L_1 = ___option1;
		bool L_2;
		L_2 = InitializationOptions_TryGetOption_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m87C03FA9BF54E6D84E29ED6B8D814E98BA9E1417(__this, L_0, L_1, InitializationOptions_TryGetOption_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m87C03FA9BF54E6D84E29ED6B8D814E98BA9E1417_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Unity.Services.Core.InitializationOptions::TryGetOption(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InitializationOptions_TryGetOption_mE7F73306A73CDEE1FF9E301EE3265FB1750E769B (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___key0, float* ___option1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_TryGetOption_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5D8040801B159E425DA3C318DA0C8A6424E9DAA2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return TryGetOption<float>(key, out option);
		String_t* L_0 = ___key0;
		float* L_1 = ___option1;
		bool L_2;
		L_2 = InitializationOptions_TryGetOption_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5D8040801B159E425DA3C318DA0C8A6424E9DAA2(__this, L_0, L_1, InitializationOptions_TryGetOption_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5D8040801B159E425DA3C318DA0C8A6424E9DAA2_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Unity.Services.Core.InitializationOptions::TryGetOption(System.String,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InitializationOptions_TryGetOption_m4F7FE773817D0BBAF686CC299893BB2D4F80275B (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___key0, String_t** ___option1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_TryGetOption_TisString_t_mFA1B8F68BCEFCD31DE1BD5293DF5A286311CBA4E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return TryGetOption<string>(key, out option);
		String_t* L_0 = ___key0;
		String_t** L_1 = ___option1;
		bool L_2;
		L_2 = InitializationOptions_TryGetOption_TisString_t_mFA1B8F68BCEFCD31DE1BD5293DF5A286311CBA4E(__this, L_0, L_1, InitializationOptions_TryGetOption_TisString_t_mFA1B8F68BCEFCD31DE1BD5293DF5A286311CBA4E_RuntimeMethod_var);
		return L_2;
	}
}
// Unity.Services.Core.InitializationOptions Unity.Services.Core.InitializationOptions::SetOption(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* InitializationOptions_SetOption_mC6DE295515F91B4CE53D8A636A6C2D0153B192CF (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___key0, bool ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Values[key] = value;
		RuntimeObject* L_0;
		L_0 = InitializationOptions_get_Values_m9D5E5B39B0E681240EC6C34E848D201B625A497B_inline(__this, NULL);
		String_t* L_1 = ___key0;
		bool L_2 = ___value1;
		bool L_3 = L_2;
		RuntimeObject* L_4 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_3);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// return this;
		return __this;
	}
}
// Unity.Services.Core.InitializationOptions Unity.Services.Core.InitializationOptions::SetOption(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* InitializationOptions_SetOption_m8B3AE4FF35B39B8F83A8D5D24572FD4CBE692D73 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Values[key] = value;
		RuntimeObject* L_0;
		L_0 = InitializationOptions_get_Values_m9D5E5B39B0E681240EC6C34E848D201B625A497B_inline(__this, NULL);
		String_t* L_1 = ___key0;
		int32_t L_2 = ___value1;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// return this;
		return __this;
	}
}
// Unity.Services.Core.InitializationOptions Unity.Services.Core.InitializationOptions::SetOption(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* InitializationOptions_SetOption_mF758DF5CD207080BDD1ED574CA8779F74BA9B683 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___key0, float ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Values[key] = value;
		RuntimeObject* L_0;
		L_0 = InitializationOptions_get_Values_m9D5E5B39B0E681240EC6C34E848D201B625A497B_inline(__this, NULL);
		String_t* L_1 = ___key0;
		float L_2 = ___value1;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_3);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		// return this;
		return __this;
	}
}
// Unity.Services.Core.InitializationOptions Unity.Services.Core.InitializationOptions::SetOption(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* InitializationOptions_SetOption_mAD845F1EA85DA4F46EA10313BE9632127D0D5BC1 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Values[key] = value;
		RuntimeObject* L_0;
		L_0 = InitializationOptions_get_Values_m9D5E5B39B0E681240EC6C34E848D201B625A497B_inline(__this, NULL);
		String_t* L_1 = ___key0;
		String_t* L_2 = ___value1;
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// return this;
		return __this;
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
// System.Void Unity.Services.Core.ServicesInitializationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicesInitializationException__ctor_m92C4F3ACACE7EC3753B8BFEE082221D752CA751C (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ServicesInitializationException() {}
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// public ServicesInitializationException() {}
		return;
	}
}
// System.Void Unity.Services.Core.ServicesInitializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicesInitializationException__ctor_m638AF9055D8C8C6BA7AC554FF3066C26EA869F55 (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(message) {}
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// : base(message) {}
		return;
	}
}
// System.Void Unity.Services.Core.ServicesInitializationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicesInitializationException__ctor_mF669B3E2EBFCAF30637035325CD9B965BC11B578 (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(message, innerException) {}
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___innerException1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		// : base(message, innerException) {}
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
// System.Void Unity.Services.Core.UnityProjectNotLinkedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityProjectNotLinkedException__ctor_m841882F7BFEBE5DD101DB4E541A9A3FA4100FEED (UnityProjectNotLinkedException_t59C31CD6D4353D68B7205AAC8E35391D88B0ABF8* __this, const RuntimeMethod* method) 
{
	{
		// public UnityProjectNotLinkedException() {}
		ServicesInitializationException__ctor_m92C4F3ACACE7EC3753B8BFEE082221D752CA751C(__this, NULL);
		// public UnityProjectNotLinkedException() {}
		return;
	}
}
// System.Void Unity.Services.Core.UnityProjectNotLinkedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityProjectNotLinkedException__ctor_mAD5451CE9BDD12E0F183D8E7BA09A469A6C197A1 (UnityProjectNotLinkedException_t59C31CD6D4353D68B7205AAC8E35391D88B0ABF8* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		// : base(message) {}
		String_t* L_0 = ___message0;
		ServicesInitializationException__ctor_m638AF9055D8C8C6BA7AC554FF3066C26EA869F55(__this, L_0, NULL);
		// : base(message) {}
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
// System.Int32 Unity.Services.Core.RequestFailedException::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RequestFailedException_get_ErrorCode_mF3E649123FAA0AD7EEE1FFCBFACE6C2A20CBEDAE (RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* __this, const RuntimeMethod* method) 
{
	{
		// public int ErrorCode { get; }
		int32_t L_0 = __this->___U3CErrorCodeU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void Unity.Services.Core.RequestFailedException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestFailedException__ctor_mE50ABBA68C3EC48A3D31EE97594E2909FF7501F7 (RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* __this, int32_t ___errorCode0, String_t* ___message1, const RuntimeMethod* method) 
{
	{
		// public RequestFailedException(int errorCode, string message) : this(errorCode, message, null)
		int32_t L_0 = ___errorCode0;
		String_t* L_1 = ___message1;
		RequestFailedException__ctor_m5F2BC9B778764EF58CA947E789CAEEAD27341C7A(__this, L_0, L_1, (Exception_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.RequestFailedException::.ctor(System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestFailedException__ctor_m5F2BC9B778764EF58CA947E789CAEEAD27341C7A (RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* __this, int32_t ___errorCode0, String_t* ___message1, Exception_t* ___innerException2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RequestFailedException(int errorCode, string message, Exception innerException) : base(message, innerException)
		String_t* L_0 = ___message1;
		Exception_t* L_1 = ___innerException2;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		// this.ErrorCode = errorCode;
		int32_t L_2 = ___errorCode0;
		__this->___U3CErrorCodeU3Ek__BackingField_18 = L_2;
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
// Unity.Services.Core.IUnityServices Unity.Services.Core.UnityServices::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityServices_get_Instance_m5BA0D657E90B0A0837290E98A0CB13F9D39CA0CD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static IUnityServices Instance { get; set; }
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Core.UnityServices::set_Instance(Unity.Services.Core.IUnityServices)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServices_set_Instance_m4C250363E94392D1578BEDE13EF067416804C85C (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static IUnityServices Instance { get; set; }
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Threading.Tasks.TaskCompletionSource`1<System.Object> Unity.Services.Core.UnityServices::get_InstantiationCompletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* UnityServices_get_InstantiationCompletion_mA867A00609D9BFFD19B8404887CA781DB60F0AE7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static TaskCompletionSource<object> InstantiationCompletion { get; set; }
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_0 = ((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstantiationCompletionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Core.UnityServices::set_InstantiationCompletion(System.Threading.Tasks.TaskCompletionSource`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServices_set_InstantiationCompletion_mA4D8862E87057DD28B48E93BDA0545E5CDCE8DEC (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static TaskCompletionSource<object> InstantiationCompletion { get; set; }
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstantiationCompletionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstantiationCompletionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Unity.Services.Core.ServicesInitializationState Unity.Services.Core.UnityServices::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityServices_get_State_mF530C62B86FBF1BF3B379006DACF9C110FD7BC9D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityServices_t49EC0D24FF18A25F42A1FF0B56962B5E7AD1E9A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* G_B6_0 = NULL;
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	{
		// if (!UnityThreadUtils.IsRunningOnUnityThread)
		bool L_0;
		L_0 = UnityThreadUtils_get_IsRunningOnUnityThread_m5FD8E9090E2A2EE035677BC109B12A234B91A1B4(NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// throw new ServicesInitializationException("You are attempting to access UnityServices.State from a non-Unity Thread." +
		//     " UnityServices.State can only be accessed from Unity Thread");
		ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* L_1 = (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631_il2cpp_TypeInfo_var)));
		ServicesInitializationException__ctor_m638AF9055D8C8C6BA7AC554FF3066C26EA869F55(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral02DC5487F216AE25A9C6B6F775A8CF9EE1920C91)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityServices_get_State_mF530C62B86FBF1BF3B379006DACF9C110FD7BC9D_RuntimeMethod_var)));
	}

IL_0012:
	{
		// if (Instance != null)
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = UnityServices_get_Instance_m5BA0D657E90B0A0837290E98A0CB13F9D39CA0CD_inline(NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// return Instance.State;
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = UnityServices_get_Instance_m5BA0D657E90B0A0837290E98A0CB13F9D39CA0CD_inline(NULL);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Unity.Services.Core.ServicesInitializationState Unity.Services.Core.IUnityServices::get_State() */, IUnityServices_t49EC0D24FF18A25F42A1FF0B56962B5E7AD1E9A9_il2cpp_TypeInfo_var, L_3);
		return L_4;
	}

IL_0024:
	{
		// if (InstantiationCompletion?.Task.Status == TaskStatus.WaitingForActivation)
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_5;
		L_5 = UnityServices_get_InstantiationCompletion_mA867A00609D9BFFD19B8404887CA781DB60F0AE7_inline(NULL);
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_6 = L_5;
		G_B5_0 = L_6;
		if (L_6)
		{
			G_B6_0 = L_6;
			goto IL_0030;
		}
	}
	{
		G_B7_0 = 0;
		goto IL_003d;
	}

IL_0030:
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_7;
		L_7 = TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_inline(G_B6_0, TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
		int32_t L_8;
		L_8 = Task_get_Status_m9707FD4B44416BA03FA2FDBEB3D0F0F281D90AD8(L_7, NULL);
		G_B7_0 = ((((int32_t)L_8) == ((int32_t)1))? 1 : 0);
	}

IL_003d:
	{
		if (!G_B7_0)
		{
			goto IL_0041;
		}
	}
	{
		// return ServicesInitializationState.Initializing;
		return (int32_t)(1);
	}

IL_0041:
	{
		// return ServicesInitializationState.Uninitialized;
		return (int32_t)(0);
	}
}
// System.String Unity.Services.Core.UnityServices::get_ExternalUserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityServices_get_ExternalUserId_m5028564FBDCC1965850DA78BC91CCA7FF4369AF8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => ExternalUserIdProperty.UserId;
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* L_0 = ((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___ExternalUserIdProperty_2;
		String_t* L_1;
		L_1 = ExternalUserIdProperty_get_UserId_mF463E7814BFC0294128FEB39259BEB00692F3295_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Unity.Services.Core.UnityServices::set_ExternalUserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServices_set_ExternalUserId_m3D68213DAB808F69A5A8DA5F2C22AA1136C59365 (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => ExternalUserIdProperty.UserId = value;
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* L_0 = ((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___ExternalUserIdProperty_2;
		String_t* L_1 = ___value0;
		ExternalUserIdProperty_set_UserId_m49AF583912638B80D441E07E46D5743BC8FA50E7(L_0, L_1, NULL);
		return;
	}
}
// System.Threading.Tasks.Task Unity.Services.Core.UnityServices::InitializeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UnityServices_InitializeAsync_mDC1CB3B695B5497E7159CE261445C907B26D223A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return InitializeAsync(new InitializationOptions());
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_0 = (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A*)il2cpp_codegen_object_new(InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_il2cpp_TypeInfo_var);
		InitializationOptions__ctor_m2D43EFD29B0A3E387D43FA9395F7D960D667E8F0(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = UnityServices_InitializeAsync_m06F67CD34C2A60139443202D98F16E7130CB6A1F(L_0, NULL);
		return L_1;
	}
}
// System.Threading.Tasks.Task Unity.Services.Core.UnityServices::InitializeAsync(Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UnityServices_InitializeAsync_m06F67CD34C2A60139443202D98F16E7130CB6A1F (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___options0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_mBBB8519D1AD7C68A746F7F7639F71AAEBB2ABC56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_1 = ___options0;
		(&V_0)->___options_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___options_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_mBBB8519D1AD7C68A746F7F7639F71AAEBB2ABC56(L_2, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_mBBB8519D1AD7C68A746F7F7639F71AAEBB2ABC56_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_3, NULL);
		return L_4;
	}
}
// System.Void Unity.Services.Core.UnityServices::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServices__cctor_m995156A0F59490005C1FA05F9EE6FBF92E1E1485 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static ExternalUserIdProperty ExternalUserIdProperty = new ExternalUserIdProperty();
		ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* L_0 = (ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9*)il2cpp_codegen_object_new(ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9_il2cpp_TypeInfo_var);
		ExternalUserIdProperty__ctor_m2FEBC14C2B8A45DEE3B1250F0B577EB3B8F629F7(L_0, NULL);
		((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___ExternalUserIdProperty_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___ExternalUserIdProperty_2), (void*)L_0);
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
// System.Void Unity.Services.Core.UnityServices/<InitializeAsync>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAsyncU3Ed__15_MoveNext_m84D0CC8DED8AFCA17443A63B13FD7104ECEEABB8 (U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_m5CFA197F7E5FA9D58D7182FD5117CD2042E8866D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_m1EA53742EDE25C95CA2E0134115E212D41315465_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityServices_t49EC0D24FF18A25F42A1FF0B56962B5E7AD1E9A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA V_1;
	memset((&V_1), 0, sizeof(V_1));
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
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
				goto IL_0089_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_00ff_1;
			}
		}
		{
			// if (!UnityThreadUtils.IsRunningOnUnityThread)
			bool L_3;
			L_3 = UnityThreadUtils_get_IsRunningOnUnityThread_m5FD8E9090E2A2EE035677BC109B12A234B91A1B4(NULL);
			if (L_3)
			{
				goto IL_0023_1;
			}
		}
		{
			// throw new ServicesInitializationException("You are attempting to initialize Unity Services from a non-Unity Thread." +
			//     " Unity Services can only be initialized from Unity Thread");
			ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* L_4 = (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631_il2cpp_TypeInfo_var)));
			ServicesInitializationException__ctor_m638AF9055D8C8C6BA7AC554FF3066C26EA869F55(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral99F5E171221B0CB9D6DE6F675428CD7AA265CFD0)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInitializeAsyncU3Ed__15_MoveNext_m84D0CC8DED8AFCA17443A63B13FD7104ECEEABB8_RuntimeMethod_var)));
		}

IL_0023_1:
		{
			// if (!Application.isPlaying)
			bool L_5;
			L_5 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
			if (L_5)
			{
				goto IL_0035_1;
			}
		}
		{
			// throw new ServicesInitializationException("You are attempting to initialize Unity Services in Edit Mode." +
			//     " Unity Services can only be initialized in Play Mode");
			ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* L_6 = (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631_il2cpp_TypeInfo_var)));
			ServicesInitializationException__ctor_m638AF9055D8C8C6BA7AC554FF3066C26EA869F55(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E8D89FA256D52FDC3705DD1E01B226056587734)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInitializeAsyncU3Ed__15_MoveNext_m84D0CC8DED8AFCA17443A63B13FD7104ECEEABB8_RuntimeMethod_var)));
		}

IL_0035_1:
		{
			// if (Instance == null)
			il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
			RuntimeObject* L_7;
			L_7 = UnityServices_get_Instance_m5BA0D657E90B0A0837290E98A0CB13F9D39CA0CD_inline(NULL);
			if (L_7)
			{
				goto IL_00ad_1;
			}
		}
		{
			// if (InstantiationCompletion == null)
			il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
			TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_8;
			L_8 = UnityServices_get_InstantiationCompletion_mA867A00609D9BFFD19B8404887CA781DB60F0AE7_inline(NULL);
			if (L_8)
			{
				goto IL_004d_1;
			}
		}
		{
			// InstantiationCompletion = new TaskCompletionSource<object>();
			TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_9 = (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*)il2cpp_codegen_object_new(TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var);
			TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60(L_9, TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
			UnityServices_set_InstantiationCompletion_mA4D8862E87057DD28B48E93BDA0545E5CDCE8DEC_inline(L_9, NULL);
		}

IL_004d_1:
		{
			// await InstantiationCompletion.Task;
			il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
			TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_10;
			L_10 = UnityServices_get_InstantiationCompletion_mA867A00609D9BFFD19B8404887CA781DB60F0AE7_inline(NULL);
			Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_11;
			L_11 = TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_inline(L_10, TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
			TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA L_12;
			L_12 = Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3(L_11, Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_RuntimeMethod_var);
			V_1 = L_12;
			bool L_13;
			L_13 = TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54((&V_1), TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_00a5_1;
			}
		}
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
			TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA L_15 = V_1;
			__this->___U3CU3Eu__1_3 = L_15;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_16 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_m5CFA197F7E5FA9D58D7182FD5117CD2042E8866D(L_16, (&V_1), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_m5CFA197F7E5FA9D58D7182FD5117CD2042E8866D_RuntimeMethod_var);
			goto IL_014e;
		}

IL_0089_1:
		{
			TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA L_17 = __this->___U3CU3Eu__1_3;
			V_1 = L_17;
			TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* L_18 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->___U3CU3E1__state_0 = L_19;
		}

IL_00a5_1:
		{
			RuntimeObject* L_20;
			L_20 = TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B((&V_1), TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_RuntimeMethod_var);
		}

IL_00ad_1:
		{
			// if (options is null)
			InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_21 = __this->___options_2;
			if (L_21)
			{
				goto IL_00c0_1;
			}
		}
		{
			// options = new InitializationOptions();
			InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_22 = (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A*)il2cpp_codegen_object_new(InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_il2cpp_TypeInfo_var);
			InitializationOptions__ctor_m2D43EFD29B0A3E387D43FA9395F7D960D667E8F0(L_22, NULL);
			__this->___options_2 = L_22;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___options_2), (void*)L_22);
		}

IL_00c0_1:
		{
			// await Instance.InitializeAsync(options);
			il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
			RuntimeObject* L_23;
			L_23 = UnityServices_get_Instance_m5BA0D657E90B0A0837290E98A0CB13F9D39CA0CD_inline(NULL);
			InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_24 = __this->___options_2;
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_25;
			L_25 = InterfaceFuncInvoker1< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* >::Invoke(2 /* System.Threading.Tasks.Task Unity.Services.Core.IUnityServices::InitializeAsync(Unity.Services.Core.InitializationOptions) */, IUnityServices_t49EC0D24FF18A25F42A1FF0B56962B5E7AD1E9A9_il2cpp_TypeInfo_var, L_23, L_24);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_26;
			L_26 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_25, NULL);
			V_2 = L_26;
			bool L_27;
			L_27 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_27)
			{
				goto IL_011b_1;
			}
		}
		{
			int32_t L_28 = 1;
			V_0 = L_28;
			__this->___U3CU3E1__state_0 = L_28;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_29 = V_2;
			__this->___U3CU3Eu__2_4 = L_29;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_30 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_m1EA53742EDE25C95CA2E0134115E212D41315465(L_30, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_m1EA53742EDE25C95CA2E0134115E212D41315465_RuntimeMethod_var);
			goto IL_014e;
		}

IL_00ff_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_31 = __this->___U3CU3Eu__2_4;
			V_2 = L_31;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_32 = (&__this->___U3CU3Eu__2_4);
			il2cpp_codegen_initobj(L_32, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_33 = (-1);
			V_0 = L_33;
			__this->___U3CU3E1__state_0 = L_33;
		}

IL_011b_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			goto IL_013b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0124;
		}
		throw e;
	}

CATCH_0124:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_34 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_35 = V_3;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_34, L_35, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_014e;
	}// end catch (depth: 1)

IL_013b:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_36 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_36, NULL);
	}

IL_014e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeAsyncU3Ed__15_MoveNext_m84D0CC8DED8AFCA17443A63B13FD7104ECEEABB8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB*>(__this + _offset);
	U3CInitializeAsyncU3Ed__15_MoveNext_m84D0CC8DED8AFCA17443A63B13FD7104ECEEABB8(_thisAdjusted, method);
}
// System.Void Unity.Services.Core.UnityServices/<InitializeAsync>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAsyncU3Ed__15_SetStateMachine_m64D4E0EC42AF9A1FF73B65B44D22A07A1B450990 (U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeAsyncU3Ed__15_SetStateMachine_m64D4E0EC42AF9A1FF73B65B44D22A07A1B450990_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB*>(__this + _offset);
	U3CInitializeAsyncU3Ed__15_SetStateMachine_m64D4E0EC42AF9A1FF73B65B44D22A07A1B450990(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Threading.Tasks.TaskScheduler Unity.Services.Core.UnityThreadUtils::get_UnityThreadScheduler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* UnityThreadUtils_get_UnityThreadScheduler_mE9C3F85F54EF3425CB76B8899D0F0BFBA705E3F2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static TaskScheduler UnityThreadScheduler { get; private set; }
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_0 = ((UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_StaticFields*)il2cpp_codegen_static_fields_for(UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_il2cpp_TypeInfo_var))->___U3CUnityThreadSchedulerU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Core.UnityThreadUtils::set_UnityThreadScheduler(System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThreadUtils_set_UnityThreadScheduler_m5AE27DBA9F88FE1CDCB8FBF241A3C1B5628F9BB6 (TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static TaskScheduler UnityThreadScheduler { get; private set; }
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_0 = ___value0;
		((UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_StaticFields*)il2cpp_codegen_static_fields_for(UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_il2cpp_TypeInfo_var))->___U3CUnityThreadSchedulerU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_StaticFields*)il2cpp_codegen_static_fields_for(UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_il2cpp_TypeInfo_var))->___U3CUnityThreadSchedulerU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Core.UnityThreadUtils::CaptureUnityThreadInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThreadUtils_CaptureUnityThreadInfo_m43D8C684F01F8CA911A1D6E80E7E70CC1A0CF579 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_UnityThreadId = Thread.CurrentThread.ManagedThreadId;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0;
		L_0 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		int32_t L_1;
		L_1 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_0, NULL);
		((UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_StaticFields*)il2cpp_codegen_static_fields_for(UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_il2cpp_TypeInfo_var))->___s_UnityThreadId_0 = L_1;
		// UnityThreadScheduler = TaskScheduler.FromCurrentSynchronizationContext();
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_2;
		L_2 = TaskScheduler_FromCurrentSynchronizationContext_m0520B4EAEC13A789C28A47B5215826D435973EE7(NULL);
		UnityThreadUtils_set_UnityThreadScheduler_m5AE27DBA9F88FE1CDCB8FBF241A3C1B5628F9BB6_inline(L_2, NULL);
		// }
		return;
	}
}
// System.Boolean Unity.Services.Core.UnityThreadUtils::get_IsRunningOnUnityThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityThreadUtils_get_IsRunningOnUnityThread_m5FD8E9090E2A2EE035677BC109B12A234B91A1B4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsRunningOnUnityThread => Thread.CurrentThread.ManagedThreadId == s_UnityThreadId;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0;
		L_0 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		int32_t L_1;
		L_1 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_0, NULL);
		int32_t L_2 = ((UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_StaticFields*)il2cpp_codegen_static_fields_for(UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_il2cpp_TypeInfo_var))->___s_UnityThreadId_0;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnityServices_get_Instance_m5BA0D657E90B0A0837290E98A0CB13F9D39CA0CD_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static IUnityServices Instance { get; set; }
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* UnityServices_get_InstantiationCompletion_mA867A00609D9BFFD19B8404887CA781DB60F0AE7_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static TaskCompletionSource<object> InstantiationCompletion { get; set; }
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_0 = ((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstantiationCompletionU3Ek__BackingField_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityServices_set_InstantiationCompletion_mA4D8862E87057DD28B48E93BDA0545E5CDCE8DEC_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static TaskCompletionSource<object> InstantiationCompletion { get; set; }
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstantiationCompletionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstantiationCompletionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityThreadUtils_set_UnityThreadScheduler_m5AE27DBA9F88FE1CDCB8FBF241A3C1B5628F9BB6_inline (TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static TaskScheduler UnityThreadScheduler { get; private set; }
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_0 = ___value0;
		((UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_StaticFields*)il2cpp_codegen_static_fields_for(UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_il2cpp_TypeInfo_var))->___U3CUnityThreadSchedulerU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_StaticFields*)il2cpp_codegen_static_fields_for(UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_il2cpp_TypeInfo_var))->___U3CUnityThreadSchedulerU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_0 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)__this->____task_0;
		return L_0;
	}
}
