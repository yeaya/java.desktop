#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$SMaxSampleValue.h>

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
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$SMaxSampleValue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$SMaxSampleValue::*)()>(&BaselineTIFFTagSet$SMaxSampleValue::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$SMaxSampleValue_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$SMaxSampleValue", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "SMaxSampleValue", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$SMaxSampleValue_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$SMaxSampleValue",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$SMaxSampleValue_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$SMaxSampleValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$SMaxSampleValue($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$SMaxSampleValue));
}

void BaselineTIFFTagSet$SMaxSampleValue::init$() {
	$TIFFTag::init$("SMaxSampleValue"_s, 341, ((((((((($sl(1, $TIFFTag::TIFF_BYTE)) | ($sl(1, $TIFFTag::TIFF_SHORT))) | ($sl(1, $TIFFTag::TIFF_LONG))) | ($sl(1, $TIFFTag::TIFF_RATIONAL))) | ($sl(1, $TIFFTag::TIFF_SBYTE))) | ($sl(1, $TIFFTag::TIFF_SSHORT))) | ($sl(1, $TIFFTag::TIFF_SLONG))) | ($sl(1, $TIFFTag::TIFF_SRATIONAL))) | ($sl(1, $TIFFTag::TIFF_FLOAT))) | ($sl(1, $TIFFTag::TIFF_DOUBLE)));
}

BaselineTIFFTagSet$SMaxSampleValue::BaselineTIFFTagSet$SMaxSampleValue() {
}

$Class* BaselineTIFFTagSet$SMaxSampleValue::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$SMaxSampleValue, name, initialize, &_BaselineTIFFTagSet$SMaxSampleValue_ClassInfo_, allocate$BaselineTIFFTagSet$SMaxSampleValue);
	return class$;
}

$Class* BaselineTIFFTagSet$SMaxSampleValue::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax