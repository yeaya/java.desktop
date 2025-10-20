#include <sun/awt/www/content/image/gif.h>

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

$MethodInfo _gif_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(gif::*)()>(&gif::init$))},
	{"getContent", "(Ljava/net/URLConnection;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getContent", "(Ljava/net/URLConnection;[Ljava/lang/Class;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _gif_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.www.content.image.gif",
	"java.net.ContentHandler",
	nullptr,
	nullptr,
	_gif_MethodInfo_
};

$Object* allocate$gif($Class* clazz) {
	return $of($alloc(gif));
}

void gif::init$() {
	$ContentHandler::init$();
}

$Object* gif::getContent($URLConnection* urlc) {
	return $of($new($URLImageSource, urlc));
}

$Object* gif::getContent($URLConnection* urlc, $ClassArray* classes) {
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

gif::gif() {
}

$Class* gif::load$($String* name, bool initialize) {
	$loadClass(gif, name, initialize, &_gif_ClassInfo_, allocate$gif);
	return class$;
}

$Class* gif::class$ = nullptr;

				} // image
			} // content
		} // www
	} // awt
} // sun