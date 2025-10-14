#ifndef _sun_swing_SwingUtilities2$RepaintListener_h_
#define _sun_swing_SwingUtilities2$RepaintListener_h_
//$ interface sun.swing.SwingUtilities2$RepaintListener
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		class JComponent;
	}
}

namespace sun {
	namespace swing {

class $import SwingUtilities2$RepaintListener : public ::java::lang::Object {
	$interface(SwingUtilities2$RepaintListener, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void repaintPerformed(::javax::swing::JComponent* c, int32_t x, int32_t y, int32_t w, int32_t h) {}
};

	} // swing
} // sun

#endif // _sun_swing_SwingUtilities2$RepaintListener_h_