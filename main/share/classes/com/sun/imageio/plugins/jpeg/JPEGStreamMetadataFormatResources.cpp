#include <com/sun/imageio/plugins/jpeg/JPEGStreamMetadataFormatResources.h>

#include <com/sun/imageio/plugins/jpeg/JPEGMetadataFormatResources.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $JPEGMetadataFormatResources = ::com::sun::imageio::plugins::jpeg::JPEGMetadataFormatResources;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$MethodInfo _JPEGStreamMetadataFormatResources_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JPEGStreamMetadataFormatResources::*)()>(&JPEGStreamMetadataFormatResources::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _JPEGStreamMetadataFormatResources_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JPEGStreamMetadataFormatResources",
	"com.sun.imageio.plugins.jpeg.JPEGMetadataFormatResources",
	nullptr,
	nullptr,
	_JPEGStreamMetadataFormatResources_MethodInfo_
};

$Object* allocate$JPEGStreamMetadataFormatResources($Class* clazz) {
	return $of($alloc(JPEGStreamMetadataFormatResources));
}

void JPEGStreamMetadataFormatResources::init$() {
	$JPEGMetadataFormatResources::init$();
}

$ObjectArray2* JPEGStreamMetadataFormatResources::getContents() {
	$init($JPEGMetadataFormatResources);
	$var($ObjectArray2, commonCopy, $new($ObjectArray2, $nc($JPEGMetadataFormatResources::commonContents)->length, 2));
	for (int32_t i = 0; i < $nc($JPEGMetadataFormatResources::commonContents)->length; ++i) {
		$nc(commonCopy->get(i))->set(0, $nc($nc($JPEGMetadataFormatResources::commonContents)->get(i))->get(0));
		$nc(commonCopy->get(i))->set(1, $nc($nc($JPEGMetadataFormatResources::commonContents)->get(i))->get(1));
	}
	return commonCopy;
}

JPEGStreamMetadataFormatResources::JPEGStreamMetadataFormatResources() {
}

$Class* JPEGStreamMetadataFormatResources::load$($String* name, bool initialize) {
	$loadClass(JPEGStreamMetadataFormatResources, name, initialize, &_JPEGStreamMetadataFormatResources_ClassInfo_, allocate$JPEGStreamMetadataFormatResources);
	return class$;
}

$Class* JPEGStreamMetadataFormatResources::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com