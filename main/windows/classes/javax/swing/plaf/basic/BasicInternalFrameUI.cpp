#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/IllegalComponentStateException.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/event/WindowFocusListener.h>
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
#include <javax/swing/Icon.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/InternalFrameListener.h>
#include <javax/swing/event/MouseInputAdapter.h>
#include <javax/swing/event/MouseInputListener.h>
#include <javax/swing/plaf/ActionMapUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/InternalFrameUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI$1.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI$BorderListener.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI$Handler.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/basic/LazyActionMap.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef DEFAULT_CURSOR
#undef MAX_VALUE
#undef TRUE
#undef WHEN_IN_FOCUSED_WINDOW

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $IllegalComponentStateException = ::java::awt::IllegalComponentStateException;
using $LayoutManager = ::java::awt::LayoutManager;
using $Rectangle = ::java::awt::Rectangle;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $WindowFocusListener = ::java::awt::event::WindowFocusListener;
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
using $Icon = ::javax::swing::Icon;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $KeyStroke = ::javax::swing::KeyStroke;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $InternalFrameListener = ::javax::swing::event::InternalFrameListener;
using $MouseInputAdapter = ::javax::swing::event::MouseInputAdapter;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $ActionMapUIResource = ::javax::swing::plaf::ActionMapUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $InternalFrameUI = ::javax::swing::plaf::InternalFrameUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;
using $BasicInternalFrameUI$1 = ::javax::swing::plaf::basic::BasicInternalFrameUI$1;
using $BasicInternalFrameUI$BorderListener = ::javax::swing::plaf::basic::BasicInternalFrameUI$BorderListener;
using $BasicInternalFrameUI$Handler = ::javax::swing::plaf::basic::BasicInternalFrameUI$Handler;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $LazyActionMap = ::javax::swing::plaf::basic::LazyActionMap;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$CompoundAttribute _BasicInternalFrameUI_FieldAnnotations_openMenuKey[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _BasicInternalFrameUI_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JInternalFrame;", nullptr, $PROTECTED, $field(BasicInternalFrameUI, frame)},
	{"handler", "Ljavax/swing/plaf/basic/BasicInternalFrameUI$Handler;", nullptr, $PRIVATE, $field(BasicInternalFrameUI, handler)},
	{"borderListener", "Ljavax/swing/event/MouseInputAdapter;", nullptr, $PROTECTED, $field(BasicInternalFrameUI, borderListener)},
	{"propertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $field(BasicInternalFrameUI, propertyChangeListener)},
	{"internalFrameLayout", "Ljava/awt/LayoutManager;", nullptr, $PROTECTED, $field(BasicInternalFrameUI, internalFrameLayout)},
	{"componentListener", "Ljava/awt/event/ComponentListener;", nullptr, $PROTECTED, $field(BasicInternalFrameUI, componentListener)},
	{"glassPaneDispatcher", "Ljavax/swing/event/MouseInputListener;", nullptr, $PROTECTED, $field(BasicInternalFrameUI, glassPaneDispatcher)},
	{"internalFrameListener", "Ljavax/swing/event/InternalFrameListener;", nullptr, $PRIVATE, $field(BasicInternalFrameUI, internalFrameListener)},
	{"northPane", "Ljavax/swing/JComponent;", nullptr, $PROTECTED, $field(BasicInternalFrameUI, northPane)},
	{"southPane", "Ljavax/swing/JComponent;", nullptr, $PROTECTED, $field(BasicInternalFrameUI, southPane)},
	{"westPane", "Ljavax/swing/JComponent;", nullptr, $PROTECTED, $field(BasicInternalFrameUI, westPane)},
	{"eastPane", "Ljavax/swing/JComponent;", nullptr, $PROTECTED, $field(BasicInternalFrameUI, eastPane)},
	{"titlePane", "Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;", nullptr, $PROTECTED, $field(BasicInternalFrameUI, titlePane)},
	{"sharedDesktopManager", "Ljavax/swing/DesktopManager;", nullptr, $PRIVATE | $STATIC, $staticField(BasicInternalFrameUI, sharedDesktopManager)},
	{"componentListenerAdded", "Z", nullptr, $PRIVATE, $field(BasicInternalFrameUI, componentListenerAdded)},
	{"parentBounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(BasicInternalFrameUI, parentBounds)},
	{"dragging", "Z", nullptr, $PRIVATE, $field(BasicInternalFrameUI, dragging)},
	{"resizing", "Z", nullptr, $PRIVATE, $field(BasicInternalFrameUI, resizing)},
	{"openMenuKey", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicInternalFrameUI, openMenuKey), _BasicInternalFrameUI_FieldAnnotations_openMenuKey},
	{"keyBindingRegistered", "Z", nullptr, $PRIVATE, $field(BasicInternalFrameUI, keyBindingRegistered)},
	{"keyBindingActive", "Z", nullptr, $PRIVATE, $field(BasicInternalFrameUI, keyBindingActive)},
	{}
};

$MethodInfo _BasicInternalFrameUI_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicInternalFrameUI::*)($JInternalFrame*)>(&BasicInternalFrameUI::init$))},
	{"activateFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PROTECTED},
	{"cancelResize", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicInternalFrameUI::*)()>(&BasicInternalFrameUI::cancelResize))},
	{"closeFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PROTECTED},
	{"createBorderListener", "(Ljavax/swing/JInternalFrame;)Ljavax/swing/event/MouseInputAdapter;", nullptr, $PROTECTED},
	{"createComponentListener", "()Ljava/awt/event/ComponentListener;", nullptr, $PROTECTED},
	{"createDesktopManager", "()Ljavax/swing/DesktopManager;", nullptr, $PROTECTED},
	{"createEastPane", "(Ljavax/swing/JInternalFrame;)Ljavax/swing/JComponent;", nullptr, $PROTECTED},
	{"createGlassPaneDispatcher", "()Ljavax/swing/event/MouseInputListener;", nullptr, $PROTECTED},
	{"createInputMap", "(I)Ljavax/swing/InputMap;", nullptr, 0},
	{"createInternalFrameListener", "()V", nullptr, $PROTECTED},
	{"createLayoutManager", "()Ljava/awt/LayoutManager;", nullptr, $PROTECTED},
	{"createNorthPane", "(Ljavax/swing/JInternalFrame;)Ljavax/swing/JComponent;", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createSouthPane", "(Ljavax/swing/JInternalFrame;)Ljavax/swing/JComponent;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicInternalFrameUI::createUI))},
	{"createWestPane", "(Ljavax/swing/JInternalFrame;)Ljavax/swing/JComponent;", nullptr, $PROTECTED},
	{"deactivateFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PROTECTED},
	{"deiconifyFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PROTECTED},
	{"deinstallMouseHandlers", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"getDesktopManager", "()Ljavax/swing/DesktopManager;", nullptr, $PROTECTED},
	{"getEastPane", "()Ljavax/swing/JComponent;", nullptr, $PUBLIC},
	{"getHandler", "()Ljavax/swing/plaf/basic/BasicInternalFrameUI$Handler;", nullptr, $PRIVATE, $method(static_cast<$BasicInternalFrameUI$Handler*(BasicInternalFrameUI::*)()>(&BasicInternalFrameUI::getHandler))},
	{"getInputMap", "(I)Ljavax/swing/InputMap;", nullptr, 0},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getNorthPane", "()Ljavax/swing/JComponent;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getSouthPane", "()Ljavax/swing/JComponent;", nullptr, $PUBLIC},
	{"getWestPane", "()Ljavax/swing/JComponent;", nullptr, $PUBLIC},
	{"getWindowFocusListener", "()Ljava/awt/event/WindowFocusListener;", nullptr, $PRIVATE, $method(static_cast<$WindowFocusListener*(BasicInternalFrameUI::*)()>(&BasicInternalFrameUI::getWindowFocusListener))},
	{"iconifyFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PROTECTED},
	{"installComponents", "()V", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installMouseHandlers", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"isKeyBindingActive", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(BasicInternalFrameUI::*)()>(&BasicInternalFrameUI::isKeyBindingActive))},
	{"isKeyBindingRegistered", "()Z", nullptr, $PROTECTED | $FINAL, $method(static_cast<bool(BasicInternalFrameUI::*)()>(&BasicInternalFrameUI::isKeyBindingRegistered))},
	{"loadActionMap", "(Ljavax/swing/plaf/basic/LazyActionMap;)V", nullptr, $STATIC, $method(static_cast<void(*)($LazyActionMap*)>(&BasicInternalFrameUI::loadActionMap))},
	{"maximizeFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PROTECTED},
	{"minimizeFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PROTECTED},
	{"replacePane", "(Ljavax/swing/JComponent;Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"setEastPane", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"setKeyBindingActive", "(Z)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(BasicInternalFrameUI::*)(bool)>(&BasicInternalFrameUI::setKeyBindingActive))},
	{"setKeyBindingRegistered", "(Z)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(BasicInternalFrameUI::*)(bool)>(&BasicInternalFrameUI::setKeyBindingRegistered))},
	{"setNorthPane", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"setSouthPane", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"setWestPane", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"setupMenuCloseKey", "()V", nullptr, $PROTECTED},
	{"setupMenuOpenKey", "()V", nullptr, $PROTECTED},
	{"uninstallComponents", "()V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateFrameCursor", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _BasicInternalFrameUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicInternalFrameUI$Handler", "javax.swing.plaf.basic.BasicInternalFrameUI", "Handler", $PRIVATE},
	{"javax.swing.plaf.basic.BasicInternalFrameUI$BasicInternalFrameListener", "javax.swing.plaf.basic.BasicInternalFrameUI", "BasicInternalFrameListener", $PROTECTED},
	{"javax.swing.plaf.basic.BasicInternalFrameUI$GlassPaneDispatcher", "javax.swing.plaf.basic.BasicInternalFrameUI", "GlassPaneDispatcher", $PROTECTED},
	{"javax.swing.plaf.basic.BasicInternalFrameUI$ComponentHandler", "javax.swing.plaf.basic.BasicInternalFrameUI", "ComponentHandler", $PROTECTED},
	{"javax.swing.plaf.basic.BasicInternalFrameUI$BorderListener", "javax.swing.plaf.basic.BasicInternalFrameUI", "BorderListener", $PROTECTED},
	{"javax.swing.plaf.basic.BasicInternalFrameUI$InternalFrameLayout", "javax.swing.plaf.basic.BasicInternalFrameUI", "InternalFrameLayout", $PUBLIC},
	{"javax.swing.plaf.basic.BasicInternalFrameUI$InternalFramePropertyChangeListener", "javax.swing.plaf.basic.BasicInternalFrameUI", "InternalFramePropertyChangeListener", $PUBLIC},
	{"javax.swing.plaf.basic.BasicInternalFrameUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicInternalFrameUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicInternalFrameUI",
	"javax.swing.plaf.InternalFrameUI",
	nullptr,
	_BasicInternalFrameUI_FieldInfo_,
	_BasicInternalFrameUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicInternalFrameUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicInternalFrameUI$Handler,javax.swing.plaf.basic.BasicInternalFrameUI$BasicInternalFrameListener,javax.swing.plaf.basic.BasicInternalFrameUI$GlassPaneDispatcher,javax.swing.plaf.basic.BasicInternalFrameUI$ComponentHandler,javax.swing.plaf.basic.BasicInternalFrameUI$BorderListener,javax.swing.plaf.basic.BasicInternalFrameUI$InternalFrameLayout,javax.swing.plaf.basic.BasicInternalFrameUI$InternalFramePropertyChangeListener,javax.swing.plaf.basic.BasicInternalFrameUI$1"
};

$Object* allocate$BasicInternalFrameUI($Class* clazz) {
	return $of($alloc(BasicInternalFrameUI));
}

$DesktopManager* BasicInternalFrameUI::sharedDesktopManager = nullptr;

$ComponentUI* BasicInternalFrameUI::createUI($JComponent* b) {
	$init(BasicInternalFrameUI);
	return $new(BasicInternalFrameUI, $cast($JInternalFrame, b));
}

void BasicInternalFrameUI::init$($JInternalFrame* b) {
	$InternalFrameUI::init$();
	this->componentListenerAdded = false;
	this->dragging = false;
	this->resizing = false;
	this->keyBindingRegistered = false;
	this->keyBindingActive = false;
	$var($LookAndFeel, laf, $UIManager::getLookAndFeel());
	if ($instanceOf($BasicLookAndFeel, laf)) {
		$nc(($cast($BasicLookAndFeel, laf)))->installAWTEventListener();
	}
}

void BasicInternalFrameUI::installUI($JComponent* c) {
	$set(this, frame, $cast($JInternalFrame, c));
	installDefaults();
	installListeners();
	installComponents();
	installKeyboardActions();
	$init($Boolean);
	$LookAndFeel::installProperty(this->frame, "opaque"_s, $Boolean::TRUE);
}

void BasicInternalFrameUI::uninstallUI($JComponent* c) {
	if (!$equals(c, this->frame)) {
		$throwNew($IllegalComponentStateException, $$str({this, " was asked to deinstall() "_s, c, " when it only knows about "_s, this->frame, "."_s}));
	}
	uninstallKeyboardActions();
	uninstallComponents();
	uninstallListeners();
	uninstallDefaults();
	updateFrameCursor();
	$set(this, handler, nullptr);
	$set(this, frame, nullptr);
}

void BasicInternalFrameUI::installDefaults() {
	$useLocalCurrentObjectStackCache();
	$var($Icon, frameIcon, $nc(this->frame)->getFrameIcon());
	if (frameIcon == nullptr || $instanceOf($UIResource, frameIcon)) {
		$nc(this->frame)->setFrameIcon($($UIManager::getIcon("InternalFrame.icon"_s)));
	}
	$var($Container, contentPane, $nc(this->frame)->getContentPane());
	if (contentPane != nullptr) {
		$var($Color, bg, contentPane->getBackground());
		if ($instanceOf($UIResource, bg)) {
			contentPane->setBackground(nullptr);
		}
	}
	$nc(this->frame)->setLayout($assignField(this, internalFrameLayout, createLayoutManager()));
	$nc(this->frame)->setBackground($($nc($($UIManager::getLookAndFeelDefaults()))->getColor("control"_s)));
	$LookAndFeel::installBorder(this->frame, "InternalFrame.border"_s);
}

void BasicInternalFrameUI::installKeyboardActions() {
	createInternalFrameListener();
	if (this->internalFrameListener != nullptr) {
		$nc(this->frame)->addInternalFrameListener(this->internalFrameListener);
	}
	$LazyActionMap::installLazyActionMap(this->frame, BasicInternalFrameUI::class$, "InternalFrame.actionMap"_s);
}

void BasicInternalFrameUI::loadActionMap($LazyActionMap* map) {
	$init(BasicInternalFrameUI);
	$nc(map)->put($$new($BasicInternalFrameUI$1, "showSystemMenu"_s));
	$BasicLookAndFeel::installAudioActionMap(map);
}

void BasicInternalFrameUI::installComponents() {
	$useLocalCurrentObjectStackCache();
	setNorthPane($(createNorthPane(this->frame)));
	setSouthPane($(createSouthPane(this->frame)));
	setEastPane($(createEastPane(this->frame)));
	setWestPane($(createWestPane(this->frame)));
}

void BasicInternalFrameUI::installListeners() {
	$useLocalCurrentObjectStackCache();
	$set(this, borderListener, createBorderListener(this->frame));
	$set(this, propertyChangeListener, createPropertyChangeListener());
	$nc(this->frame)->addPropertyChangeListener(this->propertyChangeListener);
	installMouseHandlers(this->frame);
	$set(this, glassPaneDispatcher, createGlassPaneDispatcher());
	if (this->glassPaneDispatcher != nullptr) {
		$nc($($nc(this->frame)->getGlassPane()))->addMouseListener(this->glassPaneDispatcher);
		$nc($($nc(this->frame)->getGlassPane()))->addMouseMotionListener(this->glassPaneDispatcher);
	}
	$set(this, componentListener, createComponentListener());
	if ($nc(this->frame)->getParent() != nullptr) {
		$set(this, parentBounds, $nc($($nc(this->frame)->getParent()))->getBounds());
	}
	if (($nc(this->frame)->getParent() != nullptr) && !this->componentListenerAdded) {
		$nc($($nc(this->frame)->getParent()))->addComponentListener(this->componentListener);
		this->componentListenerAdded = true;
	}
}

$WindowFocusListener* BasicInternalFrameUI::getWindowFocusListener() {
	return getHandler();
}

void BasicInternalFrameUI::cancelResize() {
	if (this->resizing) {
		if ($instanceOf($BasicInternalFrameUI$BorderListener, this->borderListener)) {
			$nc(($cast($BasicInternalFrameUI$BorderListener, this->borderListener)))->finishMouseReleased();
		}
	}
}

$BasicInternalFrameUI$Handler* BasicInternalFrameUI::getHandler() {
	if (this->handler == nullptr) {
		$set(this, handler, $new($BasicInternalFrameUI$Handler, this));
	}
	return this->handler;
}

$InputMap* BasicInternalFrameUI::getInputMap(int32_t condition) {
	if (condition == $JComponent::WHEN_IN_FOCUSED_WINDOW) {
		return createInputMap(condition);
	}
	return nullptr;
}

$InputMap* BasicInternalFrameUI::createInputMap(int32_t condition) {
	if (condition == $JComponent::WHEN_IN_FOCUSED_WINDOW) {
		$var($ObjectArray, bindings, $cast($ObjectArray, $DefaultLookup::get(this->frame, this, "InternalFrame.windowBindings"_s)));
		if (bindings != nullptr) {
			return $LookAndFeel::makeComponentInputMap(this->frame, bindings);
		}
	}
	return nullptr;
}

void BasicInternalFrameUI::uninstallDefaults() {
	$var($Icon, frameIcon, $nc(this->frame)->getFrameIcon());
	if ($instanceOf($UIResource, frameIcon)) {
		$nc(this->frame)->setFrameIcon(nullptr);
	}
	$set(this, internalFrameLayout, nullptr);
	$nc(this->frame)->setLayout(nullptr);
	$LookAndFeel::uninstallBorder(this->frame);
}

void BasicInternalFrameUI::uninstallComponents() {
	setNorthPane(nullptr);
	setSouthPane(nullptr);
	setEastPane(nullptr);
	setWestPane(nullptr);
	if (this->titlePane != nullptr) {
		$nc(this->titlePane)->uninstallDefaults();
	}
	$set(this, titlePane, nullptr);
}

void BasicInternalFrameUI::uninstallListeners() {
	$useLocalCurrentObjectStackCache();
	if (($nc(this->frame)->getParent() != nullptr) && this->componentListenerAdded) {
		$nc($($nc(this->frame)->getParent()))->removeComponentListener(this->componentListener);
		this->componentListenerAdded = false;
	}
	$set(this, componentListener, nullptr);
	if (this->glassPaneDispatcher != nullptr) {
		$nc($($nc(this->frame)->getGlassPane()))->removeMouseListener(this->glassPaneDispatcher);
		$nc($($nc(this->frame)->getGlassPane()))->removeMouseMotionListener(this->glassPaneDispatcher);
		$set(this, glassPaneDispatcher, nullptr);
	}
	deinstallMouseHandlers(this->frame);
	$nc(this->frame)->removePropertyChangeListener(this->propertyChangeListener);
	$set(this, propertyChangeListener, nullptr);
	$set(this, borderListener, nullptr);
}

void BasicInternalFrameUI::uninstallKeyboardActions() {
	if (this->internalFrameListener != nullptr) {
		$nc(this->frame)->removeInternalFrameListener(this->internalFrameListener);
	}
	$set(this, internalFrameListener, nullptr);
	$SwingUtilities::replaceUIInputMap(this->frame, $JComponent::WHEN_IN_FOCUSED_WINDOW, nullptr);
	$SwingUtilities::replaceUIActionMap(this->frame, nullptr);
}

void BasicInternalFrameUI::updateFrameCursor() {
	if (this->resizing) {
		return;
	}
	$var($Cursor, s, $nc(this->frame)->getLastCursor());
	if (s == nullptr) {
		$assign(s, $Cursor::getPredefinedCursor($Cursor::DEFAULT_CURSOR));
	}
	$nc(this->frame)->setCursor(s);
}

$LayoutManager* BasicInternalFrameUI::createLayoutManager() {
	return getHandler();
}

$PropertyChangeListener* BasicInternalFrameUI::createPropertyChangeListener() {
	return getHandler();
}

$Dimension* BasicInternalFrameUI::getPreferredSize($JComponent* x) {
	if ($equals(this->frame, x)) {
		return $nc($($nc(this->frame)->getLayout()))->preferredLayoutSize(x);
	}
	return $new($Dimension, 100, 100);
}

$Dimension* BasicInternalFrameUI::getMinimumSize($JComponent* x) {
	if ($equals(this->frame, x)) {
		return $nc($($nc(this->frame)->getLayout()))->minimumLayoutSize(x);
	}
	return $new($Dimension, 0, 0);
}

$Dimension* BasicInternalFrameUI::getMaximumSize($JComponent* x) {
	return $new($Dimension, $Integer::MAX_VALUE, $Integer::MAX_VALUE);
}

void BasicInternalFrameUI::replacePane($JComponent* currentPane, $JComponent* newPane) {
	if (currentPane != nullptr) {
		deinstallMouseHandlers(currentPane);
		$nc(this->frame)->remove(static_cast<$Component*>(currentPane));
	}
	if (newPane != nullptr) {
		$nc(this->frame)->add(static_cast<$Component*>(newPane));
		installMouseHandlers(newPane);
	}
}

void BasicInternalFrameUI::deinstallMouseHandlers($JComponent* c) {
	$nc(c)->removeMouseListener(static_cast<$MouseListener*>(static_cast<$MouseAdapter*>(this->borderListener)));
	c->removeMouseMotionListener(static_cast<$MouseMotionListener*>(static_cast<$MouseAdapter*>(this->borderListener)));
}

void BasicInternalFrameUI::installMouseHandlers($JComponent* c) {
	$nc(c)->addMouseListener(static_cast<$MouseListener*>(static_cast<$MouseAdapter*>(this->borderListener)));
	c->addMouseMotionListener(static_cast<$MouseMotionListener*>(static_cast<$MouseAdapter*>(this->borderListener)));
}

$JComponent* BasicInternalFrameUI::createNorthPane($JInternalFrame* w) {
	$set(this, titlePane, $new($BasicInternalFrameTitlePane, w));
	return this->titlePane;
}

$JComponent* BasicInternalFrameUI::createSouthPane($JInternalFrame* w) {
	return nullptr;
}

$JComponent* BasicInternalFrameUI::createWestPane($JInternalFrame* w) {
	return nullptr;
}

$JComponent* BasicInternalFrameUI::createEastPane($JInternalFrame* w) {
	return nullptr;
}

$MouseInputAdapter* BasicInternalFrameUI::createBorderListener($JInternalFrame* w) {
	return $new($BasicInternalFrameUI$BorderListener, this);
}

void BasicInternalFrameUI::createInternalFrameListener() {
	$set(this, internalFrameListener, getHandler());
}

bool BasicInternalFrameUI::isKeyBindingRegistered() {
	return this->keyBindingRegistered;
}

void BasicInternalFrameUI::setKeyBindingRegistered(bool b) {
	this->keyBindingRegistered = b;
}

bool BasicInternalFrameUI::isKeyBindingActive() {
	return this->keyBindingActive;
}

void BasicInternalFrameUI::setKeyBindingActive(bool b) {
	this->keyBindingActive = b;
}

void BasicInternalFrameUI::setupMenuOpenKey() {
	$var($InputMap, map, getInputMap($JComponent::WHEN_IN_FOCUSED_WINDOW));
	$SwingUtilities::replaceUIInputMap(this->frame, $JComponent::WHEN_IN_FOCUSED_WINDOW, map);
}

void BasicInternalFrameUI::setupMenuCloseKey() {
}

$JComponent* BasicInternalFrameUI::getNorthPane() {
	return this->northPane;
}

void BasicInternalFrameUI::setNorthPane($JComponent* c) {
	if (this->northPane != nullptr && $instanceOf($BasicInternalFrameTitlePane, this->northPane)) {
		$nc(($cast($BasicInternalFrameTitlePane, this->northPane)))->uninstallListeners();
	}
	replacePane(this->northPane, c);
	$set(this, northPane, c);
	if ($instanceOf($BasicInternalFrameTitlePane, c)) {
		$set(this, titlePane, $cast($BasicInternalFrameTitlePane, c));
	}
}

$JComponent* BasicInternalFrameUI::getSouthPane() {
	return this->southPane;
}

void BasicInternalFrameUI::setSouthPane($JComponent* c) {
	$set(this, southPane, c);
}

$JComponent* BasicInternalFrameUI::getWestPane() {
	return this->westPane;
}

void BasicInternalFrameUI::setWestPane($JComponent* c) {
	$set(this, westPane, c);
}

$JComponent* BasicInternalFrameUI::getEastPane() {
	return this->eastPane;
}

void BasicInternalFrameUI::setEastPane($JComponent* c) {
	$set(this, eastPane, c);
}

$DesktopManager* BasicInternalFrameUI::getDesktopManager() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(this->frame)->getDesktopPane() != nullptr;
	if (var$0 && $nc($($nc(this->frame)->getDesktopPane()))->getDesktopManager() != nullptr) {
		return $nc($($nc(this->frame)->getDesktopPane()))->getDesktopManager();
	}
	if (BasicInternalFrameUI::sharedDesktopManager == nullptr) {
		$assignStatic(BasicInternalFrameUI::sharedDesktopManager, createDesktopManager());
	}
	return BasicInternalFrameUI::sharedDesktopManager;
}

$DesktopManager* BasicInternalFrameUI::createDesktopManager() {
	return $new($DefaultDesktopManager);
}

void BasicInternalFrameUI::closeFrame($JInternalFrame* f) {
	$BasicLookAndFeel::playSound(this->frame, "InternalFrame.closeSound"_s);
	$nc($(getDesktopManager()))->closeFrame(f);
}

void BasicInternalFrameUI::maximizeFrame($JInternalFrame* f) {
	$BasicLookAndFeel::playSound(this->frame, "InternalFrame.maximizeSound"_s);
	$nc($(getDesktopManager()))->maximizeFrame(f);
}

void BasicInternalFrameUI::minimizeFrame($JInternalFrame* f) {
	if (!$nc(f)->isIcon()) {
		$BasicLookAndFeel::playSound(this->frame, "InternalFrame.restoreDownSound"_s);
	}
	$nc($(getDesktopManager()))->minimizeFrame(f);
}

void BasicInternalFrameUI::iconifyFrame($JInternalFrame* f) {
	$BasicLookAndFeel::playSound(this->frame, "InternalFrame.minimizeSound"_s);
	$nc($(getDesktopManager()))->iconifyFrame(f);
}

void BasicInternalFrameUI::deiconifyFrame($JInternalFrame* f) {
	if (!$nc(f)->isMaximum()) {
		$BasicLookAndFeel::playSound(this->frame, "InternalFrame.restoreUpSound"_s);
	}
	$nc($(getDesktopManager()))->deiconifyFrame(f);
}

void BasicInternalFrameUI::activateFrame($JInternalFrame* f) {
	$nc($(getDesktopManager()))->activateFrame(f);
}

void BasicInternalFrameUI::deactivateFrame($JInternalFrame* f) {
	$nc($(getDesktopManager()))->deactivateFrame(f);
}

$ComponentListener* BasicInternalFrameUI::createComponentListener() {
	return getHandler();
}

$MouseInputListener* BasicInternalFrameUI::createGlassPaneDispatcher() {
	return nullptr;
}

BasicInternalFrameUI::BasicInternalFrameUI() {
}

$Class* BasicInternalFrameUI::load$($String* name, bool initialize) {
	$loadClass(BasicInternalFrameUI, name, initialize, &_BasicInternalFrameUI_ClassInfo_, allocate$BasicInternalFrameUI);
	return class$;
}

$Class* BasicInternalFrameUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax