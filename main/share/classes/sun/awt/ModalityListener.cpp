#include <sun/awt/ModalityListener.h>

#include <sun/awt/ModalityEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$MethodInfo _ModalityListener_MethodInfo_[] = {
	{"modalityPopped", "(Lsun/awt/ModalityEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"modalityPushed", "(Lsun/awt/ModalityEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ModalityListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.ModalityListener",
	nullptr,
	nullptr,
	nullptr,
	_ModalityListener_MethodInfo_
};

$Object* allocate$ModalityListener($Class* clazz) {
	return $of($alloc(ModalityListener));
}

$Class* ModalityListener::load$($String* name, bool initialize) {
	$loadClass(ModalityListener, name, initialize, &_ModalityListener_ClassInfo_, allocate$ModalityListener);
	return class$;
}

$Class* ModalityListener::class$ = nullptr;

	} // awt
} // sun