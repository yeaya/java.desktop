#ifndef _sun_lwawt_macosx_CImage_h_
#define _sun_lwawt_macosx_CImage_h_
//$ class sun.lwawt.macosx.CImage
//$ extends sun.lwawt.macosx.CFRetainedResource

#include <java/lang/Array.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>

namespace java {
	namespace awt {
		class Image;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Dimension2D;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}
namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicReference;
			}
		}
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CImage$Creator;
			class CTrayIcon$IconObserver;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CImage : public ::sun::lwawt::macosx::CFRetainedResource {
	$class(CImage, 0, ::sun::lwawt::macosx::CFRetainedResource)
public:
	CImage();
	void init$(int64_t nsImagePtr);
	static ::sun::lwawt::macosx::CImage* createFromImage(::java::awt::Image* image);
	static ::sun::lwawt::macosx::CImage* createFromImage(::java::awt::Image* image, ::sun::lwawt::macosx::CTrayIcon$IconObserver* observer);
	static ::java::awt::Image* createImageFromFile($String* file, double width, double height);
	static ::java::awt::Image* createImageOfFile($String* file, int32_t width, int32_t height);
	static ::java::awt::Image* createSystemImageFromSelector($String* iconSelector, int32_t width, int32_t height);
	static ::sun::lwawt::macosx::CImage$Creator* getCreator();
	static void lambda$resize$5(double w, double h, int64_t ptr);
	static void lambda$resizeRepresentations$6(double w, double h, int64_t ptr);
	static void lambda$toImage$0(::java::util::concurrent::atomic::AtomicReference* sizeRef, int64_t ptr);
	static void lambda$toImage$1(::java::util::concurrent::atomic::AtomicReference* repRef, ::java::awt::geom::Dimension2D* size, int64_t ptr);
	::java::awt::Image* lambda$toImage$2(int32_t w, int32_t h, ::java::lang::Integer* width, ::java::lang::Integer* height);
	static void lambda$toImage$4($ints* buffer, int32_t srcWidth, int32_t srcHeight, int32_t dstWidth, int32_t dstHeight, int64_t ptr);
	static void nativeCopyNSImageIntoArray(int64_t image, $ints* buffer, int32_t sw, int32_t sh, int32_t dw, int32_t dh);
	static int64_t nativeCreateNSImageFromArray($ints* buffer, int32_t w, int32_t h);
	static int64_t nativeCreateNSImageFromArrays($Array<int32_t, 2>* buffers, $ints* w, $ints* h);
	static int64_t nativeCreateNSImageFromBytes($bytes* buffer);
	static int64_t nativeCreateNSImageFromFileContents($String* file);
	static int64_t nativeCreateNSImageFromIconSelector(int32_t selector);
	static int64_t nativeCreateNSImageFromImageName($String* name);
	static int64_t nativeCreateNSImageOfFileFromLaunchServices($String* file);
	static $Array<::java::awt::geom::Dimension2D>* nativeGetNSImageRepresentationSizes(int64_t image, double w, double h);
	static ::java::awt::geom::Dimension2D* nativeGetNSImageSize(int64_t image);
	static $bytes* nativeGetPlatformImageBytes($ints* buffer, int32_t w, int32_t h);
	static void nativeResizeNSImageRepresentations(int64_t image, double w, double h);
	static void nativeSetNSImageSize(int64_t image, double w, double h);
	virtual ::sun::lwawt::macosx::CImage* resize(double w, double h);
	virtual void resizeRepresentations(double w, double h);
	::java::awt::Image* toImage();
	::java::awt::image::BufferedImage* toImage(int32_t srcWidth, int32_t srcHeight, int32_t dstWidth, int32_t dstHeight);
	static ::sun::lwawt::macosx::CImage$Creator* creator;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CImage_h_