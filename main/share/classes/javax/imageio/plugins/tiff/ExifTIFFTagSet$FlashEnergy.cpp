#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$FlashEnergy.h>

#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_RATIONAL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifTIFFTagSet$FlashEnergy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$FlashEnergy::*)()>(&ExifTIFFTagSet$FlashEnergy::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$FlashEnergy_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$FlashEnergy", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "FlashEnergy", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$FlashEnergy_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$FlashEnergy",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$FlashEnergy_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$FlashEnergy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$FlashEnergy($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$FlashEnergy));
}

void ExifTIFFTagSet$FlashEnergy::init$() {
	$TIFFTag::init$("FlashEnergy"_s, 0x0000A20B, $sl(1, $TIFFTag::TIFF_RATIONAL), 1);
}

ExifTIFFTagSet$FlashEnergy::ExifTIFFTagSet$FlashEnergy() {
}

$Class* ExifTIFFTagSet$FlashEnergy::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$FlashEnergy, name, initialize, &_ExifTIFFTagSet$FlashEnergy_ClassInfo_, allocate$ExifTIFFTagSet$FlashEnergy);
	return class$;
}

$Class* ExifTIFFTagSet$FlashEnergy::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax