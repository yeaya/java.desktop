#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$FNumber.h>

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

$MethodInfo _ExifTIFFTagSet$FNumber_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$FNumber::*)()>(&ExifTIFFTagSet$FNumber::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$FNumber_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$FNumber", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "FNumber", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$FNumber_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$FNumber",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$FNumber_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$FNumber_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$FNumber($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$FNumber));
}

void ExifTIFFTagSet$FNumber::init$() {
	$TIFFTag::init$("FNumber"_s, 0x0000829D, $sl(1, $TIFFTag::TIFF_RATIONAL), 1);
}

ExifTIFFTagSet$FNumber::ExifTIFFTagSet$FNumber() {
}

$Class* ExifTIFFTagSet$FNumber::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$FNumber, name, initialize, &_ExifTIFFTagSet$FNumber_ClassInfo_, allocate$ExifTIFFTagSet$FNumber);
	return class$;
}

$Class* ExifTIFFTagSet$FNumber::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax