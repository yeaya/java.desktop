#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$WindowsComboBoxEditor.h>

#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/basic/BasicComboBoxEditor$UIResource.h>
#include <javax/swing/plaf/basic/BasicComboBoxEditor.h>
#include <jcpp.h>

using $WindowsComboBoxUI = ::com::sun::java::swing::plaf::windows::WindowsComboBoxUI;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JTextField = ::javax::swing::JTextField;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $BasicComboBoxEditor = ::javax::swing::plaf::basic::BasicComboBoxEditor;
using $BasicComboBoxEditor$UIResource = ::javax::swing::plaf::basic::BasicComboBoxEditor$UIResource;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsComboBoxUI$WindowsComboBoxEditor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsComboBoxUI$WindowsComboBoxEditor::*)()>(&WindowsComboBoxUI$WindowsComboBoxEditor::init$))},
	{"createEditorComponent", "()Ljavax/swing/JTextField;", nullptr, $PROTECTED},
	{"setItem", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsComboBoxUI$WindowsComboBoxEditor_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WindowsComboBoxEditor", "com.sun.java.swing.plaf.windows.WindowsComboBoxUI", "WindowsComboBoxEditor", $PUBLIC | $STATIC},
	{"javax.swing.plaf.basic.BasicComboBoxEditor$UIResource", "javax.swing.plaf.basic.BasicComboBoxEditor", "UIResource", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _WindowsComboBoxUI$WindowsComboBoxEditor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WindowsComboBoxEditor",
	"javax.swing.plaf.basic.BasicComboBoxEditor$UIResource",
	nullptr,
	nullptr,
	_WindowsComboBoxUI$WindowsComboBoxEditor_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsComboBoxUI$WindowsComboBoxEditor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsComboBoxUI"
};

$Object* allocate$WindowsComboBoxUI$WindowsComboBoxEditor($Class* clazz) {
	return $of($alloc(WindowsComboBoxUI$WindowsComboBoxEditor));
}

void WindowsComboBoxUI$WindowsComboBoxEditor::init$() {
	$BasicComboBoxEditor$UIResource::init$();
}

$JTextField* WindowsComboBoxUI$WindowsComboBoxEditor::createEditorComponent() {
	$var($JTextField, editor, $BasicComboBoxEditor$UIResource::createEditorComponent());
	$var($Border, border, $cast($Border, $UIManager::get("ComboBox.editorBorder"_s)));
	if (border != nullptr) {
		$nc(editor)->setBorder(border);
	}
	$nc(editor)->setOpaque(false);
	return editor;
}

void WindowsComboBoxUI$WindowsComboBoxEditor::setItem(Object$* item) {
	$BasicComboBoxEditor$UIResource::setItem(item);
	$var($Object, focus, $nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getFocusOwner());
	if (($equals(focus, this->editor)) || ($equals(focus, $nc(this->editor)->getParent()))) {
		$nc(this->editor)->selectAll();
	}
}

WindowsComboBoxUI$WindowsComboBoxEditor::WindowsComboBoxUI$WindowsComboBoxEditor() {
}

$Class* WindowsComboBoxUI$WindowsComboBoxEditor::load$($String* name, bool initialize) {
	$loadClass(WindowsComboBoxUI$WindowsComboBoxEditor, name, initialize, &_WindowsComboBoxUI$WindowsComboBoxEditor_ClassInfo_, allocate$WindowsComboBoxUI$WindowsComboBoxEditor);
	return class$;
}

$Class* WindowsComboBoxUI$WindowsComboBoxEditor::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com