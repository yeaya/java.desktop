#ifndef _sun_awt_image_DataBufferNative_h_
#define _sun_awt_image_DataBufferNative_h_
//$ class sun.awt.image.DataBufferNative
//$ extends java.awt.image.DataBuffer

#include <java/awt/image/DataBuffer.h>

namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}

namespace sun {
	namespace awt {
		namespace image {

class DataBufferNative : public ::java::awt::image::DataBuffer {
	$class(DataBufferNative, $NO_CLASS_INIT, ::java::awt::image::DataBuffer)
public:
	DataBufferNative();
	using ::java::awt::image::DataBuffer::getElem;
	void init$(::sun::java2d::SurfaceData* sData, int32_t type, int32_t width, int32_t height);
	virtual int32_t getElem(int32_t x, int32_t y, ::sun::java2d::SurfaceData* sData);
	virtual int32_t getElem(int32_t bank, int32_t i) override;
	using ::java::awt::image::DataBuffer::setElem;
	virtual void setElem(int32_t x, int32_t y, int32_t val, ::sun::java2d::SurfaceData* sData);
	virtual void setElem(int32_t bank, int32_t i, int32_t val) override;
	::sun::java2d::SurfaceData* surfaceData = nullptr;
	int32_t width = 0;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_DataBufferNative_h_