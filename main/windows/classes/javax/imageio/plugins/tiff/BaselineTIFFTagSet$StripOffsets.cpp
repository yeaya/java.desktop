#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$StripOffsets.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _BaselineTIFFTagSet$StripOffsets_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$StripOffsets::*)()>(&BaselineTIFFTagSet$StripOffsets::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$StripOffsets_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$StripOffsets", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "StripOffsets", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$StripOffsets_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$StripOffsets",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$StripOffsets_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$StripOffsets_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$StripOffsets($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$StripOffsets));
}

void BaselineTIFFTagSet$StripOffsets::init$() {
	$TIFFTag::init$("StripOffsets"_s, 273, ($sl(1, $TIFFTag::TIFF_SHORT)) | ($sl(1, $TIFFTag::TIFF_LONG)));
}

BaselineTIFFTagSet$StripOffsets::BaselineTIFFTagSet$StripOffsets() {
}

$Class* BaselineTIFFTagSet$StripOffsets::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$StripOffsets, name, initialize, &_BaselineTIFFTagSet$StripOffsets_ClassInfo_, allocate$BaselineTIFFTagSet$StripOffsets);
	return class$;
}

$Class* BaselineTIFFTagSet$StripOffsets::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax