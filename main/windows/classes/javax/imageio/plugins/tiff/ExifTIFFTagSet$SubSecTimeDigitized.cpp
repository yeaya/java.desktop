#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SubSecTimeDigitized.h>

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

#undef TIFF_ASCII

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExifTIFFTagSet = ::javax::imageio::plugins::tiff::ExifTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifTIFFTagSet$SubSecTimeDigitized_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$SubSecTimeDigitized::*)()>(&ExifTIFFTagSet$SubSecTimeDigitized::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$SubSecTimeDigitized_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubSecTimeDigitized", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SubSecTimeDigitized", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$SubSecTimeDigitized_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubSecTimeDigitized",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$SubSecTimeDigitized_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$SubSecTimeDigitized_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$SubSecTimeDigitized($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$SubSecTimeDigitized));
}

void ExifTIFFTagSet$SubSecTimeDigitized::init$() {
	$TIFFTag::init$("SubSecTimeDigitized"_s, 0x00009292, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifTIFFTagSet$SubSecTimeDigitized::ExifTIFFTagSet$SubSecTimeDigitized() {
}

$Class* ExifTIFFTagSet$SubSecTimeDigitized::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$SubSecTimeDigitized, name, initialize, &_ExifTIFFTagSet$SubSecTimeDigitized_ClassInfo_, allocate$ExifTIFFTagSet$SubSecTimeDigitized);
	return class$;
}

$Class* ExifTIFFTagSet$SubSecTimeDigitized::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax