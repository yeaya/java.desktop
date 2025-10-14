#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$UserComment.h>

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

$MethodInfo _ExifTIFFTagSet$UserComment_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$UserComment::*)()>(&ExifTIFFTagSet$UserComment::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$UserComment_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$UserComment", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "UserComment", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$UserComment_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$UserComment",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$UserComment_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$UserComment_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$UserComment($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$UserComment));
}

void ExifTIFFTagSet$UserComment::init$() {
	$TIFFTag::init$("UserComment"_s, 0x00009286, $sl(1, $TIFFTag::TIFF_UNDEFINED));
}

ExifTIFFTagSet$UserComment::ExifTIFFTagSet$UserComment() {
}

$Class* ExifTIFFTagSet$UserComment::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$UserComment, name, initialize, &_ExifTIFFTagSet$UserComment_ClassInfo_, allocate$ExifTIFFTagSet$UserComment);
	return class$;
}

$Class* ExifTIFFTagSet$UserComment::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax