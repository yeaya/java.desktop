#ifndef _com_apple_laf_AquaPainter$AquaPixelsKey_h_
#define _com_apple_laf_AquaPainter$AquaPixelsKey_h_
//$ class com.apple.laf.AquaPainter$AquaPixelsKey
//$ extends sun.awt.image.ImageCache$PixelsKey

#include <sun/awt/image/ImageCache$PixelsKey.h>

namespace apple {
	namespace laf {
		class JRSUIState;
	}
}
namespace java {
	namespace awt {
		class GraphicsConfiguration;
		class Rectangle;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaPainter$AquaPixelsKey : public ::sun::awt::image::ImageCache$PixelsKey {
	$class(AquaPainter$AquaPixelsKey, $NO_CLASS_INIT, ::sun::awt::image::ImageCache$PixelsKey)
public:
	AquaPainter$AquaPixelsKey();
	void init$(::java::awt::GraphicsConfiguration* config, int32_t w, int32_t h, ::java::awt::Rectangle* bounds, ::apple::laf::JRSUIState* state);
	virtual bool equals(Object$* obj) override;
	virtual int32_t getPixelCount() override;
	int32_t hash();
	virtual int32_t hashCode() override;
	int32_t pixelCount = 0;
	int32_t hash$ = 0;
	::java::awt::GraphicsConfiguration* config = nullptr;
	int32_t w = 0;
	int32_t h = 0;
	::java::awt::Rectangle* bounds = nullptr;
	::apple::laf::JRSUIState* state = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaPainter$AquaPixelsKey_h_