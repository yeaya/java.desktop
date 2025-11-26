#include <javax/imageio/plugins/tiff/FaxTIFFTagSet$CleanFaxData.h>

#include <javax/imageio/plugins/tiff/FaxTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FaxTIFFTagSet = ::javax::imageio::plugins::tiff::FaxTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _FaxTIFFTagSet$CleanFaxData_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FaxTIFFTagSet$CleanFaxData::*)()>(&FaxTIFFTagSet$CleanFaxData::init$))},
	{}
};

$InnerClassInfo _FaxTIFFTagSet$CleanFaxData_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.FaxTIFFTagSet$CleanFaxData", "javax.imageio.plugins.tiff.FaxTIFFTagSet", "CleanFaxData", $STATIC},
	{}
};

$ClassInfo _FaxTIFFTagSet$CleanFaxData_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.FaxTIFFTagSet$CleanFaxData",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_FaxTIFFTagSet$CleanFaxData_MethodInfo_,
	nullptr,
	nullptr,
	_FaxTIFFTagSet$CleanFaxData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.FaxTIFFTagSet"
};

$Object* allocate$FaxTIFFTagSet$CleanFaxData($Class* clazz) {
	return $of($alloc(FaxTIFFTagSet$CleanFaxData));
}

void FaxTIFFTagSet$CleanFaxData::init$() {
	$TIFFTag::init$("CleanFaxData"_s, 327, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(0, "No errors"_s);
	addValueName(1, "Errors corrected"_s);
	addValueName(2, "Errors uncorrected"_s);
}

FaxTIFFTagSet$CleanFaxData::FaxTIFFTagSet$CleanFaxData() {
}

$Class* FaxTIFFTagSet$CleanFaxData::load$($String* name, bool initialize) {
	$loadClass(FaxTIFFTagSet$CleanFaxData, name, initialize, &_FaxTIFFTagSet$CleanFaxData_ClassInfo_, allocate$FaxTIFFTagSet$CleanFaxData);
	return class$;
}

$Class* FaxTIFFTagSet$CleanFaxData::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax