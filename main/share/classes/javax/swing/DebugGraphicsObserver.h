#ifndef _javax_swing_DebugGraphicsObserver_h_
#define _javax_swing_DebugGraphicsObserver_h_
//$ class javax.swing.DebugGraphicsObserver
//$ extends java.awt.image.ImageObserver

#include <java/awt/image/ImageObserver.h>

namespace java {
	namespace awt {
		class Image;
	}
}

namespace javax {
	namespace swing {

class DebugGraphicsObserver : public ::java::awt::image::ImageObserver {
	$class(DebugGraphicsObserver, $NO_CLASS_INIT, ::java::awt::image::ImageObserver)
public:
	DebugGraphicsObserver();
	void init$();
	virtual bool allBitsPresent();
	virtual bool imageHasProblem();
	virtual bool imageUpdate(::java::awt::Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t width, int32_t height) override;
	int32_t lastInfo = 0;
};

	} // swing
} // javax

#endif // _javax_swing_DebugGraphicsObserver_h_