#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$FreeByteCounts.h>

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

$MethodInfo _BaselineTIFFTagSet$FreeByteCounts_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$FreeByteCounts::*)()>(&BaselineTIFFTagSet$FreeByteCounts::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$FreeByteCounts_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$FreeByteCounts", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "FreeByteCounts", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$FreeByteCounts_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$FreeByteCounts",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$FreeByteCounts_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$FreeByteCounts_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$FreeByteCounts($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$FreeByteCounts));
}

void BaselineTIFFTagSet$FreeByteCounts::init$() {
	$TIFFTag::init$("FreeByteCounts"_s, 289, $sl(1, $TIFFTag::TIFF_LONG));
}

BaselineTIFFTagSet$FreeByteCounts::BaselineTIFFTagSet$FreeByteCounts() {
}

$Class* BaselineTIFFTagSet$FreeByteCounts::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$FreeByteCounts, name, initialize, &_BaselineTIFFTagSet$FreeByteCounts_ClassInfo_, allocate$BaselineTIFFTagSet$FreeByteCounts);
	return class$;
}

$Class* BaselineTIFFTagSet$FreeByteCounts::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax