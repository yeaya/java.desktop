#include <javax/imageio/plugins/tiff/TIFFImageReadParam.h>

#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/imageio/ImageReadParam.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/ExifParentTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/FaxTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/GeoTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTagSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $ImageReadParam = ::javax::imageio::ImageReadParam;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $ExifParentTIFFTagSet = ::javax::imageio::plugins::tiff::ExifParentTIFFTagSet;
using $FaxTIFFTagSet = ::javax::imageio::plugins::tiff::FaxTIFFTagSet;
using $GeoTIFFTagSet = ::javax::imageio::plugins::tiff::GeoTIFFTagSet;
using $TIFFTagSet = ::javax::imageio::plugins::tiff::TIFFTagSet;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$FieldInfo _TIFFImageReadParam_FieldInfo_[] = {
	{"allowedTagSets", "Ljava/util/List;", "Ljava/util/List<Ljavax/imageio/plugins/tiff/TIFFTagSet;>;", $PRIVATE | $FINAL, $field(TIFFImageReadParam, allowedTagSets)},
	{"readUnknownTags", "Z", nullptr, $PRIVATE, $field(TIFFImageReadParam, readUnknownTags)},
	{}
};

$MethodInfo _TIFFImageReadParam_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TIFFImageReadParam::*)()>(&TIFFImageReadParam::init$))},
	{"addAllowedTagSet", "(Ljavax/imageio/plugins/tiff/TIFFTagSet;)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFImageReadParam::*)($TIFFTagSet*)>(&TIFFImageReadParam::addAllowedTagSet))},
	{"getAllowedTagSets", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/imageio/plugins/tiff/TIFFTagSet;>;", $PUBLIC, $method(static_cast<$List*(TIFFImageReadParam::*)()>(&TIFFImageReadParam::getAllowedTagSets))},
	{"getReadUnknownTags", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(TIFFImageReadParam::*)()>(&TIFFImageReadParam::getReadUnknownTags))},
	{"removeAllowedTagSet", "(Ljavax/imageio/plugins/tiff/TIFFTagSet;)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFImageReadParam::*)($TIFFTagSet*)>(&TIFFImageReadParam::removeAllowedTagSet))},
	{"setReadUnknownTags", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFImageReadParam::*)(bool)>(&TIFFImageReadParam::setReadUnknownTags))},
	{}
};

$ClassInfo _TIFFImageReadParam_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.imageio.plugins.tiff.TIFFImageReadParam",
	"javax.imageio.ImageReadParam",
	nullptr,
	_TIFFImageReadParam_FieldInfo_,
	_TIFFImageReadParam_MethodInfo_
};

$Object* allocate$TIFFImageReadParam($Class* clazz) {
	return $of($alloc(TIFFImageReadParam));
}

void TIFFImageReadParam::init$() {
	$useLocalCurrentObjectStackCache();
	$ImageReadParam::init$();
	$set(this, allowedTagSets, $new($ArrayList, 4));
	this->readUnknownTags = false;
	addAllowedTagSet($($BaselineTIFFTagSet::getInstance()));
	addAllowedTagSet($($FaxTIFFTagSet::getInstance()));
	addAllowedTagSet($($ExifParentTIFFTagSet::getInstance()));
	addAllowedTagSet($($GeoTIFFTagSet::getInstance()));
}

void TIFFImageReadParam::addAllowedTagSet($TIFFTagSet* tagSet) {
	if (tagSet == nullptr) {
		$throwNew($IllegalArgumentException, "tagSet == null!"_s);
	}
	if (!$nc(this->allowedTagSets)->contains(tagSet)) {
		$nc(this->allowedTagSets)->add(tagSet);
	}
}

void TIFFImageReadParam::removeAllowedTagSet($TIFFTagSet* tagSet) {
	if (tagSet == nullptr) {
		$throwNew($IllegalArgumentException, "tagSet == null!"_s);
	}
	$nc(this->allowedTagSets)->remove($of(tagSet));
}

$List* TIFFImageReadParam::getAllowedTagSets() {
	return this->allowedTagSets;
}

void TIFFImageReadParam::setReadUnknownTags(bool readUnknownTags) {
	this->readUnknownTags = readUnknownTags;
}

bool TIFFImageReadParam::getReadUnknownTags() {
	return this->readUnknownTags;
}

TIFFImageReadParam::TIFFImageReadParam() {
}

$Class* TIFFImageReadParam::load$($String* name, bool initialize) {
	$loadClass(TIFFImageReadParam, name, initialize, &_TIFFImageReadParam_ClassInfo_, allocate$TIFFImageReadParam);
	return class$;
}

$Class* TIFFImageReadParam::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax