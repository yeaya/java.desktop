#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGInterchangeFormatLength.h>

#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_LONG

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$JPEGInterchangeFormatLength_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$JPEGInterchangeFormatLength::*)()>(&BaselineTIFFTagSet$JPEGInterchangeFormatLength::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$JPEGInterchangeFormatLength_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGInterchangeFormatLength", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGInterchangeFormatLength", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$JPEGInterchangeFormatLength_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGInterchangeFormatLength",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$JPEGInterchangeFormatLength_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$JPEGInterchangeFormatLength_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$JPEGInterchangeFormatLength($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$JPEGInterchangeFormatLength));
}

void BaselineTIFFTagSet$JPEGInterchangeFormatLength::init$() {
	$TIFFTag::init$("JPEGInterchangeFormatLength"_s, 514, $sl(1, $TIFFTag::TIFF_LONG), 1);
}

BaselineTIFFTagSet$JPEGInterchangeFormatLength::BaselineTIFFTagSet$JPEGInterchangeFormatLength() {
}

$Class* BaselineTIFFTagSet$JPEGInterchangeFormatLength::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$JPEGInterchangeFormatLength, name, initialize, &_BaselineTIFFTagSet$JPEGInterchangeFormatLength_ClassInfo_, allocate$BaselineTIFFTagSet$JPEGInterchangeFormatLength);
	return class$;
}

$Class* BaselineTIFFTagSet$JPEGInterchangeFormatLength::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax