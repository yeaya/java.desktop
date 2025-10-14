#include <com/sun/imageio/plugins/tiff/TIFFStreamMetadataFormatResources.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFStreamMetadataFormatResources_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TIFFStreamMetadataFormatResources, contents)},
	{}
};

$MethodInfo _TIFFStreamMetadataFormatResources_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TIFFStreamMetadataFormatResources::*)()>(&TIFFStreamMetadataFormatResources::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TIFFStreamMetadataFormatResources_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFStreamMetadataFormatResources",
	"java.util.ListResourceBundle",
	nullptr,
	_TIFFStreamMetadataFormatResources_FieldInfo_,
	_TIFFStreamMetadataFormatResources_MethodInfo_
};

$Object* allocate$TIFFStreamMetadataFormatResources($Class* clazz) {
	return $of($alloc(TIFFStreamMetadataFormatResources));
}

$ObjectArray2* TIFFStreamMetadataFormatResources::contents = nullptr;

void TIFFStreamMetadataFormatResources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* TIFFStreamMetadataFormatResources::getContents() {
	return $cast($ObjectArray2, $nc(TIFFStreamMetadataFormatResources::contents)->clone());
}

void clinit$TIFFStreamMetadataFormatResources($Class* class$) {
	$assignStatic(TIFFStreamMetadataFormatResources::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ByteOrder"_s),
			$of("The stream byte order"_s)
		}),
		$$new($ObjectArray, {
			$of("ByteOrder/value"_s),
			$of("One of \"BIG_ENDIAN\" or \"LITTLE_ENDIAN\""_s)
		})
	}));
}

TIFFStreamMetadataFormatResources::TIFFStreamMetadataFormatResources() {
}

$Class* TIFFStreamMetadataFormatResources::load$($String* name, bool initialize) {
	$loadClass(TIFFStreamMetadataFormatResources, name, initialize, &_TIFFStreamMetadataFormatResources_ClassInfo_, clinit$TIFFStreamMetadataFormatResources, allocate$TIFFStreamMetadataFormatResources);
	return class$;
}

$Class* TIFFStreamMetadataFormatResources::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com