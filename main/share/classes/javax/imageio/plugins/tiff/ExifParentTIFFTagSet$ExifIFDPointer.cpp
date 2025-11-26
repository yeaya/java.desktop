#include <javax/imageio/plugins/tiff/ExifParentTIFFTagSet$ExifIFDPointer.h>

#include <javax/imageio/plugins/tiff/ExifParentTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <javax/imageio/plugins/tiff/TIFFTagSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExifParentTIFFTagSet = ::javax::imageio::plugins::tiff::ExifParentTIFFTagSet;
using $ExifTIFFTagSet = ::javax::imageio::plugins::tiff::ExifTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;
using $TIFFTagSet = ::javax::imageio::plugins::tiff::TIFFTagSet;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifParentTIFFTagSet$ExifIFDPointer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifParentTIFFTagSet$ExifIFDPointer::*)()>(&ExifParentTIFFTagSet$ExifIFDPointer::init$))},
	{}
};

$InnerClassInfo _ExifParentTIFFTagSet$ExifIFDPointer_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifParentTIFFTagSet$ExifIFDPointer", "javax.imageio.plugins.tiff.ExifParentTIFFTagSet", "ExifIFDPointer", $STATIC},
	{}
};

$ClassInfo _ExifParentTIFFTagSet$ExifIFDPointer_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifParentTIFFTagSet$ExifIFDPointer",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifParentTIFFTagSet$ExifIFDPointer_MethodInfo_,
	nullptr,
	nullptr,
	_ExifParentTIFFTagSet$ExifIFDPointer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifParentTIFFTagSet"
};

$Object* allocate$ExifParentTIFFTagSet$ExifIFDPointer($Class* clazz) {
	return $of($alloc(ExifParentTIFFTagSet$ExifIFDPointer));
}

void ExifParentTIFFTagSet$ExifIFDPointer::init$() {
	$TIFFTag::init$("ExifIFDPointer"_s, 0x00008769, $(static_cast<$TIFFTagSet*>($ExifTIFFTagSet::getInstance())));
}

ExifParentTIFFTagSet$ExifIFDPointer::ExifParentTIFFTagSet$ExifIFDPointer() {
}

$Class* ExifParentTIFFTagSet$ExifIFDPointer::load$($String* name, bool initialize) {
	$loadClass(ExifParentTIFFTagSet$ExifIFDPointer, name, initialize, &_ExifParentTIFFTagSet$ExifIFDPointer_ClassInfo_, allocate$ExifParentTIFFTagSet$ExifIFDPointer);
	return class$;
}

$Class* ExifParentTIFFTagSet$ExifIFDPointer::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax