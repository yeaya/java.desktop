#include <javax/swing/plaf/basic/BasicMenuUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/KeyEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/MenuDragMouseListener.h>
#include <javax/swing/event/MenuKeyListener.h>
#include <javax/swing/event/MenuListener.h>
#include <javax/swing/event/MouseInputListener.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuItemUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI$Handler.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <javax/swing/plaf/basic/BasicMenuUI$Actions.h>
#include <javax/swing/plaf/basic/BasicMenuUI$Handler.h>
#include <javax/swing/plaf/basic/LazyActionMap.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef ALT_GRAPH_MASK
#undef ALT_MASK
#undef DEBUG
#undef MAX_VALUE
#undef SELECT
#undef TRACE
#undef VERBOSE
#undef WHEN_IN_FOCUSED_WINDOW

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $ActionListener = ::java::awt::event::ActionListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $ButtonModel = ::javax::swing::ButtonModel;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;
using $KeyStroke = ::javax::swing::KeyStroke;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;
using $UIManager = ::javax::swing::UIManager;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $MenuDragMouseListener = ::javax::swing::event::MenuDragMouseListener;
using $MenuKeyListener = ::javax::swing::event::MenuKeyListener;
using $MenuListener = ::javax::swing::event::MenuListener;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MenuItemUI = ::javax::swing::plaf::MenuItemUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicMenuItemUI = ::javax::swing::plaf::basic::BasicMenuItemUI;
using $BasicMenuItemUI$Handler = ::javax::swing::plaf::basic::BasicMenuItemUI$Handler;
using $BasicMenuUI$Actions = ::javax::swing::plaf::basic::BasicMenuUI$Actions;
using $BasicMenuUI$Handler = ::javax::swing::plaf::basic::BasicMenuUI$Handler;
using $LazyActionMap = ::javax::swing::plaf::basic::LazyActionMap;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicMenuUI_FieldInfo_[] = {
	{"changeListener", "Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED, $field(BasicMenuUI, changeListener)},
	{"menuListener", "Ljavax/swing/event/MenuListener;", nullptr, $PROTECTED, $field(BasicMenuUI, menuListener)},
	{"lastMnemonic", "I", nullptr, $PRIVATE, $field(BasicMenuUI, lastMnemonic)},
	{"selectedWindowInputMap", "Ljavax/swing/InputMap;", nullptr, $PRIVATE, $field(BasicMenuUI, selectedWindowInputMap)},
	{"TRACE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicMenuUI, TRACE)},
	{"VERBOSE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicMenuUI, VERBOSE)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicMenuUI, DEBUG)},
	{"crossMenuMnemonic", "Z", nullptr, $PRIVATE | $STATIC, $staticField(BasicMenuUI, crossMenuMnemonic)},
	{}
};

$MethodInfo _BasicMenuUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicMenuUI::*)()>(&BasicMenuUI::init$))},
	{"appendPath", "([Ljavax/swing/MenuElement;Ljavax/swing/MenuElement;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($MenuElementArray*,$MenuElement*)>(&BasicMenuUI::appendPath))},
	{"createChangeListener", "(Ljavax/swing/JComponent;)Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED},
	{"createMenuDragMouseListener", "(Ljavax/swing/JComponent;)Ljavax/swing/event/MenuDragMouseListener;", nullptr, $PROTECTED},
	{"createMenuKeyListener", "(Ljavax/swing/JComponent;)Ljavax/swing/event/MenuKeyListener;", nullptr, $PROTECTED},
	{"createMenuListener", "(Ljavax/swing/JComponent;)Ljavax/swing/event/MenuListener;", nullptr, $PROTECTED},
	{"createMouseInputListener", "(Ljavax/swing/JComponent;)Ljavax/swing/event/MouseInputListener;", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "(Ljavax/swing/JComponent;)Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicMenuUI::createUI))},
	{"getHandler", "()Ljavax/swing/plaf/basic/BasicMenuItemUI$Handler;", nullptr, 0},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installLazyActionMap", "()V", nullptr, 0},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"loadActionMap", "(Ljavax/swing/plaf/basic/LazyActionMap;)V", nullptr, $STATIC, $method(static_cast<void(*)($LazyActionMap*)>(&BasicMenuUI::loadActionMap))},
	{"setupPostTimer", "(Ljavax/swing/JMenu;)V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"updateDefaultBackgroundColor", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicMenuUI::*)()>(&BasicMenuUI::updateDefaultBackgroundColor))},
	{"updateMnemonicBinding", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _BasicMenuUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicMenuUI$Handler", "javax.swing.plaf.basic.BasicMenuUI", "Handler", $PRIVATE},
	{"javax.swing.plaf.basic.BasicMenuUI$ChangeHandler", "javax.swing.plaf.basic.BasicMenuUI", "ChangeHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicMenuUI$MouseInputHandler", "javax.swing.plaf.basic.BasicMenuUI", "MouseInputHandler", $PROTECTED},
	{"javax.swing.plaf.basic.BasicMenuUI$Actions", "javax.swing.plaf.basic.BasicMenuUI", "Actions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicMenuUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicMenuUI",
	"javax.swing.plaf.basic.BasicMenuItemUI",
	nullptr,
	_BasicMenuUI_FieldInfo_,
	_BasicMenuUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicMenuUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicMenuUI$Handler,javax.swing.plaf.basic.BasicMenuUI$ChangeHandler,javax.swing.plaf.basic.BasicMenuUI$MouseInputHandler,javax.swing.plaf.basic.BasicMenuUI$Actions"
};

$Object* allocate$BasicMenuUI($Class* clazz) {
	return $of($alloc(BasicMenuUI));
}

bool BasicMenuUI::crossMenuMnemonic = false;

void BasicMenuUI::init$() {
	$BasicMenuItemUI::init$();
	this->lastMnemonic = 0;
}

$ComponentUI* BasicMenuUI::createUI($JComponent* x) {
	$init(BasicMenuUI);
	return $new(BasicMenuUI);
}

void BasicMenuUI::loadActionMap($LazyActionMap* map) {
	$init(BasicMenuUI);
	$BasicMenuItemUI::loadActionMap(map);
	$init($BasicMenuUI$Actions);
	$nc(map)->put($$new($BasicMenuUI$Actions, $BasicMenuUI$Actions::SELECT, nullptr, true));
}

void BasicMenuUI::installDefaults() {
	$BasicMenuItemUI::installDefaults();
	updateDefaultBackgroundColor();
	$nc(($cast($JMenu, this->menuItem)))->setDelay(200);
	BasicMenuUI::crossMenuMnemonic = $UIManager::getBoolean("Menu.crossMenuMnemonic"_s);
}

$String* BasicMenuUI::getPropertyPrefix() {
	return "Menu"_s;
}

void BasicMenuUI::installListeners() {
	$BasicMenuItemUI::installListeners();
	if (this->changeListener == nullptr) {
		$set(this, changeListener, createChangeListener(this->menuItem));
	}
	if (this->changeListener != nullptr) {
		$nc(this->menuItem)->addChangeListener(this->changeListener);
	}
	if (this->menuListener == nullptr) {
		$set(this, menuListener, createMenuListener(this->menuItem));
	}
	if (this->menuListener != nullptr) {
		$nc(($cast($JMenu, this->menuItem)))->addMenuListener(this->menuListener);
	}
}

void BasicMenuUI::installKeyboardActions() {
	$BasicMenuItemUI::installKeyboardActions();
	updateMnemonicBinding();
}

void BasicMenuUI::installLazyActionMap() {
	$useLocalCurrentObjectStackCache();
	$LazyActionMap::installLazyActionMap(this->menuItem, BasicMenuUI::class$, $$str({$(getPropertyPrefix()), ".actionMap"_s}));
}

void BasicMenuUI::updateMnemonicBinding() {
	$useLocalCurrentObjectStackCache();
	int32_t mnemonic = $nc($($nc(this->menuItem)->getModel()))->getMnemonic();
	$var($ints, shortcutKeys, $cast($ints, $DefaultLookup::get(this->menuItem, this, "Menu.shortcutKeys"_s)));
	if (shortcutKeys == nullptr) {
		$assign(shortcutKeys, $new($ints, {
			$KeyEvent::ALT_MASK,
			$KeyEvent::ALT_MASK | $KeyEvent::ALT_GRAPH_MASK
		}));
	}
	if (mnemonic == this->lastMnemonic) {
		return;
	}
	$var($InputMap, windowInputMap, $SwingUtilities::getUIInputMap(this->menuItem, $JComponent::WHEN_IN_FOCUSED_WINDOW));
	if (this->lastMnemonic != 0 && windowInputMap != nullptr) {
		{
			$var($ints, arr$, shortcutKeys);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int32_t shortcutKey = arr$->get(i$);
				{
					windowInputMap->remove($($KeyStroke::getKeyStroke(this->lastMnemonic, shortcutKey, false)));
				}
			}
		}
	}
	if (mnemonic != 0) {
		if (windowInputMap == nullptr) {
			$assign(windowInputMap, createInputMap($JComponent::WHEN_IN_FOCUSED_WINDOW));
			$SwingUtilities::replaceUIInputMap(this->menuItem, $JComponent::WHEN_IN_FOCUSED_WINDOW, windowInputMap);
		}
		{
			$var($ints, arr$, shortcutKeys);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int32_t shortcutKey = arr$->get(i$);
				{
					$nc(windowInputMap)->put($($KeyStroke::getKeyStroke(mnemonic, shortcutKey, false)), "selectMenu"_s);
				}
			}
		}
	}
	this->lastMnemonic = mnemonic;
}

void BasicMenuUI::uninstallKeyboardActions() {
	$BasicMenuItemUI::uninstallKeyboardActions();
	this->lastMnemonic = 0;
}

$MouseInputListener* BasicMenuUI::createMouseInputListener($JComponent* c) {
	return getHandler();
}

$MenuListener* BasicMenuUI::createMenuListener($JComponent* c) {
	return nullptr;
}

$ChangeListener* BasicMenuUI::createChangeListener($JComponent* c) {
	return nullptr;
}

$PropertyChangeListener* BasicMenuUI::createPropertyChangeListener($JComponent* c) {
	return getHandler();
}

$BasicMenuItemUI$Handler* BasicMenuUI::getHandler() {
	if (this->handler == nullptr) {
		$set(this, handler, $new($BasicMenuUI$Handler, this));
	}
	return this->handler;
}

void BasicMenuUI::uninstallDefaults() {
	$nc(this->menuItem)->setArmed(false);
	$nc(this->menuItem)->setSelected(false);
	$nc(this->menuItem)->resetKeyboardActions();
	$BasicMenuItemUI::uninstallDefaults();
}

void BasicMenuUI::uninstallListeners() {
	$BasicMenuItemUI::uninstallListeners();
	if (this->changeListener != nullptr) {
		$nc(this->menuItem)->removeChangeListener(this->changeListener);
	}
	if (this->menuListener != nullptr) {
		$nc(($cast($JMenu, this->menuItem)))->removeMenuListener(this->menuListener);
	}
	$set(this, changeListener, nullptr);
	$set(this, menuListener, nullptr);
	$set(this, handler, nullptr);
}

$MenuDragMouseListener* BasicMenuUI::createMenuDragMouseListener($JComponent* c) {
	return getHandler();
}

$MenuKeyListener* BasicMenuUI::createMenuKeyListener($JComponent* c) {
	return $cast($MenuKeyListener, getHandler());
}

$Dimension* BasicMenuUI::getMinimumSize($JComponent* c) {
	return ($nc(($cast($JMenu, this->menuItem)))->isTopLevelMenu()) ? $nc(c)->getPreferredSize() : ($Dimension*)nullptr;
}

$Dimension* BasicMenuUI::getMaximumSize($JComponent* c) {
	if ($nc(($cast($JMenu, this->menuItem)))->isTopLevelMenu()) {
		$var($Dimension, d, $nc(c)->getPreferredSize());
		return $new($Dimension, $nc(d)->width, $Short::MAX_VALUE);
	}
	return nullptr;
}

void BasicMenuUI::setupPostTimer($JMenu* menu) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(menu)->getDelay();
	$init($BasicMenuUI$Actions);
	$var($Timer, timer, $new($Timer, var$0, $$new($BasicMenuUI$Actions, $BasicMenuUI$Actions::SELECT, menu, false)));
	timer->setRepeats(false);
	timer->start();
}

void BasicMenuUI::appendPath($MenuElementArray* path, $MenuElement* elem) {
	$init(BasicMenuUI);
	$useLocalCurrentObjectStackCache();
	$var($MenuElementArray, newPath, $new($MenuElementArray, $nc(path)->length + 1));
	$System::arraycopy(path, 0, newPath, 0, path->length);
	newPath->set(path->length, elem);
	$nc($($MenuSelectionManager::defaultManager()))->setSelectedPath(newPath);
}

void BasicMenuUI::updateDefaultBackgroundColor() {
	$useLocalCurrentObjectStackCache();
	if (!$UIManager::getBoolean("Menu.useMenuBarBackgroundForTopLevel"_s)) {
		return;
	}
	$var($JMenu, menu, $cast($JMenu, this->menuItem));
	if ($instanceOf($UIResource, $($nc(menu)->getBackground()))) {
		if (menu->isTopLevelMenu()) {
			menu->setBackground($($UIManager::getColor("MenuBar.background"_s)));
		} else {
			menu->setBackground($($UIManager::getColor($$str({$(getPropertyPrefix()), ".background"_s}))));
		}
	}
}

void clinit$BasicMenuUI($Class* class$) {
	BasicMenuUI::crossMenuMnemonic = true;
}

BasicMenuUI::BasicMenuUI() {
}

$Class* BasicMenuUI::load$($String* name, bool initialize) {
	$loadClass(BasicMenuUI, name, initialize, &_BasicMenuUI_ClassInfo_, clinit$BasicMenuUI, allocate$BasicMenuUI);
	return class$;
}

$Class* BasicMenuUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax