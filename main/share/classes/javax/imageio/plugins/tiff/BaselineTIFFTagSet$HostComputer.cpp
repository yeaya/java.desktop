#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$HostComputer.h>

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

$MethodInfo _BaselineTIFFTagSet$HostComputer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$HostComputer::*)()>(&BaselineTIFFTagSet$HostComputer::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$HostComputer_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$HostComputer", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "HostComputer", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$HostComputer_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$HostComputer",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$HostComputer_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$HostComputer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$HostComputer($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$HostComputer));
}

void BaselineTIFFTagSet$HostComputer::init$() {
	$TIFFTag::init$("HostComputer"_s, 316, $sl(1, $TIFFTag::TIFF_ASCII));
}

BaselineTIFFTagSet$HostComputer::BaselineTIFFTagSet$HostComputer() {
}

$Class* BaselineTIFFTagSet$HostComputer::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$HostComputer, name, initialize, &_BaselineTIFFTagSet$HostComputer_ClassInfo_, allocate$BaselineTIFFTagSet$HostComputer);
	return class$;
}

$Class* BaselineTIFFTagSet$HostComputer::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax