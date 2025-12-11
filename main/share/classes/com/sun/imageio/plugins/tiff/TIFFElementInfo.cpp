#include <com/sun/imageio/plugins/tiff/TIFFElementInfo.h>

#include <javax/imageio/metadata/IIOMetadataFormat.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef VALUE_NONE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOMetadataFormat = ::javax::imageio::metadata::IIOMetadataFormat;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFElementInfo_FieldInfo_[] = {
	{"childNames", "[Ljava/lang/String;", nullptr, 0, $field(TIFFElementInfo, childNames)},
	{"attributeNames", "[Ljava/lang/String;", nullptr, 0, $field(TIFFElementInfo, attributeNames)},
	{"childPolicy", "I", nullptr, 0, $field(TIFFElementInfo, childPolicy)},
	{"minChildren", "I", nullptr, 0, $field(TIFFElementInfo, minChildren)},
	{"maxChildren", "I", nullptr, 0, $field(TIFFElementInfo, maxChildren)},
	{"objectValueType", "I", nullptr, 0, $field(TIFFElementInfo, objectValueType)},
	{"objectClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", 0, $field(TIFFElementInfo, objectClass)},
	{"objectDefaultValue", "Ljava/lang/Object;", nullptr, 0, $field(TIFFElementInfo, objectDefaultValue)},
	{"objectEnumerations", "[Ljava/lang/Object;", nullptr, 0, $field(TIFFElementInfo, objectEnumerations)},
	{"objectMinValue", "Ljava/lang/Comparable;", "Ljava/lang/Comparable<Ljava/lang/Object;>;", 0, $field(TIFFElementInfo, objectMinValue)},
	{"objectMaxValue", "Ljava/lang/Comparable;", "Ljava/lang/Comparable<Ljava/lang/Object;>;", 0, $field(TIFFElementInfo, objectMaxValue)},
	{"objectArrayMinLength", "I", nullptr, 0, $field(TIFFElementInfo, objectArrayMinLength)},
	{"objectArrayMaxLength", "I", nullptr, 0, $field(TIFFElementInfo, objectArrayMaxLength)},
	{}
};

$MethodInfo _TIFFElementInfo_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/String;[Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFElementInfo::*)($StringArray*,$StringArray*,int32_t)>(&TIFFElementInfo::init$))},
	{}
};

$ClassInfo _TIFFElementInfo_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFElementInfo",
	"java.lang.Object",
	nullptr,
	_TIFFElementInfo_FieldInfo_,
	_TIFFElementInfo_MethodInfo_
};

$Object* allocate$TIFFElementInfo($Class* clazz) {
	return $of($alloc(TIFFElementInfo));
}

void TIFFElementInfo::init$($StringArray* childNames, $StringArray* attributeNames, int32_t childPolicy) {
	this->minChildren = 0;
	this->maxChildren = $Integer::MAX_VALUE;
	this->objectValueType = $IIOMetadataFormat::VALUE_NONE;
	$set(this, objectClass, nullptr);
	$set(this, objectDefaultValue, nullptr);
	$set(this, objectEnumerations, nullptr);
	$set(this, objectMinValue, nullptr);
	$set(this, objectMaxValue, nullptr);
	this->objectArrayMinLength = 0;
	this->objectArrayMaxLength = 0;
	$set(this, childNames, childNames);
	$set(this, attributeNames, attributeNames);
	this->childPolicy = childPolicy;
}

TIFFElementInfo::TIFFElementInfo() {
}

$Class* TIFFElementInfo::load$($String* name, bool initialize) {
	$loadClass(TIFFElementInfo, name, initialize, &_TIFFElementInfo_ClassInfo_, allocate$TIFFElementInfo);
	return class$;
}

$Class* TIFFElementInfo::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com