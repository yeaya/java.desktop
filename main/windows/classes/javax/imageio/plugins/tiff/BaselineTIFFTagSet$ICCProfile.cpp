#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$ICCProfile.h>

#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_UNDEFINED

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$ICCProfile_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$ICCProfile::*)()>(&BaselineTIFFTagSet$ICCProfile::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$ICCProfile_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ICCProfile", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "ICCProfile", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$ICCProfile_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ICCProfile",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$ICCProfile_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$ICCProfile_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$ICCProfile($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$ICCProfile));
}

void BaselineTIFFTagSet$ICCProfile::init$() {
	$TIFFTag::init$("ICC Profile"_s, 0x00008773, $sl(1, $TIFFTag::TIFF_UNDEFINED));
}

BaselineTIFFTagSet$ICCProfile::BaselineTIFFTagSet$ICCProfile() {
}

$Class* BaselineTIFFTagSet$ICCProfile::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$ICCProfile, name, initialize, &_BaselineTIFFTagSet$ICCProfile_ClassInfo_, allocate$BaselineTIFFTagSet$ICCProfile);
	return class$;
}

$Class* BaselineTIFFTagSet$ICCProfile::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax