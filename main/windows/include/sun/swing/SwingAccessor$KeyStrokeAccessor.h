#ifndef _sun_swing_SwingAccessor$KeyStrokeAccessor_h_
#define _sun_swing_SwingAccessor$KeyStrokeAccessor_h_
//$ interface sun.swing.SwingAccessor$KeyStrokeAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		class KeyStroke;
	}
}

namespace sun {
	namespace swing {

class $import SwingAccessor$KeyStrokeAccessor : public ::java::lang::Object {
	$interface(SwingAccessor$KeyStrokeAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::swing::KeyStroke* create() {return nullptr;}
};

	} // swing
} // sun

#endif // _sun_swing_SwingAccessor$KeyStrokeAccessor_h_