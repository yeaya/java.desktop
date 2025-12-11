#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$FileSource.h>

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

$MethodInfo _ExifTIFFTagSet$FileSource_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$FileSource::*)()>(&ExifTIFFTagSet$FileSource::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$FileSource_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$FileSource", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "FileSource", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$FileSource_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$FileSource",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$FileSource_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$FileSource_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$FileSource($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$FileSource));
}

void ExifTIFFTagSet$FileSource::init$() {
	$TIFFTag::init$("FileSource"_s, 0x0000A300, $sl(1, $TIFFTag::TIFF_UNDEFINED), 1);
	addValueName(3, "DSC"_s);
}

ExifTIFFTagSet$FileSource::ExifTIFFTagSet$FileSource() {
}

$Class* ExifTIFFTagSet$FileSource::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$FileSource, name, initialize, &_ExifTIFFTagSet$FileSource_ClassInfo_, allocate$ExifTIFFTagSet$FileSource);
	return class$;
}

$Class* ExifTIFFTagSet$FileSource::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax