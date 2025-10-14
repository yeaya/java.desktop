#include <com/sun/imageio/plugins/jpeg/JPEG.h>

#include <java/awt/color/ColorSpace.h>
#include <java/awt/image/ColorModel.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/plugins/jpeg/JPEGHuffmanTable.h>
#include <javax/imageio/plugins/jpeg/JPEGQTable.h>
#include <jcpp.h>

#undef ADOBE_IMPOSSIBLE
#undef ADOBE_UNKNOWN
#undef ADOBE_YCC
#undef ADOBE_YCCK
#undef APP0
#undef APP1
#undef APP10
#undef APP11
#undef APP12
#undef APP13
#undef APP14
#undef APP15
#undef APP2
#undef APP3
#undef APP4
#undef APP5
#undef APP6
#undef APP7
#undef APP8
#undef APP9
#undef COM
#undef DAC
#undef DEFAULT_QUALITY
#undef DENSITY_UNIT_ASPECT_RATIO
#undef DENSITY_UNIT_DOTS_CM
#undef DENSITY_UNIT_DOTS_INCH
#undef DHP
#undef DHT
#undef DNL
#undef DQT
#undef DRI
#undef EOI
#undef EXP
#undef JCS_CMYK
#undef JCS_GRAYSCALE
#undef JCS_RGB
#undef JCS_UNKNOWN
#undef JCS_YCCK
#undef JPEG
#undef JPG
#undef NUM_DENSITY_UNIT
#undef NUM_JCS_CODES
#undef RESTART_RANGE
#undef RST0
#undef RST1
#undef RST2
#undef RST3
#undef RST4
#undef RST5
#undef RST6
#undef RST7
#undef SOF0
#undef SOF1
#undef SOF10
#undef SOF11
#undef SOF13
#undef SOF14
#undef SOF15
#undef SOF2
#undef SOF3
#undef SOF5
#undef SOF6
#undef SOF7
#undef SOF9
#undef SOI
#undef SOS
#undef TEM
#undef TYPE_CMYK
#undef TYPE_GRAY
#undef TYPE_RGB

using $JPEGHuffmanTableArray = $Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>;
using $JPEGQTableArray = $Array<::javax::imageio::plugins::jpeg::JPEGQTable>;
using $intArray2 = $Array<int32_t, 2>;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $JPEGHuffmanTable = ::javax::imageio::plugins::jpeg::JPEGHuffmanTable;
using $JPEGQTable = ::javax::imageio::plugins::jpeg::JPEGQTable;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _JPEG_FieldInfo_[] = {
	{"TEM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, TEM)},
	{"SOF0", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, SOF0)},
	{"SOF1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, SOF1)},
	{"SOF2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, SOF2)},
	{"SOF3", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, SOF3)},
	{"DHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, DHT)},
	{"SOF5", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, SOF5)},
	{"SOF6", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, SOF6)},
	{"SOF7", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, SOF7)},
	{"JPG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, JPG)},
	{"SOF9", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, SOF9)},
	{"SOF10", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, SOF10)},
	{"SOF11", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, SOF11)},
	{"DAC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, DAC)},
	{"SOF13", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, SOF13)},
	{"SOF14", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, SOF14)},
	{"SOF15", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, SOF15)},
	{"RST0", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, RST0)},
	{"RST1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, RST1)},
	{"RST2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, RST2)},
	{"RST3", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, RST3)},
	{"RST4", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, RST4)},
	{"RST5", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, RST5)},
	{"RST6", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, RST6)},
	{"RST7", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, RST7)},
	{"RESTART_RANGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, RESTART_RANGE)},
	{"SOI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, SOI)},
	{"EOI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, EOI)},
	{"SOS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, SOS)},
	{"DQT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, DQT)},
	{"DNL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, DNL)},
	{"DRI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, DRI)},
	{"DHP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, DHP)},
	{"EXP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, EXP)},
	{"APP0", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, APP0)},
	{"APP1", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, APP1)},
	{"APP2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, APP2)},
	{"APP3", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, APP3)},
	{"APP4", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, APP4)},
	{"APP5", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, APP5)},
	{"APP6", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, APP6)},
	{"APP7", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, APP7)},
	{"APP8", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, APP8)},
	{"APP9", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, APP9)},
	{"APP10", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, APP10)},
	{"APP11", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, APP11)},
	{"APP12", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, APP12)},
	{"APP13", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, APP13)},
	{"APP14", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, APP14)},
	{"APP15", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, APP15)},
	{"COM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, COM)},
	{"DENSITY_UNIT_ASPECT_RATIO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, DENSITY_UNIT_ASPECT_RATIO)},
	{"DENSITY_UNIT_DOTS_INCH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, DENSITY_UNIT_DOTS_INCH)},
	{"DENSITY_UNIT_DOTS_CM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, DENSITY_UNIT_DOTS_CM)},
	{"NUM_DENSITY_UNIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, NUM_DENSITY_UNIT)},
	{"ADOBE_IMPOSSIBLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, ADOBE_IMPOSSIBLE)},
	{"ADOBE_UNKNOWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, ADOBE_UNKNOWN)},
	{"ADOBE_YCC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, ADOBE_YCC)},
	{"ADOBE_YCCK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, ADOBE_YCCK)},
	{"vendor", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JPEG, vendor)},
	{"version", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JPEG, version)},
	{"names", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JPEG, names)},
	{"suffixes", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JPEG, suffixes)},
	{"MIMETypes", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JPEG, MIMETypes)},
	{"nativeImageMetadataFormatName", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JPEG, nativeImageMetadataFormatName)},
	{"nativeImageMetadataFormatClassName", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JPEG, nativeImageMetadataFormatClassName)},
	{"nativeStreamMetadataFormatName", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JPEG, nativeStreamMetadataFormatName)},
	{"nativeStreamMetadataFormatClassName", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JPEG, nativeStreamMetadataFormatClassName)},
	{"JCS_UNKNOWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, JCS_UNKNOWN)},
	{"JCS_GRAYSCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, JCS_GRAYSCALE)},
	{"JCS_RGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, JCS_RGB)},
	{"JCS_YCbCr", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, JCS_YCbCr)},
	{"JCS_CMYK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, JCS_CMYK)},
	{"JCS_YCCK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, JCS_YCCK)},
	{"NUM_JCS_CODES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JPEG, NUM_JCS_CODES)},
	{"bandOffsets", "[[I", nullptr, $STATIC | $FINAL, $staticField(JPEG, bandOffsets)},
	{"bOffsRGB", "[I", nullptr, $STATIC | $FINAL, $staticField(JPEG, bOffsRGB)},
	{"sRGB", "Ljava/awt/color/ColorSpace;", nullptr, $STATIC | $FINAL, $staticField(JPEG, sRGB)},
	{"DEFAULT_QUALITY", "F", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JPEG, DEFAULT_QUALITY)},
	{}
};

$MethodInfo _JPEG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JPEG::*)()>(&JPEG::init$))},
	{"convertToLinearQuality", "(F)F", nullptr, $STATIC, $method(static_cast<float(*)(float)>(&JPEG::convertToLinearQuality))},
	{"getDefaultHuffmanTables", "(Z)[Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;", nullptr, $STATIC, $method(static_cast<$JPEGHuffmanTableArray*(*)(bool)>(&JPEG::getDefaultHuffmanTables))},
	{"getDefaultQTables", "()[Ljavax/imageio/plugins/jpeg/JPEGQTable;", nullptr, $STATIC, $method(static_cast<$JPEGQTableArray*(*)()>(&JPEG::getDefaultQTables))},
	{"isJFIFcompliant", "(Ljavax/imageio/ImageTypeSpecifier;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($ImageTypeSpecifier*,bool)>(&JPEG::isJFIFcompliant))},
	{"transformForType", "(Ljavax/imageio/ImageTypeSpecifier;Z)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($ImageTypeSpecifier*,bool)>(&JPEG::transformForType))},
	{}
};

$ClassInfo _JPEG_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JPEG",
	"java.lang.Object",
	nullptr,
	_JPEG_FieldInfo_,
	_JPEG_MethodInfo_
};

$Object* allocate$JPEG($Class* clazz) {
	return $of($alloc(JPEG));
}

$String* JPEG::vendor = nullptr;
$String* JPEG::version = nullptr;
$StringArray* JPEG::names = nullptr;
$StringArray* JPEG::suffixes = nullptr;
$StringArray* JPEG::MIMETypes = nullptr;
$String* JPEG::nativeImageMetadataFormatName = nullptr;
$String* JPEG::nativeImageMetadataFormatClassName = nullptr;
$String* JPEG::nativeStreamMetadataFormatName = nullptr;
$String* JPEG::nativeStreamMetadataFormatClassName = nullptr;

$intArray2* JPEG::bandOffsets = nullptr;
$ints* JPEG::bOffsRGB = nullptr;
$ColorSpace* JPEG::sRGB = nullptr;
float JPEG::DEFAULT_QUALITY = 0.0;

void JPEG::init$() {
}

bool JPEG::isJFIFcompliant($ImageTypeSpecifier* imageType, bool input) {
	$init(JPEG);
	$var($ColorModel, cm, $nc(imageType)->getColorModel());
	if ($nc(cm)->hasAlpha()) {
		return false;
	}
	int32_t numComponents = imageType->getNumComponents();
	if (numComponents == 1) {
		return true;
	}
	if (numComponents != 3) {
		return false;
	}
	if (input) {
		if ($nc($($nc(cm)->getColorSpace()))->getType() == $ColorSpace::TYPE_RGB) {
			return true;
		}
	} else if ($nc($(cm->getColorSpace()))->getType() == $ColorSpace::TYPE_YCbCr) {
		return true;
	}
	return false;
}

