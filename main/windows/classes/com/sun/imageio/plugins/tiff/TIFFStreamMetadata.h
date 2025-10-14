#ifndef _com_sun_imageio_plugins_tiff_TIFFStreamMetadata_h_
#define _com_sun_imageio_plugins_tiff_TIFFStreamMetadata_h_
//$ class com.sun.imageio.plugins.tiff.TIFFStreamMetadata
//$ extends javax.imageio.metadata.IIOMetadata

#include <javax/imageio/metadata/IIOMetadata.h>

#pragma push_macro("NATIVE_METADATA_FORMAT_CLASS_NAME")
#undef NATIVE_METADATA_FORMAT_CLASS_NAME
#pragma push_macro("NATIVE_METADATA_FORMAT_NAME")
#undef NATIVE_METADATA_FORMAT_NAME

namespace java {
	namespace nio {
		class ByteOrder;
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

class TIFFStreamMetadata : public ::javax::imageio::metadata::IIOMetadata {
	$class(TIFFStreamMetadata, 0, ::javax::imageio::metadata::IIOMetadata)
public:
	TIFFStreamMetadata();
	void init$();
	static void fatal(::org::w3c::dom::Node* node, $String* reason);
	virtual ::org::w3c::dom::Node* getAsTree($String* formatName) override;
	virtual bool isReadOnly() override;
	void mergeNativeTree(::org::w3c::dom::Node* root);
	virtual void mergeTree($String* formatName, ::org::w3c::dom::Node* root) override;
	virtual void reset() override;
	static $String* NATIVE_METADATA_FORMAT_NAME;
	static $String* NATIVE_METADATA_FORMAT_CLASS_NAME;
	static $String* bigEndianString;
	static $String* littleEndianString;
	::java::nio::ByteOrder* byteOrder = nullptr;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("NATIVE_METADATA_FORMAT_CLASS_NAME")
#pragma pop_macro("NATIVE_METADATA_FORMAT_NAME")

#endif // _com_sun_imageio_plugins_tiff_TIFFStreamMetadata_h_