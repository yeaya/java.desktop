#ifndef _sun_awt_image_PNGFilterInputStream_h_
#define _sun_awt_image_PNGFilterInputStream_h_
//$ class sun.awt.image.PNGFilterInputStream
//$ extends java.io.FilterInputStream

#include <java/io/FilterInputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class PNGImageDecoder;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class PNGFilterInputStream : public ::java::io::FilterInputStream {
	$class(PNGFilterInputStream, $NO_CLASS_INIT, ::java::io::FilterInputStream)
public:
	PNGFilterInputStream();
	void init$(::sun::awt::image::PNGImageDecoder* owner, ::java::io::InputStream* is);
	virtual int32_t available() override;
	virtual bool markSupported() override;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b) override;
	virtual int32_t read($bytes* b, int32_t st, int32_t len) override;
	virtual int64_t skip(int64_t n) override;
	::sun::awt::image::PNGImageDecoder* owner = nullptr;
	::java::io::InputStream* underlyingInputStream = nullptr;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_PNGFilterInputStream_h_