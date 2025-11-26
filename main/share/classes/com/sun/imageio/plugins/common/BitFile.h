#ifndef _com_sun_imageio_plugins_common_BitFile_h_
#define _com_sun_imageio_plugins_common_BitFile_h_
//$ class com.sun.imageio.plugins.common.BitFile
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace imageio {
		namespace stream {
			class ImageOutputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

class BitFile : public ::java::lang::Object {
	$class(BitFile, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BitFile();
	void init$(::javax::imageio::stream::ImageOutputStream* output, bool blocks);
	virtual void flush();
	virtual void writeBits(int32_t bits, int32_t numbits);
	::javax::imageio::stream::ImageOutputStream* output = nullptr;
	$bytes* buffer = nullptr;
	int32_t index = 0;
	int32_t bitsLeft = 0;
	bool blocks = false;
};

				} // common
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_common_BitFile_h_