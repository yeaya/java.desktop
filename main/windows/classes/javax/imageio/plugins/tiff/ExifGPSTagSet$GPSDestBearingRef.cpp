#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDestBearingRef.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_ASCII

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExifGPSTagSet = ::javax::imageio::plugins::tiff::ExifGPSTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifGPSTagSet$GPSDestBearingRef_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSDestBearingRef::*)()>(&ExifGPSTagSet$GPSDestBearingRef::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSDestBearingRef_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestBearingRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDestBearingRef", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSDestBearingRef_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestBearingRef",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSDestBearingRef_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSDestBearingRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSDestBearingRef($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSDestBearingRef));
}

void ExifGPSTagSet$GPSDestBearingRef::init$() {
	$TIFFTag::init$("GPSDestBearingRef"_s, 23, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifGPSTagSet$GPSDestBearingRef::ExifGPSTagSet$GPSDestBearingRef() {
}

$Class* ExifGPSTagSet$GPSDestBearingRef::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSDestBearingRef, name, initialize, &_ExifGPSTagSet$GPSDestBearingRef_ClassInfo_, allocate$ExifGPSTagSet$GPSDestBearingRef);
	return class$;
}

$Class* ExifGPSTagSet$GPSDestBearingRef::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax