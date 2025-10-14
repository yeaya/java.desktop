#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$YCbCrCoefficients.h>

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

#undef TIFF_RATIONAL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$YCbCrCoefficients_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$YCbCrCoefficients::*)()>(&BaselineTIFFTagSet$YCbCrCoefficients::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$YCbCrCoefficients_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$YCbCrCoefficients", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "YCbCrCoefficients", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$YCbCrCoefficients_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$YCbCrCoefficients",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$YCbCrCoefficients_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$YCbCrCoefficients_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$YCbCrCoefficients($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$YCbCrCoefficients));
}

void BaselineTIFFTagSet$YCbCrCoefficients::init$() {
	$TIFFTag::init$("YCbCrCoefficients"_s, 529, $sl(1, $TIFFTag::TIFF_RATIONAL), 3);
}

BaselineTIFFTagSet$YCbCrCoefficients::BaselineTIFFTagSet$YCbCrCoefficients() {
}

$Class* BaselineTIFFTagSet$YCbCrCoefficients::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$YCbCrCoefficients, name, initialize, &_BaselineTIFFTagSet$YCbCrCoefficients_ClassInfo_, allocate$BaselineTIFFTagSet$YCbCrCoefficients);
	return class$;
}

$Class* BaselineTIFFTagSet$YCbCrCoefficients::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax