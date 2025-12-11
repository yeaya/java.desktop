#include <com/apple/eawt/event/GestureUtilities.h>

#include <com/apple/eawt/event/GestureHandler.h>
#include <com/apple/eawt/event/GestureListener.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $GestureHandler = ::com::apple::eawt::event::GestureHandler;
using $GestureListener = ::com::apple::eawt::event::GestureListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $JComponent = ::javax::swing::JComponent;

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

$MethodInfo _GestureUtilities_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GestureUtilities::*)()>(&GestureUtilities::init$))},
	{"addGestureListenerTo", "(Ljavax/swing/JComponent;Lcom/apple/eawt/event/GestureListener;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JComponent*,$GestureListener*)>(&GestureUtilities::addGestureListenerTo))},
	{"removeGestureListenerFrom", "(Ljavax/swing/JComponent;Lcom/apple/eawt/event/GestureListener;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JComponent*,$GestureListener*)>(&GestureUtilities::removeGestureListenerFrom))},
	{}
};

$ClassInfo _GestureUtilities_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.apple.eawt.event.GestureUtilities",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GestureUtilities_MethodInfo_
};

$Object* allocate$GestureUtilities($Class* clazz) {
	return $of($alloc(GestureUtilities));
}

void GestureUtilities::init$() {
}

void GestureUtilities::addGestureListenerTo($JComponent* component, $GestureListener* listener) {
	if (component == nullptr || listener == nullptr) {
		$throwNew($NullPointerException);
	}
	$GestureHandler::addGestureListenerTo(component, listener);
}

void GestureUtilities::removeGestureListenerFrom($JComponent* component, $GestureListener* listener) {
	if (component == nullptr || listener == nullptr) {
		$throwNew($NullPointerException);
	}
	$GestureHandler::removeGestureListenerFrom(component, listener);
}

GestureUtilities::GestureUtilities() {
}

$Class* GestureUtilities::load$($String* name, bool initialize) {
	$loadClass(GestureUtilities, name, initialize, &_GestureUtilities_ClassInfo_, allocate$GestureUtilities);
	return class$;
}

$Class* GestureUtilities::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com