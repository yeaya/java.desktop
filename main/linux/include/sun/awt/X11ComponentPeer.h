#ifndef _sun_awt_X11ComponentPeer_h_
#define _sun_awt_X11ComponentPeer_h_
//$ interface sun.awt.X11ComponentPeer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Graphics;
		class GraphicsConfiguration;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
		}
	}
}
namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}

namespace sun {
	namespace awt {

class $import X11ComponentPeer : public ::java::lang::Object {
	$interface(X11ComponentPeer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::Rectangle* getBounds() {return nullptr;}
	virtual ::java::awt::image::ColorModel* getColorModel() {return nullptr;}
	virtual int64_t getContentWindow() {return 0;}
	virtual ::java::awt::Graphics* getGraphics() {return nullptr;}
	virtual ::java::awt::GraphicsConfiguration* getGraphicsConfiguration() {return nullptr;}
	virtual ::sun::java2d::SurfaceData* getSurfaceData() {return nullptr;}
	virtual $Object* getTarget() {return nullptr;}
	virtual int64_t getWindow() {return 0;}
	virtual void setFullScreenExclusiveModeState(bool state) {}
};

	} // awt
} // sun

#endif // _sun_awt_X11ComponentPeer_h_