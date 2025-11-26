#include <sun/awt/X11/XDataTransferer.h>

#include <java/awt/Image.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/WritableRaster.h>
#include <java/awt/image/WritableRenderedImage.h>
#include <java/io/BufferedReader.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/util/ArrayList.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/Set.h>
#include <javax/imageio/ImageIO.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/ImageWriter.h>
#include <javax/imageio/spi/ImageWriterSpi.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XToolkitThreadBlockedHandler.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/awt/datatransfer/DataTransferer.h>
#include <sun/awt/datatransfer/ToolkitThreadBlockedHandler.h>
#include <sun/datatransfer/DataFlavorUtil.h>
#include <jcpp.h>

#undef DT_NET_FILE_ATOM
#undef FILE_NAME_ATOM
#undef INCR_ATOM
#undef JFIF_ATOM
#undef MULTIPLE_ATOM
#undef PNG_ATOM
#undef TARGETS_ATOM

using $URIArray = $Array<::java::net::URI>;
using $Image = ::java::awt::Image;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $WritableRenderedImage = ::java::awt::image::WritableRenderedImage;
using $BufferedReader = ::java::io::BufferedReader;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $ArrayList = ::java::util::ArrayList;
using $HashSet = ::java::util::HashSet;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $Set = ::java::util::Set;
using $ImageIO = ::javax::imageio::ImageIO;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $ImageWriter = ::javax::imageio::ImageWriter;
using $ImageWriterSpi = ::javax::imageio::spi::ImageWriterSpi;
using $SunToolkit = ::sun::awt::SunToolkit;
using $XAtom = ::sun::awt::X11::XAtom;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XToolkitThreadBlockedHandler = ::sun::awt::X11::XToolkitThreadBlockedHandler;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $DataTransferer = ::sun::awt::datatransfer::DataTransferer;
using $ToolkitThreadBlockedHandler = ::sun::awt::datatransfer::ToolkitThreadBlockedHandler;
using $DataFlavorUtil = ::sun::datatransfer::DataFlavorUtil;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XDataTransferer_FieldInfo_[] = {
	{"FILE_NAME_ATOM", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XDataTransferer, FILE_NAME_ATOM)},
	{"DT_NET_FILE_ATOM", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XDataTransferer, DT_NET_FILE_ATOM)},
	{"PNG_ATOM", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XDataTransferer, PNG_ATOM)},
	{"JFIF_ATOM", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XDataTransferer, JFIF_ATOM)},
	{"TARGETS_ATOM", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XDataTransferer, TARGETS_ATOM)},
	{"INCR_ATOM", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XDataTransferer, INCR_ATOM)},
	{"MULTIPLE_ATOM", "Lsun/awt/X11/XAtom;", nullptr, $STATIC | $FINAL, $staticField(XDataTransferer, MULTIPLE_ATOM)},
	{"transferer", "Lsun/awt/X11/XDataTransferer;", nullptr, $PRIVATE | $STATIC, $staticField(XDataTransferer, transferer)},
	{"defaultSpecifier", "Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PRIVATE | $STATIC, $staticField(XDataTransferer, defaultSpecifier)},
	{}
};

