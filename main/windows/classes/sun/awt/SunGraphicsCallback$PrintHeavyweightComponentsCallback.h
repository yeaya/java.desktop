#ifndef _sun_awt_SunGraphicsCallback$PrintHeavyweightComponentsCallback_h_
#define _sun_awt_SunGraphicsCallback$PrintHeavyweightComponentsCallback_h_
//$ class sun.awt.SunGraphicsCallback$PrintHeavyweightComponentsCallback
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

class $export SunGraphicsCallback$PrintHeavyweightComponentsCallback : public ::sun::awt::SunGraphicsCallback {
	$class(SunGraphicsCallback$PrintHeavyweightComponentsCallback, 0, ::sun::awt::SunGraphicsCallback)
public:
	SunGraphicsCallback$PrintHeavyweightComponentsCallback();
	void init$();
	static ::sun::awt::SunGraphicsCallback$PrintHeavyweightComponentsCallback* getInstance();
	virtual void run(::java::awt::Component* comp, ::java::awt::Graphics* cg) override;
	static ::sun::awt::SunGraphicsCallback$PrintHeavyweightComponentsCallback* instance;
};

	} // awt
} // sun

#endif // _sun_awt_SunGraphicsCallback$PrintHeavyweightComponentsCallback_h_