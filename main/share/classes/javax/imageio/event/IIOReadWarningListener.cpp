#include <javax/imageio/event/IIOReadWarningListener.h>

#include <javax/imageio/ImageReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace imageio {
		namespace event {

$MethodInfo _IIOReadWarningListener_MethodInfo_[] = {
	{"warningOccurred", "(Ljavax/imageio/ImageReader;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _IIOReadWarningListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.imageio.event.IIOReadWarningListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_IIOReadWarningListener_MethodInfo_
};

$Object* allocate$IIOReadWarningListener($Class* clazz) {
	return $of($alloc(IIOReadWarningListener));
}

$Class* IIOReadWarningListener::load$($String* name, bool initialize) {
	$loadClass(IIOReadWarningListener, name, initialize, &_IIOReadWarningListener_ClassInfo_, allocate$IIOReadWarningListener);
	return class$;
}

$Class* IIOReadWarningListener::class$ = nullptr;

		} // event
	} // imageio
} // javax