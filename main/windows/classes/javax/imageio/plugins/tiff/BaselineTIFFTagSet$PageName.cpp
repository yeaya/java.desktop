#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$PageName.h>

#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_ASCII

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$PageName_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$PageName::*)()>(&BaselineTIFFTagSet$PageName::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$PageName_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$PageName", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "PageName", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$PageName_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$PageName",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$PageName_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$PageName_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$PageName($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$PageName));
}

void BaselineTIFFTagSet$PageName::init$() {
	$TIFFTag::init$("PageName"_s, 285, $sl(1, $TIFFTag::TIFF_ASCII));
}

BaselineTIFFTagSet$PageName::BaselineTIFFTagSet$PageName() {
}

$Class* BaselineTIFFTagSet$PageName::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$PageName, name, initialize, &_BaselineTIFFTagSet$PageName_ClassInfo_, allocate$BaselineTIFFTagSet$PageName);
	return class$;
}

$Class* BaselineTIFFTagSet$PageName::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax