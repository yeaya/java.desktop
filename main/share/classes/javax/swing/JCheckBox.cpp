#include <javax/swing/JCheckBox.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractButton$AccessibleAbstractButton.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JCheckBox$AccessibleJCheckBox.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToggleButton$AccessibleJToggleButton.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

#undef BORDER_PAINTED_FLAT_CHANGED_PROPERTY
#undef FALSE
#undef LEADING

using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Boolean = ::java::lang::Boolean;
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
using $JCheckBox$AccessibleJCheckBox = ::javax::swing::JCheckBox$AccessibleJCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JToggleButton = ::javax::swing::JToggleButton;
using $JToggleButton$AccessibleJToggleButton = ::javax::swing::JToggleButton$AccessibleJToggleButton;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {

$NamedAttribute JCheckBox_Attribute_var$0[] = {
	{"description", 's', "A component which can be selected or deselected."},
	{}
};

$NamedAttribute JCheckBox_Attribute_var$1[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _JCheckBox_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JCheckBox_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", JCheckBox_Attribute_var$1},
	{}
};

$NamedAttribute JCheckBox_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{"expert", 'Z', "true"},
	{"description", 's', "The AccessibleContext associated with this CheckBox."},
	{}
};

$CompoundAttribute _JCheckBox_MethodAnnotations_getAccessibleContext8[] = {
	{"Ljava/beans/BeanProperty;", JCheckBox_Attribute_var$2},
	{}
};

$NamedAttribute JCheckBox_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{"expert", 'Z', "true"},
	{"description", 's', "A string that specifies the name of the L&F class"},
	{}
};

$CompoundAttribute _JCheckBox_MethodAnnotations_getUIClassID9[] = {
	{"Ljava/beans/BeanProperty;", JCheckBox_Attribute_var$3},
	{}
};

$NamedAttribute JCheckBox_Attribute_var$4[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "Whether the border is painted flat."},
	{}
};

$CompoundAttribute _JCheckBox_MethodAnnotations_setBorderPaintedFlat13[] = {
	{"Ljava/beans/BeanProperty;", JCheckBox_Attribute_var$4},
	{}
};

$FieldInfo _JCheckBox_FieldInfo_[] = {
	{"BORDER_PAINTED_FLAT_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JCheckBox, BORDER_PAINTED_FLAT_CHANGED_PROPERTY)},
	{"flat", "Z", nullptr, $PRIVATE, $field(JCheckBox, flat)},
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JCheckBox, uiClassID)},
	{}
};

$MethodInfo _JCheckBox_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JCheckBox::*)()>(&JCheckBox::init$))},
	{"<init>", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(static_cast<void(JCheckBox::*)($Icon*)>(&JCheckBox::init$))},
	{"<init>", "(Ljavax/swing/Icon;Z)V", nullptr, $PUBLIC, $method(static_cast<void(JCheckBox::*)($Icon*,bool)>(&JCheckBox::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JCheckBox::*)($String*)>(&JCheckBox::init$))},
	{"<init>", "(Ljavax/swing/Action;)V", nullptr, $PUBLIC, $method(static_cast<void(JCheckBox::*)($Action*)>(&JCheckBox::init$))},
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(JCheckBox::*)($String*,bool)>(&JCheckBox::init$))},
	{"<init>", "(Ljava/lang/String;Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(static_cast<void(JCheckBox::*)($String*,$Icon*)>(&JCheckBox::init$))},
	{"<init>", "(Ljava/lang/String;Ljavax/swing/Icon;Z)V", nullptr, $PUBLIC, $method(static_cast<void(JCheckBox::*)($String*,$Icon*,bool)>(&JCheckBox::init$))},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JCheckBox_MethodAnnotations_getAccessibleContext8},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JCheckBox_MethodAnnotations_getUIClassID9},
	{"isBorderPaintedFlat", "()Z", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JCheckBox::*)($ObjectInputStream*)>(&JCheckBox::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setBorderPaintedFlat", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JCheckBox_MethodAnnotations_setBorderPaintedFlat13},
	{"setIconFromAction", "(Ljavax/swing/Action;)V", nullptr, 0},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JCheckBox::*)($ObjectOutputStream*)>(&JCheckBox::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JCheckBox_InnerClassesInfo_[] = {
	{"javax.swing.JCheckBox$AccessibleJCheckBox", "javax.swing.JCheckBox", "AccessibleJCheckBox", $PROTECTED},
	{}
};

$ClassInfo _JCheckBox_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JCheckBox",
	"javax.swing.JToggleButton",
	nullptr,
	_JCheckBox_FieldInfo_,
	_JCheckBox_MethodInfo_,
	nullptr,
	nullptr,
	_JCheckBox_InnerClassesInfo_,
	_JCheckBox_Annotations_,
	nullptr,
	"javax.swing.JCheckBox$AccessibleJCheckBox"
};

$Object* allocate$JCheckBox($Class* clazz) {
	return $of($alloc(JCheckBox));
}

$String* JCheckBox::BORDER_PAINTED_FLAT_CHANGED_PROPERTY = nullptr;
$String* JCheckBox::uiClassID = nullptr;

void JCheckBox::init$() {
	JCheckBox::init$(nullptr, nullptr, false);
}

void JCheckBox::init$($Icon* icon) {
	JCheckBox::init$(nullptr, icon, false);
}

void JCheckBox::init$($Icon* icon, bool selected) {
	JCheckBox::init$(nullptr, icon, selected);
}

void JCheckBox::init$($String* text) {
	JCheckBox::init$(text, nullptr, false);
}

void JCheckBox::init$($Action* a) {
	JCheckBox::init$();
	setAction(a);
}

void JCheckBox::init$($String* text, bool selected) {
	JCheckBox::init$(text, nullptr, selected);
}

void JCheckBox::init$($String* text, $Icon* icon) {
	JCheckBox::init$(text, icon, false);
}

void JCheckBox::init$($String* text, $Icon* icon, bool selected) {
	$JToggleButton::init$(text, icon, selected);
	this->flat = false;
	$init($Boolean);
	setUIProperty("borderPainted"_s, $Boolean::FALSE);
	setHorizontalAlignment($SwingConstants::LEADING);
}

void JCheckBox::setBorderPaintedFlat(bool b) {
	bool oldValue = this->flat;
	this->flat = b;
	firePropertyChange(JCheckBox::BORDER_PAINTED_FLAT_CHANGED_PROPERTY, oldValue, this->flat);
	if (b != oldValue) {
		revalidate();
		repaint();
	}
}

bool JCheckBox::isBorderPaintedFlat() {
	return this->flat;
}

void JCheckBox::updateUI() {
	setUI($cast($ButtonUI, $($UIManager::getUI(this))));
}

$String* JCheckBox::getUIClassID() {
	return JCheckBox::uiClassID;
}

void JCheckBox::setIconFromAction($Action* a) {
}

void JCheckBox::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JCheckBox::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

void JCheckBox::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	if ($nc($(getUIClassID()))->equals(JCheckBox::uiClassID)) {
		updateUI();
	}
}

$String* JCheckBox::paramString() {
	return $JToggleButton::paramString();
}

$AccessibleContext* JCheckBox::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JCheckBox$AccessibleJCheckBox, this));
	}
	return this->accessibleContext;
}

JCheckBox::JCheckBox() {
}

void clinit$JCheckBox($Class* class$) {
	$assignStatic(JCheckBox::BORDER_PAINTED_FLAT_CHANGED_PROPERTY, "borderPaintedFlat"_s);
	$assignStatic(JCheckBox::uiClassID, "CheckBoxUI"_s);
}

$Class* JCheckBox::load$($String* name, bool initialize) {
	$loadClass(JCheckBox, name, initialize, &_JCheckBox_ClassInfo_, clinit$JCheckBox, allocate$JCheckBox);
	return class$;
}

$Class* JCheckBox::class$ = nullptr;

	} // swing
} // javax