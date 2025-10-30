#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$TargetPrinter.h>

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

$MethodInfo _BaselineTIFFTagSet$TargetPrinter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$TargetPrinter::*)()>(&BaselineTIFFTagSet$TargetPrinter::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$TargetPrinter_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TargetPrinter", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "TargetPrinter", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$TargetPrinter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TargetPrinter",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$TargetPrinter_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$TargetPrinter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$TargetPrinter($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$TargetPrinter));
}

void BaselineTIFFTagSet$TargetPrinter::init$() {
	$TIFFTag::init$("TargetPrinter"_s, 337, $sl(1, $TIFFTag::TIFF_ASCII));
}

BaselineTIFFTagSet$TargetPrinter::BaselineTIFFTagSet$TargetPrinter() {
}

$Class* BaselineTIFFTagSet$TargetPrinter::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$TargetPrinter, name, initialize, &_BaselineTIFFTagSet$TargetPrinter_ClassInfo_, allocate$BaselineTIFFTagSet$TargetPrinter);
	return class$;
}

$Class* BaselineTIFFTagSet$TargetPrinter::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax