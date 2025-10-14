#ifndef _sun_awt_datatransfer_DataTransferer_h_
#define _sun_awt_datatransfer_DataTransferer_h_
//$ class sun.awt.datatransfer.DataTransferer
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DATA_CONVERTER_KEY")
#undef DATA_CONVERTER_KEY
#pragma push_macro("DEPLOYMENT_CACHE_PROPERTIES")
#undef DEPLOYMENT_CACHE_PROPERTIES

namespace java {
	namespace awt {
		class Image;
	}
}
namespace java {
	namespace awt {
		namespace datatransfer {
			class DataFlavor;
			class FlavorMap;
			class FlavorTable;
			class Transferable;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class RenderedImage;
		}
	}
}
namespace java {
	namespace io {
		class ByteArrayOutputStream;
		class File;
		class IOException;
		class InputStream;
	}
}
namespace java {
	namespace lang {
		class Long;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
		}
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace security {
		class ProtectionDomain;
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class LinkedHashSet;
		class List;
		class Map;
		class Set;
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
		namespace datatransfer {

class DataTransferer : public ::java::lang::Object {
	$class(DataTransferer, 0, ::java::lang::Object)
public:
	DataTransferer();
	void init$();
	static ::java::awt::datatransfer::FlavorTable* adaptFlavorMap(::java::awt::datatransfer::FlavorMap* map);
	::java::io::File* castToFile(Object$* fileObject);
	::java::util::ArrayList* castToFiles(::java::util::List* files, ::java::security::ProtectionDomain* userProtectionDomain);
	$Object* concatData(Object$* obj1, Object$* obj2);
	$Object* constructFlavoredObject(Object$* arg, ::java::awt::datatransfer::DataFlavor* flavor, $Class* clazz);
	virtual $bytes* convertData(Object$* source, ::java::awt::datatransfer::Transferable* contents, int64_t format, ::java::util::Map* formatMap, bool isToolkitThread);
	virtual ::java::io::ByteArrayOutputStream* convertFileListToBytes(::java::util::ArrayList* fileList) {return nullptr;}
	static $bytes* convertObjectToBytes(Object$* object);
	virtual $StringArray* dragQueryFile($bytes* bytes) {return nullptr;}
	virtual $Array<::java::net::URI>* dragQueryURIs(::java::io::InputStream* stream, int64_t format, ::java::awt::datatransfer::Transferable* localeTransferable);
	virtual $String* getBestCharsetForTextFormat(::java::lang::Long* lFormat, ::java::awt::datatransfer::Transferable* localeTransferable);
	virtual $String* getCharsetForTextFormat(::java::lang::Long* lFormat);
	virtual $String* getDefaultUnicodeEncoding() {return nullptr;}
	virtual ::java::util::Map* getFlavorsForFormats($longs* formats, ::java::awt::datatransfer::FlavorTable* map);
	virtual $Array<::java::awt::datatransfer::DataFlavor>* getFlavorsForFormatsAsArray($longs* formats, ::java::awt::datatransfer::FlavorTable* map);
	virtual ::java::util::Set* getFlavorsForFormatsAsSet($longs* formats, ::java::awt::datatransfer::FlavorTable* map);
	virtual ::java::lang::Long* getFormatForNativeAsLong($String* str) {return nullptr;}
	virtual ::java::util::SortedMap* getFormatsForFlavors($Array<::java::awt::datatransfer::DataFlavor>* flavors, ::java::awt::datatransfer::FlavorTable* map);
	virtual ::java::util::SortedMap* getFormatsForTransferable(::java::awt::datatransfer::Transferable* contents, ::java::awt::datatransfer::FlavorTable* map);
	virtual $longs* getFormatsForTransferableAsArray(::java::awt::datatransfer::Transferable* contents, ::java::awt::datatransfer::FlavorTable* map);
	static ::sun::awt::datatransfer::DataTransferer* getInstance();
	virtual $String* getNativeForFormat(int64_t format) {return nullptr;}
	virtual ::java::util::LinkedHashSet* getPlatformMappingsForFlavor(::java::awt::datatransfer::DataFlavor* df);
	virtual ::java::util::LinkedHashSet* getPlatformMappingsForNative($String* nat);
	virtual ::sun::awt::datatransfer::ToolkitThreadBlockedHandler* getToolkitThreadBlockedHandler() {return nullptr;}
	static ::java::security::ProtectionDomain* getUserProtectionDomain(::java::awt::datatransfer::Transferable* contents);
	virtual $bytes* imageToPlatformBytes(::java::awt::Image* image, int64_t format) {return nullptr;}
	virtual $bytes* imageToStandardBytes(::java::awt::Image* image, $String* mimeType);
	virtual $bytes* imageToStandardBytesImpl(::java::awt::image::RenderedImage* renderedImage, $String* mimeType);
	static $bytes* inputStreamToByteArray(::java::io::InputStream* str);
	virtual bool isFileFormat(int64_t format) {return false;}
	static bool isFileInWebstartedCache(::java::io::File* f);
	bool isForbiddenToRead(::java::io::File* file, ::java::security::ProtectionDomain* protectionDomain);
	virtual bool isImageFormat(int64_t format) {return false;}
	virtual bool isLocaleDependentTextFormat(int64_t format) {return false;}
	virtual bool isTextFormat(int64_t format);
	virtual bool isURIListFormat(int64_t format);
	static $longs* keysToLongArray(::java::util::SortedMap* map);
	::java::util::ArrayList* lambda$castToFiles$1(::java::util::List* files, ::java::security::ProtectionDomain* userProtectionDomain);
	static bool lambda$constructFlavoredObject$2(::java::lang::reflect::Constructor* c);
	static bool lambda$constructFlavoredObject$3($Class* clazz, ::java::lang::reflect::Constructor* c);
	static ::java::io::IOException* lambda$constructFlavoredObject$4($Class* clazz, $Class* dfrc);
	$String* lambda$removeSuspectedData$0($String* str, ::java::security::ProtectionDomain* userProtectionDomain);
	virtual ::java::awt::Image* platformImageBytesToImage($bytes* bytes, int64_t format) {return nullptr;}
	virtual void processDataConversionRequests();
	virtual void registerTextFlavorProperties($String* nat, $String* charset, $String* eoln, $String* terminators);
	$String* removeSuspectedData(::java::awt::datatransfer::DataFlavor* flavor, ::java::awt::datatransfer::Transferable* contents, $String* str);
	static $Array<::java::awt::datatransfer::DataFlavor>* setToSortedDataFlavorArray(::java::util::Set* flavorsSet);
	virtual ::java::awt::Image* standardImageBytesToImage($bytes* bytes, $String* mimeType);
	virtual $Object* translateBytes($bytes* bytes, ::java::awt::datatransfer::DataFlavor* flavor, int64_t format, ::java::awt::datatransfer::Transferable* localeTransferable);
	$String* translateBytesToString($bytes* bytes, int64_t format, ::java::awt::datatransfer::Transferable* localeTransferable);
	virtual $Object* translateStream(::java::io::InputStream* str, ::java::awt::datatransfer::DataFlavor* flavor, int64_t format, ::java::awt::datatransfer::Transferable* localeTransferable);
	$Object* translateStreamToInputStream(::java::io::InputStream* str, ::java::awt::datatransfer::DataFlavor* flavor, int64_t format, ::java::awt::datatransfer::Transferable* localeTransferable);
	virtual $bytes* translateTransferable(::java::awt::datatransfer::Transferable* contents, ::java::awt::datatransfer::DataFlavor* flavor, int64_t format);
	$bytes* translateTransferableString($String* str, int64_t format);
	static ::java::awt::datatransfer::DataFlavor* javaTextEncodingFlavor;
	static ::java::util::Set* textNatives;
	static ::java::util::Map* nativeCharsets;
	static ::java::util::Map* nativeEOLNs;
	static ::java::util::Map* nativeTerminators;
	static $String* DATA_CONVERTER_KEY;
	static $StringArray* DEPLOYMENT_CACHE_PROPERTIES;
	static ::java::util::ArrayList* deploymentCacheDirectoryList;
};

		} // datatransfer
	} // awt
} // sun

#pragma pop_macro("DATA_CONVERTER_KEY")
#pragma pop_macro("DEPLOYMENT_CACHE_PROPERTIES")

#endif // _sun_awt_datatransfer_DataTransferer_h_