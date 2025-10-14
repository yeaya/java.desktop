#include <javax/swing/event/MouseInputAdapter.h>

#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _MouseInputAdapter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(MouseInputAdapter::*)()>(&MouseInputAdapter::init$))},
	{"*mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"*mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"*mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"*mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"*mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"*mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"*mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MouseInputAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.event.MouseInputAdapter",
	"java.awt.event.MouseAdapter",
	"javax.swing.event.MouseInputListener",
	nullptr,
	_MouseInputAdapter_MethodInfo_
};

$Object* allocate$MouseInputAdapter($Class* clazz) {
	return $of($alloc(MouseInputAdapter));
}

void MouseInputAdapter::mouseClicked($MouseEvent* e) {
	this->$MouseAdapter::mouseClicked(e);
}

void MouseInputAdapter::mousePressed($MouseEvent* e) {
	this->$MouseAdapter::mousePressed(e);
}

void MouseInputAdapter::mouseReleased($MouseEvent* e) {
	this->$MouseAdapter::mouseReleased(e);
}

void MouseInputAdapter::mouseEntered($MouseEvent* e) {
	this->$MouseAdapter::mouseEntered(e);
}

void MouseInputAdapter::mouseExited($MouseEvent* e) {
	this->$MouseAdapter::mouseExited(e);
}

void MouseInputAdapter::mouseDragged($MouseEvent* e) {
	this->$MouseAdapter::mouseDragged(e);
}

void MouseInputAdapter::mouseMoved($MouseEvent* e) {
	this->$MouseAdapter::mouseMoved(e);
}

int32_t MouseInputAdapter::hashCode() {
	 return this->$MouseAdapter::hashCode();
}

bool MouseInputAdapter::equals(Object$* arg0) {
	 return this->$MouseAdapter::equals(arg0);
}

$Object* MouseInputAdapter::clone() {
	 return this->$MouseAdapter::clone();
}

$String* MouseInputAdapter::toString() {
	 return this->$MouseAdapter::toString();
}

void MouseInputAdapter::finalize() {
	this->$MouseAdapter::finalize();
}

void MouseInputAdapter::init$() {
	$MouseAdapter::init$();
}

MouseInputAdapter::MouseInputAdapter() {
}

$Class* MouseInputAdapter::load$($String* name, bool initialize) {
	$loadClass(MouseInputAdapter, name, initialize, &_MouseInputAdapter_ClassInfo_, allocate$MouseInputAdapter);
	return class$;
}

$Class* MouseInputAdapter::class$ = nullptr;

		} // event
	} // swing
} // javax