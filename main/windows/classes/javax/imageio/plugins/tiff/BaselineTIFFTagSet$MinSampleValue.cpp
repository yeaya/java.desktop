#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$MinSampleValue.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$MinSampleValue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$MinSampleValue::*)()>(&BaselineTIFFTagSet$MinSampleValue::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$MinSampleValue_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$MinSampleValue", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "MinSampleValue", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$MinSampleValue_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$MinSampleValue",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$MinSampleValue_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$MinSampleValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$MinSampleValue($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$MinSampleValue));
}

void BaselineTIFFTagSet$MinSampleValue::init$() {
	$TIFFTag::init$("MinSampleValue"_s, 280, $sl(1, $TIFFTag::TIFF_SHORT));
}

BaselineTIFFTagSet$MinSampleValue::BaselineTIFFTagSet$MinSampleValue() {
}

$Class* BaselineTIFFTagSet$MinSampleValue::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$MinSampleValue, name, initialize, &_BaselineTIFFTagSet$MinSampleValue_ClassInfo_, allocate$BaselineTIFFTagSet$MinSampleValue);
	return class$;
}

$Class* BaselineTIFFTagSet$MinSampleValue::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax