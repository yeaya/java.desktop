#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$FocalLength.h>

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

$MethodInfo _ExifTIFFTagSet$FocalLength_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$FocalLength::*)()>(&ExifTIFFTagSet$FocalLength::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$FocalLength_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalLength", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "FocalLength", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$FocalLength_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalLength",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$FocalLength_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$FocalLength_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$FocalLength($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$FocalLength));
}

void ExifTIFFTagSet$FocalLength::init$() {
	$TIFFTag::init$("FocalLength"_s, 0x0000920A, $sl(1, $TIFFTag::TIFF_RATIONAL), 1);
}

ExifTIFFTagSet$FocalLength::ExifTIFFTagSet$FocalLength() {
}

$Class* ExifTIFFTagSet$FocalLength::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$FocalLength, name, initialize, &_ExifTIFFTagSet$FocalLength_ClassInfo_, allocate$ExifTIFFTagSet$FocalLength);
	return class$;
}

$Class* ExifTIFFTagSet$FocalLength::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax