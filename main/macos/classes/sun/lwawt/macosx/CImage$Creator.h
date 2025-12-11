#ifndef _sun_lwawt_macosx_CImage$Creator_h_
#define _sun_lwawt_macosx_CImage$Creator_h_
//$ class sun.lwawt.macosx.CImage$Creator
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Image;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CImage;
			class CTrayIcon$IconObserver;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CImage$Creator : public ::java::lang::Object {
	$class(CImage$Creator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CImage$Creator();
	void init$();
	virtual ::sun::lwawt::macosx::CImage* createFromImage(::java::awt::Image* image);
	virtual ::sun::lwawt::macosx::CImage* createFromImage(::java::awt::Image* image, ::sun::lwawt::macosx::CTrayIcon$IconObserver* observer);
	::sun::lwawt::macosx::CImage* createFromImage(::java::awt::Image* image, bool prepareImage, ::sun::lwawt::macosx::CTrayIcon$IconObserver* observer);
	virtual ::sun::lwawt::macosx::CImage* createFromImageImmediately(::java::awt::Image* image);
	virtual ::sun::lwawt::macosx::CImage* createFromImages(::java::util::List* images);
	::sun::lwawt::macosx::CImage* createFromImages(::java::util::List* images, bool prepareImage);
	virtual ::java::awt::Image* createImage(int64_t image, double width, double height);
	virtual ::java::awt::Image* createImageFromFile($String* file, double width, double height);
	virtual ::java::awt::Image* createImageFromName($String* name, int32_t width, int32_t height);
	virtual ::java::awt::Image* createImageFromName($String* name);
	virtual ::java::awt::Image* createImageFromPlatformImageBytes($bytes* buffer);
	virtual ::java::awt::Image* createImageOfFile($String* file, int32_t width, int32_t height);
	virtual ::java::awt::Image* createImageUsingNativeSize(int64_t image);
	virtual ::java::awt::Image* createImageWithSize(int64_t image, double width, double height);
	virtual ::java::awt::Image* createSystemImageFromSelector($String* iconSelector, int32_t width, int32_t height);
	virtual $bytes* getPlatformImageBytes(::java::awt::Image* image);
	static int32_t getSelectorAsInt($String* fromString);
	static $ints* imageToArray(::java::awt::Image* image, bool prepareImage, ::sun::lwawt::macosx::CTrayIcon$IconObserver* observer);
	::sun::lwawt::macosx::CTrayIcon$IconObserver* observer = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CImage$Creator_h_