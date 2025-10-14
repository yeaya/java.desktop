#include <javax/imageio/event/IIOWriteProgressListener.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/ImageWriter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $ImageWriter = ::javax::imageio::ImageWriter;

namespace javax {
	namespace imageio {
		namespace event {

$MethodInfo _IIOWriteProgressListener_MethodInfo_[] = {
	{"imageComplete", "(Ljavax/imageio/ImageWriter;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"imageProgress", "(Ljavax/imageio/ImageWriter;F)V", nullptr, $PUBLIC | $ABSTRACT},
	{"imageStarted", "(Ljavax/imageio/ImageWriter;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"thumbnailComplete", "(Ljavax/imageio/ImageWriter;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"thumbnailProgress", "(Ljavax/imageio/ImageWriter;F)V", nullptr, $PUBLIC | $ABSTRACT},
	{"thumbnailStarted", "(Ljavax/imageio/ImageWriter;II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"writeAborted", "(Ljavax/imageio/ImageWriter;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _IIOWriteProgressListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.imageio.event.IIOWriteProgressListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_IIOWriteProgressListener_MethodInfo_
};

$Object* allocate$IIOWriteProgressListener($Class* clazz) {
	return $of($alloc(IIOWriteProgressListener));
}

$Class* IIOWriteProgressListener::load$($String* name, bool initialize) {
	$loadClass(IIOWriteProgressListener, name, initialize, &_IIOWriteProgressListener_ClassInfo_, allocate$IIOWriteProgressListener);
	return class$;
}

$Class* IIOWriteProgressListener::class$ = nullptr;

		} // event
	} // imageio
} // javax