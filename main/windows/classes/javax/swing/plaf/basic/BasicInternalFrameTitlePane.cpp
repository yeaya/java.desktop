#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/ActionListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/InternalFrameEvent.h>
#include <javax/swing/plaf/ActionMapUIResource.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$CloseAction.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$Handler.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$IconifyAction.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$MaximizeAction.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$MoveAction.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$NoFocusButton.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$RestoreAction.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$ShowSystemMenuAction.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$SizeAction.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$SystemMenuBar.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef CLOSE_CMD
#undef ICONIFY_CMD
#undef INTERNAL_FRAME_CLOSING
#undef KEY_TEXT_ANTIALIASING
#undef KEY_TEXT_LCD_CONTRAST
#undef MAXIMIZE_CMD
#undef MOVE_CMD
#undef RESTORE_CMD
#undef SIZE_CMD

using $AWTEvent = ::java::awt::AWTEvent;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $EventQueue = ::java::awt::EventQueue;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $RenderingHints$Key = ::java::awt::RenderingHints$Key;
using $Toolkit = ::java::awt::Toolkit;
using $ActionListener = ::java::awt::event::ActionListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $SecurityException = ::java::lang::SecurityException;
using $AbstractAction = ::javax::swing::AbstractAction;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JSeparator = ::javax::swing::JSeparator;
using $UIManager = ::javax::swing::UIManager;
using $InternalFrameEvent = ::javax::swing::event::InternalFrameEvent;
using $ActionMapUIResource = ::javax::swing::plaf::ActionMapUIResource;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $BasicInternalFrameTitlePane$CloseAction = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$CloseAction;
using $BasicInternalFrameTitlePane$Handler = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$Handler;
using $BasicInternalFrameTitlePane$IconifyAction = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$IconifyAction;
using $BasicInternalFrameTitlePane$MaximizeAction = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$MaximizeAction;
using $BasicInternalFrameTitlePane$MoveAction = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$MoveAction;
using $BasicInternalFrameTitlePane$NoFocusButton = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$NoFocusButton;
using $BasicInternalFrameTitlePane$RestoreAction = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$RestoreAction;
using $BasicInternalFrameTitlePane$ShowSystemMenuAction = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$ShowSystemMenuAction;
using $BasicInternalFrameTitlePane$SizeAction = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$SizeAction;
using $BasicInternalFrameTitlePane$SystemMenuBar = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$SystemMenuBar;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicInternalFrameTitlePane_FieldInfo_[] = {
	{"menuBar", "Ljavax/swing/JMenuBar;", nullptr, $PROTECTED, $field(BasicInternalFrameTitlePane, menuBar)},
	{"iconButton", "Ljavax/swing/JButton;", nullptr, $PROTECTED, $field(BasicInternalFrameTitlePane, iconButton)},
	{"maxButton", "Ljavax/swing/JButton;", nullptr, $PROTECTED, $field(BasicInternalFrameTitlePane, maxButton)},
	{"closeButton", "Ljavax/swing/JButton;", nullptr, $PROTECTED, $field(BasicInternalFrameTitlePane, closeButton)},
	{"windowMenu", "Ljavax/swing/JMenu;", nullptr, $PROTECTED, $field(BasicInternalFrameTitlePane, windowMenu)},
	{"frame", "Ljavax/swing/JInternalFrame;", nullptr, $PROTECTED, $field(BasicInternalFrameTitlePane, frame)},
	{"selectedTitleColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicInternalFrameTitlePane, selectedTitleColor)},
	{"selectedTextColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicInternalFrameTitlePane, selectedTextColor)},
	{"notSelectedTitleColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicInternalFrameTitlePane, notSelectedTitleColor)},
	{"notSelectedTextColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicInternalFrameTitlePane, notSelectedTextColor)},
	{"maxIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(BasicInternalFrameTitlePane, maxIcon)},
	{"minIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(BasicInternalFrameTitlePane, minIcon)},
	{"iconIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(BasicInternalFrameTitlePane, iconIcon)},
	{"closeIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(BasicInternalFrameTitlePane, closeIcon)},
	{"propertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $field(BasicInternalFrameTitlePane, propertyChangeListener)},
	{"closeAction", "Ljavax/swing/Action;", nullptr, $PROTECTED, $field(BasicInternalFrameTitlePane, closeAction)},
	{"maximizeAction", "Ljavax/swing/Action;", nullptr, $PROTECTED, $field(BasicInternalFrameTitlePane, maximizeAction)},
	{"iconifyAction", "Ljavax/swing/Action;", nullptr, $PROTECTED, $field(BasicInternalFrameTitlePane, iconifyAction)},
	{"restoreAction", "Ljavax/swing/Action;", nullptr, $PROTECTED, $field(BasicInternalFrameTitlePane, restoreAction)},
	{"moveAction", "Ljavax/swing/Action;", nullptr, $PROTECTED, $field(BasicInternalFrameTitlePane, moveAction)},
	{"sizeAction", "Ljavax/swing/Action;", nullptr, $PROTECTED, $field(BasicInternalFrameTitlePane, sizeAction)},
	{"CLOSE_CMD", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(BasicInternalFrameTitlePane, CLOSE_CMD)},
	{"ICONIFY_CMD", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(BasicInternalFrameTitlePane, ICONIFY_CMD)},
	{"RESTORE_CMD", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(BasicInternalFrameTitlePane, RESTORE_CMD)},
	{"MAXIMIZE_CMD", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(BasicInternalFrameTitlePane, MAXIMIZE_CMD)},
	{"MOVE_CMD", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(BasicInternalFrameTitlePane, MOVE_CMD)},
	{"SIZE_CMD", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(BasicInternalFrameTitlePane, SIZE_CMD)},
	{"closeButtonToolTip", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BasicInternalFrameTitlePane, closeButtonToolTip)},
	{"iconButtonToolTip", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BasicInternalFrameTitlePane, iconButtonToolTip)},
	{"restoreButtonToolTip", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BasicInternalFrameTitlePane, restoreButtonToolTip)},
	{"maxButtonToolTip", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BasicInternalFrameTitlePane, maxButtonToolTip)},
	{"handler", "Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane$Handler;", nullptr, $PRIVATE, $field(BasicInternalFrameTitlePane, handler)},
	{}
};

$MethodInfo _BasicInternalFrameTitlePane_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicInternalFrameTitlePane::*)($JInternalFrame*)>(&BasicInternalFrameTitlePane::init$))},
	{"addSubComponents", "()V", nullptr, $PROTECTED},
	{"addSystemMenuItems", "(Ljavax/swing/JMenu;)V", nullptr, $PROTECTED},
	{"assembleSystemMenu", "()V", nullptr, $PROTECTED},
	{"createActionMap", "()Ljavax/swing/ActionMap;", nullptr, 0},
	{"createActions", "()V", nullptr, $PROTECTED},
	{"createButtons", "()V", nullptr, $PROTECTED},
	{"createLayout", "()Ljava/awt/LayoutManager;", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createSystemMenu", "()Ljavax/swing/JMenu;", nullptr, $PROTECTED},
	{"createSystemMenuBar", "()Ljavax/swing/JMenuBar;", nullptr, $PROTECTED},
	{"enableActions", "()V", nullptr, $PROTECTED},
	{"getButtonMnemonic", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*)>(&BasicInternalFrameTitlePane::getButtonMnemonic))},
	{"getHandler", "()Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane$Handler;", nullptr, $PRIVATE, $method(static_cast<$BasicInternalFrameTitlePane$Handler*(BasicInternalFrameTitlePane::*)()>(&BasicInternalFrameTitlePane::getHandler))},
	{"getTitle", "(Ljava/lang/String;Ljava/awt/FontMetrics;I)Ljava/lang/String;", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installTitlePane", "()V", nullptr, $PROTECTED},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintTitleBackground", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"postClosingEvent", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PROTECTED},
	{"setButtonIcons", "()V", nullptr, $PROTECTED},
	{"showSystemMenu", "()V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"updateProperties", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicInternalFrameTitlePane::*)()>(&BasicInternalFrameTitlePane::updateProperties))},
	{}
};

$InnerClassInfo _BasicInternalFrameTitlePane_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$NoFocusButton", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "NoFocusButton", $PRIVATE},
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$SystemMenuBar", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "SystemMenuBar", $PUBLIC},
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$SizeAction", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "SizeAction", $PUBLIC},
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$ShowSystemMenuAction", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "ShowSystemMenuAction", $PRIVATE},
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$MoveAction", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "MoveAction", $PUBLIC},
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$RestoreAction", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "RestoreAction", $PUBLIC},
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$IconifyAction", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "IconifyAction", $PUBLIC},
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$MaximizeAction", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "MaximizeAction", $PUBLIC},
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$CloseAction", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "CloseAction", $PUBLIC},
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$TitlePaneLayout", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "TitlePaneLayout", $PUBLIC},
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$PropertyChangeHandler", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "PropertyChangeHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$Handler", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "Handler", $PRIVATE},
	{}
};

$ClassInfo _BasicInternalFrameTitlePane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane",
	"javax.swing.JComponent",
	nullptr,
	_BasicInternalFrameTitlePane_FieldInfo_,
	_BasicInternalFrameTitlePane_MethodInfo_,
	nullptr,
	nullptr,
	_BasicInternalFrameTitlePane_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane$NoFocusButton,javax.swing.plaf.basic.BasicInternalFrameTitlePane$SystemMenuBar,javax.swing.plaf.basic.BasicInternalFrameTitlePane$SizeAction,javax.swing.plaf.basic.BasicInternalFrameTitlePane$ShowSystemMenuAction,javax.swing.plaf.basic.BasicInternalFrameTitlePane$MoveAction,javax.swing.plaf.basic.BasicInternalFrameTitlePane$RestoreAction,javax.swing.plaf.basic.BasicInternalFrameTitlePane$IconifyAction,javax.swing.plaf.basic.BasicInternalFrameTitlePane$MaximizeAction,javax.swing.plaf.basic.BasicInternalFrameTitlePane$CloseAction,javax.swing.plaf.basic.BasicInternalFrameTitlePane$TitlePaneLayout,javax.swing.plaf.basic.BasicInternalFrameTitlePane$PropertyChangeHandler,javax.swing.plaf.basic.BasicInternalFrameTitlePane$Handler"
};

$Object* allocate$BasicInternalFrameTitlePane($Class* clazz) {
	return $of($alloc(BasicInternalFrameTitlePane));
}


$String* BasicInternalFrameTitlePane::CLOSE_CMD = nullptr;

$String* BasicInternalFrameTitlePane::ICONIFY_CMD = nullptr;

$String* BasicInternalFrameTitlePane::RESTORE_CMD = nullptr;

$String* BasicInternalFrameTitlePane::MAXIMIZE_CMD = nullptr;

$String* BasicInternalFrameTitlePane::MOVE_CMD = nullptr;

$String* BasicInternalFrameTitlePane::SIZE_CMD = nullptr;

void BasicInternalFrameTitlePane::init$($JInternalFrame* f) {
	$JComponent::init$();
	$set(this, frame, f);
	installTitlePane();
}

void BasicInternalFrameTitlePane::installTitlePane() {
	installDefaults();
	installListeners();
	createActions();
	enableActions();
	createActionMap();
	setLayout($(createLayout()));
	assembleSystemMenu();
	createButtons();
	addSubComponents();
	updateProperties();
}

void BasicInternalFrameTitlePane::updateProperties() {
	$useLocalCurrentObjectStackCache();
	$init($RenderingHints);
	putClientProperty($RenderingHints::KEY_TEXT_ANTIALIASING, $($nc(this->frame)->getClientProperty($RenderingHints::KEY_TEXT_ANTIALIASING)));
	putClientProperty($RenderingHints::KEY_TEXT_LCD_CONTRAST, $($nc(this->frame)->getClientProperty($RenderingHints::KEY_TEXT_LCD_CONTRAST)));
}

void BasicInternalFrameTitlePane::addSubComponents() {
	add(static_cast<$Component*>(this->menuBar));
	add(static_cast<$Component*>(this->iconButton));
	add(static_cast<$Component*>(this->maxButton));
	add(static_cast<$Component*>(this->closeButton));
}

void BasicInternalFrameTitlePane::createActions() {
	$set(this, maximizeAction, $new($BasicInternalFrameTitlePane$MaximizeAction, this));
	$set(this, iconifyAction, $new($BasicInternalFrameTitlePane$IconifyAction, this));
	$set(this, closeAction, $new($BasicInternalFrameTitlePane$CloseAction, this));
	$set(this, restoreAction, $new($BasicInternalFrameTitlePane$RestoreAction, this));
	$set(this, moveAction, $new($BasicInternalFrameTitlePane$MoveAction, this));
	$set(this, sizeAction, $new($BasicInternalFrameTitlePane$SizeAction, this));
}

$ActionMap* BasicInternalFrameTitlePane::createActionMap() {
	$useLocalCurrentObjectStackCache();
	$var($ActionMap, map, $new($ActionMapUIResource));
	map->put("showSystemMenu"_s, $$new($BasicInternalFrameTitlePane$ShowSystemMenuAction, this, true));
	map->put("hideSystemMenu"_s, $$new($BasicInternalFrameTitlePane$ShowSystemMenuAction, this, false));
	return map;
}

void BasicInternalFrameTitlePane::installListeners() {
	if (this->propertyChangeListener == nullptr) {
		$set(this, propertyChangeListener, createPropertyChangeListener());
	}
	$nc(this->frame)->addPropertyChangeListener(this->propertyChangeListener);
}

void BasicInternalFrameTitlePane::uninstallListeners() {
	$nc(this->frame)->removePropertyChangeListener(this->propertyChangeListener);
	$set(this, handler, nullptr);
}

void BasicInternalFrameTitlePane::installDefaults() {
	$set(this, maxIcon, $UIManager::getIcon("InternalFrame.maximizeIcon"_s));
	$set(this, minIcon, $UIManager::getIcon("InternalFrame.minimizeIcon"_s));
	$set(this, iconIcon, $UIManager::getIcon("InternalFrame.iconifyIcon"_s));
	$set(this, closeIcon, $UIManager::getIcon("InternalFrame.closeIcon"_s));
	$set(this, selectedTitleColor, $UIManager::getColor("InternalFrame.activeTitleBackground"_s));
	$set(this, selectedTextColor, $UIManager::getColor("InternalFrame.activeTitleForeground"_s));
	$set(this, notSelectedTitleColor, $UIManager::getColor("InternalFrame.inactiveTitleBackground"_s));
	$set(this, notSelectedTextColor, $UIManager::getColor("InternalFrame.inactiveTitleForeground"_s));
	setFont($($UIManager::getFont("InternalFrame.titleFont"_s)));
	$set(this, closeButtonToolTip, $UIManager::getString("InternalFrame.closeButtonToolTip"_s));
	$set(this, iconButtonToolTip, $UIManager::getString("InternalFrame.iconButtonToolTip"_s));
	$set(this, restoreButtonToolTip, $UIManager::getString("InternalFrame.restoreButtonToolTip"_s));
	$set(this, maxButtonToolTip, $UIManager::getString("InternalFrame.maxButtonToolTip"_s));
}

void BasicInternalFrameTitlePane::uninstallDefaults() {
}

void BasicInternalFrameTitlePane::createButtons() {
	$set(this, iconButton, $new($BasicInternalFrameTitlePane$NoFocusButton, this, "InternalFrameTitlePane.iconifyButtonAccessibleName"_s, "InternalFrameTitlePane.iconifyButtonOpacity"_s));
	$nc(this->iconButton)->addActionListener(this->iconifyAction);
	if (this->iconButtonToolTip != nullptr && $nc(this->iconButtonToolTip)->length() != 0) {
		$nc(this->iconButton)->setToolTipText(this->iconButtonToolTip);
	}
	$set(this, maxButton, $new($BasicInternalFrameTitlePane$NoFocusButton, this, "InternalFrameTitlePane.maximizeButtonAccessibleName"_s, "InternalFrameTitlePane.maximizeButtonOpacity"_s));
	$nc(this->maxButton)->addActionListener(this->maximizeAction);
	$set(this, closeButton, $new($BasicInternalFrameTitlePane$NoFocusButton, this, "InternalFrameTitlePane.closeButtonAccessibleName"_s, "InternalFrameTitlePane.closeButtonOpacity"_s));
	$nc(this->closeButton)->addActionListener(this->closeAction);
	if (this->closeButtonToolTip != nullptr && $nc(this->closeButtonToolTip)->length() != 0) {
		$nc(this->closeButton)->setToolTipText(this->closeButtonToolTip);
	}
	setButtonIcons();
}

void BasicInternalFrameTitlePane::setButtonIcons() {
	if ($nc(this->frame)->isIcon()) {
		if (this->minIcon != nullptr) {
			$nc(this->iconButton)->setIcon(this->minIcon);
		}
		if (this->restoreButtonToolTip != nullptr && $nc(this->restoreButtonToolTip)->length() != 0) {
			$nc(this->iconButton)->setToolTipText(this->restoreButtonToolTip);
		}
		if (this->maxIcon != nullptr) {
			$nc(this->maxButton)->setIcon(this->maxIcon);
		}
		if (this->maxButtonToolTip != nullptr && $nc(this->maxButtonToolTip)->length() != 0) {
			$nc(this->maxButton)->setToolTipText(this->maxButtonToolTip);
		}
	} else if ($nc(this->frame)->isMaximum()) {
		if (this->iconIcon != nullptr) {
			$nc(this->iconButton)->setIcon(this->iconIcon);
		}
		if (this->iconButtonToolTip != nullptr && $nc(this->iconButtonToolTip)->length() != 0) {
			$nc(this->iconButton)->setToolTipText(this->iconButtonToolTip);
		}
		if (this->minIcon != nullptr) {
			$nc(this->maxButton)->setIcon(this->minIcon);
		}
		if (this->restoreButtonToolTip != nullptr && $nc(this->restoreButtonToolTip)->length() != 0) {
			$nc(this->maxButton)->setToolTipText(this->restoreButtonToolTip);
		}
	} else {
		if (this->iconIcon != nullptr) {
			$nc(this->iconButton)->setIcon(this->iconIcon);
		}
		if (this->iconButtonToolTip != nullptr && $nc(this->iconButtonToolTip)->length() != 0) {
			$nc(this->iconButton)->setToolTipText(this->iconButtonToolTip);
		}
		if (this->maxIcon != nullptr) {
			$nc(this->maxButton)->setIcon(this->maxIcon);
		}
		if (this->maxButtonToolTip != nullptr && $nc(this->maxButtonToolTip)->length() != 0) {
			$nc(this->maxButton)->setToolTipText(this->maxButtonToolTip);
		}
	}
	if (this->closeIcon != nullptr) {
		$nc(this->closeButton)->setIcon(this->closeIcon);
	}
}

void BasicInternalFrameTitlePane::assembleSystemMenu() {
	$set(this, menuBar, createSystemMenuBar());
	$set(this, windowMenu, createSystemMenu());
	$nc(this->menuBar)->add(this->windowMenu);
	addSystemMenuItems(this->windowMenu);
	enableActions();
}

void BasicInternalFrameTitlePane::addSystemMenuItems($JMenu* systemMenu) {
	$useLocalCurrentObjectStackCache();
	$var($JMenuItem, mi, $nc(systemMenu)->add(this->restoreAction));
	$nc(mi)->setMnemonic(getButtonMnemonic("restore"_s));
	$assign(mi, systemMenu->add(this->moveAction));
	mi->setMnemonic(getButtonMnemonic("move"_s));
	$assign(mi, systemMenu->add(this->sizeAction));
	mi->setMnemonic(getButtonMnemonic("size"_s));
	$assign(mi, systemMenu->add(this->iconifyAction));
	mi->setMnemonic(getButtonMnemonic("minimize"_s));
	$assign(mi, systemMenu->add(this->maximizeAction));
	mi->setMnemonic(getButtonMnemonic("maximize"_s));
	systemMenu->add(static_cast<$Component*>($$new($JSeparator)));
	$assign(mi, systemMenu->add(this->closeAction));
	mi->setMnemonic(getButtonMnemonic("close"_s));
}

int32_t BasicInternalFrameTitlePane::getButtonMnemonic($String* button) {
	$init(BasicInternalFrameTitlePane);
	$useLocalCurrentObjectStackCache();
	try {
		return $Integer::parseInt($($UIManager::getString($$str({"InternalFrameTitlePane."_s, button, "Button.mnemonic"_s}))));
	} catch ($NumberFormatException&) {
		$var($NumberFormatException, e, $catch());
		return -1;
	}
	$shouldNotReachHere();
}

$JMenu* BasicInternalFrameTitlePane::createSystemMenu() {
	return $new($JMenu, "    "_s);
}

$JMenuBar* BasicInternalFrameTitlePane::createSystemMenuBar() {
	$set(this, menuBar, $new($BasicInternalFrameTitlePane$SystemMenuBar, this));
	$nc(this->menuBar)->setBorderPainted(false);
	return this->menuBar;
}

void BasicInternalFrameTitlePane::showSystemMenu() {
	$nc(this->windowMenu)->doClick();
}

void BasicInternalFrameTitlePane::paintComponent($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	paintTitleBackground(g);
	if ($nc(this->frame)->getTitle() != nullptr) {
		bool isSelected = $nc(this->frame)->isSelected();
		$var($Font, f, $nc(g)->getFont());
		g->setFont($(getFont()));
		if (isSelected) {
			g->setColor(this->selectedTextColor);
		} else {
			g->setColor(this->notSelectedTextColor);
		}
		$var($FontMetrics, fm, $SwingUtilities2::getFontMetrics(static_cast<$JComponent*>(this->frame), g));
		int32_t var$2 = getHeight();
		int32_t var$1 = var$2 + $nc(fm)->getAscent();
		int32_t var$0 = var$1 - fm->getLeading();
		int32_t baseline = (var$0 - fm->getDescent()) / 2;
		int32_t titleX = 0;
		$var($Rectangle, r, $new($Rectangle, 0, 0, 0, 0));
		if ($nc(this->frame)->isIconifiable()) {
			$assign(r, $nc(this->iconButton)->getBounds());
		} else if ($nc(this->frame)->isMaximizable()) {
			$assign(r, $nc(this->maxButton)->getBounds());
		} else if ($nc(this->frame)->isClosable()) {
			$assign(r, $nc(this->closeButton)->getBounds());
		}
		int32_t titleW = 0;
		$var($String, title, $nc(this->frame)->getTitle());
		if ($BasicGraphicsUtils::isLeftToRight(this->frame)) {
			if (r->x == 0) {
				int32_t var$3 = $nc(this->frame)->getWidth();
				r->x = var$3 - $nc($($nc(this->frame)->getInsets()))->right;
			}
			int32_t var$4 = $nc(this->menuBar)->getX();
			titleX = var$4 + $nc(this->menuBar)->getWidth() + 2;
			titleW = r->x - titleX - 3;
			$assign(title, getTitle($($nc(this->frame)->getTitle()), fm, titleW));
		} else {
			int32_t var$5 = $nc(this->menuBar)->getX() - 2;
			titleX = var$5 - $SwingUtilities2::stringWidth(this->frame, fm, title);
		}
		$SwingUtilities2::drawString(static_cast<$JComponent*>(this->frame), g, title, titleX, baseline);
		g->setFont(f);
	}
}

void BasicInternalFrameTitlePane::paintTitleBackground($Graphics* g) {
	bool isSelected = $nc(this->frame)->isSelected();
	if (isSelected) {
		$nc(g)->setColor(this->selectedTitleColor);
	} else {
		$nc(g)->setColor(this->notSelectedTitleColor);
	}
	int32_t var$0 = getWidth();
	$nc(g)->fillRect(0, 0, var$0, getHeight());
}

$String* BasicInternalFrameTitlePane::getTitle($String* text, $FontMetrics* fm, int32_t availTextWidth) {
	return $SwingUtilities2::clipStringIfNecessary(this->frame, fm, text, availTextWidth);
}

void BasicInternalFrameTitlePane::postClosingEvent($JInternalFrame* frame) {
	$useLocalCurrentObjectStackCache();
	$var($InternalFrameEvent, e, $new($InternalFrameEvent, frame, $InternalFrameEvent::INTERNAL_FRAME_CLOSING));
	try {
		$nc($($nc($($Toolkit::getDefaultToolkit()))->getSystemEventQueue()))->postEvent(e);
	} catch ($SecurityException&) {
		$var($SecurityException, se, $catch());
		$nc(frame)->dispatchEvent(e);
	}
}

void BasicInternalFrameTitlePane::enableActions() {
	bool var$0 = $nc(this->frame)->isMaximum();
	$nc(this->restoreAction)->setEnabled(var$0 || $nc(this->frame)->isIcon());
	bool var$3 = $nc(this->frame)->isMaximizable();
	bool var$2 = var$3 && !$nc(this->frame)->isMaximum();
	bool var$1 = (var$2 && !$nc(this->frame)->isIcon());
	if (!var$1) {
		bool var$4 = $nc(this->frame)->isMaximizable();
		var$1 = (var$4 && $nc(this->frame)->isIcon());
	}
	$nc(this->maximizeAction)->setEnabled(var$1);
	bool var$5 = $nc(this->frame)->isIconifiable();
	$nc(this->iconifyAction)->setEnabled(var$5 && !$nc(this->frame)->isIcon());
	$nc(this->closeAction)->setEnabled($nc(this->frame)->isClosable());
	$nc(this->sizeAction)->setEnabled(false);
	$nc(this->moveAction)->setEnabled(false);
}

$BasicInternalFrameTitlePane$Handler* BasicInternalFrameTitlePane::getHandler() {
	if (this->handler == nullptr) {
		$set(this, handler, $new($BasicInternalFrameTitlePane$Handler, this));
	}
	return this->handler;
}

$PropertyChangeListener* BasicInternalFrameTitlePane::createPropertyChangeListener() {
	return getHandler();
}

$LayoutManager* BasicInternalFrameTitlePane::createLayout() {
	return getHandler();
}

void clinit$BasicInternalFrameTitlePane($Class* class$) {
	$assignStatic(BasicInternalFrameTitlePane::CLOSE_CMD, $UIManager::getString("InternalFrameTitlePane.closeButtonText"_s));
	$assignStatic(BasicInternalFrameTitlePane::ICONIFY_CMD, $UIManager::getString("InternalFrameTitlePane.minimizeButtonText"_s));
	$assignStatic(BasicInternalFrameTitlePane::RESTORE_CMD, $UIManager::getString("InternalFrameTitlePane.restoreButtonText"_s));
	$assignStatic(BasicInternalFrameTitlePane::MAXIMIZE_CMD, $UIManager::getString("InternalFrameTitlePane.maximizeButtonText"_s));
	$assignStatic(BasicInternalFrameTitlePane::MOVE_CMD, $UIManager::getString("InternalFrameTitlePane.moveButtonText"_s));
	$assignStatic(BasicInternalFrameTitlePane::SIZE_CMD, $UIManager::getString("InternalFrameTitlePane.sizeButtonText"_s));
}

BasicInternalFrameTitlePane::BasicInternalFrameTitlePane() {
}

$Class* BasicInternalFrameTitlePane::load$($String* name, bool initialize) {
	$loadClass(BasicInternalFrameTitlePane, name, initialize, &_BasicInternalFrameTitlePane_ClassInfo_, clinit$BasicInternalFrameTitlePane, allocate$BasicInternalFrameTitlePane);
	return class$;
}

$Class* BasicInternalFrameTitlePane::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax