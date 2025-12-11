#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$WhitePoint.h>

#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_RATIONAL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$WhitePoint_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$WhitePoint::*)()>(&BaselineTIFFTagSet$WhitePoint::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$WhitePoint_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$WhitePoint", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "WhitePoint", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$WhitePoint_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$WhitePoint",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$WhitePoint_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$WhitePoint_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$WhitePoint($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$WhitePoint));
}

void BaselineTIFFTagSet$WhitePoint::init$() {
	$TIFFTag::init$("WhitePoint"_s, 318, $sl(1, $TIFFTag::TIFF_RATIONAL), 2);
}

BaselineTIFFTagSet$WhitePoint::BaselineTIFFTagSet$WhitePoint() {
}

$Class* BaselineTIFFTagSet$WhitePoint::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$WhitePoint, name, initialize, &_BaselineTIFFTagSet$WhitePoint_ClassInfo_, allocate$BaselineTIFFTagSet$WhitePoint);
	return class$;
}

$Class* BaselineTIFFTagSet$WhitePoint::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax