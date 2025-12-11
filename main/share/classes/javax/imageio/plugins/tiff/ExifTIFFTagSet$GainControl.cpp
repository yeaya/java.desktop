#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$GainControl.h>

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

$MethodInfo _ExifTIFFTagSet$GainControl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$GainControl::*)()>(&ExifTIFFTagSet$GainControl::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$GainControl_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$GainControl", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "GainControl", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$GainControl_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$GainControl",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$GainControl_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$GainControl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$GainControl($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$GainControl));
}

void ExifTIFFTagSet$GainControl::init$() {
	$TIFFTag::init$("GainControl"_s, 0x0000A407, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(0, "None"_s);
	addValueName(1, "Low gain up"_s);
	addValueName(2, "High gain up"_s);
	addValueName(3, "Low gain down"_s);
	addValueName(4, "High gain down"_s);
}

ExifTIFFTagSet$GainControl::ExifTIFFTagSet$GainControl() {
}

$Class* ExifTIFFTagSet$GainControl::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$GainControl, name, initialize, &_ExifTIFFTagSet$GainControl_ClassInfo_, allocate$ExifTIFFTagSet$GainControl);
	return class$;
}

$Class* ExifTIFFTagSet$GainControl::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax