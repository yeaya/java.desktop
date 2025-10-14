#include <javax/swing/event/MouseInputListener.h>

#include <java/awt/event/MouseListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _MouseInputListener_MethodInfo_[] = {
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$ClassInfo _MouseInputListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.MouseInputListener",
	nullptr,
	"java.awt.event.MouseListener,java.awt.event.MouseMotionListener",
	nullptr,
	_MouseInputListener_MethodInfo_
};

$Object* allocate$MouseInputListener($Class* clazz) {
	return $of($alloc(MouseInputListener));
}

int32_t MouseInputListener::hashCode() {
	 return this->$MouseListener::hashCode();
}

bool MouseInputListener::equals(Object$* arg0) {
	 return this->$MouseListener::equals(arg0);
}

$Object* MouseInputListener::clone() {
	 return this->$MouseListener::clone();
}

$String* MouseInputListener::toString() {
	 return this->$MouseListener::toString();
}

void MouseInputListener::finalize() {
	this->$MouseListener::finalize();
}

$Class* MouseInputListener::load$($String* name, bool initialize) {
	$loadClass(MouseInputListener, name, initialize, &_MouseInputListener_ClassInfo_, allocate$MouseInputListener);
	return class$;
}

$Class* MouseInputListener::class$ = nullptr;

		} // event
	} // swing
} // javax