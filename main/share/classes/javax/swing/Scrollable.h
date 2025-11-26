#ifndef _javax_swing_Scrollable_h_
#define _javax_swing_Scrollable_h_
//$ interface javax.swing.Scrollable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Dimension;
		class Rectangle;
	}
}

namespace javax {
	namespace swing {

class $export Scrollable : public ::java::lang::Object {
	$interface(Scrollable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::Dimension* getPreferredScrollableViewportSize() {return nullptr;}
	virtual int32_t getScrollableBlockIncrement(::java::awt::Rectangle* visibleRect, int32_t orientation, int32_t direction) {return 0;}
	virtual bool getScrollableTracksViewportHeight() {return false;}
	virtual bool getScrollableTracksViewportWidth() {return false;}
	virtual int32_t getScrollableUnitIncrement(::java::awt::Rectangle* visibleRect, int32_t orientation, int32_t direction) {return 0;}
};

	} // swing
} // javax

#endif // _javax_swing_Scrollable_h_