#include <com/sun/java/swing/plaf/motif/MotifMenuMouseListener.h>

#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/MenuSelectionManager.h>
#include <jcpp.h>

using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$MethodInfo _MotifMenuMouseListener_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MotifMenuMouseListener::*)()>(&MotifMenuMouseListener::init$))},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MotifMenuMouseListener_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifMenuMouseListener",
	"java.awt.event.MouseAdapter",
	nullptr,
	nullptr,
	_MotifMenuMouseListener_MethodInfo_
};

$Object* allocate$MotifMenuMouseListener($Class* clazz) {
	return $of($alloc(MotifMenuMouseListener));
}

void MotifMenuMouseListener::init$() {
	$MouseAdapter::init$();
}

void MotifMenuMouseListener::mousePressed($MouseEvent* e) {
	$nc($($MenuSelectionManager::defaultManager()))->processMouseEvent(e);
}

void MotifMenuMouseListener::mouseReleased($MouseEvent* e) {
	$nc($($MenuSelectionManager::defaultManager()))->processMouseEvent(e);
}

void MotifMenuMouseListener::mouseEntered($MouseEvent* e) {
	$nc($($MenuSelectionManager::defaultManager()))->processMouseEvent(e);
}

void MotifMenuMouseListener::mouseExited($MouseEvent* e) {
	$nc($($MenuSelectionManager::defaultManager()))->processMouseEvent(e);
}

MotifMenuMouseListener::MotifMenuMouseListener() {
}

$Class* MotifMenuMouseListener::load$($String* name, bool initialize) {
	$loadClass(MotifMenuMouseListener, name, initialize, &_MotifMenuMouseListener_ClassInfo_, allocate$MotifMenuMouseListener);
	return class$;
}

$Class* MotifMenuMouseListener::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com