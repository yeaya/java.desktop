#ifndef _java_beans_ConstructorProperties_h_
#define _java_beans_ConstructorProperties_h_
//$ interface java.beans.ConstructorProperties
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace java {
	namespace beans {

class $import ConstructorProperties : public ::java::lang::annotation::Annotation {
	$interface(ConstructorProperties, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $StringArray* value() {return nullptr;}
};

	} // beans
} // java

#endif // _java_beans_ConstructorProperties_h_