#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$SMinSampleValue.h>

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

#undef TIFF_BYTE
#undef TIFF_DOUBLE
#undef TIFF_FLOAT
#undef TIFF_LONG
#undef TIFF_RATIONAL
#undef TIFF_SBYTE
#undef TIFF_SHORT
#undef TIFF_SLONG
#undef TIFF_SRATIONAL
#undef TIFF_SSHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$SMinSampleValue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$SMinSampleValue::*)()>(&BaselineTIFFTagSet$SMinSampleValue::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$SMinSampleValue_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$SMinSampleValue", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "SMinSampleValue", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$SMinSampleValue_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$SMinSampleValue",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$SMinSampleValue_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$SMinSampleValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$SMinSampleValue($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$SMinSampleValue));
}

void BaselineTIFFTagSet$SMinSampleValue::init$() {
	$TIFFTag::init$("SMinSampleValue"_s, 340, ((((((((($sl(1, $TIFFTag::TIFF_BYTE)) | ($sl(1, $TIFFTag::TIFF_SHORT))) | ($sl(1, $TIFFTag::TIFF_LONG))) | ($sl(1, $TIFFTag::TIFF_RATIONAL))) | ($sl(1, $TIFFTag::TIFF_SBYTE))) | ($sl(1, $TIFFTag::TIFF_SSHORT))) | ($sl(1, $TIFFTag::TIFF_SLONG))) | ($sl(1, $TIFFTag::TIFF_SRATIONAL))) | ($sl(1, $TIFFTag::TIFF_FLOAT))) | ($sl(1, $TIFFTag::TIFF_DOUBLE)));
}

BaselineTIFFTagSet$SMinSampleValue::BaselineTIFFTagSet$SMinSampleValue() {
}

$Class* BaselineTIFFTagSet$SMinSampleValue::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$SMinSampleValue, name, initialize, &_BaselineTIFFTagSet$SMinSampleValue_ClassInfo_, allocate$BaselineTIFFTagSet$SMinSampleValue);
	return class$;
}

$Class* BaselineTIFFTagSet$SMinSampleValue::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax