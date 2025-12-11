#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$DocumentName.h>

#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_ASCII

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$DocumentName_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$DocumentName::*)()>(&BaselineTIFFTagSet$DocumentName::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$DocumentName_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$DocumentName", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "DocumentName", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$DocumentName_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$DocumentName",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$DocumentName_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$DocumentName_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$DocumentName($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$DocumentName));
}

void BaselineTIFFTagSet$DocumentName::init$() {
	$TIFFTag::init$("DocumentName"_s, 269, $sl(1, $TIFFTag::TIFF_ASCII));
}

BaselineTIFFTagSet$DocumentName::BaselineTIFFTagSet$DocumentName() {
}

$Class* BaselineTIFFTagSet$DocumentName::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$DocumentName, name, initialize, &_BaselineTIFFTagSet$DocumentName_ClassInfo_, allocate$BaselineTIFFTagSet$DocumentName);
	return class$;
}

$Class* BaselineTIFFTagSet$DocumentName::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax