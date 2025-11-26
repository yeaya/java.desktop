#ifndef _bug4337267$TestBufferedImage_h_
#define _bug4337267$TestBufferedImage_h_
//$ class bug4337267$TestBufferedImage
//$ extends java.awt.image.BufferedImage

#include <java/awt/image/BufferedImage.h>

#pragma push_macro("MAX_GLITCHES")
#undef MAX_GLITCHES

class $export bug4337267$TestBufferedImage : public ::java::awt::image::BufferedImage {
	$class(bug4337267$TestBufferedImage, $NO_CLASS_INIT, ::java::awt::image::BufferedImage)
public:
	bug4337267$TestBufferedImage();
	void init$(int32_t width, int32_t height, int32_t imageType);
	virtual bool equals(Object$* other) override;
	int32_t MAX_GLITCHES = 0;
};

#pragma pop_macro("MAX_GLITCHES")

#endif // _bug4337267$TestBufferedImage_h_