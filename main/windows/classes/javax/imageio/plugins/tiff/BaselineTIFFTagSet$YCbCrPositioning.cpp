#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$YCbCrPositioning.h>

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

$MethodInfo _BaselineTIFFTagSet$YCbCrPositioning_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$YCbCrPositioning::*)()>(&BaselineTIFFTagSet$YCbCrPositioning::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$YCbCrPositioning_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$YCbCrPositioning", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "YCbCrPositioning", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$YCbCrPositioning_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$YCbCrPositioning",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$YCbCrPositioning_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$YCbCrPositioning_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$YCbCrPositioning($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$YCbCrPositioning));
}

void BaselineTIFFTagSet$YCbCrPositioning::init$() {
	$TIFFTag::init$("YCbCrPositioning"_s, 531, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(1, "Centered"_s);
	addValueName(2, "Cosited"_s);
}

BaselineTIFFTagSet$YCbCrPositioning::BaselineTIFFTagSet$YCbCrPositioning() {
}

$Class* BaselineTIFFTagSet$YCbCrPositioning::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$YCbCrPositioning, name, initialize, &_BaselineTIFFTagSet$YCbCrPositioning_ClassInfo_, allocate$BaselineTIFFTagSet$YCbCrPositioning);
	return class$;
}

$Class* BaselineTIFFTagSet$YCbCrPositioning::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax