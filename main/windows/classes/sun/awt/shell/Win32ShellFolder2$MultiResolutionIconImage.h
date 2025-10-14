#ifndef _sun_awt_shell_Win32ShellFolder2$MultiResolutionIconImage_h_
#define _sun_awt_shell_Win32ShellFolder2$MultiResolutionIconImage_h_
//$ class sun.awt.shell.Win32ShellFolder2$MultiResolutionIconImage
//$ extends java.awt.image.AbstractMultiResolutionImage

#include <java/awt/image/AbstractMultiResolutionImage.h>

namespace java {
	namespace awt {
		class Image;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ImageObserver;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}

namespace sun {
	namespace awt {
		namespace shell {

class $export Win32ShellFolder2$MultiResolutionIconImage : public ::java::awt::image::AbstractMultiResolutionImage {
	$class(Win32ShellFolder2$MultiResolutionIconImage, $NO_CLASS_INIT, ::java::awt::image::AbstractMultiResolutionImage)
public:
	Win32ShellFolder2$MultiResolutionIconImage();
	void init$(int32_t baseSize, ::java::util::Map* resolutionVariants);
	void init$(int32_t baseSize, ::java::awt::Image* image);
	virtual ::java::awt::Image* getBaseImage() override;
	virtual int32_t getHeight(::java::awt::image::ImageObserver* observer) override;
	virtual ::java::awt::Image* getResolutionVariant(double width, double height) override;
	virtual ::java::util::List* getResolutionVariants() override;
	virtual int32_t getWidth(::java::awt::image::ImageObserver* observer) override;
	int32_t baseSize = 0;
	::java::util::Map* resolutionVariants = nullptr;
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_Win32ShellFolder2$MultiResolutionIconImage_h_