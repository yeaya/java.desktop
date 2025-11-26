#include <sun/print/CUPSPrinter.h>

#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/AssertionError.h>
#include <java/net/HttpURLConnection.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <javax/print/attribute/Size2DSyntax.h>
#include <javax/print/attribute/standard/MediaPrintableArea.h>
#include <javax/print/attribute/standard/MediaSize.h>
#include <javax/print/attribute/standard/MediaSizeName.h>
#include <javax/print/attribute/standard/MediaTray.h>
#include <sun/print/AttributeClass.h>
#include <sun/print/CUPSPrinter$1.h>
#include <sun/print/CUPSPrinter$2.h>
#include <sun/print/CUPSPrinter$3.h>
#include <sun/print/CustomMediaSizeName.h>
#include <sun/print/CustomMediaTray.h>
#include <sun/print/IPPPrintService.h>
#include <sun/print/PrintServiceLookupProvider.h>
#include <jcpp.h>

#undef ATTRIBUTES_CHARSET
#undef ATTRIBUTES_NATURAL_LANGUAGE
#undef INCH
#undef OP_CUPS_GET_DEFAULT
#undef OP_CUPS_GET_PRINTERS
#undef PRINTER_DPI
#undef TAG_KEYWORD
#undef TAG_URI

using $HashMapArray = $Array<::java::util::HashMap>;
using $MediaPrintableAreaArray = $Array<::javax::print::attribute::standard::MediaPrintableArea>;
using $MediaSizeNameArray = $Array<::javax::print::attribute::standard::MediaSizeName>;
using $MediaTrayArray = $Array<::javax::print::attribute::standard::MediaTray>;
using $AttributeClassArray = $Array<::sun::print::AttributeClass>;
using $CustomMediaSizeNameArray = $Array<::sun::print::CustomMediaSizeName>;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $HttpURLConnection = ::java::net::HttpURLConnection;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Size2DSyntax = ::javax::print::attribute::Size2DSyntax;
using $MediaPrintableArea = ::javax::print::attribute::standard::MediaPrintableArea;
using $MediaSize = ::javax::print::attribute::standard::MediaSize;
using $MediaSizeName = ::javax::print::attribute::standard::MediaSizeName;
using $MediaTray = ::javax::print::attribute::standard::MediaTray;
using $AttributeClass = ::sun::print::AttributeClass;
using $CUPSPrinter$1 = ::sun::print::CUPSPrinter$1;
using $CUPSPrinter$2 = ::sun::print::CUPSPrinter$2;
using $CUPSPrinter$3 = ::sun::print::CUPSPrinter$3;
using $CustomMediaSizeName = ::sun::print::CustomMediaSizeName;
using $CustomMediaTray = ::sun::print::CustomMediaTray;
using $IPPPrintService = ::sun::print::IPPPrintService;
using $PrintServiceLookupProvider = ::sun::print::PrintServiceLookupProvider;

namespace sun {
	namespace print {

$FieldInfo _CUPSPrinter_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CUPSPrinter, $assertionsDisabled)},
	{"debugPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CUPSPrinter, debugPrefix)},
	{"PRINTER_DPI", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CUPSPrinter, PRINTER_DPI)},
	{"initialized", "Z", nullptr, $PRIVATE, $field(CUPSPrinter, initialized)},
	{"cupsMediaPrintables", "[Ljavax/print/attribute/standard/MediaPrintableArea;", nullptr, $PRIVATE, $field(CUPSPrinter, cupsMediaPrintables)},
	{"cupsMediaSNames", "[Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PRIVATE, $field(CUPSPrinter, cupsMediaSNames)},
	{"cupsCustomMediaSNames", "[Lsun/print/CustomMediaSizeName;", nullptr, $PRIVATE, $field(CUPSPrinter, cupsCustomMediaSNames)},
	{"cupsMediaTrays", "[Ljavax/print/attribute/standard/MediaTray;", nullptr, $PRIVATE, $field(CUPSPrinter, cupsMediaTrays)},
	{"nPageSizes", "I", nullptr, $PUBLIC, $field(CUPSPrinter, nPageSizes)},
	{"nTrays", "I", nullptr, $PUBLIC, $field(CUPSPrinter, nTrays)},
	{"media", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(CUPSPrinter, media)},
	{"pageSizes", "[F", nullptr, $PRIVATE, $field(CUPSPrinter, pageSizes)},
	{"resolutionsArray", "[I", nullptr, 0, $field(CUPSPrinter, resolutionsArray)},
	{"printer", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CUPSPrinter, printer)},
	{"libFound", "Z", nullptr, $PRIVATE | $STATIC, $staticField(CUPSPrinter, libFound)},
	{"cupsServer", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(CUPSPrinter, cupsServer)},
	{"cupsPort", "I", nullptr, $PRIVATE | $STATIC, $staticField(CUPSPrinter, cupsPort)},
	{}
};

$MethodInfo _CUPSPrinter_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(CUPSPrinter::*)($String*)>(&CUPSPrinter::init$))},
	{"canConnect", "(Ljava/lang/String;I)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)($String*,int32_t)>(&CUPSPrinter::canConnect))},
	{"getAllPrinters", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&CUPSPrinter::getAllPrinters))},
	{"getCupsDefaultPrinter", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)()>(&CUPSPrinter::getCupsDefaultPrinter))},
	{"getCupsPort", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&CUPSPrinter::getCupsPort))},
	{"getCupsServer", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)()>(&CUPSPrinter::getCupsServer))},
	{"getCustomMediaSizeNames", "()[Lsun/print/CustomMediaSizeName;", nullptr, 0},
	{"getDefaultMediaIndex", "()I", nullptr, $PUBLIC},
	{"getDefaultPrinter", "()[Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$StringArray*(*)()>(&CUPSPrinter::getDefaultPrinter))},
	{"getMedia", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED | $NATIVE, $method(static_cast<$StringArray*(*)($String*)>(&CUPSPrinter::getMedia))},
	{"getMediaPrintableArea", "()[Ljavax/print/attribute/standard/MediaPrintableArea;", nullptr, 0},
	{"getMediaSizeNames", "()[Ljavax/print/attribute/standard/MediaSizeName;", nullptr, 0},
	{"getMediaTrays", "()[Ljavax/print/attribute/standard/MediaTray;", nullptr, 0},
	{"getPageSizes", "(Ljava/lang/String;)[F", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED | $NATIVE, $method(static_cast<$floats*(*)($String*)>(&CUPSPrinter::getPageSizes))},
	{"getPort", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&CUPSPrinter::getPort))},
	{"getRawResolutions", "()[I", nullptr, 0},
	{"getResolutions", "(Ljava/lang/String;Ljava/util/ArrayList;)V", "(Ljava/lang/String;Ljava/util/ArrayList<Ljava/lang/Integer;>;)V", $PRIVATE | $STATIC | $SYNCHRONIZED | $NATIVE, $method(static_cast<void(*)($String*,$ArrayList*)>(&CUPSPrinter::getResolutions))},
	{"getServer", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)()>(&CUPSPrinter::getServer))},
	{"initIDs", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&CUPSPrinter::initIDs))},
	{"initMedia", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(CUPSPrinter::*)()>(&CUPSPrinter::initMedia))},
	{"isCupsRunning", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&CUPSPrinter::isCupsRunning))},
	{}
};

#define _METHOD_INDEX_canConnect 1
#define _METHOD_INDEX_getCupsDefaultPrinter 3
#define _METHOD_INDEX_getCupsPort 4
#define _METHOD_INDEX_getCupsServer 5
#define _METHOD_INDEX_getMedia 9
#define _METHOD_INDEX_getPageSizes 13
#define _METHOD_INDEX_getResolutions 16
#define _METHOD_INDEX_initIDs 18

$InnerClassInfo _CUPSPrinter_InnerClassesInfo_[] = {
	{"sun.print.CUPSPrinter$3", nullptr, nullptr, 0},
	{"sun.print.CUPSPrinter$2", nullptr, nullptr, 0},
	{"sun.print.CUPSPrinter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CUPSPrinter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.CUPSPrinter",
	"java.lang.Object",
	nullptr,
	_CUPSPrinter_FieldInfo_,
	_CUPSPrinter_MethodInfo_,
	nullptr,
	nullptr,
	_CUPSPrinter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.print.CUPSPrinter$3,sun.print.CUPSPrinter$2,sun.print.CUPSPrinter$1"
};

$Object* allocate$CUPSPrinter($Class* clazz) {
	return $of($alloc(CUPSPrinter));
}

bool CUPSPrinter::$assertionsDisabled = false;
$String* CUPSPrinter::debugPrefix = nullptr;
double CUPSPrinter::PRINTER_DPI = 0.0;
bool CUPSPrinter::libFound = false;
$String* CUPSPrinter::cupsServer = nullptr;
int32_t CUPSPrinter::cupsPort = 0;

$String* CUPSPrinter::getCupsServer() {
	$init(CUPSPrinter);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(CUPSPrinter, getCupsServer, $String*);
	$assign($ret, $invokeNativeStatic(CUPSPrinter, getCupsServer));
	$finishNativeStatic();
	return $ret;
}

int32_t CUPSPrinter::getCupsPort() {
	$init(CUPSPrinter);
	int32_t $ret = 0;
	$prepareNativeStatic(CUPSPrinter, getCupsPort, int32_t);
	$ret = $invokeNativeStatic(CUPSPrinter, getCupsPort);
	$finishNativeStatic();
	return $ret;
}

$String* CUPSPrinter::getCupsDefaultPrinter() {
	$init(CUPSPrinter);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(CUPSPrinter, getCupsDefaultPrinter, $String*);
	$assign($ret, $invokeNativeStatic(CUPSPrinter, getCupsDefaultPrinter));
	$finishNativeStatic();
	return $ret;
}

bool CUPSPrinter::canConnect($String* server, int32_t port) {
	$init(CUPSPrinter);
	bool $ret = false;
	$prepareNativeStatic(CUPSPrinter, canConnect, bool, $String* server, int32_t port);
	$ret = $invokeNativeStatic(CUPSPrinter, canConnect, server, port);
	$finishNativeStatic();
	return $ret;
}

bool CUPSPrinter::initIDs() {
	$init(CUPSPrinter);
	bool $ret = false;
	$prepareNativeStatic(CUPSPrinter, initIDs, bool);
	$ret = $invokeNativeStatic(CUPSPrinter, initIDs);
	$finishNativeStatic();
	return $ret;
}

$StringArray* CUPSPrinter::getMedia($String* printer) {
	$init(CUPSPrinter);
	$var($StringArray, $ret, nullptr);
	$prepareNativeStatic(CUPSPrinter, getMedia, $StringArray*, $String* printer);
	$assign($ret, $invokeNativeStatic(CUPSPrinter, getMedia, printer));
	$finishNativeStatic();
	return $ret;
}

$floats* CUPSPrinter::getPageSizes($String* printer) {
	$init(CUPSPrinter);
	$var($floats, $ret, nullptr);
	$prepareNativeStatic(CUPSPrinter, getPageSizes, $floats*, $String* printer);
	$assign($ret, $invokeNativeStatic(CUPSPrinter, getPageSizes, printer));
	$finishNativeStatic();
	return $ret;
}

void CUPSPrinter::getResolutions($String* printer, $ArrayList* resolutionList) {
	$init(CUPSPrinter);
	$prepareNativeStatic(CUPSPrinter, getResolutions, void, $String* printer, $ArrayList* resolutionList);
	$invokeNativeStatic(CUPSPrinter, getResolutions, printer, resolutionList);
	$finishNativeStatic();
}

void CUPSPrinter::init$($String* printerName) {
	$useLocalCurrentObjectStackCache();
	this->nPageSizes = 0;
	this->nTrays = 0;
	if (printerName == nullptr) {
		$throwNew($IllegalArgumentException, "null printer name"_s);
	}
	$set(this, printer, printerName);
	$set(this, cupsMediaSNames, nullptr);
	$set(this, cupsMediaPrintables, nullptr);
	$set(this, cupsMediaTrays, nullptr);
	this->initialized = false;
	if (!CUPSPrinter::libFound) {
		$throwNew($RuntimeException, "cups lib not found"_s);
	} else {
		$set(this, media, getMedia(this->printer));
		if (this->media == nullptr) {
			$throwNew($RuntimeException, "error getting PPD"_s);
		}
		$set(this, pageSizes, getPageSizes(this->printer));
		if (this->pageSizes != nullptr) {
			this->nPageSizes = $nc(this->pageSizes)->length / 6;
			this->nTrays = $nc(this->media)->length / 2 - this->nPageSizes;
			if (!CUPSPrinter::$assertionsDisabled && !(this->nTrays >= 0)) {
				$throwNew($AssertionError);
			}
		}
		$var($ArrayList, resolutionList, $new($ArrayList));
		getResolutions(this->printer, resolutionList);
		$set(this, resolutionsArray, $new($ints, resolutionList->size()));
		for (int32_t i = 0; i < resolutionList->size(); ++i) {
			$nc(this->resolutionsArray)->set(i, $nc(($cast($Integer, $(resolutionList->get(i)))))->intValue());
		}
	}
}

$MediaSizeNameArray* CUPSPrinter::getMediaSizeNames() {
	initMedia();
	return this->cupsMediaSNames;
}

$CustomMediaSizeNameArray* CUPSPrinter::getCustomMediaSizeNames() {
	initMedia();
	return this->cupsCustomMediaSNames;
}

int32_t CUPSPrinter::getDefaultMediaIndex() {
	return (($nc(this->pageSizes)->length > 1) ? $cast(int32_t, ($nc(this->pageSizes)->get($nc(this->pageSizes)->length - 1))) : 0);
}

$MediaPrintableAreaArray* CUPSPrinter::getMediaPrintableArea() {
	initMedia();
	return this->cupsMediaPrintables;
}

$MediaTrayArray* CUPSPrinter::getMediaTrays() {
	initMedia();
	return this->cupsMediaTrays;
}

$ints* CUPSPrinter::getRawResolutions() {
	return this->resolutionsArray;
}

void CUPSPrinter::initMedia() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->initialized) {
			return;
		} else {
			this->initialized = true;
		}
		if (this->pageSizes == nullptr) {
			return;
		}
		$set(this, cupsMediaPrintables, $new($MediaPrintableAreaArray, this->nPageSizes));
		$set(this, cupsMediaSNames, $new($MediaSizeNameArray, this->nPageSizes));
		$set(this, cupsCustomMediaSNames, $new($CustomMediaSizeNameArray, this->nPageSizes));
		$var($CustomMediaSizeName, msn, nullptr);
		$var($MediaPrintableArea, mpa, nullptr);
		float length = 0.0;
		float width = 0.0;
		float x = 0.0;
		float y = 0.0;
		float w = 0.0;
		float h = 0.0;
		for (int32_t i = 0; i < this->nPageSizes; ++i) {
			width = (float)($div($nc(this->pageSizes)->get(i * 6), CUPSPrinter::PRINTER_DPI));
			length = (float)($div($nc(this->pageSizes)->get(i * 6 + 1), CUPSPrinter::PRINTER_DPI));
			x = (float)($div($nc(this->pageSizes)->get(i * 6 + 2), CUPSPrinter::PRINTER_DPI));
			h = (float)($div($nc(this->pageSizes)->get(i * 6 + 3), CUPSPrinter::PRINTER_DPI));
			w = (float)($div($nc(this->pageSizes)->get(i * 6 + 4), CUPSPrinter::PRINTER_DPI));
			y = (float)($div($nc(this->pageSizes)->get(i * 6 + 5), CUPSPrinter::PRINTER_DPI));
			$assign(msn, $new($CustomMediaSizeName, $nc(this->media)->get(i * 2), $nc(this->media)->get(i * 2 + 1), width, length));
			if (($nc(this->cupsMediaSNames)->set(i, $(msn->getStandardMedia()))) == nullptr) {
				$nc(this->cupsMediaSNames)->set(i, msn);
				if ((width > 0.0) && (length > 0.0)) {
					try {
						$new($MediaSize, width, length, $Size2DSyntax::INCH, static_cast<$MediaSizeName*>(msn));
					} catch ($IllegalArgumentException& e) {
						$new($MediaSize, length, width, $Size2DSyntax::INCH, static_cast<$MediaSizeName*>(msn));
					}
				}
			}
			$nc(this->cupsCustomMediaSNames)->set(i, msn);
			$assign(mpa, nullptr);
			try {
				$assign(mpa, $new($MediaPrintableArea, x, y, w, h, $MediaPrintableArea::INCH));
			} catch ($IllegalArgumentException& e) {
				if (width > 0 && length > 0) {
					$assign(mpa, $new($MediaPrintableArea, (float)0, (float)0, width, length, $MediaPrintableArea::INCH));
				}
			}
			$nc(this->cupsMediaPrintables)->set(i, mpa);
		}
		$set(this, cupsMediaTrays, $new($MediaTrayArray, this->nTrays));
		$var($MediaTray, mt, nullptr);
		for (int32_t i = 0; i < this->nTrays; ++i) {
			$assign(mt, $new($CustomMediaTray, $nc(this->media)->get((this->nPageSizes + i) * 2), $nc(this->media)->get((this->nPageSizes + i) * 2 + 1)));
			$nc(this->cupsMediaTrays)->set(i, mt);
		}
	}
}

