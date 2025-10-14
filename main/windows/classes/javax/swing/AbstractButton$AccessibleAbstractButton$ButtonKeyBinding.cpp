#include <javax/swing/AbstractButton$AccessibleAbstractButton$ButtonKeyBinding.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton$AccessibleAbstractButton.h>
#include <javax/swing/KeyStroke.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleKeyBinding = ::javax::accessibility::AccessibleKeyBinding;
using $AbstractButton$AccessibleAbstractButton = ::javax::swing::AbstractButton$AccessibleAbstractButton;
using $KeyStroke = ::javax::swing::KeyStroke;

namespace javax {
	namespace swing {

$FieldInfo _AbstractButton$AccessibleAbstractButton$ButtonKeyBinding_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/AbstractButton$AccessibleAbstractButton;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractButton$AccessibleAbstractButton$ButtonKeyBinding, this$1)},
	{"mnemonic", "I", nullptr, 0, $field(AbstractButton$AccessibleAbstractButton$ButtonKeyBinding, mnemonic)},
	{}
};

$MethodInfo _AbstractButton$AccessibleAbstractButton$ButtonKeyBinding_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/AbstractButton$AccessibleAbstractButton;I)V", nullptr, 0, $method(static_cast<void(AbstractButton$AccessibleAbstractButton$ButtonKeyBinding::*)($AbstractButton$AccessibleAbstractButton*,int32_t)>(&AbstractButton$AccessibleAbstractButton$ButtonKeyBinding::init$))},
	{"getAccessibleKeyBinding", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getAccessibleKeyBindingCount", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AbstractButton$AccessibleAbstractButton$ButtonKeyBinding_InnerClassesInfo_[] = {
	{"javax.swing.AbstractButton$AccessibleAbstractButton", "javax.swing.AbstractButton", "AccessibleAbstractButton", $PROTECTED | $ABSTRACT},
	{"javax.swing.AbstractButton$AccessibleAbstractButton$ButtonKeyBinding", "javax.swing.AbstractButton$AccessibleAbstractButton", "ButtonKeyBinding", 0},
	{}
};

$ClassInfo _AbstractButton$AccessibleAbstractButton$ButtonKeyBinding_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.AbstractButton$AccessibleAbstractButton$ButtonKeyBinding",
	"java.lang.Object",
	"javax.accessibility.AccessibleKeyBinding",
	_AbstractButton$AccessibleAbstractButton$ButtonKeyBinding_FieldInfo_,
	_AbstractButton$AccessibleAbstractButton$ButtonKeyBinding_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractButton$AccessibleAbstractButton$ButtonKeyBinding_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.AbstractButton"
};

$Object* allocate$AbstractButton$AccessibleAbstractButton$ButtonKeyBinding($Class* clazz) {
	return $of($alloc(AbstractButton$AccessibleAbstractButton$ButtonKeyBinding));
}

void AbstractButton$AccessibleAbstractButton$ButtonKeyBinding::init$($AbstractButton$AccessibleAbstractButton* this$1, int32_t mnemonic) {
	$set(this, this$1, this$1);
	this->mnemonic = mnemonic;
}

int32_t AbstractButton$AccessibleAbstractButton$ButtonKeyBinding::getAccessibleKeyBindingCount() {
	return 1;
}

$Object* AbstractButton$AccessibleAbstractButton$ButtonKeyBinding::getAccessibleKeyBinding(int32_t i) {
	if (i != 0) {
		$throwNew($IllegalArgumentException);
	}
	return $of($KeyStroke::getKeyStroke(this->mnemonic, 0));
}

AbstractButton$AccessibleAbstractButton$ButtonKeyBinding::AbstractButton$AccessibleAbstractButton$ButtonKeyBinding() {
}

$Class* AbstractButton$AccessibleAbstractButton$ButtonKeyBinding::load$($String* name, bool initialize) {
	$loadClass(AbstractButton$AccessibleAbstractButton$ButtonKeyBinding, name, initialize, &_AbstractButton$AccessibleAbstractButton$ButtonKeyBinding_ClassInfo_, allocate$AbstractButton$AccessibleAbstractButton$ButtonKeyBinding);
	return class$;
}

$Class* AbstractButton$AccessibleAbstractButton$ButtonKeyBinding::class$ = nullptr;

	} // swing
} // javax