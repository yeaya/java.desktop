#ifndef _com_sun_imageio_plugins_tiff_TIFFIFD_h_
#define _com_sun_imageio_plugins_tiff_TIFFIFD_h_
//$ class com.sun.imageio.plugins.tiff.TIFFIFD
//$ extends javax.imageio.plugins.tiff.TIFFDirectory

#include <java/lang/Array.h>
#include <javax/imageio/plugins/tiff/TIFFDirectory.h>

#pragma push_macro("MAX_ASCII_SIZE")
#undef MAX_ASCII_SIZE
#pragma push_macro("MAX_SAMPLES_PER_PIXEL")
#undef MAX_SAMPLES_PER_PIXEL
#pragma push_macro("TIFFIFD")
#undef TIFFIFD

namespace java {
	namespace util {
		class Iterator;
		class List;
		class Set;
	}
}
namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {
				class TIFFField;
				class TIFFTag;
			}
		}
	}
}
namespace javax {
	namespace imageio {
		namespace stream {
			class ImageInputStream;
			class ImageOutputStream;
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFIFD : public ::javax::imageio::plugins::tiff::TIFFDirectory {
	$class(TIFFIFD, 0, ::javax::imageio::plugins::tiff::TIFFDirectory)
public:
	TIFFIFD();
	using ::javax::imageio::plugins::tiff::TIFFDirectory::getTag;
	void init$(::java::util::List* tagSets, ::javax::imageio::plugins::tiff::TIFFTag* parentTag);
	void init$(::java::util::List* tagSets);
	bool calculateByteCounts(int32_t expectedSize, ::java::util::List* byteCounts);
	void checkFieldOffsets(int64_t streamLength);
	static ::com::sun::imageio::plugins::tiff::TIFFIFD* getDirectoryAsIFD(::javax::imageio::plugins::tiff::TIFFDirectory* dir);
	int32_t getFieldAsInt(int32_t tagNumber);
	int64_t getFieldAsLong(int32_t tagNumber);
	virtual int64_t getLastPosition();
	virtual ::com::sun::imageio::plugins::tiff::TIFFIFD* getShallowClone();
	virtual int64_t getStripOrTileByteCountsPosition();
	virtual int64_t getStripOrTileOffsetsPosition();
	static ::javax::imageio::plugins::tiff::TIFFTag* getTag(int32_t tagNumber, ::java::util::List* tagSets);
	static ::javax::imageio::plugins::tiff::TIFFTag* getTag($String* tagName, ::java::util::List* tagSets);
	virtual ::java::util::List* getTagSetList();
	virtual void initialize(::javax::imageio::stream::ImageInputStream* stream, bool isPrimaryIFD, bool ignoreMetadata, bool readUnknownTags);
	static void initializeEssentialTags();
	virtual ::java::util::Iterator* iterator();
	static int32_t readFieldValue(::javax::imageio::stream::ImageInputStream* stream, int32_t type, int32_t count, $ObjectArray* data);
	virtual void setPositions(int64_t stripOrTileOffsetsPosition, int64_t stripOrTileByteCountsPosition, int64_t lastPosition);
	static void writeTIFFFieldToStream(::javax::imageio::plugins::tiff::TIFFField* field, ::javax::imageio::stream::ImageOutputStream* stream);
	virtual void writeToStream(::javax::imageio::stream::ImageOutputStream* stream);
	static const int64_t MAX_SAMPLES_PER_PIXEL = 0x0000FFFF;
	static const int64_t MAX_ASCII_SIZE = 0x0000FFFF;
	int64_t stripOrTileByteCountsPosition = 0;
	int64_t stripOrTileOffsetsPosition = 0;
	int64_t lastPosition = 0;
	static $volatile(::java::util::Set*) essentialTags;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("MAX_ASCII_SIZE")
#pragma pop_macro("MAX_SAMPLES_PER_PIXEL")
#pragma pop_macro("TIFFIFD")

#endif // _com_sun_imageio_plugins_tiff_TIFFIFD_h_