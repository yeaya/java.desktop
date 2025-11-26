#ifndef _javax_imageio_ImageReadParam_h_
#define _javax_imageio_ImageReadParam_h_
//$ class javax.imageio.ImageReadParam
//$ extends javax.imageio.IIOParam

#include <java/lang/Array.h>
#include <javax/imageio/IIOParam.h>

namespace java {
	namespace awt {
		class Dimension;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}
namespace javax {
	namespace imageio {
		class ImageTypeSpecifier;
	}
}

namespace javax {
	namespace imageio {

class $export ImageReadParam : public ::javax::imageio::IIOParam {
	$class(ImageReadParam, $NO_CLASS_INIT, ::javax::imageio::IIOParam)
public:
	ImageReadParam();
	void init$();
	virtual bool canSetSourceRenderSize();
	virtual ::java::awt::image::BufferedImage* getDestination();
	virtual $ints* getDestinationBands();
	virtual int32_t getSourceMaxProgressivePass();
	virtual int32_t getSourceMinProgressivePass();
	virtual int32_t getSourceNumProgressivePasses();
	virtual ::java::awt::Dimension* getSourceRenderSize();
	virtual void setDestination(::java::awt::image::BufferedImage* destination);
	virtual void setDestinationBands($ints* destinationBands);
	virtual void setDestinationType(::javax::imageio::ImageTypeSpecifier* destinationType) override;
	virtual void setSourceProgressivePasses(int32_t minPass, int32_t numPasses);
	virtual void setSourceRenderSize(::java::awt::Dimension* size);
	bool canSetSourceRenderSize$ = false;
	::java::awt::Dimension* sourceRenderSize = nullptr;
	::java::awt::image::BufferedImage* destination = nullptr;
	$ints* destinationBands = nullptr;
	int32_t minProgressivePass = 0;
	int32_t numProgressivePasses = 0;
};

	} // imageio
} // javax

#endif // _javax_imageio_ImageReadParam_h_