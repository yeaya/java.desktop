#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$Make.h>

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

$MethodInfo _BaselineTIFFTagSet$Make_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$Make::*)()>(&BaselineTIFFTagSet$Make::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$Make_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Make", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "Make", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$Make_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Make",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$Make_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$Make_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$Make($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$Make));
}

void BaselineTIFFTagSet$Make::init$() {
	$TIFFTag::init$("Make"_s, 271, $sl(1, $TIFFTag::TIFF_ASCII));
}

BaselineTIFFTagSet$Make::BaselineTIFFTagSet$Make() {
}

$Class* BaselineTIFFTagSet$Make::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$Make, name, initialize, &_BaselineTIFFTagSet$Make_ClassInfo_, allocate$BaselineTIFFTagSet$Make);
	return class$;
}

$Class* BaselineTIFFTagSet$Make::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax