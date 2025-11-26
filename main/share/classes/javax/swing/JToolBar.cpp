#include <javax/swing/JToolBar.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/ObjectOutputStream.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/JToolBar$1.h>
#include <javax/swing/JToolBar$AccessibleJToolBar.h>
#include <javax/swing/JToolBar$DefaultToolBarLayout.h>
#include <javax/swing/JToolBar$Separator.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ToolBarUI.h>
#include <jcpp.h>

#undef BOTTOM
#undef CENTER
#undef FALSE
#undef HORIZONTAL
#undef LARGE_ICON_KEY
#undef SMALL_ICON
#undef TRUE
#undef VERTICAL

using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Attribute = ::java::lang::Attribute;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JSeparator = ::javax::swing::JSeparator;
using $JToolBar$1 = ::javax::swing::JToolBar$1;
using $JToolBar$AccessibleJToolBar = ::javax::swing::JToolBar$AccessibleJToolBar;
using $JToolBar$DefaultToolBarLayout = ::javax::swing::JToolBar$DefaultToolBarLayout;
using $JToolBar$Separator = ::javax::swing::JToolBar$Separator;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ToolBarUI = ::javax::swing::plaf::ToolBarUI;

namespace javax {
	namespace swing {

$NamedAttribute JToolBar_Attribute_var$0[] = {
	{"defaultProperty", 's', "UI"},
	{"description", 's', "A component which displays commonly used controls or Actions."},
	{}
};

$CompoundAttribute _JToolBar_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JToolBar_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", nullptr},
	{}
};

$NamedAttribute JToolBar_Attribute_var$1[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JToolBar_MethodAnnotations_getAccessibleContext11[] = {
	{"Ljava/beans/BeanProperty;", JToolBar_Attribute_var$1},
	{}
};

$NamedAttribute JToolBar_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JToolBar_MethodAnnotations_getUIClassID17[] = {
	{"Ljava/beans/BeanProperty;", JToolBar_Attribute_var$2},
	{}
};

$NamedAttribute JToolBar_Attribute_var$3[] = {
	{"expert", 'Z', "true"},
	{"description", 's', "Does the tool bar paint its borders?"},
	{}
};

$CompoundAttribute _JToolBar_MethodAnnotations_setBorderPainted23[] = {
	{"Ljava/beans/BeanProperty;", JToolBar_Attribute_var$3},
	{}
};

$NamedAttribute JToolBar_Attribute_var$4[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "Can the tool bar be made to float by the user?"},
	{}
};

$CompoundAttribute _JToolBar_MethodAnnotations_setFloatable24[] = {
	{"Ljava/beans/BeanProperty;", JToolBar_Attribute_var$4},
	{}
};

$NamedAttribute JToolBar_Attribute_var$5[] = {
	{"expert", 'Z', "true"},
	{"description", 's', "The margin between the tool bar\'s border and contents"},
	{}
};

$CompoundAttribute _JToolBar_MethodAnnotations_setMargin26[] = {
	{"Ljava/beans/BeanProperty;", JToolBar_Attribute_var$5},
	{}
};

$Attribute JToolBar_Attribute_var$7[] = {
	{'s', "SwingConstants.HORIZONTAL"},
	{'s', "SwingConstants.VERTICAL"},
	{'-'}
};

$NamedAttribute JToolBar_Attribute_var$6[] = {
	{"preferred", 'Z', "true"},
	{"enumerationValues", '[', JToolBar_Attribute_var$7},
	{"description", 's', "The current orientation of the tool bar"},
	{}
};

$CompoundAttribute _JToolBar_MethodAnnotations_setOrientation27[] = {
	{"Ljava/beans/BeanProperty;", JToolBar_Attribute_var$6},
	{}
};

$NamedAttribute JToolBar_Attribute_var$8[] = {
	{"preferred", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "Will draw rollover button borders in the toolbar."},
	{}
};

$CompoundAttribute _JToolBar_MethodAnnotations_setRollover28[] = {
	{"Ljava/beans/BeanProperty;", JToolBar_Attribute_var$8},
	{}
};

$NamedAttribute JToolBar_Attribute_var$9[] = {
	{"hidden", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The UI object that implements the Component\'s LookAndFeel."},
	{}
};

$CompoundAttribute _JToolBar_MethodAnnotations_setUI29[] = {
	{"Ljava/beans/BeanProperty;", JToolBar_Attribute_var$9},
	{}
};

$FieldInfo _JToolBar_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JToolBar, uiClassID)},
	{"paintBorder", "Z", nullptr, $PRIVATE, $field(JToolBar, paintBorder$)},
	{"margin", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(JToolBar, margin)},
	{"floatable", "Z", nullptr, $PRIVATE, $field(JToolBar, floatable)},
	{"orientation", "I", nullptr, $PRIVATE, $field(JToolBar, orientation)},
	{}
};

$MethodInfo _JToolBar_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JToolBar::*)()>(&JToolBar::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(JToolBar::*)(int32_t)>(&JToolBar::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JToolBar::*)($String*)>(&JToolBar::init$))},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(JToolBar::*)($String*,int32_t)>(&JToolBar::init$))},
	{"add", "(Ljavax/swing/Action;)Ljavax/swing/JButton;", nullptr, $PUBLIC},
	{"addImpl", "(Ljava/awt/Component;Ljava/lang/Object;I)V", nullptr, $PROTECTED},
	{"addSeparator", "()V", nullptr, $PUBLIC},
	{"addSeparator", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC},
	{"checkOrientation", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(JToolBar::*)(int32_t)>(&JToolBar::checkOrientation))},
	{"createActionChangeListener", "(Ljavax/swing/JButton;)Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createActionComponent", "(Ljavax/swing/Action;)Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JToolBar_MethodAnnotations_getAccessibleContext11},
	{"getComponentAtIndex", "(I)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getComponentIndex", "(Ljava/awt/Component;)I", nullptr, $PUBLIC},
	{"getMargin", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getOrientation", "()I", nullptr, $PUBLIC},
	{"getUI", "()Ljavax/swing/plaf/ToolBarUI;", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JToolBar_MethodAnnotations_getUIClassID17},
	{"isBorderPainted", "()Z", nullptr, $PUBLIC},
	{"isFloatable", "()Z", nullptr, $PUBLIC},
	{"isRollover", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"setBorderPainted", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JToolBar_MethodAnnotations_setBorderPainted23},
	{"setFloatable", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JToolBar_MethodAnnotations_setFloatable24},
	{"setLayout", "(Ljava/awt/LayoutManager;)V", nullptr, $PUBLIC},
	{"setMargin", "(Ljava/awt/Insets;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JToolBar_MethodAnnotations_setMargin26},
	{"setOrientation", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JToolBar_MethodAnnotations_setOrientation27},
	{"setRollover", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JToolBar_MethodAnnotations_setRollover28},
	{"setUI", "(Ljavax/swing/plaf/ToolBarUI;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JToolBar_MethodAnnotations_setUI29},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JToolBar::*)($ObjectOutputStream*)>(&JToolBar::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JToolBar_InnerClassesInfo_[] = {
	{"javax.swing.JToolBar$AccessibleJToolBar", "javax.swing.JToolBar", "AccessibleJToolBar", $PROTECTED},
	{"javax.swing.JToolBar$DefaultToolBarLayout", "javax.swing.JToolBar", "DefaultToolBarLayout", $PRIVATE},
	{"javax.swing.JToolBar$Separator", "javax.swing.JToolBar", "Separator", $PUBLIC | $STATIC},
	{"javax.swing.JToolBar$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JToolBar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JToolBar",
	"javax.swing.JComponent",
	"javax.swing.SwingConstants,javax.accessibility.Accessible",
	_JToolBar_FieldInfo_,
	_JToolBar_MethodInfo_,
	nullptr,
	nullptr,
	_JToolBar_InnerClassesInfo_,
	_JToolBar_Annotations_,
	nullptr,
	"javax.swing.JToolBar$AccessibleJToolBar,javax.swing.JToolBar$DefaultToolBarLayout,javax.swing.JToolBar$Separator,javax.swing.JToolBar$1"
};

$Object* allocate$JToolBar($Class* clazz) {
	return $of($alloc(JToolBar));
}

$String* JToolBar::toString() {
	 return this->$JComponent::toString();
}

int32_t JToolBar::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JToolBar::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JToolBar::clone() {
	 return this->$JComponent::clone();
}

void JToolBar::finalize() {
	this->$JComponent::finalize();
}

$String* JToolBar::uiClassID = nullptr;

void JToolBar::init$() {
	JToolBar::init$($SwingConstants::HORIZONTAL);
}

void JToolBar::init$(int32_t orientation) {
	JToolBar::init$(nullptr, orientation);
}

void JToolBar::init$($String* name) {
	JToolBar::init$(name, $SwingConstants::HORIZONTAL);
}

void JToolBar::init$($String* name, int32_t orientation) {
	$JComponent::init$();
	this->paintBorder$ = true;
	$set(this, margin, nullptr);
	this->floatable = true;
	this->orientation = $SwingConstants::HORIZONTAL;
	setName(name);
	checkOrientation(orientation);
	this->orientation = orientation;
	$var($JToolBar$DefaultToolBarLayout, layout, $new($JToolBar$DefaultToolBarLayout, this, orientation));
	setLayout(layout);
	addPropertyChangeListener(layout);
	updateUI();
}

$ComponentUI* JToolBar::getUI() {
	return $cast($ToolBarUI, this->ui);
}

void JToolBar::setUI($ToolBarUI* ui) {
	$JComponent::setUI(ui);
}

void JToolBar::updateUI() {
	$useLocalCurrentObjectStackCache();
	setUI($cast($ToolBarUI, $($UIManager::getUI(this))));
	if (getLayout() == nullptr) {
		setLayout($$new($JToolBar$DefaultToolBarLayout, this, getOrientation()));
	}
	invalidate();
}

$String* JToolBar::getUIClassID() {
	return JToolBar::uiClassID;
}

int32_t JToolBar::getComponentIndex($Component* c) {
	$useLocalCurrentObjectStackCache();
	int32_t ncomponents = this->getComponentCount();
	$var($ComponentArray, component, this->getComponents());
	for (int32_t i = 0; i < ncomponents; ++i) {
		$var($Component, comp, $nc(component)->get(i));
		if (comp == c) {
			return i;
		}
	}
	return -1;
}

$Component* JToolBar::getComponentAtIndex(int32_t i) {
	int32_t ncomponents = this->getComponentCount();
	if (i >= 0 && i < ncomponents) {
		$var($ComponentArray, component, this->getComponents());
		return $nc(component)->get(i);
	}
	return nullptr;
}

void JToolBar::setMargin($Insets* m) {
	$var($Insets, old, this->margin);
	$set(this, margin, m);
	firePropertyChange("margin"_s, $of(old), $of(m));
	revalidate();
	repaint();
}

$Insets* JToolBar::getMargin() {
	if (this->margin == nullptr) {
		return $new($Insets, 0, 0, 0, 0);
	} else {
		return this->margin;
	}
}

bool JToolBar::isBorderPainted() {
	return this->paintBorder$;
}

void JToolBar::setBorderPainted(bool b) {
	if (this->paintBorder$ != b) {
		bool old = this->paintBorder$;
		this->paintBorder$ = b;
		firePropertyChange("borderPainted"_s, old, b);
		revalidate();
		repaint();
	}
}

void JToolBar::paintBorder($Graphics* g) {
	if (isBorderPainted()) {
		$JComponent::paintBorder(g);
	}
}

bool JToolBar::isFloatable() {
	return this->floatable;
}

void JToolBar::setFloatable(bool b) {
	if (this->floatable != b) {
		bool old = this->floatable;
		this->floatable = b;
		firePropertyChange("floatable"_s, old, b);
		revalidate();
		repaint();
	}
}

int32_t JToolBar::getOrientation() {
	return this->orientation;
}

void JToolBar::setOrientation(int32_t o) {
	checkOrientation(o);
	if (this->orientation != o) {
		int32_t old = this->orientation;
		this->orientation = o;
		firePropertyChange("orientation"_s, old, o);
		revalidate();
		repaint();
	}
}

void JToolBar::setRollover(bool rollover) {
	$init($Boolean);
	putClientProperty("JToolBar.isRollover"_s, rollover ? $Boolean::TRUE : $Boolean::FALSE);
}

bool JToolBar::isRollover() {
	$var($Boolean, rollover, $cast($Boolean, getClientProperty("JToolBar.isRollover"_s)));
	if (rollover != nullptr) {
		return rollover->booleanValue();
	}
	return false;
}

void JToolBar::checkOrientation(int32_t orientation) {
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

void JToolBar::addSeparator() {
	addSeparator(nullptr);
}

void JToolBar::addSeparator($Dimension* size) {
	$var($JToolBar$Separator, s, $new($JToolBar$Separator, size));
	add(static_cast<$Component*>(s));
}

$JButton* JToolBar::add($Action* a) {
	$var($JButton, b, createActionComponent(a));
	$nc(b)->setAction(a);
	add(static_cast<$Component*>(b));
	return b;
}

$JButton* JToolBar::createActionComponent($Action* a) {
	$var($JButton, b, $new($JToolBar$1, this));
	bool var$0 = a != nullptr;
	if (var$0) {
		$init($Action);
		bool var$1 = a->getValue($Action::SMALL_ICON) != nullptr;
		var$0 = (var$1 || a->getValue($Action::LARGE_ICON_KEY) != nullptr);
	}
	if (var$0) {
		b->setHideActionText(true);
	}
	b->setHorizontalTextPosition($JButton::CENTER);
	b->setVerticalTextPosition($JButton::BOTTOM);
	return b;
}

$PropertyChangeListener* JToolBar::createActionChangeListener($JButton* b) {
	return nullptr;
}

void JToolBar::addImpl($Component* comp, Object$* constraints, int32_t index) {
	if ($instanceOf($JToolBar$Separator, comp)) {
		if (getOrientation() == $SwingConstants::VERTICAL) {
			$nc(($cast($JToolBar$Separator, comp)))->setOrientation($JSeparator::HORIZONTAL);
		} else {
			$nc(($cast($JToolBar$Separator, comp)))->setOrientation($JSeparator::VERTICAL);
		}
	}
	$JComponent::addImpl(comp, constraints, index);
	if ($instanceOf($JButton, comp)) {
		$nc(($cast($JButton, comp)))->setDefaultCapable(false);
	}
}

void JToolBar::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JToolBar::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

$String* JToolBar::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, paintBorderString, this->paintBorder$ ? "true"_s : "false"_s);
	$var($String, marginString, this->margin != nullptr ? $nc(this->margin)->toString() : ""_s);
	$var($String, floatableString, this->floatable ? "true"_s : "false"_s);
	$var($String, orientationString, this->orientation == $SwingConstants::HORIZONTAL ? "HORIZONTAL"_s : "VERTICAL"_s);
	return $str({$($JComponent::paramString()), ",floatable="_s, floatableString, ",margin="_s, marginString, ",orientation="_s, orientationString, ",paintBorder="_s, paintBorderString});
}

void JToolBar::setLayout($LayoutManager* mgr) {
	$var($LayoutManager, oldMgr, getLayout());
	if ($instanceOf($PropertyChangeListener, oldMgr)) {
		removePropertyChangeListener($cast($PropertyChangeListener, oldMgr));
	}
	$JComponent::setLayout(mgr);
}

$AccessibleContext* JToolBar::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JToolBar$AccessibleJToolBar, this));
	}
	return this->accessibleContext;
}

JToolBar::JToolBar() {
}

void clinit$JToolBar($Class* class$) {
	$assignStatic(JToolBar::uiClassID, "ToolBarUI"_s);
}

$Class* JToolBar::load$($String* name, bool initialize) {
	$loadClass(JToolBar, name, initialize, &_JToolBar_ClassInfo_, clinit$JToolBar, allocate$JToolBar);
	return class$;
}

$Class* JToolBar::class$ = nullptr;

	} // swing
} // javax