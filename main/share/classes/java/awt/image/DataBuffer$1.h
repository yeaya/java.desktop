#ifndef _java_awt_image_DataBuffer$1_h_
#define _java_awt_image_DataBuffer$1_h_
//$ class java.awt.image.DataBuffer$1
//$ extends sun.awt.image.SunWritableRaster$DataStealer

#include <java/lang/Array.h>
#include <sun/awt/image/SunWritableRaster$DataStealer.h>

namespace java {
	namespace awt {
		namespace image {
			class DataBuffer;
			class DataBufferByte;
			class DataBufferInt;
			class DataBufferUShort;
		}
	}
}
namespace sun {
	namespace java2d {
		class StateTrackableDelegate;
	}
}

namespace java {
	namespace awt {
		namespace image {

class DataBuffer$1 : public ::sun::awt::image::SunWritableRaster$DataStealer {
	$class(DataBuffer$1, $NO_CLASS_INIT, ::sun::awt::image::SunWritableRaster$DataStealer)
public:
	DataBuffer$1();
	void init$();
	virtual $bytes* getData(::java::awt::image::DataBufferByte* dbb, int32_t bank) override;
	virtual $shorts* getData(::java::awt::image::DataBufferUShort* dbus, int32_t bank) override;
	virtual $ints* getData(::java::awt::image::DataBufferInt* dbi, int32_t bank) override;
	virtual ::sun::java2d::StateTrackableDelegate* getTrackable(::java::awt::image::DataBuffer* db) override;
	virtual void setTrackable(::java::awt::image::DataBuffer* db, ::sun::java2d::StateTrackableDelegate* trackable) override;
};

		} // image
	} // awt
} // java

#endif // _java_awt_image_DataBuffer$1_h_