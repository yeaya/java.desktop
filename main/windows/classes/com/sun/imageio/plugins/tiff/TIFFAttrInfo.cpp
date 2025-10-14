#include <com/sun/imageio/plugins/tiff/TIFFAttrInfo.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/metadata/IIOMetadataFormat.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef VALUE_ARBITRARY

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

$FieldInfo _TIFFAttrInfo_FieldInfo_[] = {
	{"valueType", "I", nullptr, 0, $field(TIFFAttrInfo, valueType)},
	{"dataType", "I", nullptr, 0, $field(TIFFAttrInfo, dataType)},
	{"isRequired", "Z", nullptr, 0, $field(TIFFAttrInfo, isRequired)},
	{"listMinLength", "I", nullptr, 0, $field(TIFFAttrInfo, listMinLength)},
	{"listMaxLength", "I", nullptr, 0, $field(TIFFAttrInfo, listMaxLength)},
	{}
};

$MethodInfo _TIFFAttrInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TIFFAttrInfo::*)()>(&TIFFAttrInfo::init$))},
	{}
};

$ClassInfo _TIFFAttrInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFAttrInfo",
	"java.lang.Object",
	nullptr,
	_TIFFAttrInfo_FieldInfo_,
	_TIFFAttrInfo_MethodInfo_
};

$Object* allocate$TIFFAttrInfo($Class* clazz) {
	return $of($alloc(TIFFAttrInfo));
}

void TIFFAttrInfo::init$() {
	this->valueType = $IIOMetadataFormat::VALUE_ARBITRARY;
	this->isRequired = false;
	this->listMinLength = 0;
	this->listMaxLength = $Integer::MAX_VALUE;
}

TIFFAttrInfo::TIFFAttrInfo() {
}

$Class* TIFFAttrInfo::load$($String* name, bool initialize) {
	$loadClass(TIFFAttrInfo, name, initialize, &_TIFFAttrInfo_ClassInfo_, allocate$TIFFAttrInfo);
	return class$;
}

$Class* TIFFAttrInfo::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com