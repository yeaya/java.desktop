#ifndef _javax_imageio_ImageWriteParam_h_
#define _javax_imageio_ImageWriteParam_h_
//$ class javax.imageio.ImageWriteParam
//$ extends javax.imageio.IIOParam

#include <java/lang/Array.h>
#include <javax/imageio/IIOParam.h>

#pragma push_macro("MAX_MODE")
#undef MAX_MODE
#pragma push_macro("MODE_COPY_FROM_METADATA")
#undef MODE_COPY_FROM_METADATA
#pragma push_macro("MODE_DEFAULT")
#undef MODE_DEFAULT
#pragma push_macro("MODE_DISABLED")
#undef MODE_DISABLED
#pragma push_macro("MODE_EXPLICIT")
#undef MODE_EXPLICIT

namespace java {
	namespace awt {
		class Dimension;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}

namespace javax {
	namespace imageio {

class $export ImageWriteParam : public ::javax::imageio::IIOParam {
	$class(ImageWriteParam, $NO_CLASS_INIT, ::javax::imageio::IIOParam)
public:
	ImageWriteParam();
	void init$();
	void init$(::java::util::Locale* locale);
	virtual bool canOffsetTiles();
	virtual bool canWriteCompressed();
	virtual bool canWriteProgressive();
	virtual bool canWriteTiles();
	static $Array<::java::awt::Dimension>* clonePreferredTileSizes($Array<::java::awt::Dimension>* sizes);
	virtual float getBitRate(float quality);
	virtual int32_t getCompressionMode();
	virtual float getCompressionQuality();
	virtual $StringArray* getCompressionQualityDescriptions();
	virtual $floats* getCompressionQualityValues();
	virtual $String* getCompressionType();
	virtual $StringArray* getCompressionTypes();
	virtual ::java::util::Locale* getLocale();
	virtual $String* getLocalizedCompressionTypeName();
	virtual $Array<::java::awt::Dimension>* getPreferredTileSizes();
	virtual int32_t getProgressiveMode();
	virtual int32_t getTileGridXOffset();
	virtual int32_t getTileGridYOffset();
	virtual int32_t getTileHeight();
	virtual int32_t getTileWidth();
	virtual int32_t getTilingMode();
	virtual bool isCompressionLossless();
	virtual void setCompressionMode(int32_t mode);
	virtual void setCompressionQuality(float quality);
	virtual void setCompressionType($String* compressionType);
	virtual void setProgressiveMode(int32_t mode);
	virtual void setTiling(int32_t tileWidth, int32_t tileHeight, int32_t tileGridXOffset, int32_t tileGridYOffset);
	virtual void setTilingMode(int32_t mode);
	virtual void unsetCompression();
	virtual void unsetTiling();
	static const int32_t MODE_DISABLED = 0;
	static const int32_t MODE_DEFAULT = 1;
	static const int32_t MODE_EXPLICIT = 2;
	static const int32_t MODE_COPY_FROM_METADATA = 3;
	static const int32_t MAX_MODE = MODE_COPY_FROM_METADATA;
	bool canWriteTiles$ = false;
	int32_t tilingMode = 0;
	$Array<::java::awt::Dimension>* preferredTileSizes = nullptr;
	bool tilingSet = false;
	int32_t tileWidth = 0;
	int32_t tileHeight = 0;
	bool canOffsetTiles$ = false;
	int32_t tileGridXOffset = 0;
	int32_t tileGridYOffset = 0;
	bool canWriteProgressive$ = false;
	int32_t progressiveMode = 0;
	bool canWriteCompressed$ = false;
	int32_t compressionMode = 0;
	$StringArray* compressionTypes = nullptr;
	$String* compressionType = nullptr;
	float compressionQuality = 0.0;
	::java::util::Locale* locale = nullptr;
};

	} // imageio
} // javax

#pragma pop_macro("MAX_MODE")
#pragma pop_macro("MODE_COPY_FROM_METADATA")
#pragma pop_macro("MODE_DEFAULT")
#pragma pop_macro("MODE_DISABLED")
#pragma pop_macro("MODE_EXPLICIT")

#endif // _javax_imageio_ImageWriteParam_h_