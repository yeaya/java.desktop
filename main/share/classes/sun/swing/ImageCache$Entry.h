#ifndef _sun_swing_ImageCache$Entry_h_
#define _sun_swing_ImageCache$Entry_h_
//$ class sun.swing.ImageCache$Entry
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
		class Image;
	}
}

namespace sun {
	namespace swing {

class ImageCache$Entry : public ::java::lang::Object {
	$class(ImageCache$Entry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ImageCache$Entry();
	using ::java::lang::Object::equals;
	void init$(::java::awt::GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args);
	virtual bool equals(::java::awt::GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args);
	virtual ::java::awt::Image* getImage();
	virtual void setImage(::java::awt::Image* image);
	virtual $String* toString() override;
	::java::awt::GraphicsConfiguration* config = nullptr;
	int32_t w = 0;
	int32_t h = 0;
	$ObjectArray* args = nullptr;
	::java::awt::Image* image = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_ImageCache$Entry_h_