$StringArray* CUPSPrinter::getDefaultPrinter() {
	$init(CUPSPrinter);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($StringArray, printerInfo, $new($StringArray, 2));
	printerInfo->set(0, $(getCupsDefaultPrinter()));
	if (printerInfo->get(0) != nullptr) {
		printerInfo->set(1, nullptr);
		return $cast($StringArray, printerInfo->clone());
	}
	try {
		$var($String, var$0, "http"_s);
		$var($String, var$1, getServer());
		$var($URL, url, $new($URL, var$0, var$1, getPort(), ""_s));
		$var($HttpURLConnection, urlConnection, $IPPPrintService::getIPPConnection(url));
		if (urlConnection != nullptr) {
			$var($OutputStream, os, $cast($OutputStream, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($CUPSPrinter$2, urlConnection)))));
			if (os == nullptr) {
				return nullptr;
			}
			$init($AttributeClass);
			$var($AttributeClassArray, attCl, $new($AttributeClassArray, {
				$AttributeClass::ATTRIBUTES_CHARSET,
				$AttributeClass::ATTRIBUTES_NATURAL_LANGUAGE,
				$$new($AttributeClass, "requested-attributes"_s, $AttributeClass::TAG_URI, "printer-uri"_s)
			}));
			if ($IPPPrintService::writeIPPRequest(os, $IPPPrintService::OP_CUPS_GET_DEFAULT, attCl)) {
				$var($HashMap, defaultMap, nullptr);
				$var($InputStream, is, urlConnection->getInputStream());
				$var($HashMapArray, responseMap, $IPPPrintService::readIPPResponse(is));
				$nc(is)->close();
				if (responseMap != nullptr && responseMap->length > 0) {
					$assign(defaultMap, responseMap->get(0));
				} else {
					$IPPPrintService::debug_println($$str({CUPSPrinter::debugPrefix, " empty response map for GET_DEFAULT."_s}));
				}
				if (defaultMap == nullptr) {
					$nc(os)->close();
					urlConnection->disconnect();
					if ($PrintServiceLookupProvider::isMac()) {
						printerInfo->set(0, $($PrintServiceLookupProvider::getDefaultPrinterNameSysV()));
						printerInfo->set(1, nullptr);
						return $cast($StringArray, printerInfo->clone());
					} else {
						return nullptr;
					}
				}
				$var($AttributeClass, attribClass, $cast($AttributeClass, $nc(defaultMap)->get("printer-name"_s)));
				if (attribClass != nullptr) {
					printerInfo->set(0, $(attribClass->getStringValue()));
					$assign(attribClass, $cast($AttributeClass, defaultMap->get("printer-uri-supported"_s)));
					$IPPPrintService::debug_println($$str({CUPSPrinter::debugPrefix, "printer-uri-supported="_s, attribClass}));
					if (attribClass != nullptr) {
						printerInfo->set(1, $(attribClass->getStringValue()));
					} else {
						printerInfo->set(1, nullptr);
					}
					$nc(os)->close();
					urlConnection->disconnect();
					return $cast($StringArray, printerInfo->clone());
				}
			}
			$nc(os)->close();
			urlConnection->disconnect();
		}
	} catch ($Exception& e) {
	}
	return nullptr;
}

