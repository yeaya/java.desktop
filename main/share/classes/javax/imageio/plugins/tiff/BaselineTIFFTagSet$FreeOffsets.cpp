#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$FreeOffsets.h>

#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_LONG

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$FreeOffsets_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$FreeOffsets::*)()>(&BaselineTIFFTagSet$FreeOffsets::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$FreeOffsets_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$FreeOffsets", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "FreeOffsets", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$FreeOffsets_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$FreeOffsets",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$FreeOffsets_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$FreeOffsets_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$FreeOffsets($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$FreeOffsets));
}

void BaselineTIFFTagSet$FreeOffsets::init$() {
	$TIFFTag::init$("FreeOffsets"_s, 288, $sl(1, $TIFFTag::TIFF_LONG));
}

BaselineTIFFTagSet$FreeOffsets::BaselineTIFFTagSet$FreeOffsets() {
}

$Class* BaselineTIFFTagSet$FreeOffsets::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$FreeOffsets, name, initialize, &_BaselineTIFFTagSet$FreeOffsets_ClassInfo_, allocate$BaselineTIFFTagSet$FreeOffsets);
	return class$;
}

$Class* BaselineTIFFTagSet$FreeOffsets::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax