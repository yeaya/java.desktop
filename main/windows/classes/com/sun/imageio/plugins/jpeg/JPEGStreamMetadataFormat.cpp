#include <com/sun/imageio/plugins/jpeg/JPEGStreamMetadataFormat.h>

#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <com/sun/imageio/plugins/jpeg/JPEGMetadataFormat.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/metadata/IIOMetadataFormat.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <jcpp.h>

#undef CHILD_POLICY_SEQUENCE

using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $JPEGMetadataFormat = ::com::sun::imageio::plugins::jpeg::JPEGMetadataFormat;
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
				namespace jpeg {

$FieldInfo _JPEGStreamMetadataFormat_FieldInfo_[] = {
	{"theInstance", "Lcom/sun/imageio/plugins/jpeg/JPEGStreamMetadataFormat;", nullptr, $PRIVATE | $STATIC, $staticField(JPEGStreamMetadataFormat, theInstance)},
	{}
};

$MethodInfo _JPEGStreamMetadataFormat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(JPEGStreamMetadataFormat::*)()>(&JPEGStreamMetadataFormat::init$))},
	{"canNodeAppear", "(Ljava/lang/String;Ljavax/imageio/ImageTypeSpecifier;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getInstance", "()Ljavax/imageio/metadata/IIOMetadataFormat;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$IIOMetadataFormat*(*)()>(&JPEGStreamMetadataFormat::getInstance))},
	{}
};

$ClassInfo _JPEGStreamMetadataFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JPEGStreamMetadataFormat",
	"com.sun.imageio.plugins.jpeg.JPEGMetadataFormat",
	nullptr,
	_JPEGStreamMetadataFormat_FieldInfo_,
	_JPEGStreamMetadataFormat_MethodInfo_
};

$Object* allocate$JPEGStreamMetadataFormat($Class* clazz) {
	return $of($alloc(JPEGStreamMetadataFormat));
}

JPEGStreamMetadataFormat* JPEGStreamMetadataFormat::theInstance = nullptr;

void JPEGStreamMetadataFormat::init$() {
	$init($JPEG);
	$JPEGMetadataFormat::init$($JPEG::nativeStreamMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_SEQUENCE);
	addStreamElements($(getRootName()));
}

$IIOMetadataFormat* JPEGStreamMetadataFormat::getInstance() {
	$load(JPEGStreamMetadataFormat);
	$synchronized(class$) {
		$init(JPEGStreamMetadataFormat);
		if (JPEGStreamMetadataFormat::theInstance == nullptr) {
			$assignStatic(JPEGStreamMetadataFormat::theInstance, $new(JPEGStreamMetadataFormat));
		}
		return JPEGStreamMetadataFormat::theInstance;
	}
}

bool JPEGStreamMetadataFormat::canNodeAppear($String* elementName, $ImageTypeSpecifier* imageType) {
	return $JPEGMetadataFormat::canNodeAppear(elementName, imageType);
}

void clinit$JPEGStreamMetadataFormat($Class* class$) {
	$assignStatic(JPEGStreamMetadataFormat::theInstance, nullptr);
}

JPEGStreamMetadataFormat::JPEGStreamMetadataFormat() {
}

$Class* JPEGStreamMetadataFormat::load$($String* name, bool initialize) {
	$loadClass(JPEGStreamMetadataFormat, name, initialize, &_JPEGStreamMetadataFormat_ClassInfo_, clinit$JPEGStreamMetadataFormat, allocate$JPEGStreamMetadataFormat);
	return class$;
}

$Class* JPEGStreamMetadataFormat::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com