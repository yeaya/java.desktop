#ifndef _java_awt_Stroke_h_
#define _java_awt_Stroke_h_
//$ interface java.awt.Stroke
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Shape;
	}
}

namespace java {
	namespace awt {

class $import Stroke : public ::java::lang::Object {
	$interface(Stroke, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::Shape* createStrokedShape(::java::awt::Shape* p) {return nullptr;}
};

	} // awt
} // java

#endif // _java_awt_Stroke_h_