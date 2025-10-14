#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ImageUniqueID.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_ASCII

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExifTIFFTagSet = ::javax::imageio::plugins::tiff::ExifTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifTIFFTagSet$ImageUniqueID_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$ImageUniqueID::*)()>(&ExifTIFFTagSet$ImageUniqueID::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$ImageUniqueID_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ImageUniqueID", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ImageUniqueID", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$ImageUniqueID_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$ImageUniqueID",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$ImageUniqueID_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$ImageUniqueID_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$ImageUniqueID($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$ImageUniqueID));
}

void ExifTIFFTagSet$ImageUniqueID::init$() {
	$TIFFTag::init$("ImageUniqueID"_s, 0x0000A420, $sl(1, $TIFFTag::TIFF_ASCII), 33);
}

ExifTIFFTagSet$ImageUniqueID::ExifTIFFTagSet$ImageUniqueID() {
}

$Class* ExifTIFFTagSet$ImageUniqueID::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$ImageUniqueID, name, initialize, &_ExifTIFFTagSet$ImageUniqueID_ClassInfo_, allocate$ExifTIFFTagSet$ImageUniqueID);
	return class$;
}

$Class* ExifTIFFTagSet$ImageUniqueID::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax