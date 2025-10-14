#ifndef _com_sun_imageio_plugins_tiff_TIFFIFD$TIFFIFDEntry_h_
#define _com_sun_imageio_plugins_tiff_TIFFIFD$TIFFIFDEntry_h_
//$ class com.sun.imageio.plugins.tiff.TIFFIFD$TIFFIFDEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {
				class TIFFTag;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFIFD$TIFFIFDEntry : public ::java::lang::Object {
	$class(TIFFIFD$TIFFIFDEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TIFFIFD$TIFFIFDEntry();
	void init$(::javax::imageio::plugins::tiff::TIFFTag* tag, int32_t type, int32_t count, int64_t offset);
	::javax::imageio::plugins::tiff::TIFFTag* tag = nullptr;
	int32_t type = 0;
	int32_t count = 0;
	int64_t offset = 0;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFIFD$TIFFIFDEntry_h_