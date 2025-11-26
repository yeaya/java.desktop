#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$TransferFunction.h>

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

$MethodInfo _BaselineTIFFTagSet$TransferFunction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$TransferFunction::*)()>(&BaselineTIFFTagSet$TransferFunction::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$TransferFunction_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TransferFunction", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "TransferFunction", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$TransferFunction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TransferFunction",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$TransferFunction_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$TransferFunction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$TransferFunction($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$TransferFunction));
}

void BaselineTIFFTagSet$TransferFunction::init$() {
	$TIFFTag::init$("TransferFunction"_s, 301, $sl(1, $TIFFTag::TIFF_SHORT));
}

BaselineTIFFTagSet$TransferFunction::BaselineTIFFTagSet$TransferFunction() {
}

$Class* BaselineTIFFTagSet$TransferFunction::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$TransferFunction, name, initialize, &_BaselineTIFFTagSet$TransferFunction_ClassInfo_, allocate$BaselineTIFFTagSet$TransferFunction);
	return class$;
}

$Class* BaselineTIFFTagSet$TransferFunction::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax