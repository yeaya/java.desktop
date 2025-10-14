#ifndef _sun_java2d_pipe_hw_AccelTypedVolatileImage_h_
#define _sun_java2d_pipe_hw_AccelTypedVolatileImage_h_
//$ class sun.java2d.pipe.hw.AccelTypedVolatileImage
//$ extends sun.awt.image.SunVolatileImage

#include <sun/awt/image/SunVolatileImage.h>

namespace java {
	namespace awt {
		class Graphics2D;
		class GraphicsConfiguration;
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {
			namespace hw {

class AccelTypedVolatileImage : public ::sun::awt::image::SunVolatileImage {
	$class(AccelTypedVolatileImage, $NO_CLASS_INIT, ::sun::awt::image::SunVolatileImage)
public:
	AccelTypedVolatileImage();
	using ::sun::awt::image::SunVolatileImage::getCapabilities;
	void init$(::java::awt::GraphicsConfiguration* graphicsConfig, int32_t width, int32_t height, int32_t transparency, int32_t accType);
	virtual ::java::awt::Graphics2D* createGraphics() override;
};

			} // hw
		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_hw_AccelTypedVolatileImage_h_