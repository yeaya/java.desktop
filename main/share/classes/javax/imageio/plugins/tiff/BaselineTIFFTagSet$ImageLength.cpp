#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$ImageLength.h>

#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_LONG
#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$ImageLength_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$ImageLength::*)()>(&BaselineTIFFTagSet$ImageLength::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$ImageLength_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ImageLength", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "ImageLength", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$ImageLength_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ImageLength",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$ImageLength_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$ImageLength_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$ImageLength($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$ImageLength));
}

void BaselineTIFFTagSet$ImageLength::init$() {
	$TIFFTag::init$("ImageLength"_s, 257, ($sl(1, $TIFFTag::TIFF_SHORT)) | ($sl(1, $TIFFTag::TIFF_LONG)), 1);
}

BaselineTIFFTagSet$ImageLength::BaselineTIFFTagSet$ImageLength() {
}

$Class* BaselineTIFFTagSet$ImageLength::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$ImageLength, name, initialize, &_BaselineTIFFTagSet$ImageLength_ClassInfo_, allocate$BaselineTIFFTagSet$ImageLength);
	return class$;
}

$Class* BaselineTIFFTagSet$ImageLength::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax