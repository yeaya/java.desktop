#ifndef _java_beans_ParameterDescriptor_h_
#define _java_beans_ParameterDescriptor_h_
//$ class java.beans.ParameterDescriptor
//$ extends java.beans.FeatureDescriptor

#include <java/beans/FeatureDescriptor.h>

namespace java {
	namespace beans {

class $export ParameterDescriptor : public ::java::beans::FeatureDescriptor {
	$class(ParameterDescriptor, $NO_CLASS_INIT, ::java::beans::FeatureDescriptor)
public:
	ParameterDescriptor();
	void init$();
	void init$(::java::beans::ParameterDescriptor* old);
};

	} // beans
} // java

#endif // _java_beans_ParameterDescriptor_h_