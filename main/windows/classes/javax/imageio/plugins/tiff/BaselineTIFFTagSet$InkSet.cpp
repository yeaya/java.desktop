#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$InkSet.h>

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

$MethodInfo _BaselineTIFFTagSet$InkSet_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$InkSet::*)()>(&BaselineTIFFTagSet$InkSet::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$InkSet_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$InkSet", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "InkSet", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$InkSet_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$InkSet",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$InkSet_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$InkSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$InkSet($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$InkSet));
}

void BaselineTIFFTagSet$InkSet::init$() {
	$TIFFTag::init$("InkSet"_s, 332, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(1, "CMYK"_s);
	addValueName(2, "Not CMYK"_s);
}

BaselineTIFFTagSet$InkSet::BaselineTIFFTagSet$InkSet() {
}

$Class* BaselineTIFFTagSet$InkSet::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$InkSet, name, initialize, &_BaselineTIFFTagSet$InkSet_ClassInfo_, allocate$BaselineTIFFTagSet$InkSet);
	return class$;
}

$Class* BaselineTIFFTagSet$InkSet::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax