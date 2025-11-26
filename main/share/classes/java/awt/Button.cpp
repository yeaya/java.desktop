#include <java/awt/Button.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTEventMulticaster.h>
#include <java/awt/Button$AccessibleAWTButton.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/peer/ButtonPeer.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/EventListener.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/ComponentFactory.h>
#include <jcpp.h>

#undef ACTION_EVENT_MASK
#undef ACTION_PERFORMED

using $ActionListenerArray = $Array<::java::awt::event::ActionListener>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTEventMulticaster = ::java::awt::AWTEventMulticaster;
using $Button$AccessibleAWTButton = ::java::awt::Button$AccessibleAWTButton;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Toolkit = ::java::awt::Toolkit;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ButtonPeer = ::java::awt::peer::ButtonPeer;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $EventListener = ::java::util::EventListener;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $ComponentFactory = ::sun::awt::ComponentFactory;

namespace java {
	namespace awt {

$NamedAttribute Button_Attribute_var$0[] = {
	{"expert", 'Z', "true"},
	{"description", 's', "The AccessibleContext associated with this Button."},
	{}
};

$CompoundAttribute _Button_MethodAnnotations_getAccessibleContext6[] = {
	{"Ljava/beans/BeanProperty;", Button_Attribute_var$0},
	{}
};

$FieldInfo _Button_FieldInfo_[] = {
	{"label", "Ljava/lang/String;", nullptr, 0, $field(Button, label)},
	{"actionCommand", "Ljava/lang/String;", nullptr, 0, $field(Button, actionCommand)},
	{"actionListener", "Ljava/awt/event/ActionListener;", nullptr, $TRANSIENT, $field(Button, actionListener)},
	{"base", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Button, base)},
	{"nameCounter", "I", nullptr, $PRIVATE | $STATIC, $staticField(Button, nameCounter)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Button, serialVersionUID)},
	{"buttonSerializedDataVersion", "I", nullptr, $PRIVATE, $field(Button, buttonSerializedDataVersion)},
	{}
};

$MethodInfo _Button_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Button::*)()>(&Button::init$)), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Button::*)($String*)>(&Button::init$)), "java.awt.HeadlessException"},
	{"addActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"constructComponentName", "()Ljava/lang/String;", nullptr, 0},
	{"eventEnabled", "(Ljava/awt/AWTEvent;)Z", nullptr, 0},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _Button_MethodAnnotations_getAccessibleContext6},
	{"getActionCommand", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getActionListeners", "()[Ljava/awt/event/ActionListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getLabel", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Button::initIDs))},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"processActionEvent", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PROTECTED},
	{"processEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PROTECTED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Button::*)($ObjectInputStream*)>(&Button::readObject)), "java.lang.ClassNotFoundException,java.io.IOException,java.awt.HeadlessException"},
	{"removeActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setActionCommand", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Button::*)($ObjectOutputStream*)>(&Button::writeObject)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_initIDs 15

$InnerClassInfo _Button_InnerClassesInfo_[] = {
	{"java.awt.Button$AccessibleAWTButton", "java.awt.Button", "AccessibleAWTButton", $PROTECTED},
	{}
};

$ClassInfo _Button_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Button",
	"java.awt.Component",
	"javax.accessibility.Accessible",
	_Button_FieldInfo_,
	_Button_MethodInfo_,
	nullptr,
	nullptr,
	_Button_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.Button$AccessibleAWTButton"
};

$Object* allocate$Button($Class* clazz) {
	return $of($alloc(Button));
}

$String* Button::toString() {
	 return this->$Component::toString();
}

int32_t Button::hashCode() {
	 return this->$Component::hashCode();
}

bool Button::equals(Object$* arg0) {
	 return this->$Component::equals(arg0);
}

$Object* Button::clone() {
	 return this->$Component::clone();
}

void Button::finalize() {
	this->$Component::finalize();
}

$String* Button::base = nullptr;
int32_t Button::nameCounter = 0;

void Button::initIDs() {
	$init(Button);
	$prepareNativeStatic(Button, initIDs, void);
	$invokeNativeStatic(Button, initIDs);
	$finishNativeStatic();
}

void Button::init$() {
	Button::init$(""_s);
}

void Button::init$($String* label) {
	$Component::init$();
	this->buttonSerializedDataVersion = 1;
	$GraphicsEnvironment::checkHeadless();
	$set(this, label, label);
}

$String* Button::constructComponentName() {
	$useLocalCurrentObjectStackCache();
	$synchronized(Button::class$) {
		$var($String, var$0, Button::base);
		return $concat(var$0, $$str(Button::nameCounter++));
	}
}

void Button::addNotify() {
	$synchronized(getTreeLock()) {
		if (this->peer == nullptr) {
			$set(this, peer, $nc($(getComponentFactory()))->createButton(this));
		}
		$Component::addNotify();
	}
}

$String* Button::getLabel() {
	return this->label;
}

void Button::setLabel($String* label) {
	bool testvalid = false;
	$synchronized(this) {
		if (label != this->label && (this->label == nullptr || !$nc(this->label)->equals(label))) {
			$set(this, label, label);
			$var($ButtonPeer, peer, $cast($ButtonPeer, this->peer));
			if (peer != nullptr) {
				peer->setLabel(label);
			}
			testvalid = true;
		}
	}
	if (testvalid) {
		invalidateIfValid();
	}
}

void Button::setActionCommand($String* command) {
	$set(this, actionCommand, command);
}

$String* Button::getActionCommand() {
	return (this->actionCommand == nullptr ? this->label : this->actionCommand);
}

void Button::addActionListener($ActionListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, actionListener, $AWTEventMulticaster::add(this->actionListener, l));
		this->newEventsOnly = true;
	}
}

void Button::removeActionListener($ActionListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, actionListener, $AWTEventMulticaster::remove(this->actionListener, l));
	}
}

$ActionListenerArray* Button::getActionListeners() {
	$synchronized(this) {
		$load($ActionListener);
		return $fcast($ActionListenerArray, getListeners($ActionListener::class$));
	}
}

$EventListenerArray* Button::getListeners($Class* listenerType) {
	$var($EventListener, l, nullptr);
	$load($ActionListener);
	if (listenerType == $ActionListener::class$) {
		$assign(l, this->actionListener);
	} else {
		return $Component::getListeners(listenerType);
	}
	return $AWTEventMulticaster::getListeners(l, listenerType);
}

bool Button::eventEnabled($AWTEvent* e) {
	if ($nc(e)->id == $ActionEvent::ACTION_PERFORMED) {
		if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::ACTION_EVENT_MASK)) != 0 || this->actionListener != nullptr) {
			return true;
		}
		return false;
	}
	return $Component::eventEnabled(e);
}

void Button::processEvent($AWTEvent* e) {
	if ($instanceOf($ActionEvent, e)) {
		processActionEvent($cast($ActionEvent, e));
		return;
	}
	$Component::processEvent(e);
}

void Button::processActionEvent($ActionEvent* e) {
	$var($ActionListener, listener, this->actionListener);
	if (listener != nullptr) {
		listener->actionPerformed(e);
	}
}

$String* Button::paramString() {
	return $str({$($Component::paramString()), ",label="_s, this->label});
}

void Button::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	$init($Component);
	$AWTEventMulticaster::save(s, $Component::actionListenerK, this->actionListener);
	s->writeObject(nullptr);
}

void Button::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$GraphicsEnvironment::checkHeadless();
	$nc(s)->defaultReadObject();
	$var($Object, keyOrNull, nullptr);
	while (nullptr != ($assign(keyOrNull, s->readObject()))) {
		$var($String, key, $nc(($cast($String, keyOrNull)))->intern());
		$init($Component);
		if ($Component::actionListenerK == key) {
			addActionListener(($cast($ActionListener, $(s->readObject()))));
		} else {
			s->readObject();
		}
	}
}

$AccessibleContext* Button::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($Button$AccessibleAWTButton, this));
	}
	return this->accessibleContext;
}

void clinit$Button($Class* class$) {
	$assignStatic(Button::base, "button"_s);
	Button::nameCounter = 0;
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			Button::initIDs();
		}
	}
}

Button::Button() {
}

$Class* Button::load$($String* name, bool initialize) {
	$loadClass(Button, name, initialize, &_Button_ClassInfo_, clinit$Button, allocate$Button);
	return class$;
}

$Class* Button::class$ = nullptr;

	} // awt
} // java