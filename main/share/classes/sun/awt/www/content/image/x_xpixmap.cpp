#include <sun/awt/www/content/image/x_xpixmap.h>

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

$MethodInfo _x_xpixmap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(x_xpixmap::*)()>(&x_xpixmap::init$))},
	{"getContent", "(Ljava/net/URLConnection;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getContent", "(Ljava/net/URLConnection;[Ljava/lang/Class;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _x_xpixmap_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.www.content.image.x_xpixmap",
	"java.net.ContentHandler",
	nullptr,
	nullptr,
	_x_xpixmap_MethodInfo_
};

$Object* allocate$x_xpixmap($Class* clazz) {
	return $of($alloc(x_xpixmap));
}

void x_xpixmap::init$() {
	$ContentHandler::init$();
}

$Object* x_xpixmap::getContent($URLConnection* urlc) {
	return $of($new($URLImageSource, urlc));
}

$Object* x_xpixmap::getContent($URLConnection* urlc, $ClassArray* classes) {
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

x_xpixmap::x_xpixmap() {
}

$Class* x_xpixmap::load$($String* name, bool initialize) {
	$loadClass(x_xpixmap, name, initialize, &_x_xpixmap_ClassInfo_, allocate$x_xpixmap);
	return class$;
}

$Class* x_xpixmap::class$ = nullptr;

				} // image
			} // content
		} // www
	} // awt
} // sun