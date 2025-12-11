#include <javax/swing/plaf/metal/MetalComboBoxEditor.h>

#include <java/awt/Insets.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/basic/BasicComboBoxEditor.h>
#include <javax/swing/plaf/metal/MetalComboBoxEditor$1.h>
#include <javax/swing/plaf/metal/MetalComboBoxEditor$EditorBorder.h>
#include <jcpp.h>

using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextField = ::javax::swing::JTextField;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $BasicComboBoxEditor = ::javax::swing::plaf::basic::BasicComboBoxEditor;
using $MetalComboBoxEditor$1 = ::javax::swing::plaf::metal::MetalComboBoxEditor$1;
using $MetalComboBoxEditor$EditorBorder = ::javax::swing::plaf::metal::MetalComboBoxEditor$EditorBorder;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalComboBoxEditor_FieldInfo_[] = {
	{"editorBorderInsets", "Ljava/awt/Insets;", nullptr, $PROTECTED | $STATIC, $staticField(MetalComboBoxEditor, editorBorderInsets)},
	{}
};

$MethodInfo _MetalComboBoxEditor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalComboBoxEditor::*)()>(&MetalComboBoxEditor::init$))},
	{}
};

$InnerClassInfo _MetalComboBoxEditor_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalComboBoxEditor$UIResource", "javax.swing.plaf.metal.MetalComboBoxEditor", "UIResource", $PUBLIC | $STATIC},
	{"javax.swing.plaf.metal.MetalComboBoxEditor$EditorBorder", "javax.swing.plaf.metal.MetalComboBoxEditor", "EditorBorder", 0},
	{"javax.swing.plaf.metal.MetalComboBoxEditor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MetalComboBoxEditor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalComboBoxEditor",
	"javax.swing.plaf.basic.BasicComboBoxEditor",
	nullptr,
	_MetalComboBoxEditor_FieldInfo_,
	_MetalComboBoxEditor_MethodInfo_,
	nullptr,
	nullptr,
	_MetalComboBoxEditor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalComboBoxEditor$UIResource,javax.swing.plaf.metal.MetalComboBoxEditor$EditorBorder,javax.swing.plaf.metal.MetalComboBoxEditor$1"
};

$Object* allocate$MetalComboBoxEditor($Class* clazz) {
	return $of($alloc(MetalComboBoxEditor));
}

$Insets* MetalComboBoxEditor::editorBorderInsets = nullptr;

void MetalComboBoxEditor::init$() {
	$BasicComboBoxEditor::init$();
	$set(this, editor, $new($MetalComboBoxEditor$1, this, ""_s, 9));
	$nc(this->editor)->setBorder($$new($MetalComboBoxEditor$EditorBorder, this));
}

void clinit$MetalComboBoxEditor($Class* class$) {
	$assignStatic(MetalComboBoxEditor::editorBorderInsets, $new($Insets, 2, 2, 2, 0));
}

MetalComboBoxEditor::MetalComboBoxEditor() {
}

$Class* MetalComboBoxEditor::load$($String* name, bool initialize) {
	$loadClass(MetalComboBoxEditor, name, initialize, &_MetalComboBoxEditor_ClassInfo_, clinit$MetalComboBoxEditor, allocate$MetalComboBoxEditor);
	return class$;
}

$Class* MetalComboBoxEditor::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax