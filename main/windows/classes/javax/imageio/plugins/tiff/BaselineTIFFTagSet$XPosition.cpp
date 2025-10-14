#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$XPosition.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_RATIONAL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$XPosition_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$XPosition::*)()>(&BaselineTIFFTagSet$XPosition::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$XPosition_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$XPosition", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "XPosition", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$XPosition_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$XPosition",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$XPosition_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$XPosition_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$XPosition($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$XPosition));
}

void BaselineTIFFTagSet$XPosition::init$() {
	$TIFFTag::init$("XPosition"_s, 286, $sl(1, $TIFFTag::TIFF_RATIONAL), 1);
}

BaselineTIFFTagSet$XPosition::BaselineTIFFTagSet$XPosition() {
}

$Class* BaselineTIFFTagSet$XPosition::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$XPosition, name, initialize, &_BaselineTIFFTagSet$XPosition_ClassInfo_, allocate$BaselineTIFFTagSet$XPosition);
	return class$;
}

$Class* BaselineTIFFTagSet$XPosition::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax