#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGPointTransforms.h>

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

$MethodInfo _BaselineTIFFTagSet$JPEGPointTransforms_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$JPEGPointTransforms::*)()>(&BaselineTIFFTagSet$JPEGPointTransforms::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$JPEGPointTransforms_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGPointTransforms", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGPointTransforms", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$JPEGPointTransforms_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGPointTransforms",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$JPEGPointTransforms_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$JPEGPointTransforms_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$JPEGPointTransforms($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$JPEGPointTransforms));
}

void BaselineTIFFTagSet$JPEGPointTransforms::init$() {
	$TIFFTag::init$("JPEGPointTransforms"_s, 518, $sl(1, $TIFFTag::TIFF_SHORT));
}

BaselineTIFFTagSet$JPEGPointTransforms::BaselineTIFFTagSet$JPEGPointTransforms() {
}

$Class* BaselineTIFFTagSet$JPEGPointTransforms::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$JPEGPointTransforms, name, initialize, &_BaselineTIFFTagSet$JPEGPointTransforms_ClassInfo_, allocate$BaselineTIFFTagSet$JPEGPointTransforms);
	return class$;
}

$Class* BaselineTIFFTagSet$JPEGPointTransforms::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax