#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$CompressedBitsPerPixel.h>

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

$MethodInfo _ExifTIFFTagSet$CompressedBitsPerPixel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$CompressedBitsPerPixel::*)()>(&ExifTIFFTagSet$CompressedBitsPerPixel::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$CompressedBitsPerPixel_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$CompressedBitsPerPixel", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "CompressedBitsPerPixel", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$CompressedBitsPerPixel_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$CompressedBitsPerPixel",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$CompressedBitsPerPixel_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$CompressedBitsPerPixel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$CompressedBitsPerPixel($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$CompressedBitsPerPixel));
}

void ExifTIFFTagSet$CompressedBitsPerPixel::init$() {
	$TIFFTag::init$("CompressedBitsPerPixel"_s, 0x00009102, $sl(1, $TIFFTag::TIFF_RATIONAL), 1);
}

ExifTIFFTagSet$CompressedBitsPerPixel::ExifTIFFTagSet$CompressedBitsPerPixel() {
}

$Class* ExifTIFFTagSet$CompressedBitsPerPixel::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$CompressedBitsPerPixel, name, initialize, &_ExifTIFFTagSet$CompressedBitsPerPixel_ClassInfo_, allocate$ExifTIFFTagSet$CompressedBitsPerPixel);
	return class$;
}

$Class* ExifTIFFTagSet$CompressedBitsPerPixel::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax