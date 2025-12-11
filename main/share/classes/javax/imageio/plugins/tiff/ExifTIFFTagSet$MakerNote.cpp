#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$MakerNote.h>

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

$MethodInfo _ExifTIFFTagSet$MakerNote_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$MakerNote::*)()>(&ExifTIFFTagSet$MakerNote::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$MakerNote_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$MakerNote", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "MakerNote", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$MakerNote_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$MakerNote",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$MakerNote_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$MakerNote_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$MakerNote($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$MakerNote));
}

void ExifTIFFTagSet$MakerNote::init$() {
	$TIFFTag::init$("MakerNote"_s, 0x0000927C, $sl(1, $TIFFTag::TIFF_UNDEFINED));
}

ExifTIFFTagSet$MakerNote::ExifTIFFTagSet$MakerNote() {
}

$Class* ExifTIFFTagSet$MakerNote::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$MakerNote, name, initialize, &_ExifTIFFTagSet$MakerNote_ClassInfo_, allocate$ExifTIFFTagSet$MakerNote);
	return class$;
}

$Class* ExifTIFFTagSet$MakerNote::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax