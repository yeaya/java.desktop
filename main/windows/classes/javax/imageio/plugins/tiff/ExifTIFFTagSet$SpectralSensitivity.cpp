#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SpectralSensitivity.h>

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

$MethodInfo _ExifTIFFTagSet$SpectralSensitivity_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$SpectralSensitivity::*)()>(&ExifTIFFTagSet$SpectralSensitivity::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$SpectralSensitivity_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SpectralSensitivity", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SpectralSensitivity", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$SpectralSensitivity_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$SpectralSensitivity",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$SpectralSensitivity_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$SpectralSensitivity_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$SpectralSensitivity($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$SpectralSensitivity));
}

void ExifTIFFTagSet$SpectralSensitivity::init$() {
	$TIFFTag::init$("SpectralSensitivity"_s, 0x00008824, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifTIFFTagSet$SpectralSensitivity::ExifTIFFTagSet$SpectralSensitivity() {
}

$Class* ExifTIFFTagSet$SpectralSensitivity::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$SpectralSensitivity, name, initialize, &_ExifTIFFTagSet$SpectralSensitivity_ClassInfo_, allocate$ExifTIFFTagSet$SpectralSensitivity);
	return class$;
}

$Class* ExifTIFFTagSet$SpectralSensitivity::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax