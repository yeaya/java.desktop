#include <javax/swing/DefaultCellEditor$EditorDelegate.h>

#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/DefaultCellEditor.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ItemListener = ::java::awt::event::ItemListener;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AbstractCellEditor = ::javax::swing::AbstractCellEditor;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;

namespace javax {
	namespace swing {

$FieldInfo _DefaultCellEditor$EditorDelegate_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/DefaultCellEditor;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultCellEditor$EditorDelegate, this$0)},
	{"value", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(DefaultCellEditor$EditorDelegate, value)},
	{}
};

$MethodInfo _DefaultCellEditor$EditorDelegate_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/DefaultCellEditor;)V", nullptr, $PROTECTED, $method(static_cast<void(DefaultCellEditor$EditorDelegate::*)($DefaultCellEditor*)>(&DefaultCellEditor$EditorDelegate::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"cancelCellEditing", "()V", nullptr, $PUBLIC},
	{"getCellEditorValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isCellEditable", "(Ljava/util/EventObject;)Z", nullptr, $PUBLIC},
	{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"shouldSelectCell", "(Ljava/util/EventObject;)Z", nullptr, $PUBLIC},
	{"startCellEditing", "(Ljava/util/EventObject;)Z", nullptr, $PUBLIC},
	{"stopCellEditing", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultCellEditor$EditorDelegate_InnerClassesInfo_[] = {
	{"javax.swing.DefaultCellEditor$EditorDelegate", "javax.swing.DefaultCellEditor", "EditorDelegate", $PROTECTED},
	{}
};

$ClassInfo _DefaultCellEditor$EditorDelegate_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.DefaultCellEditor$EditorDelegate",
	"java.lang.Object",
	"java.awt.event.ActionListener,java.awt.event.ItemListener,java.io.Serializable",
	_DefaultCellEditor$EditorDelegate_FieldInfo_,
	_DefaultCellEditor$EditorDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultCellEditor$EditorDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.DefaultCellEditor"
};

$Object* allocate$DefaultCellEditor$EditorDelegate($Class* clazz) {
	return $of($alloc(DefaultCellEditor$EditorDelegate));
}

int32_t DefaultCellEditor$EditorDelegate::hashCode() {
	 return this->$ActionListener::hashCode();
}

bool DefaultCellEditor$EditorDelegate::equals(Object$* arg0) {
	 return this->$ActionListener::equals(arg0);
}

$Object* DefaultCellEditor$EditorDelegate::clone() {
	 return this->$ActionListener::clone();
}

$String* DefaultCellEditor$EditorDelegate::toString() {
	 return this->$ActionListener::toString();
}

void DefaultCellEditor$EditorDelegate::finalize() {
	this->$ActionListener::finalize();
}

void DefaultCellEditor$EditorDelegate::init$($DefaultCellEditor* this$0) {
	$set(this, this$0, this$0);
}

$Object* DefaultCellEditor$EditorDelegate::getCellEditorValue() {
	return $of(this->value);
}

void DefaultCellEditor$EditorDelegate::setValue(Object$* value) {
	$set(this, value, value);
}

bool DefaultCellEditor$EditorDelegate::isCellEditable($EventObject* anEvent) {
	if ($instanceOf($MouseEvent, anEvent)) {
		return $nc(($cast($MouseEvent, anEvent)))->getClickCount() >= this->this$0->clickCountToStart;
	}
	return true;
}

bool DefaultCellEditor$EditorDelegate::shouldSelectCell($EventObject* anEvent) {
	return true;
}

bool DefaultCellEditor$EditorDelegate::startCellEditing($EventObject* anEvent) {
	return true;
}

bool DefaultCellEditor$EditorDelegate::stopCellEditing() {
	this->this$0->fireEditingStopped();
	return true;
}

void DefaultCellEditor$EditorDelegate::cancelCellEditing() {
	this->this$0->fireEditingCanceled();
}

void DefaultCellEditor$EditorDelegate::actionPerformed($ActionEvent* e) {
	this->this$0->stopCellEditing();
}

void DefaultCellEditor$EditorDelegate::itemStateChanged($ItemEvent* e) {
	this->this$0->stopCellEditing();
}

DefaultCellEditor$EditorDelegate::DefaultCellEditor$EditorDelegate() {
}

$Class* DefaultCellEditor$EditorDelegate::load$($String* name, bool initialize) {
	$loadClass(DefaultCellEditor$EditorDelegate, name, initialize, &_DefaultCellEditor$EditorDelegate_ClassInfo_, allocate$DefaultCellEditor$EditorDelegate);
	return class$;
}

$Class* DefaultCellEditor$EditorDelegate::class$ = nullptr;

	} // swing
} // javax