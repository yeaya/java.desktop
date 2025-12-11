#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$InkNames.h>

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

$MethodInfo _BaselineTIFFTagSet$InkNames_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$InkNames::*)()>(&BaselineTIFFTagSet$InkNames::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$InkNames_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$InkNames", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "InkNames", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$InkNames_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$InkNames",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$InkNames_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$InkNames_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$InkNames($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$InkNames));
}

void BaselineTIFFTagSet$InkNames::init$() {
	$TIFFTag::init$("InkNames"_s, 333, $sl(1, $TIFFTag::TIFF_ASCII));
}

BaselineTIFFTagSet$InkNames::BaselineTIFFTagSet$InkNames() {
}

$Class* BaselineTIFFTagSet$InkNames::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$InkNames, name, initialize, &_BaselineTIFFTagSet$InkNames_ClassInfo_, allocate$BaselineTIFFTagSet$InkNames);
	return class$;
}

$Class* BaselineTIFFTagSet$InkNames::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax