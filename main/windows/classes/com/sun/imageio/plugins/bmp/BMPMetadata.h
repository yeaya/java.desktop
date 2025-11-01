#ifndef _com_sun_imageio_plugins_bmp_BMPMetadata_h_
#define _com_sun_imageio_plugins_bmp_BMPMetadata_h_
//$ class com.sun.imageio.plugins.bmp.BMPMetadata
//$ extends javax.imageio.metadata.IIOMetadata
//$ implements com.sun.imageio.plugins.bmp.BMPConstants

#include <com/sun/imageio/plugins/bmp/BMPConstants.h>
#include <java/lang/Array.h>
#include <javax/imageio/metadata/IIOMetadata.h>

namespace javax {
	namespace imageio {
		namespace metadata {
			class IIOMetadataNode;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Node;
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

class BMPMetadata : public ::javax::imageio::metadata::IIOMetadata, public ::com::sun::imageio::plugins::bmp::BMPConstants {
	$class(BMPMetadata, 0, ::javax::imageio::metadata::IIOMetadata, ::com::sun::imageio::plugins::bmp::BMPConstants)
public:
	BMPMetadata();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	::javax::imageio::metadata::IIOMetadataNode* addChildNode(::javax::imageio::metadata::IIOMetadataNode* root, $String* name, Object$* object);
	void addXYZPoints(::javax::imageio::metadata::IIOMetadataNode* root, $String* name, double x, double y, double z);
	$String* countBits(int32_t num);
	virtual ::org::w3c::dom::Node* getAsTree($String* formatName) override;
	::org::w3c::dom::Node* getNativeTree();
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardChromaNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardCompressionNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardDataNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardDimensionNode() override;
	virtual bool isReadOnly() override;
	virtual void mergeTree($String* formatName, ::org::w3c::dom::Node* root) override;
	virtual void reset() override;
	virtual void setFromTree($String* formatName, ::org::w3c::dom::Node* root) override;
	$String* toISO8859($bytes* data);
	virtual $String* toString() override;
	static $String* nativeMetadataFormatName;
	$String* bmpVersion = nullptr;
	int32_t width = 0;
	int32_t height = 0;
	int16_t bitsPerPixel = 0;
	int32_t compression = 0;
	int32_t imageSize = 0;
	int32_t xPixelsPerMeter = 0;
	int32_t yPixelsPerMeter = 0;
	int32_t colorsUsed = 0;
	int32_t colorsImportant = 0;
	int32_t redMask = 0;
	int32_t greenMask = 0;
	int32_t blueMask = 0;
	int32_t alphaMask = 0;
	int32_t colorSpace = 0;
	double redX = 0.0;
	double redY = 0.0;
	double redZ = 0.0;
	double greenX = 0.0;
	double greenY = 0.0;
	double greenZ = 0.0;
	double blueX = 0.0;
	double blueY = 0.0;
	double blueZ = 0.0;
	int32_t gammaRed = 0;
	int32_t gammaGreen = 0;
	int32_t gammaBlue = 0;
	int32_t intent = 0;
	$bytes* palette = nullptr;
	int32_t paletteSize = 0;
	int32_t red = 0;
	int32_t green = 0;
	int32_t blue = 0;
};

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_bmp_BMPMetadata_h_