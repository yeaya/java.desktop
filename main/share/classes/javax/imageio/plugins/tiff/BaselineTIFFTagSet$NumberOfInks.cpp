#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$NumberOfInks.h>

#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$NumberOfInks_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$NumberOfInks::*)()>(&BaselineTIFFTagSet$NumberOfInks::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$NumberOfInks_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$NumberOfInks", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "NumberOfInks", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$NumberOfInks_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$NumberOfInks",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$NumberOfInks_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$NumberOfInks_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$NumberOfInks($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$NumberOfInks));
}

void BaselineTIFFTagSet$NumberOfInks::init$() {
	$TIFFTag::init$("NumberOfInks"_s, 334, $sl(1, $TIFFTag::TIFF_SHORT), 1);
}

BaselineTIFFTagSet$NumberOfInks::BaselineTIFFTagSet$NumberOfInks() {
}

$Class* BaselineTIFFTagSet$NumberOfInks::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$NumberOfInks, name, initialize, &_BaselineTIFFTagSet$NumberOfInks_ClassInfo_, allocate$BaselineTIFFTagSet$NumberOfInks);
	return class$;
}

$Class* BaselineTIFFTagSet$NumberOfInks::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax