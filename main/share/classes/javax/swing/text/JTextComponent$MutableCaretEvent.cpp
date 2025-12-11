#include <javax/swing/text/JTextComponent$MutableCaretEvent.h>

#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/event/CaretEvent.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef FOCUSED_COMPONENT

using $FocusEvent = ::java::awt::event::FocusEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CaretEvent = ::javax::swing::event::CaretEvent;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $Caret = ::javax::swing::text::Caret;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _JTextComponent$MutableCaretEvent_FieldInfo_[] = {
	{"dragActive", "Z", nullptr, $PRIVATE, $field(JTextComponent$MutableCaretEvent, dragActive)},
	{"dot", "I", nullptr, $PRIVATE, $field(JTextComponent$MutableCaretEvent, dot)},
	{"mark", "I", nullptr, $PRIVATE, $field(JTextComponent$MutableCaretEvent, mark)},
	{}
};

$MethodInfo _JTextComponent$MutableCaretEvent_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/JTextComponent;)V", nullptr, 0, $method(static_cast<void(JTextComponent$MutableCaretEvent::*)($JTextComponent*)>(&JTextComponent$MutableCaretEvent::init$))},
	{"fire", "()V", nullptr, $FINAL, $method(static_cast<void(JTextComponent$MutableCaretEvent::*)()>(&JTextComponent$MutableCaretEvent::fire))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"getDot", "()I", nullptr, $PUBLIC | $FINAL},
	{"getMark", "()I", nullptr, $PUBLIC | $FINAL},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $FINAL},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $FINAL},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $FINAL},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $FINAL},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $FINAL},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC | $FINAL},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _JTextComponent$MutableCaretEvent_InnerClassesInfo_[] = {
	{"javax.swing.text.JTextComponent$MutableCaretEvent", "javax.swing.text.JTextComponent", "MutableCaretEvent", $STATIC},
	{}
};

$ClassInfo _JTextComponent$MutableCaretEvent_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.JTextComponent$MutableCaretEvent",
	"javax.swing.event.CaretEvent",
	"javax.swing.event.ChangeListener,java.awt.event.FocusListener,java.awt.event.MouseListener",
	_JTextComponent$MutableCaretEvent_FieldInfo_,
	_JTextComponent$MutableCaretEvent_MethodInfo_,
	nullptr,
	nullptr,
	_JTextComponent$MutableCaretEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.JTextComponent"
};

$Object* allocate$JTextComponent$MutableCaretEvent($Class* clazz) {
	return $of($alloc(JTextComponent$MutableCaretEvent));
}

int32_t JTextComponent$MutableCaretEvent::hashCode() {
	 return this->$CaretEvent::hashCode();
}

bool JTextComponent$MutableCaretEvent::equals(Object$* arg0) {
	 return this->$CaretEvent::equals(arg0);
}

$Object* JTextComponent$MutableCaretEvent::clone() {
	 return this->$CaretEvent::clone();
}

void JTextComponent$MutableCaretEvent::finalize() {
	this->$CaretEvent::finalize();
}

void JTextComponent$MutableCaretEvent::init$($JTextComponent* c) {
	$CaretEvent::init$(c);
}

void JTextComponent$MutableCaretEvent::fire() {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, c, $cast($JTextComponent, getSource()));
	if (c != nullptr) {
		$var($Caret, caret, c->getCaret());
		this->dot = $nc(caret)->getDot();
		this->mark = caret->getMark();
		c->fireCaretUpdate(this);
	}
}

$String* JTextComponent$MutableCaretEvent::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"dot="_s, $$str(this->dot), ",mark="_s, $$str(this->mark)});
}

int32_t JTextComponent$MutableCaretEvent::getDot() {
	return this->dot;
}

int32_t JTextComponent$MutableCaretEvent::getMark() {
	return this->mark;
}

void JTextComponent$MutableCaretEvent::stateChanged($ChangeEvent* e) {
	if (!this->dragActive) {
		fire();
	}
}

void JTextComponent$MutableCaretEvent::focusGained($FocusEvent* fe) {
	$useLocalCurrentObjectStackCache();
	$init($JTextComponent);
	$nc($($AppContext::getAppContext()))->put($JTextComponent::FOCUSED_COMPONENT, $($nc(fe)->getSource()));
}

void JTextComponent$MutableCaretEvent::focusLost($FocusEvent* fe) {
}

void JTextComponent$MutableCaretEvent::mousePressed($MouseEvent* e) {
	this->dragActive = true;
}

void JTextComponent$MutableCaretEvent::mouseReleased($MouseEvent* e) {
	this->dragActive = false;
	fire();
}

void JTextComponent$MutableCaretEvent::mouseClicked($MouseEvent* e) {
}

void JTextComponent$MutableCaretEvent::mouseEntered($MouseEvent* e) {
}

void JTextComponent$MutableCaretEvent::mouseExited($MouseEvent* e) {
}

JTextComponent$MutableCaretEvent::JTextComponent$MutableCaretEvent() {
}

$Class* JTextComponent$MutableCaretEvent::load$($String* name, bool initialize) {
	$loadClass(JTextComponent$MutableCaretEvent, name, initialize, &_JTextComponent$MutableCaretEvent_ClassInfo_, allocate$JTextComponent$MutableCaretEvent);
	return class$;
}

$Class* JTextComponent$MutableCaretEvent::class$ = nullptr;

		} // text
	} // swing
} // javax