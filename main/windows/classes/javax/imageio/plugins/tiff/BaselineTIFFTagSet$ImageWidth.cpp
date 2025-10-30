#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$ImageWidth.h>

#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_LONG
#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$ImageWidth_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$ImageWidth::*)()>(&BaselineTIFFTagSet$ImageWidth::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$ImageWidth_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ImageWidth", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "ImageWidth", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$ImageWidth_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ImageWidth",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$ImageWidth_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$ImageWidth_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$ImageWidth($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$ImageWidth));
}

void BaselineTIFFTagSet$ImageWidth::init$() {
	$TIFFTag::init$("ImageWidth"_s, 256, ($sl(1, $TIFFTag::TIFF_SHORT)) | ($sl(1, $TIFFTag::TIFF_LONG)), 1);
}

BaselineTIFFTagSet$ImageWidth::BaselineTIFFTagSet$ImageWidth() {
}

$Class* BaselineTIFFTagSet$ImageWidth::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$ImageWidth, name, initialize, &_BaselineTIFFTagSet$ImageWidth_ClassInfo_, allocate$BaselineTIFFTagSet$ImageWidth);
	return class$;
}

$Class* BaselineTIFFTagSet$ImageWidth::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax