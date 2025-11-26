#ifndef _java_beans_Transient_h_
#define _java_beans_Transient_h_
//$ interface java.beans.Transient
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace java {
	namespace beans {

class $import Transient : public ::java::lang::annotation::Annotation {
	$interface(Transient, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual bool value() {return false;}
};

	} // beans
} // java

#endif // _java_beans_Transient_h_