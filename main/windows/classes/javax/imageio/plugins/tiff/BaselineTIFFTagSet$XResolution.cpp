#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$XResolution.h>

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

$MethodInfo _BaselineTIFFTagSet$XResolution_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$XResolution::*)()>(&BaselineTIFFTagSet$XResolution::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$XResolution_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$XResolution", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "XResolution", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$XResolution_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$XResolution",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$XResolution_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$XResolution_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$XResolution($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$XResolution));
}

void BaselineTIFFTagSet$XResolution::init$() {
	$TIFFTag::init$("XResolution"_s, 282, $sl(1, $TIFFTag::TIFF_RATIONAL), 1);
}

BaselineTIFFTagSet$XResolution::BaselineTIFFTagSet$XResolution() {
}

$Class* BaselineTIFFTagSet$XResolution::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$XResolution, name, initialize, &_BaselineTIFFTagSet$XResolution_ClassInfo_, allocate$BaselineTIFFTagSet$XResolution);
	return class$;
}

$Class* BaselineTIFFTagSet$XResolution::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax