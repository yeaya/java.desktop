#include <javax/imageio/event/IIOWriteWarningListener.h>

#include <javax/imageio/ImageWriter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $ImageWriter = ::javax::imageio::ImageWriter;

namespace javax {
	namespace imageio {
		namespace event {

$MethodInfo _IIOWriteWarningListener_MethodInfo_[] = {
	{"warningOccurred", "(Ljavax/imageio/ImageWriter;ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _IIOWriteWarningListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.imageio.event.IIOWriteWarningListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_IIOWriteWarningListener_MethodInfo_
};

$Object* allocate$IIOWriteWarningListener($Class* clazz) {
	return $of($alloc(IIOWriteWarningListener));
}

$Class* IIOWriteWarningListener::load$($String* name, bool initialize) {
	$loadClass(IIOWriteWarningListener, name, initialize, &_IIOWriteWarningListener_ClassInfo_, allocate$IIOWriteWarningListener);
	return class$;
}

$Class* IIOWriteWarningListener::class$ = nullptr;

		} // event
	} // imageio
} // javax