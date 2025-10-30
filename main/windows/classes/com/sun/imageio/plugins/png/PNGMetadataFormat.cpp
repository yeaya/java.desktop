#include <com/sun/imageio/plugins/png/PNGMetadataFormat.h>

#include <com/sun/imageio/plugins/png/PNGMetadata.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/metadata/IIOMetadataFormat.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <jcpp.h>

#undef CHILD_POLICY_CHOICE
#undef CHILD_POLICY_EMPTY
#undef CHILD_POLICY_SOME
#undef DATATYPE_INTEGER
#undef DATATYPE_STRING
#undef MAX_VALUE
#undef TYPE
#undef VALUE_0
#undef VALUE_1
#undef VALUE_12
#undef VALUE_23
#undef VALUE_255
#undef VALUE_31
#undef VALUE_59
#undef VALUE_60
#undef VALUE_MAX_16
#undef VALUE_MAX_32

using $PNGMetadata = ::com::sun::imageio::plugins::png::PNGMetadata;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $IIOMetadataFormat = ::javax::imageio::metadata::IIOMetadataFormat;
using $IIOMetadataFormatImpl = ::javax::imageio::metadata::IIOMetadataFormatImpl;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace png {

$FieldInfo _PNGMetadataFormat_FieldInfo_[] = {
	{"instance", "Ljavax/imageio/metadata/IIOMetadataFormat;", nullptr, $PRIVATE | $STATIC, $staticField(PNGMetadataFormat, instance)},
	{"VALUE_0", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(PNGMetadataFormat, VALUE_0)},
	{"VALUE_1", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(PNGMetadataFormat, VALUE_1)},
	{"VALUE_12", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(PNGMetadataFormat, VALUE_12)},
	{"VALUE_23", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(PNGMetadataFormat, VALUE_23)},
	{"VALUE_31", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(PNGMetadataFormat, VALUE_31)},
	{"VALUE_59", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(PNGMetadataFormat, VALUE_59)},
	{"VALUE_60", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(PNGMetadataFormat, VALUE_60)},
	{"VALUE_255", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(PNGMetadataFormat, VALUE_255)},
	{"VALUE_MAX_16", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(PNGMetadataFormat, VALUE_MAX_16)},
	{"VALUE_MAX_32", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(PNGMetadataFormat, VALUE_MAX_32)},
	{}
};

$MethodInfo _PNGMetadataFormat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGMetadataFormat::*)()>(&PNGMetadataFormat::init$))},
	{"canNodeAppear", "(Ljava/lang/String;Ljavax/imageio/ImageTypeSpecifier;)Z", nullptr, $PUBLIC},
	{"getInstance", "()Ljavax/imageio/metadata/IIOMetadataFormat;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$IIOMetadataFormat*(*)()>(&PNGMetadataFormat::getInstance))},
	{}
};

$ClassInfo _PNGMetadataFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.png.PNGMetadataFormat",
	"javax.imageio.metadata.IIOMetadataFormatImpl",
	nullptr,
	_PNGMetadataFormat_FieldInfo_,
	_PNGMetadataFormat_MethodInfo_
};

$Object* allocate$PNGMetadataFormat($Class* clazz) {
	return $of($alloc(PNGMetadataFormat));
}

$IIOMetadataFormat* PNGMetadataFormat::instance = nullptr;
$String* PNGMetadataFormat::VALUE_0 = nullptr;
$String* PNGMetadataFormat::VALUE_1 = nullptr;
$String* PNGMetadataFormat::VALUE_12 = nullptr;
$String* PNGMetadataFormat::VALUE_23 = nullptr;
$String* PNGMetadataFormat::VALUE_31 = nullptr;
$String* PNGMetadataFormat::VALUE_59 = nullptr;
$String* PNGMetadataFormat::VALUE_60 = nullptr;
$String* PNGMetadataFormat::VALUE_255 = nullptr;
$String* PNGMetadataFormat::VALUE_MAX_16 = nullptr;
$String* PNGMetadataFormat::VALUE_MAX_32 = nullptr;

void PNGMetadataFormat::init$() {
	$useLocalCurrentObjectStackCache();
	$init($PNGMetadata);
	$IIOMetadataFormatImpl::init$($PNGMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_SOME);
	addElement("IHDR"_s, $PNGMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("IHDR"_s, "width"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_1, PNGMetadataFormat::VALUE_MAX_32, true, true);
	addAttribute("IHDR"_s, "height"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_1, PNGMetadataFormat::VALUE_MAX_32, true, true);
	addAttribute("IHDR"_s, "bitDepth"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, ($String*)nullptr, $($Arrays::asList($PNGMetadata::IHDR_bitDepths)));
	$var($StringArray, colorTypes, $new($StringArray, {
		"Grayscale"_s,
		"RGB"_s,
		"Palette"_s,
		"GrayAlpha"_s,
		"RGBAlpha"_s
	}));
	addAttribute("IHDR"_s, "colorType"_s, $IIOMetadataFormat::DATATYPE_STRING, true, ($String*)nullptr, $($Arrays::asList(colorTypes)));
	addAttribute("IHDR"_s, "compressionMethod"_s, $IIOMetadataFormat::DATATYPE_STRING, true, ($String*)nullptr, $($Arrays::asList($PNGMetadata::IHDR_compressionMethodNames)));
	addAttribute("IHDR"_s, "filterMethod"_s, $IIOMetadataFormat::DATATYPE_STRING, true, ($String*)nullptr, $($Arrays::asList($PNGMetadata::IHDR_filterMethodNames)));
	addAttribute("IHDR"_s, "interlaceMethod"_s, $IIOMetadataFormat::DATATYPE_STRING, true, ($String*)nullptr, $($Arrays::asList($PNGMetadata::IHDR_interlaceMethodNames)));
	addElement("PLTE"_s, $PNGMetadata::nativeMetadataFormatName, 1, 256);
	addElement("PLTEEntry"_s, "PLTE"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("PLTEEntry"_s, "index"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_255, true, true);
	addAttribute("PLTEEntry"_s, "red"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_255, true, true);
	addAttribute("PLTEEntry"_s, "green"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_255, true, true);
	addAttribute("PLTEEntry"_s, "blue"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_255, true, true);
	addElement("bKGD"_s, $PNGMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_CHOICE);
	addElement("bKGD_Grayscale"_s, "bKGD"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("bKGD_Grayscale"_s, "gray"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_MAX_16, true, true);
	addElement("bKGD_RGB"_s, "bKGD"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("bKGD_RGB"_s, "red"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_MAX_16, true, true);
	addAttribute("bKGD_RGB"_s, "green"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_MAX_16, true, true);
	addAttribute("bKGD_RGB"_s, "blue"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_MAX_16, true, true);
	addElement("bKGD_Palette"_s, "bKGD"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("bKGD_Palette"_s, "index"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_255, true, true);
	addElement("cHRM"_s, $PNGMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("cHRM"_s, "whitePointX"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_MAX_16, true, true);
	addAttribute("cHRM"_s, "whitePointY"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_MAX_16, true, true);
	addAttribute("cHRM"_s, "redX"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_MAX_16, true, true);
	addAttribute("cHRM"_s, "redY"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_MAX_16, true, true);
	addAttribute("cHRM"_s, "greenX"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_MAX_16, true, true);
	addAttribute("cHRM"_s, "greenY"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_MAX_16, true, true);
	addAttribute("cHRM"_s, "blueX"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_MAX_16, true, true);
	addAttribute("cHRM"_s, "blueY"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_MAX_16, true, true);
	addElement("gAMA"_s, $PNGMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("gAMA"_s, "value"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_MAX_32, true, true);
	addElement("hIST"_s, $PNGMetadata::nativeMetadataFormatName, 1, 256);
	addElement("hISTEntry"_s, "hIST"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("hISTEntry"_s, "index"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_255, true, true);
	addAttribute("hISTEntry"_s, "value"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_MAX_16, true, true);
	addElement("iCCP"_s, $PNGMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("iCCP"_s, "profileName"_s, $IIOMetadataFormat::DATATYPE_STRING, true, nullptr);
	addAttribute("iCCP"_s, "compressionMethod"_s, $IIOMetadataFormat::DATATYPE_STRING, true, ($String*)nullptr, $($Arrays::asList($PNGMetadata::iCCP_compressionMethodNames)));
	$init($Byte);
	addObjectValue("iCCP"_s, $Byte::TYPE, 0, $Integer::MAX_VALUE);
	addElement("iTXt"_s, $PNGMetadata::nativeMetadataFormatName, 1, $Integer::MAX_VALUE);
	addElement("iTXtEntry"_s, "iTXt"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("iTXtEntry"_s, "keyword"_s, $IIOMetadataFormat::DATATYPE_STRING, true, nullptr);
	addBooleanAttribute("iTXtEntry"_s, "compressionFlag"_s, false, false);
	addAttribute("iTXtEntry"_s, "compressionMethod"_s, $IIOMetadataFormat::DATATYPE_STRING, true, nullptr);
	addAttribute("iTXtEntry"_s, "languageTag"_s, $IIOMetadataFormat::DATATYPE_STRING, true, nullptr);
	addAttribute("iTXtEntry"_s, "translatedKeyword"_s, $IIOMetadataFormat::DATATYPE_STRING, true, nullptr);
	addAttribute("iTXtEntry"_s, "text"_s, $IIOMetadataFormat::DATATYPE_STRING, true, nullptr);
	addElement("pHYS"_s, $PNGMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("pHYS"_s, "pixelsPerUnitXAxis"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_MAX_32, true, true);
	addAttribute("pHYS"_s, "pixelsPerUnitYAxis"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_MAX_32, true, true);
	addAttribute("pHYS"_s, "unitSpecifier"_s, $IIOMetadataFormat::DATATYPE_STRING, true, ($String*)nullptr, $($Arrays::asList($PNGMetadata::unitSpecifierNames)));
	addElement("sBIT"_s, $PNGMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_CHOICE);
	addElement("sBIT_Grayscale"_s, "sBIT"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("sBIT_Grayscale"_s, "gray"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_255, true, true);
	addElement("sBIT_GrayAlpha"_s, "sBIT"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("sBIT_GrayAlpha"_s, "gray"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_255, true, true);
	addAttribute("sBIT_GrayAlpha"_s, "alpha"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_255, true, true);
	addElement("sBIT_RGB"_s, "sBIT"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("sBIT_RGB"_s, "red"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_255, true, true);
	addAttribute("sBIT_RGB"_s, "green"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_255, true, true);
	addAttribute("sBIT_RGB"_s, "blue"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_255, true, true);
	addElement("sBIT_RGBAlpha"_s, "sBIT"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("sBIT_RGBAlpha"_s, "red"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_255, true, true);
	addAttribute("sBIT_RGBAlpha"_s, "green"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_255, true, true);
	addAttribute("sBIT_RGBAlpha"_s, "blue"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_255, true, true);
	addAttribute("sBIT_RGBAlpha"_s, "alpha"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_255, true, true);
	addElement("sBIT_Palette"_s, "sBIT"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("sBIT_Palette"_s, "red"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_255, true, true);
	addAttribute("sBIT_Palette"_s, "green"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_255, true, true);
	addAttribute("sBIT_Palette"_s, "blue"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_255, true, true);
	addElement("sPLT"_s, $PNGMetadata::nativeMetadataFormatName, 1, 256);
	addElement("sPLTEntry"_s, "sPLT"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("sPLTEntry"_s, "index"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_255, true, true);
	addAttribute("sPLTEntry"_s, "red"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_255, true, true);
	addAttribute("sPLTEntry"_s, "green"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_255, true, true);
	addAttribute("sPLTEntry"_s, "blue"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_255, true, true);
	addAttribute("sPLTEntry"_s, "alpha"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_255, true, true);
	addElement("sRGB"_s, $PNGMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("sRGB"_s, "renderingIntent"_s, $IIOMetadataFormat::DATATYPE_STRING, true, ($String*)nullptr, $($Arrays::asList($PNGMetadata::renderingIntentNames)));
	addElement("tEXt"_s, $PNGMetadata::nativeMetadataFormatName, 1, $Integer::MAX_VALUE);
	addElement("tEXtEntry"_s, "tEXt"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("tEXtEntry"_s, "keyword"_s, $IIOMetadataFormat::DATATYPE_STRING, true, nullptr);
	addAttribute("tEXtEntry"_s, "value"_s, $IIOMetadataFormat::DATATYPE_STRING, true, nullptr);
	addElement("tIME"_s, $PNGMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("tIME"_s, "year"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_MAX_16, true, true);
	addAttribute("tIME"_s, "month"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_1, PNGMetadataFormat::VALUE_12, true, true);
	addAttribute("tIME"_s, "day"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_1, PNGMetadataFormat::VALUE_31, true, true);
	addAttribute("tIME"_s, "hour"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_23, true, true);
	addAttribute("tIME"_s, "minute"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_59, true, true);
	addAttribute("tIME"_s, "second"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_60, true, true);
	addElement("tRNS"_s, $PNGMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_CHOICE);
	addElement("tRNS_Grayscale"_s, "tRNS"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("tRNS_Grayscale"_s, "gray"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_MAX_16, true, true);
	addElement("tRNS_RGB"_s, "tRNS"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("tRNS_RGB"_s, "red"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_MAX_16, true, true);
	addAttribute("tRNS_RGB"_s, "green"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_MAX_16, true, true);
	addAttribute("tRNS_RGB"_s, "blue"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_MAX_16, true, true);
	addElement("tRNS_Palette"_s, "tRNS"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("tRNS_Palette"_s, "index"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_255, true, true);
	addAttribute("tRNS_Palette"_s, "alpha"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, PNGMetadataFormat::VALUE_0, PNGMetadataFormat::VALUE_255, true, true);
	addElement("zTXt"_s, $PNGMetadata::nativeMetadataFormatName, 1, $Integer::MAX_VALUE);
	addElement("zTXtEntry"_s, "zTXt"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("zTXtEntry"_s, "keyword"_s, $IIOMetadataFormat::DATATYPE_STRING, true, nullptr);
	addAttribute("zTXtEntry"_s, "compressionMethod"_s, $IIOMetadataFormat::DATATYPE_STRING, true, ($String*)nullptr, $($Arrays::asList($PNGMetadata::zTXt_compressionMethodNames)));
	addAttribute("zTXtEntry"_s, "text"_s, $IIOMetadataFormat::DATATYPE_STRING, true, nullptr);
	addElement("UnknownChunks"_s, $PNGMetadata::nativeMetadataFormatName, 1, $Integer::MAX_VALUE);
	addElement("UnknownChunk"_s, "UnknownChunks"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("UnknownChunk"_s, "type"_s, $IIOMetadataFormat::DATATYPE_STRING, true, nullptr);
	addObjectValue("UnknownChunk"_s, $Byte::TYPE, 0, $Integer::MAX_VALUE);
}

bool PNGMetadataFormat::canNodeAppear($String* elementName, $ImageTypeSpecifier* imageType) {
	return true;
}

$IIOMetadataFormat* PNGMetadataFormat::getInstance() {
	$load(PNGMetadataFormat);
	$synchronized(class$) {
		$init(PNGMetadataFormat);
		if (PNGMetadataFormat::instance == nullptr) {
			$assignStatic(PNGMetadataFormat::instance, $new(PNGMetadataFormat));
		}
		return PNGMetadataFormat::instance;
	}
}

void clinit$PNGMetadataFormat($Class* class$) {
	$assignStatic(PNGMetadataFormat::instance, nullptr);
	$assignStatic(PNGMetadataFormat::VALUE_0, "0"_s);
	$assignStatic(PNGMetadataFormat::VALUE_1, "1"_s);
	$assignStatic(PNGMetadataFormat::VALUE_12, "12"_s);
	$assignStatic(PNGMetadataFormat::VALUE_23, "23"_s);
	$assignStatic(PNGMetadataFormat::VALUE_31, "31"_s);
	$assignStatic(PNGMetadataFormat::VALUE_59, "59"_s);
	$assignStatic(PNGMetadataFormat::VALUE_60, "60"_s);
	$assignStatic(PNGMetadataFormat::VALUE_255, "255"_s);
	$assignStatic(PNGMetadataFormat::VALUE_MAX_16, "65535"_s);
	$assignStatic(PNGMetadataFormat::VALUE_MAX_32, "2147483647"_s);
}

PNGMetadataFormat::PNGMetadataFormat() {
}

$Class* PNGMetadataFormat::load$($String* name, bool initialize) {
	$loadClass(PNGMetadataFormat, name, initialize, &_PNGMetadataFormat_ClassInfo_, clinit$PNGMetadataFormat, allocate$PNGMetadataFormat);
	return class$;
}

$Class* PNGMetadataFormat::class$ = nullptr;

				} // png
			} // plugins
		} // imageio
	} // sun
} // com