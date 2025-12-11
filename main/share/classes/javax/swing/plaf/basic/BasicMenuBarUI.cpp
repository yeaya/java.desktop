#include <javax/swing/plaf/basic/BasicMenuBarUI.h>

#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/event/ContainerListener.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/ComponentInputMap.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuBarUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicMenuBarUI$Actions.h>
#include <javax/swing/plaf/basic/BasicMenuBarUI$Handler.h>
#include <javax/swing/plaf/basic/DefaultMenuLayout.h>
#include <javax/swing/plaf/basic/LazyActionMap.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef LINE_AXIS
#undef TAKE_FOCUS
#undef TRUE
#undef WHEN_IN_FOCUSED_WINDOW

using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ContainerListener = ::java::awt::event::ContainerListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $BoxLayout = ::javax::swing::BoxLayout;
using $ButtonModel = ::javax::swing::ButtonModel;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MenuBarUI = ::javax::swing::plaf::MenuBarUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicMenuBarUI$Actions = ::javax::swing::plaf::basic::BasicMenuBarUI$Actions;
using $BasicMenuBarUI$Handler = ::javax::swing::plaf::basic::BasicMenuBarUI$Handler;
using $DefaultMenuLayout = ::javax::swing::plaf::basic::DefaultMenuLayout;
using $LazyActionMap = ::javax::swing::plaf::basic::LazyActionMap;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicMenuBarUI_FieldInfo_[] = {
	{"menuBar", "Ljavax/swing/JMenuBar;", nullptr, $PROTECTED, $field(BasicMenuBarUI, menuBar)},
	{"containerListener", "Ljava/awt/event/ContainerListener;", nullptr, $PROTECTED, $field(BasicMenuBarUI, containerListener)},
	{"changeListener", "Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED, $field(BasicMenuBarUI, changeListener)},
	{"handler", "Ljavax/swing/plaf/basic/BasicMenuBarUI$Handler;", nullptr, $PRIVATE, $field(BasicMenuBarUI, handler)},
	{}
};

$MethodInfo _BasicMenuBarUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicMenuBarUI::*)()>(&BasicMenuBarUI::init$))},
	{"createChangeListener", "()Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED},
	{"createContainerListener", "()Ljava/awt/event/ContainerListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicMenuBarUI::createUI))},
	{"getHandler", "()Ljavax/swing/plaf/basic/BasicMenuBarUI$Handler;", nullptr, $PRIVATE, $method(static_cast<$BasicMenuBarUI$Handler*(BasicMenuBarUI::*)()>(&BasicMenuBarUI::getHandler))},
	{"getInputMap", "(I)Ljavax/swing/InputMap;", nullptr, 0},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"loadActionMap", "(Ljavax/swing/plaf/basic/LazyActionMap;)V", nullptr, $STATIC, $method(static_cast<void(*)($LazyActionMap*)>(&BasicMenuBarUI::loadActionMap))},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicMenuBarUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicMenuBarUI$Actions", "javax.swing.plaf.basic.BasicMenuBarUI", "Actions", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicMenuBarUI$Handler", "javax.swing.plaf.basic.BasicMenuBarUI", "Handler", $PRIVATE},
	{}
};

$ClassInfo _BasicMenuBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicMenuBarUI",
	"javax.swing.plaf.MenuBarUI",
	nullptr,
	_BasicMenuBarUI_FieldInfo_,
	_BasicMenuBarUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicMenuBarUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicMenuBarUI$Actions,javax.swing.plaf.basic.BasicMenuBarUI$Handler"
};

$Object* allocate$BasicMenuBarUI($Class* clazz) {
	return $of($alloc(BasicMenuBarUI));
}

void BasicMenuBarUI::init$() {
	$MenuBarUI::init$();
	$set(this, menuBar, nullptr);
}

$ComponentUI* BasicMenuBarUI::createUI($JComponent* x) {
	$init(BasicMenuBarUI);
	return $new(BasicMenuBarUI);
}

void BasicMenuBarUI::loadActionMap($LazyActionMap* map) {
	$init(BasicMenuBarUI);
	$init($BasicMenuBarUI$Actions);
	$nc(map)->put($$new($BasicMenuBarUI$Actions, $BasicMenuBarUI$Actions::TAKE_FOCUS));
}

void BasicMenuBarUI::installUI($JComponent* c) {
	$set(this, menuBar, $cast($JMenuBar, c));
	installDefaults();
	installListeners();
	installKeyboardActions();
}

void BasicMenuBarUI::installDefaults() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(this->menuBar)->getLayout() == nullptr;
	if (var$0 || $instanceOf($UIResource, $($nc(this->menuBar)->getLayout()))) {
		$nc(this->menuBar)->setLayout($$new($DefaultMenuLayout, this->menuBar, $BoxLayout::LINE_AXIS));
	}
	$init($Boolean);
	$LookAndFeel::installProperty(this->menuBar, "opaque"_s, $Boolean::TRUE);
	$LookAndFeel::installBorder(this->menuBar, "MenuBar.border"_s);
	$LookAndFeel::installColorsAndFont(this->menuBar, "MenuBar.background"_s, "MenuBar.foreground"_s, "MenuBar.font"_s);
}

void BasicMenuBarUI::installListeners() {
	$useLocalCurrentObjectStackCache();
	$set(this, containerListener, createContainerListener());
	$set(this, changeListener, createChangeListener());
	for (int32_t i = 0; i < $nc(this->menuBar)->getMenuCount(); ++i) {
		$var($JMenu, menu, $nc(this->menuBar)->getMenu(i));
		if (menu != nullptr) {
			$nc($(menu->getModel()))->addChangeListener(this->changeListener);
		}
	}
	$nc(this->menuBar)->addContainerListener(this->containerListener);
}

void BasicMenuBarUI::installKeyboardActions() {
	$var($InputMap, inputMap, getInputMap($JComponent::WHEN_IN_FOCUSED_WINDOW));
	$SwingUtilities::replaceUIInputMap(this->menuBar, $JComponent::WHEN_IN_FOCUSED_WINDOW, inputMap);
	$LazyActionMap::installLazyActionMap(this->menuBar, BasicMenuBarUI::class$, "MenuBar.actionMap"_s);
}

$InputMap* BasicMenuBarUI::getInputMap(int32_t condition) {
	if (condition == $JComponent::WHEN_IN_FOCUSED_WINDOW) {
		$var($ObjectArray, bindings, $cast($ObjectArray, $DefaultLookup::get(this->menuBar, this, "MenuBar.windowBindings"_s)));
		if (bindings != nullptr) {
			return $LookAndFeel::makeComponentInputMap(this->menuBar, bindings);
		}
	}
	return nullptr;
}

void BasicMenuBarUI::uninstallUI($JComponent* c) {
	uninstallDefaults();
	uninstallListeners();
	uninstallKeyboardActions();
	$set(this, menuBar, nullptr);
}

void BasicMenuBarUI::uninstallDefaults() {
	if (this->menuBar != nullptr) {
		$LookAndFeel::uninstallBorder(this->menuBar);
	}
}

void BasicMenuBarUI::uninstallListeners() {
	$useLocalCurrentObjectStackCache();
	$nc(this->menuBar)->removeContainerListener(this->containerListener);
	for (int32_t i = 0; i < $nc(this->menuBar)->getMenuCount(); ++i) {
		$var($JMenu, menu, $nc(this->menuBar)->getMenu(i));
		if (menu != nullptr) {
			$nc($(menu->getModel()))->removeChangeListener(this->changeListener);
		}
	}
	$set(this, containerListener, nullptr);
	$set(this, changeListener, nullptr);
	$set(this, handler, nullptr);
}

void BasicMenuBarUI::uninstallKeyboardActions() {
	$SwingUtilities::replaceUIInputMap(this->menuBar, $JComponent::WHEN_IN_FOCUSED_WINDOW, nullptr);
	$SwingUtilities::replaceUIActionMap(this->menuBar, nullptr);
}

$ContainerListener* BasicMenuBarUI::createContainerListener() {
	return getHandler();
}

$ChangeListener* BasicMenuBarUI::createChangeListener() {
	return getHandler();
}

$BasicMenuBarUI$Handler* BasicMenuBarUI::getHandler() {
	if (this->handler == nullptr) {
		$set(this, handler, $new($BasicMenuBarUI$Handler, this));
	}
	return this->handler;
}

$Dimension* BasicMenuBarUI::getMinimumSize($JComponent* c) {
	return nullptr;
}

$Dimension* BasicMenuBarUI::getMaximumSize($JComponent* c) {
	return nullptr;
}

BasicMenuBarUI::BasicMenuBarUI() {
}

$Class* BasicMenuBarUI::load$($String* name, bool initialize) {
	$loadClass(BasicMenuBarUI, name, initialize, &_BasicMenuBarUI_ClassInfo_, allocate$BasicMenuBarUI);
	return class$;
}

$Class* BasicMenuBarUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax