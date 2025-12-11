#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ExifVersion.h>

#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_UNDEFINED

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifTIFFTagSet$ExifVersion_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$ExifVersion::*)()>(&ExifTIFFTagSet$ExifVersion::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$ExifVersion_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ExifVersion", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ExifVersion", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$ExifVersion_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$ExifVersion",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$ExifVersion_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$ExifVersion_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$ExifVersion($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$ExifVersion));
}

void ExifTIFFTagSet$ExifVersion::init$() {
	$TIFFTag::init$("ExifVersion"_s, 0x00009000, $sl(1, $TIFFTag::TIFF_UNDEFINED), 4);
}

ExifTIFFTagSet$ExifVersion::ExifTIFFTagSet$ExifVersion() {
}

$Class* ExifTIFFTagSet$ExifVersion::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$ExifVersion, name, initialize, &_ExifTIFFTagSet$ExifVersion_ClassInfo_, allocate$ExifTIFFTagSet$ExifVersion);
	return class$;
}

$Class* ExifTIFFTagSet$ExifVersion::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax