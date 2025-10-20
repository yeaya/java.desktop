#include <javax/swing/plaf/basic/BasicDesktopPaneUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/ComponentInputMap.h>
#include <javax/swing/DefaultDesktopManager.h>
#include <javax/swing/DesktopManager.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/DesktopPaneUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI$Actions.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI$BasicDesktopManager.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI$Handler.h>
#include <javax/swing/plaf/basic/LazyActionMap.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef CLOSE
#undef DOWN
#undef ESCAPE
#undef LEFT
#undef MAXIMIZE
#undef MAX_VALUE
#undef MINIMIZE
#undef MOVE
#undef NAVIGATE_NEXT
#undef NAVIGATE_PREVIOUS
#undef NEXT_FRAME
#undef PREVIOUS_FRAME
#undef RESIZE
#undef RESTORE
#undef RIGHT
#undef SHARED_ACTION
#undef SHRINK_DOWN
#undef SHRINK_LEFT
#undef SHRINK_RIGHT
#undef SHRINK_UP
#undef TRUE
#undef UP
#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT
#undef WHEN_IN_FOCUSED_WINDOW

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $ComponentInputMap = ::javax::swing::ComponentInputMap;
using $DefaultDesktopManager = ::javax::swing::DefaultDesktopManager;
using $DesktopManager = ::javax::swing::DesktopManager;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $KeyStroke = ::javax::swing::KeyStroke;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $DesktopPaneUI = ::javax::swing::plaf::DesktopPaneUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicDesktopPaneUI$Actions = ::javax::swing::plaf::basic::BasicDesktopPaneUI$Actions;
using $BasicDesktopPaneUI$BasicDesktopManager = ::javax::swing::plaf::basic::BasicDesktopPaneUI$BasicDesktopManager;
using $BasicDesktopPaneUI$Handler = ::javax::swing::plaf::basic::BasicDesktopPaneUI$Handler;
using $LazyActionMap = ::javax::swing::plaf::basic::LazyActionMap;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$CompoundAttribute _BasicDesktopPaneUI_FieldAnnotations_minimizeKey[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicDesktopPaneUI_FieldAnnotations_maximizeKey[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicDesktopPaneUI_FieldAnnotations_closeKey[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicDesktopPaneUI_FieldAnnotations_navigateKey[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicDesktopPaneUI_FieldAnnotations_navigateKey2[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _BasicDesktopPaneUI_FieldInfo_[] = {
	{"SHARED_ACTION", "Ljavax/swing/plaf/basic/BasicDesktopPaneUI$Actions;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicDesktopPaneUI, SHARED_ACTION)},
	{"handler", "Ljavax/swing/plaf/basic/BasicDesktopPaneUI$Handler;", nullptr, $PRIVATE, $field(BasicDesktopPaneUI, handler)},
	{"pcl", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(BasicDesktopPaneUI, pcl)},
	{"desktop", "Ljavax/swing/JDesktopPane;", nullptr, $PROTECTED, $field(BasicDesktopPaneUI, desktop)},
	{"desktopManager", "Ljavax/swing/DesktopManager;", nullptr, $PROTECTED, $field(BasicDesktopPaneUI, desktopManager)},
	{"minimizeKey", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicDesktopPaneUI, minimizeKey), _BasicDesktopPaneUI_FieldAnnotations_minimizeKey},
	{"maximizeKey", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicDesktopPaneUI, maximizeKey), _BasicDesktopPaneUI_FieldAnnotations_maximizeKey},
	{"closeKey", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicDesktopPaneUI, closeKey), _BasicDesktopPaneUI_FieldAnnotations_closeKey},
	{"navigateKey", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicDesktopPaneUI, navigateKey), _BasicDesktopPaneUI_FieldAnnotations_navigateKey},
	{"navigateKey2", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicDesktopPaneUI, navigateKey2), _BasicDesktopPaneUI_FieldAnnotations_navigateKey2},
	{}
};

$MethodInfo _BasicDesktopPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicDesktopPaneUI::*)()>(&BasicDesktopPaneUI::init$))},
	{"createInputMap", "(I)Ljavax/swing/InputMap;", nullptr, 0},
	{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicDesktopPaneUI::createUI))},
	{"getHandler", "()Ljavax/swing/plaf/basic/BasicDesktopPaneUI$Handler;", nullptr, $PRIVATE, $method(static_cast<$BasicDesktopPaneUI$Handler*(BasicDesktopPaneUI::*)()>(&BasicDesktopPaneUI::getHandler))},
	{"getInputMap", "(I)Ljavax/swing/InputMap;", nullptr, 0},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installDesktopManager", "()V", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"loadActionMap", "(Ljavax/swing/plaf/basic/LazyActionMap;)V", nullptr, $STATIC, $method(static_cast<void(*)($LazyActionMap*)>(&BasicDesktopPaneUI::loadActionMap))},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"registerKeyboardActions", "()V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallDesktopManager", "()V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"unregisterKeyboardActions", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _BasicDesktopPaneUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicDesktopPaneUI$NavigateAction", "javax.swing.plaf.basic.BasicDesktopPaneUI", "NavigateAction", $PROTECTED},
	{"javax.swing.plaf.basic.BasicDesktopPaneUI$MaximizeAction", "javax.swing.plaf.basic.BasicDesktopPaneUI", "MaximizeAction", $PROTECTED},
	{"javax.swing.plaf.basic.BasicDesktopPaneUI$MinimizeAction", "javax.swing.plaf.basic.BasicDesktopPaneUI", "MinimizeAction", $PROTECTED},
	{"javax.swing.plaf.basic.BasicDesktopPaneUI$CloseAction", "javax.swing.plaf.basic.BasicDesktopPaneUI", "CloseAction", $PROTECTED},
	{"javax.swing.plaf.basic.BasicDesktopPaneUI$OpenAction", "javax.swing.plaf.basic.BasicDesktopPaneUI", "OpenAction", $PROTECTED},
	{"javax.swing.plaf.basic.BasicDesktopPaneUI$Actions", "javax.swing.plaf.basic.BasicDesktopPaneUI", "Actions", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicDesktopPaneUI$BasicDesktopManager", "javax.swing.plaf.basic.BasicDesktopPaneUI", "BasicDesktopManager", $PRIVATE},
	{"javax.swing.plaf.basic.BasicDesktopPaneUI$Handler", "javax.swing.plaf.basic.BasicDesktopPaneUI", "Handler", $PRIVATE},
	{}
};

$ClassInfo _BasicDesktopPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicDesktopPaneUI",
	"javax.swing.plaf.DesktopPaneUI",
	nullptr,
	_BasicDesktopPaneUI_FieldInfo_,
	_BasicDesktopPaneUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicDesktopPaneUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicDesktopPaneUI$NavigateAction,javax.swing.plaf.basic.BasicDesktopPaneUI$MaximizeAction,javax.swing.plaf.basic.BasicDesktopPaneUI$MinimizeAction,javax.swing.plaf.basic.BasicDesktopPaneUI$CloseAction,javax.swing.plaf.basic.BasicDesktopPaneUI$OpenAction,javax.swing.plaf.basic.BasicDesktopPaneUI$Actions,javax.swing.plaf.basic.BasicDesktopPaneUI$BasicDesktopManager,javax.swing.plaf.basic.BasicDesktopPaneUI$Handler"
};

$Object* allocate$BasicDesktopPaneUI($Class* clazz) {
	return $of($alloc(BasicDesktopPaneUI));
}

$BasicDesktopPaneUI$Actions* BasicDesktopPaneUI::SHARED_ACTION = nullptr;

$ComponentUI* BasicDesktopPaneUI::createUI($JComponent* c) {
	$init(BasicDesktopPaneUI);
	return $new(BasicDesktopPaneUI);
}

void BasicDesktopPaneUI::init$() {
	$DesktopPaneUI::init$();
}

void BasicDesktopPaneUI::installUI($JComponent* c) {
	$set(this, desktop, $cast($JDesktopPane, c));
	installDefaults();
	installDesktopManager();
	installListeners();
	installKeyboardActions();
}

void BasicDesktopPaneUI::uninstallUI($JComponent* c) {
	uninstallKeyboardActions();
	uninstallListeners();
	uninstallDesktopManager();
	uninstallDefaults();
	$set(this, desktop, nullptr);
	$set(this, handler, nullptr);
}

void BasicDesktopPaneUI::installDefaults() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(this->desktop)->getBackground() == nullptr;
	if (var$0 || $instanceOf($UIResource, $($nc(this->desktop)->getBackground()))) {
		$nc(this->desktop)->setBackground($($UIManager::getColor("Desktop.background"_s)));
	}
	$init($Boolean);
	$LookAndFeel::installProperty(this->desktop, "opaque"_s, $Boolean::TRUE);
}

void BasicDesktopPaneUI::uninstallDefaults() {
}

void BasicDesktopPaneUI::installListeners() {
	$set(this, pcl, createPropertyChangeListener());
	$nc(this->desktop)->addPropertyChangeListener(this->pcl);
}

void BasicDesktopPaneUI::uninstallListeners() {
	$nc(this->desktop)->removePropertyChangeListener(this->pcl);
	$set(this, pcl, nullptr);
}

void BasicDesktopPaneUI::installDesktopManager() {
	$set(this, desktopManager, $nc(this->desktop)->getDesktopManager());
	if (this->desktopManager == nullptr) {
		$set(this, desktopManager, $new($BasicDesktopPaneUI$BasicDesktopManager, this));
		$nc(this->desktop)->setDesktopManager(this->desktopManager);
	}
}

void BasicDesktopPaneUI::uninstallDesktopManager() {
	if ($instanceOf($UIResource, $($nc(this->desktop)->getDesktopManager()))) {
		$nc(this->desktop)->setDesktopManager(nullptr);
	}
	$set(this, desktopManager, nullptr);
}

void BasicDesktopPaneUI::installKeyboardActions() {
	$var($InputMap, inputMap, getInputMap($JComponent::WHEN_IN_FOCUSED_WINDOW));
	if (inputMap != nullptr) {
		$SwingUtilities::replaceUIInputMap(this->desktop, $JComponent::WHEN_IN_FOCUSED_WINDOW, inputMap);
	}
	$assign(inputMap, getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT));
	if (inputMap != nullptr) {
		$SwingUtilities::replaceUIInputMap(this->desktop, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, inputMap);
	}
	$LazyActionMap::installLazyActionMap(this->desktop, BasicDesktopPaneUI::class$, "DesktopPane.actionMap"_s);
	registerKeyboardActions();
}

void BasicDesktopPaneUI::registerKeyboardActions() {
}

void BasicDesktopPaneUI::unregisterKeyboardActions() {
}

$InputMap* BasicDesktopPaneUI::getInputMap(int32_t condition) {
	if (condition == $JComponent::WHEN_IN_FOCUSED_WINDOW) {
		return createInputMap(condition);
	} else if (condition == $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT) {
		return $cast($InputMap, $DefaultLookup::get(this->desktop, this, "Desktop.ancestorInputMap"_s));
	}
	return nullptr;
}

$InputMap* BasicDesktopPaneUI::createInputMap(int32_t condition) {
	if (condition == $JComponent::WHEN_IN_FOCUSED_WINDOW) {
		$var($ObjectArray, bindings, $cast($ObjectArray, $DefaultLookup::get(this->desktop, this, "Desktop.windowBindings"_s)));
		if (bindings != nullptr) {
			return $LookAndFeel::makeComponentInputMap(this->desktop, bindings);
		}
	}
	return nullptr;
}

void BasicDesktopPaneUI::loadActionMap($LazyActionMap* map) {
	$init(BasicDesktopPaneUI);
	$useLocalCurrentObjectStackCache();
	$init($BasicDesktopPaneUI$Actions);
	$nc(map)->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::RESTORE));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::CLOSE));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::MOVE));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::RESIZE));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::LEFT));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::SHRINK_LEFT));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::RIGHT));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::SHRINK_RIGHT));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::UP));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::SHRINK_UP));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::DOWN));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::SHRINK_DOWN));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::ESCAPE));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::MINIMIZE));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::MAXIMIZE));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::NEXT_FRAME));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::PREVIOUS_FRAME));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::NAVIGATE_NEXT));
	map->put($$new($BasicDesktopPaneUI$Actions, $BasicDesktopPaneUI$Actions::NAVIGATE_PREVIOUS));
}

void BasicDesktopPaneUI::uninstallKeyboardActions() {
	unregisterKeyboardActions();
	$SwingUtilities::replaceUIInputMap(this->desktop, $JComponent::WHEN_IN_FOCUSED_WINDOW, nullptr);
	$SwingUtilities::replaceUIInputMap(this->desktop, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, nullptr);
	$SwingUtilities::replaceUIActionMap(this->desktop, nullptr);
}

void BasicDesktopPaneUI::paint($Graphics* g, $JComponent* c) {
}

$Dimension* BasicDesktopPaneUI::getPreferredSize($JComponent* c) {
	return nullptr;
}

$Dimension* BasicDesktopPaneUI::getMinimumSize($JComponent* c) {
	return $new($Dimension, 0, 0);
}

$Dimension* BasicDesktopPaneUI::getMaximumSize($JComponent* c) {
	return $new($Dimension, $Integer::MAX_VALUE, $Integer::MAX_VALUE);
}

$PropertyChangeListener* BasicDesktopPaneUI::createPropertyChangeListener() {
	return getHandler();
}

$BasicDesktopPaneUI$Handler* BasicDesktopPaneUI::getHandler() {
	if (this->handler == nullptr) {
		$set(this, handler, $new($BasicDesktopPaneUI$Handler, this));
	}
	return this->handler;
}

void clinit$BasicDesktopPaneUI($Class* class$) {
	$assignStatic(BasicDesktopPaneUI::SHARED_ACTION, $new($BasicDesktopPaneUI$Actions));
}

BasicDesktopPaneUI::BasicDesktopPaneUI() {
}

$Class* BasicDesktopPaneUI::load$($String* name, bool initialize) {
	$loadClass(BasicDesktopPaneUI, name, initialize, &_BasicDesktopPaneUI_ClassInfo_, clinit$BasicDesktopPaneUI, allocate$BasicDesktopPaneUI);
	return class$;
}

$Class* BasicDesktopPaneUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax