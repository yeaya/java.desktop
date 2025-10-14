#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ColorSpace.h>

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

$MethodInfo _ExifTIFFTagSet$ColorSpace_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$ColorSpace::*)()>(&ExifTIFFTagSet$ColorSpace::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$ColorSpace_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ColorSpace", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ColorSpace", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$ColorSpace_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$ColorSpace",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$ColorSpace_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$ColorSpace_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$ColorSpace($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$ColorSpace));
}

void ExifTIFFTagSet$ColorSpace::init$() {
	$TIFFTag::init$("ColorSpace"_s, 0x0000A001, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(1, "sRGB"_s);
	addValueName(0x0000FFFF, "Uncalibrated"_s);
}

ExifTIFFTagSet$ColorSpace::ExifTIFFTagSet$ColorSpace() {
}

$Class* ExifTIFFTagSet$ColorSpace::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$ColorSpace, name, initialize, &_ExifTIFFTagSet$ColorSpace_ClassInfo_, allocate$ExifTIFFTagSet$ColorSpace);
	return class$;
}

$Class* ExifTIFFTagSet$ColorSpace::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax