#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$MaxSampleValue.h>

#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$MaxSampleValue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$MaxSampleValue::*)()>(&BaselineTIFFTagSet$MaxSampleValue::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$MaxSampleValue_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$MaxSampleValue", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "MaxSampleValue", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$MaxSampleValue_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$MaxSampleValue",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$MaxSampleValue_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$MaxSampleValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$MaxSampleValue($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$MaxSampleValue));
}

void BaselineTIFFTagSet$MaxSampleValue::init$() {
	$TIFFTag::init$("MaxSampleValue"_s, 281, $sl(1, $TIFFTag::TIFF_SHORT));
}

BaselineTIFFTagSet$MaxSampleValue::BaselineTIFFTagSet$MaxSampleValue() {
}

$Class* BaselineTIFFTagSet$MaxSampleValue::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$MaxSampleValue, name, initialize, &_BaselineTIFFTagSet$MaxSampleValue_ClassInfo_, allocate$BaselineTIFFTagSet$MaxSampleValue);
	return class$;
}

$Class* BaselineTIFFTagSet$MaxSampleValue::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax