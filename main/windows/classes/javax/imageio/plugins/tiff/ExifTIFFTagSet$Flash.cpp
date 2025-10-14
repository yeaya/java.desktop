#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$Flash.h>

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

$MethodInfo _ExifTIFFTagSet$Flash_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$Flash::*)()>(&ExifTIFFTagSet$Flash::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$Flash_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$Flash", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "Flash", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$Flash_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$Flash",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$Flash_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$Flash_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$Flash($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$Flash));
}

void ExifTIFFTagSet$Flash::init$() {
	$TIFFTag::init$("Flash"_s, 0x00009209, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(0, "Flash Did Not Fire"_s);
	addValueName(1, "Flash Fired"_s);
	addValueName(5, "Strobe Return Light Not Detected"_s);
	addValueName(7, "Strobe Return Light Detected"_s);
}

ExifTIFFTagSet$Flash::ExifTIFFTagSet$Flash() {
}

$Class* ExifTIFFTagSet$Flash::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$Flash, name, initialize, &_ExifTIFFTagSet$Flash_ClassInfo_, allocate$ExifTIFFTagSet$Flash);
	return class$;
}

$Class* ExifTIFFTagSet$Flash::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax