#ifndef _sun_awt_X11_XToolkit$2_h_
#define _sun_awt_X11_XToolkit$2_h_
//$ class sun.awt.X11.XToolkit$2
//$ extends sun.awt.DisplayChangedListener

#include <sun/awt/DisplayChangedListener.h>

namespace sun {
	namespace awt {
		namespace X11 {

class XToolkit$2 : public ::sun::awt::DisplayChangedListener {
	$class(XToolkit$2, $NO_CLASS_INIT, ::sun::awt::DisplayChangedListener)
public:
	XToolkit$2();
	void init$();
	virtual void displayChanged() override;
	virtual void paletteChanged() override;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XToolkit$2_h_