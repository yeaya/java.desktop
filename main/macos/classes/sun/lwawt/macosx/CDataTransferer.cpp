#include <sun/lwawt/macosx/CDataTransferer.h>

#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/datatransfer/UnsupportedFlavorException.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/CharSequence.h>
#include <java/net/URL.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/text/Normalizer$Form.h>
#include <java/text/Normalizer.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <sun/awt/datatransfer/DataTransferer.h>
#include <sun/awt/datatransfer/ToolkitThreadBlockedHandler.h>
#include <sun/lwawt/macosx/CImage$Creator.h>
#include <sun/lwawt/macosx/CImage.h>
#include <sun/lwawt/macosx/CToolkitThreadBlockedHandler.h>
#include <jcpp.h>

#undef CF_FILE
#undef CF_HTML
#undef CF_JPEG
#undef CF_PDF
#undef CF_PNG
#undef CF_RICH_TEXT
#undef CF_STRING
#undef CF_TIFF
#undef CF_UNSUPPORTED
#undef CF_URL
#undef CF_XPICT
#undef NFC
#undef UTF_8

using $CharSequenceArray = $Array<::java::lang::CharSequence>;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $UnsupportedFlavorException = ::java::awt::datatransfer::UnsupportedFlavorException;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Normalizer = ::java::text::Normalizer;
using $Normalizer$Form = ::java::text::Normalizer$Form;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $DataTransferer = ::sun::awt::datatransfer::DataTransferer;
using $ToolkitThreadBlockedHandler = ::sun::awt::datatransfer::ToolkitThreadBlockedHandler;
using $CImage = ::sun::lwawt::macosx::CImage;
using $CImage$Creator = ::sun::lwawt::macosx::CImage$Creator;
using $CToolkitThreadBlockedHandler = ::sun::lwawt::macosx::CToolkitThreadBlockedHandler;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CDataTransferer_FieldInfo_[] = {
	{"predefinedClipboardNameMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Long;>;", $PRIVATE | $STATIC | $FINAL, $staticField(CDataTransferer, predefinedClipboardNameMap)},
	{"predefinedClipboardFormatMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Long;Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(CDataTransferer, predefinedClipboardFormatMap)},
	{"predefinedClipboardNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CDataTransferer, predefinedClipboardNames)},
	{"CF_UNSUPPORTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CDataTransferer, CF_UNSUPPORTED)},
	{"CF_STRING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CDataTransferer, CF_STRING)},
	{"CF_FILE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CDataTransferer, CF_FILE)},
	{"CF_TIFF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CDataTransferer, CF_TIFF)},
	{"CF_RICH_TEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CDataTransferer, CF_RICH_TEXT)},
	{"CF_HTML", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CDataTransferer, CF_HTML)},
	{"CF_PDF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CDataTransferer, CF_PDF)},
	{"CF_URL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CDataTransferer, CF_URL)},
	{"CF_PNG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CDataTransferer, CF_PNG)},
	{"CF_JPEG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CDataTransferer, CF_JPEG)},
	{"CF_XPICT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CDataTransferer, CF_XPICT)},
	{"fTransferer", "Lsun/lwawt/macosx/CDataTransferer;", nullptr, $PRIVATE | $STATIC, $staticField(CDataTransferer, fTransferer)},
	{"handler", "Lsun/awt/datatransfer/ToolkitThreadBlockedHandler;", nullptr, $PRIVATE | $FINAL, $field(CDataTransferer, handler)},
	{}
};

$MethodInfo _CDataTransferer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CDataTransferer::*)()>(&CDataTransferer::init$))},
	{"convertFileListToBytes", "(Ljava/util/ArrayList;)Ljava/io/ByteArrayOutputStream;", "(Ljava/util/ArrayList<Ljava/lang/String;>;)Ljava/io/ByteArrayOutputStream;", $PROTECTED, nullptr, "java.io.IOException"},
	{"dragQueryFile", "([B)[Ljava/lang/String;", nullptr, $PROTECTED},
	{"extractURL", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(CDataTransferer::*)($String*)>(&CDataTransferer::extractURL))},
	{"formatForIndex", "(J)Ljava/lang/String;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$String*(CDataTransferer::*)(int64_t)>(&CDataTransferer::formatForIndex))},
	{"getDefaultUnicodeEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFormatForNativeAsLong", "(Ljava/lang/String;)Ljava/lang/Long;", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"getInstanceImpl", "()Lsun/lwawt/macosx/CDataTransferer;", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<CDataTransferer*(*)()>(&CDataTransferer::getInstanceImpl))},
	{"getNativeForFormat", "(J)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getToolkitThreadBlockedHandler", "()Lsun/awt/datatransfer/ToolkitThreadBlockedHandler;", nullptr, $PUBLIC},
	{"imageToPlatformBytes", "(Ljava/awt/Image;J)[B", nullptr, $PROTECTED},
	{"isFileFormat", "(J)Z", nullptr, $PUBLIC},
	{"isImageFormat", "(J)Z", nullptr, $PUBLIC},
	{"isLocaleDependentTextFormat", "(J)Z", nullptr, $PUBLIC},
	{"isURIListFormat", "(J)Z", nullptr, $PROTECTED},
	{"isUriListFlavor", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PRIVATE, $method(static_cast<bool(CDataTransferer::*)($DataFlavor*)>(&CDataTransferer::isUriListFlavor))},
	{"nativeDragQueryFile", "([B)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$StringArray*(*)($bytes*)>(&CDataTransferer::nativeDragQueryFile))},
	{"platformImageBytesToImage", "([BJ)Ljava/awt/Image;", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"registerFormatWithPasteboard", "(Ljava/lang/String;)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(CDataTransferer::*)($String*)>(&CDataTransferer::registerFormatWithPasteboard))},
	{"translateBytes", "([BLjava/awt/datatransfer/DataFlavor;JLjava/awt/datatransfer/Transferable;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_formatForIndex 4
#define _METHOD_INDEX_nativeDragQueryFile 16
#define _METHOD_INDEX_registerFormatWithPasteboard 18

$ClassInfo _CDataTransferer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.macosx.CDataTransferer",
	"sun.awt.datatransfer.DataTransferer",
	nullptr,
	_CDataTransferer_FieldInfo_,
	_CDataTransferer_MethodInfo_
};

$Object* allocate$CDataTransferer($Class* clazz) {
	return $of($alloc(CDataTransferer));
}

$Map* CDataTransferer::predefinedClipboardNameMap = nullptr;
$Map* CDataTransferer::predefinedClipboardFormatMap = nullptr;
$StringArray* CDataTransferer::predefinedClipboardNames = nullptr;
CDataTransferer* CDataTransferer::fTransferer = nullptr;

void CDataTransferer::init$() {
	$DataTransferer::init$();
	$set(this, handler, $new($CToolkitThreadBlockedHandler));
}

CDataTransferer* CDataTransferer::getInstanceImpl() {
	$load(CDataTransferer);
	$synchronized(class$) {
		$init(CDataTransferer);
		if (CDataTransferer::fTransferer == nullptr) {
			$assignStatic(CDataTransferer::fTransferer, $new(CDataTransferer));
		}
		return CDataTransferer::fTransferer;
	}
}

$String* CDataTransferer::getDefaultUnicodeEncoding() {
	return "utf-16le"_s;
}

bool CDataTransferer::isLocaleDependentTextFormat(int64_t format) {
	return format == CDataTransferer::CF_STRING;
}

bool CDataTransferer::isFileFormat(int64_t format) {
	return format == CDataTransferer::CF_FILE;
}

bool CDataTransferer::isImageFormat(int64_t format) {
	int32_t ifmt = (int32_t)format;
	switch (ifmt) {
	case CDataTransferer::CF_TIFF:
		{}
	case CDataTransferer::CF_PDF:
		{}
	case CDataTransferer::CF_PNG:
		{}
	case CDataTransferer::CF_JPEG:
		{
			return true;
		}
	default:
		{
			return false;
		}
	}
}

$Object* CDataTransferer::translateBytes($bytes* bytes$renamed, $DataFlavor* flavor, int64_t format, $Transferable* transferable) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, bytes, bytes$renamed);
	$load($URL);
	if (format == CDataTransferer::CF_URL && $of($URL::class$)->equals($nc(flavor)->getRepresentationClass())) {
		$var($String, charset, $nc($($Charset::defaultCharset()))->name());
		$init($DataTransferer);
		if (transferable != nullptr && transferable->isDataFlavorSupported($DataTransferer::javaTextEncodingFlavor)) {
			try {
				$init($StandardCharsets);
				$assign(charset, $new($String, $cast($bytes, $(transferable->getTransferData($DataTransferer::javaTextEncodingFlavor))), $StandardCharsets::UTF_8));
			} catch ($UnsupportedFlavorException& cannotHappen) {
			}
		}
		$var($String, xml, $new($String, bytes, charset));
		return $of($new($URL, $(extractURL(xml))));
	}
	if (isUriListFlavor(flavor) && format == CDataTransferer::CF_FILE) {
		$var($StringArray, strings, dragQueryFile(bytes));
		if (strings == nullptr) {
			return $of(nullptr);
		}
		$assign(bytes, $nc($($String::join($(static_cast<$CharSequence*>($System::getProperty("line.separator"_s))), $fcast($CharSequenceArray, strings))))->getBytes());
		format = CDataTransferer::CF_STRING;
	} else if (format == CDataTransferer::CF_STRING) {
		$init($Normalizer$Form);
		$assign(bytes, $nc($($Normalizer::normalize($$new($String, bytes, "UTF8"_s), $Normalizer$Form::NFC)))->getBytes("UTF8"_s));
	}
	return $of($DataTransferer::translateBytes(bytes, flavor, format, transferable));
}

$String* CDataTransferer::extractURL($String* xml) {
	$useLocalCurrentObjectStackCache();
	$var($Pattern, urlExtractorPattern, $Pattern::compile("<string>(.*)</string>"_s));
	$var($Matcher, matcher, $nc(urlExtractorPattern)->matcher(xml));
	if ($nc(matcher)->find()) {
		return matcher->group(1);
	} else {
		return nullptr;
	}
}

$Long* CDataTransferer::getFormatForNativeAsLong($String* str) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Long, format, $cast($Long, $nc(CDataTransferer::predefinedClipboardNameMap)->get(str)));
		if (format == nullptr) {
			if ($nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->isHeadlessInstance()) {
				return $Long::valueOf((int64_t)-1);
			}
			$assign(format, $Long::valueOf(registerFormatWithPasteboard(str)));
			$nc(CDataTransferer::predefinedClipboardNameMap)->put(str, format);
			$nc(CDataTransferer::predefinedClipboardFormatMap)->put(format, str);
		}
		return format;
	}
}

int64_t CDataTransferer::registerFormatWithPasteboard($String* type) {
	int64_t $ret = 0;
	$prepareNative(CDataTransferer, registerFormatWithPasteboard, int64_t, $String* type);
	$ret = $invokeNative(type);
	$finishNative();
	return $ret;
}

$String* CDataTransferer::formatForIndex(int64_t index) {
	$var($String, $ret, nullptr);
	$prepareNative(CDataTransferer, formatForIndex, $String*, int64_t index);
	$assign($ret, $invokeNativeObject(index));
	$finishNative();
	return $ret;
}

$String* CDataTransferer::getNativeForFormat(int64_t format) {
	$useLocalCurrentObjectStackCache();
	$var($String, returnValue, nullptr);
	if (format >= 0 && format < $nc(CDataTransferer::predefinedClipboardNames)->length) {
		$assign(returnValue, $nc(CDataTransferer::predefinedClipboardNames)->get((int32_t)format));
	} else {
		$var($Long, formatObj, $Long::valueOf(format));
		$assign(returnValue, $cast($String, $nc(CDataTransferer::predefinedClipboardFormatMap)->get(formatObj)));
		if (returnValue == nullptr) {
			$assign(returnValue, formatForIndex(format));
			if (returnValue != nullptr) {
				$nc(CDataTransferer::predefinedClipboardNameMap)->put(returnValue, formatObj);
				$nc(CDataTransferer::predefinedClipboardFormatMap)->put(formatObj, returnValue);
			}
		}
	}
	if (returnValue == nullptr) {
		$assign(returnValue, $nc(CDataTransferer::predefinedClipboardNames)->get(CDataTransferer::CF_UNSUPPORTED));
	}
	return returnValue;
}

$ToolkitThreadBlockedHandler* CDataTransferer::getToolkitThreadBlockedHandler() {
	return this->handler;
}

$bytes* CDataTransferer::imageToPlatformBytes($Image* image, int64_t format) {
	return $nc($($CImage::getCreator()))->getPlatformImageBytes(image);
}

$StringArray* CDataTransferer::nativeDragQueryFile($bytes* bytes) {
	$init(CDataTransferer);
	$var($StringArray, $ret, nullptr);
	$prepareNativeStatic(CDataTransferer, nativeDragQueryFile, $StringArray*, $bytes* bytes);
	$assign($ret, $invokeNativeStaticObject(bytes));
	$finishNativeStatic();
	return $ret;
}

$StringArray* CDataTransferer::dragQueryFile($bytes* bytes) {
	if (bytes == nullptr) {
		return nullptr;
	}
	if ($$new($String, bytes)->startsWith("Unsupported type"_s)) {
		return nullptr;
	}
	return nativeDragQueryFile(bytes);
}

$Image* CDataTransferer::platformImageBytesToImage($bytes* bytes, int64_t format) {
	return $nc($($CImage::getCreator()))->createImageFromPlatformImageBytes(bytes);
}

$ByteArrayOutputStream* CDataTransferer::convertFileListToBytes($ArrayList* fileList) {
	$useLocalCurrentObjectStackCache();
	$var($ByteArrayOutputStream, bos, $new($ByteArrayOutputStream));
	{
		$var($Iterator, i$, $nc(fileList)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, file, $cast($String, i$->next()));
			{
				$var($bytes, bytes, $nc(file)->getBytes());
				bos->write(bytes, 0, bytes->length);
				bos->write(0);
			}
		}
	}
	return bos;
}

bool CDataTransferer::isURIListFormat(int64_t format) {
	$useLocalCurrentObjectStackCache();
	$var($String, nat, getNativeForFormat(format));
	if (nat == nullptr) {
		return false;
	}
	try {
		$var($DataFlavor, df, $new($DataFlavor, nat));
		if (isUriListFlavor(df)) {
			return true;
		}
	} catch ($Exception& e) {
	}
	return false;
}

bool CDataTransferer::isUriListFlavor($DataFlavor* df) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc($($nc(df)->getPrimaryType()))->equals("text"_s);
	if (var$0 && $nc($(df->getSubType()))->equals("uri-list"_s)) {
		return true;
	}
	return false;
}

void clinit$CDataTransferer($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(CDataTransferer::predefinedClipboardNames, $new($StringArray, {
		""_s,
		"STRING"_s,
		"FILE_NAME"_s,
		"TIFF"_s,
		"RICH_TEXT"_s,
		"HTML"_s,
		"PDF"_s,
		"URL"_s,
		"PNG"_s,
		"JFIF"_s,
		"XPICT"_s
	}));
	{
		$var($Map, nameMap, $new($HashMap, $nc(CDataTransferer::predefinedClipboardNames)->length, 1.0f));
		$var($Map, formatMap, $new($HashMap, $nc(CDataTransferer::predefinedClipboardNames)->length, 1.0f));
		for (int32_t i = 1; i < $nc(CDataTransferer::predefinedClipboardNames)->length; ++i) {
			nameMap->put($nc(CDataTransferer::predefinedClipboardNames)->get(i), $($Long::valueOf((int64_t)i)));
			formatMap->put($($Long::valueOf((int64_t)i)), $nc(CDataTransferer::predefinedClipboardNames)->get(i));
		}
		$assignStatic(CDataTransferer::predefinedClipboardNameMap, $Collections::synchronizedMap(nameMap));
		$assignStatic(CDataTransferer::predefinedClipboardFormatMap, $Collections::synchronizedMap(formatMap));
	}
}

CDataTransferer::CDataTransferer() {
}

$Class* CDataTransferer::load$($String* name, bool initialize) {
	$loadClass(CDataTransferer, name, initialize, &_CDataTransferer_ClassInfo_, clinit$CDataTransferer, allocate$CDataTransferer);
	return class$;
}

$Class* CDataTransferer::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun