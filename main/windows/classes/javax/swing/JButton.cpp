#include <javax/swing/JButton.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Attribute.h>
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
#include <javax/swing/ButtonModel.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton$AccessibleJButton.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AbstractButton = ::javax::swing::AbstractButton;
using $AbstractButton$AccessibleAbstractButton = ::javax::swing::AbstractButton$AccessibleAbstractButton;
using $Action = ::javax::swing::Action;
using $ButtonModel = ::javax::swing::ButtonModel;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;
using $Icon = ::javax::swing::Icon;
using $JButton$AccessibleJButton = ::javax::swing::JButton$AccessibleJButton;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JRootPane = ::javax::swing::JRootPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {

$NamedAttribute JButton_Attribute_var$0[] = {
	{"defaultProperty", 's', "UIClassID"},
	{"description", 's', "An implementation of a \"push\" button."},
	{}
};

$NamedAttribute JButton_Attribute_var$1[] = {
	{"value", 'Z', "false"},
	{}
};
$CompoundAttribute _JButton_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JButton_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", JButton_Attribute_var$1},
	{}
};

$Attribute JButton_Attribute_var$3[] = {
	{'s', "text"},
	{'-'}
};

$NamedAttribute JButton_Attribute_var$2[] = {
	{"value", '[', JButton_Attribute_var$3},
	{}
};

$CompoundAttribute _JButton_MethodAnnotations_init$2[] = {
	{"Ljava/beans/ConstructorProperties;", JButton_Attribute_var$2},
	{}
};

$NamedAttribute JButton_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{"expert", 'Z', "true"},
	{"description", 's', "The AccessibleContext associated with this Button."},
	{}
};

$CompoundAttribute _JButton_MethodAnnotations_getAccessibleContext5[] = {
	{"Ljava/beans/BeanProperty;", JButton_Attribute_var$4},
	{}
};

$NamedAttribute JButton_Attribute_var$5[] = {
	{"bound", 'Z', "false"},
	{"expert", 'Z', "true"},
	{"description", 's', "A string that specifies the name of the L&F class."},
	{}
};

$CompoundAttribute _JButton_MethodAnnotations_getUIClassID6[] = {
	{"Ljava/beans/BeanProperty;", JButton_Attribute_var$5},
	{}
};

$NamedAttribute JButton_Attribute_var$6[] = {
	{"bound", 'Z', "false"},
	{"description", 's', "Whether or not this button is the default button"},
	{}
};

$CompoundAttribute _JButton_MethodAnnotations_isDefaultButton7[] = {
	{"Ljava/beans/BeanProperty;", JButton_Attribute_var$6},
	{}
};

$NamedAttribute JButton_Attribute_var$7[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "Whether or not this button can be the default button"},
	{}
};

$CompoundAttribute _JButton_MethodAnnotations_setDefaultCapable11[] = {
	{"Ljava/beans/BeanProperty;", JButton_Attribute_var$7},
	{}
};


$FieldInfo _JButton_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JButton, uiClassID)},
	{}
};

$MethodInfo _JButton_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JButton::*)()>(&JButton::init$))},
	{"<init>", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(static_cast<void(JButton::*)($Icon*)>(&JButton::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JButton::*)($String*)>(&JButton::init$)), nullptr, nullptr, _JButton_MethodAnnotations_init$2},
	{"<init>", "(Ljavax/swing/Action;)V", nullptr, $PUBLIC, $method(static_cast<void(JButton::*)($Action*)>(&JButton::init$))},
	{"<init>", "(Ljava/lang/String;Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(static_cast<void(JButton::*)($String*,$Icon*)>(&JButton::init$))},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JButton_MethodAnnotations_getAccessibleContext5},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JButton_MethodAnnotations_getUIClassID6},
	{"isDefaultButton", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JButton_MethodAnnotations_isDefaultButton7},
	{"isDefaultCapable", "()Z", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"removeNotify", "()V", nullptr, $PUBLIC},
	{"setDefaultCapable", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JButton_MethodAnnotations_setDefaultCapable11},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JButton::*)($ObjectOutputStream*)>(&JButton::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JButton_InnerClassesInfo_[] = {
	{"javax.swing.JButton$AccessibleJButton", "javax.swing.JButton", "AccessibleJButton", $PROTECTED},
	{}
};

$ClassInfo _JButton_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JButton",
	"javax.swing.AbstractButton",
	"javax.accessibility.Accessible",
	_JButton_FieldInfo_,
	_JButton_MethodInfo_,
	nullptr,
	nullptr,
	_JButton_InnerClassesInfo_,
	_JButton_Annotations_,
	nullptr,
	"javax.swing.JButton$AccessibleJButton"
};

$Object* allocate$JButton($Class* clazz) {
	return $of($alloc(JButton));
}

$String* JButton::toString() {
	 return this->$AbstractButton::toString();
}

int32_t JButton::hashCode() {
	 return this->$AbstractButton::hashCode();
}

bool JButton::equals(Object$* arg0) {
	 return this->$AbstractButton::equals(arg0);
}

$Object* JButton::clone() {
	 return this->$AbstractButton::clone();
}

void JButton::finalize() {
	this->$AbstractButton::finalize();
}


$String* JButton::uiClassID = nullptr;

void JButton::init$() {
	JButton::init$(nullptr, nullptr);
}

void JButton::init$($Icon* icon) {
	JButton::init$(nullptr, icon);
}

void JButton::init$($String* text) {
	JButton::init$(text, nullptr);
}

void JButton::init$($Action* a) {
	JButton::init$();
	setAction(a);
}

void JButton::init$($String* text, $Icon* icon) {
	$AbstractButton::init$();
	setModel($$new($DefaultButtonModel));
	init(text, icon);
}

void JButton::updateUI() {
	setUI($cast($ButtonUI, $($UIManager::getUI(this))));
}

$String* JButton::getUIClassID() {
	return JButton::uiClassID;
}

bool JButton::isDefaultButton() {
	$var($JRootPane, root, $SwingUtilities::getRootPane(this));
	if (root != nullptr) {
		return root->getDefaultButton() == this;
	}
	return false;
}

bool JButton::isDefaultCapable() {
	return this->defaultCapable;
}

void JButton::setDefaultCapable(bool defaultCapable) {
	bool oldDefaultCapable = this->defaultCapable;
	this->defaultCapable = defaultCapable;
	firePropertyChange("defaultCapable"_s, oldDefaultCapable, defaultCapable);
}

void JButton::removeNotify() {
	$var($JRootPane, root, $SwingUtilities::getRootPane(this));
	if (root != nullptr && root->getDefaultButton() == this) {
		root->setDefaultButton(nullptr);
	}
	$AbstractButton::removeNotify();
}

void JButton::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JButton::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

$String* JButton::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, defaultCapableString, this->defaultCapable ? "true"_s : "false"_s);
	return $str({$($AbstractButton::paramString()), ",defaultCapable="_s, defaultCapableString});
}

$AccessibleContext* JButton::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JButton$AccessibleJButton, this));
	}
	return this->accessibleContext;
}

JButton::JButton() {
}

void clinit$JButton($Class* class$) {
	$assignStatic(JButton::uiClassID, "ButtonUI"_s);
}

$Class* JButton::load$($String* name, bool initialize) {
	$loadClass(JButton, name, initialize, &_JButton_ClassInfo_, clinit$JButton, allocate$JButton);
	return class$;
}

$Class* JButton::class$ = nullptr;

	} // swing
} // javax