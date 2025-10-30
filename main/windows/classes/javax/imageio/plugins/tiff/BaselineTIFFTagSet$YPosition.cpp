#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$YPosition.h>

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

$MethodInfo _BaselineTIFFTagSet$YPosition_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$YPosition::*)()>(&BaselineTIFFTagSet$YPosition::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$YPosition_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$YPosition", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "YPosition", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$YPosition_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$YPosition",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$YPosition_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$YPosition_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$YPosition($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$YPosition));
}

void BaselineTIFFTagSet$YPosition::init$() {
	$TIFFTag::init$("YPosition"_s, 287, $sl(1, $TIFFTag::TIFF_RATIONAL), 1);
}

BaselineTIFFTagSet$YPosition::BaselineTIFFTagSet$YPosition() {
}

$Class* BaselineTIFFTagSet$YPosition::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$YPosition, name, initialize, &_BaselineTIFFTagSet$YPosition_ClassInfo_, allocate$BaselineTIFFTagSet$YPosition);
	return class$;
}

$Class* BaselineTIFFTagSet$YPosition::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax