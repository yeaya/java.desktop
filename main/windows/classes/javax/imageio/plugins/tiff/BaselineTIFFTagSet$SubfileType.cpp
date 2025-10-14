#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$SubfileType.h>

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

$MethodInfo _BaselineTIFFTagSet$SubfileType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$SubfileType::*)()>(&BaselineTIFFTagSet$SubfileType::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$SubfileType_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$SubfileType", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "SubfileType", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$SubfileType_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$SubfileType",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$SubfileType_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$SubfileType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$SubfileType($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$SubfileType));
}

void BaselineTIFFTagSet$SubfileType::init$() {
	$TIFFTag::init$("SubfileType"_s, 255, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(1, "FullResolution"_s);
	addValueName(2, "ReducedResolution"_s);
	addValueName(3, "SinglePage"_s);
}

BaselineTIFFTagSet$SubfileType::BaselineTIFFTagSet$SubfileType() {
}

$Class* BaselineTIFFTagSet$SubfileType::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$SubfileType, name, initialize, &_BaselineTIFFTagSet$SubfileType_ClassInfo_, allocate$BaselineTIFFTagSet$SubfileType);
	return class$;
}

$Class* BaselineTIFFTagSet$SubfileType::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax