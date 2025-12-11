#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$RelatedSoundFile.h>

#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_ASCII

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifTIFFTagSet$RelatedSoundFile_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$RelatedSoundFile::*)()>(&ExifTIFFTagSet$RelatedSoundFile::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$RelatedSoundFile_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$RelatedSoundFile", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "RelatedSoundFile", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$RelatedSoundFile_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$RelatedSoundFile",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$RelatedSoundFile_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$RelatedSoundFile_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$RelatedSoundFile($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$RelatedSoundFile));
}

void ExifTIFFTagSet$RelatedSoundFile::init$() {
	$TIFFTag::init$("RelatedSoundFile"_s, 0x0000A004, $sl(1, $TIFFTag::TIFF_ASCII), 13);
}

ExifTIFFTagSet$RelatedSoundFile::ExifTIFFTagSet$RelatedSoundFile() {
}

$Class* ExifTIFFTagSet$RelatedSoundFile::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$RelatedSoundFile, name, initialize, &_ExifTIFFTagSet$RelatedSoundFile_ClassInfo_, allocate$ExifTIFFTagSet$RelatedSoundFile);
	return class$;
}

$Class* ExifTIFFTagSet$RelatedSoundFile::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax