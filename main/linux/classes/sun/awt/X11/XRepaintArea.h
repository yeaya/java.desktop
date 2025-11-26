#ifndef _sun_awt_X11_XRepaintArea_h_
#define _sun_awt_X11_XRepaintArea_h_
//$ class sun.awt.X11.XRepaintArea
//$ extends sun.awt.RepaintArea

#include <sun/awt/RepaintArea.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XRepaintArea : public ::sun::awt::RepaintArea {
	$class(XRepaintArea, $NO_CLASS_INIT, ::sun::awt::RepaintArea)
public:
	XRepaintArea();
	void init$();
	virtual void paintComponent(::java::awt::Component* comp, ::java::awt::Graphics* g) override;
	virtual void updateComponent(::java::awt::Component* comp, ::java::awt::Graphics* g) override;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XRepaintArea_h_