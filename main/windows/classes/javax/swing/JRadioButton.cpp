#include <javax/swing/JRadioButton.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractButton$AccessibleAbstractButton.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRadioButton$AccessibleJRadioButton.h>
#include <javax/swing/JToggleButton$AccessibleJToggleButton.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

#undef LEADING

using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AbstractButton = ::javax::swing::AbstractButton;
using $AbstractButton$AccessibleAbstractButton = ::javax::swing::AbstractButton$AccessibleAbstractButton;
using $Action = ::javax::swing::Action;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JRadioButton$AccessibleJRadioButton = ::javax::swing::JRadioButton$AccessibleJRadioButton;
using $JToggleButton = ::javax::swing::JToggleButton;
using $JToggleButton$AccessibleJToggleButton = ::javax::swing::JToggleButton$AccessibleJToggleButton;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {

$NamedAttribute JRadioButton_Attribute_var$0[] = {
	{"description", 's', "A component which can display it\'s state as selected or deselected."},
	{}
};

$NamedAttribute JRadioButton_Attribute_var$1[] = {
	{"value", 'Z', "false"},
	{}
};
$CompoundAttribute _JRadioButton_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JRadioButton_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", JRadioButton_Attribute_var$1},
	{}
};

$NamedAttribute JRadioButton_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{"expert", 'Z', "true"},
	{"description", 's', "The AccessibleContext associated with this Button"},
	{}
};

$CompoundAttribute _JRadioButton_MethodAnnotations_getAccessibleContext8[] = {
	{"Ljava/beans/BeanProperty;", JRadioButton_Attribute_var$2},
	{}
};

$NamedAttribute JRadioButton_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{"expert", 'Z', "true"},
	{"description", 's', "A string that specifies the name of the L&F class."},
	{}
};

$CompoundAttribute _JRadioButton_MethodAnnotations_getUIClassID9[] = {
	{"Ljava/beans/BeanProperty;", JRadioButton_Attribute_var$3},
	{}
};


$FieldInfo _JRadioButton_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRadioButton, uiClassID)},
	{}
};

$MethodInfo _JRadioButton_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JRadioButton::*)()>(&JRadioButton::init$))},
	{"<init>", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(static_cast<void(JRadioButton::*)($Icon*)>(&JRadioButton::init$))},
	{"<init>", "(Ljavax/swing/Action;)V", nullptr, $PUBLIC, $method(static_cast<void(JRadioButton::*)($Action*)>(&JRadioButton::init$))},
	{"<init>", "(Ljavax/swing/Icon;Z)V", nullptr, $PUBLIC, $method(static_cast<void(JRadioButton::*)($Icon*,bool)>(&JRadioButton::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JRadioButton::*)($String*)>(&JRadioButton::init$))},
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(JRadioButton::*)($String*,bool)>(&JRadioButton::init$))},
	{"<init>", "(Ljava/lang/String;Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(static_cast<void(JRadioButton::*)($String*,$Icon*)>(&JRadioButton::init$))},
	{"<init>", "(Ljava/lang/String;Ljavax/swing/Icon;Z)V", nullptr, $PUBLIC, $method(static_cast<void(JRadioButton::*)($String*,$Icon*,bool)>(&JRadioButton::init$))},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JRadioButton_MethodAnnotations_getAccessibleContext8},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JRadioButton_MethodAnnotations_getUIClassID9},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"setIconFromAction", "(Ljavax/swing/Action;)V", nullptr, 0},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JRadioButton::*)($ObjectOutputStream*)>(&JRadioButton::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JRadioButton_InnerClassesInfo_[] = {
	{"javax.swing.JRadioButton$AccessibleJRadioButton", "javax.swing.JRadioButton", "AccessibleJRadioButton", $PROTECTED},
	{}
};

$ClassInfo _JRadioButton_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JRadioButton",
	"javax.swing.JToggleButton",
	nullptr,
	_JRadioButton_FieldInfo_,
	_JRadioButton_MethodInfo_,
	nullptr,
	nullptr,
	_JRadioButton_InnerClassesInfo_,
	_JRadioButton_Annotations_,
	nullptr,
	"javax.swing.JRadioButton$AccessibleJRadioButton"
};

$Object* allocate$JRadioButton($Class* clazz) {
	return $of($alloc(JRadioButton));
}


$String* JRadioButton::uiClassID = nullptr;

void JRadioButton::init$() {
	JRadioButton::init$(nullptr, nullptr, false);
}

void JRadioButton::init$($Icon* icon) {
	JRadioButton::init$(nullptr, icon, false);
}

void JRadioButton::init$($Action* a) {
	JRadioButton::init$();
	setAction(a);
}

void JRadioButton::init$($Icon* icon, bool selected) {
	JRadioButton::init$(nullptr, icon, selected);
}

void JRadioButton::init$($String* text) {
	JRadioButton::init$(text, nullptr, false);
}

void JRadioButton::init$($String* text, bool selected) {
	JRadioButton::init$(text, nullptr, selected);
}

void JRadioButton::init$($String* text, $Icon* icon) {
	JRadioButton::init$(text, icon, false);
}

void JRadioButton::init$($String* text, $Icon* icon, bool selected) {
	$JToggleButton::init$(text, icon, selected);
	setBorderPainted(false);
	setHorizontalAlignment($SwingConstants::LEADING);
}

void JRadioButton::updateUI() {
	setUI($cast($ButtonUI, $($UIManager::getUI(this))));
}

$String* JRadioButton::getUIClassID() {
	return JRadioButton::uiClassID;
}

void JRadioButton::setIconFromAction($Action* a) {
}

void JRadioButton::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JRadioButton::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

$String* JRadioButton::paramString() {
	return $JToggleButton::paramString();
}

$AccessibleContext* JRadioButton::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JRadioButton$AccessibleJRadioButton, this));
	}
	return this->accessibleContext;
}

JRadioButton::JRadioButton() {
}

void clinit$JRadioButton($Class* class$) {
	$assignStatic(JRadioButton::uiClassID, "RadioButtonUI"_s);
}

$Class* JRadioButton::load$($String* name, bool initialize) {
	$loadClass(JRadioButton, name, initialize, &_JRadioButton_ClassInfo_, clinit$JRadioButton, allocate$JRadioButton);
	return class$;
}

$Class* JRadioButton::class$ = nullptr;

	} // swing
} // javax