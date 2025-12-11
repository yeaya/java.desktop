#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$StripByteCounts.h>

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

$MethodInfo _BaselineTIFFTagSet$StripByteCounts_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$StripByteCounts::*)()>(&BaselineTIFFTagSet$StripByteCounts::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$StripByteCounts_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$StripByteCounts", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "StripByteCounts", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$StripByteCounts_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$StripByteCounts",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$StripByteCounts_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$StripByteCounts_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$StripByteCounts($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$StripByteCounts));
}

void BaselineTIFFTagSet$StripByteCounts::init$() {
	$TIFFTag::init$("StripByteCounts"_s, 279, ($sl(1, $TIFFTag::TIFF_SHORT)) | ($sl(1, $TIFFTag::TIFF_LONG)));
}

BaselineTIFFTagSet$StripByteCounts::BaselineTIFFTagSet$StripByteCounts() {
}

$Class* BaselineTIFFTagSet$StripByteCounts::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$StripByteCounts, name, initialize, &_BaselineTIFFTagSet$StripByteCounts_ClassInfo_, allocate$BaselineTIFFTagSet$StripByteCounts);
	return class$;
}

$Class* BaselineTIFFTagSet$StripByteCounts::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax