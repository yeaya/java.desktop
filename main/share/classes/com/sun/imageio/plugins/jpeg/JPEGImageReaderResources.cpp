#include <com/sun/imageio/plugins/jpeg/JPEGImageReaderResources.h>

#include <com/sun/imageio/plugins/jpeg/JPEGImageReader.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

#undef WARNING_IGNORE_INVALID_ICC
#undef WARNING_NO_EOI
#undef WARNING_NO_JFIF_IN_THUMB

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $JPEGImageReader = ::com::sun::imageio::plugins::jpeg::JPEGImageReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$MethodInfo _JPEGImageReaderResources_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JPEGImageReaderResources::*)()>(&JPEGImageReaderResources::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _JPEGImageReaderResources_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JPEGImageReaderResources",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_JPEGImageReaderResources_MethodInfo_
};

$Object* allocate$JPEGImageReaderResources($Class* clazz) {
	return $of($alloc(JPEGImageReaderResources));
}

void JPEGImageReaderResources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* JPEGImageReaderResources::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$($of($Integer::toString($JPEGImageReader::WARNING_NO_EOI))),
			$of("Truncated File - Missing EOI marker"_s)
		}),
		$$new($ObjectArray, {
			$($of($Integer::toString($JPEGImageReader::WARNING_NO_JFIF_IN_THUMB))),
			$of("JFIF markers not allowed in JFIF JPEG thumbnail; ignored"_s)
		}),
		$$new($ObjectArray, {
			$($of($Integer::toString($JPEGImageReader::WARNING_IGNORE_INVALID_ICC))),
			$of("Embedded color profile is invalid; ignored"_s)
		})
	});
}

JPEGImageReaderResources::JPEGImageReaderResources() {
}

$Class* JPEGImageReaderResources::load$($String* name, bool initialize) {
	$loadClass(JPEGImageReaderResources, name, initialize, &_JPEGImageReaderResources_ClassInfo_, allocate$JPEGImageReaderResources);
	return class$;
}

$Class* JPEGImageReaderResources::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com