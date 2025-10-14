#include <javax/imageio/plugins/tiff/ExifInteroperabilityTagSet.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/imageio/plugins/tiff/ExifInteroperabilityTagSet$InteroperabilityIndex.h>
#include <javax/imageio/plugins/tiff/TIFFTagSet.h>
#include <jcpp.h>

#undef INTEROPERABILITY_INDEX_R98
#undef INTEROPERABILITY_INDEX_THM
#undef TAG_INTEROPERABILITY_INDEX

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $ExifInteroperabilityTagSet$InteroperabilityIndex = ::javax::imageio::plugins::tiff::ExifInteroperabilityTagSet$InteroperabilityIndex;
using $TIFFTagSet = ::javax::imageio::plugins::tiff::TIFFTagSet;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$FieldInfo _ExifInteroperabilityTagSet_FieldInfo_[] = {
	{"TAG_INTEROPERABILITY_INDEX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifInteroperabilityTagSet, TAG_INTEROPERABILITY_INDEX)},
	{"INTEROPERABILITY_INDEX_R98", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExifInteroperabilityTagSet, INTEROPERABILITY_INDEX_R98)},
	{"INTEROPERABILITY_INDEX_THM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExifInteroperabilityTagSet, INTEROPERABILITY_INDEX_THM)},
	{"theInstance", "Ljavax/imageio/plugins/tiff/ExifInteroperabilityTagSet;", nullptr, $PRIVATE | $STATIC, $staticField(ExifInteroperabilityTagSet, theInstance)},
	{"tags", "Ljava/util/List;", "Ljava/util/List<Ljavax/imageio/plugins/tiff/TIFFTag;>;", $PRIVATE | $STATIC, $staticField(ExifInteroperabilityTagSet, tags)},
	{}
};

$MethodInfo _ExifInteroperabilityTagSet_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ExifInteroperabilityTagSet::*)()>(&ExifInteroperabilityTagSet::init$))},
	{"getInstance", "()Ljavax/imageio/plugins/tiff/ExifInteroperabilityTagSet;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<ExifInteroperabilityTagSet*(*)()>(&ExifInteroperabilityTagSet::getInstance))},
	{"initTags", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&ExifInteroperabilityTagSet::initTags))},
	{}
};

$InnerClassInfo _ExifInteroperabilityTagSet_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifInteroperabilityTagSet$InteroperabilityIndex", "javax.imageio.plugins.tiff.ExifInteroperabilityTagSet", "InteroperabilityIndex", $STATIC},
	{}
};

$ClassInfo _ExifInteroperabilityTagSet_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifInteroperabilityTagSet",
	"javax.imageio.plugins.tiff.TIFFTagSet",
	nullptr,
	_ExifInteroperabilityTagSet_FieldInfo_,
	_ExifInteroperabilityTagSet_MethodInfo_,
	nullptr,
	nullptr,
	_ExifInteroperabilityTagSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifInteroperabilityTagSet$InteroperabilityIndex"
};

$Object* allocate$ExifInteroperabilityTagSet($Class* clazz) {
	return $of($alloc(ExifInteroperabilityTagSet));
}


$String* ExifInteroperabilityTagSet::INTEROPERABILITY_INDEX_R98 = nullptr;

$String* ExifInteroperabilityTagSet::INTEROPERABILITY_INDEX_THM = nullptr;
ExifInteroperabilityTagSet* ExifInteroperabilityTagSet::theInstance = nullptr;
$List* ExifInteroperabilityTagSet::tags = nullptr;

void ExifInteroperabilityTagSet::initTags() {
	$init(ExifInteroperabilityTagSet);
	$assignStatic(ExifInteroperabilityTagSet::tags, $new($ArrayList, 42));
	$nc(ExifInteroperabilityTagSet::tags)->add($$new($ExifInteroperabilityTagSet$InteroperabilityIndex));
}

void ExifInteroperabilityTagSet::init$() {
	$TIFFTagSet::init$(ExifInteroperabilityTagSet::tags);
}

ExifInteroperabilityTagSet* ExifInteroperabilityTagSet::getInstance() {
	$load(ExifInteroperabilityTagSet);
	$synchronized(class$) {
		$init(ExifInteroperabilityTagSet);
		if (ExifInteroperabilityTagSet::theInstance == nullptr) {
			initTags();
			$assignStatic(ExifInteroperabilityTagSet::theInstance, $new(ExifInteroperabilityTagSet));
			$assignStatic(ExifInteroperabilityTagSet::tags, nullptr);
		}
		return ExifInteroperabilityTagSet::theInstance;
	}
}

void clinit$ExifInteroperabilityTagSet($Class* class$) {
	$assignStatic(ExifInteroperabilityTagSet::INTEROPERABILITY_INDEX_R98, "R98"_s);
	$assignStatic(ExifInteroperabilityTagSet::INTEROPERABILITY_INDEX_THM, "THM"_s);
	$assignStatic(ExifInteroperabilityTagSet::theInstance, nullptr);
}

ExifInteroperabilityTagSet::ExifInteroperabilityTagSet() {
}

$Class* ExifInteroperabilityTagSet::load$($String* name, bool initialize) {
	$loadClass(ExifInteroperabilityTagSet, name, initialize, &_ExifInteroperabilityTagSet_ClassInfo_, clinit$ExifInteroperabilityTagSet, allocate$ExifInteroperabilityTagSet);
	return class$;
}

$Class* ExifInteroperabilityTagSet::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax