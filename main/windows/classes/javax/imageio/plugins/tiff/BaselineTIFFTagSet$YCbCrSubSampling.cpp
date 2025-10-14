#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$YCbCrSubSampling.h>

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

$MethodInfo _BaselineTIFFTagSet$YCbCrSubSampling_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$YCbCrSubSampling::*)()>(&BaselineTIFFTagSet$YCbCrSubSampling::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$YCbCrSubSampling_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$YCbCrSubSampling", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "YCbCrSubSampling", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$YCbCrSubSampling_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$YCbCrSubSampling",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$YCbCrSubSampling_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$YCbCrSubSampling_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$YCbCrSubSampling($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$YCbCrSubSampling));
}

void BaselineTIFFTagSet$YCbCrSubSampling::init$() {
	$TIFFTag::init$("YCbCrSubSampling"_s, 530, $sl(1, $TIFFTag::TIFF_SHORT), 2);
}

BaselineTIFFTagSet$YCbCrSubSampling::BaselineTIFFTagSet$YCbCrSubSampling() {
}

$Class* BaselineTIFFTagSet$YCbCrSubSampling::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$YCbCrSubSampling, name, initialize, &_BaselineTIFFTagSet$YCbCrSubSampling_ClassInfo_, allocate$BaselineTIFFTagSet$YCbCrSubSampling);
	return class$;
}

$Class* BaselineTIFFTagSet$YCbCrSubSampling::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax