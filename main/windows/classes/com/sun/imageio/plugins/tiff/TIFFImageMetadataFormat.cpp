#include <com/sun/imageio/plugins/tiff/TIFFImageMetadataFormat.h>

#include <com/sun/imageio/plugins/tiff/TIFFAttrInfo.h>
#include <com/sun/imageio/plugins/tiff/TIFFElementInfo.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageMetadata.h>
#include <com/sun/imageio/plugins/tiff/TIFFMetadataFormat.h>
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

#undef CHILD_POLICY_CHOICE
#undef CHILD_POLICY_EMPTY
#undef CHILD_POLICY_SEQUENCE
#undef DATATYPE_INTEGER
#undef DATATYPE_STRING
#undef NATIVE_METADATA_FORMAT_NAME

using $TIFFAttrInfo = ::com::sun::imageio::plugins::tiff::TIFFAttrInfo;
using $TIFFElementInfo = ::com::sun::imageio::plugins::tiff::TIFFElementInfo;
using $TIFFImageMetadata = ::com::sun::imageio::plugins::tiff::TIFFImageMetadata;
using $TIFFMetadataFormat = ::com::sun::imageio::plugins::tiff::TIFFMetadataFormat;
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

$FieldInfo _TIFFImageMetadataFormat_FieldInfo_[] = {
	{"theInstance", "Lcom/sun/imageio/plugins/tiff/TIFFImageMetadataFormat;", nullptr, $PRIVATE | $STATIC, $staticField(TIFFImageMetadataFormat, theInstance)},
	{}
};

$MethodInfo _TIFFImageMetadataFormat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(TIFFImageMetadataFormat::*)()>(&TIFFImageMetadataFormat::init$))},
	{"canNodeAppear", "(Ljava/lang/String;Ljavax/imageio/ImageTypeSpecifier;)Z", nullptr, $PUBLIC},
	{"getInstance", "()Ljavax/imageio/metadata/IIOMetadataFormat;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$IIOMetadataFormat*(*)()>(&TIFFImageMetadataFormat::getInstance))},
	{}
};

$ClassInfo _TIFFImageMetadataFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFImageMetadataFormat",
	"com.sun.imageio.plugins.tiff.TIFFMetadataFormat",
	nullptr,
	_TIFFImageMetadataFormat_FieldInfo_,
	_TIFFImageMetadataFormat_MethodInfo_
};

$Object* allocate$TIFFImageMetadataFormat($Class* clazz) {
	return $of($alloc(TIFFImageMetadataFormat));
}

TIFFImageMetadataFormat* TIFFImageMetadataFormat::theInstance = nullptr;

bool TIFFImageMetadataFormat::canNodeAppear($String* elementName, $ImageTypeSpecifier* imageType) {
	return false;
}

