#include <sun/awt/www/content/image/x_xbitmap.h>

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

$MethodInfo _x_xbitmap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(x_xbitmap::*)()>(&x_xbitmap::init$))},
	{"getContent", "(Ljava/net/URLConnection;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getContent", "(Ljava/net/URLConnection;[Ljava/lang/Class;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _x_xbitmap_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.www.content.image.x_xbitmap",
	"java.net.ContentHandler",
	nullptr,
	nullptr,
	_x_xbitmap_MethodInfo_
};

$Object* allocate$x_xbitmap($Class* clazz) {
	return $of($alloc(x_xbitmap));
}

void x_xbitmap::init$() {
	$ContentHandler::init$();
}

$Object* x_xbitmap::getContent($URLConnection* urlc) {
	return $of($new($URLImageSource, urlc));
}

$Object* x_xbitmap::getContent($URLConnection* urlc, $ClassArray* classes) {
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

x_xbitmap::x_xbitmap() {
}

$Class* x_xbitmap::load$($String* name, bool initialize) {
	$loadClass(x_xbitmap, name, initialize, &_x_xbitmap_ClassInfo_, allocate$x_xbitmap);
	return class$;
}

$Class* x_xbitmap::class$ = nullptr;

				} // image
			} // content
		} // www
	} // awt
} // sun