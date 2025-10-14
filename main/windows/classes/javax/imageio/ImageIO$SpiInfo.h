#ifndef _javax_imageio_ImageIO$SpiInfo_h_
#define _javax_imageio_ImageIO$SpiInfo_h_
//$ class javax.imageio.ImageIO$SpiInfo
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("FILE_SUFFIXES")
#undef FILE_SUFFIXES
#pragma push_macro("FORMAT_NAMES")
#undef FORMAT_NAMES
#pragma push_macro("MIME_TYPES")
#undef MIME_TYPES

namespace javax {
	namespace imageio {
		namespace spi {
			class ImageReaderWriterSpi;
		}
	}
}

namespace javax {
	namespace imageio {

class ImageIO$SpiInfo : public ::java::lang::Enum {
	$class(ImageIO$SpiInfo, 0, ::java::lang::Enum)
public:
	ImageIO$SpiInfo();
	static $Array<::javax::imageio::ImageIO$SpiInfo>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual $StringArray* info(::javax::imageio::spi::ImageReaderWriterSpi* spi) {return nullptr;}
	static ::javax::imageio::ImageIO$SpiInfo* valueOf($String* name);
	static $Array<::javax::imageio::ImageIO$SpiInfo>* values();
	static ::javax::imageio::ImageIO$SpiInfo* FORMAT_NAMES;
	static ::javax::imageio::ImageIO$SpiInfo* MIME_TYPES;
	static ::javax::imageio::ImageIO$SpiInfo* FILE_SUFFIXES;
	static $Array<::javax::imageio::ImageIO$SpiInfo>* $VALUES;
};

	} // imageio
} // javax

#pragma pop_macro("FILE_SUFFIXES")
#pragma pop_macro("FORMAT_NAMES")
#pragma pop_macro("MIME_TYPES")

#endif // _javax_imageio_ImageIO$SpiInfo_h_