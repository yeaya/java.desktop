#include <javax/swing/plaf/synth/SynthComboBoxUI$SynthComboBoxEditor.h>

#include <java/awt/Component.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/plaf/basic/BasicComboBoxEditor$UIResource.h>
#include <javax/swing/plaf/synth/SynthComboBoxUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextField = ::javax::swing::JTextField;
using $BasicComboBoxEditor$UIResource = ::javax::swing::plaf::basic::BasicComboBoxEditor$UIResource;
using $SynthComboBoxUI = ::javax::swing::plaf::synth::SynthComboBoxUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$MethodInfo _SynthComboBoxUI$SynthComboBoxEditor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SynthComboBoxUI$SynthComboBoxEditor::*)()>(&SynthComboBoxUI$SynthComboBoxEditor::init$))},
	{"createEditorComponent", "()Ljavax/swing/JTextField;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthComboBoxUI$SynthComboBoxEditor_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthComboBoxUI$SynthComboBoxEditor", "javax.swing.plaf.synth.SynthComboBoxUI", "SynthComboBoxEditor", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicComboBoxEditor$UIResource", "javax.swing.plaf.basic.BasicComboBoxEditor", "UIResource", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SynthComboBoxUI$SynthComboBoxEditor_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthComboBoxUI$SynthComboBoxEditor",
	"javax.swing.plaf.basic.BasicComboBoxEditor$UIResource",
	nullptr,
	nullptr,
	_SynthComboBoxUI$SynthComboBoxEditor_MethodInfo_,
	nullptr,
	nullptr,
	_SynthComboBoxUI$SynthComboBoxEditor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthComboBoxUI"
};

$Object* allocate$SynthComboBoxUI$SynthComboBoxEditor($Class* clazz) {
	return $of($alloc(SynthComboBoxUI$SynthComboBoxEditor));
}

void SynthComboBoxUI$SynthComboBoxEditor::init$() {
	$BasicComboBoxEditor$UIResource::init$();
}

$JTextField* SynthComboBoxUI$SynthComboBoxEditor::createEditorComponent() {
	$var($JTextField, f, $new($JTextField, ""_s, 9));
	f->setName("ComboBox.textField"_s);
	return f;
}

SynthComboBoxUI$SynthComboBoxEditor::SynthComboBoxUI$SynthComboBoxEditor() {
}

$Class* SynthComboBoxUI$SynthComboBoxEditor::load$($String* name, bool initialize) {
	$loadClass(SynthComboBoxUI$SynthComboBoxEditor, name, initialize, &_SynthComboBoxUI$SynthComboBoxEditor_ClassInfo_, allocate$SynthComboBoxUI$SynthComboBoxEditor);
	return class$;
}

$Class* SynthComboBoxUI$SynthComboBoxEditor::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax