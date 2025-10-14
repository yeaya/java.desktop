#ifndef _com_sun_java_swing_plaf_windows_XPStyle$SkinPainter_h_
#define _com_sun_java_swing_plaf_windows_XPStyle$SkinPainter_h_
//$ class com.sun.java.swing.plaf.windows.XPStyle$SkinPainter
//$ extends sun.swing.CachedPainter

#include <java/lang/Array.h>
#include <sun/swing/CachedPainter.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class GraphicsConfiguration;
		class Image;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export XPStyle$SkinPainter : public ::sun::swing::CachedPainter {
	$class(XPStyle$SkinPainter, $NO_CLASS_INIT, ::sun::swing::CachedPainter)
public:
	XPStyle$SkinPainter();
	void init$();
	virtual ::java::awt::Image* createImage(::java::awt::Component* c, int32_t w, int32_t h, ::java::awt::GraphicsConfiguration* config, $ObjectArray* args) override;
	virtual void flush() override;
	virtual void paintToImage(::java::awt::Component* c, ::java::awt::Image* image, ::java::awt::Graphics* g, int32_t w, int32_t h, $ObjectArray* args) override;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_XPStyle$SkinPainter_h_