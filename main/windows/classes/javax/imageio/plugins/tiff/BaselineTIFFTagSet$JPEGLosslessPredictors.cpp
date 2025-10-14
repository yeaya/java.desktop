#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGLosslessPredictors.h>

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

$MethodInfo _BaselineTIFFTagSet$JPEGLosslessPredictors_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$JPEGLosslessPredictors::*)()>(&BaselineTIFFTagSet$JPEGLosslessPredictors::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$JPEGLosslessPredictors_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGLosslessPredictors", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGLosslessPredictors", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$JPEGLosslessPredictors_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGLosslessPredictors",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$JPEGLosslessPredictors_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$JPEGLosslessPredictors_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$JPEGLosslessPredictors($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$JPEGLosslessPredictors));
}

void BaselineTIFFTagSet$JPEGLosslessPredictors::init$() {
	$TIFFTag::init$("JPEGLosslessPredictors"_s, 517, $sl(1, $TIFFTag::TIFF_SHORT));
	addValueName(1, "A"_s);
	addValueName(2, "B"_s);
	addValueName(3, "C"_s);
	addValueName(4, "A+B-C"_s);
	addValueName(5, "A+((B-C)/2)"_s);
	addValueName(6, "B+((A-C)/2)"_s);
	addValueName(7, "(A+B)/2"_s);
}

BaselineTIFFTagSet$JPEGLosslessPredictors::BaselineTIFFTagSet$JPEGLosslessPredictors() {
}

$Class* BaselineTIFFTagSet$JPEGLosslessPredictors::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$JPEGLosslessPredictors, name, initialize, &_BaselineTIFFTagSet$JPEGLosslessPredictors_ClassInfo_, allocate$BaselineTIFFTagSet$JPEGLosslessPredictors);
	return class$;
}

$Class* BaselineTIFFTagSet$JPEGLosslessPredictors::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax