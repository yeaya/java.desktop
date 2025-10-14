#ifndef _sun_awt_windows_WDataTransferer_h_
#define _sun_awt_windows_WDataTransferer_h_
//$ class sun.awt.windows.WDataTransferer
//$ extends sun.awt.datatransfer.DataTransferer

#include <java/lang/Array.h>
#include <sun/awt/datatransfer/DataTransferer.h>

#pragma push_macro("CFSTR_INETURL")
#undef CFSTR_INETURL
#pragma push_macro("CF_DIB")
#undef CF_DIB
#pragma push_macro("CF_ENHMETAFILE")
#undef CF_ENHMETAFILE
#pragma push_macro("CF_FILEGROUPDESCRIPTORA")
#undef CF_FILEGROUPDESCRIPTORA
#pragma push_macro("CF_FILEGROUPDESCRIPTORW")
#undef CF_FILEGROUPDESCRIPTORW
#pragma push_macro("CF_HDROP")
#undef CF_HDROP
#pragma push_macro("CF_HTML")
#undef CF_HTML
#pragma push_macro("CF_JFIF")
#undef CF_JFIF
#pragma push_macro("CF_LOCALE")
#undef CF_LOCALE
#pragma push_macro("CF_METAFILEPICT")
#undef CF_METAFILEPICT
#pragma push_macro("CF_PNG")
#undef CF_PNG
#pragma push_macro("CF_TEXT")
#undef CF_TEXT
#pragma push_macro("L_CF_LOCALE")
#undef L_CF_LOCALE
#pragma push_macro("UNICODE_NULL_TERMINATOR")
#undef UNICODE_NULL_TERMINATOR

namespace java {
	namespace awt {
		class Image;
	}
}
namespace java {
	namespace awt {
		namespace datatransfer {
			class DataFlavor;
			class FlavorTable;
			class Transferable;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class DirectColorModel;
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
	namespace util {
		class ArrayList;
		class Map;
		class SortedMap;
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
		namespace windows {

class WDataTransferer : public ::sun::awt::datatransfer::DataTransferer {
	$class(WDataTransferer, 0, ::sun::awt::datatransfer::DataTransferer)
public:
	WDataTransferer();
	void init$();
	virtual ::java::io::ByteArrayOutputStream* convertFileListToBytes(::java::util::ArrayList* fileList) override;
	virtual $StringArray* dragQueryFile($bytes* bytes) override;
	static $String* getClipboardFormatName(int64_t format);
	virtual $String* getDefaultUnicodeEncoding() override;
	virtual ::java::lang::Long* getFormatForNativeAsLong($String* str) override;
	virtual ::java::util::SortedMap* getFormatsForFlavors($Array<::java::awt::datatransfer::DataFlavor>* flavors, ::java::awt::datatransfer::FlavorTable* map) override;
	static ::sun::awt::windows::WDataTransferer* getInstanceImpl();
	virtual $String* getNativeForFormat(int64_t format) override;
	virtual ::sun::awt::datatransfer::ToolkitThreadBlockedHandler* getToolkitThreadBlockedHandler() override;
	$bytes* imageDataToPlatformImageBytes($bytes* imageData, int32_t width, int32_t height, int64_t format);
	virtual $bytes* imageToPlatformBytes(::java::awt::Image* image, int64_t format) override;
	virtual bool isFileFormat(int64_t format) override;
	virtual bool isImageFormat(int64_t format) override;
	virtual bool isLocaleDependentTextFormat(int64_t format) override;
	virtual ::java::awt::Image* platformImageBytesToImage($bytes* bytes, int64_t format) override;
	$ints* platformImageBytesToImageData($bytes* bytes, int64_t format);
	static int64_t registerClipboardFormat($String* str);
	virtual $Object* translateBytes($bytes* bytes, ::java::awt::datatransfer::DataFlavor* flavor, int64_t format, ::java::awt::datatransfer::Transferable* localeTransferable) override;
	virtual $Object* translateStream(::java::io::InputStream* str, ::java::awt::datatransfer::DataFlavor* flavor, int64_t format, ::java::awt::datatransfer::Transferable* localeTransferable) override;
	virtual $bytes* translateTransferable(::java::awt::datatransfer::Transferable* contents, ::java::awt::datatransfer::DataFlavor* flavor, int64_t format) override;
	static $StringArray* predefinedClipboardNames;
	static ::java::util::Map* predefinedClipboardNameMap;
	static const int32_t CF_TEXT = 1;
	static const int32_t CF_METAFILEPICT = 3;
	static const int32_t CF_DIB = 8;
	static const int32_t CF_ENHMETAFILE = 14;
	static const int32_t CF_HDROP = 15;
	static const int32_t CF_LOCALE = 16;
	static int64_t CF_HTML;
	static int64_t CFSTR_INETURL;
	static int64_t CF_PNG;
	static int64_t CF_JFIF;
	static int64_t CF_FILEGROUPDESCRIPTORW;
	static int64_t CF_FILEGROUPDESCRIPTORA;
	static ::java::lang::Long* L_CF_LOCALE;
	static ::java::awt::image::DirectColorModel* directColorModel;
	static $ints* bandmasks;
	static ::sun::awt::windows::WDataTransferer* transferer;
	::sun::awt::datatransfer::ToolkitThreadBlockedHandler* handler = nullptr;
	static $bytes* UNICODE_NULL_TERMINATOR;
};

		} // windows
	} // awt
} // sun

#pragma pop_macro("CFSTR_INETURL")
#pragma pop_macro("CF_DIB")
#pragma pop_macro("CF_ENHMETAFILE")
#pragma pop_macro("CF_FILEGROUPDESCRIPTORA")
#pragma pop_macro("CF_FILEGROUPDESCRIPTORW")
#pragma pop_macro("CF_HDROP")
#pragma pop_macro("CF_HTML")
#pragma pop_macro("CF_JFIF")
#pragma pop_macro("CF_LOCALE")
#pragma pop_macro("CF_METAFILEPICT")
#pragma pop_macro("CF_PNG")
#pragma pop_macro("CF_TEXT")
#pragma pop_macro("L_CF_LOCALE")
#pragma pop_macro("UNICODE_NULL_TERMINATOR")

#endif // _sun_awt_windows_WDataTransferer_h_