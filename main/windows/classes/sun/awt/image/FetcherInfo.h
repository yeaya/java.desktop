#ifndef _sun_awt_image_FetcherInfo_h_
#define _sun_awt_image_FetcherInfo_h_
//$ class sun.awt.image.FetcherInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("FETCHER_INFO_KEY")
#undef FETCHER_INFO_KEY
#pragma push_macro("MAX_NUM_FETCHERS_PER_APPCONTEXT")
#undef MAX_NUM_FETCHERS_PER_APPCONTEXT

namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}

namespace sun {
	namespace awt {
		namespace image {

class FetcherInfo : public ::java::lang::Object {
	$class(FetcherInfo, 0, ::java::lang::Object)
public:
	FetcherInfo();
	void init$();
	static ::sun::awt::image::FetcherInfo* getFetcherInfo();
	static const int32_t MAX_NUM_FETCHERS_PER_APPCONTEXT = 4;
	$ThreadArray* fetchers = nullptr;
	int32_t numFetchers = 0;
	int32_t numWaiting = 0;
	::java::util::Vector* waitList = nullptr;
	static $Object* FETCHER_INFO_KEY;
};

		} // image
	} // awt
} // sun

#pragma pop_macro("FETCHER_INFO_KEY")
#pragma pop_macro("MAX_NUM_FETCHERS_PER_APPCONTEXT")

#endif // _sun_awt_image_FetcherInfo_h_