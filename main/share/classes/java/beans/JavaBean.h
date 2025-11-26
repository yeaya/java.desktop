#ifndef _java_beans_JavaBean_h_
#define _java_beans_JavaBean_h_
//$ interface java.beans.JavaBean
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace java {
	namespace beans {

class $export JavaBean : public ::java::lang::annotation::Annotation {
	$interface(JavaBean, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $String* defaultEventSet() {return nullptr;}
	virtual $String* defaultProperty() {return nullptr;}
	virtual $String* description() {return nullptr;}
};

	} // beans
} // java

#endif // _java_beans_JavaBean_h_