$StringArray* CUPSPrinter::getAllPrinters() {
	$init(CUPSPrinter);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$var($String, var$0, "http"_s);
		$var($String, var$1, getServer());
		$var($URL, url, $new($URL, var$0, var$1, getPort(), ""_s));
		$var($HttpURLConnection, urlConnection, $IPPPrintService::getIPPConnection(url));
		if (urlConnection != nullptr) {
			$var($OutputStream, os, $cast($OutputStream, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($CUPSPrinter$3, urlConnection)))));
			if (os == nullptr) {
				return nullptr;
			}
			$init($AttributeClass);
			$var($AttributeClassArray, attCl, $new($AttributeClassArray, {
				$AttributeClass::ATTRIBUTES_CHARSET,
				$AttributeClass::ATTRIBUTES_NATURAL_LANGUAGE,
				$$new($AttributeClass, "requested-attributes"_s, $AttributeClass::TAG_KEYWORD, "printer-uri-supported"_s)
			}));
			if ($IPPPrintService::writeIPPRequest(os, $IPPPrintService::OP_CUPS_GET_PRINTERS, attCl)) {
				$var($InputStream, is, urlConnection->getInputStream());
				$var($HashMapArray, responseMap, $IPPPrintService::readIPPResponse(is));
				$nc(is)->close();
				$nc(os)->close();
				urlConnection->disconnect();
				if (responseMap == nullptr || $nc(responseMap)->length == 0) {
					return nullptr;
				}
				$var($ArrayList, printerNames, $new($ArrayList));
				for (int32_t i = 0; i < $nc(responseMap)->length; ++i) {
					$var($AttributeClass, attribClass, $cast($AttributeClass, $nc(responseMap->get(i))->get("printer-uri-supported"_s)));
					if (attribClass != nullptr) {
						$var($String, nameStr, attribClass->getStringValue());
						printerNames->add(nameStr);
					}
				}
				return $fcast($StringArray, printerNames->toArray($$new($StringArray, 0)));
			} else {
				$nc(os)->close();
				urlConnection->disconnect();
			}
		}
	} catch ($Exception& e) {
	}
	return nullptr;
}

