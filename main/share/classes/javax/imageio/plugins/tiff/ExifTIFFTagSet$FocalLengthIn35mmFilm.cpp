#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$FocalLengthIn35mmFilm.h>

#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifTIFFTagSet$FocalLengthIn35mmFilm_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$FocalLengthIn35mmFilm::*)()>(&ExifTIFFTagSet$FocalLengthIn35mmFilm::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$FocalLengthIn35mmFilm_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalLengthIn35mmFilm", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "FocalLengthIn35mmFilm", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$FocalLengthIn35mmFilm_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalLengthIn35mmFilm",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$FocalLengthIn35mmFilm_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$FocalLengthIn35mmFilm_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$FocalLengthIn35mmFilm($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$FocalLengthIn35mmFilm));
}

void ExifTIFFTagSet$FocalLengthIn35mmFilm::init$() {
	$TIFFTag::init$("FocalLengthIn35mmFilm"_s, 0x0000A405, $sl(1, $TIFFTag::TIFF_SHORT), 1);
}

ExifTIFFTagSet$FocalLengthIn35mmFilm::ExifTIFFTagSet$FocalLengthIn35mmFilm() {
}

$Class* ExifTIFFTagSet$FocalLengthIn35mmFilm::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$FocalLengthIn35mmFilm, name, initialize, &_ExifTIFFTagSet$FocalLengthIn35mmFilm_ClassInfo_, allocate$ExifTIFFTagSet$FocalLengthIn35mmFilm);
	return class$;
}

$Class* ExifTIFFTagSet$FocalLengthIn35mmFilm::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax