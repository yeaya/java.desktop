#ifndef _sun_lwawt_macosx_CDataTransferer_h_
#define _sun_lwawt_macosx_CDataTransferer_h_
//$ class sun.lwawt.macosx.CDataTransferer
//$ extends sun.awt.datatransfer.DataTransferer

#include <java/lang/Array.h>
#include <sun/awt/datatransfer/DataTransferer.h>

#pragma push_macro("CF_FILE")
#undef CF_FILE
#pragma push_macro("CF_HTML")
#undef CF_HTML
#pragma push_macro("CF_JPEG")
#undef CF_JPEG
#pragma push_macro("CF_PDF")
#undef CF_PDF
#pragma push_macro("CF_PNG")
#undef CF_PNG
#pragma push_macro("CF_RICH_TEXT")
#undef CF_RICH_TEXT
#pragma push_macro("CF_STRING")
#undef CF_STRING
#pragma push_macro("CF_TIFF")
#undef CF_TIFF
#pragma push_macro("CF_UNSUPPORTED")
#undef CF_UNSUPPORTED
#pragma push_macro("CF_URL")
#undef CF_URL
#pragma push_macro("CF_XPICT")
#undef CF_XPICT

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
	}
}
namespace java {
	namespace lang {
		class Long;
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class Map;
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
	namespace lwawt {
		namespace macosx {

class CDataTransferer : public ::sun::awt::datatransfer::DataTransferer {
	$class(CDataTransferer, 0, ::sun::awt::datatransfer::DataTransferer)
public:
	CDataTransferer();
	void init$();
	virtual ::java::io::ByteArrayOutputStream* convertFileListToBytes(::java::util::ArrayList* fileList) override;
	virtual $StringArray* dragQueryFile($bytes* bytes) override;
	$String* extractURL($String* xml);
	$String* formatForIndex(int64_t index);
	virtual $String* getDefaultUnicodeEncoding() override;
	virtual ::java::lang::Long* getFormatForNativeAsLong($String* str) override;
	static ::sun::lwawt::macosx::CDataTransferer* getInstanceImpl();
	virtual $String* getNativeForFormat(int64_t format) override;
	virtual ::sun::awt::datatransfer::ToolkitThreadBlockedHandler* getToolkitThreadBlockedHandler() override;
	virtual $bytes* imageToPlatformBytes(::java::awt::Image* image, int64_t format) override;
	virtual bool isFileFormat(int64_t format) override;
	virtual bool isImageFormat(int64_t format) override;
	virtual bool isLocaleDependentTextFormat(int64_t format) override;
	virtual bool isURIListFormat(int64_t format) override;
	bool isUriListFlavor(::java::awt::datatransfer::DataFlavor* df);
	static $StringArray* nativeDragQueryFile($bytes* bytes);
	virtual ::java::awt::Image* platformImageBytesToImage($bytes* bytes, int64_t format) override;
	int64_t registerFormatWithPasteboard($String* type);
	virtual $Object* translateBytes($bytes* bytes, ::java::awt::datatransfer::DataFlavor* flavor, int64_t format, ::java::awt::datatransfer::Transferable* transferable) override;
	static ::java::util::Map* predefinedClipboardNameMap;
	static ::java::util::Map* predefinedClipboardFormatMap;
	static $StringArray* predefinedClipboardNames;
	static const int32_t CF_UNSUPPORTED = 0;
	static const int32_t CF_STRING = 1;
	static const int32_t CF_FILE = 2;
	static const int32_t CF_TIFF = 3;
	static const int32_t CF_RICH_TEXT = 4;
	static const int32_t CF_HTML = 5;
	static const int32_t CF_PDF = 6;
	static const int32_t CF_URL = 7;
	static const int32_t CF_PNG = 8;
	static const int32_t CF_JPEG = 9;
	static const int32_t CF_XPICT = 10;
	static ::sun::lwawt::macosx::CDataTransferer* fTransferer;
	::sun::awt::datatransfer::ToolkitThreadBlockedHandler* handler = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#pragma pop_macro("CF_FILE")
#pragma pop_macro("CF_HTML")
#pragma pop_macro("CF_JPEG")
#pragma pop_macro("CF_PDF")
#pragma pop_macro("CF_PNG")
#pragma pop_macro("CF_RICH_TEXT")
#pragma pop_macro("CF_STRING")
#pragma pop_macro("CF_TIFF")
#pragma pop_macro("CF_UNSUPPORTED")
#pragma pop_macro("CF_URL")
#pragma pop_macro("CF_XPICT")

#endif // _sun_lwawt_macosx_CDataTransferer_h_