$String* CUPSPrinter::getServer() {
	$init(CUPSPrinter);
	return CUPSPrinter::cupsServer;
}

int32_t CUPSPrinter::getPort() {
	$init(CUPSPrinter);
	return CUPSPrinter::cupsPort;
}

bool CUPSPrinter::isCupsRunning() {
	$init(CUPSPrinter);
	$useLocalCurrentObjectStackCache();
	$IPPPrintService::debug_println($$str({CUPSPrinter::debugPrefix, "libFound "_s, $$str(CUPSPrinter::libFound)}));
	if (CUPSPrinter::libFound) {
		$var($String, var$0, $$str({CUPSPrinter::debugPrefix, "CUPS server "_s, $(getServer()), " port "_s}));
		$IPPPrintService::debug_println($$concat(var$0, $$str(getPort())));
		$var($String, var$1, getServer());
		return canConnect(var$1, getPort());
	} else {
		return false;
	}
}

void clinit$CUPSPrinter($Class* class$) {
	$assignStatic(CUPSPrinter::debugPrefix, "CUPSPrinter>> "_s);
	CUPSPrinter::PRINTER_DPI = 72.0;
	$beforeCallerSensitive();
	CUPSPrinter::$assertionsDisabled = !CUPSPrinter::class$->desiredAssertionStatus();
	$assignStatic(CUPSPrinter::cupsServer, nullptr);
	CUPSPrinter::cupsPort = 0;
	{
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($CUPSPrinter$1)));
		CUPSPrinter::libFound = CUPSPrinter::initIDs();
		if (CUPSPrinter::libFound) {
			$assignStatic(CUPSPrinter::cupsServer, CUPSPrinter::getCupsServer());
			CUPSPrinter::cupsPort = CUPSPrinter::getCupsPort();
		}
	}
}

CUPSPrinter::CUPSPrinter() {
}

$Class* CUPSPrinter::load$($String* name, bool initialize) {
	$loadClass(CUPSPrinter, name, initialize, &_CUPSPrinter_ClassInfo_, clinit$CUPSPrinter, allocate$CUPSPrinter);
	return class$;
}

$Class* CUPSPrinter::class$ = nullptr;

	} // print
} // sun