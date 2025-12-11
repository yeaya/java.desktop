#include <javax/swing/JMenuBar.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Error.h>
#include <java/util/Vector.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/DefaultSingleSelectionModel.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar$AccessibleJMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/KeyboardManager.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/SingleSelectionModel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuBarUI.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef DEBUG
#undef TRACE
#undef VERBOSE

using $ComponentArray = $Array<::java::awt::Component>;
using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Toolkit = ::java::awt::Toolkit;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Vector = ::java::util::Vector;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AbstractButton = ::javax::swing::AbstractButton;
using $DefaultSingleSelectionModel = ::javax::swing::DefaultSingleSelectionModel;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar$AccessibleJMenuBar = ::javax::swing::JMenuBar$AccessibleJMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $KeyStroke = ::javax::swing::KeyStroke;
using $KeyboardManager = ::javax::swing::KeyboardManager;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $SingleSelectionModel = ::javax::swing::SingleSelectionModel;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MenuBarUI = ::javax::swing::plaf::MenuBarUI;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace javax {
	namespace swing {

$NamedAttribute JMenuBar_Attribute_var$0[] = {
	{"defaultProperty", 's', "UI"},
	{"description", 's', "A container for holding and displaying menus."},
	{}
};

$CompoundAttribute _JMenuBar_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JMenuBar_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", nullptr},
	{}
};

$NamedAttribute JMenuBar_Attribute_var$1[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JMenuBar_MethodAnnotations_getAccessibleContext3[] = {
	{"Ljava/beans/BeanProperty;", JMenuBar_Attribute_var$1},
	{}
};

$CompoundAttribute _JMenuBar_MethodAnnotations_getComponentAtIndex5[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _JMenuBar_MethodAnnotations_getHelpMenu7[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$NamedAttribute JMenuBar_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JMenuBar_MethodAnnotations_getMenuCount10[] = {
	{"Ljava/beans/BeanProperty;", JMenuBar_Attribute_var$2},
	{}
};

$NamedAttribute JMenuBar_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JMenuBar_MethodAnnotations_getSubElements12[] = {
	{"Ljava/beans/BeanProperty;", JMenuBar_Attribute_var$3},
	{}
};

$NamedAttribute JMenuBar_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JMenuBar_MethodAnnotations_getUIClassID14[] = {
	{"Ljava/beans/BeanProperty;", JMenuBar_Attribute_var$4},
	{}
};

$NamedAttribute JMenuBar_Attribute_var$5[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JMenuBar_MethodAnnotations_isSelected16[] = {
	{"Ljava/beans/BeanProperty;", JMenuBar_Attribute_var$5},
	{}
};

$NamedAttribute JMenuBar_Attribute_var$6[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "Whether the border should be painted."},
	{}
};

$CompoundAttribute _JMenuBar_MethodAnnotations_setBorderPainted26[] = {
	{"Ljava/beans/BeanProperty;", JMenuBar_Attribute_var$6},
	{}
};

$NamedAttribute JMenuBar_Attribute_var$7[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The space between the menubar\'s border and its contents"},
	{}
};

$CompoundAttribute _JMenuBar_MethodAnnotations_setMargin28[] = {
	{"Ljava/beans/BeanProperty;", JMenuBar_Attribute_var$7},
	{}
};

$NamedAttribute JMenuBar_Attribute_var$8[] = {
	{"description", 's', "The selection model, recording which child is selected."},
	{}
};

$CompoundAttribute _JMenuBar_MethodAnnotations_setSelectionModel30[] = {
	{"Ljava/beans/BeanProperty;", JMenuBar_Attribute_var$8},
	{}
};

$NamedAttribute JMenuBar_Attribute_var$9[] = {
	{"hidden", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The UI object that implements the Component\'s LookAndFeel."},
	{}
};

$CompoundAttribute _JMenuBar_MethodAnnotations_setUI31[] = {
	{"Ljava/beans/BeanProperty;", JMenuBar_Attribute_var$9},
	{}
};

$FieldInfo _JMenuBar_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMenuBar, uiClassID)},
	{"selectionModel", "Ljavax/swing/SingleSelectionModel;", nullptr, $PRIVATE | $TRANSIENT, $field(JMenuBar, selectionModel)},
	{"paintBorder", "Z", nullptr, $PRIVATE, $field(JMenuBar, paintBorder$)},
	{"margin", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(JMenuBar, margin)},
	{"TRACE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMenuBar, TRACE)},
	{"VERBOSE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMenuBar, VERBOSE)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMenuBar, DEBUG)},
	{}
};

$MethodInfo _JMenuBar_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JMenuBar::*)()>(&JMenuBar::init$))},
	{"add", "(Ljavax/swing/JMenu;)Ljavax/swing/JMenu;", nullptr, $PUBLIC},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenuBar_MethodAnnotations_getAccessibleContext3},
	{"getComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getComponentAtIndex", "(I)Ljava/awt/Component;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _JMenuBar_MethodAnnotations_getComponentAtIndex5},
	{"getComponentIndex", "(Ljava/awt/Component;)I", nullptr, $PUBLIC},
	{"getHelpMenu", "()Ljavax/swing/JMenu;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenuBar_MethodAnnotations_getHelpMenu7},
	{"getMargin", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getMenu", "(I)Ljavax/swing/JMenu;", nullptr, $PUBLIC},
	{"getMenuCount", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenuBar_MethodAnnotations_getMenuCount10},
	{"getSelectionModel", "()Ljavax/swing/SingleSelectionModel;", nullptr, $PUBLIC},
	{"getSubElements", "()[Ljavax/swing/MenuElement;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenuBar_MethodAnnotations_getSubElements12},
	{"getUI", "()Ljavax/swing/plaf/MenuBarUI;", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenuBar_MethodAnnotations_getUIClassID14},
	{"isBorderPainted", "()Z", nullptr, $PUBLIC},
	{"isSelected", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenuBar_MethodAnnotations_isSelected16},
	{"menuSelectionChanged", "(Z)V", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"processBindingForKeyStrokeRecursive", "(Ljavax/swing/MenuElement;Ljavax/swing/KeyStroke;Ljava/awt/event/KeyEvent;IZ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($MenuElement*,$KeyStroke*,$KeyEvent*,int32_t,bool)>(&JMenuBar::processBindingForKeyStrokeRecursive))},
	{"processKeyBinding", "(Ljavax/swing/KeyStroke;Ljava/awt/event/KeyEvent;IZ)Z", nullptr, $PROTECTED},
	{"processKeyEvent", "(Ljava/awt/event/KeyEvent;[Ljavax/swing/MenuElement;Ljavax/swing/MenuSelectionManager;)V", nullptr, $PUBLIC},
	{"processMouseEvent", "(Ljava/awt/event/MouseEvent;[Ljavax/swing/MenuElement;Ljavax/swing/MenuSelectionManager;)V", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JMenuBar::*)($ObjectInputStream*)>(&JMenuBar::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"removeNotify", "()V", nullptr, $PUBLIC},
	{"setBorderPainted", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenuBar_MethodAnnotations_setBorderPainted26},
	{"setHelpMenu", "(Ljavax/swing/JMenu;)V", nullptr, $PUBLIC},
	{"setMargin", "(Ljava/awt/Insets;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenuBar_MethodAnnotations_setMargin28},
	{"setSelected", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setSelectionModel", "(Ljavax/swing/SingleSelectionModel;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenuBar_MethodAnnotations_setSelectionModel30},
	{"setUI", "(Ljavax/swing/plaf/MenuBarUI;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenuBar_MethodAnnotations_setUI31},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JMenuBar::*)($ObjectOutputStream*)>(&JMenuBar::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JMenuBar_InnerClassesInfo_[] = {
	{"javax.swing.JMenuBar$AccessibleJMenuBar", "javax.swing.JMenuBar", "AccessibleJMenuBar", $PROTECTED},
	{}
};

$ClassInfo _JMenuBar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JMenuBar",
	"javax.swing.JComponent",
	"javax.accessibility.Accessible,javax.swing.MenuElement",
	_JMenuBar_FieldInfo_,
	_JMenuBar_MethodInfo_,
	nullptr,
	nullptr,
	_JMenuBar_InnerClassesInfo_,
	_JMenuBar_Annotations_,
	nullptr,
	"javax.swing.JMenuBar$AccessibleJMenuBar"
};

$Object* allocate$JMenuBar($Class* clazz) {
	return $of($alloc(JMenuBar));
}

$String* JMenuBar::toString() {
	 return this->$JComponent::toString();
}

int32_t JMenuBar::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JMenuBar::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JMenuBar::clone() {
	 return this->$JComponent::clone();
}

void JMenuBar::finalize() {
	this->$JComponent::finalize();
}

$String* JMenuBar::uiClassID = nullptr;

void JMenuBar::init$() {
	$JComponent::init$();
	this->paintBorder$ = true;
	$set(this, margin, nullptr);
	setFocusTraversalKeysEnabled(false);
	setSelectionModel($$new($DefaultSingleSelectionModel));
	updateUI();
}

$ComponentUI* JMenuBar::getUI() {
	return $cast($MenuBarUI, this->ui);
}

void JMenuBar::setUI($MenuBarUI* ui) {
	$JComponent::setUI(ui);
}

void JMenuBar::updateUI() {
	$useLocalCurrentObjectStackCache();
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	if ($instanceOf($SunToolkit, tk)) {
		$nc(($cast($SunToolkit, tk)))->updateScreenMenuBarUI();
	}
	setUI($cast($MenuBarUI, $($UIManager::getUI(this))));
}

$String* JMenuBar::getUIClassID() {
	return JMenuBar::uiClassID;
}

$SingleSelectionModel* JMenuBar::getSelectionModel() {
	return this->selectionModel;
}

void JMenuBar::setSelectionModel($SingleSelectionModel* model) {
	$var($SingleSelectionModel, oldValue, this->selectionModel);
	$set(this, selectionModel, model);
	firePropertyChange("selectionModel"_s, $of(oldValue), $of(this->selectionModel));
}

$JMenu* JMenuBar::add($JMenu* c) {
	$JComponent::add(static_cast<$Component*>(c));
	return c;
}

$JMenu* JMenuBar::getMenu(int32_t index) {
	$var($Component, c, getComponentAtIndex(index));
	if ($instanceOf($JMenu, c)) {
		return $cast($JMenu, c);
	}
	return nullptr;
}

int32_t JMenuBar::getMenuCount() {
	return getComponentCount();
}

void JMenuBar::setHelpMenu($JMenu* menu) {
	$throwNew($Error, "setHelpMenu() not yet implemented."_s);
}

$JMenu* JMenuBar::getHelpMenu() {
	$throwNew($Error, "getHelpMenu() not yet implemented."_s);
	$shouldNotReachHere();
}

$Component* JMenuBar::getComponentAtIndex(int32_t i) {
	if (i < 0 || i >= getComponentCount()) {
		return nullptr;
	}
	return getComponent(i);
}

int32_t JMenuBar::getComponentIndex($Component* c) {
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

void JMenuBar::setSelected($Component* sel) {
	$var($SingleSelectionModel, model, getSelectionModel());
	int32_t index = getComponentIndex(sel);
	$nc(model)->setSelectedIndex(index);
}

bool JMenuBar::isSelected() {
	return $nc(this->selectionModel)->isSelected();
}

bool JMenuBar::isBorderPainted() {
	return this->paintBorder$;
}

void JMenuBar::setBorderPainted(bool b) {
	bool oldValue = this->paintBorder$;
	this->paintBorder$ = b;
	firePropertyChange("borderPainted"_s, oldValue, this->paintBorder$);
	if (b != oldValue) {
		revalidate();
		repaint();
	}
}

void JMenuBar::paintBorder($Graphics* g) {
	if (isBorderPainted()) {
		$JComponent::paintBorder(g);
	}
}

void JMenuBar::setMargin($Insets* m) {
	$var($Insets, old, this->margin);
	$set(this, margin, m);
	firePropertyChange("margin"_s, $of(old), $of(m));
	if (old == nullptr || !$nc(old)->equals(m)) {
		revalidate();
		repaint();
	}
}

$Insets* JMenuBar::getMargin() {
	if (this->margin == nullptr) {
		return $new($Insets, 0, 0, 0, 0);
	} else {
		return this->margin;
	}
}

void JMenuBar::processMouseEvent($MouseEvent* event, $MenuElementArray* path, $MenuSelectionManager* manager) {
}

void JMenuBar::processKeyEvent($KeyEvent* e, $MenuElementArray* path, $MenuSelectionManager* manager) {
}

void JMenuBar::menuSelectionChanged(bool isIncluded) {
}

$MenuElementArray* JMenuBar::getSubElements() {
	$useLocalCurrentObjectStackCache();
	$var($MenuElementArray, result, nullptr);
	$var($Vector, tmp, $new($Vector));
	int32_t c = getComponentCount();
	int32_t i = 0;
	$var($Component, m, nullptr);
	for (i = 0; i < c; ++i) {
		$assign(m, getComponent(i));
		if ($instanceOf($MenuElement, m)) {
			tmp->addElement($cast($MenuElement, m));
		}
	}
	$assign(result, $new($MenuElementArray, tmp->size()));
	for (i = 0, c = tmp->size(); i < c; ++i) {
		result->set(i, $cast($MenuElement, $(tmp->elementAt(i))));
	}
	return result;
}

$Component* JMenuBar::getComponent() {
	return this;
}

$String* JMenuBar::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, paintBorderString, this->paintBorder$ ? "true"_s : "false"_s);
	$var($String, marginString, this->margin != nullptr ? $nc(this->margin)->toString() : ""_s);
	return $str({$($JComponent::paramString()), ",margin="_s, marginString, ",paintBorder="_s, paintBorderString});
}

$AccessibleContext* JMenuBar::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JMenuBar$AccessibleJMenuBar, this));
	}
	return this->accessibleContext;
}

bool JMenuBar::processKeyBinding($KeyStroke* ks, $KeyEvent* e, int32_t condition, bool pressed) {
	$useLocalCurrentObjectStackCache();
	bool retValue = $JComponent::processKeyBinding(ks, e, condition, pressed);
	if (!retValue) {
		$var($MenuElementArray, subElements, getSubElements());
		{
			$var($MenuElementArray, arr$, subElements);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($MenuElement, subElement, arr$->get(i$));
				{
					if (processBindingForKeyStrokeRecursive(subElement, ks, e, condition, pressed)) {
						return true;
					}
				}
			}
		}
	}
	return retValue;
}

bool JMenuBar::processBindingForKeyStrokeRecursive($MenuElement* elem, $KeyStroke* ks, $KeyEvent* e, int32_t condition, bool pressed) {
	$init(JMenuBar);
	$useLocalCurrentObjectStackCache();
	if (elem == nullptr) {
		return false;
	}
	$var($Component, c, $nc(elem)->getComponent());
	bool var$0 = !($nc(c)->isVisible() || ($instanceOf($JPopupMenu, c)));
	if (var$0 || !$nc(c)->isEnabled()) {
		return false;
	}
	if (c != nullptr && $instanceOf($JComponent, c) && $nc(($cast($JComponent, c)))->processKeyBinding(ks, e, condition, pressed)) {
		return true;
	}
	$var($MenuElementArray, subElements, elem->getSubElements());
	{
		$var($MenuElementArray, arr$, subElements);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($MenuElement, subElement, arr$->get(i$));
			{
				if (processBindingForKeyStrokeRecursive(subElement, ks, e, condition, pressed)) {
					return true;
				}
			}
		}
	}
	return false;
}

void JMenuBar::addNotify() {
	$JComponent::addNotify();
	$nc($($KeyboardManager::getCurrentManager()))->registerMenuBar(this);
}

void JMenuBar::removeNotify() {
	$JComponent::removeNotify();
	$nc($($KeyboardManager::getCurrentManager()))->unregisterMenuBar(this);
}

void JMenuBar::writeObject($ObjectOutputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JMenuBar::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
	$var($ObjectArray, kvData, $new($ObjectArray, 4));
	int32_t n = 0;
	if ($instanceOf($Serializable, this->selectionModel)) {
		kvData->set(n++, "selectionModel"_s);
		kvData->set(n++, this->selectionModel);
	}
	s->writeObject(kvData);
}

void JMenuBar::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	$var($ObjectArray, kvData, ($cast($ObjectArray, s->readObject())));
	for (int32_t i = 0; i < $nc(kvData)->length; i += 2) {
		if (kvData->get(i) == nullptr) {
			break;
		} else if ($nc($of(kvData->get(i)))->equals("selectionModel"_s)) {
			$set(this, selectionModel, $cast($SingleSelectionModel, kvData->get(i + 1)));
		}
	}
}

JMenuBar::JMenuBar() {
}

void clinit$JMenuBar($Class* class$) {
	$assignStatic(JMenuBar::uiClassID, "MenuBarUI"_s);
}

$Class* JMenuBar::load$($String* name, bool initialize) {
	$loadClass(JMenuBar, name, initialize, &_JMenuBar_ClassInfo_, clinit$JMenuBar, allocate$JMenuBar);
	return class$;
}

$Class* JMenuBar::class$ = nullptr;

	} // swing
} // javax