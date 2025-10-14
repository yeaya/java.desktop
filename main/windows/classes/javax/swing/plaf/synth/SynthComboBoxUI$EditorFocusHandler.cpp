#include <javax/swing/plaf/synth/SynthComboBoxUI$EditorFocusHandler.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/ComboBoxEditor.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/plaf/synth/SynthComboBoxUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComboBoxEditor = ::javax::swing::ComboBoxEditor;
using $JComboBox = ::javax::swing::JComboBox;
using $SynthComboBoxUI = ::javax::swing::plaf::synth::SynthComboBoxUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthComboBoxUI$EditorFocusHandler_FieldInfo_[] = {
	{"comboBox", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<*>;", $PRIVATE, $field(SynthComboBoxUI$EditorFocusHandler, comboBox)},
	{"editor", "Ljavax/swing/ComboBoxEditor;", nullptr, $PRIVATE, $field(SynthComboBoxUI$EditorFocusHandler, editor)},
	{"editorComponent", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(SynthComboBoxUI$EditorFocusHandler, editorComponent)},
	{}
};

$MethodInfo _SynthComboBoxUI$EditorFocusHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JComboBox;)V", "(Ljavax/swing/JComboBox<*>;)V", $PRIVATE, $method(static_cast<void(SynthComboBoxUI$EditorFocusHandler::*)($JComboBox*)>(&SynthComboBoxUI$EditorFocusHandler::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unregister", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthComboBoxUI$EditorFocusHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthComboBoxUI$EditorFocusHandler", "javax.swing.plaf.synth.SynthComboBoxUI", "EditorFocusHandler", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SynthComboBoxUI$EditorFocusHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthComboBoxUI$EditorFocusHandler",
	"java.lang.Object",
	"java.awt.event.FocusListener,java.beans.PropertyChangeListener",
	_SynthComboBoxUI$EditorFocusHandler_FieldInfo_,
	_SynthComboBoxUI$EditorFocusHandler_MethodInfo_,
	nullptr,
	nullptr,
	_SynthComboBoxUI$EditorFocusHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthComboBoxUI"
};

$Object* allocate$SynthComboBoxUI$EditorFocusHandler($Class* clazz) {
	return $of($alloc(SynthComboBoxUI$EditorFocusHandler));
}

int32_t SynthComboBoxUI$EditorFocusHandler::hashCode() {
	 return this->$FocusListener::hashCode();
}

bool SynthComboBoxUI$EditorFocusHandler::equals(Object$* arg0) {
	 return this->$FocusListener::equals(arg0);
}

$Object* SynthComboBoxUI$EditorFocusHandler::clone() {
	 return this->$FocusListener::clone();
}

$String* SynthComboBoxUI$EditorFocusHandler::toString() {
	 return this->$FocusListener::toString();
}

void SynthComboBoxUI$EditorFocusHandler::finalize() {
	this->$FocusListener::finalize();
}

void SynthComboBoxUI$EditorFocusHandler::init$($JComboBox* comboBox) {
	$set(this, editor, nullptr);
	$set(this, editorComponent, nullptr);
	$set(this, comboBox, comboBox);
	$set(this, editor, $nc(comboBox)->getEditor());
	if (this->editor != nullptr) {
		$set(this, editorComponent, $nc(this->editor)->getEditorComponent());
		if (this->editorComponent != nullptr) {
			$nc(this->editorComponent)->addFocusListener(this);
		}
	}
	comboBox->addPropertyChangeListener("editor"_s, this);
}

void SynthComboBoxUI$EditorFocusHandler::unregister() {
	$nc(this->comboBox)->removePropertyChangeListener("editor"_s, this);
	if (this->editorComponent != nullptr) {
		$nc(this->editorComponent)->removeFocusListener(this);
	}
}

void SynthComboBoxUI$EditorFocusHandler::focusGained($FocusEvent* e) {
	$nc(this->comboBox)->repaint();
}

void SynthComboBoxUI$EditorFocusHandler::focusLost($FocusEvent* e) {
	$nc(this->comboBox)->repaint();
}

void SynthComboBoxUI$EditorFocusHandler::propertyChange($PropertyChangeEvent* evt) {
	$var($ComboBoxEditor, newEditor, $nc(this->comboBox)->getEditor());
	if (this->editor != newEditor) {
		if (this->editorComponent != nullptr) {
			$nc(this->editorComponent)->removeFocusListener(this);
		}
		$set(this, editor, newEditor);
		if (this->editor != nullptr) {
			$set(this, editorComponent, $nc(this->editor)->getEditorComponent());
			if (this->editorComponent != nullptr) {
				$nc(this->editorComponent)->addFocusListener(this);
			}
		}
	}
}

SynthComboBoxUI$EditorFocusHandler::SynthComboBoxUI$EditorFocusHandler() {
}

$Class* SynthComboBoxUI$EditorFocusHandler::load$($String* name, bool initialize) {
	$loadClass(SynthComboBoxUI$EditorFocusHandler, name, initialize, &_SynthComboBoxUI$EditorFocusHandler_ClassInfo_, allocate$SynthComboBoxUI$EditorFocusHandler);
	return class$;
}

$Class* SynthComboBoxUI$EditorFocusHandler::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax