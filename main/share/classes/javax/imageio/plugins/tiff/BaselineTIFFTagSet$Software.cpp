#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$Software.h>

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

$MethodInfo _BaselineTIFFTagSet$Software_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$Software::*)()>(&BaselineTIFFTagSet$Software::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$Software_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Software", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "Software", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$Software_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Software",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$Software_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$Software_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$Software($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$Software));
}

void BaselineTIFFTagSet$Software::init$() {
	$TIFFTag::init$("Software"_s, 305, $sl(1, $TIFFTag::TIFF_ASCII));
}

BaselineTIFFTagSet$Software::BaselineTIFFTagSet$Software() {
}

$Class* BaselineTIFFTagSet$Software::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$Software, name, initialize, &_BaselineTIFFTagSet$Software_ClassInfo_, allocate$BaselineTIFFTagSet$Software);
	return class$;
}

$Class* BaselineTIFFTagSet$Software::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax