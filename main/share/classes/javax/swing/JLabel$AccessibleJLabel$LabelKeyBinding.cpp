#include <javax/swing/JLabel$AccessibleJLabel$LabelKeyBinding.h>

#include <javax/swing/JLabel$AccessibleJLabel.h>
#include <javax/swing/KeyStroke.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLabel$AccessibleJLabel = ::javax::swing::JLabel$AccessibleJLabel;
using $KeyStroke = ::javax::swing::KeyStroke;

namespace javax {
	namespace swing {

$FieldInfo _JLabel$AccessibleJLabel$LabelKeyBinding_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/JLabel$AccessibleJLabel;", nullptr, $FINAL | $SYNTHETIC, $field(JLabel$AccessibleJLabel$LabelKeyBinding, this$1)},
	{"mnemonic", "I", nullptr, 0, $field(JLabel$AccessibleJLabel$LabelKeyBinding, mnemonic)},
	{}
};

$MethodInfo _JLabel$AccessibleJLabel$LabelKeyBinding_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JLabel$AccessibleJLabel;I)V", nullptr, 0, $method(static_cast<void(JLabel$AccessibleJLabel$LabelKeyBinding::*)($JLabel$AccessibleJLabel*,int32_t)>(&JLabel$AccessibleJLabel$LabelKeyBinding::init$))},
	{"getAccessibleKeyBinding", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getAccessibleKeyBindingCount", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JLabel$AccessibleJLabel$LabelKeyBinding_InnerClassesInfo_[] = {
	{"javax.swing.JLabel$AccessibleJLabel", "javax.swing.JLabel", "AccessibleJLabel", $PROTECTED},
	{"javax.swing.JLabel$AccessibleJLabel$LabelKeyBinding", "javax.swing.JLabel$AccessibleJLabel", "LabelKeyBinding", 0},
	{}
};

$ClassInfo _JLabel$AccessibleJLabel$LabelKeyBinding_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JLabel$AccessibleJLabel$LabelKeyBinding",
	"java.lang.Object",
	"javax.accessibility.AccessibleKeyBinding",
	_JLabel$AccessibleJLabel$LabelKeyBinding_FieldInfo_,
	_JLabel$AccessibleJLabel$LabelKeyBinding_MethodInfo_,
	nullptr,
	nullptr,
	_JLabel$AccessibleJLabel$LabelKeyBinding_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JLabel"
};

$Object* allocate$JLabel$AccessibleJLabel$LabelKeyBinding($Class* clazz) {
	return $of($alloc(JLabel$AccessibleJLabel$LabelKeyBinding));
}

void JLabel$AccessibleJLabel$LabelKeyBinding::init$($JLabel$AccessibleJLabel* this$1, int32_t mnemonic) {
	$set(this, this$1, this$1);
	this->mnemonic = mnemonic;
}

int32_t JLabel$AccessibleJLabel$LabelKeyBinding::getAccessibleKeyBindingCount() {
	return 1;
}

$Object* JLabel$AccessibleJLabel$LabelKeyBinding::getAccessibleKeyBinding(int32_t i) {
	if (i != 0) {
		$throwNew($IllegalArgumentException);
	}
	return $of($KeyStroke::getKeyStroke(this->mnemonic, 0));
}

JLabel$AccessibleJLabel$LabelKeyBinding::JLabel$AccessibleJLabel$LabelKeyBinding() {
}

$Class* JLabel$AccessibleJLabel$LabelKeyBinding::load$($String* name, bool initialize) {
	$loadClass(JLabel$AccessibleJLabel$LabelKeyBinding, name, initialize, &_JLabel$AccessibleJLabel$LabelKeyBinding_ClassInfo_, allocate$JLabel$AccessibleJLabel$LabelKeyBinding);
	return class$;
}

$Class* JLabel$AccessibleJLabel$LabelKeyBinding::class$ = nullptr;

	} // swing
} // javax