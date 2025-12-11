#ifndef _sun_lwawt_LWRepaintArea_h_
#define _sun_lwawt_LWRepaintArea_h_
//$ class sun.lwawt.LWRepaintArea
//$ extends sun.awt.RepaintArea

#include <sun/awt/RepaintArea.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}

namespace sun {
	namespace lwawt {

class LWRepaintArea : public ::sun::awt::RepaintArea {
	$class(LWRepaintArea, $NO_CLASS_INIT, ::sun::awt::RepaintArea)
public:
	LWRepaintArea();
	void init$();
	virtual void paintComponent(::java::awt::Component* comp, ::java::awt::Graphics* g) override;
	virtual void updateComponent(::java::awt::Component* comp, ::java::awt::Graphics* g) override;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWRepaintArea_h_