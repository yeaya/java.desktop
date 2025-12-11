#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$ColorMap.h>

#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$ColorMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$ColorMap::*)()>(&BaselineTIFFTagSet$ColorMap::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$ColorMap_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ColorMap", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "ColorMap", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$ColorMap_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ColorMap",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$ColorMap_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$ColorMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$ColorMap($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$ColorMap));
}

void BaselineTIFFTagSet$ColorMap::init$() {
	$TIFFTag::init$("ColorMap"_s, 320, $sl(1, $TIFFTag::TIFF_SHORT));
}

BaselineTIFFTagSet$ColorMap::BaselineTIFFTagSet$ColorMap() {
}

$Class* BaselineTIFFTagSet$ColorMap::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$ColorMap, name, initialize, &_BaselineTIFFTagSet$ColorMap_ClassInfo_, allocate$BaselineTIFFTagSet$ColorMap);
	return class$;
}

$Class* BaselineTIFFTagSet$ColorMap::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax