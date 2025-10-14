#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$PixelXDimension.h>

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

#undef TIFF_LONG
#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExifTIFFTagSet = ::javax::imageio::plugins::tiff::ExifTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifTIFFTagSet$PixelXDimension_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$PixelXDimension::*)()>(&ExifTIFFTagSet$PixelXDimension::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$PixelXDimension_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$PixelXDimension", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "PixelXDimension", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$PixelXDimension_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$PixelXDimension",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$PixelXDimension_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$PixelXDimension_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$PixelXDimension($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$PixelXDimension));
}

void ExifTIFFTagSet$PixelXDimension::init$() {
	$TIFFTag::init$("PixelXDimension"_s, 0x0000A002, ($sl(1, $TIFFTag::TIFF_SHORT)) | ($sl(1, $TIFFTag::TIFF_LONG)), 1);
}

ExifTIFFTagSet$PixelXDimension::ExifTIFFTagSet$PixelXDimension() {
}

$Class* ExifTIFFTagSet$PixelXDimension::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$PixelXDimension, name, initialize, &_ExifTIFFTagSet$PixelXDimension_ClassInfo_, allocate$ExifTIFFTagSet$PixelXDimension);
	return class$;
}

$Class* ExifTIFFTagSet$PixelXDimension::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax