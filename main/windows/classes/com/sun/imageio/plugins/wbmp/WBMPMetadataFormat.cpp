#include <com/sun/imageio/plugins/wbmp/WBMPMetadataFormat.h>

#include <com/sun/imageio/plugins/wbmp/WBMPMetadata.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/metadata/IIOMetadataFormat.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <jcpp.h>

#undef CHILD_POLICY_EMPTY
#undef CHILD_POLICY_SOME
#undef DATATYPE_INTEGER

using $WBMPMetadata = ::com::sun::imageio::plugins::wbmp::WBMPMetadata;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $IIOMetadataFormat = ::javax::imageio::metadata::IIOMetadataFormat;
using $IIOMetadataFormatImpl = ::javax::imageio::metadata::IIOMetadataFormatImpl;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace wbmp {

$FieldInfo _WBMPMetadataFormat_FieldInfo_[] = {
	{"instance", "Ljavax/imageio/metadata/IIOMetadataFormat;", nullptr, $PRIVATE | $STATIC, $staticField(WBMPMetadataFormat, instance)},
	{}
};

$MethodInfo _WBMPMetadataFormat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WBMPMetadataFormat::*)()>(&WBMPMetadataFormat::init$))},
	{"canNodeAppear", "(Ljava/lang/String;Ljavax/imageio/ImageTypeSpecifier;)Z", nullptr, $PUBLIC},
	{"getInstance", "()Ljavax/imageio/metadata/IIOMetadataFormat;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$IIOMetadataFormat*(*)()>(&WBMPMetadataFormat::getInstance))},
	{}
};

$ClassInfo _WBMPMetadataFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.wbmp.WBMPMetadataFormat",
	"javax.imageio.metadata.IIOMetadataFormatImpl",
	nullptr,
	_WBMPMetadataFormat_FieldInfo_,
	_WBMPMetadataFormat_MethodInfo_
};

$Object* allocate$WBMPMetadataFormat($Class* clazz) {
	return $of($alloc(WBMPMetadataFormat));
}

$IIOMetadataFormat* WBMPMetadataFormat::instance = nullptr;

void WBMPMetadataFormat::init$() {
	$init($WBMPMetadata);
	$IIOMetadataFormatImpl::init$($WBMPMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_SOME);
	addElement("ImageDescriptor"_s, $WBMPMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("ImageDescriptor"_s, "WBMPType"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, "0"_s);
	addAttribute("ImageDescriptor"_s, "Width"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "65535"_s, true, true);
	addAttribute("ImageDescriptor"_s, "Height"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "1"_s, "65535"_s, true, true);
}

bool WBMPMetadataFormat::canNodeAppear($String* elementName, $ImageTypeSpecifier* imageType) {
	return true;
}

$IIOMetadataFormat* WBMPMetadataFormat::getInstance() {
	$load(WBMPMetadataFormat);
	$synchronized(class$) {
		$init(WBMPMetadataFormat);
		if (WBMPMetadataFormat::instance == nullptr) {
			$assignStatic(WBMPMetadataFormat::instance, $new(WBMPMetadataFormat));
		}
		return WBMPMetadataFormat::instance;
	}
}

void clinit$WBMPMetadataFormat($Class* class$) {
	$assignStatic(WBMPMetadataFormat::instance, nullptr);
}

WBMPMetadataFormat::WBMPMetadataFormat() {
}

$Class* WBMPMetadataFormat::load$($String* name, bool initialize) {
	$loadClass(WBMPMetadataFormat, name, initialize, &_WBMPMetadataFormat_ClassInfo_, clinit$WBMPMetadataFormat, allocate$WBMPMetadataFormat);
	return class$;
}

$Class* WBMPMetadataFormat::class$ = nullptr;

				} // wbmp
			} // plugins
		} // imageio
	} // sun
} // com