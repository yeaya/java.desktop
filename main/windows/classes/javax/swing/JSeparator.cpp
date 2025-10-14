#include <javax/swing/JSeparator.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSeparator$AccessibleJSeparator.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SeparatorUI.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef VERTICAL

using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JSeparator$AccessibleJSeparator = ::javax::swing::JSeparator$AccessibleJSeparator;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SeparatorUI = ::javax::swing::plaf::SeparatorUI;

namespace javax {
	namespace swing {

$NamedAttribute JSeparator_Attribute_var$0[] = {
	{"defaultProperty", 's', "UI"},
	{"description", 's', "A divider between menu items."},
	{}
};

$NamedAttribute JSeparator_Attribute_var$1[] = {
	{"value", 'Z', "false"},
	{}
};
$CompoundAttribute _JSeparator_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JSeparator_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", JSeparator_Attribute_var$1},
	{}
};

$NamedAttribute JSeparator_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JSeparator_MethodAnnotations_getAccessibleContext3[] = {
	{"Ljava/beans/BeanProperty;", JSeparator_Attribute_var$2},
	{}
};

$NamedAttribute JSeparator_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JSeparator_MethodAnnotations_getUIClassID6[] = {
	{"Ljava/beans/BeanProperty;", JSeparator_Attribute_var$3},
	{}
};

$Attribute JSeparator_Attribute_var$5[] = {
	{'s', "SwingConstants.HORIZONTAL"},
	{'s', "SwingConstants.VERTICAL"},
	{'-'}
};

$NamedAttribute JSeparator_Attribute_var$4[] = {
	{"preferred", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"enumerationValues", '[', JSeparator_Attribute_var$5},
	{"description", 's', "The orientation of the separator."},
	{}
};

$CompoundAttribute _JSeparator_MethodAnnotations_setOrientation8[] = {
	{"Ljava/beans/BeanProperty;", JSeparator_Attribute_var$4},
	{}
};

$NamedAttribute JSeparator_Attribute_var$6[] = {
	{"hidden", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The UI object that implements the Component\'s LookAndFeel."},
	{}
};

$CompoundAttribute _JSeparator_MethodAnnotations_setUI9[] = {
	{"Ljava/beans/BeanProperty;", JSeparator_Attribute_var$6},
	{}
};


$FieldInfo _JSeparator_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JSeparator, uiClassID)},
	{"orientation", "I", nullptr, $PRIVATE, $field(JSeparator, orientation)},
	{}
};

$MethodInfo _JSeparator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JSeparator::*)()>(&JSeparator::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(JSeparator::*)(int32_t)>(&JSeparator::init$))},
	{"checkOrientation", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(JSeparator::*)(int32_t)>(&JSeparator::checkOrientation))},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSeparator_MethodAnnotations_getAccessibleContext3},
	{"getOrientation", "()I", nullptr, $PUBLIC},
	{"getUI", "()Ljavax/swing/plaf/SeparatorUI;", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSeparator_MethodAnnotations_getUIClassID6},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"setOrientation", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSeparator_MethodAnnotations_setOrientation8},
	{"setUI", "(Ljavax/swing/plaf/SeparatorUI;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JSeparator_MethodAnnotations_setUI9},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JSeparator::*)($ObjectOutputStream*)>(&JSeparator::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JSeparator_InnerClassesInfo_[] = {
	{"javax.swing.JSeparator$AccessibleJSeparator", "javax.swing.JSeparator", "AccessibleJSeparator", $PROTECTED},
	{}
};

$ClassInfo _JSeparator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JSeparator",
	"javax.swing.JComponent",
	"javax.swing.SwingConstants,javax.accessibility.Accessible",
	_JSeparator_FieldInfo_,
	_JSeparator_MethodInfo_,
	nullptr,
	nullptr,
	_JSeparator_InnerClassesInfo_,
	_JSeparator_Annotations_,
	nullptr,
	"javax.swing.JSeparator$AccessibleJSeparator"
};

$Object* allocate$JSeparator($Class* clazz) {
	return $of($alloc(JSeparator));
}

$String* JSeparator::toString() {
	 return this->$JComponent::toString();
}

int32_t JSeparator::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JSeparator::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JSeparator::clone() {
	 return this->$JComponent::clone();
}

void JSeparator::finalize() {
	this->$JComponent::finalize();
}


$String* JSeparator::uiClassID = nullptr;

void JSeparator::init$() {
	JSeparator::init$($SwingConstants::HORIZONTAL);
}

void JSeparator::init$(int32_t orientation) {
	$JComponent::init$();
	this->orientation = $SwingConstants::HORIZONTAL;
	checkOrientation(orientation);
	this->orientation = orientation;
	setFocusable(false);
	updateUI();
}

$ComponentUI* JSeparator::getUI() {
	return $cast($SeparatorUI, this->ui);
}

void JSeparator::setUI($SeparatorUI* ui) {
	$JComponent::setUI(ui);
}

void JSeparator::updateUI() {
	setUI($cast($SeparatorUI, $($UIManager::getUI(this))));
}

$String* JSeparator::getUIClassID() {
	return JSeparator::uiClassID;
}

void JSeparator::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JSeparator::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

int32_t JSeparator::getOrientation() {
	return this->orientation;
}

void JSeparator::setOrientation(int32_t orientation) {
	if (this->orientation == orientation) {
		return;
	}
	int32_t oldValue = this->orientation;
	checkOrientation(orientation);
	this->orientation = orientation;
	firePropertyChange("orientation"_s, oldValue, orientation);
	revalidate();
	repaint();
}

void JSeparator::checkOrientation(int32_t orientation) {
	switch (orientation) {
	case $SwingConstants::VERTICAL:
		{}
	case $SwingConstants::HORIZONTAL:
		{
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "orientation must be one of: VERTICAL, HORIZONTAL"_s);
		}
	}
}

$String* JSeparator::paramString() {
	$var($String, orientationString, this->orientation == $SwingConstants::HORIZONTAL ? "HORIZONTAL"_s : "VERTICAL"_s);
	return $str({$($JComponent::paramString()), ",orientation="_s, orientationString});
}

$AccessibleContext* JSeparator::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JSeparator$AccessibleJSeparator, this));
	}
	return this->accessibleContext;
}

JSeparator::JSeparator() {
}

void clinit$JSeparator($Class* class$) {
	$assignStatic(JSeparator::uiClassID, "SeparatorUI"_s);
}

$Class* JSeparator::load$($String* name, bool initialize) {
	$loadClass(JSeparator, name, initialize, &_JSeparator_ClassInfo_, clinit$JSeparator, allocate$JSeparator);
	return class$;
}

$Class* JSeparator::class$ = nullptr;

	} // swing
} // javax