$MethodInfo _XDataTransferer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XDataTransferer::*)()>(&XDataTransferer::init$))},
	{"convertFileListToBytes", "(Ljava/util/ArrayList;)Ljava/io/ByteArrayOutputStream;", "(Ljava/util/ArrayList<Ljava/lang/String;>;)Ljava/io/ByteArrayOutputStream;", $PROTECTED, nullptr, "java.io.IOException"},
	{"dragQueryFile", "([B)[Ljava/lang/String;", nullptr, $PROTECTED},
	{"dragQueryURIs", "(Ljava/io/InputStream;JLjava/awt/datatransfer/Transferable;)[Ljava/net/URI;", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"getCharsetForTextFormat", "(Ljava/lang/Long;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getDefaultImageTypeSpecifier", "()Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PRIVATE, $method(static_cast<$ImageTypeSpecifier*(XDataTransferer::*)()>(&XDataTransferer::getDefaultImageTypeSpecifier))},
	{"getDefaultUnicodeEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFormatForNativeAsLong", "(Ljava/lang/String;)Ljava/lang/Long;", nullptr, $PROTECTED},
	{"getInstanceImpl", "()Lsun/awt/X11/XDataTransferer;", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<XDataTransferer*(*)()>(&XDataTransferer::getInstanceImpl))},
	{"getNativeForFormat", "(J)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getPlatformMappingsForFlavor", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/util/LinkedHashSet;", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/util/LinkedHashSet<Ljava/lang/String;>;", $PUBLIC},
	{"getPlatformMappingsForNative", "(Ljava/lang/String;)Ljava/util/LinkedHashSet;", "(Ljava/lang/String;)Ljava/util/LinkedHashSet<Ljava/awt/datatransfer/DataFlavor;>;", $PUBLIC},
	{"getTargetNameForAtom", "(J)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(XDataTransferer::*)(int64_t)>(&XDataTransferer::getTargetNameForAtom))},
	{"getToolkitThreadBlockedHandler", "()Lsun/awt/datatransfer/ToolkitThreadBlockedHandler;", nullptr, $PUBLIC},
	{"imageToPlatformBytes", "(Ljava/awt/Image;J)[B", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"isFileFormat", "(J)Z", nullptr, $PUBLIC},
	{"isImageFormat", "(J)Z", nullptr, $PUBLIC},
	{"isLocaleDependentTextFormat", "(J)Z", nullptr, $PUBLIC},
	{"isMimeFormat", "(JLjava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(XDataTransferer::*)(int64_t,$String*)>(&XDataTransferer::isMimeFormat))},
	{"isTextFormat", "(J)Z", nullptr, $PUBLIC},
	{"isURIListFormat", "(J)Z", nullptr, $PROTECTED},
	{"platformImageBytesToImage", "([BJ)Ljava/awt/Image;", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _XDataTransferer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XDataTransferer",
	"sun.awt.datatransfer.DataTransferer",
	nullptr,
	_XDataTransferer_FieldInfo_,
	_XDataTransferer_MethodInfo_
};

$Object* allocate$XDataTransferer($Class* clazz) {
	return $of($alloc(XDataTransferer));
}

$XAtom* XDataTransferer::FILE_NAME_ATOM = nullptr;
$XAtom* XDataTransferer::DT_NET_FILE_ATOM = nullptr;
$XAtom* XDataTransferer::PNG_ATOM = nullptr;
$XAtom* XDataTransferer::JFIF_ATOM = nullptr;
$XAtom* XDataTransferer::TARGETS_ATOM = nullptr;
$XAtom* XDataTransferer::INCR_ATOM = nullptr;
$XAtom* XDataTransferer::MULTIPLE_ATOM = nullptr;
XDataTransferer* XDataTransferer::transferer = nullptr;
$ImageTypeSpecifier* XDataTransferer::defaultSpecifier = nullptr;

void XDataTransferer::init$() {
	$DataTransferer::init$();
}

XDataTransferer* XDataTransferer::getInstanceImpl() {
	$load(XDataTransferer);
	$synchronized(class$) {
		$init(XDataTransferer);
		if (XDataTransferer::transferer == nullptr) {
			$assignStatic(XDataTransferer::transferer, $new(XDataTransferer));
		}
		return XDataTransferer::transferer;
	}
}

$String* XDataTransferer::getDefaultUnicodeEncoding() {
	return "iso-10646-ucs-2"_s;
}

bool XDataTransferer::isLocaleDependentTextFormat(int64_t format) {
	return false;
}

bool XDataTransferer::isTextFormat(int64_t format) {
	bool var$0 = $DataTransferer::isTextFormat(format);
	return var$0 || isMimeFormat(format, "text"_s);
}

$String* XDataTransferer::getCharsetForTextFormat($Long* lFormat) {
	$useLocalCurrentObjectStackCache();
	if (isMimeFormat($nc(lFormat)->longValue(), "text"_s)) {
		$var($String, nat, getNativeForFormat($nc(lFormat)->longValue()));
		$var($DataFlavor, df, $new($DataFlavor, nat, ($String*)nullptr));
		if (!$DataFlavorUtil::doesSubtypeSupportCharset(df)) {
			return nullptr;
		}
		$var($String, charset, df->getParameter("charset"_s));
		if (charset != nullptr) {
			return charset;
		}
	}
	return $DataTransferer::getCharsetForTextFormat(lFormat);
}

bool XDataTransferer::isURIListFormat(int64_t format) {
	$useLocalCurrentObjectStackCache();
	$var($String, nat, getNativeForFormat(format));
	if (nat == nullptr) {
		return false;
	}
	try {
		$var($DataFlavor, df, $new($DataFlavor, nat));
		bool var$0 = $nc($(df->getPrimaryType()))->equals("text"_s);
		if (var$0 && $nc($(df->getSubType()))->equals("uri-list"_s)) {
			return true;
		}
	} catch ($Exception& e) {
	}
	return false;
}

bool XDataTransferer::isFileFormat(int64_t format) {
	bool var$0 = format == $nc(XDataTransferer::FILE_NAME_ATOM)->getAtom();
	return var$0 || format == $nc(XDataTransferer::DT_NET_FILE_ATOM)->getAtom();
}

bool XDataTransferer::isImageFormat(int64_t format) {
	bool var$1 = format == $nc(XDataTransferer::PNG_ATOM)->getAtom();
	bool var$0 = var$1 || format == $nc(XDataTransferer::JFIF_ATOM)->getAtom();
	return var$0 || isMimeFormat(format, "image"_s);
}

$Long* XDataTransferer::getFormatForNativeAsLong($String* str) {
	return $Long::valueOf($nc($($XAtom::get(str)))->getAtom());
}

$String* XDataTransferer::getNativeForFormat(int64_t format) {
	return getTargetNameForAtom(format);
}

$ToolkitThreadBlockedHandler* XDataTransferer::getToolkitThreadBlockedHandler() {
	return $XToolkitThreadBlockedHandler::getToolkitThreadBlockedHandler();
}

$String* XDataTransferer::getTargetNameForAtom(int64_t atom) {
	return $nc($($XAtom::get(atom)))->getName();
}

$bytes* XDataTransferer::imageToPlatformBytes($Image* image, int64_t format) {
	$useLocalCurrentObjectStackCache();
	$var($String, mimeType, nullptr);
	if (format == $nc(XDataTransferer::PNG_ATOM)->getAtom()) {
		$assign(mimeType, "image/png"_s);
	} else if (format == $nc(XDataTransferer::JFIF_ATOM)->getAtom()) {
		$assign(mimeType, "image/jpeg"_s);
	} else {
		try {
			$var($String, nat, getNativeForFormat(format));
			$var($DataFlavor, df, $new($DataFlavor, nat));
			$var($String, primaryType, df->getPrimaryType());
			if ("image"_s->equals(primaryType)) {
				$var($String, var$0, $$str({$(df->getPrimaryType()), "/"_s}));
				$assign(mimeType, $concat(var$0, $(df->getSubType())));
			}
		} catch ($Exception& e) {
		}
	}
	if (mimeType != nullptr) {
		return imageToStandardBytes(image, mimeType);
	} else {
		$var($String, nativeFormat, getNativeForFormat(format));
		$throwNew($IOException, $$str({"Translation to "_s, nativeFormat, " is not supported."_s}));
	}
}

$ByteArrayOutputStream* XDataTransferer::convertFileListToBytes($ArrayList* fileList) {
	$useLocalCurrentObjectStackCache();
	$var($ByteArrayOutputStream, bos, $new($ByteArrayOutputStream));
	for (int32_t i = 0; i < $nc(fileList)->size(); ++i) {
		$var($bytes, bytes, $nc(($cast($String, $(fileList->get(i)))))->getBytes());
		if (i != 0) {
			bos->write(0);
		}
		bos->write(bytes, 0, bytes->length);
	}
	return bos;
}

$Image* XDataTransferer::platformImageBytesToImage($bytes* bytes, int64_t format) {
	$useLocalCurrentObjectStackCache();
	$var($String, mimeType, nullptr);
	if (format == $nc(XDataTransferer::PNG_ATOM)->getAtom()) {
		$assign(mimeType, "image/png"_s);
	} else if (format == $nc(XDataTransferer::JFIF_ATOM)->getAtom()) {
		$assign(mimeType, "image/jpeg"_s);
	} else {
		try {
			$var($String, nat, getNativeForFormat(format));
			$var($DataFlavor, df, $new($DataFlavor, nat));
			$var($String, primaryType, df->getPrimaryType());
			if ("image"_s->equals(primaryType)) {
				$var($String, var$0, $$str({$(df->getPrimaryType()), "/"_s}));
				$assign(mimeType, $concat(var$0, $(df->getSubType())));
			}
		} catch ($Exception& e) {
		}
	}
	if (mimeType != nullptr) {
		return standardImageBytesToImage(bytes, mimeType);
	} else {
		$var($String, nativeFormat, getNativeForFormat(format));
		$throwNew($IOException, $$str({"Translation from "_s, nativeFormat, " is not supported."_s}));
	}
}

$StringArray* XDataTransferer::dragQueryFile($bytes* bytes) {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		$var($StringArray, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $XlibWrapper::XTextPropertyToStringList(bytes, $nc($($XAtom::get("STRING"_s)))->getAtom()));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$URIArray* XDataTransferer::dragQueryURIs($InputStream* stream, int64_t format, $Transferable* localeTransferable) {
	$useLocalCurrentObjectStackCache();
	$var($String, charset, getBestCharsetForTextFormat($($Long::valueOf(format)), localeTransferable));
	{
		$var($InputStreamReader, isr, $new($InputStreamReader, stream, charset));
		{
			$var($Throwable, var$0, nullptr);
			$var($URIArray, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$var($BufferedReader, reader, $new($BufferedReader, isr));
					{
						$var($Throwable, var$3, nullptr);
						$var($URIArray, var$5, nullptr);
						bool return$4 = false;
						try {
							try {
								$var($String, line, nullptr);
								$var($ArrayList, uriList, $new($ArrayList));
								$var($URI, uri, nullptr);
								while (($assign(line, reader->readLine())) != nullptr) {
									try {
										$assign(uri, $new($URI, line));
									} catch ($URISyntaxException& uriSyntaxException) {
										$throwNew($IOException, static_cast<$Throwable*>(uriSyntaxException));
									}
									uriList->add(uri);
								}
								$assign(var$5, $fcast($URIArray, uriList->toArray($$new($URIArray, uriList->size()))));
								return$4 = true;
								goto $finally1;
							} catch ($Throwable& t$) {
								try {
									reader->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable& var$6) {
							$assign(var$3, var$6);
						} $finally1: {
							reader->close();
						}
						if (var$3 != nullptr) {
							$throw(var$3);
						}
						if (return$4) {
							$assign(var$2, var$5);
							return$1 = true;
							goto $finally;
						}
					}
				} catch ($Throwable& t$) {
					try {
						isr->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$7) {
				$assign(var$0, var$7);
			} $finally: {
				isr->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

bool XDataTransferer::isMimeFormat(int64_t format, $String* primaryType) {
	$useLocalCurrentObjectStackCache();
	$var($String, nat, getNativeForFormat(format));
	if (nat == nullptr) {
		return false;
	}
	try {
		$var($DataFlavor, df, $new($DataFlavor, nat));
		if ($nc(primaryType)->equals($(df->getPrimaryType()))) {
			return true;
		}
	} catch ($Exception& e) {
	}
	return false;
}

$LinkedHashSet* XDataTransferer::getPlatformMappingsForNative($String* nat) {
	$useLocalCurrentObjectStackCache();
	$var($LinkedHashSet, flavors, $new($LinkedHashSet));
	if (nat == nullptr) {
		return flavors;
	}
	$var($DataFlavor, df, nullptr);
	try {
		$assign(df, $new($DataFlavor, nat));
	} catch ($Exception& e) {
		return flavors;
	}
	$var($DataFlavor, value, df);
	$var($String, primaryType, $nc(df)->getPrimaryType());
	$var($String, baseType, $str({primaryType, "/"_s, $(df->getSubType())}));
	if ("image"_s->equals(primaryType)) {
		$var($Iterator, readers, $ImageIO::getImageReadersByMIMEType(baseType));
		if ($nc(readers)->hasNext()) {
			flavors->add($DataFlavor::imageFlavor);
		}
	}
	flavors->add(value);
	return flavors;
}

$ImageTypeSpecifier* XDataTransferer::getDefaultImageTypeSpecifier() {
	$useLocalCurrentObjectStackCache();
	if (XDataTransferer::defaultSpecifier == nullptr) {
		$var($ColorModel, model, $ColorModel::getRGBdefault());
		$var($WritableRaster, raster, $nc(model)->createCompatibleWritableRaster(10, 10));
		$var($BufferedImage, bufferedImage, $new($BufferedImage, model, raster, model->isAlphaPremultiplied(), ($Hashtable*)nullptr));
		$assignStatic(XDataTransferer::defaultSpecifier, $new($ImageTypeSpecifier, bufferedImage));
	}
	return XDataTransferer::defaultSpecifier;
}

$LinkedHashSet* XDataTransferer::getPlatformMappingsForFlavor($DataFlavor* df) {
	$useLocalCurrentObjectStackCache();
	$var($LinkedHashSet, natives, $new($LinkedHashSet, 1));
	if (df == nullptr) {
		return natives;
	}
	$var($String, charset, $nc(df)->getParameter("charset"_s));
	$var($String, var$0, $$str({$(df->getPrimaryType()), "/"_s}));
	$var($String, baseType, $concat(var$0, $(df->getSubType())));
	$var($String, mimeType, baseType);
	if (charset != nullptr && $DataFlavorUtil::isFlavorCharsetTextType(df)) {
		$plusAssign(mimeType, $$str({";charset="_s, charset}));
	}
	bool var$1 = df->getRepresentationClass() != nullptr;
	if (var$1) {
		bool var$3 = df->isRepresentationClassInputStream();
		bool var$2 = var$3 || df->isRepresentationClassByteBuffer();
		$load($bytes);
		var$1 = (var$2 || $of($getClass($bytes))->equals(df->getRepresentationClass()));
	}
	if (var$1) {
		natives->add(mimeType);
	}
	if ($nc($DataFlavor::imageFlavor)->equals(df)) {
		$var($StringArray, mimeTypes, $ImageIO::getWriterMIMETypes());
		if (mimeTypes != nullptr) {
			{
				$var($StringArray, arr$, mimeTypes);
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($String, mime, arr$->get(i$));
					{
						$var($Iterator, writers, $ImageIO::getImageWritersByMIMEType(mime));
						while ($nc(writers)->hasNext()) {
							$var($ImageWriter, imageWriter, $cast($ImageWriter, writers->next()));
							$var($ImageWriterSpi, writerSpi, $nc(imageWriter)->getOriginatingProvider());
							if (writerSpi != nullptr && writerSpi->canEncodeImage($(getDefaultImageTypeSpecifier()))) {
								natives->add(mime);
								break;
							}
						}
					}
				}
			}
		}
	} else if ($DataFlavorUtil::isFlavorCharsetTextType(df)) {
		if ($nc($DataFlavor::stringFlavor)->equals(df)) {
			$assign(baseType, "text/plain"_s);
		}
		{
			$var($Iterator, i$, $nc($($DataFlavorUtil::standardEncodings()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, encoding, $cast($String, i$->next()));
				{
					if (!$nc(encoding)->equals(charset)) {
						natives->add($$str({baseType, ";charset="_s, encoding}));
					}
				}
			}
		}
		if (!natives->contains(baseType)) {
			natives->add(baseType);
		}
	}
	return natives;
}

void clinit$XDataTransferer($Class* class$) {
	$assignStatic(XDataTransferer::FILE_NAME_ATOM, $XAtom::get("FILE_NAME"_s));
	$assignStatic(XDataTransferer::DT_NET_FILE_ATOM, $XAtom::get("_DT_NETFILE"_s));
	$assignStatic(XDataTransferer::PNG_ATOM, $XAtom::get("PNG"_s));
	$assignStatic(XDataTransferer::JFIF_ATOM, $XAtom::get("JFIF"_s));
	$assignStatic(XDataTransferer::TARGETS_ATOM, $XAtom::get("TARGETS"_s));
	$assignStatic(XDataTransferer::INCR_ATOM, $XAtom::get("INCR"_s));
	$assignStatic(XDataTransferer::MULTIPLE_ATOM, $XAtom::get("MULTIPLE"_s));
	$assignStatic(XDataTransferer::defaultSpecifier, nullptr);
}

XDataTransferer::XDataTransferer() {
}

$Class* XDataTransferer::load$($String* name, bool initialize) {
	$loadClass(XDataTransferer, name, initialize, &_XDataTransferer_ClassInfo_, clinit$XDataTransferer, allocate$XDataTransferer);
	return class$;
}

$Class* XDataTransferer::class$ = nullptr;

		} // X11
	} // awt
} // sun