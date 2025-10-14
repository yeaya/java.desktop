#ifndef _java_beans_EventSetDescriptor_h_
#define _java_beans_EventSetDescriptor_h_
//$ class java.beans.EventSetDescriptor
//$ extends java.beans.FeatureDescriptor

#include <java/beans/FeatureDescriptor.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace introspect {
				class EventSetInfo;
			}
		}
	}
}
namespace java {
	namespace beans {
		class MethodDescriptor;
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class Reference;
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

namespace java {
	namespace beans {

class $export EventSetDescriptor : public ::java::beans::FeatureDescriptor {
	$class(EventSetDescriptor, $NO_CLASS_INIT, ::java::beans::FeatureDescriptor)
public:
	EventSetDescriptor();
	void init$($Class* sourceClass, $String* eventSetName, $Class* listenerType, $String* listenerMethodName);
	void init$($Class* sourceClass, $String* eventSetName, $Class* listenerType, $StringArray* listenerMethodNames, $String* addListenerMethodName, $String* removeListenerMethodName);
	void init$($Class* sourceClass, $String* eventSetName, $Class* listenerType, $StringArray* listenerMethodNames, $String* addListenerMethodName, $String* removeListenerMethodName, $String* getListenerMethodName);
	void init$($String* eventSetName, $Class* listenerType, $Array<::java::lang::reflect::Method>* listenerMethods, ::java::lang::reflect::Method* addListenerMethod, ::java::lang::reflect::Method* removeListenerMethod);
	void init$($String* eventSetName, $Class* listenerType, $Array<::java::lang::reflect::Method>* listenerMethods, ::java::lang::reflect::Method* addListenerMethod, ::java::lang::reflect::Method* removeListenerMethod, ::java::lang::reflect::Method* getListenerMethod);
	void init$($String* base, ::com::sun::beans::introspect::EventSetInfo* info, $Array<::java::lang::reflect::Method>* methods);
	void init$($String* eventSetName, $Class* listenerType, $Array<::java::beans::MethodDescriptor>* listenerMethodDescriptors, ::java::lang::reflect::Method* addListenerMethod, ::java::lang::reflect::Method* removeListenerMethod);
	void init$(::java::beans::EventSetDescriptor* x, ::java::beans::EventSetDescriptor* y);
	void init$(::java::beans::EventSetDescriptor* old);
	virtual void appendTo(::java::lang::StringBuilder* sb) override;
	virtual ::java::lang::reflect::Method* getAddListenerMethod();
	virtual ::java::lang::reflect::Method* getGetListenerMethod();
	static $String* getListenerClassName($Class* cls);
	virtual $Array<::java::beans::MethodDescriptor>* getListenerMethodDescriptors();
	virtual $Array<::java::lang::reflect::Method>* getListenerMethods();
	$Array<::java::lang::reflect::Method>* getListenerMethods0();
	virtual $Class* getListenerType();
	static ::java::lang::reflect::Method* getMethod($Class* cls, $String* name, int32_t args);
	static ::java::lang::reflect::Method* getMethod(::java::beans::MethodDescriptor* descriptor);
	virtual ::java::lang::reflect::Method* getRemoveListenerMethod();
	virtual bool isInDefaultEventSet();
	virtual bool isUnicast();
	void setAddListenerMethod(::java::lang::reflect::Method* method);
	void setGetListenerMethod(::java::lang::reflect::Method* method);
	virtual void setInDefaultEventSet(bool inDefaultEventSet);
	void setListenerMethods($Array<::java::lang::reflect::Method>* methods);
	void setListenerType($Class* cls);
	void setRemoveListenerMethod(::java::lang::reflect::Method* method);
	virtual void setUnicast(bool unicast);
	$Array<::java::beans::MethodDescriptor>* listenerMethodDescriptors = nullptr;
	::java::beans::MethodDescriptor* addMethodDescriptor = nullptr;
	::java::beans::MethodDescriptor* removeMethodDescriptor = nullptr;
	::java::beans::MethodDescriptor* getMethodDescriptor = nullptr;
	::java::lang::ref::Reference* listenerMethodsRef = nullptr;
	::java::lang::ref::Reference* listenerTypeRef = nullptr;
	bool unicast = false;
	bool inDefaultEventSet = false;
};

	} // beans
} // java

#endif // _java_beans_EventSetDescriptor_h_