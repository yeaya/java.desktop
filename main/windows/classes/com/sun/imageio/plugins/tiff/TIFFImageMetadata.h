#ifndef _com_sun_imageio_plugins_tiff_TIFFImageMetadata_h_
#define _com_sun_imageio_plugins_tiff_TIFFImageMetadata_h_
//$ class com.sun.imageio.plugins.tiff.TIFFImageMetadata
//$ extends javax.imageio.metadata.IIOMetadata

#include <java/lang/Array.h>
#include <javax/imageio/metadata/IIOMetadata.h>

#pragma push_macro("NATIVE_METADATA_FORMAT_CLASS_NAME")
#undef NATIVE_METADATA_FORMAT_CLASS_NAME
#pragma push_macro("NATIVE_METADATA_FORMAT_NAME")
#undef NATIVE_METADATA_FORMAT_NAME

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {
					class TIFFIFD;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace imageio {
		namespace metadata {
			class IIOMetadataNode;
		}
	}
}
namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {
				class TIFFField;
			}
		}
	}
}
namespace javax {
	namespace imageio {
		namespace stream {
			class ImageInputStream;
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
				namespace tiff {

class TIFFImageMetadata : public ::javax::imageio::metadata::IIOMetadata {
	$class(TIFFImageMetadata, 0, ::javax::imageio::metadata::IIOMetadata)
public:
	TIFFImageMetadata();
	void init$(::java::util::List* tagSets);
	void init$(::com::sun::imageio::plugins::tiff::TIFFIFD* ifd);
	virtual void addShortOrLongField(int32_t tagNumber, int64_t value);
	static void fatal(::org::w3c::dom::Node* node, $String* reason);
	virtual ::org::w3c::dom::Node* getAsTree($String* formatName) override;
	static $String* getAttribute(::org::w3c::dom::Node* node, $String* attrName);
	::org::w3c::dom::Node* getChildNode(::org::w3c::dom::Node* node, $String* childName);
	::org::w3c::dom::Node* getIFDAsTree(::com::sun::imageio::plugins::tiff::TIFFIFD* ifd, $String* parentTagName, int32_t parentTagNumber);
	::org::w3c::dom::Node* getNativeTree();
	virtual ::com::sun::imageio::plugins::tiff::TIFFIFD* getRootIFD();
	virtual ::com::sun::imageio::plugins::tiff::TIFFImageMetadata* getShallowClone();
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardChromaNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardCompressionNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardDataNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardDimensionNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardDocumentNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardTextNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardTransparencyNode() override;
	virtual ::javax::imageio::plugins::tiff::TIFFField* getTIFFField(int32_t tagNumber);
	virtual void initializeFromStream(::javax::imageio::stream::ImageInputStream* stream, bool ignoreMetadata, bool readUnknownTags);
	virtual bool isReadOnly() override;
	$chars* listToCharArray($String* list);
	$ints* listToIntArray($String* list);
	void mergeNativeTree(::org::w3c::dom::Node* root);
	void mergeStandardTree(::org::w3c::dom::Node* root);
	virtual void mergeTree($String* formatName, ::org::w3c::dom::Node* root) override;
	static ::com::sun::imageio::plugins::tiff::TIFFIFD* parseIFD(::org::w3c::dom::Node* node);
	virtual void removeTIFFField(int32_t tagNumber);
	$String* repeat($String* s, int32_t times);
	virtual void reset() override;
	static $String* NATIVE_METADATA_FORMAT_NAME;
	static $String* NATIVE_METADATA_FORMAT_CLASS_NAME;
	::java::util::List* tagSets = nullptr;
	::com::sun::imageio::plugins::tiff::TIFFIFD* rootIFD = nullptr;
	static $StringArray* colorSpaceNames;
	static $StringArray* orientationNames;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("NATIVE_METADATA_FORMAT_CLASS_NAME")
#pragma pop_macro("NATIVE_METADATA_FORMAT_NAME")

#endif // _com_sun_imageio_plugins_tiff_TIFFImageMetadata_h_