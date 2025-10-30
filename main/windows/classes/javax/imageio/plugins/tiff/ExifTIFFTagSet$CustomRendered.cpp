#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$CustomRendered.h>

#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExifTIFFTagSet = ::javax::imageio::plugins::tiff::ExifTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifTIFFTagSet$CustomRendered_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$CustomRendered::*)()>(&ExifTIFFTagSet$CustomRendered::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$CustomRendered_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$CustomRendered", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "CustomRendered", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$CustomRendered_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$CustomRendered",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$CustomRendered_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$CustomRendered_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$CustomRendered($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$CustomRendered));
}

void ExifTIFFTagSet$CustomRendered::init$() {
	$TIFFTag::init$("CustomRendered"_s, 0x0000A401, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(0, "Normal process"_s);
	addValueName(1, "Custom process"_s);
}

ExifTIFFTagSet$CustomRendered::ExifTIFFTagSet$CustomRendered() {
}

$Class* ExifTIFFTagSet$CustomRendered::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$CustomRendered, name, initialize, &_ExifTIFFTagSet$CustomRendered_ClassInfo_, allocate$ExifTIFFTagSet$CustomRendered);
	return class$;
}

$Class* ExifTIFFTagSet$CustomRendered::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax