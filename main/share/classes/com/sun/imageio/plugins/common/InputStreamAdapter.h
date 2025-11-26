#ifndef _com_sun_imageio_plugins_common_InputStreamAdapter_h_
#define _com_sun_imageio_plugins_common_InputStreamAdapter_h_
//$ class com.sun.imageio.plugins.common.InputStreamAdapter
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

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

class InputStreamAdapter : public ::java::io::InputStream {
	$class(InputStreamAdapter, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	InputStreamAdapter();
	void init$(::javax::imageio::stream::ImageInputStream* stream);
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	::javax::imageio::stream::ImageInputStream* stream = nullptr;
};

				} // common
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_common_InputStreamAdapter_h_