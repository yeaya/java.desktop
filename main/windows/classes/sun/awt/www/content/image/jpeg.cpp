#include <sun/awt/www/content/image/jpeg.h>

#include <java/awt/Image.h>
#include <java/awt/Toolkit.h>
#include <java/awt/image/ImageProducer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/ContentHandler.h>
#include <java/net/URLConnection.h>
#include <sun/awt/image/InputStreamImageSource.h>
#include <sun/awt/image/URLImageSource.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $Toolkit = ::java::awt::Toolkit;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ContentHandler = ::java::net::ContentHandler;
using $URLConnection = ::java::net::URLConnection;
using $InputStreamImageSource = ::sun::awt::image::InputStreamImageSource;
using $URLImageSource = ::sun::awt::image::URLImageSource;

namespace sun {
	namespace awt {
		namespace www {
			namespace content {
				namespace image {

$MethodInfo _jpeg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(jpeg::*)()>(&jpeg::init$))},
	{"getContent", "(Ljava/net/URLConnection;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getContent", "(Ljava/net/URLConnection;[Ljava/lang/Class;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _jpeg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.www.content.image.jpeg",
	"java.net.ContentHandler",
	nullptr,
	nullptr,
	_jpeg_MethodInfo_
};

$Object* allocate$jpeg($Class* clazz) {
	return $of($alloc(jpeg));
}

void jpeg::init$() {
	$ContentHandler::init$();
}

$Object* jpeg::getContent($URLConnection* urlc) {
	return $of($new($URLImageSource, urlc));
}

$Object* jpeg::getContent($URLConnection* urlc, $ClassArray* classes) {
	$useLocalCurrentObjectStackCache();
	$var($ClassArray, cls, classes);
	for (int32_t i = 0; i < $nc(cls)->length; ++i) {
		$load($URLImageSource);
		if ($nc(cls->get(i))->isAssignableFrom($URLImageSource::class$)) {
			return $of($new($URLImageSource, urlc));
		}
		$load($Image);
		if ($nc(cls->get(i))->isAssignableFrom($Image::class$)) {
			$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
			return $of($nc(tk)->createImage(static_cast<$ImageProducer*>($$new($URLImageSource, urlc))));
		}
	}
	return $of(nullptr);
}

jpeg::jpeg() {
}

$Class* jpeg::load$($String* name, bool initialize) {
	$loadClass(jpeg, name, initialize, &_jpeg_ClassInfo_, allocate$jpeg);
	return class$;
}

$Class* jpeg::class$ = nullptr;

				} // image
			} // content
		} // www
	} // awt
} // sun