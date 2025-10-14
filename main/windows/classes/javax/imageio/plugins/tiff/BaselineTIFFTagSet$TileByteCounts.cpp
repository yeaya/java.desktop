#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$TileByteCounts.h>

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

$MethodInfo _BaselineTIFFTagSet$TileByteCounts_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$TileByteCounts::*)()>(&BaselineTIFFTagSet$TileByteCounts::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$TileByteCounts_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TileByteCounts", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "TileByteCounts", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$TileByteCounts_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TileByteCounts",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$TileByteCounts_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$TileByteCounts_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$TileByteCounts($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$TileByteCounts));
}

void BaselineTIFFTagSet$TileByteCounts::init$() {
	$TIFFTag::init$("TileByteCounts"_s, 325, ($sl(1, $TIFFTag::TIFF_SHORT)) | ($sl(1, $TIFFTag::TIFF_LONG)));
}

BaselineTIFFTagSet$TileByteCounts::BaselineTIFFTagSet$TileByteCounts() {
}

$Class* BaselineTIFFTagSet$TileByteCounts::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$TileByteCounts, name, initialize, &_BaselineTIFFTagSet$TileByteCounts_ClassInfo_, allocate$BaselineTIFFTagSet$TileByteCounts);
	return class$;
}

$Class* BaselineTIFFTagSet$TileByteCounts::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax