#ifndef _com_sun_imageio_plugins_common_LZWCompressor_h_
#define _com_sun_imageio_plugins_common_LZWCompressor_h_
//$ class com.sun.imageio.plugins.common.LZWCompressor
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TIFF")
#undef TIFF

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {
					class BitFile;
					class LZWStringTable;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class PrintStream;
	}
}
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

class LZWCompressor : public ::java::lang::Object {
	$class(LZWCompressor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LZWCompressor();
	void init$(::javax::imageio::stream::ImageOutputStream* out, int32_t codeSize, bool TIFF);
	virtual void compress($bytes* buf, int32_t offset, int32_t length);
	virtual void dump(::java::io::PrintStream* out);
	virtual void flush();
	int32_t codeSize = 0;
	int32_t clearCode = 0;
	int32_t endOfInfo = 0;
	int32_t numBits = 0;
	int32_t limit = 0;
	int16_t prefix = 0;
	::com::sun::imageio::plugins::common::BitFile* bf = nullptr;
	::com::sun::imageio::plugins::common::LZWStringTable* lzss = nullptr;
	bool tiffFudge = false;
};

				} // common
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("TIFF")

#endif // _com_sun_imageio_plugins_common_LZWCompressor_h_