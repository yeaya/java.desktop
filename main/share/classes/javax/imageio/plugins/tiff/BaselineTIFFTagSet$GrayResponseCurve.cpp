#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$GrayResponseCurve.h>

#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$GrayResponseCurve_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$GrayResponseCurve::*)()>(&BaselineTIFFTagSet$GrayResponseCurve::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$GrayResponseCurve_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$GrayResponseCurve", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "GrayResponseCurve", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$GrayResponseCurve_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$GrayResponseCurve",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$GrayResponseCurve_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$GrayResponseCurve_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$GrayResponseCurve($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$GrayResponseCurve));
}

void BaselineTIFFTagSet$GrayResponseCurve::init$() {
	$TIFFTag::init$("GrayResponseCurve"_s, 291, $sl(1, $TIFFTag::TIFF_SHORT));
}

BaselineTIFFTagSet$GrayResponseCurve::BaselineTIFFTagSet$GrayResponseCurve() {
}

$Class* BaselineTIFFTagSet$GrayResponseCurve::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$GrayResponseCurve, name, initialize, &_BaselineTIFFTagSet$GrayResponseCurve_ClassInfo_, allocate$BaselineTIFFTagSet$GrayResponseCurve);
	return class$;
}

$Class* BaselineTIFFTagSet$GrayResponseCurve::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax