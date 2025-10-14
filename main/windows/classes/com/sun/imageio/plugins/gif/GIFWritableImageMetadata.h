#ifndef _com_sun_imageio_plugins_gif_GIFWritableImageMetadata_h_
#define _com_sun_imageio_plugins_gif_GIFWritableImageMetadata_h_
//$ class com.sun.imageio.plugins.gif.GIFWritableImageMetadata
//$ extends com.sun.imageio.plugins.gif.GIFImageMetadata

#include <com/sun/imageio/plugins/gif/GIFImageMetadata.h>
#include <java/lang/Array.h>

#pragma push_macro("NATIVE_FORMAT_NAME")
#undef NATIVE_FORMAT_NAME

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
				namespace gif {

class GIFWritableImageMetadata : public ::com::sun::imageio::plugins::gif::GIFImageMetadata {
	$class(GIFWritableImageMetadata, 0, ::com::sun::imageio::plugins::gif::GIFImageMetadata)
public:
	GIFWritableImageMetadata();
	void init$();
	$bytes* fromISO8859($String* data);
	virtual bool isReadOnly() override;
	virtual void mergeNativeTree(::org::w3c::dom::Node* root) override;
	virtual void mergeStandardTree(::org::w3c::dom::Node* root) override;
	virtual void reset() override;
	virtual void setFromTree($String* formatName, ::org::w3c::dom::Node* root) override;
	static $String* NATIVE_FORMAT_NAME;
};

				} // gif
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("NATIVE_FORMAT_NAME")

#endif // _com_sun_imageio_plugins_gif_GIFWritableImageMetadata_h_