void TIFFImageMetadataFormat::init$() {
	$useLocalCurrentObjectStackCache();
	$TIFFMetadataFormat::init$();
	$set(this, resourceBaseName, "javax.imageio.plugins.tiff.TIFFImageMetadataFormatResources"_s);
	$init($TIFFImageMetadata);
	$set(this, rootName, $TIFFImageMetadata::NATIVE_METADATA_FORMAT_NAME);
	$var($TIFFElementInfo, einfo, nullptr);
	$var($TIFFAttrInfo, ainfo, nullptr);
	$var($StringArray, empty, $new($StringArray, 0));
	$var($StringArray, childNames, nullptr);
	$var($StringArray, attrNames, nullptr);
	$assign(childNames, $new($StringArray, {"TIFFIFD"_s}));
	$assign(einfo, $new($TIFFElementInfo, childNames, empty, $IIOMetadataFormat::CHILD_POLICY_SEQUENCE));
	$nc(this->elementInfoMap)->put($TIFFImageMetadata::NATIVE_METADATA_FORMAT_NAME, einfo);
	$assign(childNames, $new($StringArray, {
		"TIFFField"_s,
		"TIFFIFD"_s
	}));
	$assign(attrNames, $new($StringArray, {
		"tagSets"_s,
		"parentTagNumber"_s,
		"parentTagName"_s
	}));
	$assign(einfo, $new($TIFFElementInfo, childNames, attrNames, $IIOMetadataFormat::CHILD_POLICY_SEQUENCE));
	$nc(this->elementInfoMap)->put("TIFFIFD"_s, einfo);
	$assign(ainfo, $new($TIFFAttrInfo));
	ainfo->dataType = $IIOMetadataFormat::DATATYPE_STRING;
	ainfo->isRequired = true;
	$nc(this->attrInfoMap)->put("TIFFIFD/tagSets"_s, ainfo);
	$assign(ainfo, $new($TIFFAttrInfo));
	ainfo->dataType = $IIOMetadataFormat::DATATYPE_INTEGER;
	ainfo->isRequired = false;
	$nc(this->attrInfoMap)->put("TIFFIFD/parentTagNumber"_s, ainfo);
	$assign(ainfo, $new($TIFFAttrInfo));
	ainfo->dataType = $IIOMetadataFormat::DATATYPE_STRING;
	ainfo->isRequired = false;
	$nc(this->attrInfoMap)->put("TIFFIFD/parentTagName"_s, ainfo);
	$var($StringArray, types, $new($StringArray, {
		"TIFFByte"_s,
		"TIFFAscii"_s,
		"TIFFShort"_s,
		"TIFFSShort"_s,
		"TIFFLong"_s,
		"TIFFSLong"_s,
		"TIFFRational"_s,
		"TIFFSRational"_s,
		"TIFFFloat"_s,
		"TIFFDouble"_s,
		"TIFFUndefined"_s
	}));
	$assign(attrNames, $new($StringArray, {
		"value"_s,
		"description"_s
	}));
	$var($StringArray, attrNamesValueOnly, $new($StringArray, {"value"_s}));
	$var($TIFFAttrInfo, ainfoValue, $new($TIFFAttrInfo));
	$var($TIFFAttrInfo, ainfoDescription, $new($TIFFAttrInfo));
	for (int32_t i = 0; i < types->length; ++i) {
		if (!$nc(types->get(i))->equals("TIFFUndefined"_s)) {
			$assign(childNames, $new($StringArray, 1));
			childNames->set(0, types->get(i));
			$assign(einfo, $new($TIFFElementInfo, childNames, empty, $IIOMetadataFormat::CHILD_POLICY_SEQUENCE));
			$nc(this->elementInfoMap)->put($$str({types->get(i), "s"_s}), einfo);
		}
		bool var$4 = !$nc(types->get(i))->equals("TIFFUndefined"_s);
		bool var$3 = var$4 && !$nc(types->get(i))->equals("TIFFAscii"_s);
		bool var$2 = var$3 && !$nc(types->get(i))->equals("TIFFRational"_s);
		bool var$1 = var$2 && !$nc(types->get(i))->equals("TIFFSRational"_s);
		bool var$0 = var$1 && !$nc(types->get(i))->equals("TIFFFloat"_s);
		bool hasDescription = var$0 && !$nc(types->get(i))->equals("TIFFDouble"_s);
		$var($StringArray, anames, hasDescription ? attrNames : attrNamesValueOnly);
		$assign(einfo, $new($TIFFElementInfo, empty, anames, $IIOMetadataFormat::CHILD_POLICY_EMPTY));
		$nc(this->elementInfoMap)->put(types->get(i), einfo);
		$nc(this->attrInfoMap)->put($$str({types->get(i), "/value"_s}), ainfoValue);
		if (hasDescription) {
			$nc(this->attrInfoMap)->put($$str({types->get(i), "/description"_s}), ainfoDescription);
		}
	}
	$assign(childNames, $new($StringArray, 2 * types->length - 1));
	for (int32_t i = 0; i < types->length; ++i) {
		childNames->set(2 * i, types->get(i));
		if (!$nc(types->get(i))->equals("TIFFUndefined"_s)) {
			childNames->set(2 * i + 1, $$str({types->get(i), "s"_s}));
		}
	}
	$assign(attrNames, $new($StringArray, {
		"number"_s,
		"name"_s
	}));
	$assign(einfo, $new($TIFFElementInfo, childNames, attrNames, $IIOMetadataFormat::CHILD_POLICY_CHOICE));
	$nc(this->elementInfoMap)->put("TIFFField"_s, einfo);
	$assign(ainfo, $new($TIFFAttrInfo));
	ainfo->isRequired = true;
	$nc(this->attrInfoMap)->put("TIFFField/number"_s, ainfo);
	$assign(ainfo, $new($TIFFAttrInfo));
	$nc(this->attrInfoMap)->put("TIFFField/name"_s, ainfo);
}

$IIOMetadataFormat* TIFFImageMetadataFormat::getInstance() {
	$load(TIFFImageMetadataFormat);
	$synchronized(class$) {
		$init(TIFFImageMetadataFormat);
		if (TIFFImageMetadataFormat::theInstance == nullptr) {
			$assignStatic(TIFFImageMetadataFormat::theInstance, $new(TIFFImageMetadataFormat));
		}
		return TIFFImageMetadataFormat::theInstance;
	}
}

void clinit$TIFFImageMetadataFormat($Class* class$) {
	$assignStatic(TIFFImageMetadataFormat::theInstance, nullptr);
	{
	}
}

TIFFImageMetadataFormat::TIFFImageMetadataFormat() {
}

$Class* TIFFImageMetadataFormat::load$($String* name, bool initialize) {
	$loadClass(TIFFImageMetadataFormat, name, initialize, &_TIFFImageMetadataFormat_ClassInfo_, clinit$TIFFImageMetadataFormat, allocate$TIFFImageMetadataFormat);
	return class$;
}

$Class* TIFFImageMetadataFormat::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com