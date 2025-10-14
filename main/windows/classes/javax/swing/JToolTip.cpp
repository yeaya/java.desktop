#include <javax/swing/JToolTip.h>

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
#include <java/util/Objects.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToolTip$AccessibleJToolTip.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ToolTipUI.h>
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
using $Objects = ::java::util::Objects;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JToolTip$AccessibleJToolTip = ::javax::swing::JToolTip$AccessibleJToolTip;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ToolTipUI = ::javax::swing::plaf::ToolTipUI;

namespace javax {
	namespace swing {

$NamedAttribute JToolTip_Attribute_var$0[] = {
	{"description", 's', "Sets the component that the tooltip describes."},
	{}
};

$CompoundAttribute _JToolTip_MethodAnnotations_setComponent8[] = {
	{"Ljava/beans/BeanProperty;", JToolTip_Attribute_var$0},
	{}
};

$NamedAttribute JToolTip_Attribute_var$1[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "Sets the text of the tooltip"},
	{}
};

$CompoundAttribute _JToolTip_MethodAnnotations_setTipText9[] = {
	{"Ljava/beans/BeanProperty;", JToolTip_Attribute_var$1},
	{}
};

$FieldInfo _JToolTip_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JToolTip, uiClassID)},
	{"tipText", "Ljava/lang/String;", nullptr, 0, $field(JToolTip, tipText)},
	{"component", "Ljavax/swing/JComponent;", nullptr, 0, $field(JToolTip, component)},
	{}
};

$MethodInfo _JToolTip_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JToolTip::*)()>(&JToolTip::init$))},
	{"alwaysOnTop", "()Z", nullptr, 0},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getComponent", "()Ljavax/swing/JComponent;", nullptr, $PUBLIC},
	{"getTipText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUI", "()Ljavax/swing/plaf/ToolTipUI;", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"setComponent", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JToolTip_MethodAnnotations_setComponent8},
	{"setTipText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JToolTip_MethodAnnotations_setTipText9},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JToolTip::*)($ObjectOutputStream*)>(&JToolTip::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JToolTip_InnerClassesInfo_[] = {
	{"javax.swing.JToolTip$AccessibleJToolTip", "javax.swing.JToolTip", "AccessibleJToolTip", $PROTECTED},
	{}
};

$ClassInfo _JToolTip_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JToolTip",
	"javax.swing.JComponent",
	"javax.accessibility.Accessible",
	_JToolTip_FieldInfo_,
	_JToolTip_MethodInfo_,
	nullptr,
	nullptr,
	_JToolTip_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.JToolTip$AccessibleJToolTip"
};

$Object* allocate$JToolTip($Class* clazz) {
	return $of($alloc(JToolTip));
}

$String* JToolTip::toString() {
	 return this->$JComponent::toString();
}

int32_t JToolTip::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JToolTip::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JToolTip::clone() {
	 return this->$JComponent::clone();
}

void JToolTip::finalize() {
	this->$JComponent::finalize();
}


$String* JToolTip::uiClassID = nullptr;

void JToolTip::init$() {
	$JComponent::init$();
	updateUI();
}

$ComponentUI* JToolTip::getUI() {
	return $cast($ToolTipUI, this->ui);
}

void JToolTip::updateUI() {
	setUI($cast($ToolTipUI, $($UIManager::getUI(this))));
}

$String* JToolTip::getUIClassID() {
	return JToolTip::uiClassID;
}

void JToolTip::setTipText($String* tipText) {
	$var($String, oldValue, this->tipText);
	$set(this, tipText, tipText);
	firePropertyChange("tiptext"_s, $of(oldValue), $of(tipText));
	if (!$Objects::equals(oldValue, tipText)) {
		revalidate();
		repaint();
	}
}

$String* JToolTip::getTipText() {
	return this->tipText;
}

void JToolTip::setComponent($JComponent* c) {
	$var($JComponent, oldValue, this->component);
	$set(this, component, c);
	firePropertyChange("component"_s, $of(oldValue), $of(c));
}

$JComponent* JToolTip::getComponent() {
	return this->component;
}

bool JToolTip::alwaysOnTop() {
	return true;
}

void JToolTip::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JToolTip::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

$String* JToolTip::paramString() {
	$var($String, tipTextString, this->tipText != nullptr ? this->tipText : ""_s);
	return $str({$($JComponent::paramString()), ",tipText="_s, tipTextString});
}

$AccessibleContext* JToolTip::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JToolTip$AccessibleJToolTip, this));
	}
	return this->accessibleContext;
}

JToolTip::JToolTip() {
}

void clinit$JToolTip($Class* class$) {
	$assignStatic(JToolTip::uiClassID, "ToolTipUI"_s);
}

$Class* JToolTip::load$($String* name, bool initialize) {
	$loadClass(JToolTip, name, initialize, &_JToolTip_ClassInfo_, clinit$JToolTip, allocate$JToolTip);
	return class$;
}

$Class* JToolTip::class$ = nullptr;

	} // swing
} // javax