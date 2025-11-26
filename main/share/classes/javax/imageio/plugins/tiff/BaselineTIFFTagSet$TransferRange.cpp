#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$TransferRange.h>

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

$MethodInfo _BaselineTIFFTagSet$TransferRange_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$TransferRange::*)()>(&BaselineTIFFTagSet$TransferRange::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$TransferRange_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TransferRange", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "TransferRange", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$TransferRange_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TransferRange",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$TransferRange_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$TransferRange_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$TransferRange($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$TransferRange));
}

void BaselineTIFFTagSet$TransferRange::init$() {
	$TIFFTag::init$("TransferRange"_s, 342, $sl(1, $TIFFTag::TIFF_SHORT), 6);
}

BaselineTIFFTagSet$TransferRange::BaselineTIFFTagSet$TransferRange() {
}

$Class* BaselineTIFFTagSet$TransferRange::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$TransferRange, name, initialize, &_BaselineTIFFTagSet$TransferRange_ClassInfo_, allocate$BaselineTIFFTagSet$TransferRange);
	return class$;
}

$Class* BaselineTIFFTagSet$TransferRange::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax