#include <com/sun/imageio/plugins/gif/GIFImageMetadataFormat.h>

#include <com/sun/imageio/plugins/gif/GIFImageMetadata.h>
#include <com/sun/imageio/plugins/gif/GIFStreamMetadata.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/metadata/IIOMetadataFormat.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <jcpp.h>

#undef CHILD_POLICY_EMPTY
#undef CHILD_POLICY_SOME
#undef DATATYPE_INTEGER
#undef DATATYPE_STRING
#undef MAX_VALUE
#undef TYPE

using $GIFImageMetadata = ::com::sun::imageio::plugins::gif::GIFImageMetadata;
using $GIFStreamMetadata = ::com::sun::imageio::plugins::gif::GIFStreamMetadata;
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
				namespace gif {

$FieldInfo _GIFImageMetadataFormat_FieldInfo_[] = {
	{"instance", "Ljavax/imageio/metadata/IIOMetadataFormat;", nullptr, $PRIVATE | $STATIC, $staticField(GIFImageMetadataFormat, instance)},
	{}
};

$MethodInfo _GIFImageMetadataFormat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageMetadataFormat::*)()>(&GIFImageMetadataFormat::init$))},
	{"canNodeAppear", "(Ljava/lang/String;Ljavax/imageio/ImageTypeSpecifier;)Z", nullptr, $PUBLIC},
	{"getInstance", "()Ljavax/imageio/metadata/IIOMetadataFormat;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$IIOMetadataFormat*(*)()>(&GIFImageMetadataFormat::getInstance))},
	{}
};

$ClassInfo _GIFImageMetadataFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.gif.GIFImageMetadataFormat",
	"javax.imageio.metadata.IIOMetadataFormatImpl",
	nullptr,
	_GIFImageMetadataFormat_FieldInfo_,
	_GIFImageMetadataFormat_MethodInfo_
};

$Object* allocate$GIFImageMetadataFormat($Class* clazz) {
	return $of($alloc(GIFImageMetadataFormat));
}

$IIOMetadataFormat* GIFImageMetadataFormat::instance = nullptr;

void GIFImageMetadataFormat::init$() {
	$useLocalCurrentObjectStackCache();
	$init($GIFImageMetadata);
	$IIOMetadataFormatImpl::init$($GIFImageMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_SOME);
	addElement("ImageDescriptor"_s, $GIFImageMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("ImageDescriptor"_s, "imageLeftPosition"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "65535"_s, true, true);
	addAttribute("ImageDescriptor"_s, "imageTopPosition"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "65535"_s, true, true);
	addAttribute("ImageDescriptor"_s, "imageWidth"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "1"_s, "65535"_s, true, true);
	addAttribute("ImageDescriptor"_s, "imageHeight"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "1"_s, "65535"_s, true, true);
	addBooleanAttribute("ImageDescriptor"_s, "interlaceFlag"_s, false, false);
	addElement("LocalColorTable"_s, $GIFImageMetadata::nativeMetadataFormatName, 2, 256);
	$init($GIFStreamMetadata);
	addAttribute("LocalColorTable"_s, "sizeOfLocalColorTable"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, ($String*)nullptr, $($Arrays::asList($GIFStreamMetadata::colorTableSizes)));
	addBooleanAttribute("LocalColorTable"_s, "sortFlag"_s, false, false);
	addElement("ColorTableEntry"_s, "LocalColorTable"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("ColorTableEntry"_s, "index"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "255"_s, true, true);
	addAttribute("ColorTableEntry"_s, "red"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "255"_s, true, true);
	addAttribute("ColorTableEntry"_s, "green"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "255"_s, true, true);
	addAttribute("ColorTableEntry"_s, "blue"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "255"_s, true, true);
	addElement("GraphicControlExtension"_s, $GIFImageMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("GraphicControlExtension"_s, "disposalMethod"_s, $IIOMetadataFormat::DATATYPE_STRING, true, ($String*)nullptr, $($Arrays::asList($GIFImageMetadata::disposalMethodNames)));
	addBooleanAttribute("GraphicControlExtension"_s, "userInputFlag"_s, false, false);
	addBooleanAttribute("GraphicControlExtension"_s, "transparentColorFlag"_s, false, false);
	addAttribute("GraphicControlExtension"_s, "delayTime"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "65535"_s, true, true);
	addAttribute("GraphicControlExtension"_s, "transparentColorIndex"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "255"_s, true, true);
	addElement("PlainTextExtension"_s, $GIFImageMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("PlainTextExtension"_s, "textGridLeft"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "65535"_s, true, true);
	addAttribute("PlainTextExtension"_s, "textGridTop"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "65535"_s, true, true);
	addAttribute("PlainTextExtension"_s, "textGridWidth"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "1"_s, "65535"_s, true, true);
	addAttribute("PlainTextExtension"_s, "textGridHeight"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "1"_s, "65535"_s, true, true);
	addAttribute("PlainTextExtension"_s, "characterCellWidth"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "1"_s, "255"_s, true, true);
	addAttribute("PlainTextExtension"_s, "characterCellHeight"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "1"_s, "255"_s, true, true);
	addAttribute("PlainTextExtension"_s, "textForegroundColor"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "255"_s, true, true);
	addAttribute("PlainTextExtension"_s, "textBackgroundColor"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "255"_s, true, true);
	addElement("ApplicationExtensions"_s, $GIFImageMetadata::nativeMetadataFormatName, 1, $Integer::MAX_VALUE);
	addElement("ApplicationExtension"_s, "ApplicationExtensions"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("ApplicationExtension"_s, "applicationID"_s, $IIOMetadataFormat::DATATYPE_STRING, true, nullptr);
	addAttribute("ApplicationExtension"_s, "authenticationCode"_s, $IIOMetadataFormat::DATATYPE_STRING, true, nullptr);
	$init($Byte);
	addObjectValue("ApplicationExtension"_s, $Byte::TYPE, 0, $Integer::MAX_VALUE);
	addElement("CommentExtensions"_s, $GIFImageMetadata::nativeMetadataFormatName, 1, $Integer::MAX_VALUE);
	addElement("CommentExtension"_s, "CommentExtensions"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("CommentExtension"_s, "value"_s, $IIOMetadataFormat::DATATYPE_STRING, true, nullptr);
}

bool GIFImageMetadataFormat::canNodeAppear($String* elementName, $ImageTypeSpecifier* imageType) {
	return true;
}

$IIOMetadataFormat* GIFImageMetadataFormat::getInstance() {
	$load(GIFImageMetadataFormat);
	$synchronized(class$) {
		$init(GIFImageMetadataFormat);
		if (GIFImageMetadataFormat::instance == nullptr) {
			$assignStatic(GIFImageMetadataFormat::instance, $new(GIFImageMetadataFormat));
		}
		return GIFImageMetadataFormat::instance;
	}
}

void clinit$GIFImageMetadataFormat($Class* class$) {
	$assignStatic(GIFImageMetadataFormat::instance, nullptr);
}

GIFImageMetadataFormat::GIFImageMetadataFormat() {
}

$Class* GIFImageMetadataFormat::load$($String* name, bool initialize) {
	$loadClass(GIFImageMetadataFormat, name, initialize, &_GIFImageMetadataFormat_ClassInfo_, clinit$GIFImageMetadataFormat, allocate$GIFImageMetadataFormat);
	return class$;
}

$Class* GIFImageMetadataFormat::class$ = nullptr;

				} // gif
			} // plugins
		} // imageio
	} // sun
} // com