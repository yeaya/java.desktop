#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$CFAPattern.h>

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

$MethodInfo _ExifTIFFTagSet$CFAPattern_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$CFAPattern::*)()>(&ExifTIFFTagSet$CFAPattern::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$CFAPattern_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$CFAPattern", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "CFAPattern", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$CFAPattern_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$CFAPattern",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$CFAPattern_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$CFAPattern_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$CFAPattern($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$CFAPattern));
}

void ExifTIFFTagSet$CFAPattern::init$() {
	$TIFFTag::init$("CFAPattern"_s, 0x0000A302, $sl(1, $TIFFTag::TIFF_UNDEFINED));
}

ExifTIFFTagSet$CFAPattern::ExifTIFFTagSet$CFAPattern() {
}

$Class* ExifTIFFTagSet$CFAPattern::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$CFAPattern, name, initialize, &_ExifTIFFTagSet$CFAPattern_ClassInfo_, allocate$ExifTIFFTagSet$CFAPattern);
	return class$;
}

$Class* ExifTIFFTagSet$CFAPattern::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax