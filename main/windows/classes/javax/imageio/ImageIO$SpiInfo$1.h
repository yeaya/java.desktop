#ifndef _javax_imageio_ImageIO$SpiInfo$1_h_
#define _javax_imageio_ImageIO$SpiInfo$1_h_
//$ class javax.imageio.ImageIO$SpiInfo$1
//$ extends javax.imageio.ImageIO$SpiInfo

#include <java/lang/Array.h>
#include <javax/imageio/ImageIO$SpiInfo.h>

namespace javax {
	namespace imageio {
		namespace spi {
			class ImageReaderWriterSpi;
		}
	}
}

namespace javax {
	namespace imageio {

class ImageIO$SpiInfo$1 : public ::javax::imageio::ImageIO$SpiInfo {
	$class(ImageIO$SpiInfo$1, $NO_CLASS_INIT, ::javax::imageio::ImageIO$SpiInfo)
public:
	ImageIO$SpiInfo$1();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual $StringArray* info(::javax::imageio::spi::ImageReaderWriterSpi* spi) override;
};

	} // imageio
} // javax

#endif // _javax_imageio_ImageIO$SpiInfo$1_h_