#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$YResolution.h>

#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_RATIONAL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$YResolution_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$YResolution::*)()>(&BaselineTIFFTagSet$YResolution::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$YResolution_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$YResolution", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "YResolution", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$YResolution_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$YResolution",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$YResolution_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$YResolution_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$YResolution($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$YResolution));
}

void BaselineTIFFTagSet$YResolution::init$() {
	$TIFFTag::init$("YResolution"_s, 283, $sl(1, $TIFFTag::TIFF_RATIONAL), 1);
}

BaselineTIFFTagSet$YResolution::BaselineTIFFTagSet$YResolution() {
}

$Class* BaselineTIFFTagSet$YResolution::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$YResolution, name, initialize, &_BaselineTIFFTagSet$YResolution_ClassInfo_, allocate$BaselineTIFFTagSet$YResolution);
	return class$;
}

$Class* BaselineTIFFTagSet$YResolution::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax