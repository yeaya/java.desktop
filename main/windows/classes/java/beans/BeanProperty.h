#ifndef _java_beans_BeanProperty_h_
#define _java_beans_BeanProperty_h_
//$ interface java.beans.BeanProperty
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace java {
	namespace beans {

class $export BeanProperty : public ::java::lang::annotation::Annotation {
	$interface(BeanProperty, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual bool bound() {return false;}
	virtual $String* description() {return nullptr;}
	virtual $StringArray* enumerationValues() {return nullptr;}
	virtual bool expert() {return false;}
	virtual bool hidden() {return false;}
	virtual bool preferred() {return false;}
	virtual bool required() {return false;}
	virtual bool visualUpdate() {return false;}
};

	} // beans
} // java

#endif // _java_beans_BeanProperty_h_