#ifndef _sun_awt_image_SunWritableRaster$DataStealer_h_
#define _sun_awt_image_SunWritableRaster$DataStealer_h_
//$ interface sun.awt.image.SunWritableRaster$DataStealer
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

namespace sun {
	namespace awt {
		namespace image {

class SunWritableRaster$DataStealer : public ::java::lang::Object {
	$interface(SunWritableRaster$DataStealer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $bytes* getData(::java::awt::image::DataBufferByte* dbb, int32_t bank) {return nullptr;}
	virtual $shorts* getData(::java::awt::image::DataBufferUShort* dbus, int32_t bank) {return nullptr;}
	virtual $ints* getData(::java::awt::image::DataBufferInt* dbi, int32_t bank) {return nullptr;}
	virtual ::sun::java2d::StateTrackableDelegate* getTrackable(::java::awt::image::DataBuffer* db) {return nullptr;}
	virtual void setTrackable(::java::awt::image::DataBuffer* db, ::sun::java2d::StateTrackableDelegate* trackable) {}
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_SunWritableRaster$DataStealer_h_