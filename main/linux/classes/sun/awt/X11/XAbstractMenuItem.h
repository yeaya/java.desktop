#ifndef _sun_awt_X11_XAbstractMenuItem_h_
#define _sun_awt_X11_XAbstractMenuItem_h_
//$ interface sun.awt.X11.XAbstractMenuItem
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XMenuPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XAbstractMenuItem : public ::java::lang::Object {
	$interface(XAbstractMenuItem, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getHeight(::java::awt::Graphics* g) {return 0;}
	virtual $String* getLabel() {return nullptr;}
	virtual int32_t getShortcutWidth(::java::awt::Graphics* g) {return 0;}
	virtual int32_t getWidth(::java::awt::Graphics* g) {return 0;}
	virtual void paint(::java::awt::Graphics* g, int32_t top, int32_t bottom, int32_t width, int32_t shortcutOffset, bool selected) {}
	virtual void setMenuPeer(::sun::awt::X11::XMenuPeer* parentMenu) {}
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XAbstractMenuItem_h_