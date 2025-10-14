#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$FocalPlaneXResolution.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_RATIONAL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExifTIFFTagSet = ::javax::imageio::plugins::tiff::ExifTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifTIFFTagSet$FocalPlaneXResolution_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$FocalPlaneXResolution::*)()>(&ExifTIFFTagSet$FocalPlaneXResolution::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$FocalPlaneXResolution_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalPlaneXResolution", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "FocalPlaneXResolution", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$FocalPlaneXResolution_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalPlaneXResolution",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$FocalPlaneXResolution_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$FocalPlaneXResolution_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$FocalPlaneXResolution($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$FocalPlaneXResolution));
}

void ExifTIFFTagSet$FocalPlaneXResolution::init$() {
	$TIFFTag::init$("FocalPlaneXResolution"_s, 0x0000A20E, $sl(1, $TIFFTag::TIFF_RATIONAL), 1);
}

ExifTIFFTagSet$FocalPlaneXResolution::ExifTIFFTagSet$FocalPlaneXResolution() {
}

$Class* ExifTIFFTagSet$FocalPlaneXResolution::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$FocalPlaneXResolution, name, initialize, &_ExifTIFFTagSet$FocalPlaneXResolution_ClassInfo_, allocate$ExifTIFFTagSet$FocalPlaneXResolution);
	return class$;
}

$Class* ExifTIFFTagSet$FocalPlaneXResolution::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax