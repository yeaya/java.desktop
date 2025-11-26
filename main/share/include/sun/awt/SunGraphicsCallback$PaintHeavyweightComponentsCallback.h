#ifndef _sun_awt_SunGraphicsCallback$PaintHeavyweightComponentsCallback_h_
#define _sun_awt_SunGraphicsCallback$PaintHeavyweightComponentsCallback_h_
//$ class sun.awt.SunGraphicsCallback$PaintHeavyweightComponentsCallback
//$ extends sun.awt.SunGraphicsCallback

#include <sun/awt/SunGraphicsCallback.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}

namespace sun {
	namespace awt {

class $import SunGraphicsCallback$PaintHeavyweightComponentsCallback : public ::sun::awt::SunGraphicsCallback {
	$class(SunGraphicsCallback$PaintHeavyweightComponentsCallback, 0, ::sun::awt::SunGraphicsCallback)
public:
	SunGraphicsCallback$PaintHeavyweightComponentsCallback();
	void init$();
	static ::sun::awt::SunGraphicsCallback$PaintHeavyweightComponentsCallback* getInstance();
	virtual void run(::java::awt::Component* comp, ::java::awt::Graphics* cg) override;
	static ::sun::awt::SunGraphicsCallback$PaintHeavyweightComponentsCallback* instance;
};

	} // awt
} // sun

#endif // _sun_awt_SunGraphicsCallback$PaintHeavyweightComponentsCallback_h_