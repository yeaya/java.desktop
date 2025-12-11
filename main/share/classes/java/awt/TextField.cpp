#include <java/awt/TextField.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTEventMulticaster.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/TextComponent$AccessibleAWTTextComponent.h>
#include <java/awt/TextComponent.h>
#include <java/awt/TextField$AccessibleAWTTextField.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/TextComponentPeer.h>
#include <java/awt/peer/TextFieldPeer.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/CharSequence.h>
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
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Dimension = ::java::awt::Dimension;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $TextComponent = ::java::awt::TextComponent;
using $TextComponent$AccessibleAWTTextComponent = ::java::awt::TextComponent$AccessibleAWTTextComponent;
using $TextField$AccessibleAWTTextField = ::java::awt::TextField$AccessibleAWTTextField;
using $Toolkit = ::java::awt::Toolkit;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $TextComponentPeer = ::java::awt::peer::TextComponentPeer;
using $TextFieldPeer = ::java::awt::peer::TextFieldPeer;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $ComponentFactory = ::sun::awt::ComponentFactory;

namespace java {
	namespace awt {

$CompoundAttribute _TextField_MethodAnnotations_minimumSize19[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _TextField_MethodAnnotations_minimumSize20[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _TextField_MethodAnnotations_preferredSize22[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _TextField_MethodAnnotations_preferredSize23[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _TextField_MethodAnnotations_setEchoCharacter31[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _TextField_FieldInfo_[] = {
	{"columns", "I", nullptr, 0, $field(TextField, columns)},
	{"echoChar", "C", nullptr, 0, $field(TextField, echoChar)},
	{"actionListener", "Ljava/awt/event/ActionListener;", nullptr, $TRANSIENT, $field(TextField, actionListener)},
	{"base", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TextField, base)},
	{"nameCounter", "I", nullptr, $PRIVATE | $STATIC, $staticField(TextField, nameCounter)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TextField, serialVersionUID)},
	{"textFieldSerializedDataVersion", "I", nullptr, $PRIVATE, $field(TextField, textFieldSerializedDataVersion)},
	{}
};

$MethodInfo _TextField_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TextField::*)()>(&TextField::init$)), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TextField::*)($String*)>(&TextField::init$)), "java.awt.HeadlessException"},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(TextField::*)(int32_t)>(&TextField::init$)), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(TextField::*)($String*,int32_t)>(&TextField::init$)), "java.awt.HeadlessException"},
	{"addActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"constructComponentName", "()Ljava/lang/String;", nullptr, 0},
	{"echoCharIsSet", "()Z", nullptr, $PUBLIC},
	{"eventEnabled", "(Ljava/awt/AWTEvent;)Z", nullptr, 0},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getActionListeners", "()[Ljava/awt/event/ActionListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getColumns", "()I", nullptr, $PUBLIC},
	{"getEchoChar", "()C", nullptr, $PUBLIC},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getMinimumSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&TextField::initIDs))},
	{"minimumSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _TextField_MethodAnnotations_minimumSize19},
	{"minimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _TextField_MethodAnnotations_minimumSize20},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"preferredSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _TextField_MethodAnnotations_preferredSize22},
	{"preferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _TextField_MethodAnnotations_preferredSize23},
	{"processActionEvent", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PROTECTED},
	{"processEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PROTECTED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(TextField::*)($ObjectInputStream*)>(&TextField::readObject)), "java.lang.ClassNotFoundException,java.io.IOException,java.awt.HeadlessException"},
	{"removeActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"replaceEOL", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&TextField::replaceEOL))},
	{"setColumns", "(I)V", nullptr, $PUBLIC},
	{"setEchoChar", "(C)V", nullptr, $PUBLIC},
	{"setEchoCharacter", "(C)V", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, nullptr, nullptr, nullptr, _TextField_MethodAnnotations_setEchoCharacter31},
	{"setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(TextField::*)($ObjectOutputStream*)>(&TextField::writeObject)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_initIDs 18

$InnerClassInfo _TextField_InnerClassesInfo_[] = {
	{"java.awt.TextField$AccessibleAWTTextField", "java.awt.TextField", "AccessibleAWTTextField", $PROTECTED},
	{}
};

$ClassInfo _TextField_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.TextField",
	"java.awt.TextComponent",
	nullptr,
	_TextField_FieldInfo_,
	_TextField_MethodInfo_,
	nullptr,
	nullptr,
	_TextField_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.TextField$AccessibleAWTTextField"
};

$Object* allocate$TextField($Class* clazz) {
	return $of($alloc(TextField));
}

$String* TextField::base = nullptr;
int32_t TextField::nameCounter = 0;

void TextField::initIDs() {
	$init(TextField);
	$prepareNativeStatic(TextField, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void TextField::init$() {
	TextField::init$(""_s, 0);
}

void TextField::init$($String* text) {
	TextField::init$(text, (text != nullptr) ? $nc(text)->length() : 0);
}

void TextField::init$(int32_t columns) {
	TextField::init$(""_s, columns);
}

void TextField::init$($String* text, int32_t columns) {
	$TextComponent::init$($(replaceEOL(text)));
	this->textFieldSerializedDataVersion = 1;
	this->columns = (columns >= 0) ? columns : 0;
}

$String* TextField::constructComponentName() {
	$useLocalCurrentObjectStackCache();
	$synchronized(TextField::class$) {
		$var($String, var$0, TextField::base);
		return $concat(var$0, $$str(TextField::nameCounter++));
	}
}

void TextField::addNotify() {
	$synchronized(getTreeLock()) {
		if (this->peer == nullptr) {
			$set(this, peer, $nc($(getComponentFactory()))->createTextField(this));
		}
		$TextComponent::addNotify();
	}
}

char16_t TextField::getEchoChar() {
	return this->echoChar;
}

void TextField::setEchoChar(char16_t c) {
	setEchoCharacter(c);
}

void TextField::setEchoCharacter(char16_t c) {
	$synchronized(this) {
		if (this->echoChar != c) {
			this->echoChar = c;
			$var($TextFieldPeer, peer, $cast($TextFieldPeer, this->peer));
			if (peer != nullptr) {
				peer->setEchoChar(c);
			}
		}
	}
}

void TextField::setText($String* t) {
	$TextComponent::setText($(replaceEOL(t)));
	invalidateIfValid();
}

$String* TextField::replaceEOL($String* text$renamed) {
	$init(TextField);
	$useLocalCurrentObjectStackCache();
	$var($String, text, text$renamed);
	if (text == nullptr) {
		return text;
	}
	$var($StringArray, strEOLs, $new($StringArray, {
		$($System::lineSeparator()),
		"\n"_s
	}));
	{
		$var($StringArray, arr$, strEOLs);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, eol, arr$->get(i$));
			{
				if ($nc(text)->contains(eol)) {
					$assign(text, text->replace(static_cast<$CharSequence*>(eol), static_cast<$CharSequence*>(" "_s)));
				}
			}
		}
	}
	return text;
}

bool TextField::echoCharIsSet() {
	return this->echoChar != 0;
}

int32_t TextField::getColumns() {
	return this->columns;
}

void TextField::setColumns(int32_t columns) {
	int32_t oldVal = 0;
	$synchronized(this) {
		oldVal = this->columns;
		if (columns < 0) {
			$throwNew($IllegalArgumentException, "columns less than zero."_s);
		}
		if (columns != oldVal) {
			this->columns = columns;
		}
	}
	if (columns != oldVal) {
		invalidate();
	}
}

$Dimension* TextField::getPreferredSize(int32_t columns) {
	return preferredSize(columns);
}

$Dimension* TextField::preferredSize(int32_t columns) {
	$synchronized(getTreeLock()) {
		$var($TextFieldPeer, peer, $cast($TextFieldPeer, this->peer));
		return (peer != nullptr) ? $nc(peer)->getPreferredSize(columns) : $TextComponent::preferredSize();
	}
}

$Dimension* TextField::getPreferredSize() {
	return preferredSize();
}

$Dimension* TextField::preferredSize() {
	$synchronized(getTreeLock()) {
		return (this->columns > 0) ? preferredSize(this->columns) : $TextComponent::preferredSize();
	}
}

$Dimension* TextField::getMinimumSize(int32_t columns) {
	return minimumSize(columns);
}

$Dimension* TextField::minimumSize(int32_t columns) {
	$synchronized(getTreeLock()) {
		$var($TextFieldPeer, peer, $cast($TextFieldPeer, this->peer));
		return (peer != nullptr) ? $nc(peer)->getMinimumSize(columns) : $TextComponent::minimumSize();
	}
}

$Dimension* TextField::getMinimumSize() {
	return minimumSize();
}

$Dimension* TextField::minimumSize() {
	$synchronized(getTreeLock()) {
		return (this->columns > 0) ? minimumSize(this->columns) : $TextComponent::minimumSize();
	}
}

void TextField::addActionListener($ActionListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, actionListener, $AWTEventMulticaster::add(this->actionListener, l));
		this->newEventsOnly = true;
	}
}

void TextField::removeActionListener($ActionListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, actionListener, $AWTEventMulticaster::remove(this->actionListener, l));
	}
}

$ActionListenerArray* TextField::getActionListeners() {
	$synchronized(this) {
		$load($ActionListener);
		return $fcast($ActionListenerArray, getListeners($ActionListener::class$));
	}
}

$EventListenerArray* TextField::getListeners($Class* listenerType) {
	$var($EventListener, l, nullptr);
	$load($ActionListener);
	if (listenerType == $ActionListener::class$) {
		$assign(l, this->actionListener);
	} else {
		return $TextComponent::getListeners(listenerType);
	}
	return $AWTEventMulticaster::getListeners(l, listenerType);
}

bool TextField::eventEnabled($AWTEvent* e) {
	if ($nc(e)->id == $ActionEvent::ACTION_PERFORMED) {
		if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::ACTION_EVENT_MASK)) != 0 || this->actionListener != nullptr) {
			return true;
		}
		return false;
	}
	return $TextComponent::eventEnabled(e);
}

void TextField::processEvent($AWTEvent* e) {
	if ($instanceOf($ActionEvent, e)) {
		processActionEvent($cast($ActionEvent, e));
		return;
	}
	$TextComponent::processEvent(e);
}

void TextField::processActionEvent($ActionEvent* e) {
	$var($ActionListener, listener, this->actionListener);
	if (listener != nullptr) {
		listener->actionPerformed(e);
	}
}

$String* TextField::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, str, $TextComponent::paramString());
	if (this->echoChar != 0) {
		$plusAssign(str, $$str({",echo="_s, $$str(this->echoChar)}));
	}
	return str;
}

void TextField::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	$init($Component);
	$AWTEventMulticaster::save(s, $Component::actionListenerK, this->actionListener);
	s->writeObject(nullptr);
}

void TextField::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultReadObject();
	$set(this, text, replaceEOL(this->text));
	if (this->columns < 0) {
		this->columns = 0;
	}
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

$AccessibleContext* TextField::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($TextField$AccessibleAWTTextField, this));
	}
	return this->accessibleContext;
}

void clinit$TextField($Class* class$) {
	$assignStatic(TextField::base, "textfield"_s);
	TextField::nameCounter = 0;
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			TextField::initIDs();
		}
	}
}

TextField::TextField() {
}

$Class* TextField::load$($String* name, bool initialize) {
	$loadClass(TextField, name, initialize, &_TextField_ClassInfo_, clinit$TextField, allocate$TextField);
	return class$;
}

$Class* TextField::class$ = nullptr;

	} // awt
} // java