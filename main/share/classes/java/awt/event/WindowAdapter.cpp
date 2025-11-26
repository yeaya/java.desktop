#include <java/awt/event/WindowAdapter.h>

#include <java/awt/event/WindowEvent.h>
#include <java/awt/event/WindowListener.h>
#include <jcpp.h>

using $WindowEvent = ::java::awt::event::WindowEvent;
using $WindowFocusListener = ::java::awt::event::WindowFocusListener;
using $WindowListener = ::java::awt::event::WindowListener;
using $WindowStateListener = ::java::awt::event::WindowStateListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _WindowAdapter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(WindowAdapter::*)()>(&WindowAdapter::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"windowActivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowClosed", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowDeactivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowDeiconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowGainedFocus", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowIconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowLostFocus", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowOpened", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowStateChanged", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _WindowAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.event.WindowAdapter",
	"java.lang.Object",
	"java.awt.event.WindowListener,java.awt.event.WindowStateListener,java.awt.event.WindowFocusListener",
	nullptr,
	_WindowAdapter_MethodInfo_
};

$Object* allocate$WindowAdapter($Class* clazz) {
	return $of($alloc(WindowAdapter));
}

int32_t WindowAdapter::hashCode() {
	 return this->$WindowListener::hashCode();
}

bool WindowAdapter::equals(Object$* arg0) {
	 return this->$WindowListener::equals(arg0);
}

$Object* WindowAdapter::clone() {
	 return this->$WindowListener::clone();
}

$String* WindowAdapter::toString() {
	 return this->$WindowListener::toString();
}

void WindowAdapter::finalize() {
	this->$WindowListener::finalize();
}

void WindowAdapter::init$() {
}

void WindowAdapter::windowOpened($WindowEvent* e) {
}

void WindowAdapter::windowClosing($WindowEvent* e) {
}

void WindowAdapter::windowClosed($WindowEvent* e) {
}

void WindowAdapter::windowIconified($WindowEvent* e) {
}

void WindowAdapter::windowDeiconified($WindowEvent* e) {
}

void WindowAdapter::windowActivated($WindowEvent* e) {
}

void WindowAdapter::windowDeactivated($WindowEvent* e) {
}

void WindowAdapter::windowStateChanged($WindowEvent* e) {
}

void WindowAdapter::windowGainedFocus($WindowEvent* e) {
}

void WindowAdapter::windowLostFocus($WindowEvent* e) {
}

WindowAdapter::WindowAdapter() {
}

$Class* WindowAdapter::load$($String* name, bool initialize) {
	$loadClass(WindowAdapter, name, initialize, &_WindowAdapter_ClassInfo_, allocate$WindowAdapter);
	return class$;
}

$Class* WindowAdapter::class$ = nullptr;

		} // event
	} // awt
} // java