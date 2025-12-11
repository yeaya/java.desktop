#include <javax/swing/plaf/basic/BasicComboBoxEditor.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/FocusEvent.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/ComboBoxEditor.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/basic/BasicComboBoxEditor$BorderlessTextField.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ActionListener = ::java::awt::event::ActionListener;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $ComboBoxEditor = ::javax::swing::ComboBoxEditor;
using $JComponent = ::javax::swing::JComponent;
using $JTextField = ::javax::swing::JTextField;
using $Border = ::javax::swing::border::Border;
using $BasicComboBoxEditor$BorderlessTextField = ::javax::swing::plaf::basic::BasicComboBoxEditor$BorderlessTextField;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $MethodUtil = ::sun::reflect::misc::MethodUtil;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicComboBoxEditor_FieldInfo_[] = {
	{"editor", "Ljavax/swing/JTextField;", nullptr, $PROTECTED, $field(BasicComboBoxEditor, editor)},
	{"oldValue", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(BasicComboBoxEditor, oldValue)},
	{}
};

$MethodInfo _BasicComboBoxEditor_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicComboBoxEditor::*)()>(&BasicComboBoxEditor::init$))},
	{"addActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC},
	{"createEditorComponent", "()Ljavax/swing/JTextField;", nullptr, $PROTECTED},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"getEditorComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getItem", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"removeActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC},
	{"selectAll", "()V", nullptr, $PUBLIC},
	{"setItem", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicComboBoxEditor_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboBoxEditor$UIResource", "javax.swing.plaf.basic.BasicComboBoxEditor", "UIResource", $PUBLIC | $STATIC},
	{"javax.swing.plaf.basic.BasicComboBoxEditor$BorderlessTextField", "javax.swing.plaf.basic.BasicComboBoxEditor", "BorderlessTextField", $STATIC},
	{}
};

$ClassInfo _BasicComboBoxEditor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboBoxEditor",
	"java.lang.Object",
	"javax.swing.ComboBoxEditor,java.awt.event.FocusListener",
	_BasicComboBoxEditor_FieldInfo_,
	_BasicComboBoxEditor_MethodInfo_,
	nullptr,
	nullptr,
	_BasicComboBoxEditor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboBoxEditor$UIResource,javax.swing.plaf.basic.BasicComboBoxEditor$BorderlessTextField"
};

$Object* allocate$BasicComboBoxEditor($Class* clazz) {
	return $of($alloc(BasicComboBoxEditor));
}

int32_t BasicComboBoxEditor::hashCode() {
	 return this->$ComboBoxEditor::hashCode();
}

bool BasicComboBoxEditor::equals(Object$* arg0) {
	 return this->$ComboBoxEditor::equals(arg0);
}

$Object* BasicComboBoxEditor::clone() {
	 return this->$ComboBoxEditor::clone();
}

$String* BasicComboBoxEditor::toString() {
	 return this->$ComboBoxEditor::toString();
}

void BasicComboBoxEditor::finalize() {
	this->$ComboBoxEditor::finalize();
}

void BasicComboBoxEditor::init$() {
	$set(this, editor, createEditorComponent());
}

$Component* BasicComboBoxEditor::getEditorComponent() {
	return this->editor;
}

$JTextField* BasicComboBoxEditor::createEditorComponent() {
	$var($JTextField, editor, $new($BasicComboBoxEditor$BorderlessTextField, ""_s, 9));
	editor->setBorder(nullptr);
	return editor;
}

void BasicComboBoxEditor::setItem(Object$* anObject) {
	$useLocalCurrentObjectStackCache();
	$var($String, text, nullptr);
	if (anObject != nullptr) {
		$assign(text, $of(anObject)->toString());
		if (text == nullptr) {
			$assign(text, ""_s);
		}
		$set(this, oldValue, anObject);
	} else {
		$assign(text, ""_s);
	}
	if (!$nc(text)->equals($($nc(this->editor)->getText()))) {
		$nc(this->editor)->setText(text);
	}
}

$Object* BasicComboBoxEditor::getItem() {
	$useLocalCurrentObjectStackCache();
	$var($Object, newValue, $nc(this->editor)->getText());
	if (this->oldValue != nullptr && !($instanceOf($String, this->oldValue))) {
		if ($nc($of(newValue))->equals($($nc($of(this->oldValue))->toString()))) {
			return $of(this->oldValue);
		} else {
			$Class* cls = $nc($of(this->oldValue))->getClass();
			try {
				$var($Method, method, $MethodUtil::getMethod(cls, "valueOf"_s, $$new($ClassArray, {$String::class$})));
				$assign(newValue, $MethodUtil::invoke(method, this->oldValue, $$new($ObjectArray, {$($of($nc(this->editor)->getText()))})));
			} catch ($Exception& ex) {
			}
		}
	}
	return $of(newValue);
}

void BasicComboBoxEditor::selectAll() {
	$nc(this->editor)->selectAll();
	$nc(this->editor)->requestFocus();
}

void BasicComboBoxEditor::focusGained($FocusEvent* e) {
}

void BasicComboBoxEditor::focusLost($FocusEvent* e) {
}

void BasicComboBoxEditor::addActionListener($ActionListener* l) {
	$nc(this->editor)->addActionListener(l);
}

void BasicComboBoxEditor::removeActionListener($ActionListener* l) {
	$nc(this->editor)->removeActionListener(l);
}

BasicComboBoxEditor::BasicComboBoxEditor() {
}

$Class* BasicComboBoxEditor::load$($String* name, bool initialize) {
	$loadClass(BasicComboBoxEditor, name, initialize, &_BasicComboBoxEditor_ClassInfo_, allocate$BasicComboBoxEditor);
	return class$;
}

$Class* BasicComboBoxEditor::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax