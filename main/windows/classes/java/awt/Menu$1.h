#ifndef _java_awt_Menu$1_h_
#define _java_awt_Menu$1_h_
//$ class java.awt.Menu$1
//$ extends sun.awt.AWTAccessor$MenuAccessor

#include <sun/awt/AWTAccessor$MenuAccessor.h>

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

namespace java {
	namespace awt {

class Menu$1 : public ::sun::awt::AWTAccessor$MenuAccessor {
	$class(Menu$1, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$MenuAccessor)
public:
	Menu$1();
	void init$();
	virtual ::java::util::Vector* getItems(::java::awt::Menu* menu) override;
};

	} // awt
} // java

#endif // _java_awt_Menu$1_h_