#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$ImageDescription.h>

#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_ASCII

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$ImageDescription_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$ImageDescription::*)()>(&BaselineTIFFTagSet$ImageDescription::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$ImageDescription_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ImageDescription", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "ImageDescription", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$ImageDescription_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ImageDescription",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$ImageDescription_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$ImageDescription_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$ImageDescription($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$ImageDescription));
}

void BaselineTIFFTagSet$ImageDescription::init$() {
	$TIFFTag::init$("ImageDescription"_s, 270, $sl(1, $TIFFTag::TIFF_ASCII));
}

BaselineTIFFTagSet$ImageDescription::BaselineTIFFTagSet$ImageDescription() {
}

$Class* BaselineTIFFTagSet$ImageDescription::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$ImageDescription, name, initialize, &_BaselineTIFFTagSet$ImageDescription_ClassInfo_, allocate$BaselineTIFFTagSet$ImageDescription);
	return class$;
}

$Class* BaselineTIFFTagSet$ImageDescription::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax