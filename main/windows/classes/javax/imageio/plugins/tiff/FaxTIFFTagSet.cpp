#include <javax/imageio/plugins/tiff/FaxTIFFTagSet.h>

#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/imageio/plugins/tiff/FaxTIFFTagSet$BadFaxLines.h>
#include <javax/imageio/plugins/tiff/FaxTIFFTagSet$CleanFaxData.h>
#include <javax/imageio/plugins/tiff/FaxTIFFTagSet$ConsecutiveBadFaxLines.h>
#include <javax/imageio/plugins/tiff/TIFFTagSet.h>
#include <jcpp.h>

#undef CLEAN_FAX_DATA_ERRORS_CORRECTED
#undef CLEAN_FAX_DATA_ERRORS_UNCORRECTED
#undef CLEAN_FAX_DATA_NO_ERRORS
#undef TAG_BAD_FAX_LINES
#undef TAG_CLEAN_FAX_DATA
#undef TAG_CONSECUTIVE_BAD_LINES

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $FaxTIFFTagSet$BadFaxLines = ::javax::imageio::plugins::tiff::FaxTIFFTagSet$BadFaxLines;
using $FaxTIFFTagSet$CleanFaxData = ::javax::imageio::plugins::tiff::FaxTIFFTagSet$CleanFaxData;
using $FaxTIFFTagSet$ConsecutiveBadFaxLines = ::javax::imageio::plugins::tiff::FaxTIFFTagSet$ConsecutiveBadFaxLines;
using $TIFFTagSet = ::javax::imageio::plugins::tiff::TIFFTagSet;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$FieldInfo _FaxTIFFTagSet_FieldInfo_[] = {
	{"theInstance", "Ljavax/imageio/plugins/tiff/FaxTIFFTagSet;", nullptr, $PRIVATE | $STATIC, $staticField(FaxTIFFTagSet, theInstance)},
	{"TAG_BAD_FAX_LINES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FaxTIFFTagSet, TAG_BAD_FAX_LINES)},
	{"TAG_CLEAN_FAX_DATA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FaxTIFFTagSet, TAG_CLEAN_FAX_DATA)},
	{"CLEAN_FAX_DATA_NO_ERRORS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FaxTIFFTagSet, CLEAN_FAX_DATA_NO_ERRORS)},
	{"CLEAN_FAX_DATA_ERRORS_CORRECTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FaxTIFFTagSet, CLEAN_FAX_DATA_ERRORS_CORRECTED)},
	{"CLEAN_FAX_DATA_ERRORS_UNCORRECTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FaxTIFFTagSet, CLEAN_FAX_DATA_ERRORS_UNCORRECTED)},
	{"TAG_CONSECUTIVE_BAD_LINES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FaxTIFFTagSet, TAG_CONSECUTIVE_BAD_LINES)},
	{"tags", "Ljava/util/List;", "Ljava/util/List<Ljavax/imageio/plugins/tiff/TIFFTag;>;", $PRIVATE | $STATIC, $staticField(FaxTIFFTagSet, tags)},
	{}
};

$MethodInfo _FaxTIFFTagSet_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(FaxTIFFTagSet::*)()>(&FaxTIFFTagSet::init$))},
	{"getInstance", "()Ljavax/imageio/plugins/tiff/FaxTIFFTagSet;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<FaxTIFFTagSet*(*)()>(&FaxTIFFTagSet::getInstance))},
	{"initTags", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&FaxTIFFTagSet::initTags))},
	{}
};

$InnerClassInfo _FaxTIFFTagSet_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.FaxTIFFTagSet$ConsecutiveBadFaxLines", "javax.imageio.plugins.tiff.FaxTIFFTagSet", "ConsecutiveBadFaxLines", $STATIC},
	{"javax.imageio.plugins.tiff.FaxTIFFTagSet$CleanFaxData", "javax.imageio.plugins.tiff.FaxTIFFTagSet", "CleanFaxData", $STATIC},
	{"javax.imageio.plugins.tiff.FaxTIFFTagSet$BadFaxLines", "javax.imageio.plugins.tiff.FaxTIFFTagSet", "BadFaxLines", $STATIC},
	{}
};

$ClassInfo _FaxTIFFTagSet_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.imageio.plugins.tiff.FaxTIFFTagSet",
	"javax.imageio.plugins.tiff.TIFFTagSet",
	nullptr,
	_FaxTIFFTagSet_FieldInfo_,
	_FaxTIFFTagSet_MethodInfo_,
	nullptr,
	nullptr,
	_FaxTIFFTagSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.FaxTIFFTagSet$ConsecutiveBadFaxLines,javax.imageio.plugins.tiff.FaxTIFFTagSet$CleanFaxData,javax.imageio.plugins.tiff.FaxTIFFTagSet$BadFaxLines"
};

$Object* allocate$FaxTIFFTagSet($Class* clazz) {
	return $of($alloc(FaxTIFFTagSet));
}

FaxTIFFTagSet* FaxTIFFTagSet::theInstance = nullptr;
$List* FaxTIFFTagSet::tags = nullptr;

void FaxTIFFTagSet::initTags() {
	$init(FaxTIFFTagSet);
	$useLocalCurrentObjectStackCache();
	$assignStatic(FaxTIFFTagSet::tags, $new($ArrayList, 42));
	$nc(FaxTIFFTagSet::tags)->add($$new($FaxTIFFTagSet$BadFaxLines));
	$nc(FaxTIFFTagSet::tags)->add($$new($FaxTIFFTagSet$CleanFaxData));
	$nc(FaxTIFFTagSet::tags)->add($$new($FaxTIFFTagSet$ConsecutiveBadFaxLines));
}

void FaxTIFFTagSet::init$() {
	$TIFFTagSet::init$(FaxTIFFTagSet::tags);
}

FaxTIFFTagSet* FaxTIFFTagSet::getInstance() {
	$load(FaxTIFFTagSet);
	$synchronized(class$) {
		$init(FaxTIFFTagSet);
		if (FaxTIFFTagSet::theInstance == nullptr) {
			initTags();
			$assignStatic(FaxTIFFTagSet::theInstance, $new(FaxTIFFTagSet));
			$assignStatic(FaxTIFFTagSet::tags, nullptr);
		}
		return FaxTIFFTagSet::theInstance;
	}
}

void clinit$FaxTIFFTagSet($Class* class$) {
	$assignStatic(FaxTIFFTagSet::theInstance, nullptr);
}

FaxTIFFTagSet::FaxTIFFTagSet() {
}

$Class* FaxTIFFTagSet::load$($String* name, bool initialize) {
	$loadClass(FaxTIFFTagSet, name, initialize, &_FaxTIFFTagSet_ClassInfo_, clinit$FaxTIFFTagSet, allocate$FaxTIFFTagSet);
	return class$;
}

$Class* FaxTIFFTagSet::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax