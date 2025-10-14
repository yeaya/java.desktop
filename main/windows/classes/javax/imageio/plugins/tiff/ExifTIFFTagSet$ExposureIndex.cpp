#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ExposureIndex.h>

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

$MethodInfo _ExifTIFFTagSet$ExposureIndex_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$ExposureIndex::*)()>(&ExifTIFFTagSet$ExposureIndex::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$ExposureIndex_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ExposureIndex", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ExposureIndex", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$ExposureIndex_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$ExposureIndex",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$ExposureIndex_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$ExposureIndex_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$ExposureIndex($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$ExposureIndex));
}

void ExifTIFFTagSet$ExposureIndex::init$() {
	$TIFFTag::init$("ExposureIndex"_s, 0x0000A215, $sl(1, $TIFFTag::TIFF_RATIONAL), 1);
}

ExifTIFFTagSet$ExposureIndex::ExifTIFFTagSet$ExposureIndex() {
}

$Class* ExifTIFFTagSet$ExposureIndex::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$ExposureIndex, name, initialize, &_ExifTIFFTagSet$ExposureIndex_ClassInfo_, allocate$ExifTIFFTagSet$ExposureIndex);
	return class$;
}

$Class* ExifTIFFTagSet$ExposureIndex::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax