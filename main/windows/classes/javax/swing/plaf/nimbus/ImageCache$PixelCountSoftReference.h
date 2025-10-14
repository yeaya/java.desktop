#ifndef _javax_swing_plaf_nimbus_ImageCache$PixelCountSoftReference_h_
#define _javax_swing_plaf_nimbus_ImageCache$PixelCountSoftReference_h_
//$ class javax.swing.plaf.nimbus.ImageCache$PixelCountSoftReference
//$ extends java.lang.ref.SoftReference

#include <java/lang/Array.h>
#include <java/lang/ref/SoftReference.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
		class Image;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class ImageCache$PixelCountSoftReference : public ::java::lang::ref::SoftReference {
	$class(ImageCache$PixelCountSoftReference, $NO_CLASS_INIT, ::java::lang::ref::SoftReference)
public:
	ImageCache$PixelCountSoftReference();
	using ::java::lang::ref::SoftReference::equals;
	void init$(::java::awt::Image* referent, ::java::lang::ref::ReferenceQueue* q, int32_t pixelCount, int32_t hash, ::java::awt::GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args);
	virtual bool equals(::java::awt::GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args);
	int32_t pixelCount = 0;
	int32_t hash = 0;
	::java::awt::GraphicsConfiguration* config = nullptr;
	int32_t w = 0;
	int32_t h = 0;
	$ObjectArray* args = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_ImageCache$PixelCountSoftReference_h_