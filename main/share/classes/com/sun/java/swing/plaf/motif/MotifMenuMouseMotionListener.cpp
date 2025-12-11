#include <com/sun/java/swing/plaf/motif/MotifMenuMouseMotionListener.h>

#include <java/awt/event/MouseEvent.h>
#include <javax/swing/MenuSelectionManager.h>
#include <jcpp.h>

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

$MethodInfo _MotifMenuMouseMotionListener_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MotifMenuMouseMotionListener::*)()>(&MotifMenuMouseMotionListener::init$))},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MotifMenuMouseMotionListener_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifMenuMouseMotionListener",
	"java.lang.Object",
	"java.awt.event.MouseMotionListener",
	nullptr,
	_MotifMenuMouseMotionListener_MethodInfo_
};

$Object* allocate$MotifMenuMouseMotionListener($Class* clazz) {
	return $of($alloc(MotifMenuMouseMotionListener));
}

void MotifMenuMouseMotionListener::init$() {
}

void MotifMenuMouseMotionListener::mouseDragged($MouseEvent* e) {
	$nc($($MenuSelectionManager::defaultManager()))->processMouseEvent(e);
}

void MotifMenuMouseMotionListener::mouseMoved($MouseEvent* e) {
	$nc($($MenuSelectionManager::defaultManager()))->processMouseEvent(e);
}

MotifMenuMouseMotionListener::MotifMenuMouseMotionListener() {
}

$Class* MotifMenuMouseMotionListener::load$($String* name, bool initialize) {
	$loadClass(MotifMenuMouseMotionListener, name, initialize, &_MotifMenuMouseMotionListener_ClassInfo_, allocate$MotifMenuMouseMotionListener);
	return class$;
}

$Class* MotifMenuMouseMotionListener::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com