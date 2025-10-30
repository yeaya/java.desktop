#include <javax/swing/JMenu.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/KeyEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Error.h>
#include <java/lang/Math.h>
#include <java/util/EventListener.h>
#include <java/util/Vector.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractButton$AccessibleAbstractButton.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu$1.h>
#include <javax/swing/JMenu$AccessibleJMenu.h>
#include <javax/swing/JMenu$MenuChangeListener.h>
#include <javax/swing/JMenu$WinListener.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem$AccessibleJMenuItem.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu$Separator.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/event/MenuEvent.h>
#include <javax/swing/event/MenuListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuItemUI.h>
#include <javax/swing/plaf/PopupMenuUI.h>
#include <jcpp.h>

#undef CENTER
#undef DEBUG
#undef TRACE
#undef TRAILING
#undef TYPE_RASTER_SCREEN
#undef VERBOSE

using $ComponentArray = $Array<::java::awt::Component>;
using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $MenuListenerArray = $Array<::javax::swing::event::MenuListener>;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Dimension = ::java::awt::Dimension;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $EventListener = ::java::util::EventListener;
using $Vector = ::java::util::Vector;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AbstractButton = ::javax::swing::AbstractButton;
using $AbstractButton$AccessibleAbstractButton = ::javax::swing::AbstractButton$AccessibleAbstractButton;
using $Action = ::javax::swing::Action;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JMenu$1 = ::javax::swing::JMenu$1;
using $JMenu$AccessibleJMenu = ::javax::swing::JMenu$AccessibleJMenu;
using $JMenu$MenuChangeListener = ::javax::swing::JMenu$MenuChangeListener;
using $JMenu$WinListener = ::javax::swing::JMenu$WinListener;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JMenuItem$AccessibleJMenuItem = ::javax::swing::JMenuItem$AccessibleJMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JPopupMenu$Separator = ::javax::swing::JPopupMenu$Separator;
using $JSeparator = ::javax::swing::JSeparator;
using $KeyStroke = ::javax::swing::KeyStroke;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $MenuEvent = ::javax::swing::event::MenuEvent;
using $MenuListener = ::javax::swing::event::MenuListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MenuItemUI = ::javax::swing::plaf::MenuItemUI;
using $PopupMenuUI = ::javax::swing::plaf::PopupMenuUI;

namespace javax {
	namespace swing {

$NamedAttribute JMenu_Attribute_var$0[] = {
	{"description", 's', "A popup window containing menu items displayed in a menu bar."},
	{}
};

$CompoundAttribute _JMenu_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JMenu_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", nullptr},
	{}
};

$NamedAttribute JMenu_Attribute_var$1[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JMenu_MethodAnnotations_getAccessibleContext23[] = {
	{"Ljava/beans/BeanProperty;", JMenu_Attribute_var$1},
	{}
};

$NamedAttribute JMenu_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JMenu_MethodAnnotations_getItemCount28[] = {
	{"Ljava/beans/BeanProperty;", JMenu_Attribute_var$2},
	{}
};

$NamedAttribute JMenu_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JMenu_MethodAnnotations_getMenuComponentCount30[] = {
	{"Ljava/beans/BeanProperty;", JMenu_Attribute_var$3},
	{}
};

$NamedAttribute JMenu_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JMenu_MethodAnnotations_getMenuComponents31[] = {
	{"Ljava/beans/BeanProperty;", JMenu_Attribute_var$4},
	{}
};

$NamedAttribute JMenu_Attribute_var$5[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JMenu_MethodAnnotations_getMenuListeners32[] = {
	{"Ljava/beans/BeanProperty;", JMenu_Attribute_var$5},
	{}
};

$NamedAttribute JMenu_Attribute_var$6[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JMenu_MethodAnnotations_getPopupMenu33[] = {
	{"Ljava/beans/BeanProperty;", JMenu_Attribute_var$6},
	{}
};

$NamedAttribute JMenu_Attribute_var$7[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JMenu_MethodAnnotations_getSubElements35[] = {
	{"Ljava/beans/BeanProperty;", JMenu_Attribute_var$7},
	{}
};

$NamedAttribute JMenu_Attribute_var$8[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JMenu_MethodAnnotations_getUIClassID36[] = {
	{"Ljava/beans/BeanProperty;", JMenu_Attribute_var$8},
	{}
};

$NamedAttribute JMenu_Attribute_var$9[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JMenu_MethodAnnotations_isTearOff45[] = {
	{"Ljava/beans/BeanProperty;", JMenu_Attribute_var$9},
	{}
};

$NamedAttribute JMenu_Attribute_var$10[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JMenu_MethodAnnotations_isTopLevelMenu46[] = {
	{"Ljava/beans/BeanProperty;", JMenu_Attribute_var$10},
	{}
};

$NamedAttribute JMenu_Attribute_var$11[] = {
	{"bound", 'Z', "false"},
	{"expert", 'Z', "true"},
	{"description", 's', "The delay between menu selection and making the popup menu visible"},
	{}
};

$CompoundAttribute _JMenu_MethodAnnotations_setDelay57[] = {
	{"Ljava/beans/BeanProperty;", JMenu_Attribute_var$11},
	{}
};

$NamedAttribute JMenu_Attribute_var$12[] = {
	{"bound", 'Z', "false"},
	{"expert", 'Z', "true"},
	{"hidden", 'Z', "true"},
	{"description", 's', "The popup menu\'s visibility"},
	{}
};

$CompoundAttribute _JMenu_MethodAnnotations_setPopupMenuVisible60[] = {
	{"Ljava/beans/BeanProperty;", JMenu_Attribute_var$12},
	{}
};

$NamedAttribute JMenu_Attribute_var$13[] = {
	{"expert", 'Z', "true"},
	{"hidden", 'Z', "true"},
	{"description", 's', "When the menu is selected, its popup child is shown."},
	{}
};

$CompoundAttribute _JMenu_MethodAnnotations_setSelected61[] = {
	{"Ljava/beans/BeanProperty;", JMenu_Attribute_var$13},
	{}
};

$FieldInfo _JMenu_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMenu, uiClassID)},
	{"popupMenu", "Ljavax/swing/JPopupMenu;", nullptr, $PRIVATE, $field(JMenu, popupMenu)},
	{"menuChangeListener", "Ljavax/swing/event/ChangeListener;", nullptr, $PRIVATE, $field(JMenu, menuChangeListener)},
	{"menuEvent", "Ljavax/swing/event/MenuEvent;", nullptr, $PRIVATE, $field(JMenu, menuEvent)},
	{"delay", "I", nullptr, $PRIVATE, $field(JMenu, delay)},
	{"customMenuLocation", "Ljava/awt/Point;", nullptr, $PRIVATE, $field(JMenu, customMenuLocation)},
	{"TRACE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMenu, TRACE)},
	{"VERBOSE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMenu, VERBOSE)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JMenu, DEBUG)},
	{"popupListener", "Ljavax/swing/JMenu$WinListener;", nullptr, $PROTECTED, $field(JMenu, popupListener)},
	{}
};

$MethodInfo _JMenu_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JMenu::*)()>(&JMenu::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JMenu::*)($String*)>(&JMenu::init$))},
	{"<init>", "(Ljavax/swing/Action;)V", nullptr, $PUBLIC, $method(static_cast<void(JMenu::*)($Action*)>(&JMenu::init$))},
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(JMenu::*)($String*,bool)>(&JMenu::init$))},
	{"add", "(Ljavax/swing/JMenuItem;)Ljavax/swing/JMenuItem;", nullptr, $PUBLIC},
	{"add", "(Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"add", "(Ljava/awt/Component;I)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"add", "(Ljava/lang/String;)Ljavax/swing/JMenuItem;", nullptr, $PUBLIC},
	{"add", "(Ljavax/swing/Action;)Ljavax/swing/JMenuItem;", nullptr, $PUBLIC},
	{"addMenuListener", "(Ljavax/swing/event/MenuListener;)V", nullptr, $PUBLIC},
	{"addSeparator", "()V", nullptr, $PUBLIC},
	{"applyComponentOrientation", "(Ljava/awt/ComponentOrientation;)V", nullptr, $PUBLIC},
	{"buildMenuElementArray", "(Ljavax/swing/JMenu;)[Ljavax/swing/MenuElement;", nullptr, $PRIVATE, $method(static_cast<$MenuElementArray*(JMenu::*)(JMenu*)>(&JMenu::buildMenuElementArray))},
	{"configureAcceleratorFromAction", "(Ljavax/swing/Action;)V", nullptr, 0},
	{"createActionChangeListener", "(Ljavax/swing/JMenuItem;)Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createActionComponent", "(Ljavax/swing/Action;)Ljavax/swing/JMenuItem;", nullptr, $PROTECTED},
	{"createMenuChangeListener", "()Ljavax/swing/event/ChangeListener;", nullptr, $PRIVATE, $method(static_cast<$ChangeListener*(JMenu::*)()>(&JMenu::createMenuChangeListener))},
	{"createWinListener", "(Ljavax/swing/JPopupMenu;)Ljavax/swing/JMenu$WinListener;", nullptr, $PROTECTED},
	{"doClick", "(I)V", nullptr, $PUBLIC},
	{"ensurePopupMenuCreated", "()V", nullptr, $PRIVATE, $method(static_cast<void(JMenu::*)()>(&JMenu::ensurePopupMenuCreated))},
	{"fireMenuCanceled", "()V", nullptr, $PROTECTED},
	{"fireMenuDeselected", "()V", nullptr, $PROTECTED},
	{"fireMenuSelected", "()V", nullptr, $PROTECTED},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenu_MethodAnnotations_getAccessibleContext23},
	{"getComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getCustomMenuLocation", "()Ljava/awt/Point;", nullptr, $PRIVATE, $method(static_cast<$Point*(JMenu::*)()>(&JMenu::getCustomMenuLocation))},
	{"getDelay", "()I", nullptr, $PUBLIC},
	{"getItem", "(I)Ljavax/swing/JMenuItem;", nullptr, $PUBLIC},
	{"getItemCount", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenu_MethodAnnotations_getItemCount28},
	{"getMenuComponent", "(I)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getMenuComponentCount", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenu_MethodAnnotations_getMenuComponentCount30},
	{"getMenuComponents", "()[Ljava/awt/Component;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenu_MethodAnnotations_getMenuComponents31},
	{"getMenuListeners", "()[Ljavax/swing/event/MenuListener;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenu_MethodAnnotations_getMenuListeners32},
	{"getPopupMenu", "()Ljavax/swing/JPopupMenu;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenu_MethodAnnotations_getPopupMenu33},
	{"getPopupMenuOrigin", "()Ljava/awt/Point;", nullptr, $PROTECTED},
	{"getSubElements", "()[Ljavax/swing/MenuElement;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenu_MethodAnnotations_getSubElements35},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenu_MethodAnnotations_getUIClassID36},
	{"initFocusability", "()V", nullptr, 0},
	{"insert", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"insert", "(Ljavax/swing/JMenuItem;I)Ljavax/swing/JMenuItem;", nullptr, $PUBLIC},
	{"insert", "(Ljavax/swing/Action;I)Ljavax/swing/JMenuItem;", nullptr, $PUBLIC},
	{"insertSeparator", "(I)V", nullptr, $PUBLIC},
	{"isMenuComponent", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC},
	{"isPopupMenuVisible", "()Z", nullptr, $PUBLIC},
	{"isSelected", "()Z", nullptr, $PUBLIC},
	{"isTearOff", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenu_MethodAnnotations_isTearOff45},
	{"isTopLevelMenu", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenu_MethodAnnotations_isTopLevelMenu46},
	{"menuSelectionChanged", "(Z)V", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"processKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PROTECTED},
	{"remove", "(Ljavax/swing/JMenuItem;)V", nullptr, $PUBLIC},
	{"remove", "(I)V", nullptr, $PUBLIC},
	{"remove", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"removeAll", "()V", nullptr, $PUBLIC},
	{"removeMenuListener", "(Ljavax/swing/event/MenuListener;)V", nullptr, $PUBLIC},
	{"setAccelerator", "(Ljavax/swing/KeyStroke;)V", nullptr, $PUBLIC},
	{"setComponentOrientation", "(Ljava/awt/ComponentOrientation;)V", nullptr, $PUBLIC},
	{"setDelay", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenu_MethodAnnotations_setDelay57},
	{"setMenuLocation", "(II)V", nullptr, $PUBLIC},
	{"setModel", "(Ljavax/swing/ButtonModel;)V", nullptr, $PUBLIC},
	{"setPopupMenuVisible", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenu_MethodAnnotations_setPopupMenuVisible60},
	{"setSelected", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JMenu_MethodAnnotations_setSelected61},
	{"translateToPopupMenu", "(Ljava/awt/Point;)Ljava/awt/Point;", nullptr, $PRIVATE, $method(static_cast<$Point*(JMenu::*)($Point*)>(&JMenu::translateToPopupMenu))},
	{"translateToPopupMenu", "(II)Ljava/awt/Point;", nullptr, $PRIVATE, $method(static_cast<$Point*(JMenu::*)(int32_t,int32_t)>(&JMenu::translateToPopupMenu))},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JMenu::*)($ObjectOutputStream*)>(&JMenu::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JMenu_InnerClassesInfo_[] = {
	{"javax.swing.JMenu$AccessibleJMenu", "javax.swing.JMenu", "AccessibleJMenu", $PROTECTED},
	{"javax.swing.JMenu$WinListener", "javax.swing.JMenu", "WinListener", $PROTECTED},
	{"javax.swing.JMenu$MenuChangeListener", "javax.swing.JMenu", "MenuChangeListener", 0},
	{"javax.swing.JMenu$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JMenu_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JMenu",
	"javax.swing.JMenuItem",
	nullptr,
	_JMenu_FieldInfo_,
	_JMenu_MethodInfo_,
	nullptr,
	nullptr,
	_JMenu_InnerClassesInfo_,
	_JMenu_Annotations_,
	nullptr,
	"javax.swing.JMenu$AccessibleJMenu,javax.swing.JMenu$WinListener,javax.swing.JMenu$MenuChangeListener,javax.swing.JMenu$1"
};

$Object* allocate$JMenu($Class* clazz) {
	return $of($alloc(JMenu));
}

$String* JMenu::uiClassID = nullptr;

void JMenu::init$() {
	JMenu::init$(""_s);
}

void JMenu::init$($String* s) {
	$JMenuItem::init$(s);
	$set(this, menuChangeListener, nullptr);
	$set(this, menuEvent, nullptr);
	$set(this, customMenuLocation, nullptr);
}

void JMenu::init$($Action* a) {
	JMenu::init$();
	setAction(a);
}

void JMenu::init$($String* s, bool b) {
	JMenu::init$(s);
}

void JMenu::initFocusability() {
}

void JMenu::updateUI() {
	$useLocalCurrentObjectStackCache();
	setUI($cast($MenuItemUI, $($UIManager::getUI(this))));
	if (this->popupMenu != nullptr) {
		$nc(this->popupMenu)->setUI($cast($PopupMenuUI, $($UIManager::getUI(this->popupMenu))));
	}
}

$String* JMenu::getUIClassID() {
	return JMenu::uiClassID;
}

void JMenu::setModel($ButtonModel* newModel) {
	$var($ButtonModel, oldModel, getModel());
	$JMenuItem::setModel(newModel);
	if (oldModel != nullptr && this->menuChangeListener != nullptr) {
		oldModel->removeChangeListener(this->menuChangeListener);
		$set(this, menuChangeListener, nullptr);
	}
	$set(this, model, newModel);
	if (newModel != nullptr) {
		$set(this, menuChangeListener, createMenuChangeListener());
		newModel->addChangeListener(this->menuChangeListener);
	}
}

bool JMenu::isSelected() {
	return $nc($(getModel()))->isSelected();
}

void JMenu::setSelected(bool b) {
	$useLocalCurrentObjectStackCache();
	$var($ButtonModel, model, getModel());
	bool oldValue = $nc(model)->isSelected();
	if (b != model->isSelected()) {
		$nc($(getModel()))->setSelected(b);
	}
}

bool JMenu::isPopupMenuVisible() {
	ensurePopupMenuCreated();
	return $nc(this->popupMenu)->isVisible();
}

void JMenu::setPopupMenuVisible(bool b) {
	$useLocalCurrentObjectStackCache();
	bool isVisible = isPopupMenuVisible();
	if (b != isVisible && (isEnabled() || !b)) {
		ensurePopupMenuCreated();
		if ((b == true) && isShowing()) {
			$var($Point, p, getCustomMenuLocation());
			if (p == nullptr) {
				$assign(p, getPopupMenuOrigin());
			}
			$nc($(getPopupMenu()))->show(this, $nc(p)->x, p->y);
		} else {
			$nc($(getPopupMenu()))->setVisible(false);
		}
	}
}

$Point* JMenu::getPopupMenuOrigin() {
	$useLocalCurrentObjectStackCache();
	int32_t x = 0;
	int32_t y = 0;
	$var($JPopupMenu, pm, getPopupMenu());
	$var($Dimension, s, getSize());
	$var($Dimension, pmSize, $nc(pm)->getSize());
	if ($nc(pmSize)->width == 0) {
		$assign(pmSize, pm->getPreferredSize());
	}
	$var($Point, position, getLocationOnScreen());
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	$var($GraphicsConfiguration, gc, getGraphicsConfiguration());
	$var($Rectangle, screenBounds, $new($Rectangle, $($nc(toolkit)->getScreenSize())));
	$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	$var($GraphicsDeviceArray, gd, $nc(ge)->getScreenDevices());
	for (int32_t i = 0; i < $nc(gd)->length; ++i) {
		if ($nc(gd->get(i))->getType() == $GraphicsDevice::TYPE_RASTER_SCREEN) {
			$var($GraphicsConfiguration, dgc, $nc(gd->get(i))->getDefaultConfiguration());
			if ($nc($($nc(dgc)->getBounds()))->contains(position)) {
				$assign(gc, dgc);
				break;
			}
		}
	}
	if (gc != nullptr) {
		$assign(screenBounds, gc->getBounds());
		$var($Insets, screenInsets, $nc(toolkit)->getScreenInsets(gc));
		$nc(screenBounds)->width -= $Math::abs($nc(screenInsets)->left + screenInsets->right);
		screenBounds->height -= $Math::abs($nc(screenInsets)->top + screenInsets->bottom);
		$nc(position)->x -= $Math::abs($nc(screenInsets)->left);
		position->y -= $Math::abs($nc(screenInsets)->top);
	}
	$var($Container, parent, getParent());
	if ($instanceOf($JPopupMenu, parent)) {
		int32_t xOffset = $UIManager::getInt("Menu.submenuPopupOffsetX"_s);
		int32_t yOffset = $UIManager::getInt("Menu.submenuPopupOffsetY"_s);
		if ($SwingUtilities::isLeftToRight(this)) {
			x = $nc(s)->width + xOffset;
			if ($nc(position)->x + x + $nc(pmSize)->width >= screenBounds->width + screenBounds->x && screenBounds->width - s->width < 2 * (position->x - screenBounds->x)) {
				x = 0 - xOffset - pmSize->width;
			}
		} else {
			x = 0 - xOffset - $nc(pmSize)->width;
			if ($nc(position)->x + x < screenBounds->x && screenBounds->width - $nc(s)->width > 2 * (position->x - screenBounds->x)) {
				x = s->width + xOffset;
			}
		}
		y = yOffset;
		if ($nc(position)->y + y + $nc(pmSize)->height >= screenBounds->height + screenBounds->y && screenBounds->height - $nc(s)->height < 2 * (position->y - screenBounds->y)) {
			y = s->height - yOffset - pmSize->height;
		}
	} else {
		int32_t xOffset = $UIManager::getInt("Menu.menuPopupOffsetX"_s);
		int32_t yOffset = $UIManager::getInt("Menu.menuPopupOffsetY"_s);
		if ($SwingUtilities::isLeftToRight(this)) {
			x = xOffset;
			if ($nc(position)->x + x + $nc(pmSize)->width >= screenBounds->width + screenBounds->x && screenBounds->width - $nc(s)->width < 2 * (position->x - screenBounds->x)) {
				x = s->width - xOffset - pmSize->width;
			}
		} else {
			x = $nc(s)->width - xOffset - $nc(pmSize)->width;
			if ($nc(position)->x + x < screenBounds->x && screenBounds->width - s->width > 2 * (position->x - screenBounds->x)) {
				x = xOffset;
			}
		}
		y = $nc(s)->height + yOffset;
		if ($nc(position)->y + y + $nc(pmSize)->height >= screenBounds->height + screenBounds->y && screenBounds->height - s->height < 2 * (position->y - screenBounds->y)) {
			y = 0 - yOffset - pmSize->height;
		}
	}
	return $new($Point, x, y);
}

int32_t JMenu::getDelay() {
	return this->delay;
}

void JMenu::setDelay(int32_t d) {
	if (d < 0) {
		$throwNew($IllegalArgumentException, "Delay must be a positive integer"_s);
	}
	this->delay = d;
}

void JMenu::ensurePopupMenuCreated() {
	if (this->popupMenu == nullptr) {
		$var(JMenu, thisMenu, this);
		$set(this, popupMenu, $new($JPopupMenu));
		$nc(this->popupMenu)->setInvoker(this);
		$set(this, popupListener, createWinListener(this->popupMenu));
	}
}

$Point* JMenu::getCustomMenuLocation() {
	return this->customMenuLocation;
}

void JMenu::setMenuLocation(int32_t x, int32_t y) {
	$set(this, customMenuLocation, $new($Point, x, y));
	if (this->popupMenu != nullptr) {
		$nc(this->popupMenu)->setLocation(x, y);
	}
}

$JMenuItem* JMenu::add($JMenuItem* menuItem) {
	ensurePopupMenuCreated();
	return $nc(this->popupMenu)->add(menuItem);
}

$Component* JMenu::add($Component* c) {
	ensurePopupMenuCreated();
	$nc(this->popupMenu)->add(c);
	return c;
}

$Component* JMenu::add($Component* c, int32_t index) {
	ensurePopupMenuCreated();
	$nc(this->popupMenu)->add(c, index);
	return c;
}

$JMenuItem* JMenu::add($String* s) {
	return add($$new($JMenuItem, s));
}

$JMenuItem* JMenu::add($Action* a) {
	$var($JMenuItem, mi, createActionComponent(a));
	$nc(mi)->setAction(a);
	add(mi);
	return mi;
}

$JMenuItem* JMenu::createActionComponent($Action* a) {
	$var($JMenuItem, mi, $new($JMenu$1, this));
	mi->setHorizontalTextPosition($JButton::TRAILING);
	mi->setVerticalTextPosition($JButton::CENTER);
	return mi;
}

$PropertyChangeListener* JMenu::createActionChangeListener($JMenuItem* b) {
	return $nc(b)->createActionPropertyChangeListener0($(b->getAction()));
}

void JMenu::addSeparator() {
	ensurePopupMenuCreated();
	$nc(this->popupMenu)->addSeparator();
}

void JMenu::insert($String* s, int32_t pos) {
	if (pos < 0) {
		$throwNew($IllegalArgumentException, "index less than zero."_s);
	}
	ensurePopupMenuCreated();
	$nc(this->popupMenu)->insert(static_cast<$Component*>($$new($JMenuItem, s)), pos);
}

$JMenuItem* JMenu::insert($JMenuItem* mi, int32_t pos) {
	if (pos < 0) {
		$throwNew($IllegalArgumentException, "index less than zero."_s);
	}
	ensurePopupMenuCreated();
	$nc(this->popupMenu)->insert(static_cast<$Component*>(mi), pos);
	return mi;
}

$JMenuItem* JMenu::insert($Action* a, int32_t pos) {
	if (pos < 0) {
		$throwNew($IllegalArgumentException, "index less than zero."_s);
	}
	ensurePopupMenuCreated();
	$var($JMenuItem, mi, $new($JMenuItem, a));
	mi->setHorizontalTextPosition($JButton::TRAILING);
	mi->setVerticalTextPosition($JButton::CENTER);
	$nc(this->popupMenu)->insert(static_cast<$Component*>(mi), pos);
	return mi;
}

void JMenu::insertSeparator(int32_t index) {
	if (index < 0) {
		$throwNew($IllegalArgumentException, "index less than zero."_s);
	}
	ensurePopupMenuCreated();
	$nc(this->popupMenu)->insert(static_cast<$Component*>($$new($JPopupMenu$Separator)), index);
}

$JMenuItem* JMenu::getItem(int32_t pos) {
	$useLocalCurrentObjectStackCache();
	if (pos < 0) {
		$throwNew($IllegalArgumentException, "index less than zero."_s);
	}
	$var($Component, c, getMenuComponent(pos));
	if ($instanceOf($JMenuItem, c)) {
		$var($JMenuItem, mi, $cast($JMenuItem, c));
		return mi;
	}
	return nullptr;
}

int32_t JMenu::getItemCount() {
	return getMenuComponentCount();
}

bool JMenu::isTearOff() {
	$throwNew($Error, "boolean isTearOff() {} not yet implemented"_s);
	$shouldNotReachHere();
}

void JMenu::remove($JMenuItem* item) {
	if (this->popupMenu != nullptr) {
		$nc(this->popupMenu)->remove(static_cast<$Component*>(item));
	}
}

void JMenu::remove(int32_t pos) {
	if (pos < 0) {
		$throwNew($IllegalArgumentException, "index less than zero."_s);
	}
	if (pos > getItemCount()) {
		$throwNew($IllegalArgumentException, "index greater than the number of items."_s);
	}
	if (this->popupMenu != nullptr) {
		$nc(this->popupMenu)->remove(pos);
	}
}

void JMenu::remove($Component* c) {
	if (this->popupMenu != nullptr) {
		$nc(this->popupMenu)->remove(c);
	}
}

void JMenu::removeAll() {
	if (this->popupMenu != nullptr) {
		$nc(this->popupMenu)->removeAll();
	}
}

int32_t JMenu::getMenuComponentCount() {
	int32_t componentCount = 0;
	if (this->popupMenu != nullptr) {
		componentCount = $nc(this->popupMenu)->getComponentCount();
	}
	return componentCount;
}

$Component* JMenu::getMenuComponent(int32_t n) {
	if (this->popupMenu != nullptr) {
		return $nc(this->popupMenu)->getComponent(n);
	}
	return nullptr;
}

$ComponentArray* JMenu::getMenuComponents() {
	if (this->popupMenu != nullptr) {
		return $nc(this->popupMenu)->getComponents();
	}
	return $new($ComponentArray, 0);
}

bool JMenu::isTopLevelMenu() {
	return $instanceOf($JMenuBar, $(getParent()));
}

bool JMenu::isMenuComponent($Component* c) {
	$useLocalCurrentObjectStackCache();
	if ($equals(c, this)) {
		return true;
	}
	if ($instanceOf($JPopupMenu, c)) {
		$var($JPopupMenu, comp, $cast($JPopupMenu, c));
		if (comp == this->getPopupMenu()) {
			return true;
		}
	}
	int32_t ncomponents = this->getMenuComponentCount();
	$var($ComponentArray, component, this->getMenuComponents());
	for (int32_t i = 0; i < ncomponents; ++i) {
		$var($Component, comp, $nc(component)->get(i));
		if (comp == c) {
			return true;
		}
		if ($instanceOf(JMenu, comp)) {
			$var(JMenu, subMenu, $cast(JMenu, comp));
			if ($nc(subMenu)->isMenuComponent(c)) {
				return true;
			}
		}
	}
	return false;
}

$Point* JMenu::translateToPopupMenu($Point* p) {
	return translateToPopupMenu($nc(p)->x, p->y);
}

$Point* JMenu::translateToPopupMenu(int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	int32_t newX = 0;
	int32_t newY = 0;
	if ($instanceOf($JPopupMenu, $(getParent()))) {
		newX = x - $nc($(getSize()))->width;
		newY = y;
	} else {
		newX = x;
		newY = y - $nc($(getSize()))->height;
	}
	return $new($Point, newX, newY);
}

$JPopupMenu* JMenu::getPopupMenu() {
	ensurePopupMenuCreated();
	return this->popupMenu;
}

void JMenu::addMenuListener($MenuListener* l) {
	$load($MenuListener);
	$nc(this->listenerList)->add($MenuListener::class$, l);
}

void JMenu::removeMenuListener($MenuListener* l) {
	$load($MenuListener);
	$nc(this->listenerList)->remove($MenuListener::class$, l);
}

$MenuListenerArray* JMenu::getMenuListeners() {
	$load($MenuListener);
	return $fcast($MenuListenerArray, $nc(this->listenerList)->getListeners($MenuListener::class$));
}

void JMenu::fireMenuSelected() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($MenuListener);
		if ($equals(listeners->get(i), $MenuListener::class$)) {
			if (listeners->get(i + 1) == nullptr) {
				$throwNew($Error, $$str({$(getText()), " has a NULL Listener!! "_s, $$str(i)}));
			} else {
				if (this->menuEvent == nullptr) {
					$set(this, menuEvent, $new($MenuEvent, this));
				}
				$nc(($cast($MenuListener, listeners->get(i + 1))))->menuSelected(this->menuEvent);
			}
		}
	}
}

void JMenu::fireMenuDeselected() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($MenuListener);
		if ($equals(listeners->get(i), $MenuListener::class$)) {
			if (listeners->get(i + 1) == nullptr) {
				$throwNew($Error, $$str({$(getText()), " has a NULL Listener!! "_s, $$str(i)}));
			} else {
				if (this->menuEvent == nullptr) {
					$set(this, menuEvent, $new($MenuEvent, this));
				}
				$nc(($cast($MenuListener, listeners->get(i + 1))))->menuDeselected(this->menuEvent);
			}
		}
	}
}

void JMenu::fireMenuCanceled() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($MenuListener);
		if ($equals(listeners->get(i), $MenuListener::class$)) {
			if (listeners->get(i + 1) == nullptr) {
				$throwNew($Error, $$str({$(getText()), " has a NULL Listener!! "_s, $$str(i)}));
			} else {
				if (this->menuEvent == nullptr) {
					$set(this, menuEvent, $new($MenuEvent, this));
				}
				$nc(($cast($MenuListener, listeners->get(i + 1))))->menuCanceled(this->menuEvent);
			}
		}
	}
}

void JMenu::configureAcceleratorFromAction($Action* a) {
}

$ChangeListener* JMenu::createMenuChangeListener() {
	return $new($JMenu$MenuChangeListener, this);
}

$JMenu$WinListener* JMenu::createWinListener($JPopupMenu* p) {
	return $new($JMenu$WinListener, this, p);
}

void JMenu::menuSelectionChanged(bool isIncluded) {
	setSelected(isIncluded);
}

$MenuElementArray* JMenu::getSubElements() {
	if (this->popupMenu == nullptr) {
		return $new($MenuElementArray, 0);
	} else {
		$var($MenuElementArray, result, $new($MenuElementArray, 1));
		result->set(0, this->popupMenu);
		return result;
	}
}

$Component* JMenu::getComponent() {
	return this;
}

void JMenu::applyComponentOrientation($ComponentOrientation* o) {
	$useLocalCurrentObjectStackCache();
	$JMenuItem::applyComponentOrientation(o);
	if (this->popupMenu != nullptr) {
		int32_t ncomponents = getMenuComponentCount();
		for (int32_t i = 0; i < ncomponents; ++i) {
			$nc($(getMenuComponent(i)))->applyComponentOrientation(o);
		}
		$nc(this->popupMenu)->setComponentOrientation(o);
	}
}

void JMenu::setComponentOrientation($ComponentOrientation* o) {
	$JMenuItem::setComponentOrientation(o);
	if (this->popupMenu != nullptr) {
		$nc(this->popupMenu)->setComponentOrientation(o);
	}
}

void JMenu::setAccelerator($KeyStroke* keyStroke) {
	$throwNew($Error, "setAccelerator() is not defined for JMenu.  Use setMnemonic() instead."_s);
}

void JMenu::processKeyEvent($KeyEvent* evt) {
	$nc($($MenuSelectionManager::defaultManager()))->processKeyEvent(evt);
	if ($nc(evt)->isConsumed()) {
		return;
	}
	$JMenuItem::processKeyEvent(evt);
}

void JMenu::doClick(int32_t pressTime) {
	$useLocalCurrentObjectStackCache();
	$var($MenuElementArray, me, buildMenuElementArray(this));
	$nc($($MenuSelectionManager::defaultManager()))->setSelectedPath(me);
}

$MenuElementArray* JMenu::buildMenuElementArray(JMenu* leaf) {
	$useLocalCurrentObjectStackCache();
	$var($Vector, elements, $new($Vector));
	$var($Component, current, $nc(leaf)->getPopupMenu());
	$var($JPopupMenu, pop, nullptr);
	$var(JMenu, menu, nullptr);
	$var($JMenuBar, bar, nullptr);
	while (true) {
		if ($instanceOf($JPopupMenu, current)) {
			$assign(pop, $cast($JPopupMenu, current));
			elements->insertElementAt(pop, 0);
			$assign(current, $nc(pop)->getInvoker());
		} else if ($instanceOf(JMenu, current)) {
			$assign(menu, $cast(JMenu, current));
			elements->insertElementAt(menu, 0);
			$assign(current, $nc(menu)->getParent());
		} else if ($instanceOf($JMenuBar, current)) {
			$assign(bar, $cast($JMenuBar, current));
			elements->insertElementAt(bar, 0);
			break;
		} else {
			break;
		}
	}
	$var($MenuElementArray, me, $new($MenuElementArray, elements->size()));
	elements->copyInto(me);
	return me;
}

void JMenu::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JMenu::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

$String* JMenu::paramString() {
	return $JMenuItem::paramString();
}

$AccessibleContext* JMenu::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JMenu$AccessibleJMenu, this));
	}
	return this->accessibleContext;
}

JMenu::JMenu() {
}

void clinit$JMenu($Class* class$) {
	$assignStatic(JMenu::uiClassID, "MenuUI"_s);
}

$Class* JMenu::load$($String* name, bool initialize) {
	$loadClass(JMenu, name, initialize, &_JMenu_ClassInfo_, clinit$JMenu, allocate$JMenu);
	return class$;
}

$Class* JMenu::class$ = nullptr;

	} // swing
} // javax