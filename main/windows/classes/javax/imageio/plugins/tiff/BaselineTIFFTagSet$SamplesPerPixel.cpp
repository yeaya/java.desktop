#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$SamplesPerPixel.h>

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

$MethodInfo _BaselineTIFFTagSet$SamplesPerPixel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$SamplesPerPixel::*)()>(&BaselineTIFFTagSet$SamplesPerPixel::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$SamplesPerPixel_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$SamplesPerPixel", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "SamplesPerPixel", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$SamplesPerPixel_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$SamplesPerPixel",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$SamplesPerPixel_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$SamplesPerPixel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$SamplesPerPixel($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$SamplesPerPixel));
}

void BaselineTIFFTagSet$SamplesPerPixel::init$() {
	$TIFFTag::init$("SamplesPerPixel"_s, 277, $sl(1, $TIFFTag::TIFF_SHORT), 1);
}

BaselineTIFFTagSet$SamplesPerPixel::BaselineTIFFTagSet$SamplesPerPixel() {
}

$Class* BaselineTIFFTagSet$SamplesPerPixel::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$SamplesPerPixel, name, initialize, &_BaselineTIFFTagSet$SamplesPerPixel_ClassInfo_, allocate$BaselineTIFFTagSet$SamplesPerPixel);
	return class$;
}

$Class* BaselineTIFFTagSet$SamplesPerPixel::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax