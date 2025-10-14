#ifndef _sun_awt_image_ImageFetcher$1_h_
#define _sun_awt_image_ImageFetcher$1_h_
//$ class sun.awt.image.ImageFetcher$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class ThreadGroup;
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class FetcherInfo;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class ImageFetcher$1 : public ::java::security::PrivilegedAction {
	$class(ImageFetcher$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ImageFetcher$1();
	void init$(::sun::awt::image::FetcherInfo* val$info, ::java::lang::ThreadGroup* val$fetcherGroup);
	virtual $Object* run() override;
	::java::lang::ThreadGroup* val$fetcherGroup = nullptr;
	::sun::awt::image::FetcherInfo* val$info = nullptr;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_ImageFetcher$1_h_