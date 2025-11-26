#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDOP.h>

#include <javax/imageio/plugins/tiff/ExifGPSTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_RATIONAL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExifGPSTagSet = ::javax::imageio::plugins::tiff::ExifGPSTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifGPSTagSet$GPSDOP_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSDOP::*)()>(&ExifGPSTagSet$GPSDOP::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSDOP_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDOP", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDOP", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSDOP_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDOP",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSDOP_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSDOP_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSDOP($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSDOP));
}

void ExifGPSTagSet$GPSDOP::init$() {
	$TIFFTag::init$("GPSDOP"_s, 11, $sl(1, $TIFFTag::TIFF_RATIONAL));
}

ExifGPSTagSet$GPSDOP::ExifGPSTagSet$GPSDOP() {
}

$Class* ExifGPSTagSet$GPSDOP::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSDOP, name, initialize, &_ExifGPSTagSet$GPSDOP_ClassInfo_, allocate$ExifGPSTagSet$GPSDOP);
	return class$;
}

$Class* ExifGPSTagSet$GPSDOP::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax