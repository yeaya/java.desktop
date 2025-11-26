#ifndef _java_awt_image_PixelInterleavedSampleModel_h_
#define _java_awt_image_PixelInterleavedSampleModel_h_
//$ class java.awt.image.PixelInterleavedSampleModel
//$ extends java.awt.image.ComponentSampleModel

#include <java/awt/image/ComponentSampleModel.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace image {
			class SampleModel;
		}
	}
}

namespace java {
	namespace awt {
		namespace image {

class $export PixelInterleavedSampleModel : public ::java::awt::image::ComponentSampleModel {
	$class(PixelInterleavedSampleModel, $NO_CLASS_INIT, ::java::awt::image::ComponentSampleModel)
public:
	PixelInterleavedSampleModel();
	using ::java::awt::image::ComponentSampleModel::getDataElements;
	using ::java::awt::image::ComponentSampleModel::getPixel;
	using ::java::awt::image::ComponentSampleModel::getPixels;
	using ::java::awt::image::ComponentSampleModel::getSamples;
	void init$(int32_t dataType, int32_t w, int32_t h, int32_t pixelStride, int32_t scanlineStride, $ints* bandOffsets);
	virtual ::java::awt::image::SampleModel* createCompatibleSampleModel(int32_t w, int32_t h) override;
	virtual ::java::awt::image::SampleModel* createSubsetSampleModel($ints* bands) override;
	virtual int32_t hashCode() override;
	using ::java::awt::image::ComponentSampleModel::setDataElements;
	using ::java::awt::image::ComponentSampleModel::setPixel;
	using ::java::awt::image::ComponentSampleModel::setPixels;
	using ::java::awt::image::ComponentSampleModel::setSamples;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_PixelInterleavedSampleModel_h_