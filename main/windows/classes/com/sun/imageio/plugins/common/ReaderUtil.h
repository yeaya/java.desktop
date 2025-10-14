#ifndef _com_sun_imageio_plugins_common_ReaderUtil_h_
#define _com_sun_imageio_plugins_common_ReaderUtil_h_
//$ class com.sun.imageio.plugins.common.ReaderUtil
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Point;
		class Rectangle;
	}
}
namespace javax {
	namespace imageio {
		namespace stream {
			class ImageInputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

class ReaderUtil : public ::java::lang::Object {
	$class(ReaderUtil, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ReaderUtil();
	void init$();
	static void computeUpdatedPixels(int32_t sourceOffset, int32_t sourceExtent, int32_t destinationOffset, int32_t dstMin, int32_t dstMax, int32_t sourceSubsampling, int32_t passStart, int32_t passExtent, int32_t passPeriod, $ints* vals, int32_t offset);
	static $ints* computeUpdatedPixels(::java::awt::Rectangle* sourceRegion, ::java::awt::Point* destinationOffset, int32_t dstMinX, int32_t dstMinY, int32_t dstMaxX, int32_t dstMaxY, int32_t sourceXSubsampling, int32_t sourceYSubsampling, int32_t passXStart, int32_t passYStart, int32_t passWidth, int32_t passHeight, int32_t passPeriodX, int32_t passPeriodY);
	static int32_t readMultiByteInteger(::javax::imageio::stream::ImageInputStream* iis);
};

				} // common
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_common_ReaderUtil_h_