#include <javax/swing/plaf/basic/BasicMenuItemUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/ComponentInputMap.h>
#include <javax/swing/Icon.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JCheckBoxMenuItem.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JRadioButtonMenuItem.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/MenuDragMouseListener.h>
#include <javax/swing/event/MenuKeyListener.h>
#include <javax/swing/event/MouseInputListener.h>
#include <javax/swing/plaf/ActionMapUIResource.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentInputMapUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuItemUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI$Actions.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI$Handler.h>
#include <javax/swing/plaf/basic/LazyActionMap.h>
#include <javax/swing/text/View.h>
#include <sun/swing/MenuItemCheckIconFactory.h>
#include <sun/swing/MenuItemLayoutHelper$LayoutResult.h>
#include <sun/swing/MenuItemLayoutHelper$RectSize.h>
#include <sun/swing/MenuItemLayoutHelper.h>
#include <sun/swing/SwingUtilities2.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef ALT_DOWN_MASK
#undef ALT_GRAPH_DOWN_MASK
#undef ALT_GRAPH_MASK
#undef CLICK
#undef DEBUG
#undef TRACE
#undef TRUE
#undef VERBOSE
#undef WHEN_IN_FOCUSED_WINDOW
#undef X_AXIS

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $ButtonModel = ::javax::swing::ButtonModel;
using $ComponentInputMap = ::javax::swing::ComponentInputMap;
using $Icon = ::javax::swing::Icon;
using $InputMap = ::javax::swing::InputMap;
using $JCheckBoxMenuItem = ::javax::swing::JCheckBoxMenuItem;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JRadioButtonMenuItem = ::javax::swing::JRadioButtonMenuItem;
using $KeyStroke = ::javax::swing::KeyStroke;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $MenuDragMouseListener = ::javax::swing::event::MenuDragMouseListener;
using $MenuKeyListener = ::javax::swing::event::MenuKeyListener;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $ActionMapUIResource = ::javax::swing::plaf::ActionMapUIResource;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentInputMapUIResource = ::javax::swing::plaf::ComponentInputMapUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MenuItemUI = ::javax::swing::plaf::MenuItemUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $BasicMenuItemUI$Actions = ::javax::swing::plaf::basic::BasicMenuItemUI$Actions;
using $BasicMenuItemUI$Handler = ::javax::swing::plaf::basic::BasicMenuItemUI$Handler;
using $LazyActionMap = ::javax::swing::plaf::basic::LazyActionMap;
using $View = ::javax::swing::text::View;
using $MenuItemCheckIconFactory = ::sun::swing::MenuItemCheckIconFactory;
using $MenuItemLayoutHelper = ::sun::swing::MenuItemLayoutHelper;
using $MenuItemLayoutHelper$LayoutResult = ::sun::swing::MenuItemLayoutHelper$LayoutResult;
using $MenuItemLayoutHelper$RectSize = ::sun::swing::MenuItemLayoutHelper$RectSize;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicMenuItemUI_FieldInfo_[] = {
	{"menuItem", "Ljavax/swing/JMenuItem;", nullptr, $PROTECTED, $field(BasicMenuItemUI, menuItem)},
	{"selectionBackground", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicMenuItemUI, selectionBackground)},
	{"selectionForeground", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicMenuItemUI, selectionForeground)},
	{"disabledForeground", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicMenuItemUI, disabledForeground)},
	{"acceleratorForeground", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicMenuItemUI, acceleratorForeground)},
	{"acceleratorSelectionForeground", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicMenuItemUI, acceleratorSelectionForeground)},
	{"acceleratorDelimiter", "Ljava/lang/String;", nullptr, $PROTECTED, $field(BasicMenuItemUI, acceleratorDelimiter)},
	{"defaultTextIconGap", "I", nullptr, $PROTECTED, $field(BasicMenuItemUI, defaultTextIconGap)},
	{"acceleratorFont", "Ljava/awt/Font;", nullptr, $PROTECTED, $field(BasicMenuItemUI, acceleratorFont)},
	{"mouseInputListener", "Ljavax/swing/event/MouseInputListener;", nullptr, $PROTECTED, $field(BasicMenuItemUI, mouseInputListener)},
	{"menuDragMouseListener", "Ljavax/swing/event/MenuDragMouseListener;", nullptr, $PROTECTED, $field(BasicMenuItemUI, menuDragMouseListener)},
	{"menuKeyListener", "Ljavax/swing/event/MenuKeyListener;", nullptr, $PROTECTED, $field(BasicMenuItemUI, menuKeyListener)},
	{"propertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $field(BasicMenuItemUI, propertyChangeListener)},
	{"handler", "Ljavax/swing/plaf/basic/BasicMenuItemUI$Handler;", nullptr, 0, $field(BasicMenuItemUI, handler)},
	{"arrowIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(BasicMenuItemUI, arrowIcon)},
	{"checkIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(BasicMenuItemUI, checkIcon)},
	{"oldBorderPainted", "Z", nullptr, $PROTECTED, $field(BasicMenuItemUI, oldBorderPainted)},
	{"TRACE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicMenuItemUI, TRACE)},
	{"VERBOSE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicMenuItemUI, VERBOSE)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicMenuItemUI, DEBUG)},
	{}
};

$MethodInfo _BasicMenuItemUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicMenuItemUI::*)()>(&BasicMenuItemUI::init$))},
	{"applyInsets", "(Ljava/awt/Rectangle;Ljava/awt/Insets;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicMenuItemUI::*)($Rectangle*,$Insets*)>(&BasicMenuItemUI::applyInsets))},
	{"createInputMap", "(I)Ljavax/swing/InputMap;", nullptr, 0},
	{"createMenuDragMouseListener", "(Ljavax/swing/JComponent;)Ljavax/swing/event/MenuDragMouseListener;", nullptr, $PROTECTED},
	{"createMenuKeyListener", "(Ljavax/swing/JComponent;)Ljavax/swing/event/MenuKeyListener;", nullptr, $PROTECTED},
	{"createMouseInputListener", "(Ljavax/swing/JComponent;)Ljavax/swing/event/MouseInputListener;", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "(Ljavax/swing/JComponent;)Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicMenuItemUI::createUI))},
	{"doClick", "(Ljavax/swing/MenuSelectionManager;)V", nullptr, $PROTECTED},
	{"doNotCloseOnMouseClick", "()Z", nullptr, 0},
	{"getHandler", "()Ljavax/swing/plaf/basic/BasicMenuItemUI$Handler;", nullptr, 0},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPath", "()[Ljavax/swing/MenuElement;", nullptr, $PUBLIC},
	{"getPreferredMenuItemSize", "(Ljavax/swing/JComponent;Ljavax/swing/Icon;Ljavax/swing/Icon;I)Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"installComponents", "(Ljavax/swing/JMenuItem;)V", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installLazyActionMap", "()V", nullptr, 0},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"isInternalFrameSystemMenu", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(BasicMenuItemUI::*)()>(&BasicMenuItemUI::isInternalFrameSystemMenu))},
	{"loadActionMap", "(Ljavax/swing/plaf/basic/LazyActionMap;)V", nullptr, $STATIC, $method(static_cast<void(*)($LazyActionMap*)>(&BasicMenuItemUI::loadActionMap))},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintAccText", "(Ljava/awt/Graphics;Lsun/swing/MenuItemLayoutHelper;Lsun/swing/MenuItemLayoutHelper$LayoutResult;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicMenuItemUI::*)($Graphics*,$MenuItemLayoutHelper*,$MenuItemLayoutHelper$LayoutResult*)>(&BasicMenuItemUI::paintAccText))},
	{"paintArrowIcon", "(Ljava/awt/Graphics;Lsun/swing/MenuItemLayoutHelper;Lsun/swing/MenuItemLayoutHelper$LayoutResult;Ljava/awt/Color;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicMenuItemUI::*)($Graphics*,$MenuItemLayoutHelper*,$MenuItemLayoutHelper$LayoutResult*,$Color*)>(&BasicMenuItemUI::paintArrowIcon))},
	{"paintBackground", "(Ljava/awt/Graphics;Ljavax/swing/JMenuItem;Ljava/awt/Color;)V", nullptr, $PROTECTED},
	{"paintCheckIcon", "(Ljava/awt/Graphics;Lsun/swing/MenuItemLayoutHelper;Lsun/swing/MenuItemLayoutHelper$LayoutResult;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicMenuItemUI::*)($Graphics*,$MenuItemLayoutHelper*,$MenuItemLayoutHelper$LayoutResult*,$Color*,$Color*)>(&BasicMenuItemUI::paintCheckIcon))},
	{"paintIcon", "(Ljava/awt/Graphics;Lsun/swing/MenuItemLayoutHelper;Lsun/swing/MenuItemLayoutHelper$LayoutResult;Ljava/awt/Color;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicMenuItemUI::*)($Graphics*,$MenuItemLayoutHelper*,$MenuItemLayoutHelper$LayoutResult*,$Color*)>(&BasicMenuItemUI::paintIcon))},
	{"paintMenuItem", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Ljavax/swing/Icon;Ljavax/swing/Icon;Ljava/awt/Color;Ljava/awt/Color;I)V", nullptr, $PROTECTED},
	{"paintText", "(Ljava/awt/Graphics;Lsun/swing/MenuItemLayoutHelper;Lsun/swing/MenuItemLayoutHelper$LayoutResult;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicMenuItemUI::*)($Graphics*,$MenuItemLayoutHelper*,$MenuItemLayoutHelper$LayoutResult*)>(&BasicMenuItemUI::paintText))},
	{"paintText", "(Ljava/awt/Graphics;Ljavax/swing/JMenuItem;Ljava/awt/Rectangle;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"printMenuElementArray", "([Ljavax/swing/MenuElement;Z)V", nullptr, 0},
	{"uninstallComponents", "(Ljavax/swing/JMenuItem;)V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateAcceleratorBinding", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _BasicMenuItemUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicMenuItemUI$Handler", "javax.swing.plaf.basic.BasicMenuItemUI", "Handler", 0},
	{"javax.swing.plaf.basic.BasicMenuItemUI$Actions", "javax.swing.plaf.basic.BasicMenuItemUI", "Actions", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicMenuItemUI$MouseInputHandler", "javax.swing.plaf.basic.BasicMenuItemUI", "MouseInputHandler", $PROTECTED},
	{}
};

$ClassInfo _BasicMenuItemUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicMenuItemUI",
	"javax.swing.plaf.MenuItemUI",
	nullptr,
	_BasicMenuItemUI_FieldInfo_,
	_BasicMenuItemUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicMenuItemUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicMenuItemUI$Handler,javax.swing.plaf.basic.BasicMenuItemUI$Actions,javax.swing.plaf.basic.BasicMenuItemUI$MouseInputHandler"
};

$Object* allocate$BasicMenuItemUI($Class* clazz) {
	return $of($alloc(BasicMenuItemUI));
}

void BasicMenuItemUI::init$() {
	$MenuItemUI::init$();
	$set(this, menuItem, nullptr);
	$set(this, arrowIcon, nullptr);
	$set(this, checkIcon, nullptr);
}

void BasicMenuItemUI::loadActionMap($LazyActionMap* map) {
	$init(BasicMenuItemUI);
	$init($BasicMenuItemUI$Actions);
	$nc(map)->put($$new($BasicMenuItemUI$Actions, $BasicMenuItemUI$Actions::CLICK));
	$BasicLookAndFeel::installAudioActionMap(map);
}

$ComponentUI* BasicMenuItemUI::createUI($JComponent* c) {
	$init(BasicMenuItemUI);
	return $new(BasicMenuItemUI);
}

void BasicMenuItemUI::installUI($JComponent* c) {
	$set(this, menuItem, $cast($JMenuItem, c));
	installDefaults();
	installComponents(this->menuItem);
	installListeners();
	installKeyboardActions();
}

void BasicMenuItemUI::installDefaults() {
	$var($String, prefix, getPropertyPrefix());
	$set(this, acceleratorFont, $UIManager::getFont("MenuItem.acceleratorFont"_s));
	if (this->acceleratorFont == nullptr) {
		$set(this, acceleratorFont, $UIManager::getFont("MenuItem.font"_s));
	}
	$var($Object, opaque, $UIManager::get($$str({$(getPropertyPrefix()), ".opaque"_s})));
	if (opaque != nullptr) {
		$LookAndFeel::installProperty(this->menuItem, "opaque"_s, opaque);
	} else {
		$init($Boolean);
		$LookAndFeel::installProperty(this->menuItem, "opaque"_s, $Boolean::TRUE);
	}
	bool var$0 = $nc(this->menuItem)->getMargin() == nullptr;
	if (var$0 || ($instanceOf($UIResource, $($nc(this->menuItem)->getMargin())))) {
		$nc(this->menuItem)->setMargin($($UIManager::getInsets($$str({prefix, ".margin"_s}))));
	}
	$LookAndFeel::installProperty(this->menuItem, "iconTextGap"_s, $($Integer::valueOf(4)));
	this->defaultTextIconGap = $nc(this->menuItem)->getIconTextGap();
	$LookAndFeel::installBorder(this->menuItem, $$str({prefix, ".border"_s}));
	this->oldBorderPainted = $nc(this->menuItem)->isBorderPainted();
	$LookAndFeel::installProperty(this->menuItem, "borderPainted"_s, $($Boolean::valueOf($UIManager::getBoolean($$str({prefix, ".borderPainted"_s})))));
	$LookAndFeel::installColorsAndFont(this->menuItem, $$str({prefix, ".background"_s}), $$str({prefix, ".foreground"_s}), $$str({prefix, ".font"_s}));
	if (this->selectionBackground == nullptr || $instanceOf($UIResource, this->selectionBackground)) {
		$set(this, selectionBackground, $UIManager::getColor($$str({prefix, ".selectionBackground"_s})));
	}
	if (this->selectionForeground == nullptr || $instanceOf($UIResource, this->selectionForeground)) {
		$set(this, selectionForeground, $UIManager::getColor($$str({prefix, ".selectionForeground"_s})));
	}
	if (this->disabledForeground == nullptr || $instanceOf($UIResource, this->disabledForeground)) {
		$set(this, disabledForeground, $UIManager::getColor($$str({prefix, ".disabledForeground"_s})));
	}
	if (this->acceleratorForeground == nullptr || $instanceOf($UIResource, this->acceleratorForeground)) {
		$set(this, acceleratorForeground, $UIManager::getColor($$str({prefix, ".acceleratorForeground"_s})));
	}
	if (this->acceleratorSelectionForeground == nullptr || $instanceOf($UIResource, this->acceleratorSelectionForeground)) {
		$set(this, acceleratorSelectionForeground, $UIManager::getColor($$str({prefix, ".acceleratorSelectionForeground"_s})));
	}
	$set(this, acceleratorDelimiter, $UIManager::getString("MenuItem.acceleratorDelimiter"_s));
	if (this->acceleratorDelimiter == nullptr) {
		$set(this, acceleratorDelimiter, "+"_s);
	}
	if (this->arrowIcon == nullptr || $instanceOf($UIResource, this->arrowIcon)) {
		$set(this, arrowIcon, $UIManager::getIcon($$str({prefix, ".arrowIcon"_s})));
	}
	if (this->checkIcon == nullptr || $instanceOf($UIResource, this->checkIcon)) {
		$set(this, checkIcon, $UIManager::getIcon($$str({prefix, ".checkIcon"_s})));
		bool isColumnLayout = $MenuItemLayoutHelper::isColumnLayout($BasicGraphicsUtils::isLeftToRight(this->menuItem), this->menuItem);
		if (isColumnLayout) {
			$var($MenuItemCheckIconFactory, iconFactory, $cast($MenuItemCheckIconFactory, $UIManager::get($$str({prefix, ".checkIconFactory"_s}))));
			bool var$1 = iconFactory != nullptr && $MenuItemLayoutHelper::useCheckAndArrow(this->menuItem);
			if (var$1 && iconFactory->isCompatible(this->checkIcon, prefix)) {
				$set(this, checkIcon, iconFactory->getIcon(this->menuItem));
			}
		}
	}
}

void BasicMenuItemUI::installComponents($JMenuItem* menuItem) {
	$BasicHTML::updateRenderer(menuItem, $($nc(menuItem)->getText()));
}

$String* BasicMenuItemUI::getPropertyPrefix() {
	return "MenuItem"_s;
}

void BasicMenuItemUI::installListeners() {
	if (($assignField(this, mouseInputListener, createMouseInputListener(this->menuItem))) != nullptr) {
		$nc(this->menuItem)->addMouseListener(this->mouseInputListener);
		$nc(this->menuItem)->addMouseMotionListener(this->mouseInputListener);
	}
	if (($assignField(this, menuDragMouseListener, createMenuDragMouseListener(this->menuItem))) != nullptr) {
		$nc(this->menuItem)->addMenuDragMouseListener(this->menuDragMouseListener);
	}
	if (($assignField(this, menuKeyListener, createMenuKeyListener(this->menuItem))) != nullptr) {
		$nc(this->menuItem)->addMenuKeyListener(this->menuKeyListener);
	}
	if (($assignField(this, propertyChangeListener, createPropertyChangeListener(this->menuItem))) != nullptr) {
		$nc(this->menuItem)->addPropertyChangeListener(this->propertyChangeListener);
	}
}

void BasicMenuItemUI::installKeyboardActions() {
	installLazyActionMap();
	updateAcceleratorBinding();
}

void BasicMenuItemUI::installLazyActionMap() {
	$LazyActionMap::installLazyActionMap(this->menuItem, BasicMenuItemUI::class$, $$str({$(getPropertyPrefix()), ".actionMap"_s}));
}

void BasicMenuItemUI::uninstallUI($JComponent* c) {
	$set(this, menuItem, $cast($JMenuItem, c));
	uninstallDefaults();
	uninstallComponents(this->menuItem);
	uninstallListeners();
	uninstallKeyboardActions();
	$MenuItemLayoutHelper::clearUsedParentClientProperties(this->menuItem);
	$set(this, menuItem, nullptr);
}

void BasicMenuItemUI::uninstallDefaults() {
	$LookAndFeel::uninstallBorder(this->menuItem);
	$LookAndFeel::installProperty(this->menuItem, "borderPainted"_s, $($Boolean::valueOf(this->oldBorderPainted)));
	if ($instanceOf($UIResource, $($nc(this->menuItem)->getMargin()))) {
		$nc(this->menuItem)->setMargin(nullptr);
	}
	if ($instanceOf($UIResource, this->arrowIcon)) {
		$set(this, arrowIcon, nullptr);
	}
	if ($instanceOf($UIResource, this->checkIcon)) {
		$set(this, checkIcon, nullptr);
	}
}

void BasicMenuItemUI::uninstallComponents($JMenuItem* menuItem) {
	$BasicHTML::updateRenderer(menuItem, ""_s);
}

void BasicMenuItemUI::uninstallListeners() {
	if (this->mouseInputListener != nullptr) {
		$nc(this->menuItem)->removeMouseListener(this->mouseInputListener);
		$nc(this->menuItem)->removeMouseMotionListener(this->mouseInputListener);
	}
	if (this->menuDragMouseListener != nullptr) {
		$nc(this->menuItem)->removeMenuDragMouseListener(this->menuDragMouseListener);
	}
	if (this->menuKeyListener != nullptr) {
		$nc(this->menuItem)->removeMenuKeyListener(this->menuKeyListener);
	}
	if (this->propertyChangeListener != nullptr) {
		$nc(this->menuItem)->removePropertyChangeListener(this->propertyChangeListener);
	}
	$set(this, mouseInputListener, nullptr);
	$set(this, menuDragMouseListener, nullptr);
	$set(this, menuKeyListener, nullptr);
	$set(this, propertyChangeListener, nullptr);
	$set(this, handler, nullptr);
}

void BasicMenuItemUI::uninstallKeyboardActions() {
	$SwingUtilities::replaceUIActionMap(this->menuItem, nullptr);
	$SwingUtilities::replaceUIInputMap(this->menuItem, $JComponent::WHEN_IN_FOCUSED_WINDOW, nullptr);
}

$MouseInputListener* BasicMenuItemUI::createMouseInputListener($JComponent* c) {
	return getHandler();
}

$MenuDragMouseListener* BasicMenuItemUI::createMenuDragMouseListener($JComponent* c) {
	return getHandler();
}

$MenuKeyListener* BasicMenuItemUI::createMenuKeyListener($JComponent* c) {
	return nullptr;
}

$PropertyChangeListener* BasicMenuItemUI::createPropertyChangeListener($JComponent* c) {
	return getHandler();
}

$BasicMenuItemUI$Handler* BasicMenuItemUI::getHandler() {
	if (this->handler == nullptr) {
		$set(this, handler, $new($BasicMenuItemUI$Handler, this));
	}
	return this->handler;
}

$InputMap* BasicMenuItemUI::createInputMap(int32_t condition) {
	if (condition == $JComponent::WHEN_IN_FOCUSED_WINDOW) {
		return $new($ComponentInputMapUIResource, this->menuItem);
	}
	return nullptr;
}

void BasicMenuItemUI::updateAcceleratorBinding() {
	$var($KeyStroke, accelerator, $nc(this->menuItem)->getAccelerator());
	$var($InputMap, windowInputMap, $SwingUtilities::getUIInputMap(this->menuItem, $JComponent::WHEN_IN_FOCUSED_WINDOW));
	if (windowInputMap != nullptr) {
		windowInputMap->clear();
	}
	if (accelerator != nullptr) {
		if (windowInputMap == nullptr) {
			$assign(windowInputMap, createInputMap($JComponent::WHEN_IN_FOCUSED_WINDOW));
			$SwingUtilities::replaceUIInputMap(this->menuItem, $JComponent::WHEN_IN_FOCUSED_WINDOW, windowInputMap);
		}
		$nc(windowInputMap)->put(accelerator, "doClick"_s);
		int32_t modifiers = accelerator->getModifiers();
		if ((((int32_t)(modifiers & (uint32_t)$InputEvent::ALT_DOWN_MASK)) != 0) && (((int32_t)(modifiers & (uint32_t)$InputEvent::ALT_GRAPH_DOWN_MASK)) != 0)) {
			modifiers &= (uint32_t)~$InputEvent::ALT_GRAPH_DOWN_MASK;
			modifiers &= (uint32_t)~$InputEvent::ALT_GRAPH_MASK;
			int32_t var$0 = accelerator->getKeyCode();
			int32_t var$1 = modifiers;
			$var($KeyStroke, keyStroke, $KeyStroke::getKeyStroke(var$0, var$1, accelerator->isOnKeyRelease()));
			windowInputMap->put(keyStroke, "doClick"_s);
		} else if ((((int32_t)(modifiers & (uint32_t)$InputEvent::ALT_DOWN_MASK)) != 0) && (((int32_t)(modifiers & (uint32_t)$InputEvent::ALT_GRAPH_DOWN_MASK)) == 0)) {
			modifiers |= $InputEvent::ALT_GRAPH_DOWN_MASK;
			int32_t var$2 = accelerator->getKeyCode();
			int32_t var$3 = modifiers;
			$var($KeyStroke, keyStroke, $KeyStroke::getKeyStroke(var$2, var$3, accelerator->isOnKeyRelease()));
			windowInputMap->put(keyStroke, "doClick"_s);
		} else if (((int32_t)(modifiers & (uint32_t)$InputEvent::ALT_GRAPH_DOWN_MASK)) != 0) {
			modifiers &= (uint32_t)~$InputEvent::ALT_GRAPH_DOWN_MASK;
			modifiers &= (uint32_t)~$InputEvent::ALT_GRAPH_MASK;
			modifiers |= $InputEvent::ALT_DOWN_MASK;
			int32_t var$4 = accelerator->getKeyCode();
			int32_t var$5 = modifiers;
			$var($KeyStroke, keyStroke, $KeyStroke::getKeyStroke(var$4, var$5, accelerator->isOnKeyRelease()));
			windowInputMap->put(keyStroke, "doClick"_s);
			modifiers |= $InputEvent::ALT_GRAPH_DOWN_MASK;
			int32_t var$6 = accelerator->getKeyCode();
			int32_t var$7 = modifiers;
			$assign(keyStroke, $KeyStroke::getKeyStroke(var$6, var$7, accelerator->isOnKeyRelease()));
			windowInputMap->put(keyStroke, "doClick"_s);
		}
	}
}

$Dimension* BasicMenuItemUI::getMinimumSize($JComponent* c) {
	$var($Dimension, d, nullptr);
	$init($BasicHTML);
	$var($View, v, $cast($View, $nc(c)->getClientProperty($BasicHTML::propertyKey)));
	if (v != nullptr) {
		$assign(d, getPreferredSize(c));
		float var$0 = v->getPreferredSpan($View::X_AXIS);
		$nc(d)->width -= var$0 - v->getMinimumSpan($View::X_AXIS);
	}
	return d;
}

$Dimension* BasicMenuItemUI::getPreferredSize($JComponent* c) {
	return getPreferredMenuItemSize(c, this->checkIcon, this->arrowIcon, this->defaultTextIconGap);
}

$Dimension* BasicMenuItemUI::getMaximumSize($JComponent* c) {
	$var($Dimension, d, nullptr);
	$init($BasicHTML);
	$var($View, v, $cast($View, $nc(c)->getClientProperty($BasicHTML::propertyKey)));
	if (v != nullptr) {
		$assign(d, getPreferredSize(c));
		float var$0 = v->getMaximumSpan($View::X_AXIS);
		$nc(d)->width += var$0 - v->getPreferredSpan($View::X_AXIS);
	}
	return d;
}

$Dimension* BasicMenuItemUI::getPreferredMenuItemSize($JComponent* c, $Icon* checkIcon, $Icon* arrowIcon, int32_t defaultTextIconGap) {
	$var($JMenuItem, mi, $cast($JMenuItem, c));
	$var($JMenuItem, var$0, mi);
	$var($Icon, var$1, checkIcon);
	$var($Icon, var$2, arrowIcon);
	$var($Rectangle, var$3, $MenuItemLayoutHelper::createMaxRect());
	int32_t var$4 = defaultTextIconGap;
	$var($String, var$5, this->acceleratorDelimiter);
	bool var$6 = $BasicGraphicsUtils::isLeftToRight(mi);
	$var($Font, var$7, $nc(mi)->getFont());
	$var($Font, var$8, this->acceleratorFont);
	bool var$9 = $MenuItemLayoutHelper::useCheckAndArrow(this->menuItem);
	$var($MenuItemLayoutHelper, lh, $new($MenuItemLayoutHelper, var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, $(getPropertyPrefix())));
	$var($Dimension, result, $new($Dimension));
	result->width = lh->getLeadingGap();
	$var($MenuItemLayoutHelper$RectSize, var$10, lh->getCheckSize());
	$MenuItemLayoutHelper::addMaxWidth(var$10, lh->getAfterCheckIconGap(), result);
	bool var$12 = (!lh->isTopLevelMenu());
	bool var$11 = var$12 && (lh->getMinTextOffset() > 0);
	if (var$11 && (result->width < lh->getMinTextOffset())) {
		result->width = lh->getMinTextOffset();
	}
	$var($MenuItemLayoutHelper$RectSize, var$13, lh->getLabelSize());
	$MenuItemLayoutHelper::addMaxWidth(var$13, lh->getGap(), result);
	$var($MenuItemLayoutHelper$RectSize, var$14, lh->getAccSize());
	$MenuItemLayoutHelper::addMaxWidth(var$14, lh->getGap(), result);
	$var($MenuItemLayoutHelper$RectSize, var$15, lh->getArrowSize());
	$MenuItemLayoutHelper::addMaxWidth(var$15, lh->getGap(), result);
	result->height = $MenuItemLayoutHelper::max($$new($ints, {
		$nc($(lh->getCheckSize()))->getHeight(),
		$nc($(lh->getLabelSize()))->getHeight(),
		$nc($(lh->getAccSize()))->getHeight(),
		$nc($(lh->getArrowSize()))->getHeight()
	}));
	$var($Insets, insets, $nc($(lh->getMenuItem()))->getInsets());
	if (insets != nullptr) {
		result->width += insets->left + insets->right;
		result->height += insets->top + insets->bottom;
	}
	if (result->width % 2 == 0) {
		++result->width;
	}
	$init($Boolean);
	if (result->height % 2 == 0 && !$equals($Boolean::TRUE, $UIManager::get($$str({$(getPropertyPrefix()), ".evenHeight"_s})))) {
		++result->height;
	}
	return result;
}

void BasicMenuItemUI::update($Graphics* g, $JComponent* c) {
	paint(g, c);
}

void BasicMenuItemUI::paint($Graphics* g, $JComponent* c) {
	paintMenuItem(g, c, this->checkIcon, this->arrowIcon, this->selectionBackground, this->selectionForeground, this->defaultTextIconGap);
}

void BasicMenuItemUI::paintMenuItem($Graphics* g, $JComponent* c, $Icon* checkIcon, $Icon* arrowIcon, $Color* background, $Color* foreground, int32_t defaultTextIconGap) {
	$var($Font, holdf, $nc(g)->getFont());
	$var($Color, holdc, g->getColor());
	$var($JMenuItem, mi, $cast($JMenuItem, c));
	g->setFont($($nc(mi)->getFont()));
	int32_t var$0 = $nc(mi)->getWidth();
	$var($Rectangle, viewRect, $new($Rectangle, 0, 0, var$0, mi->getHeight()));
	applyInsets(viewRect, $($nc(mi)->getInsets()));
	$var($JMenuItem, var$1, mi);
	$var($Icon, var$2, checkIcon);
	$var($Icon, var$3, arrowIcon);
	$var($Rectangle, var$4, viewRect);
	int32_t var$5 = defaultTextIconGap;
	$var($String, var$6, this->acceleratorDelimiter);
	bool var$7 = $BasicGraphicsUtils::isLeftToRight(mi);
	$var($Font, var$8, $nc(mi)->getFont());
	$var($Font, var$9, this->acceleratorFont);
	bool var$10 = $MenuItemLayoutHelper::useCheckAndArrow(this->menuItem);
	$var($MenuItemLayoutHelper, lh, $new($MenuItemLayoutHelper, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, var$10, $(getPropertyPrefix())));
	$var($MenuItemLayoutHelper$LayoutResult, lr, lh->layoutMenuItem());
	paintBackground(g, mi, background);
	paintCheckIcon(g, lh, lr, holdc, foreground);
	paintIcon(g, lh, lr, holdc);
	paintText(g, lh, lr);
	paintAccText(g, lh, lr);
	paintArrowIcon(g, lh, lr, foreground);
	g->setColor(holdc);
	g->setFont(holdf);
}

void BasicMenuItemUI::paintIcon($Graphics* g, $MenuItemLayoutHelper* lh, $MenuItemLayoutHelper$LayoutResult* lr, $Color* holdc) {
	if ($nc(lh)->getIcon() != nullptr) {
		$var($Icon, icon, nullptr);
		$var($ButtonModel, model, $nc($(lh->getMenuItem()))->getModel());
		if (!$nc(model)->isEnabled()) {
			$assign(icon, $nc($(lh->getMenuItem()))->getDisabledIcon());
		} else {
			bool var$1 = model->isPressed();
			if (var$1 && model->isArmed()) {
				$assign(icon, $nc($(lh->getMenuItem()))->getPressedIcon());
				if (icon == nullptr) {
					$assign(icon, $nc($(lh->getMenuItem()))->getIcon());
				}
			} else {
				$assign(icon, $nc($(lh->getMenuItem()))->getIcon());
			}
		}
		if (icon != nullptr) {
			$var($Component, var$2, static_cast<$Component*>(lh->getMenuItem()));
			$var($Graphics, var$3, g);
			int32_t var$4 = $nc($($nc(lr)->getIconRect()))->x;
			icon->paintIcon(var$2, var$3, var$4, $nc($(lr->getIconRect()))->y);
			$nc(g)->setColor(holdc);
		}
	}
}

void BasicMenuItemUI::paintCheckIcon($Graphics* g, $MenuItemLayoutHelper* lh, $MenuItemLayoutHelper$LayoutResult* lr, $Color* holdc, $Color* foreground) {
	if ($nc(lh)->getCheckIcon() != nullptr) {
		$var($ButtonModel, model, $nc($(lh->getMenuItem()))->getModel());
		bool var$0 = $nc(model)->isArmed();
		if (!var$0) {
			bool var$1 = $instanceOf($JMenu, $(lh->getMenuItem()));
			var$0 = (var$1 && $nc(model)->isSelected());
		}
		if (var$0) {
			$nc(g)->setColor(foreground);
		} else {
			$nc(g)->setColor(holdc);
		}
		if (lh->useCheckAndArrow()) {
			$var($Component, var$2, static_cast<$Component*>(lh->getMenuItem()));
			$var($Graphics, var$3, g);
			int32_t var$4 = $nc($($nc(lr)->getCheckRect()))->x;
			$nc($(lh->getCheckIcon()))->paintIcon(var$2, var$3, var$4, $nc($(lr->getCheckRect()))->y);
		}
		$nc(g)->setColor(holdc);
	}
}

void BasicMenuItemUI::paintAccText($Graphics* g, $MenuItemLayoutHelper* lh, $MenuItemLayoutHelper$LayoutResult* lr) {
	if (!$nc($($nc(lh)->getAccText()))->isEmpty()) {
		$var($ButtonModel, model, $nc($(lh->getMenuItem()))->getModel());
		$nc(g)->setFont($($nc($(lh->getAccFontMetrics()))->getFont()));
		if (!$nc(model)->isEnabled()) {
			if (this->disabledForeground != nullptr) {
				g->setColor(this->disabledForeground);
				$var($JComponent, var$0, static_cast<$JComponent*>(lh->getMenuItem()));
				$var($Graphics, var$1, g);
				$var($String, var$2, lh->getAccText());
				int32_t var$3 = $nc($($nc(lr)->getAccRect()))->x;
				int32_t var$4 = $nc($(lr->getAccRect()))->y;
				$SwingUtilities2::drawString(var$0, var$1, var$2, var$3, var$4 + $nc($(lh->getAccFontMetrics()))->getAscent());
			} else {
				g->setColor($($nc($($nc($(lh->getMenuItem()))->getBackground()))->brighter()));
				$var($JComponent, var$5, static_cast<$JComponent*>(lh->getMenuItem()));
				$var($Graphics, var$6, g);
				$var($String, var$7, lh->getAccText());
				int32_t var$8 = $nc($($nc(lr)->getAccRect()))->x;
				int32_t var$9 = $nc($(lr->getAccRect()))->y;
				$SwingUtilities2::drawString(var$5, var$6, var$7, var$8, var$9 + $nc($(lh->getAccFontMetrics()))->getAscent());
				g->setColor($($nc($($nc($(lh->getMenuItem()))->getBackground()))->darker()));
				$var($JComponent, var$10, static_cast<$JComponent*>(lh->getMenuItem()));
				$var($Graphics, var$11, g);
				$var($String, var$12, lh->getAccText());
				int32_t var$13 = $nc($($nc(lr)->getAccRect()))->x - 1;
				int32_t var$14 = $nc($(lr->getAccRect()))->y;
				$SwingUtilities2::drawString(var$10, var$11, var$12, var$13, var$14 + $nc($(lh->getFontMetrics()))->getAscent() - 1);
			}
		} else {
			bool var$15 = model->isArmed();
			if (!var$15) {
				bool var$16 = $instanceOf($JMenu, $(lh->getMenuItem()));
				var$15 = (var$16 && model->isSelected());
			}
			if (var$15) {
				g->setColor(this->acceleratorSelectionForeground);
			} else {
				g->setColor(this->acceleratorForeground);
			}
			$var($JComponent, var$17, static_cast<$JComponent*>(lh->getMenuItem()));
			$var($Graphics, var$18, g);
			$var($String, var$19, lh->getAccText());
			int32_t var$20 = $nc($($nc(lr)->getAccRect()))->x;
			int32_t var$21 = $nc($(lr->getAccRect()))->y;
			$SwingUtilities2::drawString(var$17, var$18, var$19, var$20, var$21 + $nc($(lh->getAccFontMetrics()))->getAscent());
		}
	}
}

void BasicMenuItemUI::paintText($Graphics* g, $MenuItemLayoutHelper* lh, $MenuItemLayoutHelper$LayoutResult* lr) {
	if (!$nc($($nc(lh)->getText()))->isEmpty()) {
		if (lh->getHtmlView() != nullptr) {
			$nc($(lh->getHtmlView()))->paint(g, $($nc(lr)->getTextRect()));
		} else {
			$var($Graphics, var$0, g);
			$var($JMenuItem, var$1, lh->getMenuItem());
			$var($Rectangle, var$2, $nc(lr)->getTextRect());
			paintText(var$0, var$1, var$2, $(lh->getText()));
		}
	}
}

void BasicMenuItemUI::paintArrowIcon($Graphics* g, $MenuItemLayoutHelper* lh, $MenuItemLayoutHelper$LayoutResult* lr, $Color* foreground) {
	if ($nc(lh)->getArrowIcon() != nullptr) {
		$var($ButtonModel, model, $nc($(lh->getMenuItem()))->getModel());
		bool var$0 = $nc(model)->isArmed();
		if (!var$0) {
			bool var$1 = $instanceOf($JMenu, $(lh->getMenuItem()));
			var$0 = (var$1 && $nc(model)->isSelected());
		}
		if (var$0) {
			$nc(g)->setColor(foreground);
		}
		if (lh->useCheckAndArrow()) {
			$var($Component, var$2, static_cast<$Component*>(lh->getMenuItem()));
			$var($Graphics, var$3, g);
			int32_t var$4 = $nc($($nc(lr)->getArrowRect()))->x;
			$nc($(lh->getArrowIcon()))->paintIcon(var$2, var$3, var$4, $nc($(lr->getArrowRect()))->y);
		}
	}
}

void BasicMenuItemUI::applyInsets($Rectangle* rect, $Insets* insets) {
	if (insets != nullptr) {
		$nc(rect)->x += insets->left;
		rect->y += insets->top;
		rect->width -= (insets->right + rect->x);
		rect->height -= (insets->bottom + rect->y);
	}
}

void BasicMenuItemUI::paintBackground($Graphics* g, $JMenuItem* menuItem, $Color* bgColor) {
	$var($ButtonModel, model, $nc(menuItem)->getModel());
	$var($Color, oldColor, $nc(g)->getColor());
	int32_t menuWidth = menuItem->getWidth();
	int32_t menuHeight = menuItem->getHeight();
	if (menuItem->isOpaque()) {
		bool var$0 = $nc(model)->isArmed();
		if (var$0 || ($instanceOf($JMenu, menuItem) && $nc(model)->isSelected())) {
			g->setColor(bgColor);
			g->fillRect(0, 0, menuWidth, menuHeight);
		} else {
			g->setColor($(menuItem->getBackground()));
			g->fillRect(0, 0, menuWidth, menuHeight);
		}
		g->setColor(oldColor);
	} else {
		bool var$2 = model->isArmed();
		if (var$2 || ($instanceOf($JMenu, menuItem) && model->isSelected())) {
			g->setColor(bgColor);
			g->fillRect(0, 0, menuWidth, menuHeight);
			g->setColor(oldColor);
		}
	}
}

void BasicMenuItemUI::paintText($Graphics* g, $JMenuItem* menuItem, $Rectangle* textRect, $String* text) {
	$var($ButtonModel, model, $nc(menuItem)->getModel());
	$var($FontMetrics, fm, $SwingUtilities2::getFontMetrics(static_cast<$JComponent*>(menuItem), g));
	int32_t mnemIndex = menuItem->getDisplayedMnemonicIndex();
	if (!$nc(model)->isEnabled()) {
		if ($instanceOf($Color, $($UIManager::get("MenuItem.disabledForeground"_s)))) {
			$nc(g)->setColor($($UIManager::getColor("MenuItem.disabledForeground"_s)));
			$SwingUtilities2::drawStringUnderlineCharAt(menuItem, g, text, mnemIndex, $nc(textRect)->x, textRect->y + $nc(fm)->getAscent());
		} else {
			$nc(g)->setColor($($nc($(menuItem->getBackground()))->brighter()));
			$SwingUtilities2::drawStringUnderlineCharAt(menuItem, g, text, mnemIndex, $nc(textRect)->x, textRect->y + $nc(fm)->getAscent());
			g->setColor($($nc($(menuItem->getBackground()))->darker()));
			$SwingUtilities2::drawStringUnderlineCharAt(menuItem, g, text, mnemIndex, $nc(textRect)->x - 1, textRect->y + $nc(fm)->getAscent() - 1);
		}
	} else {
		bool var$0 = model->isArmed();
		if (var$0 || ($instanceOf($JMenu, menuItem) && model->isSelected())) {
			$nc(g)->setColor(this->selectionForeground);
		}
		$SwingUtilities2::drawStringUnderlineCharAt(menuItem, g, text, mnemIndex, $nc(textRect)->x, textRect->y + $nc(fm)->getAscent());
	}
}

$MenuElementArray* BasicMenuItemUI::getPath() {
	$var($MenuSelectionManager, m, $MenuSelectionManager::defaultManager());
	$var($MenuElementArray, oldPath, $nc(m)->getSelectedPath());
	$var($MenuElementArray, newPath, nullptr);
	int32_t i = $nc(oldPath)->length;
	if (i == 0) {
		return $new($MenuElementArray, 0);
	}
	$var($Component, parent, $nc(this->menuItem)->getParent());
	if ($nc(oldPath->get(i - 1))->getComponent() == parent) {
		$assign(newPath, $new($MenuElementArray, i + 1));
		$System::arraycopy(oldPath, 0, newPath, 0, i);
		newPath->set(i, this->menuItem);
	} else {
		int32_t j = 0;
		for (j = oldPath->length - 1; j >= 0; --j) {
			if ($nc(oldPath->get(j))->getComponent() == parent) {
				break;
			}
		}
		$assign(newPath, $new($MenuElementArray, j + 2));
		$System::arraycopy(oldPath, 0, newPath, 0, j + 1);
		newPath->set(j + 1, this->menuItem);
	}
	return newPath;
}

void BasicMenuItemUI::printMenuElementArray($MenuElementArray* path, bool dumpStack) {
	$init($System);
	$nc($System::out)->println("Path is("_s);
	int32_t i = 0;
	int32_t j = 0;
	for (i = 0, j = $nc(path)->length; i < j; ++i) {
		for (int32_t k = 0; k <= i; ++k) {
			$nc($System::out)->print("  "_s);
		}
		$var($MenuElement, me, path->get(i));
		if ($instanceOf($JMenuItem, me)) {
			$nc($System::out)->println($$str({$($nc(($cast($JMenuItem, me)))->getText()), ", "_s}));
		} else if (me == nullptr) {
			$nc($System::out)->println("NULL , "_s);
		} else {
			$nc($System::out)->println($$str({""_s, me, ", "_s}));
		}
	}
	$nc($System::out)->println(")"_s);
	if (dumpStack == true) {
		$Thread::dumpStack();
	}
}

bool BasicMenuItemUI::doNotCloseOnMouseClick() {
	if ($instanceOf($JCheckBoxMenuItem, this->menuItem)) {
		$var($String, property, "CheckBoxMenuItem.doNotCloseOnMouseClick"_s);
		return $SwingUtilities2::getBoolean(this->menuItem, property);
	} else if ($instanceOf($JRadioButtonMenuItem, this->menuItem)) {
		$var($String, property, "RadioButtonMenuItem.doNotCloseOnMouseClick"_s);
		return $SwingUtilities2::getBoolean(this->menuItem, property);
	}
	return false;
}

void BasicMenuItemUI::doClick($MenuSelectionManager* msm$renamed) {
	$var($MenuSelectionManager, msm, msm$renamed);
	if (!isInternalFrameSystemMenu()) {
		$BasicLookAndFeel::playSound(this->menuItem, $$str({$(getPropertyPrefix()), ".commandSound"_s}));
	}
	if (!doNotCloseOnMouseClick()) {
		if (msm == nullptr) {
			$assign(msm, $MenuSelectionManager::defaultManager());
		}
		$nc(msm)->clearSelectedPath();
	}
	$nc(this->menuItem)->doClick(0);
}

bool BasicMenuItemUI::isInternalFrameSystemMenu() {
	$var($String, actionCommand, $nc(this->menuItem)->getActionCommand());
	if ((actionCommand == "Close"_s) || (actionCommand == "Minimize"_s) || (actionCommand == "Restore"_s) || (actionCommand == "Maximize"_s)) {
		return true;
	} else {
		return false;
	}
}

BasicMenuItemUI::BasicMenuItemUI() {
}

$Class* BasicMenuItemUI::load$($String* name, bool initialize) {
	$loadClass(BasicMenuItemUI, name, initialize, &_BasicMenuItemUI_ClassInfo_, allocate$BasicMenuItemUI);
	return class$;
}

$Class* BasicMenuItemUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax