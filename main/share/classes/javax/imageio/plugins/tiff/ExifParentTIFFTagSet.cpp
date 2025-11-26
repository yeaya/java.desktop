#include <javax/imageio/plugins/tiff/ExifParentTIFFTagSet.h>

#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/imageio/plugins/tiff/ExifParentTIFFTagSet$ExifIFDPointer.h>
#include <javax/imageio/plugins/tiff/ExifParentTIFFTagSet$GPSInfoIFDPointer.h>
#include <javax/imageio/plugins/tiff/TIFFTagSet.h>
#include <jcpp.h>

#undef TAG_EXIF_IFD_POINTER
#undef TAG_GPS_INFO_IFD_POINTER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $ExifParentTIFFTagSet$ExifIFDPointer = ::javax::imageio::plugins::tiff::ExifParentTIFFTagSet$ExifIFDPointer;
using $ExifParentTIFFTagSet$GPSInfoIFDPointer = ::javax::imageio::plugins::tiff::ExifParentTIFFTagSet$GPSInfoIFDPointer;
using $TIFFTagSet = ::javax::imageio::plugins::tiff::TIFFTagSet;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$FieldInfo _ExifParentTIFFTagSet_FieldInfo_[] = {
	{"theInstance", "Ljavax/imageio/plugins/tiff/ExifParentTIFFTagSet;", nullptr, $PRIVATE | $STATIC, $staticField(ExifParentTIFFTagSet, theInstance)},
	{"TAG_EXIF_IFD_POINTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifParentTIFFTagSet, TAG_EXIF_IFD_POINTER)},
	{"TAG_GPS_INFO_IFD_POINTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifParentTIFFTagSet, TAG_GPS_INFO_IFD_POINTER)},
	{"tags", "Ljava/util/List;", "Ljava/util/List<Ljavax/imageio/plugins/tiff/TIFFTag;>;", $PRIVATE | $STATIC, $staticField(ExifParentTIFFTagSet, tags)},
	{}
};

$MethodInfo _ExifParentTIFFTagSet_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ExifParentTIFFTagSet::*)()>(&ExifParentTIFFTagSet::init$))},
	{"getInstance", "()Ljavax/imageio/plugins/tiff/ExifParentTIFFTagSet;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<ExifParentTIFFTagSet*(*)()>(&ExifParentTIFFTagSet::getInstance))},
	{"initTags", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&ExifParentTIFFTagSet::initTags))},
	{}
};

$InnerClassInfo _ExifParentTIFFTagSet_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifParentTIFFTagSet$GPSInfoIFDPointer", "javax.imageio.plugins.tiff.ExifParentTIFFTagSet", "GPSInfoIFDPointer", $STATIC},
	{"javax.imageio.plugins.tiff.ExifParentTIFFTagSet$ExifIFDPointer", "javax.imageio.plugins.tiff.ExifParentTIFFTagSet", "ExifIFDPointer", $STATIC},
	{}
};

$ClassInfo _ExifParentTIFFTagSet_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifParentTIFFTagSet",
	"javax.imageio.plugins.tiff.TIFFTagSet",
	nullptr,
	_ExifParentTIFFTagSet_FieldInfo_,
	_ExifParentTIFFTagSet_MethodInfo_,
	nullptr,
	nullptr,
	_ExifParentTIFFTagSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifParentTIFFTagSet$GPSInfoIFDPointer,javax.imageio.plugins.tiff.ExifParentTIFFTagSet$ExifIFDPointer"
};

$Object* allocate$ExifParentTIFFTagSet($Class* clazz) {
	return $of($alloc(ExifParentTIFFTagSet));
}

ExifParentTIFFTagSet* ExifParentTIFFTagSet::theInstance = nullptr;
$List* ExifParentTIFFTagSet::tags = nullptr;

void ExifParentTIFFTagSet::initTags() {
	$init(ExifParentTIFFTagSet);
	$useLocalCurrentObjectStackCache();
	$assignStatic(ExifParentTIFFTagSet::tags, $new($ArrayList, 1));
	$nc(ExifParentTIFFTagSet::tags)->add($$new($ExifParentTIFFTagSet$ExifIFDPointer));
	$nc(ExifParentTIFFTagSet::tags)->add($$new($ExifParentTIFFTagSet$GPSInfoIFDPointer));
}

void ExifParentTIFFTagSet::init$() {
	$TIFFTagSet::init$(ExifParentTIFFTagSet::tags);
}

ExifParentTIFFTagSet* ExifParentTIFFTagSet::getInstance() {
	$load(ExifParentTIFFTagSet);
	$synchronized(class$) {
		$init(ExifParentTIFFTagSet);
		if (ExifParentTIFFTagSet::theInstance == nullptr) {
			initTags();
			$assignStatic(ExifParentTIFFTagSet::theInstance, $new(ExifParentTIFFTagSet));
			$assignStatic(ExifParentTIFFTagSet::tags, nullptr);
		}
		return ExifParentTIFFTagSet::theInstance;
	}
}

void clinit$ExifParentTIFFTagSet($Class* class$) {
	$assignStatic(ExifParentTIFFTagSet::theInstance, nullptr);
}

ExifParentTIFFTagSet::ExifParentTIFFTagSet() {
}

$Class* ExifParentTIFFTagSet::load$($String* name, bool initialize) {
	$loadClass(ExifParentTIFFTagSet, name, initialize, &_ExifParentTIFFTagSet_ClassInfo_, clinit$ExifParentTIFFTagSet, allocate$ExifParentTIFFTagSet);
	return class$;
}

$Class* ExifParentTIFFTagSet::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax