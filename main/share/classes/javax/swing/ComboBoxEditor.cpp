#include <javax/swing/ComboBoxEditor.h>

#include <java/awt/Component.h>
#include <java/awt/event/ActionListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$MethodInfo _ComboBoxEditor_MethodInfo_[] = {
	{"addActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getEditorComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT},
	{"getItem", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"removeActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"selectAll", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"setItem", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ComboBoxEditor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.ComboBoxEditor",
	nullptr,
	nullptr,
	nullptr,
	_ComboBoxEditor_MethodInfo_
};

$Object* allocate$ComboBoxEditor($Class* clazz) {
	return $of($alloc(ComboBoxEditor));
}

$Class* ComboBoxEditor::load$($String* name, bool initialize) {
	$loadClass(ComboBoxEditor, name, initialize, &_ComboBoxEditor_ClassInfo_, allocate$ComboBoxEditor);
	return class$;
}

$Class* ComboBoxEditor::class$ = nullptr;

	} // swing
} // javax