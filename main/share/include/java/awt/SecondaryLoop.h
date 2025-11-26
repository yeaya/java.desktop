#ifndef _java_awt_SecondaryLoop_h_
#define _java_awt_SecondaryLoop_h_
//$ interface java.awt.SecondaryLoop
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {

class $import SecondaryLoop : public ::java::lang::Object {
	$interface(SecondaryLoop, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool enter() {return false;}
	virtual bool exit() {return false;}
};

	} // awt
} // java

#endif // _java_awt_SecondaryLoop_h_