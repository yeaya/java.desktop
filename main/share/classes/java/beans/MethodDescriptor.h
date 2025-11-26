#ifndef _java_beans_MethodDescriptor_h_
#define _java_beans_MethodDescriptor_h_
//$ class java.beans.MethodDescriptor
//$ extends java.beans.FeatureDescriptor

#include <java/beans/FeatureDescriptor.h>
#include <java/lang/Array.h>

namespace java {
	namespace beans {
		class MethodRef;
		class ParameterDescriptor;
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
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
	namespace util {
		class List;
	}
}

namespace java {
	namespace beans {

class $export MethodDescriptor : public ::java::beans::FeatureDescriptor {
	$class(MethodDescriptor, $NO_CLASS_INIT, ::java::beans::FeatureDescriptor)
public:
	MethodDescriptor();
	void init$(::java::lang::reflect::Method* method);
	void init$(::java::lang::reflect::Method* method, $Array<::java::beans::ParameterDescriptor>* parameterDescriptors);
	void init$(::java::beans::MethodDescriptor* x, ::java::beans::MethodDescriptor* y);
	void init$(::java::beans::MethodDescriptor* old);
	virtual void appendTo(::java::lang::StringBuilder* sb) override;
	virtual ::java::lang::reflect::Method* getMethod();
	virtual $StringArray* getParamNames();
	virtual $Array<::java::beans::ParameterDescriptor>* getParameterDescriptors();
	$ClassArray* getParams();
	static ::java::lang::reflect::Method* resolve(::java::lang::reflect::Method* oldMethod, ::java::lang::reflect::Method* newMethod);
	void setMethod(::java::lang::reflect::Method* method);
	void setParams($ClassArray* param);
	::java::beans::MethodRef* methodRef = nullptr;
	$StringArray* paramNames = nullptr;
	::java::util::List* params = nullptr;
	$Array<::java::beans::ParameterDescriptor>* parameterDescriptors = nullptr;
};

	} // beans
} // java

#endif // _java_beans_MethodDescriptor_h_