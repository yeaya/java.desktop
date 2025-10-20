#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$NoFocusButton.h>

#include <java/awt/Insets.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <jcpp.h>

using $Insets = ::java::awt::Insets;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $UIManager = ::javax::swing::UIManager;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicInternalFrameTitlePane$NoFocusButton_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameTitlePane$NoFocusButton, this$0)},
	{"uiKey", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BasicInternalFrameTitlePane$NoFocusButton, uiKey)},
	{}
};

$MethodInfo _BasicInternalFrameTitlePane$NoFocusButton_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicInternalFrameTitlePane$NoFocusButton::*)($BasicInternalFrameTitlePane*,$String*,$String*)>(&BasicInternalFrameTitlePane$NoFocusButton::init$))},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC},
	{"requestFocus", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicInternalFrameTitlePane$NoFocusButton_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$NoFocusButton", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "NoFocusButton", $PRIVATE},
	{}
};

$ClassInfo _BasicInternalFrameTitlePane$NoFocusButton_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane$NoFocusButton",
	"javax.swing.JButton",
	nullptr,
	_BasicInternalFrameTitlePane$NoFocusButton_FieldInfo_,
	_BasicInternalFrameTitlePane$NoFocusButton_MethodInfo_,
	nullptr,
	nullptr,
	_BasicInternalFrameTitlePane$NoFocusButton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane"
};

$Object* allocate$BasicInternalFrameTitlePane$NoFocusButton($Class* clazz) {
	return $of($alloc(BasicInternalFrameTitlePane$NoFocusButton));
}

void BasicInternalFrameTitlePane$NoFocusButton::init$($BasicInternalFrameTitlePane* this$0, $String* uiKey, $String* opacityKey) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$JButton::init$();
	setFocusPainted(false);
	setMargin($$new($Insets, 0, 0, 0, 0));
	$set(this, uiKey, uiKey);
	$var($Object, opacity, $UIManager::get(opacityKey));
	if ($instanceOf($Boolean, opacity)) {
		setOpaque($nc(($cast($Boolean, opacity)))->booleanValue());
	}
}

bool BasicInternalFrameTitlePane$NoFocusButton::isFocusTraversable() {
	return false;
}

void BasicInternalFrameTitlePane$NoFocusButton::requestFocus() {
}

$AccessibleContext* BasicInternalFrameTitlePane$NoFocusButton::getAccessibleContext() {
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, ac, $JButton::getAccessibleContext());
	if (this->uiKey != nullptr) {
		$nc(ac)->setAccessibleName($($UIManager::getString(this->uiKey)));
		$set(this, uiKey, nullptr);
	}
	return ac;
}

BasicInternalFrameTitlePane$NoFocusButton::BasicInternalFrameTitlePane$NoFocusButton() {
}

$Class* BasicInternalFrameTitlePane$NoFocusButton::load$($String* name, bool initialize) {
	$loadClass(BasicInternalFrameTitlePane$NoFocusButton, name, initialize, &_BasicInternalFrameTitlePane$NoFocusButton_ClassInfo_, allocate$BasicInternalFrameTitlePane$NoFocusButton);
	return class$;
}

$Class* BasicInternalFrameTitlePane$NoFocusButton::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax