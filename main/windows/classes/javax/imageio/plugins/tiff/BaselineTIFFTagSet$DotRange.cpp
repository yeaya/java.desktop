#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$DotRange.h>

#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_BYTE
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

$MethodInfo _BaselineTIFFTagSet$DotRange_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$DotRange::*)()>(&BaselineTIFFTagSet$DotRange::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$DotRange_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$DotRange", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "DotRange", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$DotRange_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$DotRange",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$DotRange_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$DotRange_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$DotRange($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$DotRange));
}

void BaselineTIFFTagSet$DotRange::init$() {
	$TIFFTag::init$("DotRange"_s, 336, ($sl(1, $TIFFTag::TIFF_BYTE)) | ($sl(1, $TIFFTag::TIFF_SHORT)));
}

BaselineTIFFTagSet$DotRange::BaselineTIFFTagSet$DotRange() {
}

$Class* BaselineTIFFTagSet$DotRange::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$DotRange, name, initialize, &_BaselineTIFFTagSet$DotRange_ClassInfo_, allocate$BaselineTIFFTagSet$DotRange);
	return class$;
}

$Class* BaselineTIFFTagSet$DotRange::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax