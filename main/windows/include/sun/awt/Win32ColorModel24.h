#ifndef _sun_awt_Win32ColorModel24_h_
#define _sun_awt_Win32ColorModel24_h_
//$ class sun.awt.Win32ColorModel24
//$ extends java.awt.image.ComponentColorModel

#include <java/awt/image/ComponentColorModel.h>

namespace java {
	namespace awt {
		namespace image {
			class SampleModel;
			class WritableRaster;
		}
	}
}

namespace sun {
	namespace awt {

class $import Win32ColorModel24 : public ::java::awt::image::ComponentColorModel {
	$class(Win32ColorModel24, $NO_CLASS_INIT, ::java::awt::image::ComponentColorModel)
public:
	Win32ColorModel24();
	void init$();
	virtual ::java::awt::image::SampleModel* createCompatibleSampleModel(int32_t w, int32_t h) override;
	virtual ::java::awt::image::WritableRaster* createCompatibleWritableRaster(int32_t w, int32_t h) override;
};

	} // awt
} // sun

#endif // _sun_awt_Win32ColorModel24_h_