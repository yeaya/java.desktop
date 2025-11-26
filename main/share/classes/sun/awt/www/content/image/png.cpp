#include <sun/awt/www/content/image/png.h>

#include <java/awt/Image.h>
#include <java/awt/Toolkit.h>
#include <java/awt/image/ImageProducer.h>
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

$MethodInfo _png_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(png::*)()>(&png::init$))},
	{"getContent", "(Ljava/net/URLConnection;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getContent", "(Ljava/net/URLConnection;[Ljava/lang/Class;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _png_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.www.content.image.png",
	"java.net.ContentHandler",
	nullptr,
	nullptr,
	_png_MethodInfo_
};

$Object* allocate$png($Class* clazz) {
	return $of($alloc(png));
}

void png::init$() {
	$ContentHandler::init$();
}

$Object* png::getContent($URLConnection* urlc) {
	return $of($new($URLImageSource, urlc));
}

$Object* png::getContent($URLConnection* urlc, $ClassArray* classes) {
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

png::png() {
}

$Class* png::load$($String* name, bool initialize) {
	$loadClass(png, name, initialize, &_png_ClassInfo_, allocate$png);
	return class$;
}

$Class* png::class$ = nullptr;

				} // image
			} // content
		} // www
	} // awt
} // sun