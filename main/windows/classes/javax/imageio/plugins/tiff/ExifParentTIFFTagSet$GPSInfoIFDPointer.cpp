#include <javax/imageio/plugins/tiff/ExifParentTIFFTagSet$GPSInfoIFDPointer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet.h>
#include <javax/imageio/plugins/tiff/ExifParentTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <javax/imageio/plugins/tiff/TIFFTagSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExifGPSTagSet = ::javax::imageio::plugins::tiff::ExifGPSTagSet;
using $ExifParentTIFFTagSet = ::javax::imageio::plugins::tiff::ExifParentTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;
using $TIFFTagSet = ::javax::imageio::plugins::tiff::TIFFTagSet;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifParentTIFFTagSet$GPSInfoIFDPointer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifParentTIFFTagSet$GPSInfoIFDPointer::*)()>(&ExifParentTIFFTagSet$GPSInfoIFDPointer::init$))},
	{}
};

$InnerClassInfo _ExifParentTIFFTagSet$GPSInfoIFDPointer_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifParentTIFFTagSet$GPSInfoIFDPointer", "javax.imageio.plugins.tiff.ExifParentTIFFTagSet", "GPSInfoIFDPointer", $STATIC},
	{}
};

$ClassInfo _ExifParentTIFFTagSet$GPSInfoIFDPointer_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifParentTIFFTagSet$GPSInfoIFDPointer",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifParentTIFFTagSet$GPSInfoIFDPointer_MethodInfo_,
	nullptr,
	nullptr,
	_ExifParentTIFFTagSet$GPSInfoIFDPointer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifParentTIFFTagSet"
};

$Object* allocate$ExifParentTIFFTagSet$GPSInfoIFDPointer($Class* clazz) {
	return $of($alloc(ExifParentTIFFTagSet$GPSInfoIFDPointer));
}

void ExifParentTIFFTagSet$GPSInfoIFDPointer::init$() {
	$TIFFTag::init$("GPSInfoIFDPointer"_s, 0x00008825, $(static_cast<$TIFFTagSet*>($ExifGPSTagSet::getInstance())));
}

ExifParentTIFFTagSet$GPSInfoIFDPointer::ExifParentTIFFTagSet$GPSInfoIFDPointer() {
}

$Class* ExifParentTIFFTagSet$GPSInfoIFDPointer::load$($String* name, bool initialize) {
	$loadClass(ExifParentTIFFTagSet$GPSInfoIFDPointer, name, initialize, &_ExifParentTIFFTagSet$GPSInfoIFDPointer_ClassInfo_, allocate$ExifParentTIFFTagSet$GPSInfoIFDPointer);
	return class$;
}

$Class* ExifParentTIFFTagSet$GPSInfoIFDPointer::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax