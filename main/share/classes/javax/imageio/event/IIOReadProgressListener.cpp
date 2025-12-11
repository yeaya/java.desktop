#include <javax/imageio/event/IIOReadProgressListener.h>

#include <javax/imageio/ImageReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace imageio {
		namespace event {

$MethodInfo _IIOReadProgressListener_MethodInfo_[] = {
	{"imageComplete", "(Ljavax/imageio/ImageReader;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"imageProgress", "(Ljavax/imageio/ImageReader;F)V", nullptr, $PUBLIC | $ABSTRACT},
	{"imageStarted", "(Ljavax/imageio/ImageReader;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"readAborted", "(Ljavax/imageio/ImageReader;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"sequenceComplete", "(Ljavax/imageio/ImageReader;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"sequenceStarted", "(Ljavax/imageio/ImageReader;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"thumbnailComplete", "(Ljavax/imageio/ImageReader;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"thumbnailProgress", "(Ljavax/imageio/ImageReader;F)V", nullptr, $PUBLIC | $ABSTRACT},
	{"thumbnailStarted", "(Ljavax/imageio/ImageReader;II)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _IIOReadProgressListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.imageio.event.IIOReadProgressListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_IIOReadProgressListener_MethodInfo_
};

$Object* allocate$IIOReadProgressListener($Class* clazz) {
	return $of($alloc(IIOReadProgressListener));
}

$Class* IIOReadProgressListener::load$($String* name, bool initialize) {
	$loadClass(IIOReadProgressListener, name, initialize, &_IIOReadProgressListener_ClassInfo_, allocate$IIOReadProgressListener);
	return class$;
}

$Class* IIOReadProgressListener::class$ = nullptr;

		} // event
	} // imageio
} // javax