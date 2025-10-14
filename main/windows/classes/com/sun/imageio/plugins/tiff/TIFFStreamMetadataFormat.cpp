#include <com/sun/imageio/plugins/tiff/TIFFStreamMetadataFormat.h>

#include <com/sun/imageio/plugins/tiff/TIFFAttrInfo.h>
#include <com/sun/imageio/plugins/tiff/TIFFElementInfo.h>
#include <com/sun/imageio/plugins/tiff/TIFFMetadataFormat.h>
#include <com/sun/imageio/plugins/tiff/TIFFStreamMetadata.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/metadata/IIOMetadataFormat.h>
#include <jcpp.h>

#undef CHILD_POLICY_ALL
#undef CHILD_POLICY_EMPTY
#undef DATATYPE_STRING
#undef NATIVE_METADATA_FORMAT_NAME

using $TIFFAttrInfo = ::com::sun::imageio::plugins::tiff::TIFFAttrInfo;
using $TIFFElementInfo = ::com::sun::imageio::plugins::tiff::TIFFElementInfo;
using $TIFFMetadataFormat = ::com::sun::imageio::plugins::tiff::TIFFMetadataFormat;
using $TIFFStreamMetadata = ::com::sun::imageio::plugins::tiff::TIFFStreamMetadata;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $IIOMetadataFormat = ::javax::imageio::metadata::IIOMetadataFormat;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFStreamMetadataFormat_FieldInfo_[] = {
	{"theInstance", "Lcom/sun/imageio/plugins/tiff/TIFFStreamMetadataFormat;", nullptr, $PRIVATE | $STATIC, $staticField(TIFFStreamMetadataFormat, theInstance)},
	{}
};

$MethodInfo _TIFFStreamMetadataFormat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(TIFFStreamMetadataFormat::*)()>(&TIFFStreamMetadataFormat::init$))},
	{"canNodeAppear", "(Ljava/lang/String;Ljavax/imageio/ImageTypeSpecifier;)Z", nullptr, $PUBLIC},
	{"getInstance", "()Ljavax/imageio/metadata/IIOMetadataFormat;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$IIOMetadataFormat*(*)()>(&TIFFStreamMetadataFormat::getInstance))},
	{}
};

$ClassInfo _TIFFStreamMetadataFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFStreamMetadataFormat",
	"com.sun.imageio.plugins.tiff.TIFFMetadataFormat",
	nullptr,
	_TIFFStreamMetadataFormat_FieldInfo_,
	_TIFFStreamMetadataFormat_MethodInfo_
};

$Object* allocate$TIFFStreamMetadataFormat($Class* clazz) {
	return $of($alloc(TIFFStreamMetadataFormat));
}

TIFFStreamMetadataFormat* TIFFStreamMetadataFormat::theInstance = nullptr;

bool TIFFStreamMetadataFormat::canNodeAppear($String* elementName, $ImageTypeSpecifier* imageType) {
	return false;
}

void TIFFStreamMetadataFormat::init$() {
	$TIFFMetadataFormat::init$();
	$set(this, resourceBaseName, "javax.imageio.plugins.tiff.TIFFStreamMetadataFormatResources"_s);
	$init($TIFFStreamMetadata);
	$set(this, rootName, $TIFFStreamMetadata::NATIVE_METADATA_FORMAT_NAME);
	$var($TIFFElementInfo, einfo, nullptr);
	$var($TIFFAttrInfo, ainfo, nullptr);
	$var($StringArray, empty, $new($StringArray, 0));
	$var($StringArray, childNames, nullptr);
	$var($StringArray, attrNames, nullptr);
	$assign(childNames, $new($StringArray, {"ByteOrder"_s}));
	$assign(einfo, $new($TIFFElementInfo, childNames, empty, $IIOMetadataFormat::CHILD_POLICY_ALL));
	$nc(this->elementInfoMap)->put($TIFFStreamMetadata::NATIVE_METADATA_FORMAT_NAME, einfo);
	$assign(childNames, empty);
	$assign(attrNames, $new($StringArray, {"value"_s}));
	$assign(einfo, $new($TIFFElementInfo, childNames, attrNames, $IIOMetadataFormat::CHILD_POLICY_EMPTY));
	$nc(this->elementInfoMap)->put("ByteOrder"_s, einfo);
	$assign(ainfo, $new($TIFFAttrInfo));
	ainfo->dataType = $IIOMetadataFormat::DATATYPE_STRING;
	ainfo->isRequired = true;
	$nc(this->attrInfoMap)->put("ByteOrder/value"_s, ainfo);
}

$IIOMetadataFormat* TIFFStreamMetadataFormat::getInstance() {
	$load(TIFFStreamMetadataFormat);
	$synchronized(class$) {
		$init(TIFFStreamMetadataFormat);
		if (TIFFStreamMetadataFormat::theInstance == nullptr) {
			$assignStatic(TIFFStreamMetadataFormat::theInstance, $new(TIFFStreamMetadataFormat));
		}
		return TIFFStreamMetadataFormat::theInstance;
	}
}

void clinit$TIFFStreamMetadataFormat($Class* class$) {
	$assignStatic(TIFFStreamMetadataFormat::theInstance, nullptr);
}

TIFFStreamMetadataFormat::TIFFStreamMetadataFormat() {
}

$Class* TIFFStreamMetadataFormat::load$($String* name, bool initialize) {
	$loadClass(TIFFStreamMetadataFormat, name, initialize, &_TIFFStreamMetadataFormat_ClassInfo_, clinit$TIFFStreamMetadataFormat, allocate$TIFFStreamMetadataFormat);
	return class$;
}

$Class* TIFFStreamMetadataFormat::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com