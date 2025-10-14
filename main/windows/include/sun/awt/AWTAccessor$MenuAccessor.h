#ifndef _sun_awt_AWTAccessor$MenuAccessor_h_
#define _sun_awt_AWTAccessor$MenuAccessor_h_
//$ interface sun.awt.AWTAccessor$MenuAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Menu;
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}

namespace sun {
	namespace awt {

class $import AWTAccessor$MenuAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$MenuAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::Vector* getItems(::java::awt::Menu* menu) {return nullptr;}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$MenuAccessor_h_