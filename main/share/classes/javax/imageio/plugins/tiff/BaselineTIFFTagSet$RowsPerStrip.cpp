#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$RowsPerStrip.h>

#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_LONG
#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _BaselineTIFFTagSet$RowsPerStrip_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BaselineTIFFTagSet$RowsPerStrip::*)()>(&BaselineTIFFTagSet$RowsPerStrip::init$))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet$RowsPerStrip_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$RowsPerStrip", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "RowsPerStrip", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet$RowsPerStrip_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$RowsPerStrip",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$RowsPerStrip_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet$RowsPerStrip_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet"
};

$Object* allocate$BaselineTIFFTagSet$RowsPerStrip($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet$RowsPerStrip));
}

void BaselineTIFFTagSet$RowsPerStrip::init$() {
	$TIFFTag::init$("RowsPerStrip"_s, 278, ($sl(1, $TIFFTag::TIFF_SHORT)) | ($sl(1, $TIFFTag::TIFF_LONG)), 1);
}

BaselineTIFFTagSet$RowsPerStrip::BaselineTIFFTagSet$RowsPerStrip() {
}

$Class* BaselineTIFFTagSet$RowsPerStrip::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet$RowsPerStrip, name, initialize, &_BaselineTIFFTagSet$RowsPerStrip_ClassInfo_, allocate$BaselineTIFFTagSet$RowsPerStrip);
	return class$;
}

$Class* BaselineTIFFTagSet$RowsPerStrip::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax