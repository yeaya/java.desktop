#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$PixelYDimension.h>

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

$MethodInfo _ExifTIFFTagSet$PixelYDimension_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$PixelYDimension::*)()>(&ExifTIFFTagSet$PixelYDimension::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$PixelYDimension_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$PixelYDimension", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "PixelYDimension", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$PixelYDimension_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$PixelYDimension",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$PixelYDimension_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$PixelYDimension_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$PixelYDimension($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$PixelYDimension));
}

void ExifTIFFTagSet$PixelYDimension::init$() {
	$TIFFTag::init$("PixelYDimension"_s, 0x0000A003, ($sl(1, $TIFFTag::TIFF_SHORT)) | ($sl(1, $TIFFTag::TIFF_LONG)), 1);
}

ExifTIFFTagSet$PixelYDimension::ExifTIFFTagSet$PixelYDimension() {
}

$Class* ExifTIFFTagSet$PixelYDimension::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$PixelYDimension, name, initialize, &_ExifTIFFTagSet$PixelYDimension_ClassInfo_, allocate$ExifTIFFTagSet$PixelYDimension);
	return class$;
}

$Class* ExifTIFFTagSet$PixelYDimension::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax