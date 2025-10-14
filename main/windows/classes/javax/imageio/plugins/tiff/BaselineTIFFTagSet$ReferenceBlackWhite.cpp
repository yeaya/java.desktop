#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$ReferenceBlackWhite.h>

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

#undef TIFF_RATIONAL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$ReferenceBlackWhite_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$ReferenceBlackWhite::*)()>(&BaselineTIFFTagSet$ReferenceBlackWhite::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$ReferenceBlackWhite_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ReferenceBlackWhite", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "ReferenceBlackWhite", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$ReferenceBlackWhite_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ReferenceBlackWhite",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$ReferenceBlackWhite_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$ReferenceBlackWhite_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$ReferenceBlackWhite($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$ReferenceBlackWhite));
}

void BaselineTIFFTagSet$ReferenceBlackWhite::init$() {
	$TIFFTag::init$("ReferenceBlackWhite"_s, 532, $sl(1, $TIFFTag::TIFF_RATIONAL));
}

BaselineTIFFTagSet$ReferenceBlackWhite::BaselineTIFFTagSet$ReferenceBlackWhite() {
}

$Class* BaselineTIFFTagSet$ReferenceBlackWhite::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$ReferenceBlackWhite, name, initialize, &_BaselineTIFFTagSet$ReferenceBlackWhite_ClassInfo_, allocate$BaselineTIFFTagSet$ReferenceBlackWhite);
	return class$;
}

$Class* BaselineTIFFTagSet$ReferenceBlackWhite::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax