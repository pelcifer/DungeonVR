#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>
struct AbstractBuilderLite_2_t60C513A8D55878C329D569792411DEF020D52088;
// Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>
struct AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>
struct Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7;
// System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>
struct Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256;
// Google.ProtocolBuffers.GeneratedBuilderLite`2<System.Object,System.Object>
struct GeneratedBuilderLite_2_tFE76F6CF01CB14F6E94310424938B05647711B6B;
// Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>
struct GeneratedBuilderLite_2_t4CCAA45209A9F62F93E7444CEE497A4FF30A8397;
// Google.ProtocolBuffers.GeneratedMessageLite`2<System.Object,System.Object>
struct GeneratedMessageLite_2_tE8C6F7808298EF1BE3D921F73060152DDB9F80F1;
// Google.ProtocolBuffers.GeneratedMessageLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>
struct GeneratedMessageLite_2_t82DB2ACD6D40D03C3414CF8083201076C2B10FEB;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t20C0141C3FEEDAA44BFE8521FEEDDF47289CB40B;
// System.Collections.Generic.IComparer`1<System.String>
struct IComparer_1_t9D94970C7FA2307DB453148499A627C3F64331AE;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Google.ProtocolBuffers.ByteString
struct ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586;
// Google.ProtocolBuffers.ExtensionRegistry
struct ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5;
// Google.ProtocolBuffers.ICodedInputStream
struct ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932;
// Google.ProtocolBuffers.ICodedOutputStream
struct ICodedOutputStream_t92C3F4E7AA3A87700C4151FEF30B0AF5BD0A4F9D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Google.ProtocolBuffers.IMessageLite
struct IMessageLite_tA796EF3E5E4656B8FC42C9138B1423CB43BC5D68;
// Google.ProtocolBuffers.InvalidProtocolBufferException
struct InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer
struct Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder
struct Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302;

IL2CPP_EXTERN_C RuntimeClass* Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICodedOutputStream_t92C3F4E7AA3A87700C4151FEF30B0AF5BD0A4F9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhoneEvent_t8977146DDA5AF16F3661CAAFF1E4DA378BA2C70E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____525E5C507ECFAFD8583A9B2B3F0AE7C111AD6A295E795617048903DD37AB3514_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1ADA0A4B45FFBFCF792C61B451AF43A6C341E292;
IL2CPP_EXTERN_C String_t* _stringLiteral9167D3A5FE683F0DD7B16CE29BAFE3083934E11B;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C const RuntimeMethod* AbstractBuilderLite_2_MergeDelimitedFrom_m8C049EEE34F924B068109BA2019AC2F28D765D2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AbstractBuilderLite_2_MergeDelimitedFrom_mDBA09B0371D1C1CBA64A902149E769C909F0757D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AbstractBuilderLite_2_MergeFrom_m077F8BDC9A40BD2744DA305716D47D7FD4C02BE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AbstractBuilderLite_2_MergeFrom_m9E6216E1C08706C3E61356A7FB9A3FB0E52E2666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AbstractBuilderLite_2_MergeFrom_mA162BF3102EA42D62F2EA3BC70A44C54C341464B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AbstractBuilderLite_2_MergeFrom_mBFA22BE8CEA616188C6E7F55E6174E39563EC193_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AbstractBuilderLite_2_MergeFrom_mF34461DF32719A18A93F56C01A45DB0C65FB1645_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AbstractBuilderLite_2_MergeFrom_mF36F3941940332A01B21431C4BC0783BC925C1DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Builder_MergeFrom_mAE0A78C84760ED6705E35C312E4AB0D2E684C036_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedBuilderLite_2_MergeFrom_mFE12F3933FE4756BAEAA2465FA6F5E9C5DE72A77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedBuilderLite_2__ctor_m4D600BF5EDC880CCB2785A4CCCC95932A065C7D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedMessageLite_2_PrintField_m638873B95E598C7021E09266718B2CF1107340CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeneratedMessageLite_2__ctor_mB94010B443D2F8CACD70FB9DE924F5CBC6FD8E7B_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>
struct AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26  : public RuntimeObject
{
public:

public:
};


// Google.ProtocolBuffers.AbstractMessageLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>
struct AbstractMessageLite_2_tD7D5F2FBA66BA8E86E2629EBA238136FCE83B342  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// Google.ProtocolBuffers.ByteString
struct ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586  : public RuntimeObject
{
public:
	// System.Byte[] Google.ProtocolBuffers.ByteString::bytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes_1;

public:
	inline static int32_t get_offset_of_bytes_1() { return static_cast<int32_t>(offsetof(ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586, ___bytes_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_bytes_1() const { return ___bytes_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_bytes_1() { return &___bytes_1; }
	inline void set_bytes_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___bytes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bytes_1), (void*)value);
	}
};

struct ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586_StaticFields
{
public:
	// Google.ProtocolBuffers.ByteString Google.ProtocolBuffers.ByteString::empty
	ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586_StaticFields, ___empty_0)); }
	inline ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * get_empty_0() const { return ___empty_0; }
	inline ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 ** get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___empty_0), (void*)value);
	}
};


// Google.ProtocolBuffers.ExtensionRegistry
struct ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>> Google.ProtocolBuffers.ExtensionRegistry::extensionsByName
	Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7 * ___extensionsByName_1;
	// System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite> Google.ProtocolBuffers.ExtensionRegistry::extensionsByNumber
	Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256 * ___extensionsByNumber_2;
	// System.Boolean Google.ProtocolBuffers.ExtensionRegistry::readOnly
	bool ___readOnly_3;

public:
	inline static int32_t get_offset_of_extensionsByName_1() { return static_cast<int32_t>(offsetof(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5, ___extensionsByName_1)); }
	inline Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7 * get_extensionsByName_1() const { return ___extensionsByName_1; }
	inline Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7 ** get_address_of_extensionsByName_1() { return &___extensionsByName_1; }
	inline void set_extensionsByName_1(Dictionary_2_t2C64162695BC15CDFC77CD956EE4BF3E3D28E7C7 * value)
	{
		___extensionsByName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensionsByName_1), (void*)value);
	}

	inline static int32_t get_offset_of_extensionsByNumber_2() { return static_cast<int32_t>(offsetof(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5, ___extensionsByNumber_2)); }
	inline Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256 * get_extensionsByNumber_2() const { return ___extensionsByNumber_2; }
	inline Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256 ** get_address_of_extensionsByNumber_2() { return &___extensionsByNumber_2; }
	inline void set_extensionsByNumber_2(Dictionary_2_tF54A26D5F02DD1F126472FC98CA7B83123E5C256 * value)
	{
		___extensionsByNumber_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensionsByNumber_2), (void*)value);
	}

	inline static int32_t get_offset_of_readOnly_3() { return static_cast<int32_t>(offsetof(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5, ___readOnly_3)); }
	inline bool get_readOnly_3() const { return ___readOnly_3; }
	inline bool* get_address_of_readOnly_3() { return &___readOnly_3; }
	inline void set_readOnly_3(bool value)
	{
		___readOnly_3 = value;
	}
};

struct ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_StaticFields
{
public:
	// Google.ProtocolBuffers.ExtensionRegistry Google.ProtocolBuffers.ExtensionRegistry::empty
	ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_StaticFields, ___empty_0)); }
	inline ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * get_empty_0() const { return ___empty_0; }
	inline ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 ** get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___empty_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// proto.Proto.PhoneEvent
struct PhoneEvent_t8977146DDA5AF16F3661CAAFF1E4DA378BA2C70E  : public RuntimeObject
{
public:

public:
};

struct PhoneEvent_t8977146DDA5AF16F3661CAAFF1E4DA378BA2C70E_StaticFields
{
public:
	// System.Object proto.Proto.PhoneEvent::Descriptor
	RuntimeObject * ___Descriptor_0;

public:
	inline static int32_t get_offset_of_Descriptor_0() { return static_cast<int32_t>(offsetof(PhoneEvent_t8977146DDA5AF16F3661CAAFF1E4DA378BA2C70E_StaticFields, ___Descriptor_0)); }
	inline RuntimeObject * get_Descriptor_0() const { return ___Descriptor_0; }
	inline RuntimeObject ** get_address_of_Descriptor_0() { return &___Descriptor_0; }
	inline void set_Descriptor_0(RuntimeObject * value)
	{
		___Descriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Descriptor_0), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields
{
public:
	// System.StringComparer System.StringComparer::_invariantCulture
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____invariantCulture_0;
	// System.StringComparer System.StringComparer::_invariantCultureIgnoreCase
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____invariantCultureIgnoreCase_1;
	// System.StringComparer System.StringComparer::_ordinal
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____ordinal_2;
	// System.StringComparer System.StringComparer::_ordinalIgnoreCase
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____ordinalIgnoreCase_3;

public:
	inline static int32_t get_offset_of__invariantCulture_0() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____invariantCulture_0)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__invariantCulture_0() const { return ____invariantCulture_0; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__invariantCulture_0() { return &____invariantCulture_0; }
	inline void set__invariantCulture_0(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____invariantCulture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCulture_0), (void*)value);
	}

	inline static int32_t get_offset_of__invariantCultureIgnoreCase_1() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____invariantCultureIgnoreCase_1)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__invariantCultureIgnoreCase_1() const { return ____invariantCultureIgnoreCase_1; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__invariantCultureIgnoreCase_1() { return &____invariantCultureIgnoreCase_1; }
	inline void set__invariantCultureIgnoreCase_1(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____invariantCultureIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCultureIgnoreCase_1), (void*)value);
	}

	inline static int32_t get_offset_of__ordinal_2() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____ordinal_2)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__ordinal_2() const { return ____ordinal_2; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__ordinal_2() { return &____ordinal_2; }
	inline void set__ordinal_2(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____ordinal_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinal_2), (void*)value);
	}

	inline static int32_t get_offset_of__ordinalIgnoreCase_3() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____ordinalIgnoreCase_3)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__ordinalIgnoreCase_3() const { return ____ordinalIgnoreCase_3; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__ordinalIgnoreCase_3() { return &____ordinalIgnoreCase_3; }
	inline void set__ordinalIgnoreCase_3(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____ordinalIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinalIgnoreCase_3), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>
struct GeneratedBuilderLite_2_t4CCAA45209A9F62F93E7444CEE497A4FF30A8397  : public AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26
{
public:

public:
};


// Google.ProtocolBuffers.GeneratedMessageLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>
struct GeneratedMessageLite_2_t82DB2ACD6D40D03C3414CF8083201076C2B10FEB  : public AbstractMessageLite_2_tD7D5F2FBA66BA8E86E2629EBA238136FCE83B342
{
public:

public:
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794__padding[12];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66__padding[16];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_tA7878E15E0E5AC780F6ED4F6E87AD8233A152598 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tA7878E15E0E5AC780F6ED4F6E87AD8233A152598__padding[20];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
struct __StaticArrayInitTypeSizeU3D28_tB9DE54DF41ABC27805509271A10177513906BF30 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_tB9DE54DF41ABC27805509271A10177513906BF30__padding[28];
	};

public:
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::525E5C507ECFAFD8583A9B2B3F0AE7C111AD6A295E795617048903DD37AB3514
	__StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  ___525E5C507ECFAFD8583A9B2B3F0AE7C111AD6A295E795617048903DD37AB3514_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::5AAE3A7C2567829A11E474206FB7571ED20369039EA839B4D91815350DA4AA7A
	__StaticArrayInitTypeSizeU3D20_tA7878E15E0E5AC780F6ED4F6E87AD8233A152598  ___5AAE3A7C2567829A11E474206FB7571ED20369039EA839B4D91815350DA4AA7A_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::80C0C57E5FFBE7946199F243DBB32F061E91E0EFFC37804AE32F87118CFC2D0E
	__StaticArrayInitTypeSizeU3D28_tB9DE54DF41ABC27805509271A10177513906BF30  ___80C0C57E5FFBE7946199F243DBB32F061E91E0EFFC37804AE32F87118CFC2D0E_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::85C4EAA6AE28221674FCA1526EABDD1E72BC08037C2A7DA82E628A540A8BBFA4
	__StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66  ___85C4EAA6AE28221674FCA1526EABDD1E72BC08037C2A7DA82E628A540A8BBFA4_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::9D2B6D3B030D389E9B504F0C40B877753EA469BBE7611A1A7A8B98FF67D8990C
	__StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  ___9D2B6D3B030D389E9B504F0C40B877753EA469BBE7611A1A7A8B98FF67D8990C_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::FA77092D9A827626EFC38F87902E4E13B82B9C71A09A938D03D68AF8B922BC50
	__StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66  ___FA77092D9A827626EFC38F87902E4E13B82B9C71A09A938D03D68AF8B922BC50_5;

public:
	inline static int32_t get_offset_of_U3525E5C507ECFAFD8583A9B2B3F0AE7C111AD6A295E795617048903DD37AB3514_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___525E5C507ECFAFD8583A9B2B3F0AE7C111AD6A295E795617048903DD37AB3514_0)); }
	inline __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  get_U3525E5C507ECFAFD8583A9B2B3F0AE7C111AD6A295E795617048903DD37AB3514_0() const { return ___525E5C507ECFAFD8583A9B2B3F0AE7C111AD6A295E795617048903DD37AB3514_0; }
	inline __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794 * get_address_of_U3525E5C507ECFAFD8583A9B2B3F0AE7C111AD6A295E795617048903DD37AB3514_0() { return &___525E5C507ECFAFD8583A9B2B3F0AE7C111AD6A295E795617048903DD37AB3514_0; }
	inline void set_U3525E5C507ECFAFD8583A9B2B3F0AE7C111AD6A295E795617048903DD37AB3514_0(__StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  value)
	{
		___525E5C507ECFAFD8583A9B2B3F0AE7C111AD6A295E795617048903DD37AB3514_0 = value;
	}

	inline static int32_t get_offset_of_U35AAE3A7C2567829A11E474206FB7571ED20369039EA839B4D91815350DA4AA7A_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___5AAE3A7C2567829A11E474206FB7571ED20369039EA839B4D91815350DA4AA7A_1)); }
	inline __StaticArrayInitTypeSizeU3D20_tA7878E15E0E5AC780F6ED4F6E87AD8233A152598  get_U35AAE3A7C2567829A11E474206FB7571ED20369039EA839B4D91815350DA4AA7A_1() const { return ___5AAE3A7C2567829A11E474206FB7571ED20369039EA839B4D91815350DA4AA7A_1; }
	inline __StaticArrayInitTypeSizeU3D20_tA7878E15E0E5AC780F6ED4F6E87AD8233A152598 * get_address_of_U35AAE3A7C2567829A11E474206FB7571ED20369039EA839B4D91815350DA4AA7A_1() { return &___5AAE3A7C2567829A11E474206FB7571ED20369039EA839B4D91815350DA4AA7A_1; }
	inline void set_U35AAE3A7C2567829A11E474206FB7571ED20369039EA839B4D91815350DA4AA7A_1(__StaticArrayInitTypeSizeU3D20_tA7878E15E0E5AC780F6ED4F6E87AD8233A152598  value)
	{
		___5AAE3A7C2567829A11E474206FB7571ED20369039EA839B4D91815350DA4AA7A_1 = value;
	}

	inline static int32_t get_offset_of_U380C0C57E5FFBE7946199F243DBB32F061E91E0EFFC37804AE32F87118CFC2D0E_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___80C0C57E5FFBE7946199F243DBB32F061E91E0EFFC37804AE32F87118CFC2D0E_2)); }
	inline __StaticArrayInitTypeSizeU3D28_tB9DE54DF41ABC27805509271A10177513906BF30  get_U380C0C57E5FFBE7946199F243DBB32F061E91E0EFFC37804AE32F87118CFC2D0E_2() const { return ___80C0C57E5FFBE7946199F243DBB32F061E91E0EFFC37804AE32F87118CFC2D0E_2; }
	inline __StaticArrayInitTypeSizeU3D28_tB9DE54DF41ABC27805509271A10177513906BF30 * get_address_of_U380C0C57E5FFBE7946199F243DBB32F061E91E0EFFC37804AE32F87118CFC2D0E_2() { return &___80C0C57E5FFBE7946199F243DBB32F061E91E0EFFC37804AE32F87118CFC2D0E_2; }
	inline void set_U380C0C57E5FFBE7946199F243DBB32F061E91E0EFFC37804AE32F87118CFC2D0E_2(__StaticArrayInitTypeSizeU3D28_tB9DE54DF41ABC27805509271A10177513906BF30  value)
	{
		___80C0C57E5FFBE7946199F243DBB32F061E91E0EFFC37804AE32F87118CFC2D0E_2 = value;
	}

	inline static int32_t get_offset_of_U385C4EAA6AE28221674FCA1526EABDD1E72BC08037C2A7DA82E628A540A8BBFA4_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___85C4EAA6AE28221674FCA1526EABDD1E72BC08037C2A7DA82E628A540A8BBFA4_3)); }
	inline __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66  get_U385C4EAA6AE28221674FCA1526EABDD1E72BC08037C2A7DA82E628A540A8BBFA4_3() const { return ___85C4EAA6AE28221674FCA1526EABDD1E72BC08037C2A7DA82E628A540A8BBFA4_3; }
	inline __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66 * get_address_of_U385C4EAA6AE28221674FCA1526EABDD1E72BC08037C2A7DA82E628A540A8BBFA4_3() { return &___85C4EAA6AE28221674FCA1526EABDD1E72BC08037C2A7DA82E628A540A8BBFA4_3; }
	inline void set_U385C4EAA6AE28221674FCA1526EABDD1E72BC08037C2A7DA82E628A540A8BBFA4_3(__StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66  value)
	{
		___85C4EAA6AE28221674FCA1526EABDD1E72BC08037C2A7DA82E628A540A8BBFA4_3 = value;
	}

	inline static int32_t get_offset_of_U39D2B6D3B030D389E9B504F0C40B877753EA469BBE7611A1A7A8B98FF67D8990C_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___9D2B6D3B030D389E9B504F0C40B877753EA469BBE7611A1A7A8B98FF67D8990C_4)); }
	inline __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  get_U39D2B6D3B030D389E9B504F0C40B877753EA469BBE7611A1A7A8B98FF67D8990C_4() const { return ___9D2B6D3B030D389E9B504F0C40B877753EA469BBE7611A1A7A8B98FF67D8990C_4; }
	inline __StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794 * get_address_of_U39D2B6D3B030D389E9B504F0C40B877753EA469BBE7611A1A7A8B98FF67D8990C_4() { return &___9D2B6D3B030D389E9B504F0C40B877753EA469BBE7611A1A7A8B98FF67D8990C_4; }
	inline void set_U39D2B6D3B030D389E9B504F0C40B877753EA469BBE7611A1A7A8B98FF67D8990C_4(__StaticArrayInitTypeSizeU3D12_tBA6527015605C05FA449470204ADB7A684F0A794  value)
	{
		___9D2B6D3B030D389E9B504F0C40B877753EA469BBE7611A1A7A8B98FF67D8990C_4 = value;
	}

	inline static int32_t get_offset_of_FA77092D9A827626EFC38F87902E4E13B82B9C71A09A938D03D68AF8B922BC50_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___FA77092D9A827626EFC38F87902E4E13B82B9C71A09A938D03D68AF8B922BC50_5)); }
	inline __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66  get_FA77092D9A827626EFC38F87902E4E13B82B9C71A09A938D03D68AF8B922BC50_5() const { return ___FA77092D9A827626EFC38F87902E4E13B82B9C71A09A938D03D68AF8B922BC50_5; }
	inline __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66 * get_address_of_FA77092D9A827626EFC38F87902E4E13B82B9C71A09A938D03D68AF8B922BC50_5() { return &___FA77092D9A827626EFC38F87902E4E13B82B9C71A09A938D03D68AF8B922BC50_5; }
	inline void set_FA77092D9A827626EFC38F87902E4E13B82B9C71A09A938D03D68AF8B922BC50_5(__StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66  value)
	{
		___FA77092D9A827626EFC38F87902E4E13B82B9C71A09A938D03D68AF8B922BC50_5 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// proto.PhoneEvent/Types/MotionEvent/Types/Pointer
struct Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2  : public GeneratedMessageLite_2_t82DB2ACD6D40D03C3414CF8083201076C2B10FEB
{
public:
	// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::hasId
	bool ___hasId_4;
	// System.Int32 proto.PhoneEvent/Types/MotionEvent/Types/Pointer::id_
	int32_t ___id__5;
	// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::hasNormalizedX
	bool ___hasNormalizedX_7;
	// System.Single proto.PhoneEvent/Types/MotionEvent/Types/Pointer::normalizedX_
	float ___normalizedX__8;
	// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::hasNormalizedY
	bool ___hasNormalizedY_10;
	// System.Single proto.PhoneEvent/Types/MotionEvent/Types/Pointer::normalizedY_
	float ___normalizedY__11;
	// System.Int32 proto.PhoneEvent/Types/MotionEvent/Types/Pointer::memoizedSerializedSize
	int32_t ___memoizedSerializedSize_12;

public:
	inline static int32_t get_offset_of_hasId_4() { return static_cast<int32_t>(offsetof(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2, ___hasId_4)); }
	inline bool get_hasId_4() const { return ___hasId_4; }
	inline bool* get_address_of_hasId_4() { return &___hasId_4; }
	inline void set_hasId_4(bool value)
	{
		___hasId_4 = value;
	}

	inline static int32_t get_offset_of_id__5() { return static_cast<int32_t>(offsetof(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2, ___id__5)); }
	inline int32_t get_id__5() const { return ___id__5; }
	inline int32_t* get_address_of_id__5() { return &___id__5; }
	inline void set_id__5(int32_t value)
	{
		___id__5 = value;
	}

	inline static int32_t get_offset_of_hasNormalizedX_7() { return static_cast<int32_t>(offsetof(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2, ___hasNormalizedX_7)); }
	inline bool get_hasNormalizedX_7() const { return ___hasNormalizedX_7; }
	inline bool* get_address_of_hasNormalizedX_7() { return &___hasNormalizedX_7; }
	inline void set_hasNormalizedX_7(bool value)
	{
		___hasNormalizedX_7 = value;
	}

	inline static int32_t get_offset_of_normalizedX__8() { return static_cast<int32_t>(offsetof(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2, ___normalizedX__8)); }
	inline float get_normalizedX__8() const { return ___normalizedX__8; }
	inline float* get_address_of_normalizedX__8() { return &___normalizedX__8; }
	inline void set_normalizedX__8(float value)
	{
		___normalizedX__8 = value;
	}

	inline static int32_t get_offset_of_hasNormalizedY_10() { return static_cast<int32_t>(offsetof(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2, ___hasNormalizedY_10)); }
	inline bool get_hasNormalizedY_10() const { return ___hasNormalizedY_10; }
	inline bool* get_address_of_hasNormalizedY_10() { return &___hasNormalizedY_10; }
	inline void set_hasNormalizedY_10(bool value)
	{
		___hasNormalizedY_10 = value;
	}

	inline static int32_t get_offset_of_normalizedY__11() { return static_cast<int32_t>(offsetof(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2, ___normalizedY__11)); }
	inline float get_normalizedY__11() const { return ___normalizedY__11; }
	inline float* get_address_of_normalizedY__11() { return &___normalizedY__11; }
	inline void set_normalizedY__11(float value)
	{
		___normalizedY__11 = value;
	}

	inline static int32_t get_offset_of_memoizedSerializedSize_12() { return static_cast<int32_t>(offsetof(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2, ___memoizedSerializedSize_12)); }
	inline int32_t get_memoizedSerializedSize_12() const { return ___memoizedSerializedSize_12; }
	inline int32_t* get_address_of_memoizedSerializedSize_12() { return &___memoizedSerializedSize_12; }
	inline void set_memoizedSerializedSize_12(int32_t value)
	{
		___memoizedSerializedSize_12 = value;
	}
};

struct Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_StaticFields
{
public:
	// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::defaultInstance
	Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * ___defaultInstance_0;
	// System.String[] proto.PhoneEvent/Types/MotionEvent/Types/Pointer::_pointerFieldNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____pointerFieldNames_1;
	// System.UInt32[] proto.PhoneEvent/Types/MotionEvent/Types/Pointer::_pointerFieldTags
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____pointerFieldTags_2;

public:
	inline static int32_t get_offset_of_defaultInstance_0() { return static_cast<int32_t>(offsetof(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_StaticFields, ___defaultInstance_0)); }
	inline Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * get_defaultInstance_0() const { return ___defaultInstance_0; }
	inline Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 ** get_address_of_defaultInstance_0() { return &___defaultInstance_0; }
	inline void set_defaultInstance_0(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * value)
	{
		___defaultInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultInstance_0), (void*)value);
	}

	inline static int32_t get_offset_of__pointerFieldNames_1() { return static_cast<int32_t>(offsetof(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_StaticFields, ____pointerFieldNames_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__pointerFieldNames_1() const { return ____pointerFieldNames_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__pointerFieldNames_1() { return &____pointerFieldNames_1; }
	inline void set__pointerFieldNames_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____pointerFieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pointerFieldNames_1), (void*)value);
	}

	inline static int32_t get_offset_of__pointerFieldTags_2() { return static_cast<int32_t>(offsetof(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_StaticFields, ____pointerFieldTags_2)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__pointerFieldTags_2() const { return ____pointerFieldTags_2; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__pointerFieldTags_2() { return &____pointerFieldTags_2; }
	inline void set__pointerFieldTags_2(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____pointerFieldTags_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pointerFieldTags_2), (void*)value);
	}
};


// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder
struct Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302  : public GeneratedBuilderLite_2_t4CCAA45209A9F62F93E7444CEE497A4FF30A8397
{
public:
	// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::resultIsReadOnly
	bool ___resultIsReadOnly_0;
	// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::result
	Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * ___result_1;

public:
	inline static int32_t get_offset_of_resultIsReadOnly_0() { return static_cast<int32_t>(offsetof(Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302, ___resultIsReadOnly_0)); }
	inline bool get_resultIsReadOnly_0() const { return ___resultIsReadOnly_0; }
	inline bool* get_address_of_resultIsReadOnly_0() { return &___resultIsReadOnly_0; }
	inline void set_resultIsReadOnly_0(bool value)
	{
		___resultIsReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302, ___result_1)); }
	inline Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * get_result_1() const { return ___result_1; }
	inline Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 ** get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * value)
	{
		___result_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_1), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// Google.ProtocolBuffers.InvalidProtocolBufferException
struct InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60  : public IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void Google.ProtocolBuffers.GeneratedMessageLite`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedMessageLite_2__ctor_mE5B581A70266A72E74F977007197FE5C905D2C8A_gshared (GeneratedMessageLite_2_tE8C6F7808298EF1BE3D921F73060152DDB9F80F1 * __this, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.GeneratedMessageLite`2<System.Object,System.Object>::PrintField(System.String,System.Boolean,System.Object,System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedMessageLite_2_PrintField_m7BA730CA3507981347F811E40239ED25469B03EA_gshared (String_t* ___name0, bool ___hasValue1, RuntimeObject * ___value2, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___writer3, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::MergeFrom(Google.ProtocolBuffers.ByteString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AbstractBuilderLite_2_MergeFrom_m848932FDF05B22660AC4A0B75F76E7E21F2DEBA5_gshared (AbstractBuilderLite_2_t60C513A8D55878C329D569792411DEF020D52088 * __this, ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * ___data0, const RuntimeMethod* method);
// !0 Google.ProtocolBuffers.GeneratedBuilderLite`2<System.Object,System.Object>::BuildParsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GeneratedBuilderLite_2_BuildParsed_m19741B951A04F2AB187F1B591BEB8016710CE512_gshared (GeneratedBuilderLite_2_tFE76F6CF01CB14F6E94310424938B05647711B6B * __this, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::MergeFrom(Google.ProtocolBuffers.ByteString,Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AbstractBuilderLite_2_MergeFrom_mD4BD3E78EB6B9100B6A89BB1C2C100F41683662A_gshared (AbstractBuilderLite_2_t60C513A8D55878C329D569792411DEF020D52088 * __this, ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * ___data0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::MergeFrom(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AbstractBuilderLite_2_MergeFrom_mF29F5E9CAD54CF80D81CC9B39FA5CA7C9A7FD833_gshared (AbstractBuilderLite_2_t60C513A8D55878C329D569792411DEF020D52088 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::MergeFrom(System.Byte[],Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AbstractBuilderLite_2_MergeFrom_m155751DE6A8DFC5EA4AE26ED07717B578C1F9ADD_gshared (AbstractBuilderLite_2_t60C513A8D55878C329D569792411DEF020D52088 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::MergeFrom(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AbstractBuilderLite_2_MergeFrom_m60F21E4382A29C32A7524BC37C304A61192D30B9_gshared (AbstractBuilderLite_2_t60C513A8D55878C329D569792411DEF020D52088 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::MergeFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AbstractBuilderLite_2_MergeFrom_m5A1CEB9EF2C6BB405AEA1D2C32EC250FEDDE16A9_gshared (AbstractBuilderLite_2_t60C513A8D55878C329D569792411DEF020D52088 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::MergeDelimitedFrom(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AbstractBuilderLite_2_MergeDelimitedFrom_m2CA5822E4FFA2F314454B2F84AEB525060BB5438_gshared (AbstractBuilderLite_2_t60C513A8D55878C329D569792411DEF020D52088 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::MergeDelimitedFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AbstractBuilderLite_2_MergeDelimitedFrom_m0F0CC577C1D8C8D811FE68EF6772C21FB997D893_gshared (AbstractBuilderLite_2_t60C513A8D55878C329D569792411DEF020D52088 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.GeneratedBuilderLite`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedBuilderLite_2__ctor_m266FD052E0FAEA48FFE6BB592FC9038ACD969EB1_gshared (GeneratedBuilderLite_2_tFE76F6CF01CB14F6E94310424938B05647711B6B * __this, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<System.Object,System.Object>::MergeFrom(Google.ProtocolBuffers.IMessageLite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GeneratedBuilderLite_2_MergeFrom_m5CC013F304C8902E9761D27E07045648B3A1C2CD_gshared (GeneratedBuilderLite_2_tFE76F6CF01CB14F6E94310424938B05647711B6B * __this, RuntimeObject* ___other0, const RuntimeMethod* method);
// System.Int32 System.Array::BinarySearch<System.Object>(!!0[],!!0,System.Collections.Generic.IComparer`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisRuntimeObject_m9FE3DB1E9AFF3661EB4480AA77B7479F53E7581F_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, RuntimeObject * ___value1, RuntimeObject* ___comparer2, const RuntimeMethod* method);

// System.Void Google.ProtocolBuffers.GeneratedMessageLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::.ctor()
inline void GeneratedMessageLite_2__ctor_mB94010B443D2F8CACD70FB9DE924F5CBC6FD8E7B (GeneratedMessageLite_2_t82DB2ACD6D40D03C3414CF8083201076C2B10FEB * __this, const RuntimeMethod* method)
{
	((  void (*) (GeneratedMessageLite_2_t82DB2ACD6D40D03C3414CF8083201076C2B10FEB *, const RuntimeMethod*))GeneratedMessageLite_2__ctor_mE5B581A70266A72E74F977007197FE5C905D2C8A_gshared)(__this, method);
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_DefaultInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_get_DefaultInstance_m62857201F32F992458F0D816DF7B91DEB32AD858_inline (const RuntimeMethod* method);
// System.Int32 proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Pointer_get_Id_m0653E09B9E6A7D4F25CE204832027A4A3521BC27_inline (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method);
// System.Single proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_NormalizedX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Pointer_get_NormalizedX_m2E5C629CC71F370D7A8A97B4761AB801FFA3AFA6_inline (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method);
// System.Single proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_NormalizedY()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Pointer_get_NormalizedY_m319304960B30857DB5AA2332C86737F91368B776_inline (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method);
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeInt32Size(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeInt32Size_mAD9DFDB7A7F0A5C37E8B3807D781C34813AC0A42 (int32_t ___fieldNumber0, int32_t ___value1, const RuntimeMethod* method);
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeFloatSize(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeFloatSize_mBAE0E51F69F52D5A816258D7069EBFC08FA48E81 (int32_t ___fieldNumber0, float ___value1, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9 (float* __this, const RuntimeMethod* method);
// System.Boolean System.Int32::Equals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4 (int32_t* __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914 (float* __this, float ___obj0, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.GeneratedMessageLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::PrintField(System.String,System.Boolean,System.Object,System.IO.TextWriter)
inline void GeneratedMessageLite_2_PrintField_m638873B95E598C7021E09266718B2CF1107340CC (String_t* ___name0, bool ___hasValue1, RuntimeObject * ___value2, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___writer3, const RuntimeMethod* method)
{
	((  void (*) (String_t*, bool, RuntimeObject *, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 *, const RuntimeMethod*))GeneratedMessageLite_2_PrintField_m7BA730CA3507981347F811E40239ED25469B03EA_gshared)(___name0, ___hasValue1, ___value2, ___writer3, method);
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer::CreateBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Pointer_CreateBuilder_mC834A6424E0597A5CF4FD5C6A15101F0A4586AA4 (const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeFrom(Google.ProtocolBuffers.ByteString)
inline Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * AbstractBuilderLite_2_MergeFrom_m077F8BDC9A40BD2744DA305716D47D7FD4C02BE5 (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 * __this, ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * ___data0, const RuntimeMethod* method)
{
	return ((  Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * (*) (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 *, ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 *, const RuntimeMethod*))AbstractBuilderLite_2_MergeFrom_m848932FDF05B22660AC4A0B75F76E7E21F2DEBA5_gshared)(__this, ___data0, method);
}
// !0 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::BuildParsed()
inline Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC (GeneratedBuilderLite_2_t4CCAA45209A9F62F93E7444CEE497A4FF30A8397 * __this, const RuntimeMethod* method)
{
	return ((  Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * (*) (GeneratedBuilderLite_2_t4CCAA45209A9F62F93E7444CEE497A4FF30A8397 *, const RuntimeMethod*))GeneratedBuilderLite_2_BuildParsed_m19741B951A04F2AB187F1B591BEB8016710CE512_gshared)(__this, method);
}
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeFrom(Google.ProtocolBuffers.ByteString,Google.ProtocolBuffers.ExtensionRegistry)
inline Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * AbstractBuilderLite_2_MergeFrom_mBFA22BE8CEA616188C6E7F55E6174E39563EC193 (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 * __this, ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * ___data0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	return ((  Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * (*) (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 *, ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 *, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 *, const RuntimeMethod*))AbstractBuilderLite_2_MergeFrom_mD4BD3E78EB6B9100B6A89BB1C2C100F41683662A_gshared)(__this, ___data0, ___extensionRegistry1, method);
}
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeFrom(System.Byte[])
inline Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * AbstractBuilderLite_2_MergeFrom_mA162BF3102EA42D62F2EA3BC70A44C54C341464B (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	return ((  Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * (*) (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))AbstractBuilderLite_2_MergeFrom_mF29F5E9CAD54CF80D81CC9B39FA5CA7C9A7FD833_gshared)(__this, ___data0, method);
}
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeFrom(System.Byte[],Google.ProtocolBuffers.ExtensionRegistry)
inline Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * AbstractBuilderLite_2_MergeFrom_mF36F3941940332A01B21431C4BC0783BC925C1DC (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	return ((  Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * (*) (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 *, const RuntimeMethod*))AbstractBuilderLite_2_MergeFrom_m155751DE6A8DFC5EA4AE26ED07717B578C1F9ADD_gshared)(__this, ___data0, ___extensionRegistry1, method);
}
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeFrom(System.IO.Stream)
inline Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * AbstractBuilderLite_2_MergeFrom_m9E6216E1C08706C3E61356A7FB9A3FB0E52E2666 (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, const RuntimeMethod* method)
{
	return ((  Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * (*) (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 *, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, const RuntimeMethod*))AbstractBuilderLite_2_MergeFrom_m60F21E4382A29C32A7524BC37C304A61192D30B9_gshared)(__this, ___input0, method);
}
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
inline Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * AbstractBuilderLite_2_MergeFrom_mF34461DF32719A18A93F56C01A45DB0C65FB1645 (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	return ((  Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * (*) (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 *, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 *, const RuntimeMethod*))AbstractBuilderLite_2_MergeFrom_m5A1CEB9EF2C6BB405AEA1D2C32EC250FEDDE16A9_gshared)(__this, ___input0, ___extensionRegistry1, method);
}
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeDelimitedFrom(System.IO.Stream)
inline Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * AbstractBuilderLite_2_MergeDelimitedFrom_m8C049EEE34F924B068109BA2019AC2F28D765D2D (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, const RuntimeMethod* method)
{
	return ((  Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * (*) (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 *, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, const RuntimeMethod*))AbstractBuilderLite_2_MergeDelimitedFrom_m2CA5822E4FFA2F314454B2F84AEB525060BB5438_gshared)(__this, ___input0, method);
}
// !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeDelimitedFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
inline Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * AbstractBuilderLite_2_MergeDelimitedFrom_mDBA09B0371D1C1CBA64A902149E769C909F0757D (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	return ((  Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * (*) (AbstractBuilderLite_2_t9FD2FCC9A8465962E4D3B29AD3370902B3006D26 *, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 *, const RuntimeMethod*))AbstractBuilderLite_2_MergeDelimitedFrom_m0F0CC577C1D8C8D811FE68EF6772C21FB997D893_gshared)(__this, ___input0, ___extensionRegistry1, method);
}
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m0F5662CB752C8E24CA5919B00DD8448BB5F3178D (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method);
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer::CreateBuilder(proto.PhoneEvent/Types/MotionEvent/Types/Pointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Pointer_CreateBuilder_m0C934B225543E91863BFE8AFEBD8B212895987C3 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * ___prototype0, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::.ctor(proto.PhoneEvent/Types/MotionEvent/Types/Pointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m62919A1AA6A43B109F8D54FA56AAE25655CB7DC9 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * ___cloneFrom0, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer__ctor_mF32878B422D6F99E201063667223F5AC7DF91587 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method);
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::MakeReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_MakeReadOnly_m23A966E507120B3C30E8EC13AFE836C7C1DEDE5C (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::.ctor()
inline void GeneratedBuilderLite_2__ctor_m4D600BF5EDC880CCB2785A4CCCC95932A065C7D7 (GeneratedBuilderLite_2_t4CCAA45209A9F62F93E7444CEE497A4FF30A8397 * __this, const RuntimeMethod* method)
{
	((  void (*) (GeneratedBuilderLite_2_t4CCAA45209A9F62F93E7444CEE497A4FF30A8397 *, const RuntimeMethod*))GeneratedBuilderLite_2__ctor_m266FD052E0FAEA48FFE6BB592FC9038ACD969EB1_gshared)(__this, method);
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::PrepareBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Builder_PrepareBuilder_mD44AF9B90DA9836BEB57B0D32686E438F0FF51DD (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeFrom(Google.ProtocolBuffers.IMessageLite)
inline Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * GeneratedBuilderLite_2_MergeFrom_mFE12F3933FE4756BAEAA2465FA6F5E9C5DE72A77 (GeneratedBuilderLite_2_t4CCAA45209A9F62F93E7444CEE497A4FF30A8397 * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	return ((  Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * (*) (GeneratedBuilderLite_2_t4CCAA45209A9F62F93E7444CEE497A4FF30A8397 *, RuntimeObject*, const RuntimeMethod*))GeneratedBuilderLite_2_MergeFrom_m5CC013F304C8902E9761D27E07045648B3A1C2CD_gshared)(__this, ___other0, method);
}
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_HasId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Pointer_get_HasId_mFDC4D68483FBC3715FB3E435E7878AC5736F9BB9_inline (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::set_Id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Id_m60C9EB5A23AE4D14FC9A8CF7674AA9A311293151 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_HasNormalizedX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Pointer_get_HasNormalizedX_mF40107BFF8BC8A039179BE59D6F492078864DEE8_inline (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::set_NormalizedX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_NormalizedX_mC9705363CB6D83EC4895422AF010D922F0AD8D75 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_HasNormalizedY()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Pointer_get_HasNormalizedY_mAAF0E62830392472F09B8A85CD52337CD5FDC696_inline (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::set_NormalizedY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_NormalizedY_mB758ED8B16591A5215801E63E21FADDA17916C21 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, float ___value0, const RuntimeMethod* method);
// Google.ProtocolBuffers.ExtensionRegistry Google.ProtocolBuffers.ExtensionRegistry::get_Empty()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ExtensionRegistry_get_Empty_mC0CEC24AC7345586186C0641D64BAAC63413DAA9_inline (const RuntimeMethod* method);
// System.StringComparer System.StringComparer::get_Ordinal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_Ordinal_mF3B6370BEBD77351DB5218C867DCD669C47B8812_inline (const RuntimeMethod* method);
// System.Int32 System.Array::BinarySearch<System.String>(!!0[],!!0,System.Collections.Generic.IComparer`1<!!0>)
inline int32_t Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___array0, String_t* ___value1, RuntimeObject* ___comparer2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, String_t*, RuntimeObject*, const RuntimeMethod*))Array_BinarySearch_TisRuntimeObject_m9FE3DB1E9AFF3661EB4480AA77B7479F53E7581F_gshared)(___array0, ___value1, ___comparer2, method);
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::InvalidTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * InvalidProtocolBufferException_InvalidTag_m2B39E4AEE6E6B4DE200ED9B10F0128F140ADAF88 (const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.WireFormat::IsEndGroupTag(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WireFormat_IsEndGroupTag_mB577CA68ED4BEFC51C8E72F58E018D921140D929 (uint32_t ___tag0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::SetId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_SetId_m2BBB18A8949AE3D29C3FEB40F8C9E7BECC9F8840 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, int32_t ___value0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::SetNormalizedX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_SetNormalizedX_mABF34CEC072FA7F565FDB22FDB5B2A61ED612218 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, float ___value0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::SetNormalizedY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_SetNormalizedY_m58BDA533CBAD2377DE98C21A7AD316308C50D721 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, float ___value0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer__ctor_mF32878B422D6F99E201063667223F5AC7DF91587 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedMessageLite_2__ctor_mB94010B443D2F8CACD70FB9DE924F5CBC6FD8E7B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int memoizedSerializedSize = -1;
		__this->set_memoizedSerializedSize_12((-1));
		// private Pointer() { }
		GeneratedMessageLite_2__ctor_mB94010B443D2F8CACD70FB9DE924F5CBC6FD8E7B(__this, /*hidden argument*/GeneratedMessageLite_2__ctor_mB94010B443D2F8CACD70FB9DE924F5CBC6FD8E7B_RuntimeMethod_var);
		// private Pointer() { }
		return;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_get_DefaultInstance_m62857201F32F992458F0D816DF7B91DEB32AD858 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return defaultInstance; }
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = ((Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_StaticFields*)il2cpp_codegen_static_fields_for(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var))->get_defaultInstance_0();
		return L_0;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_DefaultInstanceForType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_get_DefaultInstanceForType_m147F09D3D3089D73D1ADD129B99E05436BB7AC4F (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return DefaultInstance; }
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0;
		L_0 = Pointer_get_DefaultInstance_m62857201F32F992458F0D816DF7B91DEB32AD858_inline(/*hidden argument*/NULL);
		return L_0;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_ThisMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_get_ThisMessage_m580A48AFB2B77A65B21D6778BBBB3212A0E5719E (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return this; }
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_HasId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pointer_get_HasId_mFDC4D68483FBC3715FB3E435E7878AC5736F9BB9 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasId; }
		bool L_0 = __this->get_hasId_4();
		return L_0;
	}
}
// System.Int32 proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pointer_get_Id_m0653E09B9E6A7D4F25CE204832027A4A3521BC27 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return id_; }
		int32_t L_0 = __this->get_id__5();
		return L_0;
	}
}
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_HasNormalizedX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pointer_get_HasNormalizedX_mF40107BFF8BC8A039179BE59D6F492078864DEE8 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasNormalizedX; }
		bool L_0 = __this->get_hasNormalizedX_7();
		return L_0;
	}
}
// System.Single proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_NormalizedX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Pointer_get_NormalizedX_m2E5C629CC71F370D7A8A97B4761AB801FFA3AFA6 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return normalizedX_; }
		float L_0 = __this->get_normalizedX__8();
		return L_0;
	}
}
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_HasNormalizedY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pointer_get_HasNormalizedY_mAAF0E62830392472F09B8A85CD52337CD5FDC696 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasNormalizedY; }
		bool L_0 = __this->get_hasNormalizedY_10();
		return L_0;
	}
}
// System.Single proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_NormalizedY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Pointer_get_NormalizedY_m319304960B30857DB5AA2332C86737F91368B776 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return normalizedY_; }
		float L_0 = __this->get_normalizedY__11();
		return L_0;
	}
}
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pointer_get_IsInitialized_mAC5F6C09795F65D66F2E28A30270F7821963CF49 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer::WriteTo(Google.ProtocolBuffers.ICodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer_WriteTo_m0AEF91A9475636CDF5A07A6D89EFCEE9A10756F9 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, RuntimeObject* ___output0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICodedOutputStream_t92C3F4E7AA3A87700C4151FEF30B0AF5BD0A4F9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	{
		// string[] field_names = _pointerFieldNames;
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ((Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_StaticFields*)il2cpp_codegen_static_fields_for(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var))->get__pointerFieldNames_1();
		V_0 = L_0;
		// if (hasId) {
		bool L_1 = __this->get_hasId_4();
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// output.WriteInt32(1, field_names[0], Id);
		RuntimeObject* L_2 = ___output0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6;
		L_6 = Pointer_get_Id_m0653E09B9E6A7D4F25CE204832027A4A3521BC27_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		InterfaceActionInvoker3< int32_t, String_t*, int32_t >::Invoke(2 /* System.Void Google.ProtocolBuffers.ICodedOutputStream::WriteInt32(System.Int32,System.String,System.Int32) */, ICodedOutputStream_t92C3F4E7AA3A87700C4151FEF30B0AF5BD0A4F9D_il2cpp_TypeInfo_var, L_2, 1, L_5, L_6);
	}

IL_001e:
	{
		// if (hasNormalizedX) {
		bool L_7 = __this->get_hasNormalizedX_7();
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		// output.WriteFloat(2, field_names[1], NormalizedX);
		RuntimeObject* L_8 = ___output0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 1;
		String_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		float L_12;
		L_12 = Pointer_get_NormalizedX_m2E5C629CC71F370D7A8A97B4761AB801FFA3AFA6_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		InterfaceActionInvoker3< int32_t, String_t*, float >::Invoke(0 /* System.Void Google.ProtocolBuffers.ICodedOutputStream::WriteFloat(System.Int32,System.String,System.Single) */, ICodedOutputStream_t92C3F4E7AA3A87700C4151FEF30B0AF5BD0A4F9D_il2cpp_TypeInfo_var, L_8, 2, L_11, L_12);
	}

IL_0036:
	{
		// if (hasNormalizedY) {
		bool L_13 = __this->get_hasNormalizedY_10();
		if (!L_13)
		{
			goto IL_004e;
		}
	}
	{
		// output.WriteFloat(3, field_names[2], NormalizedY);
		RuntimeObject* L_14 = ___output0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = 2;
		String_t* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		float L_18;
		L_18 = Pointer_get_NormalizedY_m319304960B30857DB5AA2332C86737F91368B776_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		InterfaceActionInvoker3< int32_t, String_t*, float >::Invoke(0 /* System.Void Google.ProtocolBuffers.ICodedOutputStream::WriteFloat(System.Int32,System.String,System.Single) */, ICodedOutputStream_t92C3F4E7AA3A87700C4151FEF30B0AF5BD0A4F9D_il2cpp_TypeInfo_var, L_14, 3, L_17, L_18);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Int32 proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_SerializedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pointer_get_SerializedSize_m3D553EAE77C18436EE13FDC798A1684BA968EAF7 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int size = memoizedSerializedSize;
		int32_t L_0 = __this->get_memoizedSerializedSize_12();
		V_0 = L_0;
		// if (size != -1) return size;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_000d;
		}
	}
	{
		// if (size != -1) return size;
		int32_t L_2 = V_0;
		return L_2;
	}

IL_000d:
	{
		// size = 0;
		V_0 = 0;
		// if (hasId) {
		bool L_3 = __this->get_hasId_4();
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// size += pb::CodedOutputStream.ComputeInt32Size(1, Id);
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = Pointer_get_Id_m0653E09B9E6A7D4F25CE204832027A4A3521BC27_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = CodedOutputStream_ComputeInt32Size_mAD9DFDB7A7F0A5C37E8B3807D781C34813AC0A42(1, L_5, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_6));
	}

IL_0026:
	{
		// if (hasNormalizedX) {
		bool L_7 = __this->get_hasNormalizedX_7();
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		// size += pb::CodedOutputStream.ComputeFloatSize(2, NormalizedX);
		int32_t L_8 = V_0;
		float L_9;
		L_9 = Pointer_get_NormalizedX_m2E5C629CC71F370D7A8A97B4761AB801FFA3AFA6_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = CodedOutputStream_ComputeFloatSize_mBAE0E51F69F52D5A816258D7069EBFC08FA48E81(2, L_9, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_10));
	}

IL_003d:
	{
		// if (hasNormalizedY) {
		bool L_11 = __this->get_hasNormalizedY_10();
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		// size += pb::CodedOutputStream.ComputeFloatSize(3, NormalizedY);
		int32_t L_12 = V_0;
		float L_13;
		L_13 = Pointer_get_NormalizedY_m319304960B30857DB5AA2332C86737F91368B776_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_tD867115083E6EF3CC4115B4520F336B9125C9388_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = CodedOutputStream_ComputeFloatSize_mBAE0E51F69F52D5A816258D7069EBFC08FA48E81(3, L_13, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_14));
	}

IL_0054:
	{
		// memoizedSerializedSize = size;
		int32_t L_15 = V_0;
		__this->set_memoizedSerializedSize_12(L_15);
		// return size;
		int32_t L_16 = V_0;
		return L_16;
	}
}
// System.Int32 proto.PhoneEvent/Types/MotionEvent/Types/Pointer::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pointer_GetHashCode_mE36158971C015E66F25F35F9098CD03CFE214349 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int hash = GetType().GetHashCode();
		Type_t * L_0;
		L_0 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		// if (hasId) hash ^= id_.GetHashCode();
		bool L_2 = __this->get_hasId_4();
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// if (hasId) hash ^= id_.GetHashCode();
		int32_t L_3 = V_0;
		int32_t* L_4 = __this->get_address_of_id__5();
		int32_t L_5;
		L_5 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)L_4, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_3^(int32_t)L_5));
	}

IL_0022:
	{
		// if (hasNormalizedX) hash ^= normalizedX_.GetHashCode();
		bool L_6 = __this->get_hasNormalizedX_7();
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// if (hasNormalizedX) hash ^= normalizedX_.GetHashCode();
		int32_t L_7 = V_0;
		float* L_8 = __this->get_address_of_normalizedX__8();
		int32_t L_9;
		L_9 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)L_8, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_7^(int32_t)L_9));
	}

IL_0038:
	{
		// if (hasNormalizedY) hash ^= normalizedY_.GetHashCode();
		bool L_10 = __this->get_hasNormalizedY_10();
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		// if (hasNormalizedY) hash ^= normalizedY_.GetHashCode();
		int32_t L_11 = V_0;
		float* L_12 = __this->get_address_of_normalizedY__11();
		int32_t L_13;
		L_13 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)L_12, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_11^(int32_t)L_13));
	}

IL_004e:
	{
		// return hash;
		int32_t L_14 = V_0;
		return L_14;
	}
}
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pointer_Equals_m59A643A5BCE7F169709DE39A55529C14B855473A (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * V_0 = NULL;
	{
		// Pointer other = obj as Pointer;
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 *)IsInstSealed((RuntimeObject*)L_0, Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var));
		// if (other == null) return false;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// if (other == null) return false;
		return (bool)0;
	}

IL_000c:
	{
		// if (hasId != other.hasId || (hasId && !id_.Equals(other.id_))) return false;
		bool L_2 = __this->get_hasId_4();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = L_3->get_hasId_4();
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0035;
		}
	}
	{
		bool L_5 = __this->get_hasId_4();
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		int32_t* L_6 = __this->get_address_of_id__5();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_id__5();
		bool L_9;
		L_9 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)L_6, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0037;
		}
	}

IL_0035:
	{
		// if (hasId != other.hasId || (hasId && !id_.Equals(other.id_))) return false;
		return (bool)0;
	}

IL_0037:
	{
		// if (hasNormalizedX != other.hasNormalizedX || (hasNormalizedX && !normalizedX_.Equals(other.normalizedX_))) return false;
		bool L_10 = __this->get_hasNormalizedX_7();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = L_11->get_hasNormalizedX_7();
		if ((!(((uint32_t)L_10) == ((uint32_t)L_12))))
		{
			goto IL_0060;
		}
	}
	{
		bool L_13 = __this->get_hasNormalizedX_7();
		if (!L_13)
		{
			goto IL_0062;
		}
	}
	{
		float* L_14 = __this->get_address_of_normalizedX__8();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_15 = V_0;
		NullCheck(L_15);
		float L_16 = L_15->get_normalizedX__8();
		bool L_17;
		L_17 = Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914((float*)L_14, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0062;
		}
	}

IL_0060:
	{
		// if (hasNormalizedX != other.hasNormalizedX || (hasNormalizedX && !normalizedX_.Equals(other.normalizedX_))) return false;
		return (bool)0;
	}

IL_0062:
	{
		// if (hasNormalizedY != other.hasNormalizedY || (hasNormalizedY && !normalizedY_.Equals(other.normalizedY_))) return false;
		bool L_18 = __this->get_hasNormalizedY_10();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_19 = V_0;
		NullCheck(L_19);
		bool L_20 = L_19->get_hasNormalizedY_10();
		if ((!(((uint32_t)L_18) == ((uint32_t)L_20))))
		{
			goto IL_008b;
		}
	}
	{
		bool L_21 = __this->get_hasNormalizedY_10();
		if (!L_21)
		{
			goto IL_008d;
		}
	}
	{
		float* L_22 = __this->get_address_of_normalizedY__11();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_23 = V_0;
		NullCheck(L_23);
		float L_24 = L_23->get_normalizedY__11();
		bool L_25;
		L_25 = Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914((float*)L_22, L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_008d;
		}
	}

IL_008b:
	{
		// if (hasNormalizedY != other.hasNormalizedY || (hasNormalizedY && !normalizedY_.Equals(other.normalizedY_))) return false;
		return (bool)0;
	}

IL_008d:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer::PrintTo(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer_PrintTo_m9A18A64ADB38319F3C8E66FCD5992CFF2914AA04 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedMessageLite_2_PrintField_m638873B95E598C7021E09266718B2CF1107340CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1ADA0A4B45FFBFCF792C61B451AF43A6C341E292);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9167D3A5FE683F0DD7B16CE29BAFE3083934E11B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PrintField("id", hasId, id_, writer);
		bool L_0 = __this->get_hasId_4();
		int32_t L_1 = __this->get_id__5();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_4 = ___writer0;
		GeneratedMessageLite_2_PrintField_m638873B95E598C7021E09266718B2CF1107340CC(_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, L_0, L_3, L_4, /*hidden argument*/GeneratedMessageLite_2_PrintField_m638873B95E598C7021E09266718B2CF1107340CC_RuntimeMethod_var);
		// PrintField("normalized_x", hasNormalizedX, normalizedX_, writer);
		bool L_5 = __this->get_hasNormalizedX_7();
		float L_6 = __this->get_normalizedX__8();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_7);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_9 = ___writer0;
		GeneratedMessageLite_2_PrintField_m638873B95E598C7021E09266718B2CF1107340CC(_stringLiteral9167D3A5FE683F0DD7B16CE29BAFE3083934E11B, L_5, L_8, L_9, /*hidden argument*/GeneratedMessageLite_2_PrintField_m638873B95E598C7021E09266718B2CF1107340CC_RuntimeMethod_var);
		// PrintField("normalized_y", hasNormalizedY, normalizedY_, writer);
		bool L_10 = __this->get_hasNormalizedY_10();
		float L_11 = __this->get_normalizedY__11();
		float L_12 = L_11;
		RuntimeObject * L_13 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_12);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_14 = ___writer0;
		GeneratedMessageLite_2_PrintField_m638873B95E598C7021E09266718B2CF1107340CC(_stringLiteral1ADA0A4B45FFBFCF792C61B451AF43A6C341E292, L_10, L_13, L_14, /*hidden argument*/GeneratedMessageLite_2_PrintField_m638873B95E598C7021E09266718B2CF1107340CC_RuntimeMethod_var);
		// }
		return;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseFrom(Google.ProtocolBuffers.ByteString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_ParseFrom_m6F6413B7F1A03BF8643472FF0F9A79AD90682A62 (ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractBuilderLite_2_MergeFrom_m077F8BDC9A40BD2744DA305716D47D7FD4C02BE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((Builder) CreateBuilder().MergeFrom(data)).BuildParsed();
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0;
		L_0 = Pointer_CreateBuilder_mC834A6424E0597A5CF4FD5C6A15101F0A4586AA4(/*hidden argument*/NULL);
		ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * L_1 = ___data0;
		NullCheck(L_0);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_2;
		L_2 = AbstractBuilderLite_2_MergeFrom_m077F8BDC9A40BD2744DA305716D47D7FD4C02BE5(L_0, L_1, /*hidden argument*/AbstractBuilderLite_2_MergeFrom_m077F8BDC9A40BD2744DA305716D47D7FD4C02BE5_RuntimeMethod_var);
		NullCheck(L_2);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_3;
		L_3 = GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC(L_2, /*hidden argument*/GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		return L_3;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseFrom(Google.ProtocolBuffers.ByteString,Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_ParseFrom_m311F566A8FF8A1CB438F0D3F9010F8E060B9344F (ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * ___data0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractBuilderLite_2_MergeFrom_mBFA22BE8CEA616188C6E7F55E6174E39563EC193_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((Builder) CreateBuilder().MergeFrom(data, extensionRegistry)).BuildParsed();
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0;
		L_0 = Pointer_CreateBuilder_mC834A6424E0597A5CF4FD5C6A15101F0A4586AA4(/*hidden argument*/NULL);
		ByteString_tE062477CE3678C08107243ABF1DBB6FED94AA586 * L_1 = ___data0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_2 = ___extensionRegistry1;
		NullCheck(L_0);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_3;
		L_3 = AbstractBuilderLite_2_MergeFrom_mBFA22BE8CEA616188C6E7F55E6174E39563EC193(L_0, L_1, L_2, /*hidden argument*/AbstractBuilderLite_2_MergeFrom_mBFA22BE8CEA616188C6E7F55E6174E39563EC193_RuntimeMethod_var);
		NullCheck(L_3);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_4;
		L_4 = GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC(L_3, /*hidden argument*/GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		return L_4;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseFrom(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_ParseFrom_m4D4305E8718862C444BFDB3E9DC28C7CF8535245 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractBuilderLite_2_MergeFrom_mA162BF3102EA42D62F2EA3BC70A44C54C341464B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((Builder) CreateBuilder().MergeFrom(data)).BuildParsed();
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0;
		L_0 = Pointer_CreateBuilder_mC834A6424E0597A5CF4FD5C6A15101F0A4586AA4(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___data0;
		NullCheck(L_0);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_2;
		L_2 = AbstractBuilderLite_2_MergeFrom_mA162BF3102EA42D62F2EA3BC70A44C54C341464B(L_0, L_1, /*hidden argument*/AbstractBuilderLite_2_MergeFrom_mA162BF3102EA42D62F2EA3BC70A44C54C341464B_RuntimeMethod_var);
		NullCheck(L_2);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_3;
		L_3 = GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC(L_2, /*hidden argument*/GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		return L_3;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseFrom(System.Byte[],Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_ParseFrom_m301B899BA0763CAFCF5650B746A0B12A533AA407 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractBuilderLite_2_MergeFrom_mF36F3941940332A01B21431C4BC0783BC925C1DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((Builder) CreateBuilder().MergeFrom(data, extensionRegistry)).BuildParsed();
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0;
		L_0 = Pointer_CreateBuilder_mC834A6424E0597A5CF4FD5C6A15101F0A4586AA4(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___data0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_2 = ___extensionRegistry1;
		NullCheck(L_0);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_3;
		L_3 = AbstractBuilderLite_2_MergeFrom_mF36F3941940332A01B21431C4BC0783BC925C1DC(L_0, L_1, L_2, /*hidden argument*/AbstractBuilderLite_2_MergeFrom_mF36F3941940332A01B21431C4BC0783BC925C1DC_RuntimeMethod_var);
		NullCheck(L_3);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_4;
		L_4 = GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC(L_3, /*hidden argument*/GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		return L_4;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseFrom(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_ParseFrom_mF4C1CDC9A8A253793C6C60FC2A22B14E2BF920B3 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractBuilderLite_2_MergeFrom_m9E6216E1C08706C3E61356A7FB9A3FB0E52E2666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((Builder) CreateBuilder().MergeFrom(input)).BuildParsed();
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0;
		L_0 = Pointer_CreateBuilder_mC834A6424E0597A5CF4FD5C6A15101F0A4586AA4(/*hidden argument*/NULL);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = ___input0;
		NullCheck(L_0);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_2;
		L_2 = AbstractBuilderLite_2_MergeFrom_m9E6216E1C08706C3E61356A7FB9A3FB0E52E2666(L_0, L_1, /*hidden argument*/AbstractBuilderLite_2_MergeFrom_m9E6216E1C08706C3E61356A7FB9A3FB0E52E2666_RuntimeMethod_var);
		NullCheck(L_2);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_3;
		L_3 = GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC(L_2, /*hidden argument*/GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		return L_3;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_ParseFrom_m6493BE21AE470C16598C307A72763C395EDA534B (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractBuilderLite_2_MergeFrom_mF34461DF32719A18A93F56C01A45DB0C65FB1645_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((Builder) CreateBuilder().MergeFrom(input, extensionRegistry)).BuildParsed();
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0;
		L_0 = Pointer_CreateBuilder_mC834A6424E0597A5CF4FD5C6A15101F0A4586AA4(/*hidden argument*/NULL);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = ___input0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_2 = ___extensionRegistry1;
		NullCheck(L_0);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_3;
		L_3 = AbstractBuilderLite_2_MergeFrom_mF34461DF32719A18A93F56C01A45DB0C65FB1645(L_0, L_1, L_2, /*hidden argument*/AbstractBuilderLite_2_MergeFrom_mF34461DF32719A18A93F56C01A45DB0C65FB1645_RuntimeMethod_var);
		NullCheck(L_3);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_4;
		L_4 = GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC(L_3, /*hidden argument*/GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		return L_4;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseDelimitedFrom(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_ParseDelimitedFrom_mC9A893C18B970CDADA83C636B2E7494C187D3C24 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractBuilderLite_2_MergeDelimitedFrom_m8C049EEE34F924B068109BA2019AC2F28D765D2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CreateBuilder().MergeDelimitedFrom(input).BuildParsed();
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0;
		L_0 = Pointer_CreateBuilder_mC834A6424E0597A5CF4FD5C6A15101F0A4586AA4(/*hidden argument*/NULL);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = ___input0;
		NullCheck(L_0);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_2;
		L_2 = AbstractBuilderLite_2_MergeDelimitedFrom_m8C049EEE34F924B068109BA2019AC2F28D765D2D(L_0, L_1, /*hidden argument*/AbstractBuilderLite_2_MergeDelimitedFrom_m8C049EEE34F924B068109BA2019AC2F28D765D2D_RuntimeMethod_var);
		NullCheck(L_2);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_3;
		L_3 = GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC(L_2, /*hidden argument*/GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		return L_3;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseDelimitedFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_ParseDelimitedFrom_m8DA5AD208AA063332836C3FB84F358E8C5A1749F (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractBuilderLite_2_MergeDelimitedFrom_mDBA09B0371D1C1CBA64A902149E769C909F0757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CreateBuilder().MergeDelimitedFrom(input, extensionRegistry).BuildParsed();
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0;
		L_0 = Pointer_CreateBuilder_mC834A6424E0597A5CF4FD5C6A15101F0A4586AA4(/*hidden argument*/NULL);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = ___input0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_2 = ___extensionRegistry1;
		NullCheck(L_0);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_3;
		L_3 = AbstractBuilderLite_2_MergeDelimitedFrom_mDBA09B0371D1C1CBA64A902149E769C909F0757D(L_0, L_1, L_2, /*hidden argument*/AbstractBuilderLite_2_MergeDelimitedFrom_mDBA09B0371D1C1CBA64A902149E769C909F0757D_RuntimeMethod_var);
		NullCheck(L_3);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_4;
		L_4 = GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC(L_3, /*hidden argument*/GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		return L_4;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseFrom(Google.ProtocolBuffers.ICodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_ParseFrom_m7F06345AA829BFAB5829D43F3FEA31EA2F10B8F4 (RuntimeObject* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((Builder) CreateBuilder().MergeFrom(input)).BuildParsed();
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0;
		L_0 = Pointer_CreateBuilder_mC834A6424E0597A5CF4FD5C6A15101F0A4586AA4(/*hidden argument*/NULL);
		RuntimeObject* L_1 = ___input0;
		NullCheck(L_0);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_2;
		L_2 = VirtFuncInvoker1< Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 *, RuntimeObject* >::Invoke(16 /* !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeFrom(Google.ProtocolBuffers.ICodedInputStream) */, L_0, L_1);
		NullCheck(L_2);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_3;
		L_3 = GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC(L_2, /*hidden argument*/GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		return L_3;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_ParseFrom_mA83B1A00485B236FA63C25E1C7CB04AC391F5485 (RuntimeObject* ___input0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((Builder) CreateBuilder().MergeFrom(input, extensionRegistry)).BuildParsed();
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0;
		L_0 = Pointer_CreateBuilder_mC834A6424E0597A5CF4FD5C6A15101F0A4586AA4(/*hidden argument*/NULL);
		RuntimeObject* L_1 = ___input0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_2 = ___extensionRegistry1;
		NullCheck(L_0);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_3;
		L_3 = VirtFuncInvoker2< Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 *, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * >::Invoke(15 /* !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry) */, L_0, L_1, L_2);
		NullCheck(L_3);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_4;
		L_4 = GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC(L_3, /*hidden argument*/GeneratedBuilderLite_2_BuildParsed_m17B980D7B910ACF2AC7C97F03ACE5E7E2B34BCEC_RuntimeMethod_var);
		return L_4;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::MakeReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_MakeReadOnly_m23A966E507120B3C30E8EC13AFE836C7C1DEDE5C (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer::CreateBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Pointer_CreateBuilder_mC834A6424E0597A5CF4FD5C6A15101F0A4586AA4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Builder CreateBuilder() { return new Builder(); }
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0 = (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 *)il2cpp_codegen_object_new(Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302_il2cpp_TypeInfo_var);
		Builder__ctor_m0F5662CB752C8E24CA5919B00DD8448BB5F3178D(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ToBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Pointer_ToBuilder_m8922446B5245CF75B5CBF7C4A67FC83BE225E09B (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Builder ToBuilder() { return CreateBuilder(this); }
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0;
		L_0 = Pointer_CreateBuilder_m0C934B225543E91863BFE8AFEBD8B212895987C3(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer::CreateBuilderForType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Pointer_CreateBuilderForType_m967101928333FAFA0BE0C85ECF2EF04CF3887ABA (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Builder CreateBuilderForType() { return new Builder(); }
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_0 = (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 *)il2cpp_codegen_object_new(Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302_il2cpp_TypeInfo_var);
		Builder__ctor_m0F5662CB752C8E24CA5919B00DD8448BB5F3178D(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer::CreateBuilder(proto.PhoneEvent/Types/MotionEvent/Types/Pointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Pointer_CreateBuilder_m0C934B225543E91863BFE8AFEBD8B212895987C3 (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * ___prototype0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Builder(prototype);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = ___prototype0;
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_1 = (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 *)il2cpp_codegen_object_new(Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302_il2cpp_TypeInfo_var);
		Builder__ctor_m62919A1AA6A43B109F8D54FA56AAE25655CB7DC9(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pointer__cctor_mD2BB44B588C441305487BE503DD44C9066FEC24E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhoneEvent_t8977146DDA5AF16F3661CAAFF1E4DA378BA2C70E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____525E5C507ECFAFD8583A9B2B3F0AE7C111AD6A295E795617048903DD37AB3514_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1ADA0A4B45FFBFCF792C61B451AF43A6C341E292);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9167D3A5FE683F0DD7B16CE29BAFE3083934E11B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Pointer defaultInstance = new Pointer().MakeReadOnly();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 *)il2cpp_codegen_object_new(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Pointer__ctor_mF32878B422D6F99E201063667223F5AC7DF91587(L_0, /*hidden argument*/NULL);
		NullCheck(L_0);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_1;
		L_1 = Pointer_MakeReadOnly_m23A966E507120B3C30E8EC13AFE836C7C1DEDE5C(L_0, /*hidden argument*/NULL);
		((Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_StaticFields*)il2cpp_codegen_static_fields_for(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var))->set_defaultInstance_0(L_1);
		// private static readonly string[] _pointerFieldNames = new string[] { "id", "normalized_x", "normalized_y" };
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral9167D3A5FE683F0DD7B16CE29BAFE3083934E11B);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral9167D3A5FE683F0DD7B16CE29BAFE3083934E11B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral1ADA0A4B45FFBFCF792C61B451AF43A6C341E292);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1ADA0A4B45FFBFCF792C61B451AF43A6C341E292);
		((Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_StaticFields*)il2cpp_codegen_static_fields_for(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var))->set__pointerFieldNames_1(L_5);
		// private static readonly uint[] _pointerFieldTags = new uint[] { 8, 21, 29 };
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_6 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)3);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_7 = L_6;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____525E5C507ECFAFD8583A9B2B3F0AE7C111AD6A295E795617048903DD37AB3514_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		((Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_StaticFields*)il2cpp_codegen_static_fields_for(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var))->set__pointerFieldTags_2(L_7);
		// object.ReferenceEquals(global::proto.Proto.PhoneEvent.Descriptor, null);
		IL2CPP_RUNTIME_CLASS_INIT(PhoneEvent_t8977146DDA5AF16F3661CAAFF1E4DA378BA2C70E_il2cpp_TypeInfo_var);
		RuntimeObject * L_9 = ((PhoneEvent_t8977146DDA5AF16F3661CAAFF1E4DA378BA2C70E_StaticFields*)il2cpp_codegen_static_fields_for(PhoneEvent_t8977146DDA5AF16F3661CAAFF1E4DA378BA2C70E_il2cpp_TypeInfo_var))->get_Descriptor_0();
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
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::get_ThisBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_get_ThisBuilder_m2278BDF1965CAD020EA8D8232F7FA0634C2BB46E (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	{
		// get { return this; }
		return __this;
	}
}
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m0F5662CB752C8E24CA5919B00DD8448BB5F3178D (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2__ctor_m4D600BF5EDC880CCB2785A4CCCC95932A065C7D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Builder() {
		GeneratedBuilderLite_2__ctor_m4D600BF5EDC880CCB2785A4CCCC95932A065C7D7(__this, /*hidden argument*/GeneratedBuilderLite_2__ctor_m4D600BF5EDC880CCB2785A4CCCC95932A065C7D7_RuntimeMethod_var);
		// result = DefaultInstance;
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0;
		L_0 = Pointer_get_DefaultInstance_m62857201F32F992458F0D816DF7B91DEB32AD858_inline(/*hidden argument*/NULL);
		__this->set_result_1(L_0);
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// }
		return;
	}
}
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::.ctor(proto.PhoneEvent/Types/MotionEvent/Types/Pointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m62919A1AA6A43B109F8D54FA56AAE25655CB7DC9 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * ___cloneFrom0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2__ctor_m4D600BF5EDC880CCB2785A4CCCC95932A065C7D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal Builder(Pointer cloneFrom) {
		GeneratedBuilderLite_2__ctor_m4D600BF5EDC880CCB2785A4CCCC95932A065C7D7(__this, /*hidden argument*/GeneratedBuilderLite_2__ctor_m4D600BF5EDC880CCB2785A4CCCC95932A065C7D7_RuntimeMethod_var);
		// result = cloneFrom;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = ___cloneFrom0;
		__this->set_result_1(L_0);
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// }
		return;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::PrepareBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Builder_PrepareBuilder_mD44AF9B90DA9836BEB57B0D32686E438F0FF51DD (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * V_0 = NULL;
	{
		// if (resultIsReadOnly) {
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// Pointer original = result;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_1 = __this->get_result_1();
		V_0 = L_1;
		// result = new Pointer();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_2 = (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 *)il2cpp_codegen_object_new(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Pointer__ctor_mF32878B422D6F99E201063667223F5AC7DF91587(L_2, /*hidden argument*/NULL);
		__this->set_result_1(L_2);
		// resultIsReadOnly = false;
		__this->set_resultIsReadOnly_0((bool)0);
		// MergeFrom(original);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_3 = V_0;
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_4;
		L_4 = VirtFuncInvoker1< Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 *, Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeFrom(!0) */, __this, L_3);
	}

IL_0029:
	{
		// return result;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_5 = __this->get_result_1();
		return L_5;
	}
}
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_IsInitialized_m212BA594719A427BFCF2496C3ED0ED7F010FF70C (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.IsInitialized; }
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean Google.ProtocolBuffers.AbstractMessageLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::get_IsInitialized() */, L_0);
		return L_1;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::get_MessageBeingBuilt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Builder_get_MessageBeingBuilt_m5B3B93AED1B027D44F5D2AA73F112A17EEB1F3D9 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	{
		// get { return PrepareBuilder(); }
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0;
		L_0 = Builder_PrepareBuilder_mD44AF9B90DA9836BEB57B0D32686E438F0FF51DD(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_Clear_mC3F19FD7B65A3651EF5DEA5841B98608049A0BEA (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// result = DefaultInstance;
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0;
		L_0 = Pointer_get_DefaultInstance_m62857201F32F992458F0D816DF7B91DEB32AD858_inline(/*hidden argument*/NULL);
		__this->set_result_1(L_0);
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_Clone_m67246EF311B3B99AA2CDCA5460856A379E76A506 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (resultIsReadOnly) {
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return new Builder(result);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_1 = __this->get_result_1();
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_2 = (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 *)il2cpp_codegen_object_new(Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302_il2cpp_TypeInfo_var);
		Builder__ctor_m62919A1AA6A43B109F8D54FA56AAE25655CB7DC9(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		// return new Builder().MergeFrom(result);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_3 = (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 *)il2cpp_codegen_object_new(Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302_il2cpp_TypeInfo_var);
		Builder__ctor_m0F5662CB752C8E24CA5919B00DD8448BB5F3178D(L_3, /*hidden argument*/NULL);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_4 = __this->get_result_1();
		NullCheck(L_3);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_5;
		L_5 = VirtFuncInvoker1< Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 *, Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeFrom(!0) */, L_3, L_4);
		return L_5;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::get_DefaultInstanceForType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Builder_get_DefaultInstanceForType_m3195B6663C3153978898274A6202AB335DEB255A (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return global::proto.PhoneEvent.Types.MotionEvent.Types.Pointer.DefaultInstance; }
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0;
		L_0 = Pointer_get_DefaultInstance_m62857201F32F992458F0D816DF7B91DEB32AD858_inline(/*hidden argument*/NULL);
		return L_0;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::BuildPartial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Builder_BuildPartial_m75F65777E64D9FF8A732EC8B83C61051D7A0C25E (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	{
		// if (resultIsReadOnly) {
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return result;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_1 = __this->get_result_1();
		return L_1;
	}

IL_000f:
	{
		// resultIsReadOnly = true;
		__this->set_resultIsReadOnly_0((bool)1);
		// return result.MakeReadOnly();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_3;
		L_3 = Pointer_MakeReadOnly_m23A966E507120B3C30E8EC13AFE836C7C1DEDE5C(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::MergeFrom(Google.ProtocolBuffers.IMessageLite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_MergeFrom_m6495906E302B0360E5BEA17CBC5162911B65DB65 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeneratedBuilderLite_2_MergeFrom_mFE12F3933FE4756BAEAA2465FA6F5E9C5DE72A77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other is Pointer) {
		RuntimeObject* L_0 = ___other0;
		if (!((Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 *)IsInstSealed((RuntimeObject*)L_0, Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		// return MergeFrom((Pointer) other);
		RuntimeObject* L_1 = ___other0;
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_2;
		L_2 = VirtFuncInvoker1< Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 *, Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeFrom(!0) */, __this, ((Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 *)CastclassSealed((RuntimeObject*)L_1, Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0015:
	{
		// base.MergeFrom(other);
		RuntimeObject* L_3 = ___other0;
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_4;
		L_4 = GeneratedBuilderLite_2_MergeFrom_mFE12F3933FE4756BAEAA2465FA6F5E9C5DE72A77(__this, L_3, /*hidden argument*/GeneratedBuilderLite_2_MergeFrom_mFE12F3933FE4756BAEAA2465FA6F5E9C5DE72A77_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::MergeFrom(proto.PhoneEvent/Types/MotionEvent/Types/Pointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_MergeFrom_mC0A99F6FBB4CB67CE99D9CE47A8A740538DDF5F4 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other == global::proto.PhoneEvent.Types.MotionEvent.Types.Pointer.DefaultInstance) return this;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = ___other0;
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_1;
		L_1 = Pointer_get_DefaultInstance_m62857201F32F992458F0D816DF7B91DEB32AD858_inline(/*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 *)L_0) == ((RuntimeObject*)(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 *)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// if (other == global::proto.PhoneEvent.Types.MotionEvent.Types.Pointer.DefaultInstance) return this;
		return __this;
	}

IL_000a:
	{
		// PrepareBuilder();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_2;
		L_2 = Builder_PrepareBuilder_mD44AF9B90DA9836BEB57B0D32686E438F0FF51DD(__this, /*hidden argument*/NULL);
		// if (other.HasId) {
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_3 = ___other0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Pointer_get_HasId_mFDC4D68483FBC3715FB3E435E7878AC5736F9BB9_inline(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// Id = other.Id;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_5 = ___other0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Pointer_get_Id_m0653E09B9E6A7D4F25CE204832027A4A3521BC27_inline(L_5, /*hidden argument*/NULL);
		Builder_set_Id_m60C9EB5A23AE4D14FC9A8CF7674AA9A311293151(__this, L_6, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// if (other.HasNormalizedX) {
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_7 = ___other0;
		NullCheck(L_7);
		bool L_8;
		L_8 = Pointer_get_HasNormalizedX_mF40107BFF8BC8A039179BE59D6F492078864DEE8_inline(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		// NormalizedX = other.NormalizedX;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_9 = ___other0;
		NullCheck(L_9);
		float L_10;
		L_10 = Pointer_get_NormalizedX_m2E5C629CC71F370D7A8A97B4761AB801FFA3AFA6_inline(L_9, /*hidden argument*/NULL);
		Builder_set_NormalizedX_mC9705363CB6D83EC4895422AF010D922F0AD8D75(__this, L_10, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// if (other.HasNormalizedY) {
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_11 = ___other0;
		NullCheck(L_11);
		bool L_12;
		L_12 = Pointer_get_HasNormalizedY_mAAF0E62830392472F09B8A85CD52337CD5FDC696_inline(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		// NormalizedY = other.NormalizedY;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_13 = ___other0;
		NullCheck(L_13);
		float L_14;
		L_14 = Pointer_get_NormalizedY_m319304960B30857DB5AA2332C86737F91368B776_inline(L_13, /*hidden argument*/NULL);
		Builder_set_NormalizedY_mB758ED8B16591A5215801E63E21FADDA17916C21(__this, L_14, /*hidden argument*/NULL);
	}

IL_004d:
	{
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_MergeFrom_m7FA7168E7BF09135FB16F0204621C33D01C4C2F8 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, RuntimeObject* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return MergeFrom(input, pb::ExtensionRegistry.Empty);
		RuntimeObject* L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var);
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_1;
		L_1 = ExtensionRegistry_get_Empty_mC0CEC24AC7345586186C0641D64BAAC63413DAA9_inline(/*hidden argument*/NULL);
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_2;
		L_2 = VirtFuncInvoker2< Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 *, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * >::Invoke(15 /* !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry) */, __this, L_0, L_1);
		return L_2;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_MergeFrom_mAE0A78C84760ED6705E35C312E4AB0D2E684C036 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, RuntimeObject* ___input0, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ___extensionRegistry1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// PrepareBuilder();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0;
		L_0 = Builder_PrepareBuilder_mD44AF9B90DA9836BEB57B0D32686E438F0FF51DD(__this, /*hidden argument*/NULL);
		goto IL_00cf;
	}

IL_000c:
	{
		// if(tag == 0 && field_name != null) {
		uint32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		// int field_ordinal = global::System.Array.BinarySearch(_pointerFieldNames, field_name, global::System.StringComparer.Ordinal);
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ((Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_StaticFields*)il2cpp_codegen_static_fields_for(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var))->get__pointerFieldNames_1();
		String_t* L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_5;
		L_5 = StringComparer_get_Ordinal_mF3B6370BEBD77351DB5218C867DCD669C47B8812_inline(/*hidden argument*/NULL);
		int32_t L_6;
		L_6 = Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD(L_3, L_4, L_5, /*hidden argument*/Array_BinarySearch_TisString_t_m51139CD87D348831BCE02D1D95F0405B180C3CCD_RuntimeMethod_var);
		V_2 = L_6;
		// if(field_ordinal >= 0)
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		// tag = _pointerFieldTags[field_ordinal];
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_8 = ((Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_StaticFields*)il2cpp_codegen_static_fields_for(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var))->get__pointerFieldTags_2();
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = L_11;
		goto IL_0041;
	}

IL_0031:
	{
		// ParseUnknownField(input, extensionRegistry, tag, field_name);
		RuntimeObject* L_12 = ___input0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_13 = ___extensionRegistry1;
		uint32_t L_14 = V_0;
		String_t* L_15 = V_1;
		bool L_16;
		L_16 = VirtFuncInvoker4< bool, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 *, uint32_t, String_t* >::Invoke(27 /* System.Boolean Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::ParseUnknownField(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry,System.UInt32,System.String) */, __this, L_12, L_13, L_14, L_15);
		// continue;
		goto IL_00cf;
	}

IL_0041:
	{
		uint32_t L_17 = V_0;
		if ((!(((uint32_t)L_17) <= ((uint32_t)8))))
		{
			goto IL_004e;
		}
	}
	{
		uint32_t L_18 = V_0;
		if (!L_18)
		{
			goto IL_005a;
		}
	}
	{
		uint32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)8)))
		{
			goto IL_0077;
		}
	}
	{
		goto IL_0060;
	}

IL_004e:
	{
		uint32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)21))))
		{
			goto IL_0095;
		}
	}
	{
		uint32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)29))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_0060;
	}

IL_005a:
	{
		// throw pb::InvalidProtocolBufferException.InvalidTag();
		InvalidProtocolBufferException_t8B6FB92234E06E9AE616706CA2627E036FB1CF60 * L_22;
		L_22 = InvalidProtocolBufferException_InvalidTag_m2B39E4AEE6E6B4DE200ED9B10F0128F140ADAF88(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Builder_MergeFrom_mAE0A78C84760ED6705E35C312E4AB0D2E684C036_RuntimeMethod_var)));
	}

IL_0060:
	{
		// if (pb::WireFormat.IsEndGroupTag(tag)) {
		uint32_t L_23 = V_0;
		bool L_24;
		L_24 = WireFormat_IsEndGroupTag_mB577CA68ED4BEFC51C8E72F58E018D921140D929(L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_006a;
		}
	}
	{
		// return this;
		return __this;
	}

IL_006a:
	{
		// ParseUnknownField(input, extensionRegistry, tag, field_name);
		RuntimeObject* L_25 = ___input0;
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_26 = ___extensionRegistry1;
		uint32_t L_27 = V_0;
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = VirtFuncInvoker4< bool, RuntimeObject*, ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 *, uint32_t, String_t* >::Invoke(27 /* System.Boolean Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/MotionEvent/Types/Pointer,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder>::ParseUnknownField(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry,System.UInt32,System.String) */, __this, L_25, L_26, L_27, L_28);
		// break;
		goto IL_00cf;
	}

IL_0077:
	{
		// result.hasId = input.ReadInt32(ref result.id_);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_30 = __this->get_result_1();
		RuntimeObject* L_31 = ___input0;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_32 = __this->get_result_1();
		NullCheck(L_32);
		int32_t* L_33 = L_32->get_address_of_id__5();
		NullCheck(L_31);
		bool L_34;
		L_34 = InterfaceFuncInvoker1< bool, int32_t* >::Invoke(3 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadInt32(System.Int32&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_31, (int32_t*)L_33);
		NullCheck(L_30);
		L_30->set_hasId_4(L_34);
		// break;
		goto IL_00cf;
	}

IL_0095:
	{
		// result.hasNormalizedX = input.ReadFloat(ref result.normalizedX_);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_35 = __this->get_result_1();
		RuntimeObject* L_36 = ___input0;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_37 = __this->get_result_1();
		NullCheck(L_37);
		float* L_38 = L_37->get_address_of_normalizedX__8();
		NullCheck(L_36);
		bool L_39;
		L_39 = InterfaceFuncInvoker1< bool, float* >::Invoke(1 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadFloat(System.Single&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_36, (float*)L_38);
		NullCheck(L_35);
		L_35->set_hasNormalizedX_7(L_39);
		// break;
		goto IL_00cf;
	}

IL_00b3:
	{
		// result.hasNormalizedY = input.ReadFloat(ref result.normalizedY_);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_40 = __this->get_result_1();
		RuntimeObject* L_41 = ___input0;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_42 = __this->get_result_1();
		NullCheck(L_42);
		float* L_43 = L_42->get_address_of_normalizedY__11();
		NullCheck(L_41);
		bool L_44;
		L_44 = InterfaceFuncInvoker1< bool, float* >::Invoke(1 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadFloat(System.Single&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_41, (float*)L_43);
		NullCheck(L_40);
		L_40->set_hasNormalizedY_10(L_44);
	}

IL_00cf:
	{
		// while (input.ReadTag(out tag, out field_name)) {
		RuntimeObject* L_45 = ___input0;
		NullCheck(L_45);
		bool L_46;
		L_46 = InterfaceFuncInvoker2< bool, uint32_t*, String_t** >::Invoke(0 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadTag(System.UInt32&,System.String&) */, ICodedInputStream_tA2695FFC8DF03FDE79D7CEF537D7E320C6BCA932_il2cpp_TypeInfo_var, L_45, (uint32_t*)(&V_0), (String_t**)(&V_1));
		if (L_46)
		{
			goto IL_000c;
		}
	}
	{
		// return this;
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::get_HasId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_HasId_mC474782EB98A2A7E9CE59F184615166F173CC1EC (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.hasId; }
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasId_4();
		return L_1;
	}
}
// System.Int32 proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Builder_get_Id_m0E1FC23AEFF3E01523953CE9D5B9F025626F9A7E (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.Id; }
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Pointer_get_Id_m0653E09B9E6A7D4F25CE204832027A4A3521BC27_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::set_Id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Id_m60C9EB5A23AE4D14FC9A8CF7674AA9A311293151 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { SetId(value); }
		int32_t L_0 = ___value0;
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_1;
		L_1 = Builder_SetId_m2BBB18A8949AE3D29C3FEB40F8C9E7BECC9F8840(__this, L_0, /*hidden argument*/NULL);
		// set { SetId(value); }
		return;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::SetId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_SetId_m2BBB18A8949AE3D29C3FEB40F8C9E7BECC9F8840 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0;
		L_0 = Builder_PrepareBuilder_mD44AF9B90DA9836BEB57B0D32686E438F0FF51DD(__this, /*hidden argument*/NULL);
		// result.hasId = true;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasId_4((bool)1);
		// result.id_ = value;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_2 = __this->get_result_1();
		int32_t L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_id__5(L_3);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::ClearId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_ClearId_m506F13A54373154562BB04A941A53D244355F738 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0;
		L_0 = Builder_PrepareBuilder_mD44AF9B90DA9836BEB57B0D32686E438F0FF51DD(__this, /*hidden argument*/NULL);
		// result.hasId = false;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasId_4((bool)0);
		// result.id_ = 0;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		L_2->set_id__5(0);
		// return this;
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::get_HasNormalizedX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_HasNormalizedX_m4BADBCA6430D4AD567D6BB2163FA04AC458ACE26 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.hasNormalizedX; }
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasNormalizedX_7();
		return L_1;
	}
}
// System.Single proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::get_NormalizedX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Builder_get_NormalizedX_m20B166F6637B349F74EBC66F8D5AC9A264EEE831 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.NormalizedX; }
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		float L_1;
		L_1 = Pointer_get_NormalizedX_m2E5C629CC71F370D7A8A97B4761AB801FFA3AFA6_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::set_NormalizedX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_NormalizedX_mC9705363CB6D83EC4895422AF010D922F0AD8D75 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { SetNormalizedX(value); }
		float L_0 = ___value0;
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_1;
		L_1 = Builder_SetNormalizedX_mABF34CEC072FA7F565FDB22FDB5B2A61ED612218(__this, L_0, /*hidden argument*/NULL);
		// set { SetNormalizedX(value); }
		return;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::SetNormalizedX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_SetNormalizedX_mABF34CEC072FA7F565FDB22FDB5B2A61ED612218 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0;
		L_0 = Builder_PrepareBuilder_mD44AF9B90DA9836BEB57B0D32686E438F0FF51DD(__this, /*hidden argument*/NULL);
		// result.hasNormalizedX = true;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasNormalizedX_7((bool)1);
		// result.normalizedX_ = value;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_2 = __this->get_result_1();
		float L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_normalizedX__8(L_3);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::ClearNormalizedX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_ClearNormalizedX_m1F366F25677C98EC314699FE8183FAB014F8A07E (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0;
		L_0 = Builder_PrepareBuilder_mD44AF9B90DA9836BEB57B0D32686E438F0FF51DD(__this, /*hidden argument*/NULL);
		// result.hasNormalizedX = false;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasNormalizedX_7((bool)0);
		// result.normalizedX_ = 0F;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		L_2->set_normalizedX__8((0.0f));
		// return this;
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::get_HasNormalizedY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_get_HasNormalizedY_m3060C7DE07D534087F3AF3D2454A04154DA9E4DD (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.hasNormalizedY; }
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasNormalizedY_10();
		return L_1;
	}
}
// System.Single proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::get_NormalizedY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Builder_get_NormalizedY_mB030307C745D402FB5766B4686C3A5F75F49486C (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	{
		// get { return result.NormalizedY; }
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		float L_1;
		L_1 = Pointer_get_NormalizedY_m319304960B30857DB5AA2332C86737F91368B776_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::set_NormalizedY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_NormalizedY_mB758ED8B16591A5215801E63E21FADDA17916C21 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { SetNormalizedY(value); }
		float L_0 = ___value0;
		Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * L_1;
		L_1 = Builder_SetNormalizedY_m58BDA533CBAD2377DE98C21A7AD316308C50D721(__this, L_0, /*hidden argument*/NULL);
		// set { SetNormalizedY(value); }
		return;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::SetNormalizedY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_SetNormalizedY_m58BDA533CBAD2377DE98C21A7AD316308C50D721 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0;
		L_0 = Builder_PrepareBuilder_mD44AF9B90DA9836BEB57B0D32686E438F0FF51DD(__this, /*hidden argument*/NULL);
		// result.hasNormalizedY = true;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasNormalizedY_10((bool)1);
		// result.normalizedY_ = value;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_2 = __this->get_result_1();
		float L_3 = ___value0;
		NullCheck(L_2);
		L_2->set_normalizedY__11(L_3);
		// return this;
		return __this;
	}
}
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder::ClearNormalizedY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * Builder_ClearNormalizedY_m7E7272CDC5ABAE36114EDBDD6AE890E20DC22908 (Builder_t4F0FAA9EDBEE6830E4DBF623649779E69E8A9302 * __this, const RuntimeMethod* method)
{
	{
		// PrepareBuilder();
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0;
		L_0 = Builder_PrepareBuilder_mD44AF9B90DA9836BEB57B0D32686E438F0FF51DD(__this, /*hidden argument*/NULL);
		// result.hasNormalizedY = false;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_hasNormalizedY_10((bool)0);
		// result.normalizedY_ = 0F;
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		L_2->set_normalizedY__11((0.0f));
		// return this;
		return __this;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * Pointer_get_DefaultInstance_m62857201F32F992458F0D816DF7B91DEB32AD858_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return defaultInstance; }
		IL2CPP_RUNTIME_CLASS_INIT(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var);
		Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * L_0 = ((Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_StaticFields*)il2cpp_codegen_static_fields_for(Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2_il2cpp_TypeInfo_var))->get_defaultInstance_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Pointer_get_Id_m0653E09B9E6A7D4F25CE204832027A4A3521BC27_inline (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return id_; }
		int32_t L_0 = __this->get_id__5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Pointer_get_NormalizedX_m2E5C629CC71F370D7A8A97B4761AB801FFA3AFA6_inline (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return normalizedX_; }
		float L_0 = __this->get_normalizedX__8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Pointer_get_NormalizedY_m319304960B30857DB5AA2332C86737F91368B776_inline (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return normalizedY_; }
		float L_0 = __this->get_normalizedY__11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Pointer_get_HasId_mFDC4D68483FBC3715FB3E435E7878AC5736F9BB9_inline (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasId; }
		bool L_0 = __this->get_hasId_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Pointer_get_HasNormalizedX_mF40107BFF8BC8A039179BE59D6F492078864DEE8_inline (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasNormalizedX; }
		bool L_0 = __this->get_hasNormalizedX_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Pointer_get_HasNormalizedY_mAAF0E62830392472F09B8A85CD52337CD5FDC696_inline (Pointer_t6F0FB52DA0644C30FB73E87E32117161C4F5E6D2 * __this, const RuntimeMethod* method)
{
	{
		// get { return hasNormalizedY; }
		bool L_0 = __this->get_hasNormalizedY_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * ExtensionRegistry_get_Empty_mC0CEC24AC7345586186C0641D64BAAC63413DAA9_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var);
		ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5 * L_0 = ((ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_StaticFields*)il2cpp_codegen_static_fields_for(ExtensionRegistry_tA514B2DBA012D0A99007A1EFF4CE63F86CB87AC5_il2cpp_TypeInfo_var))->get_empty_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_Ordinal_mF3B6370BEBD77351DB5218C867DCD669C47B8812_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_0 = ((StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var))->get__ordinal_2();
		return L_0;
	}
}
