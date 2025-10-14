#ifndef _java_awt_dnd_Autoscroll_h_
#define _java_awt_dnd_Autoscroll_h_
//$ interface java.awt.dnd.Autoscroll
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Insets;
		class Point;
	}
}

namespace java {
	namespace awt {
		namespace dnd {

class $import Autoscroll : public ::java::lang::Object {
	$interface(Autoscroll, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void autoscroll(::java::awt::Point* cursorLocn) {}
	virtual ::java::awt::Insets* getAutoscrollInsets() {return nullptr;}
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_Autoscroll_h_