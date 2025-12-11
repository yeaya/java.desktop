#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$BitsPerSample.h>

#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
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

$MethodInfo _BaselineTIFFTagSet$BitsPerSample_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$BitsPerSample::*)()>(&BaselineTIFFTagSet$BitsPerSample::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$BitsPerSample_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$BitsPerSample", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "BitsPerSample", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$BitsPerSample_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$BitsPerSample",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$BitsPerSample_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$BitsPerSample_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$BitsPerSample($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$BitsPerSample));
}

void BaselineTIFFTagSet$BitsPerSample::init$() {
	$TIFFTag::init$("BitsPerSample"_s, 258, $sl(1, $TIFFTag::TIFF_SHORT));
}

BaselineTIFFTagSet$BitsPerSample::BaselineTIFFTagSet$BitsPerSample() {
}

$Class* BaselineTIFFTagSet$BitsPerSample::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$BitsPerSample, name, initialize, &_BaselineTIFFTagSet$BitsPerSample_ClassInfo_, allocate$BaselineTIFFTagSet$BitsPerSample);
	return class$;
}

$Class* BaselineTIFFTagSet$BitsPerSample::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax