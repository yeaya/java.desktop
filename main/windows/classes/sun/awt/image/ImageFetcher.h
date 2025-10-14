#ifndef _sun_awt_image_ImageFetcher_h_
#define _sun_awt_image_ImageFetcher_h_
//$ class sun.awt.image.ImageFetcher
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

#pragma push_macro("ANIM_PRIORITY")
#undef ANIM_PRIORITY
#pragma push_macro("HIGH_PRIORITY")
#undef HIGH_PRIORITY
#pragma push_macro("LOW_PRIORITY")
#undef LOW_PRIORITY
#pragma push_macro("TIMEOUT")
#undef TIMEOUT

namespace java {
	namespace lang {
		class ThreadGroup;
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class FetcherInfo;
			class ImageFetchable;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class ImageFetcher : public ::java::lang::Thread {
	$class(ImageFetcher, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	ImageFetcher();
	void init$();
	void init$(::java::lang::ThreadGroup* threadGroup, int32_t index);
	static bool add(::sun::awt::image::ImageFetchable* src);
	static bool amFetcher();
	static void createFetchers(::sun::awt::image::FetcherInfo* info);
	void fetchloop();
	static bool isFetcher($Thread* t);
	static ::sun::awt::image::ImageFetchable* nextImage();
	static void remove(::sun::awt::image::ImageFetchable* src);
	virtual void run() override;
	static void startingAnimation();
	static void stoppingAnimation($Thread* me);
	static const int32_t HIGH_PRIORITY = 8;
	static const int32_t LOW_PRIORITY = 3;
	static const int32_t ANIM_PRIORITY = 2;
	static const int32_t TIMEOUT = 5000;
};

		} // image
	} // awt
} // sun

#pragma pop_macro("ANIM_PRIORITY")
#pragma pop_macro("HIGH_PRIORITY")
#pragma pop_macro("LOW_PRIORITY")
#pragma pop_macro("TIMEOUT")

#endif // _sun_awt_image_ImageFetcher_h_