#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$NewSubfileType.h>

#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_LONG

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$NewSubfileType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$NewSubfileType::*)()>(&BaselineTIFFTagSet$NewSubfileType::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$NewSubfileType_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$NewSubfileType", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "NewSubfileType", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$NewSubfileType_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$NewSubfileType",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$NewSubfileType_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$NewSubfileType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$NewSubfileType($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$NewSubfileType));
}

void BaselineTIFFTagSet$NewSubfileType::init$() {
	$TIFFTag::init$("NewSubfileType"_s, 254, $sl(1, $TIFFTag::TIFF_LONG), 1);
	addValueName(0, "Default"_s);
	addValueName(1, "ReducedResolution"_s);
	addValueName(2, "SinglePage"_s);
	addValueName(2 | 1, "SinglePage+ReducedResolution"_s);
	addValueName(4, "Transparency"_s);
	addValueName(4 | 1, "Transparency+ReducedResolution"_s);
	addValueName(4 | 2, "Transparency+SinglePage"_s);
	addValueName((4 | 2) | 1, "Transparency+SinglePage+ReducedResolution"_s);
}

BaselineTIFFTagSet$NewSubfileType::BaselineTIFFTagSet$NewSubfileType() {
}

$Class* BaselineTIFFTagSet$NewSubfileType::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$NewSubfileType, name, initialize, &_BaselineTIFFTagSet$NewSubfileType_ClassInfo_, allocate$BaselineTIFFTagSet$NewSubfileType);
	return class$;
}

$Class* BaselineTIFFTagSet$NewSubfileType::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax