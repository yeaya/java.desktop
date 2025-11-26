#ifndef _sun_awt_X11_XMenuItemPeer$TextMetrics_h_
#define _sun_awt_X11_XMenuItemPeer$TextMetrics_h_
//$ class sun.awt.X11.XMenuItemPeer$TextMetrics
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

namespace java {
	namespace awt {
		class Dimension;
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XMenuItemPeer$TextMetrics : public ::java::lang::Cloneable {
	$class(XMenuItemPeer$TextMetrics, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	XMenuItemPeer$TextMetrics();
	void init$(::java::awt::Dimension* textDimension, int32_t shortcutWidth, int32_t textBaseline);
	virtual $Object* clone() override;
	virtual int32_t getShortcutWidth();
	virtual int32_t getTextBaseline();
	virtual ::java::awt::Dimension* getTextDimension();
	::java::awt::Dimension* textDimension = nullptr;
	int32_t shortcutWidth = 0;
	int32_t textBaseline = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XMenuItemPeer$TextMetrics_h_