#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$PrimaryChromaticities.h>

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

$MethodInfo _BaselineTIFFTagSet$PrimaryChromaticities_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$PrimaryChromaticities::*)()>(&BaselineTIFFTagSet$PrimaryChromaticities::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$PrimaryChromaticities_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$PrimaryChromaticities", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "PrimaryChromaticities", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$PrimaryChromaticities_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$PrimaryChromaticities",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$PrimaryChromaticities_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$PrimaryChromaticities_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$PrimaryChromaticities($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$PrimaryChromaticities));
}

void BaselineTIFFTagSet$PrimaryChromaticities::init$() {
	$TIFFTag::init$("PrimaryChromaticities"_s, 319, $sl(1, $TIFFTag::TIFF_RATIONAL), 6);
}

BaselineTIFFTagSet$PrimaryChromaticities::BaselineTIFFTagSet$PrimaryChromaticities() {
}

$Class* BaselineTIFFTagSet$PrimaryChromaticities::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$PrimaryChromaticities, name, initialize, &_BaselineTIFFTagSet$PrimaryChromaticities_ClassInfo_, allocate$BaselineTIFFTagSet$PrimaryChromaticities);
	return class$;
}

$Class* BaselineTIFFTagSet$PrimaryChromaticities::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax