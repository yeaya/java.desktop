#include <javax/imageio/plugins/tiff/ExifInteroperabilityTagSet$InteroperabilityIndex.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/plugins/tiff/ExifInteroperabilityTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_ASCII

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExifInteroperabilityTagSet = ::javax::imageio::plugins::tiff::ExifInteroperabilityTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifInteroperabilityTagSet$InteroperabilityIndex_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifInteroperabilityTagSet$InteroperabilityIndex::*)()>(&ExifInteroperabilityTagSet$InteroperabilityIndex::init$))},
	{}
};

$InnerClassInfo _ExifInteroperabilityTagSet$InteroperabilityIndex_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifInteroperabilityTagSet$InteroperabilityIndex", "javax.imageio.plugins.tiff.ExifInteroperabilityTagSet", "InteroperabilityIndex", $STATIC},
	{}
};

$ClassInfo _ExifInteroperabilityTagSet$InteroperabilityIndex_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifInteroperabilityTagSet$InteroperabilityIndex",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifInteroperabilityTagSet$InteroperabilityIndex_MethodInfo_,
	nullptr,
	nullptr,
	_ExifInteroperabilityTagSet$InteroperabilityIndex_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifInteroperabilityTagSet"
};

$Object* allocate$ExifInteroperabilityTagSet$InteroperabilityIndex($Class* clazz) {
	return $of($alloc(ExifInteroperabilityTagSet$InteroperabilityIndex));
}

void ExifInteroperabilityTagSet$InteroperabilityIndex::init$() {
	$TIFFTag::init$("InteroperabilityIndex"_s, 1, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifInteroperabilityTagSet$InteroperabilityIndex::ExifInteroperabilityTagSet$InteroperabilityIndex() {
}

$Class* ExifInteroperabilityTagSet$InteroperabilityIndex::load$($String* name, bool initialize) {
	$loadClass(ExifInteroperabilityTagSet$InteroperabilityIndex, name, initialize, &_ExifInteroperabilityTagSet$InteroperabilityIndex_ClassInfo_, allocate$ExifInteroperabilityTagSet$InteroperabilityIndex);
	return class$;
}

$Class* ExifInteroperabilityTagSet$InteroperabilityIndex::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax