#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$Artist.h>

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

$MethodInfo _BaselineTIFFTagSet$Artist_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$Artist::*)()>(&BaselineTIFFTagSet$Artist::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$Artist_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Artist", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "Artist", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$Artist_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Artist",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$Artist_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$Artist_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$Artist($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$Artist));
}

void BaselineTIFFTagSet$Artist::init$() {
	$TIFFTag::init$("Artist"_s, 315, $sl(1, $TIFFTag::TIFF_ASCII));
}

BaselineTIFFTagSet$Artist::BaselineTIFFTagSet$Artist() {
}

$Class* BaselineTIFFTagSet$Artist::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$Artist, name, initialize, &_BaselineTIFFTagSet$Artist_ClassInfo_, allocate$BaselineTIFFTagSet$Artist);
	return class$;
}

$Class* BaselineTIFFTagSet$Artist::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax