#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$OECF.h>

#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_UNDEFINED

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExifTIFFTagSet = ::javax::imageio::plugins::tiff::ExifTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifTIFFTagSet$OECF_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$OECF::*)()>(&ExifTIFFTagSet$OECF::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$OECF_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$OECF", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "OECF", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$OECF_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$OECF",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$OECF_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$OECF_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$OECF($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$OECF));
}

void ExifTIFFTagSet$OECF::init$() {
	$TIFFTag::init$("OECF"_s, 0x00008828, $sl(1, $TIFFTag::TIFF_UNDEFINED));
}

ExifTIFFTagSet$OECF::ExifTIFFTagSet$OECF() {
}

$Class* ExifTIFFTagSet$OECF::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$OECF, name, initialize, &_ExifTIFFTagSet$OECF_ClassInfo_, allocate$ExifTIFFTagSet$OECF);
	return class$;
}

$Class* ExifTIFFTagSet$OECF::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax