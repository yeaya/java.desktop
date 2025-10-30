#include <javax/swing/plaf/basic/BasicPopupMenuUI.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/event/MouseEvent.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/ComponentInputMap.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/MenuKeyListener.h>
#include <javax/swing/event/PopupMenuListener.h>
#include <javax/swing/plaf/ActionMapUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/PopupMenuUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI$Actions.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI$BasicMenuKeyListener.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI$BasicPopupMenuListener.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI$MenuKeyboardHelper.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI$MouseGrabber.h>
#include <javax/swing/plaf/basic/DefaultMenuLayout.h>
#include <javax/swing/plaf/basic/LazyActionMap.h>
#include <sun/awt/AppContext.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef BUTTON3_MASK
#undef CANCEL
#undef MENU_KEYBOARD_HELPER_KEY
#undef MOUSE_GRABBER_KEY
#undef MOUSE_RELEASED
#undef RETURN
#undef SELECT_CHILD
#undef SELECT_NEXT
#undef SELECT_PARENT
#undef SELECT_PREVIOUS
#undef TRUE
#undef WHEN_IN_FOCUSED_WINDOW
#undef Y_AXIS

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $BoxLayout = ::javax::swing::BoxLayout;
using $ComponentInputMap = ::javax::swing::ComponentInputMap;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $MenuKeyListener = ::javax::swing::event::MenuKeyListener;
using $PopupMenuListener = ::javax::swing::event::PopupMenuListener;
using $ActionMapUIResource = ::javax::swing::plaf::ActionMapUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $PopupMenuUI = ::javax::swing::plaf::PopupMenuUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $BasicPopupMenuUI$Actions = ::javax::swing::plaf::basic::BasicPopupMenuUI$Actions;
using $BasicPopupMenuUI$BasicMenuKeyListener = ::javax::swing::plaf::basic::BasicPopupMenuUI$BasicMenuKeyListener;
using $BasicPopupMenuUI$BasicPopupMenuListener = ::javax::swing::plaf::basic::BasicPopupMenuUI$BasicPopupMenuListener;
using $BasicPopupMenuUI$MenuKeyboardHelper = ::javax::swing::plaf::basic::BasicPopupMenuUI$MenuKeyboardHelper;
using $BasicPopupMenuUI$MouseGrabber = ::javax::swing::plaf::basic::BasicPopupMenuUI$MouseGrabber;
using $DefaultMenuLayout = ::javax::swing::plaf::basic::DefaultMenuLayout;
using $LazyActionMap = ::javax::swing::plaf::basic::LazyActionMap;
using $AppContext = ::sun::awt::AppContext;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicPopupMenuUI_FieldInfo_[] = {
	{"MOUSE_GRABBER_KEY", "Ljava/lang/StringBuilder;", nullptr, $STATIC | $FINAL, $staticField(BasicPopupMenuUI, MOUSE_GRABBER_KEY)},
	{"MENU_KEYBOARD_HELPER_KEY", "Ljava/lang/StringBuilder;", nullptr, $STATIC | $FINAL, $staticField(BasicPopupMenuUI, MENU_KEYBOARD_HELPER_KEY)},
	{"popupMenu", "Ljavax/swing/JPopupMenu;", nullptr, $PROTECTED, $field(BasicPopupMenuUI, popupMenu)},
	{"popupMenuListener", "Ljavax/swing/event/PopupMenuListener;", nullptr, $PRIVATE | $TRANSIENT, $field(BasicPopupMenuUI, popupMenuListener)},
	{"menuKeyListener", "Ljavax/swing/event/MenuKeyListener;", nullptr, $PRIVATE, $field(BasicPopupMenuUI, menuKeyListener)},
	{"checkedUnpostPopup", "Z", nullptr, $PRIVATE | $STATIC, $staticField(BasicPopupMenuUI, checkedUnpostPopup)},
	{"unpostPopup", "Z", nullptr, $PRIVATE | $STATIC, $staticField(BasicPopupMenuUI, unpostPopup)},
	{}
};

$MethodInfo _BasicPopupMenuUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicPopupMenuUI::*)()>(&BasicPopupMenuUI::init$))},
	{"checkInvokerEqual", "(Ljavax/swing/MenuElement;Ljavax/swing/MenuElement;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($MenuElement*,$MenuElement*)>(&BasicPopupMenuUI::checkInvokerEqual))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicPopupMenuUI::createUI))},
	{"findEnabledChild", "([Ljavax/swing/MenuElement;IZ)Ljavax/swing/MenuElement;", nullptr, $STATIC, $method(static_cast<$MenuElement*(*)($MenuElementArray*,int32_t,bool)>(&BasicPopupMenuUI::findEnabledChild))},
	{"findEnabledChild", "([Ljavax/swing/MenuElement;Ljavax/swing/MenuElement;Z)Ljavax/swing/MenuElement;", nullptr, $STATIC, $method(static_cast<$MenuElement*(*)($MenuElementArray*,$MenuElement*,bool)>(&BasicPopupMenuUI::findEnabledChild))},
	{"getActionMap", "()Ljavax/swing/ActionMap;", nullptr, $STATIC, $method(static_cast<$ActionMap*(*)()>(&BasicPopupMenuUI::getActionMap))},
	{"getFirstPopup", "()Ljavax/swing/MenuElement;", nullptr, $STATIC, $method(static_cast<$MenuElement*(*)()>(&BasicPopupMenuUI::getFirstPopup))},
	{"getInputMap", "(Ljavax/swing/JPopupMenu;Ljavax/swing/JComponent;)Ljavax/swing/InputMap;", nullptr, $STATIC, $method(static_cast<$InputMap*(*)($JPopupMenu*,$JComponent*)>(&BasicPopupMenuUI::getInputMap))},
	{"getLastPopup", "()Ljavax/swing/JPopupMenu;", nullptr, $STATIC, $method(static_cast<$JPopupMenu*(*)()>(&BasicPopupMenuUI::getLastPopup))},
	{"getPopups", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/swing/JPopupMenu;>;", $STATIC, $method(static_cast<$List*(*)()>(&BasicPopupMenuUI::getPopups))},
	{"installDefaults", "()V", nullptr, $PUBLIC},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"isPopupTrigger", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PUBLIC},
	{"loadActionMap", "(Ljavax/swing/plaf/basic/LazyActionMap;)V", nullptr, $STATIC, $method(static_cast<void(*)($LazyActionMap*)>(&BasicPopupMenuUI::loadActionMap))},
	{"nextEnabledChild", "([Ljavax/swing/MenuElement;II)Ljavax/swing/MenuElement;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MenuElement*(*)($MenuElementArray*,int32_t,int32_t)>(&BasicPopupMenuUI::nextEnabledChild))},
	{"previousEnabledChild", "([Ljavax/swing/MenuElement;II)Ljavax/swing/MenuElement;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MenuElement*(*)($MenuElementArray*,int32_t,int32_t)>(&BasicPopupMenuUI::previousEnabledChild))},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicPopupMenuUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicPopupMenuUI$MenuKeyboardHelper", "javax.swing.plaf.basic.BasicPopupMenuUI", "MenuKeyboardHelper", $STATIC},
	{"javax.swing.plaf.basic.BasicPopupMenuUI$MouseGrabber", "javax.swing.plaf.basic.BasicPopupMenuUI", "MouseGrabber", $STATIC},
	{"javax.swing.plaf.basic.BasicPopupMenuUI$Actions", "javax.swing.plaf.basic.BasicPopupMenuUI", "Actions", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicPopupMenuUI$BasicMenuKeyListener", "javax.swing.plaf.basic.BasicPopupMenuUI", "BasicMenuKeyListener", $PRIVATE},
	{"javax.swing.plaf.basic.BasicPopupMenuUI$BasicPopupMenuListener", "javax.swing.plaf.basic.BasicPopupMenuUI", "BasicPopupMenuListener", $PRIVATE},
	{}
};

$ClassInfo _BasicPopupMenuUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicPopupMenuUI",
	"javax.swing.plaf.PopupMenuUI",
	nullptr,
	_BasicPopupMenuUI_FieldInfo_,
	_BasicPopupMenuUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicPopupMenuUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicPopupMenuUI$MenuKeyboardHelper,javax.swing.plaf.basic.BasicPopupMenuUI$MenuKeyboardHelper$1,javax.swing.plaf.basic.BasicPopupMenuUI$MouseGrabber,javax.swing.plaf.basic.BasicPopupMenuUI$MouseGrabber$2,javax.swing.plaf.basic.BasicPopupMenuUI$MouseGrabber$1,javax.swing.plaf.basic.BasicPopupMenuUI$Actions,javax.swing.plaf.basic.BasicPopupMenuUI$BasicMenuKeyListener,javax.swing.plaf.basic.BasicPopupMenuUI$BasicPopupMenuListener"
};

$Object* allocate$BasicPopupMenuUI($Class* clazz) {
	return $of($alloc(BasicPopupMenuUI));
}

$StringBuilder* BasicPopupMenuUI::MOUSE_GRABBER_KEY = nullptr;
$StringBuilder* BasicPopupMenuUI::MENU_KEYBOARD_HELPER_KEY = nullptr;
bool BasicPopupMenuUI::checkedUnpostPopup = false;
bool BasicPopupMenuUI::unpostPopup = false;

$ComponentUI* BasicPopupMenuUI::createUI($JComponent* x) {
	$init(BasicPopupMenuUI);
	return $new(BasicPopupMenuUI);
}

void BasicPopupMenuUI::init$() {
	$PopupMenuUI::init$();
	$set(this, popupMenu, nullptr);
	$set(this, popupMenuListener, nullptr);
	$set(this, menuKeyListener, nullptr);
	$init($BasicLookAndFeel);
	$BasicLookAndFeel::needsEventHelper = true;
	$var($LookAndFeel, laf, $UIManager::getLookAndFeel());
	if ($instanceOf($BasicLookAndFeel, laf)) {
		$nc(($cast($BasicLookAndFeel, laf)))->installAWTEventListener();
	}
}

void BasicPopupMenuUI::installUI($JComponent* c) {
	$set(this, popupMenu, $cast($JPopupMenu, c));
	installDefaults();
	installListeners();
	installKeyboardActions();
}

void BasicPopupMenuUI::installDefaults() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(this->popupMenu)->getLayout() == nullptr;
	if (var$0 || $instanceOf($UIResource, $($nc(this->popupMenu)->getLayout()))) {
		$nc(this->popupMenu)->setLayout($$new($DefaultMenuLayout, this->popupMenu, $BoxLayout::Y_AXIS));
	}
	$init($Boolean);
	$LookAndFeel::installProperty(this->popupMenu, "opaque"_s, $Boolean::TRUE);
	$LookAndFeel::installBorder(this->popupMenu, "PopupMenu.border"_s);
	$LookAndFeel::installColorsAndFont(this->popupMenu, "PopupMenu.background"_s, "PopupMenu.foreground"_s, "PopupMenu.font"_s);
}

void BasicPopupMenuUI::installListeners() {
	$useLocalCurrentObjectStackCache();
	if (this->popupMenuListener == nullptr) {
		$set(this, popupMenuListener, $new($BasicPopupMenuUI$BasicPopupMenuListener, this));
	}
	$nc(this->popupMenu)->addPopupMenuListener(this->popupMenuListener);
	if (this->menuKeyListener == nullptr) {
		$set(this, menuKeyListener, $new($BasicPopupMenuUI$BasicMenuKeyListener, this));
	}
	$nc(this->popupMenu)->addMenuKeyListener(this->menuKeyListener);
	$var($AppContext, context, $AppContext::getAppContext());
	$synchronized(BasicPopupMenuUI::MOUSE_GRABBER_KEY) {
		$var($BasicPopupMenuUI$MouseGrabber, mouseGrabber, $cast($BasicPopupMenuUI$MouseGrabber, $nc(context)->get(BasicPopupMenuUI::MOUSE_GRABBER_KEY)));
		if (mouseGrabber == nullptr) {
			$assign(mouseGrabber, $new($BasicPopupMenuUI$MouseGrabber));
			context->put(BasicPopupMenuUI::MOUSE_GRABBER_KEY, mouseGrabber);
		}
	}
	$synchronized(BasicPopupMenuUI::MENU_KEYBOARD_HELPER_KEY) {
		$var($BasicPopupMenuUI$MenuKeyboardHelper, helper, $cast($BasicPopupMenuUI$MenuKeyboardHelper, $nc(context)->get(BasicPopupMenuUI::MENU_KEYBOARD_HELPER_KEY)));
		if (helper == nullptr) {
			$assign(helper, $new($BasicPopupMenuUI$MenuKeyboardHelper));
			context->put(BasicPopupMenuUI::MENU_KEYBOARD_HELPER_KEY, helper);
			$var($MenuSelectionManager, msm, $MenuSelectionManager::defaultManager());
			$nc(msm)->addChangeListener(helper);
		}
	}
}

void BasicPopupMenuUI::installKeyboardActions() {
}

$InputMap* BasicPopupMenuUI::getInputMap($JPopupMenu* popup, $JComponent* c) {
	$init(BasicPopupMenuUI);
	$useLocalCurrentObjectStackCache();
	$var($InputMap, windowInputMap, nullptr);
	$var($ObjectArray, bindings, $cast($ObjectArray, $UIManager::get("PopupMenu.selectedWindowInputMapBindings"_s)));
	if (bindings != nullptr) {
		$assign(windowInputMap, $LookAndFeel::makeComponentInputMap(c, bindings));
		if (!$nc($($nc(popup)->getComponentOrientation()))->isLeftToRight()) {
			$var($ObjectArray, km, $cast($ObjectArray, $UIManager::get("PopupMenu.selectedWindowInputMapBindings.RightToLeft"_s)));
			if (km != nullptr) {
				$var($InputMap, rightToLeftInputMap, $LookAndFeel::makeComponentInputMap(c, km));
				$nc(rightToLeftInputMap)->setParent(windowInputMap);
				$assign(windowInputMap, rightToLeftInputMap);
			}
		}
	}
	return windowInputMap;
}

$ActionMap* BasicPopupMenuUI::getActionMap() {
	$init(BasicPopupMenuUI);
	return $LazyActionMap::getActionMap(BasicPopupMenuUI::class$, "PopupMenu.actionMap"_s);
}

void BasicPopupMenuUI::loadActionMap($LazyActionMap* map) {
	$init(BasicPopupMenuUI);
	$useLocalCurrentObjectStackCache();
	$init($BasicPopupMenuUI$Actions);
	$nc(map)->put($$new($BasicPopupMenuUI$Actions, $BasicPopupMenuUI$Actions::CANCEL));
	map->put($$new($BasicPopupMenuUI$Actions, $BasicPopupMenuUI$Actions::SELECT_NEXT));
	map->put($$new($BasicPopupMenuUI$Actions, $BasicPopupMenuUI$Actions::SELECT_PREVIOUS));
	map->put($$new($BasicPopupMenuUI$Actions, $BasicPopupMenuUI$Actions::SELECT_PARENT));
	map->put($$new($BasicPopupMenuUI$Actions, $BasicPopupMenuUI$Actions::SELECT_CHILD));
	map->put($$new($BasicPopupMenuUI$Actions, $BasicPopupMenuUI$Actions::RETURN));
	$BasicLookAndFeel::installAudioActionMap(map);
}

void BasicPopupMenuUI::uninstallUI($JComponent* c) {
	uninstallDefaults();
	uninstallListeners();
	uninstallKeyboardActions();
	$set(this, popupMenu, nullptr);
}

void BasicPopupMenuUI::uninstallDefaults() {
	$LookAndFeel::uninstallBorder(this->popupMenu);
}

void BasicPopupMenuUI::uninstallListeners() {
	if (this->popupMenuListener != nullptr) {
		$nc(this->popupMenu)->removePopupMenuListener(this->popupMenuListener);
	}
	if (this->menuKeyListener != nullptr) {
		$nc(this->popupMenu)->removeMenuKeyListener(this->menuKeyListener);
	}
}

void BasicPopupMenuUI::uninstallKeyboardActions() {
	$SwingUtilities::replaceUIActionMap(this->popupMenu, nullptr);
	$SwingUtilities::replaceUIInputMap(this->popupMenu, $JComponent::WHEN_IN_FOCUSED_WINDOW, nullptr);
}

$MenuElement* BasicPopupMenuUI::getFirstPopup() {
	$init(BasicPopupMenuUI);
	$useLocalCurrentObjectStackCache();
	$var($MenuSelectionManager, msm, $MenuSelectionManager::defaultManager());
	$var($MenuElementArray, p, $nc(msm)->getSelectedPath());
	$var($MenuElement, me, nullptr);
	for (int32_t i = 0; me == nullptr && i < $nc(p)->length; ++i) {
		if ($instanceOf($JPopupMenu, p->get(i))) {
			$assign(me, p->get(i));
		}
	}
	return me;
}

$JPopupMenu* BasicPopupMenuUI::getLastPopup() {
	$init(BasicPopupMenuUI);
	$useLocalCurrentObjectStackCache();
	$var($MenuSelectionManager, msm, $MenuSelectionManager::defaultManager());
	$var($MenuElementArray, p, $nc(msm)->getSelectedPath());
	$var($JPopupMenu, popup, nullptr);
	for (int32_t i = $nc(p)->length - 1; popup == nullptr && i >= 0; --i) {
		if ($instanceOf($JPopupMenu, p->get(i))) {
			$assign(popup, $cast($JPopupMenu, p->get(i)));
		}
	}
	return popup;
}

$List* BasicPopupMenuUI::getPopups() {
	$init(BasicPopupMenuUI);
	$useLocalCurrentObjectStackCache();
	$var($MenuSelectionManager, msm, $MenuSelectionManager::defaultManager());
	$var($MenuElementArray, p, $nc(msm)->getSelectedPath());
	$var($List, list, $new($ArrayList, $nc(p)->length));
	{
		$var($MenuElementArray, arr$, p);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($MenuElement, element, arr$->get(i$));
			{
				if ($instanceOf($JPopupMenu, element)) {
					list->add($cast($JPopupMenu, element));
				}
			}
		}
	}
	return list;
}

bool BasicPopupMenuUI::isPopupTrigger($MouseEvent* e) {
	bool var$0 = ($nc(e)->getID() == $MouseEvent::MOUSE_RELEASED);
	return (var$0 && (((int32_t)(e->getModifiers() & (uint32_t)$MouseEvent::BUTTON3_MASK)) != 0));
}

bool BasicPopupMenuUI::checkInvokerEqual($MenuElement* present, $MenuElement* last) {
	$init(BasicPopupMenuUI);
	$useLocalCurrentObjectStackCache();
	$var($Component, invokerPresent, $nc(present)->getComponent());
	$var($Component, invokerLast, $nc(last)->getComponent());
	if ($instanceOf($JPopupMenu, invokerPresent)) {
		$assign(invokerPresent, $nc(($cast($JPopupMenu, invokerPresent)))->getInvoker());
	}
	if ($instanceOf($JPopupMenu, invokerLast)) {
		$assign(invokerLast, $nc(($cast($JPopupMenu, invokerLast)))->getInvoker());
	}
	return (invokerPresent == invokerLast);
}

$MenuElement* BasicPopupMenuUI::nextEnabledChild($MenuElementArray* e, int32_t fromIndex, int32_t toIndex) {
	$init(BasicPopupMenuUI);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = fromIndex; i <= toIndex; ++i) {
		if ($nc(e)->get(i) != nullptr) {
			$var($Component, comp, $nc(e->get(i))->getComponent());
			bool var$1 = comp != nullptr;
			if (var$1) {
				bool var$2 = comp->isEnabled();
				var$1 = (var$2 || $UIManager::getBoolean("MenuItem.disabledAreNavigable"_s));
			}
			bool var$0 = var$1;
			if (var$0 && $nc(comp)->isVisible()) {
				return e->get(i);
			}
		}
	}
	return nullptr;
}

$MenuElement* BasicPopupMenuUI::previousEnabledChild($MenuElementArray* e, int32_t fromIndex, int32_t toIndex) {
	$init(BasicPopupMenuUI);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = fromIndex; i >= toIndex; --i) {
		if ($nc(e)->get(i) != nullptr) {
			$var($Component, comp, $nc(e->get(i))->getComponent());
			bool var$1 = comp != nullptr;
			if (var$1) {
				bool var$2 = comp->isEnabled();
				var$1 = (var$2 || $UIManager::getBoolean("MenuItem.disabledAreNavigable"_s));
			}
			bool var$0 = var$1;
			if (var$0 && $nc(comp)->isVisible()) {
				return e->get(i);
			}
		}
	}
	return nullptr;
}

$MenuElement* BasicPopupMenuUI::findEnabledChild($MenuElementArray* e, int32_t fromIndex, bool forward) {
	$init(BasicPopupMenuUI);
	$var($MenuElement, result, nullptr);
	if (forward) {
		$assign(result, nextEnabledChild(e, fromIndex + 1, $nc(e)->length - 1));
		if (result == nullptr) {
			$assign(result, nextEnabledChild(e, 0, fromIndex - 1));
		}
	} else {
		$assign(result, previousEnabledChild(e, fromIndex - 1, 0));
		if (result == nullptr) {
			$assign(result, previousEnabledChild(e, $nc(e)->length - 1, fromIndex + 1));
		}
	}
	return result;
}

$MenuElement* BasicPopupMenuUI::findEnabledChild($MenuElementArray* e, $MenuElement* elem, bool forward) {
	$init(BasicPopupMenuUI);
	for (int32_t i = 0; i < $nc(e)->length; ++i) {
		if (e->get(i) == elem) {
			return findEnabledChild(e, i, forward);
		}
	}
	return nullptr;
}

void clinit$BasicPopupMenuUI($Class* class$) {
	$assignStatic(BasicPopupMenuUI::MOUSE_GRABBER_KEY, $new($StringBuilder, "javax.swing.plaf.basic.BasicPopupMenuUI.MouseGrabber"_s));
	$assignStatic(BasicPopupMenuUI::MENU_KEYBOARD_HELPER_KEY, $new($StringBuilder, "javax.swing.plaf.basic.BasicPopupMenuUI.MenuKeyboardHelper"_s));
}

BasicPopupMenuUI::BasicPopupMenuUI() {
}

$Class* BasicPopupMenuUI::load$($String* name, bool initialize) {
	$loadClass(BasicPopupMenuUI, name, initialize, &_BasicPopupMenuUI_ClassInfo_, clinit$BasicPopupMenuUI, allocate$BasicPopupMenuUI);
	return class$;
}

$Class* BasicPopupMenuUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax