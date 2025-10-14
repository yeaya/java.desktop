#include <javax/swing/JPanel.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Boolean.h>
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
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel$AccessibleJPanel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/PanelUI.h>
#include <jcpp.h>

#undef TRUE

using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JPanel$AccessibleJPanel = ::javax::swing::JPanel$AccessibleJPanel;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $PanelUI = ::javax::swing::plaf::PanelUI;

namespace javax {
	namespace swing {

$NamedAttribute JPanel_Attribute_var$0[] = {
	{"defaultProperty", 's', "UI"},
	{"description", 's', "A generic lightweight container."},
	{}
};
$CompoundAttribute _JPanel_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JPanel_Attribute_var$0},
	{}
};

$NamedAttribute JPanel_Attribute_var$1[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JPanel_MethodAnnotations_getAccessibleContext4[] = {
	{"Ljava/beans/BeanProperty;", JPanel_Attribute_var$1},
	{}
};

$NamedAttribute JPanel_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{"expert", 'Z', "true"},
	{"description", 's', "A string that specifies the name of the L&F class."},
	{}
};

$CompoundAttribute _JPanel_MethodAnnotations_getUIClassID6[] = {
	{"Ljava/beans/BeanProperty;", JPanel_Attribute_var$2},
	{}
};

$NamedAttribute JPanel_Attribute_var$3[] = {
	{"hidden", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The UI object that implements the Component\'s LookAndFeel."},
	{}
};

$CompoundAttribute _JPanel_MethodAnnotations_setUI8[] = {
	{"Ljava/beans/BeanProperty;", JPanel_Attribute_var$3},
	{}
};


$FieldInfo _JPanel_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPanel, uiClassID)},
	{}
};

$MethodInfo _JPanel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/LayoutManager;Z)V", nullptr, $PUBLIC, $method(static_cast<void(JPanel::*)($LayoutManager*,bool)>(&JPanel::init$))},
	{"<init>", "(Ljava/awt/LayoutManager;)V", nullptr, $PUBLIC, $method(static_cast<void(JPanel::*)($LayoutManager*)>(&JPanel::init$))},
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(JPanel::*)(bool)>(&JPanel::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JPanel::*)()>(&JPanel::init$))},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JPanel_MethodAnnotations_getAccessibleContext4},
	{"getUI", "()Ljavax/swing/plaf/PanelUI;", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JPanel_MethodAnnotations_getUIClassID6},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"setUI", "(Ljavax/swing/plaf/PanelUI;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JPanel_MethodAnnotations_setUI8},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JPanel::*)($ObjectOutputStream*)>(&JPanel::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JPanel_InnerClassesInfo_[] = {
	{"javax.swing.JPanel$AccessibleJPanel", "javax.swing.JPanel", "AccessibleJPanel", $PROTECTED},
	{}
};

$ClassInfo _JPanel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JPanel",
	"javax.swing.JComponent",
	"javax.accessibility.Accessible",
	_JPanel_FieldInfo_,
	_JPanel_MethodInfo_,
	nullptr,
	nullptr,
	_JPanel_InnerClassesInfo_,
	_JPanel_Annotations_,
	nullptr,
	"javax.swing.JPanel$AccessibleJPanel"
};

$Object* allocate$JPanel($Class* clazz) {
	return $of($alloc(JPanel));
}

$String* JPanel::toString() {
	 return this->$JComponent::toString();
}

int32_t JPanel::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JPanel::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JPanel::clone() {
	 return this->$JComponent::clone();
}

void JPanel::finalize() {
	this->$JComponent::finalize();
}


$String* JPanel::uiClassID = nullptr;

void JPanel::init$($LayoutManager* layout, bool isDoubleBuffered) {
	$JComponent::init$();
	setLayout(layout);
	setDoubleBuffered(isDoubleBuffered);
	$init($Boolean);
	setUIProperty("opaque"_s, $Boolean::TRUE);
	updateUI();
}

void JPanel::init$($LayoutManager* layout) {
	JPanel::init$(layout, true);
}

void JPanel::init$(bool isDoubleBuffered) {
	JPanel::init$($$new($FlowLayout), isDoubleBuffered);
}

void JPanel::init$() {
	JPanel::init$(true);
}

void JPanel::updateUI() {
	setUI($cast($PanelUI, $($UIManager::getUI(this))));
}

$ComponentUI* JPanel::getUI() {
	return $cast($PanelUI, this->ui);
}

void JPanel::setUI($PanelUI* ui) {
	$JComponent::setUI(ui);
}

$String* JPanel::getUIClassID() {
	return JPanel::uiClassID;
}

void JPanel::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JPanel::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

$String* JPanel::paramString() {
	return $JComponent::paramString();
}

$AccessibleContext* JPanel::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JPanel$AccessibleJPanel, this));
	}
	return this->accessibleContext;
}

JPanel::JPanel() {
}

void clinit$JPanel($Class* class$) {
	$assignStatic(JPanel::uiClassID, "PanelUI"_s);
}

$Class* JPanel::load$($String* name, bool initialize) {
	$loadClass(JPanel, name, initialize, &_JPanel_ClassInfo_, clinit$JPanel, allocate$JPanel);
	return class$;
}

$Class* JPanel::class$ = nullptr;

	} // swing
} // javax