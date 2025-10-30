#include <javax/swing/JCheckBoxMenuItem.h>

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
#include <javax/swing/JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem$AccessibleJMenuItem.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JToggleButton$ToggleButtonModel.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

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
using $ButtonModel = ::javax::swing::ButtonModel;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;
using $Icon = ::javax::swing::Icon;
using $JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem = ::javax::swing::JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JMenuItem$AccessibleJMenuItem = ::javax::swing::JMenuItem$AccessibleJMenuItem;
using $JToggleButton$ToggleButtonModel = ::javax::swing::JToggleButton$ToggleButtonModel;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {

$NamedAttribute JCheckBoxMenuItem_Attribute_var$0[] = {
	{"description", 's', "A menu item which can be selected or deselected."},
	{}
};

$NamedAttribute JCheckBoxMenuItem_Attribute_var$1[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _JCheckBoxMenuItem_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JCheckBoxMenuItem_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", JCheckBoxMenuItem_Attribute_var$1},
	{}
};

$NamedAttribute JCheckBoxMenuItem_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JCheckBoxMenuItem_MethodAnnotations_getAccessibleContext7[] = {
	{"Ljava/beans/BeanProperty;", JCheckBoxMenuItem_Attribute_var$2},
	{}
};

$NamedAttribute JCheckBoxMenuItem_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JCheckBoxMenuItem_MethodAnnotations_getSelectedObjects8[] = {
	{"Ljava/beans/BeanProperty;", JCheckBoxMenuItem_Attribute_var$3},
	{}
};

$NamedAttribute JCheckBoxMenuItem_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JCheckBoxMenuItem_MethodAnnotations_getUIClassID10[] = {
	{"Ljava/beans/BeanProperty;", JCheckBoxMenuItem_Attribute_var$4},
	{}
};

$NamedAttribute JCheckBoxMenuItem_Attribute_var$5[] = {
	{"bound", 'Z', "false"},
	{"hidden", 'Z', "true"},
	{"description", 's', "The selection state of the check box menu item"},
	{}
};

$CompoundAttribute _JCheckBoxMenuItem_MethodAnnotations_setState12[] = {
	{"Ljava/beans/BeanProperty;", JCheckBoxMenuItem_Attribute_var$5},
	{}
};

$FieldInfo _JCheckBoxMenuItem_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JCheckBoxMenuItem, uiClassID)},
	{}
};

$MethodInfo _JCheckBoxMenuItem_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JCheckBoxMenuItem::*)()>(&JCheckBoxMenuItem::init$))},
	{"<init>", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(static_cast<void(JCheckBoxMenuItem::*)($Icon*)>(&JCheckBoxMenuItem::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JCheckBoxMenuItem::*)($String*)>(&JCheckBoxMenuItem::init$))},
	{"<init>", "(Ljavax/swing/Action;)V", nullptr, $PUBLIC, $method(static_cast<void(JCheckBoxMenuItem::*)($Action*)>(&JCheckBoxMenuItem::init$))},
	{"<init>", "(Ljava/lang/String;Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(static_cast<void(JCheckBoxMenuItem::*)($String*,$Icon*)>(&JCheckBoxMenuItem::init$))},
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(JCheckBoxMenuItem::*)($String*,bool)>(&JCheckBoxMenuItem::init$))},
	{"<init>", "(Ljava/lang/String;Ljavax/swing/Icon;Z)V", nullptr, $PUBLIC, $method(static_cast<void(JCheckBoxMenuItem::*)($String*,$Icon*,bool)>(&JCheckBoxMenuItem::init$))},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JCheckBoxMenuItem_MethodAnnotations_getAccessibleContext7},
	{"getSelectedObjects", "()[Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JCheckBoxMenuItem_MethodAnnotations_getSelectedObjects8},
	{"getState", "()Z", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JCheckBoxMenuItem_MethodAnnotations_getUIClassID10},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"setState", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, nullptr, nullptr, _JCheckBoxMenuItem_MethodAnnotations_setState12},
	{"shouldUpdateSelectedStateFromAction", "()Z", nullptr, 0},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JCheckBoxMenuItem::*)($ObjectOutputStream*)>(&JCheckBoxMenuItem::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JCheckBoxMenuItem_InnerClassesInfo_[] = {
	{"javax.swing.JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem", "javax.swing.JCheckBoxMenuItem", "AccessibleJCheckBoxMenuItem", $PROTECTED},
	{}
};

$ClassInfo _JCheckBoxMenuItem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JCheckBoxMenuItem",
	"javax.swing.JMenuItem",
	nullptr,
	_JCheckBoxMenuItem_FieldInfo_,
	_JCheckBoxMenuItem_MethodInfo_,
	nullptr,
	nullptr,
	_JCheckBoxMenuItem_InnerClassesInfo_,
	_JCheckBoxMenuItem_Annotations_,
	nullptr,
	"javax.swing.JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem"
};

$Object* allocate$JCheckBoxMenuItem($Class* clazz) {
	return $of($alloc(JCheckBoxMenuItem));
}

$String* JCheckBoxMenuItem::uiClassID = nullptr;

void JCheckBoxMenuItem::init$() {
	JCheckBoxMenuItem::init$(nullptr, nullptr, false);
}

void JCheckBoxMenuItem::init$($Icon* icon) {
	JCheckBoxMenuItem::init$(nullptr, icon, false);
}

void JCheckBoxMenuItem::init$($String* text) {
	JCheckBoxMenuItem::init$(text, nullptr, false);
}

void JCheckBoxMenuItem::init$($Action* a) {
	JCheckBoxMenuItem::init$();
	setAction(a);
}

void JCheckBoxMenuItem::init$($String* text, $Icon* icon) {
	JCheckBoxMenuItem::init$(text, icon, false);
}

void JCheckBoxMenuItem::init$($String* text, bool b) {
	JCheckBoxMenuItem::init$(text, nullptr, b);
}

void JCheckBoxMenuItem::init$($String* text, $Icon* icon, bool b) {
	$JMenuItem::init$(text, icon);
	setModel($$new($JToggleButton$ToggleButtonModel));
	setSelected(b);
	setFocusable(false);
}

$String* JCheckBoxMenuItem::getUIClassID() {
	return JCheckBoxMenuItem::uiClassID;
}

bool JCheckBoxMenuItem::getState() {
	return isSelected();
}

void JCheckBoxMenuItem::setState(bool b) {
	$synchronized(this) {
		setSelected(b);
	}
}

$ObjectArray* JCheckBoxMenuItem::getSelectedObjects() {
	$useLocalCurrentObjectStackCache();
	if (isSelected() == false) {
		return nullptr;
	}
	$var($ObjectArray, selectedObjects, $new($ObjectArray, 1));
	selectedObjects->set(0, $(getText()));
	return selectedObjects;
}

void JCheckBoxMenuItem::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JCheckBoxMenuItem::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

$String* JCheckBoxMenuItem::paramString() {
	return $JMenuItem::paramString();
}

bool JCheckBoxMenuItem::shouldUpdateSelectedStateFromAction() {
	return true;
}

$AccessibleContext* JCheckBoxMenuItem::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JCheckBoxMenuItem$AccessibleJCheckBoxMenuItem, this));
	}
	return this->accessibleContext;
}

JCheckBoxMenuItem::JCheckBoxMenuItem() {
}

void clinit$JCheckBoxMenuItem($Class* class$) {
	$assignStatic(JCheckBoxMenuItem::uiClassID, "CheckBoxMenuItemUI"_s);
}

$Class* JCheckBoxMenuItem::load$($String* name, bool initialize) {
	$loadClass(JCheckBoxMenuItem, name, initialize, &_JCheckBoxMenuItem_ClassInfo_, clinit$JCheckBoxMenuItem, allocate$JCheckBoxMenuItem);
	return class$;
}

$Class* JCheckBoxMenuItem::class$ = nullptr;

	} // swing
} // javax