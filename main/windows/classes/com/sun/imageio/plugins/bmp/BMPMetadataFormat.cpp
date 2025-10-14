#include <com/sun/imageio/plugins/bmp/BMPMetadataFormat.h>

#include <com/sun/imageio/plugins/bmp/BMPMetadata.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/metadata/IIOMetadataFormat.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <jcpp.h>

#undef CHILD_POLICY_EMPTY
#undef CHILD_POLICY_SOME
#undef DATATYPE_DOUBLE
#undef DATATYPE_INTEGER
#undef DATATYPE_STRING
#undef MAX_VALUE

using $BMPMetadata = ::com::sun::imageio::plugins::bmp::BMPMetadata;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $IIOMetadataFormat = ::javax::imageio::metadata::IIOMetadataFormat;
using $IIOMetadataFormatImpl = ::javax::imageio::metadata::IIOMetadataFormatImpl;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

$FieldInfo _BMPMetadataFormat_FieldInfo_[] = {
	{"instance", "Ljavax/imageio/metadata/IIOMetadataFormat;", nullptr, $PRIVATE | $STATIC, $staticField(BMPMetadataFormat, instance)},
	{}
};

$MethodInfo _BMPMetadataFormat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BMPMetadataFormat::*)()>(&BMPMetadataFormat::init$))},
	{"canNodeAppear", "(Ljava/lang/String;Ljavax/imageio/ImageTypeSpecifier;)Z", nullptr, $PUBLIC},
	{"getInstance", "()Ljavax/imageio/metadata/IIOMetadataFormat;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$IIOMetadataFormat*(*)()>(&BMPMetadataFormat::getInstance))},
	{}
};

$ClassInfo _BMPMetadataFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.bmp.BMPMetadataFormat",
	"javax.imageio.metadata.IIOMetadataFormatImpl",
	nullptr,
	_BMPMetadataFormat_FieldInfo_,
	_BMPMetadataFormat_MethodInfo_
};

$Object* allocate$BMPMetadataFormat($Class* clazz) {
	return $of($alloc(BMPMetadataFormat));
}

$IIOMetadataFormat* BMPMetadataFormat::instance = nullptr;

void BMPMetadataFormat::init$() {
	$init($BMPMetadata);
	$IIOMetadataFormatImpl::init$($BMPMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_SOME);
	addElement("ImageDescriptor"_s, $BMPMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("ImageDescriptor"_s, "bmpVersion"_s, $IIOMetadataFormat::DATATYPE_STRING, true, nullptr);
	addAttribute("ImageDescriptor"_s, "width"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "65535"_s, true, true);
	addAttribute("ImageDescriptor"_s, "height"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "1"_s, "65535"_s, true, true);
	addAttribute("ImageDescriptor"_s, "bitsPerPixel"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "1"_s, "65535"_s, true, true);
	addAttribute("ImageDescriptor"_s, "compression"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, nullptr);
	addAttribute("ImageDescriptor"_s, "imageSize"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "1"_s, "65535"_s, true, true);
	addElement("PixelsPerMeter"_s, $BMPMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("PixelsPerMeter"_s, "X"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, nullptr, "1"_s, "65535"_s, true, true);
	addAttribute("PixelsPerMeter"_s, "Y"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, nullptr, "1"_s, "65535"_s, true, true);
	addElement("ColorsUsed"_s, $BMPMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("ColorsUsed"_s, "value"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "65535"_s, true, true);
	addElement("ColorsImportant"_s, $BMPMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("ColorsImportant"_s, "value"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, nullptr, "0"_s, "65535"_s, true, true);
	addElement("BI_BITFIELDS_Mask"_s, $BMPMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("BI_BITFIELDS_Mask"_s, "red"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, nullptr, "0"_s, "65535"_s, true, true);
	addAttribute("BI_BITFIELDS_Mask"_s, "green"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, nullptr, "0"_s, "65535"_s, true, true);
	addAttribute("BI_BITFIELDS_Mask"_s, "blue"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, nullptr, "0"_s, "65535"_s, true, true);
	addElement("ColorSpace"_s, $BMPMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("ColorSpace"_s, "value"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, nullptr, "0"_s, "65535"_s, true, true);
	addElement("LCS_CALIBRATED_RGB"_s, $BMPMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("LCS_CALIBRATED_RGB"_s, "redX"_s, $IIOMetadataFormat::DATATYPE_DOUBLE, false, nullptr, "0"_s, "65535"_s, true, true);
	addAttribute("LCS_CALIBRATED_RGB"_s, "redY"_s, $IIOMetadataFormat::DATATYPE_DOUBLE, false, nullptr, "0"_s, "65535"_s, true, true);
	addAttribute("LCS_CALIBRATED_RGB"_s, "redZ"_s, $IIOMetadataFormat::DATATYPE_DOUBLE, false, nullptr, "0"_s, "65535"_s, true, true);
	addAttribute("LCS_CALIBRATED_RGB"_s, "greenX"_s, $IIOMetadataFormat::DATATYPE_DOUBLE, false, nullptr, "0"_s, "65535"_s, true, true);
	addAttribute("LCS_CALIBRATED_RGB"_s, "greenY"_s, $IIOMetadataFormat::DATATYPE_DOUBLE, false, nullptr, "0"_s, "65535"_s, true, true);
	addAttribute("LCS_CALIBRATED_RGB"_s, "greenZ"_s, $IIOMetadataFormat::DATATYPE_DOUBLE, false, nullptr, "0"_s, "65535"_s, true, true);
	addAttribute("LCS_CALIBRATED_RGB"_s, "blueX"_s, $IIOMetadataFormat::DATATYPE_DOUBLE, false, nullptr, "0"_s, "65535"_s, true, true);
	addAttribute("LCS_CALIBRATED_RGB"_s, "blueY"_s, $IIOMetadataFormat::DATATYPE_DOUBLE, false, nullptr, "0"_s, "65535"_s, true, true);
	addAttribute("LCS_CALIBRATED_RGB"_s, "blueZ"_s, $IIOMetadataFormat::DATATYPE_DOUBLE, false, nullptr, "0"_s, "65535"_s, true, true);
	addElement("LCS_CALIBRATED_RGB_GAMMA"_s, $BMPMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("LCS_CALIBRATED_RGB_GAMMA"_s, "red"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, nullptr, "0"_s, "65535"_s, true, true);
	addAttribute("LCS_CALIBRATED_RGB_GAMMA"_s, "green"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, nullptr, "0"_s, "65535"_s, true, true);
	addAttribute("LCS_CALIBRATED_RGB_GAMMA"_s, "blue"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, nullptr, "0"_s, "65535"_s, true, true);
	addElement("Intent"_s, $BMPMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("Intent"_s, "value"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, nullptr, "0"_s, "65535"_s, true, true);
	addElement("Palette"_s, $BMPMetadata::nativeMetadataFormatName, 2, 256);
	addAttribute("Palette"_s, "sizeOfPalette"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr);
	addBooleanAttribute("Palette"_s, "sortFlag"_s, false, false);
	addElement("PaletteEntry"_s, "Palette"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("PaletteEntry"_s, "index"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "255"_s, true, true);
	addAttribute("PaletteEntry"_s, "red"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "255"_s, true, true);
	addAttribute("PaletteEntry"_s, "green"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "255"_s, true, true);
	addAttribute("PaletteEntry"_s, "blue"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "255"_s, true, true);
	addElement("CommentExtensions"_s, $BMPMetadata::nativeMetadataFormatName, 1, $Integer::MAX_VALUE);
	addElement("CommentExtension"_s, "CommentExtensions"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("CommentExtension"_s, "value"_s, $IIOMetadataFormat::DATATYPE_STRING, true, nullptr);
}

bool BMPMetadataFormat::canNodeAppear($String* elementName, $ImageTypeSpecifier* imageType) {
	return true;
}

$IIOMetadataFormat* BMPMetadataFormat::getInstance() {
	$load(BMPMetadataFormat);
	$synchronized(class$) {
		$init(BMPMetadataFormat);
		if (BMPMetadataFormat::instance == nullptr) {
			$assignStatic(BMPMetadataFormat::instance, $new(BMPMetadataFormat));
		}
		return BMPMetadataFormat::instance;
	}
}

void clinit$BMPMetadataFormat($Class* class$) {
	$assignStatic(BMPMetadataFormat::instance, nullptr);
}

BMPMetadataFormat::BMPMetadataFormat() {
}

$Class* BMPMetadataFormat::load$($String* name, bool initialize) {
	$loadClass(BMPMetadataFormat, name, initialize, &_BMPMetadataFormat_ClassInfo_, clinit$BMPMetadataFormat, allocate$BMPMetadataFormat);
	return class$;
}

$Class* BMPMetadataFormat::class$ = nullptr;

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com