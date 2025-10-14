#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$InteroperabilityIFD.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/plugins/tiff/ExifInteroperabilityTagSet.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <javax/imageio/plugins/tiff/TIFFTagSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExifInteroperabilityTagSet = ::javax::imageio::plugins::tiff::ExifInteroperabilityTagSet;
using $ExifTIFFTagSet = ::javax::imageio::plugins::tiff::ExifTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;
using $TIFFTagSet = ::javax::imageio::plugins::tiff::TIFFTagSet;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifTIFFTagSet$InteroperabilityIFD_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$InteroperabilityIFD::*)()>(&ExifTIFFTagSet$InteroperabilityIFD::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$InteroperabilityIFD_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$InteroperabilityIFD", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "InteroperabilityIFD", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$InteroperabilityIFD_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$InteroperabilityIFD",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$InteroperabilityIFD_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$InteroperabilityIFD_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$InteroperabilityIFD($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$InteroperabilityIFD));
}

void ExifTIFFTagSet$InteroperabilityIFD::init$() {
	$TIFFTag::init$("InteroperabilityIFD"_s, 0x0000A005, $(static_cast<$TIFFTagSet*>($ExifInteroperabilityTagSet::getInstance())));
}

ExifTIFFTagSet$InteroperabilityIFD::ExifTIFFTagSet$InteroperabilityIFD() {
}

$Class* ExifTIFFTagSet$InteroperabilityIFD::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$InteroperabilityIFD, name, initialize, &_ExifTIFFTagSet$InteroperabilityIFD_ClassInfo_, allocate$ExifTIFFTagSet$InteroperabilityIFD);
	return class$;
}

$Class* ExifTIFFTagSet$InteroperabilityIFD::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax