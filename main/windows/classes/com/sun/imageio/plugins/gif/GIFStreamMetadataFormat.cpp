#include <com/sun/imageio/plugins/gif/GIFStreamMetadataFormat.h>

#include <com/sun/imageio/plugins/gif/GIFStreamMetadata.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

using $GIFStreamMetadata = ::com::sun::imageio::plugins::gif::GIFStreamMetadata;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
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

$FieldInfo _GIFStreamMetadataFormat_FieldInfo_[] = {
	{"instance", "Ljavax/imageio/metadata/IIOMetadataFormat;", nullptr, $PRIVATE | $STATIC, $staticField(GIFStreamMetadataFormat, instance)},
	{}
};

$MethodInfo _GIFStreamMetadataFormat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(GIFStreamMetadataFormat::*)()>(&GIFStreamMetadataFormat::init$))},
	{"canNodeAppear", "(Ljava/lang/String;Ljavax/imageio/ImageTypeSpecifier;)Z", nullptr, $PUBLIC},
	{"getInstance", "()Ljavax/imageio/metadata/IIOMetadataFormat;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$IIOMetadataFormat*(*)()>(&GIFStreamMetadataFormat::getInstance))},
	{}
};

$ClassInfo _GIFStreamMetadataFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.gif.GIFStreamMetadataFormat",
	"javax.imageio.metadata.IIOMetadataFormatImpl",
	nullptr,
	_GIFStreamMetadataFormat_FieldInfo_,
	_GIFStreamMetadataFormat_MethodInfo_
};

$Object* allocate$GIFStreamMetadataFormat($Class* clazz) {
	return $of($alloc(GIFStreamMetadataFormat));
}

$IIOMetadataFormat* GIFStreamMetadataFormat::instance = nullptr;

void GIFStreamMetadataFormat::init$() {
	$useLocalCurrentObjectStackCache();
	$init($GIFStreamMetadata);
	$IIOMetadataFormatImpl::init$($GIFStreamMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_SOME);
	addElement("Version"_s, $GIFStreamMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("Version"_s, "value"_s, $IIOMetadataFormat::DATATYPE_STRING, true, ($String*)nullptr, $($Arrays::asList($GIFStreamMetadata::versionStrings)));
	addElement("LogicalScreenDescriptor"_s, $GIFStreamMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("LogicalScreenDescriptor"_s, "logicalScreenWidth"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "1"_s, "65535"_s, true, true);
	addAttribute("LogicalScreenDescriptor"_s, "logicalScreenHeight"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "1"_s, "65535"_s, true, true);
	addAttribute("LogicalScreenDescriptor"_s, "colorResolution"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "1"_s, "8"_s, true, true);
	addAttribute("LogicalScreenDescriptor"_s, "pixelAspectRatio"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "255"_s, true, true);
	addElement("GlobalColorTable"_s, $GIFStreamMetadata::nativeMetadataFormatName, 2, 256);
	addAttribute("GlobalColorTable"_s, "sizeOfGlobalColorTable"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, ($String*)nullptr, $($Arrays::asList($GIFStreamMetadata::colorTableSizes)));
	addAttribute("GlobalColorTable"_s, "backgroundColorIndex"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "255"_s, true, true);
	addBooleanAttribute("GlobalColorTable"_s, "sortFlag"_s, false, false);
	addElement("ColorTableEntry"_s, "GlobalColorTable"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("ColorTableEntry"_s, "index"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "255"_s, true, true);
	addAttribute("ColorTableEntry"_s, "red"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "255"_s, true, true);
	addAttribute("ColorTableEntry"_s, "green"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "255"_s, true, true);
	addAttribute("ColorTableEntry"_s, "blue"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "255"_s, true, true);
}

bool GIFStreamMetadataFormat::canNodeAppear($String* elementName, $ImageTypeSpecifier* imageType) {
	return true;
}

$IIOMetadataFormat* GIFStreamMetadataFormat::getInstance() {
	$load(GIFStreamMetadataFormat);
	$synchronized(class$) {
		$init(GIFStreamMetadataFormat);
		if (GIFStreamMetadataFormat::instance == nullptr) {
			$assignStatic(GIFStreamMetadataFormat::instance, $new(GIFStreamMetadataFormat));
		}
		return GIFStreamMetadataFormat::instance;
	}
}

void clinit$GIFStreamMetadataFormat($Class* class$) {
	$assignStatic(GIFStreamMetadataFormat::instance, nullptr);
}

GIFStreamMetadataFormat::GIFStreamMetadataFormat() {
}

$Class* GIFStreamMetadataFormat::load$($String* name, bool initialize) {
	$loadClass(GIFStreamMetadataFormat, name, initialize, &_GIFStreamMetadataFormat_ClassInfo_, clinit$GIFStreamMetadataFormat, allocate$GIFStreamMetadataFormat);
	return class$;
}

$Class* GIFStreamMetadataFormat::class$ = nullptr;

				} // gif
			} // plugins
		} // imageio
	} // sun
} // com