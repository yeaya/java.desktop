#include <javax/imageio/plugins/tiff/GeoTIFFTagSet.h>

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
#include <javax/imageio/plugins/tiff/GeoTIFFTagSet$GeoAsciiParams.h>
#include <javax/imageio/plugins/tiff/GeoTIFFTagSet$GeoDoubleParams.h>
#include <javax/imageio/plugins/tiff/GeoTIFFTagSet$GeoKeyDirectory.h>
#include <javax/imageio/plugins/tiff/GeoTIFFTagSet$ModelPixelScale.h>
#include <javax/imageio/plugins/tiff/GeoTIFFTagSet$ModelTiepoint.h>
#include <javax/imageio/plugins/tiff/GeoTIFFTagSet$ModelTransformation.h>
#include <javax/imageio/plugins/tiff/TIFFTagSet.h>
#include <jcpp.h>

#undef TAG_GEO_ASCII_PARAMS
#undef TAG_GEO_DOUBLE_PARAMS
#undef TAG_GEO_KEY_DIRECTORY
#undef TAG_MODEL_PIXEL_SCALE
#undef TAG_MODEL_TIE_POINT
#undef TAG_MODEL_TRANSFORMATION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $GeoTIFFTagSet$GeoAsciiParams = ::javax::imageio::plugins::tiff::GeoTIFFTagSet$GeoAsciiParams;
using $GeoTIFFTagSet$GeoDoubleParams = ::javax::imageio::plugins::tiff::GeoTIFFTagSet$GeoDoubleParams;
using $GeoTIFFTagSet$GeoKeyDirectory = ::javax::imageio::plugins::tiff::GeoTIFFTagSet$GeoKeyDirectory;
using $GeoTIFFTagSet$ModelPixelScale = ::javax::imageio::plugins::tiff::GeoTIFFTagSet$ModelPixelScale;
using $GeoTIFFTagSet$ModelTiepoint = ::javax::imageio::plugins::tiff::GeoTIFFTagSet$ModelTiepoint;
using $GeoTIFFTagSet$ModelTransformation = ::javax::imageio::plugins::tiff::GeoTIFFTagSet$ModelTransformation;
using $TIFFTagSet = ::javax::imageio::plugins::tiff::TIFFTagSet;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$FieldInfo _GeoTIFFTagSet_FieldInfo_[] = {
	{"theInstance", "Ljavax/imageio/plugins/tiff/GeoTIFFTagSet;", nullptr, $PRIVATE | $STATIC, $staticField(GeoTIFFTagSet, theInstance)},
	{"TAG_MODEL_PIXEL_SCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GeoTIFFTagSet, TAG_MODEL_PIXEL_SCALE)},
	{"TAG_MODEL_TRANSFORMATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GeoTIFFTagSet, TAG_MODEL_TRANSFORMATION)},
	{"TAG_MODEL_TIE_POINT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GeoTIFFTagSet, TAG_MODEL_TIE_POINT)},
	{"TAG_GEO_KEY_DIRECTORY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GeoTIFFTagSet, TAG_GEO_KEY_DIRECTORY)},
	{"TAG_GEO_DOUBLE_PARAMS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GeoTIFFTagSet, TAG_GEO_DOUBLE_PARAMS)},
	{"TAG_GEO_ASCII_PARAMS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(GeoTIFFTagSet, TAG_GEO_ASCII_PARAMS)},
	{"tags", "Ljava/util/List;", "Ljava/util/List<Ljavax/imageio/plugins/tiff/TIFFTag;>;", $PRIVATE | $STATIC, $staticField(GeoTIFFTagSet, tags)},
	{}
};

$MethodInfo _GeoTIFFTagSet_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(GeoTIFFTagSet::*)()>(&GeoTIFFTagSet::init$))},
	{"getInstance", "()Ljavax/imageio/plugins/tiff/GeoTIFFTagSet;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<GeoTIFFTagSet*(*)()>(&GeoTIFFTagSet::getInstance))},
	{"initTags", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&GeoTIFFTagSet::initTags))},
	{}
};

$InnerClassInfo _GeoTIFFTagSet_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.GeoTIFFTagSet$GeoAsciiParams", "javax.imageio.plugins.tiff.GeoTIFFTagSet", "GeoAsciiParams", $STATIC},
	{"javax.imageio.plugins.tiff.GeoTIFFTagSet$GeoDoubleParams", "javax.imageio.plugins.tiff.GeoTIFFTagSet", "GeoDoubleParams", $STATIC},
	{"javax.imageio.plugins.tiff.GeoTIFFTagSet$GeoKeyDirectory", "javax.imageio.plugins.tiff.GeoTIFFTagSet", "GeoKeyDirectory", $STATIC},
	{"javax.imageio.plugins.tiff.GeoTIFFTagSet$ModelTiepoint", "javax.imageio.plugins.tiff.GeoTIFFTagSet", "ModelTiepoint", $STATIC},
	{"javax.imageio.plugins.tiff.GeoTIFFTagSet$ModelTransformation", "javax.imageio.plugins.tiff.GeoTIFFTagSet", "ModelTransformation", $STATIC},
	{"javax.imageio.plugins.tiff.GeoTIFFTagSet$ModelPixelScale", "javax.imageio.plugins.tiff.GeoTIFFTagSet", "ModelPixelScale", $STATIC},
	{}
};

$ClassInfo _GeoTIFFTagSet_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.imageio.plugins.tiff.GeoTIFFTagSet",
	"javax.imageio.plugins.tiff.TIFFTagSet",
	nullptr,
	_GeoTIFFTagSet_FieldInfo_,
	_GeoTIFFTagSet_MethodInfo_,
	nullptr,
	nullptr,
	_GeoTIFFTagSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.GeoTIFFTagSet$GeoAsciiParams,javax.imageio.plugins.tiff.GeoTIFFTagSet$GeoDoubleParams,javax.imageio.plugins.tiff.GeoTIFFTagSet$GeoKeyDirectory,javax.imageio.plugins.tiff.GeoTIFFTagSet$ModelTiepoint,javax.imageio.plugins.tiff.GeoTIFFTagSet$ModelTransformation,javax.imageio.plugins.tiff.GeoTIFFTagSet$ModelPixelScale"
};

$Object* allocate$GeoTIFFTagSet($Class* clazz) {
	return $of($alloc(GeoTIFFTagSet));
}

GeoTIFFTagSet* GeoTIFFTagSet::theInstance = nullptr;
$List* GeoTIFFTagSet::tags = nullptr;

void GeoTIFFTagSet::initTags() {
	$init(GeoTIFFTagSet);
	$assignStatic(GeoTIFFTagSet::tags, $new($ArrayList, 42));
	$nc(GeoTIFFTagSet::tags)->add($$new($GeoTIFFTagSet$ModelPixelScale));
	$nc(GeoTIFFTagSet::tags)->add($$new($GeoTIFFTagSet$ModelTransformation));
	$nc(GeoTIFFTagSet::tags)->add($$new($GeoTIFFTagSet$ModelTiepoint));
	$nc(GeoTIFFTagSet::tags)->add($$new($GeoTIFFTagSet$GeoKeyDirectory));
	$nc(GeoTIFFTagSet::tags)->add($$new($GeoTIFFTagSet$GeoDoubleParams));
	$nc(GeoTIFFTagSet::tags)->add($$new($GeoTIFFTagSet$GeoAsciiParams));
}

void GeoTIFFTagSet::init$() {
	$TIFFTagSet::init$(GeoTIFFTagSet::tags);
}

GeoTIFFTagSet* GeoTIFFTagSet::getInstance() {
	$load(GeoTIFFTagSet);
	$synchronized(class$) {
		$init(GeoTIFFTagSet);
		if (GeoTIFFTagSet::theInstance == nullptr) {
			initTags();
			$assignStatic(GeoTIFFTagSet::theInstance, $new(GeoTIFFTagSet));
			$assignStatic(GeoTIFFTagSet::tags, nullptr);
		}
		return GeoTIFFTagSet::theInstance;
	}
}

void clinit$GeoTIFFTagSet($Class* class$) {
	$assignStatic(GeoTIFFTagSet::theInstance, nullptr);
}

GeoTIFFTagSet::GeoTIFFTagSet() {
}

$Class* GeoTIFFTagSet::load$($String* name, bool initialize) {
	$loadClass(GeoTIFFTagSet, name, initialize, &_GeoTIFFTagSet_ClassInfo_, clinit$GeoTIFFTagSet, allocate$GeoTIFFTagSet);
	return class$;
}

$Class* GeoTIFFTagSet::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax