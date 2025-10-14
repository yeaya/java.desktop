#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$Threshholding.h>

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

$MethodInfo _BaselineTIFFTagSet$Threshholding_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$Threshholding::*)()>(&BaselineTIFFTagSet$Threshholding::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$Threshholding_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Threshholding", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "Threshholding", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$Threshholding_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Threshholding",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$Threshholding_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$Threshholding_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$Threshholding($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$Threshholding));
}

void BaselineTIFFTagSet$Threshholding::init$() {
	$TIFFTag::init$("Threshholding"_s, 263, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(1, "None"_s);
	addValueName(2, "OrderedDither"_s);
	addValueName(3, "RandomizedDither"_s);
}

BaselineTIFFTagSet$Threshholding::BaselineTIFFTagSet$Threshholding() {
}

$Class* BaselineTIFFTagSet$Threshholding::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$Threshholding, name, initialize, &_BaselineTIFFTagSet$Threshholding_ClassInfo_, allocate$BaselineTIFFTagSet$Threshholding);
	return class$;
}

$Class* BaselineTIFFTagSet$Threshholding::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax