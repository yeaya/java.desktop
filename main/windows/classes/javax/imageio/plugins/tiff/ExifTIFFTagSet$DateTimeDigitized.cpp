#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$DateTimeDigitized.h>

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

$MethodInfo _ExifTIFFTagSet$DateTimeDigitized_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$DateTimeDigitized::*)()>(&ExifTIFFTagSet$DateTimeDigitized::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$DateTimeDigitized_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$DateTimeDigitized", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "DateTimeDigitized", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$DateTimeDigitized_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$DateTimeDigitized",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$DateTimeDigitized_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$DateTimeDigitized_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$DateTimeDigitized($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$DateTimeDigitized));
}

void ExifTIFFTagSet$DateTimeDigitized::init$() {
	$TIFFTag::init$("DateTimeDigitized"_s, 0x00009004, $sl(1, $TIFFTag::TIFF_ASCII), 20);
}

ExifTIFFTagSet$DateTimeDigitized::ExifTIFFTagSet$DateTimeDigitized() {
}

$Class* ExifTIFFTagSet$DateTimeDigitized::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$DateTimeDigitized, name, initialize, &_ExifTIFFTagSet$DateTimeDigitized_ClassInfo_, allocate$ExifTIFFTagSet$DateTimeDigitized);
	return class$;
}

$Class* ExifTIFFTagSet$DateTimeDigitized::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax