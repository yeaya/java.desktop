#include <javax/swing/JMenuItem$MenuItemFocusListener.h>

#include <java/awt/Component.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/JMenuItem.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JMenuItem = ::javax::swing::JMenuItem;

namespace javax {
	namespace swing {

$MethodInfo _JMenuItem$MenuItemFocusListener_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(JMenuItem$MenuItemFocusListener::*)()>(&JMenuItem$MenuItemFocusListener::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JMenuItem$MenuItemFocusListener_InnerClassesInfo_[] = {
	{"javax.swing.JMenuItem$MenuItemFocusListener", "javax.swing.JMenuItem", "MenuItemFocusListener", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JMenuItem$MenuItemFocusListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JMenuItem$MenuItemFocusListener",
	"java.lang.Object",
	"java.awt.event.FocusListener,java.io.Serializable",
	nullptr,
	_JMenuItem$MenuItemFocusListener_MethodInfo_,
	nullptr,
	nullptr,
	_JMenuItem$MenuItemFocusListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JMenuItem"
};

$Object* allocate$JMenuItem$MenuItemFocusListener($Class* clazz) {
	return $of($alloc(JMenuItem$MenuItemFocusListener));
}

int32_t JMenuItem$MenuItemFocusListener::hashCode() {
	 return this->$FocusListener::hashCode();
}

bool JMenuItem$MenuItemFocusListener::equals(Object$* arg0) {
	 return this->$FocusListener::equals(arg0);
}

$Object* JMenuItem$MenuItemFocusListener::clone() {
	 return this->$FocusListener::clone();
}

$String* JMenuItem$MenuItemFocusListener::toString() {
	 return this->$FocusListener::toString();
}

void JMenuItem$MenuItemFocusListener::finalize() {
	this->$FocusListener::finalize();
}

void JMenuItem$MenuItemFocusListener::init$() {
}

void JMenuItem$MenuItemFocusListener::focusGained($FocusEvent* event) {
}

void JMenuItem$MenuItemFocusListener::focusLost($FocusEvent* event) {
	$var($JMenuItem, mi, $cast($JMenuItem, $nc(event)->getSource()));
	if ($nc(mi)->isFocusPainted()) {
		mi->repaint();
	}
}

JMenuItem$MenuItemFocusListener::JMenuItem$MenuItemFocusListener() {
}

$Class* JMenuItem$MenuItemFocusListener::load$($String* name, bool initialize) {
	$loadClass(JMenuItem$MenuItemFocusListener, name, initialize, &_JMenuItem$MenuItemFocusListener_ClassInfo_, allocate$JMenuItem$MenuItemFocusListener);
	return class$;
}

$Class* JMenuItem$MenuItemFocusListener::class$ = nullptr;

	} // swing
} // javax