int32_t JPEG::transformForType($ImageTypeSpecifier* imageType, bool input) {
	$init(JPEG);
	int32_t retval = JPEG::ADOBE_IMPOSSIBLE;
	$var($ColorModel, cm, $nc(imageType)->getColorModel());
	switch ($nc($($nc(cm)->getColorSpace()))->getType()) {
	case $ColorSpace::TYPE_GRAY:
		{
			retval = JPEG::ADOBE_UNKNOWN;
			break;
		}
	case $ColorSpace::TYPE_RGB:
		{
			retval = input ? JPEG::ADOBE_YCC : JPEG::ADOBE_UNKNOWN;
			break;
		}
	case $ColorSpace::TYPE_YCbCr:
		{
			retval = JPEG::ADOBE_YCC;
			break;
		}
	case $ColorSpace::TYPE_CMYK:
		{
			retval = input ? JPEG::ADOBE_YCCK : JPEG::ADOBE_IMPOSSIBLE;
		}
	}
	return retval;
}

float JPEG::convertToLinearQuality(float quality) {
	$init(JPEG);
	if (quality <= 0.0f) {
		quality = 0.01f;
	}
	if (quality > 1.0f) {
		quality = 1.0f;
	}
	if (quality < 0.5f) {
		quality = 0.5f / quality;
	} else {
		quality = 2.0f - (quality * 2.0f);
	}
	return quality;
}

$JPEGQTableArray* JPEG::getDefaultQTables() {
	$init(JPEG);
	$var($JPEGQTableArray, qTables, $new($JPEGQTableArray, 2));
	$init($JPEGQTable);
	qTables->set(0, $JPEGQTable::K1Div2Luminance);
	qTables->set(1, $JPEGQTable::K2Div2Chrominance);
	return qTables;
}

$JPEGHuffmanTableArray* JPEG::getDefaultHuffmanTables(bool wantDC) {
	$init(JPEG);
	$var($JPEGHuffmanTableArray, tables, $new($JPEGHuffmanTableArray, 2));
	if (wantDC) {
		$init($JPEGHuffmanTable);
		tables->set(0, $JPEGHuffmanTable::StdDCLuminance);
		tables->set(1, $JPEGHuffmanTable::StdDCChrominance);
	} else {
		$init($JPEGHuffmanTable);
		tables->set(0, $JPEGHuffmanTable::StdACLuminance);
		tables->set(1, $JPEGHuffmanTable::StdACChrominance);
	}
	return tables;
}

void clinit$JPEG($Class* class$) {
	$assignStatic(JPEG::vendor, "Oracle Corporation"_s);
	$assignStatic(JPEG::version, "0.5"_s);
	$assignStatic(JPEG::nativeImageMetadataFormatName, "javax_imageio_jpeg_image_1.0"_s);
	$assignStatic(JPEG::nativeImageMetadataFormatClassName, "com.sun.imageio.plugins.jpeg.JPEGImageMetadataFormat"_s);
	$assignStatic(JPEG::nativeStreamMetadataFormatName, "javax_imageio_jpeg_stream_1.0"_s);
	$assignStatic(JPEG::nativeStreamMetadataFormatClassName, "com.sun.imageio.plugins.jpeg.JPEGStreamMetadataFormat"_s);
	JPEG::DEFAULT_QUALITY = 0.75f;
	$assignStatic(JPEG::names, $new($StringArray, {
		"JPEG"_s,
		"jpeg"_s,
		"JPG"_s,
		"jpg"_s
	}));
	$assignStatic(JPEG::suffixes, $new($StringArray, {
		"jpg"_s,
		"jpeg"_s
	}));
	$assignStatic(JPEG::MIMETypes, $new($StringArray, {"image/jpeg"_s}));
	$assignStatic(JPEG::bandOffsets, $new($intArray2, {
		$$new($ints, {0}),
		$$new($ints, {
			0,
			1
		}),
		$$new($ints, {
			0,
			1,
			2
		}),
		$$new($ints, {
			0,
			1,
			2,
			3
		})
	}));
	$assignStatic(JPEG::bOffsRGB, $new($ints, {
		2,
		1,
		0
	}));
	$assignStatic(JPEG::sRGB, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
}

JPEG::JPEG() {
}

$Class* JPEG::load$($String* name, bool initialize) {
	$loadClass(JPEG, name, initialize, &_JPEG_ClassInfo_, clinit$JPEG, allocate$JPEG);
	return class$;
}

$Class* JPEG::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com