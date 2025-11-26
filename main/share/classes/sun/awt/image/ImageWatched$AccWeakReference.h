#ifndef _sun_awt_image_ImageWatched$AccWeakReference_h_
#define _sun_awt_image_ImageWatched$AccWeakReference_h_
//$ class sun.awt.image.ImageWatched$AccWeakReference
//$ extends java.lang.ref.WeakReference

#include <java/lang/ref/WeakReference.h>

namespace java {
	namespace security {
		class AccessControlContext;
	}
}

namespace sun {
	namespace awt {
		namespace image {

class ImageWatched$AccWeakReference : public ::java::lang::ref::WeakReference {
	$class(ImageWatched$AccWeakReference, $NO_CLASS_INIT, ::java::lang::ref::WeakReference)
public:
	ImageWatched$AccWeakReference();
	void init$(Object$* ref);
	::java::security::AccessControlContext* acc = nullptr;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_ImageWatched$AccWeakReference_h_