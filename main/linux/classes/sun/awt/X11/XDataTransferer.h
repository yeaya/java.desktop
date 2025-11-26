#ifndef _sun_awt_X11_XDataTransferer_h_
#define _sun_awt_X11_XDataTransferer_h_
//$ class sun.awt.X11.XDataTransferer
//$ extends sun.awt.datatransfer.DataTransferer

#include <java/lang/Array.h>
#include <sun/awt/datatransfer/DataTransferer.h>

#pragma push_macro("DT_NET_FILE_ATOM")
#undef DT_NET_FILE_ATOM
#pragma push_macro("FILE_NAME_ATOM")
#undef FILE_NAME_ATOM
#pragma push_macro("INCR_ATOM")
#undef INCR_ATOM
#pragma push_macro("JFIF_ATOM")
#undef JFIF_ATOM
#pragma push_macro("MULTIPLE_ATOM")
#undef MULTIPLE_ATOM
#pragma push_macro("PNG_ATOM")
#undef PNG_ATOM
#pragma push_macro("TARGETS_ATOM")
#undef TARGETS_ATOM

namespace java {
	namespace awt {
		class Image;
	}
}
namespace java {
	namespace awt {
		namespace datatransfer {
			class DataFlavor;
			class Transferable;
		}
	}
}
namespace java {
	namespace io {
		class ByteArrayOutputStream;
		class InputStream;
	}
}
namespace java {
	namespace lang {
		class Long;
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class LinkedHashSet;
	}
}
namespace javax {
	namespace imageio {
		class ImageTypeSpecifier;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XAtom;
		}
	}
}
namespace sun {
	namespace awt {
		namespace datatransfer {
			class ToolkitThreadBlockedHandler;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XDataTransferer : public ::sun::awt::datatransfer::DataTransferer {
	$class(XDataTransferer, 0, ::sun::awt::datatransfer::DataTransferer)
public:
	XDataTransferer();
	void init$();
	virtual ::java::io::ByteArrayOutputStream* convertFileListToBytes(::java::util::ArrayList* fileList) override;
	virtual $StringArray* dragQueryFile($bytes* bytes) override;
	virtual $Array<::java::net::URI>* dragQueryURIs(::java::io::InputStream* stream, int64_t format, ::java::awt::datatransfer::Transferable* localeTransferable) override;
	virtual $String* getCharsetForTextFormat(::java::lang::Long* lFormat) override;
	::javax::imageio::ImageTypeSpecifier* getDefaultImageTypeSpecifier();
	virtual $String* getDefaultUnicodeEncoding() override;
	virtual ::java::lang::Long* getFormatForNativeAsLong($String* str) override;
	static ::sun::awt::X11::XDataTransferer* getInstanceImpl();
	virtual $String* getNativeForFormat(int64_t format) override;
	virtual ::java::util::LinkedHashSet* getPlatformMappingsForFlavor(::java::awt::datatransfer::DataFlavor* df) override;
	virtual ::java::util::LinkedHashSet* getPlatformMappingsForNative($String* nat) override;
	$String* getTargetNameForAtom(int64_t atom);
	virtual ::sun::awt::datatransfer::ToolkitThreadBlockedHandler* getToolkitThreadBlockedHandler() override;
	virtual $bytes* imageToPlatformBytes(::java::awt::Image* image, int64_t format) override;
	virtual bool isFileFormat(int64_t format) override;
	virtual bool isImageFormat(int64_t format) override;
	virtual bool isLocaleDependentTextFormat(int64_t format) override;
	bool isMimeFormat(int64_t format, $String* primaryType);
	virtual bool isTextFormat(int64_t format) override;
	virtual bool isURIListFormat(int64_t format) override;
	virtual ::java::awt::Image* platformImageBytesToImage($bytes* bytes, int64_t format) override;
	static ::sun::awt::X11::XAtom* FILE_NAME_ATOM;
	static ::sun::awt::X11::XAtom* DT_NET_FILE_ATOM;
	static ::sun::awt::X11::XAtom* PNG_ATOM;
	static ::sun::awt::X11::XAtom* JFIF_ATOM;
	static ::sun::awt::X11::XAtom* TARGETS_ATOM;
	static ::sun::awt::X11::XAtom* INCR_ATOM;
	static ::sun::awt::X11::XAtom* MULTIPLE_ATOM;
	static ::sun::awt::X11::XDataTransferer* transferer;
	static ::javax::imageio::ImageTypeSpecifier* defaultSpecifier;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("DT_NET_FILE_ATOM")
#pragma pop_macro("FILE_NAME_ATOM")
#pragma pop_macro("INCR_ATOM")
#pragma pop_macro("JFIF_ATOM")
#pragma pop_macro("MULTIPLE_ATOM")
#pragma pop_macro("PNG_ATOM")
#pragma pop_macro("TARGETS_ATOM")

#endif // _sun_awt_X11_XDataTransferer_h_