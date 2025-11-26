#include <javax/swing/plaf/metal/MetalComboBoxEditor$1.h>

#include <java/awt/Dimension.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/plaf/metal/MetalComboBoxEditor.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JTextField = ::javax::swing::JTextField;
using $MetalComboBoxEditor = ::javax::swing::plaf::metal::MetalComboBoxEditor;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalComboBoxEditor$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalComboBoxEditor;", nullptr, $FINAL | $SYNTHETIC, $field(MetalComboBoxEditor$1, this$0)},
	{}
};

$MethodInfo _MetalComboBoxEditor$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalComboBoxEditor;Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(MetalComboBoxEditor$1::*)($MetalComboBoxEditor*,$String*,int32_t)>(&MetalComboBoxEditor$1::init$))},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MetalComboBoxEditor$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.metal.MetalComboBoxEditor",
	"<init>",
	"()V"
};

$InnerClassInfo _MetalComboBoxEditor$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalComboBoxEditor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MetalComboBoxEditor$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalComboBoxEditor$1",
	"javax.swing.JTextField",
	nullptr,
	_MetalComboBoxEditor$1_FieldInfo_,
	_MetalComboBoxEditor$1_MethodInfo_,
	nullptr,
	&_MetalComboBoxEditor$1_EnclosingMethodInfo_,
	_MetalComboBoxEditor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalComboBoxEditor"
};

$Object* allocate$MetalComboBoxEditor$1($Class* clazz) {
	return $of($alloc(MetalComboBoxEditor$1));
}

void MetalComboBoxEditor$1::init$($MetalComboBoxEditor* this$0, $String* text, int32_t columns) {
	$set(this, this$0, this$0);
	$JTextField::init$(text, columns);
}

void MetalComboBoxEditor$1::setText($String* s) {
	if ($nc($(getText()))->equals(s)) {
		return;
	}
	$JTextField::setText(s);
}

$Dimension* MetalComboBoxEditor$1::getPreferredSize() {
	$var($Dimension, pref, $JTextField::getPreferredSize());
	$nc(pref)->height += 4;
	return pref;
}

$Dimension* MetalComboBoxEditor$1::getMinimumSize() {
	$var($Dimension, min, $JTextField::getMinimumSize());
	$nc(min)->height += 4;
	return min;
}

MetalComboBoxEditor$1::MetalComboBoxEditor$1() {
}

$Class* MetalComboBoxEditor$1::load$($String* name, bool initialize) {
	$loadClass(MetalComboBoxEditor$1, name, initialize, &_MetalComboBoxEditor$1_ClassInfo_, allocate$MetalComboBoxEditor$1);
	return class$;
}

$Class* MetalComboBoxEditor$1::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax