#ifndef _com_sun_imageio_plugins_common_SubImageInputStream_h_
#define _com_sun_imageio_plugins_common_SubImageInputStream_h_
//$ class com.sun.imageio.plugins.common.SubImageInputStream
//$ extends javax.imageio.stream.ImageInputStreamImpl

#include <java/lang/Array.h>
#include <javax/imageio/stream/ImageInputStreamImpl.h>

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

class SubImageInputStream : public ::javax::imageio::stream::ImageInputStreamImpl {
	$class(SubImageInputStream, $HAS_FINALIZE | $NO_CLASS_INIT, ::javax::imageio::stream::ImageInputStreamImpl)
public:
	SubImageInputStream();
	void init$(::javax::imageio::stream::ImageInputStream* stream, int32_t length);
	virtual void finalize() override;
	virtual int64_t length() override;
	using ::javax::imageio::stream::ImageInputStreamImpl::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual void seek(int64_t pos) override;
	::javax::imageio::stream::ImageInputStream* stream = nullptr;
	int64_t startingPos = 0;
	int32_t startingLength = 0;
	int32_t length$ = 0;
};

				} // common
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_common_SubImageInputStream_h_