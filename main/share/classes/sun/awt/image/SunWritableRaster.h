#ifndef _sun_awt_image_SunWritableRaster_h_
#define _sun_awt_image_SunWritableRaster_h_
//$ class sun.awt.image.SunWritableRaster
//$ extends java.awt.image.WritableRaster

#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Image;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class DataBuffer;
			class DataBufferByte;
			class DataBufferInt;
			class DataBufferUShort;
			class SampleModel;
		}
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class SunWritableRaster$DataStealer;
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

class SunWritableRaster : public ::java::awt::image::WritableRaster {
	$class(SunWritableRaster, $NO_CLASS_INIT, ::java::awt::image::WritableRaster)
public:
	SunWritableRaster();
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::Point* origin);
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::image::DataBuffer* dataBuffer, ::java::awt::Point* origin);
	void init$(::java::awt::image::SampleModel* sampleModel, ::java::awt::image::DataBuffer* dataBuffer, ::java::awt::Rectangle* aRegion, ::java::awt::Point* sampleModelTranslate, ::java::awt::image::WritableRaster* parent);
	static void makeTrackable(::java::awt::image::DataBuffer* db);
	static void markDirty(::java::awt::image::DataBuffer* db);
	static void markDirty(::java::awt::image::WritableRaster* wr);
	static void markDirty(::java::awt::Image* img);
	void markDirty();
	static void setDataStealer(::sun::awt::image::SunWritableRaster$DataStealer* ds);
	static void setTrackable(::java::awt::image::DataBuffer* db, ::sun::java2d::StateTrackableDelegate* trackable);
	static $bytes* stealData(::java::awt::image::DataBufferByte* dbb, int32_t bank);
	static $shorts* stealData(::java::awt::image::DataBufferUShort* dbus, int32_t bank);
	static $ints* stealData(::java::awt::image::DataBufferInt* dbi, int32_t bank);
	static ::sun::java2d::StateTrackableDelegate* stealTrackable(::java::awt::image::DataBuffer* db);
	static ::sun::awt::image::SunWritableRaster$DataStealer* stealer;
	::sun::java2d::StateTrackableDelegate* theTrackable = nullptr;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_SunWritableRaster_h_