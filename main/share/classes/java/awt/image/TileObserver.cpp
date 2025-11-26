#include <java/awt/image/TileObserver.h>

#include <java/awt/image/WritableRenderedImage.h>
#include <jcpp.h>

using $WritableRenderedImage = ::java::awt::image::WritableRenderedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

$MethodInfo _TileObserver_MethodInfo_[] = {
	{"tileUpdate", "(Ljava/awt/image/WritableRenderedImage;IIZ)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TileObserver_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.image.TileObserver",
	nullptr,
	nullptr,
	nullptr,
	_TileObserver_MethodInfo_
};

$Object* allocate$TileObserver($Class* clazz) {
	return $of($alloc(TileObserver));
}

$Class* TileObserver::load$($String* name, bool initialize) {
	$loadClass(TileObserver, name, initialize, &_TileObserver_ClassInfo_, allocate$TileObserver);
	return class$;
}

$Class* TileObserver::class$ = nullptr;

		} // image
	} // awt
} // java