#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$WhiteBalance.h>

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

$MethodInfo _ExifTIFFTagSet$WhiteBalance_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$WhiteBalance::*)()>(&ExifTIFFTagSet$WhiteBalance::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$WhiteBalance_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$WhiteBalance", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "WhiteBalance", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$WhiteBalance_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$WhiteBalance",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$WhiteBalance_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$WhiteBalance_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$WhiteBalance($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$WhiteBalance));
}

void ExifTIFFTagSet$WhiteBalance::init$() {
	$TIFFTag::init$("WhiteBalance"_s, 0x0000A403, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(0, "Auto white balance"_s);
	addValueName(1, "Manual white balance"_s);
}

ExifTIFFTagSet$WhiteBalance::ExifTIFFTagSet$WhiteBalance() {
}

$Class* ExifTIFFTagSet$WhiteBalance::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$WhiteBalance, name, initialize, &_ExifTIFFTagSet$WhiteBalance_ClassInfo_, allocate$ExifTIFFTagSet$WhiteBalance);
	return class$;
}

$Class* ExifTIFFTagSet$WhiteBalance::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax