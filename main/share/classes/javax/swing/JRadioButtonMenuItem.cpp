#include <javax/swing/JRadioButtonMenuItem.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/io/ObjectOutputStream.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractButton$AccessibleAbstractButton.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem$AccessibleJMenuItem.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem.h>
#include <javax/swing/JToggleButton$ToggleButtonModel.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

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
using $ButtonModel = ::javax::swing::ButtonModel;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JMenuItem$AccessibleJMenuItem = ::javax::swing::JMenuItem$AccessibleJMenuItem;
using $JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem = ::javax::swing::JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem;
using $JToggleButton$ToggleButtonModel = ::javax::swing::JToggleButton$ToggleButtonModel;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {

$NamedAttribute JRadioButtonMenuItem_Attribute_var$0[] = {
	{"description", 's', "A component within a group of menu items which can be selected."},
	{}
};

$NamedAttribute JRadioButtonMenuItem_Attribute_var$1[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _JRadioButtonMenuItem_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JRadioButtonMenuItem_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", JRadioButtonMenuItem_Attribute_var$1},
	{}
};

$NamedAttribute JRadioButtonMenuItem_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JRadioButtonMenuItem_MethodAnnotations_getAccessibleContext8[] = {
	{"Ljava/beans/BeanProperty;", JRadioButtonMenuItem_Attribute_var$2},
	{}
};

$NamedAttribute JRadioButtonMenuItem_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JRadioButtonMenuItem_MethodAnnotations_getUIClassID9[] = {
	{"Ljava/beans/BeanProperty;", JRadioButtonMenuItem_Attribute_var$3},
	{}
};

$FieldInfo _JRadioButtonMenuItem_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRadioButtonMenuItem, uiClassID)},
	{}
};

$MethodInfo _JRadioButtonMenuItem_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JRadioButtonMenuItem::*)()>(&JRadioButtonMenuItem::init$))},
	{"<init>", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(static_cast<void(JRadioButtonMenuItem::*)($Icon*)>(&JRadioButtonMenuItem::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JRadioButtonMenuItem::*)($String*)>(&JRadioButtonMenuItem::init$))},
	{"<init>", "(Ljavax/swing/Action;)V", nullptr, $PUBLIC, $method(static_cast<void(JRadioButtonMenuItem::*)($Action*)>(&JRadioButtonMenuItem::init$))},
	{"<init>", "(Ljava/lang/String;Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(static_cast<void(JRadioButtonMenuItem::*)($String*,$Icon*)>(&JRadioButtonMenuItem::init$))},
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(JRadioButtonMenuItem::*)($String*,bool)>(&JRadioButtonMenuItem::init$))},
	{"<init>", "(Ljavax/swing/Icon;Z)V", nullptr, $PUBLIC, $method(static_cast<void(JRadioButtonMenuItem::*)($Icon*,bool)>(&JRadioButtonMenuItem::init$))},
	{"<init>", "(Ljava/lang/String;Ljavax/swing/Icon;Z)V", nullptr, $PUBLIC, $method(static_cast<void(JRadioButtonMenuItem::*)($String*,$Icon*,bool)>(&JRadioButtonMenuItem::init$))},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JRadioButtonMenuItem_MethodAnnotations_getAccessibleContext8},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JRadioButtonMenuItem_MethodAnnotations_getUIClassID9},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"shouldUpdateSelectedStateFromAction", "()Z", nullptr, 0},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JRadioButtonMenuItem::*)($ObjectOutputStream*)>(&JRadioButtonMenuItem::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JRadioButtonMenuItem_InnerClassesInfo_[] = {
	{"javax.swing.JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem", "javax.swing.JRadioButtonMenuItem", "AccessibleJRadioButtonMenuItem", $PROTECTED},
	{}
};

$ClassInfo _JRadioButtonMenuItem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JRadioButtonMenuItem",
	"javax.swing.JMenuItem",
	nullptr,
	_JRadioButtonMenuItem_FieldInfo_,
	_JRadioButtonMenuItem_MethodInfo_,
	nullptr,
	nullptr,
	_JRadioButtonMenuItem_InnerClassesInfo_,
	_JRadioButtonMenuItem_Annotations_,
	nullptr,
	"javax.swing.JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem"
};

$Object* allocate$JRadioButtonMenuItem($Class* clazz) {
	return $of($alloc(JRadioButtonMenuItem));
}

$String* JRadioButtonMenuItem::uiClassID = nullptr;

void JRadioButtonMenuItem::init$() {
	JRadioButtonMenuItem::init$(nullptr, nullptr, false);
}

void JRadioButtonMenuItem::init$($Icon* icon) {
	JRadioButtonMenuItem::init$(nullptr, icon, false);
}

void JRadioButtonMenuItem::init$($String* text) {
	JRadioButtonMenuItem::init$(text, nullptr, false);
}

void JRadioButtonMenuItem::init$($Action* a) {
	JRadioButtonMenuItem::init$();
	setAction(a);
}

void JRadioButtonMenuItem::init$($String* text, $Icon* icon) {
	JRadioButtonMenuItem::init$(text, icon, false);
}

void JRadioButtonMenuItem::init$($String* text, bool selected) {
	JRadioButtonMenuItem::init$(text);
	setSelected(selected);
}

void JRadioButtonMenuItem::init$($Icon* icon, bool selected) {
	JRadioButtonMenuItem::init$(nullptr, icon, selected);
}

void JRadioButtonMenuItem::init$($String* text, $Icon* icon, bool selected) {
	$JMenuItem::init$(text, icon);
	setModel($$new($JToggleButton$ToggleButtonModel));
	setSelected(selected);
	setFocusable(false);
}

$String* JRadioButtonMenuItem::getUIClassID() {
	return JRadioButtonMenuItem::uiClassID;
}

void JRadioButtonMenuItem::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JRadioButtonMenuItem::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

$String* JRadioButtonMenuItem::paramString() {
	return $JMenuItem::paramString();
}

bool JRadioButtonMenuItem::shouldUpdateSelectedStateFromAction() {
	return true;
}

$AccessibleContext* JRadioButtonMenuItem::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JRadioButtonMenuItem$AccessibleJRadioButtonMenuItem, this));
	}
	return this->accessibleContext;
}

JRadioButtonMenuItem::JRadioButtonMenuItem() {
}

void clinit$JRadioButtonMenuItem($Class* class$) {
	$assignStatic(JRadioButtonMenuItem::uiClassID, "RadioButtonMenuItemUI"_s);
}

$Class* JRadioButtonMenuItem::load$($String* name, bool initialize) {
	$loadClass(JRadioButtonMenuItem, name, initialize, &_JRadioButtonMenuItem_ClassInfo_, clinit$JRadioButtonMenuItem, allocate$JRadioButtonMenuItem);
	return class$;
}

$Class* JRadioButtonMenuItem::class$ = nullptr;

	} // swing
} // javax