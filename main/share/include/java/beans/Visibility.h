#ifndef _java_beans_Visibility_h_
#define _java_beans_Visibility_h_
//$ interface java.beans.Visibility
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace beans {

class $import Visibility : public ::java::lang::Object {
	$interface(Visibility, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool avoidingGui() {return false;}
	virtual void dontUseGui() {}
	virtual bool needsGui() {return false;}
	virtual void okToUseGui() {}
};

	} // beans
} // java

#endif // _java_beans_Visibility_h_