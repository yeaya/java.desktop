#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGProc.h>

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

$MethodInfo _BaselineTIFFTagSet$JPEGProc_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$JPEGProc::*)()>(&BaselineTIFFTagSet$JPEGProc::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$JPEGProc_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGProc", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGProc", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$JPEGProc_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGProc",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$JPEGProc_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$JPEGProc_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$JPEGProc($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$JPEGProc));
}

void BaselineTIFFTagSet$JPEGProc::init$() {
	$TIFFTag::init$("JPEGProc"_s, 512, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(1, "Baseline sequential process"_s);
	addValueName(14, "Lossless process with Huffman coding"_s);
}

BaselineTIFFTagSet$JPEGProc::BaselineTIFFTagSet$JPEGProc() {
}

$Class* BaselineTIFFTagSet$JPEGProc::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$JPEGProc, name, initialize, &_BaselineTIFFTagSet$JPEGProc_ClassInfo_, allocate$BaselineTIFFTagSet$JPEGProc);
	return class$;
}

$Class* BaselineTIFFTagSet$JPEGProc::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax