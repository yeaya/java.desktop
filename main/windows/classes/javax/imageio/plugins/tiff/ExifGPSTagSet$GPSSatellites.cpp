#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSSatellites.h>

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

$MethodInfo _ExifGPSTagSet$GPSSatellites_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSSatellites::*)()>(&ExifGPSTagSet$GPSSatellites::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSSatellites_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSSatellites", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSSatellites", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSSatellites_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSSatellites",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSSatellites_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSSatellites_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSSatellites($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSSatellites));
}

void ExifGPSTagSet$GPSSatellites::init$() {
	$TIFFTag::init$("GPSSatellites"_s, 8, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifGPSTagSet$GPSSatellites::ExifGPSTagSet$GPSSatellites() {
}

$Class* ExifGPSTagSet$GPSSatellites::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSSatellites, name, initialize, &_ExifGPSTagSet$GPSSatellites_ClassInfo_, allocate$ExifGPSTagSet$GPSSatellites);
	return class$;
}

$Class* ExifGPSTagSet$GPSSatellites::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax