#include <java/awt/event/MouseAdapter.h>

#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _MouseAdapter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(MouseAdapter::*)()>(&MouseAdapter::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseWheelMoved", "(Ljava/awt/event/MouseWheelEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MouseAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.event.MouseAdapter",
	"java.lang.Object",
	"java.awt.event.MouseListener,java.awt.event.MouseWheelListener,java.awt.event.MouseMotionListener",
	nullptr,
	_MouseAdapter_MethodInfo_
};

$Object* allocate$MouseAdapter($Class* clazz) {
	return $of($alloc(MouseAdapter));
}

int32_t MouseAdapter::hashCode() {
	 return this->$MouseListener::hashCode();
}

bool MouseAdapter::equals(Object$* arg0) {
	 return this->$MouseListener::equals(arg0);
}

$Object* MouseAdapter::clone() {
	 return this->$MouseListener::clone();
}

$String* MouseAdapter::toString() {
	 return this->$MouseListener::toString();
}

void MouseAdapter::finalize() {
	this->$MouseListener::finalize();
}

void MouseAdapter::init$() {
}

void MouseAdapter::mouseClicked($MouseEvent* e) {
}

void MouseAdapter::mousePressed($MouseEvent* e) {
}

void MouseAdapter::mouseReleased($MouseEvent* e) {
}

void MouseAdapter::mouseEntered($MouseEvent* e) {
}

void MouseAdapter::mouseExited($MouseEvent* e) {
}

void MouseAdapter::mouseWheelMoved($MouseWheelEvent* e) {
}

void MouseAdapter::mouseDragged($MouseEvent* e) {
}

void MouseAdapter::mouseMoved($MouseEvent* e) {
}

MouseAdapter::MouseAdapter() {
}

$Class* MouseAdapter::load$($String* name, bool initialize) {
	$loadClass(MouseAdapter, name, initialize, &_MouseAdapter_ClassInfo_, allocate$MouseAdapter);
	return class$;
}

$Class* MouseAdapter::class$ = nullptr;

		} // event
	} // awt
} // java