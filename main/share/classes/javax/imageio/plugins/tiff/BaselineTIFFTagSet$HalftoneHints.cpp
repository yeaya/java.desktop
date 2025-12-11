#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$HalftoneHints.h>

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

$MethodInfo _BaselineTIFFTagSet$HalftoneHints_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$HalftoneHints::*)()>(&BaselineTIFFTagSet$HalftoneHints::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$HalftoneHints_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$HalftoneHints", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "HalftoneHints", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$HalftoneHints_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$HalftoneHints",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$HalftoneHints_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$HalftoneHints_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$HalftoneHints($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$HalftoneHints));
}

void BaselineTIFFTagSet$HalftoneHints::init$() {
	$TIFFTag::init$("HalftoneHints"_s, 321, $sl(1, $TIFFTag::TIFF_SHORT), 2);
}

BaselineTIFFTagSet$HalftoneHints::BaselineTIFFTagSet$HalftoneHints() {
}

$Class* BaselineTIFFTagSet$HalftoneHints::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$HalftoneHints, name, initialize, &_BaselineTIFFTagSet$HalftoneHints_ClassInfo_, allocate$BaselineTIFFTagSet$HalftoneHints);
	return class$;
}

$Class* BaselineTIFFTagSet$HalftoneHints::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax