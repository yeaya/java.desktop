#ifndef _javax_imageio_IIOImage_h_
#define _javax_imageio_IIOImage_h_
//$ class javax.imageio.IIOImage
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
			class Raster;
			class RenderedImage;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace imageio {
		namespace metadata {
			class IIOMetadata;
		}
	}
}

namespace javax {
	namespace imageio {

class $import IIOImage : public ::java::lang::Object {
	$class(IIOImage, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IIOImage();
	void init$(::java::awt::image::RenderedImage* image, ::java::util::List* thumbnails, ::javax::imageio::metadata::IIOMetadata* metadata);
	void init$(::java::awt::image::Raster* raster, ::java::util::List* thumbnails, ::javax::imageio::metadata::IIOMetadata* metadata);
	virtual ::javax::imageio::metadata::IIOMetadata* getMetadata();
	virtual int32_t getNumThumbnails();
	virtual ::java::awt::image::Raster* getRaster();
	virtual ::java::awt::image::RenderedImage* getRenderedImage();
	virtual ::java::awt::image::BufferedImage* getThumbnail(int32_t index);
	virtual ::java::util::List* getThumbnails();
	virtual bool hasRaster();
	virtual void setMetadata(::javax::imageio::metadata::IIOMetadata* metadata);
	virtual void setRaster(::java::awt::image::Raster* raster);
	virtual void setRenderedImage(::java::awt::image::RenderedImage* image);
	virtual void setThumbnails(::java::util::List* thumbnails);
	::java::awt::image::RenderedImage* image = nullptr;
	::java::awt::image::Raster* raster = nullptr;
	::java::util::List* thumbnails = nullptr;
	::javax::imageio::metadata::IIOMetadata* metadata = nullptr;
};

	} // imageio
} // javax

#endif // _javax_imageio_IIOImage_h_