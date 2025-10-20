#include <javax/swing/plaf/basic/BasicToolBarUI.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/IllegalComponentStateException.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <java/awt/event/ContainerListener.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
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
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/HashMap.h>
#include <java/util/Hashtable.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/RootPaneContainer.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/event/MouseInputListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ToolBarUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicBorders$ButtonBorder.h>
#include <javax/swing/plaf/basic/BasicBorders$RadioButtonBorder.h>
#include <javax/swing/plaf/basic/BasicBorders$RolloverButtonBorder.h>
#include <javax/swing/plaf/basic/BasicBorders$RolloverMarginBorder.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$1.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$1ToolBarDialog.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$2.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$Actions.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$DragWindow.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$FrameListener.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$Handler.h>
#include <javax/swing/plaf/basic/LazyActionMap.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef CENTER
#undef EAST
#undef FALSE
#undef FOCUSED_COMP_INDEX
#undef HORIZONTAL
#undef IS_ROLLOVER
#undef NAVIGATE_DOWN
#undef NAVIGATE_LEFT
#undef NAVIGATE_RIGHT
#undef NAVIGATE_UP
#undef NORTH
#undef SOUTH
#undef TRUE
#undef VERTICAL
#undef WEST
#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT

using $ComponentArray = $Array<::java::awt::Component>;
using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Dimension = ::java::awt::Dimension;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $IllegalComponentStateException = ::java::awt::IllegalComponentStateException;
using $LayoutManager = ::java::awt::LayoutManager;
using $Point = ::java::awt::Point;
using $Window = ::java::awt::Window;
using $ContainerListener = ::java::awt::event::ContainerListener;
using $FocusListener = ::java::awt::event::FocusListener;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $HashMap = ::java::util::HashMap;
using $Hashtable = ::java::util::Hashtable;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JDialog = ::javax::swing::JDialog;
using $JFrame = ::javax::swing::JFrame;
using $JRootPane = ::javax::swing::JRootPane;
using $JToggleButton = ::javax::swing::JToggleButton;
using $JToolBar = ::javax::swing::JToolBar;
using $KeyStroke = ::javax::swing::KeyStroke;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $RootPaneContainer = ::javax::swing::RootPaneContainer;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ToolBarUI = ::javax::swing::plaf::ToolBarUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicBorders$ButtonBorder = ::javax::swing::plaf::basic::BasicBorders$ButtonBorder;
using $BasicBorders$RadioButtonBorder = ::javax::swing::plaf::basic::BasicBorders$RadioButtonBorder;
using $BasicBorders$RolloverButtonBorder = ::javax::swing::plaf::basic::BasicBorders$RolloverButtonBorder;
using $BasicBorders$RolloverMarginBorder = ::javax::swing::plaf::basic::BasicBorders$RolloverMarginBorder;
using $BasicToolBarUI$1 = ::javax::swing::plaf::basic::BasicToolBarUI$1;
using $BasicToolBarUI$1ToolBarDialog = ::javax::swing::plaf::basic::BasicToolBarUI$1ToolBarDialog;
using $BasicToolBarUI$2 = ::javax::swing::plaf::basic::BasicToolBarUI$2;
using $BasicToolBarUI$Actions = ::javax::swing::plaf::basic::BasicToolBarUI$Actions;
using $BasicToolBarUI$DragWindow = ::javax::swing::plaf::basic::BasicToolBarUI$DragWindow;
using $BasicToolBarUI$FrameListener = ::javax::swing::plaf::basic::BasicToolBarUI$FrameListener;
using $BasicToolBarUI$Handler = ::javax::swing::plaf::basic::BasicToolBarUI$Handler;
using $LazyActionMap = ::javax::swing::plaf::basic::LazyActionMap;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$CompoundAttribute _BasicToolBarUI_FieldAnnotations_upKey[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicToolBarUI_FieldAnnotations_downKey[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicToolBarUI_FieldAnnotations_leftKey[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicToolBarUI_FieldAnnotations_rightKey[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$NamedAttribute BasicToolBarUI_Attribute_var$0[] = {
	{"since", 's', "17"},
	{}
};

$CompoundAttribute _BasicToolBarUI_MethodAnnotations_createFloatingFrame5[] = {
	{"Ljava/lang/Deprecated;", BasicToolBarUI_Attribute_var$0},
	{}
};

$FieldInfo _BasicToolBarUI_FieldInfo_[] = {
	{"toolBar", "Ljavax/swing/JToolBar;", nullptr, $PROTECTED, $field(BasicToolBarUI, toolBar)},
	{"floating", "Z", nullptr, $PRIVATE, $field(BasicToolBarUI, floating)},
	{"floatingX", "I", nullptr, $PRIVATE, $field(BasicToolBarUI, floatingX)},
	{"floatingY", "I", nullptr, $PRIVATE, $field(BasicToolBarUI, floatingY)},
	{"floatingFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE, $field(BasicToolBarUI, floatingFrame)},
	{"floatingToolBar", "Ljavax/swing/RootPaneContainer;", nullptr, $PRIVATE, $field(BasicToolBarUI, floatingToolBar)},
	{"dragWindow", "Ljavax/swing/plaf/basic/BasicToolBarUI$DragWindow;", nullptr, $PROTECTED, $field(BasicToolBarUI, dragWindow)},
	{"dockingSource", "Ljava/awt/Container;", nullptr, $PRIVATE, $field(BasicToolBarUI, dockingSource)},
	{"dockingSensitivity", "I", nullptr, $PRIVATE, $field(BasicToolBarUI, dockingSensitivity)},
	{"focusedCompIndex", "I", nullptr, $PROTECTED, $field(BasicToolBarUI, focusedCompIndex)},
	{"dockingColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicToolBarUI, dockingColor)},
	{"floatingColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicToolBarUI, floatingColor)},
	{"dockingBorderColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicToolBarUI, dockingBorderColor)},
	{"floatingBorderColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicToolBarUI, floatingBorderColor)},
	{"dockingListener", "Ljavax/swing/event/MouseInputListener;", nullptr, $PROTECTED, $field(BasicToolBarUI, dockingListener)},
	{"propertyListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $field(BasicToolBarUI, propertyListener)},
	{"toolBarContListener", "Ljava/awt/event/ContainerListener;", nullptr, $PROTECTED, $field(BasicToolBarUI, toolBarContListener)},
	{"toolBarFocusListener", "Ljava/awt/event/FocusListener;", nullptr, $PROTECTED, $field(BasicToolBarUI, toolBarFocusListener)},
	{"handler", "Ljavax/swing/plaf/basic/BasicToolBarUI$Handler;", nullptr, $PRIVATE, $field(BasicToolBarUI, handler)},
	{"constraintBeforeFloating", "Ljava/lang/String;", nullptr, $PROTECTED, $field(BasicToolBarUI, constraintBeforeFloating)},
	{"IS_ROLLOVER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BasicToolBarUI, IS_ROLLOVER)},
	{"rolloverBorder", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC, $staticField(BasicToolBarUI, rolloverBorder)},
	{"nonRolloverBorder", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC, $staticField(BasicToolBarUI, nonRolloverBorder)},
	{"nonRolloverToggleBorder", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC, $staticField(BasicToolBarUI, nonRolloverToggleBorder)},
	{"rolloverBorders", "Z", nullptr, $PRIVATE, $field(BasicToolBarUI, rolloverBorders)},
	{"borderTable", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljavax/swing/AbstractButton;Ljavax/swing/border/Border;>;", $PRIVATE, $field(BasicToolBarUI, borderTable)},
	{"rolloverTable", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljavax/swing/AbstractButton;Ljava/lang/Boolean;>;", $PRIVATE, $field(BasicToolBarUI, rolloverTable)},
	{"upKey", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicToolBarUI, upKey), _BasicToolBarUI_FieldAnnotations_upKey},
	{"downKey", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicToolBarUI, downKey), _BasicToolBarUI_FieldAnnotations_downKey},
	{"leftKey", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicToolBarUI, leftKey), _BasicToolBarUI_FieldAnnotations_leftKey},
	{"rightKey", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicToolBarUI, rightKey), _BasicToolBarUI_FieldAnnotations_rightKey},
	{"FOCUSED_COMP_INDEX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(BasicToolBarUI, FOCUSED_COMP_INDEX)},
	{}
};

$MethodInfo _BasicToolBarUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicToolBarUI::*)()>(&BasicToolBarUI::init$))},
	{"calculateConstraint", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(BasicToolBarUI::*)()>(&BasicToolBarUI::calculateConstraint))},
	{"canDock", "(Ljava/awt/Component;Ljava/awt/Point;)Z", nullptr, $PUBLIC},
	{"createDockingListener", "()Ljavax/swing/event/MouseInputListener;", nullptr, $PROTECTED},
	{"createDragWindow", "(Ljavax/swing/JToolBar;)Ljavax/swing/plaf/basic/BasicToolBarUI$DragWindow;", nullptr, $PROTECTED},
	{"createFloatingFrame", "(Ljavax/swing/JToolBar;)Ljavax/swing/JFrame;", nullptr, $PROTECTED | $DEPRECATED, nullptr, nullptr, nullptr, _BasicToolBarUI_MethodAnnotations_createFloatingFrame5},
	{"createFloatingWindow", "(Ljavax/swing/JToolBar;)Ljavax/swing/RootPaneContainer;", nullptr, $PROTECTED},
	{"createFrameListener", "()Ljava/awt/event/WindowListener;", nullptr, $PROTECTED},
	{"createNonRolloverBorder", "()Ljavax/swing/border/Border;", nullptr, $PROTECTED},
	{"createNonRolloverToggleBorder", "()Ljavax/swing/border/Border;", nullptr, $PRIVATE, $method(static_cast<$Border*(BasicToolBarUI::*)()>(&BasicToolBarUI::createNonRolloverToggleBorder))},
	{"createPropertyListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createRolloverBorder", "()Ljavax/swing/border/Border;", nullptr, $PROTECTED},
	{"createToolBarContListener", "()Ljava/awt/event/ContainerListener;", nullptr, $PROTECTED},
	{"createToolBarFocusListener", "()Ljava/awt/event/FocusListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicToolBarUI::createUI))},
	{"dragTo", "(Ljava/awt/Point;Ljava/awt/Point;)V", nullptr, $PROTECTED},
	{"floatAt", "(Ljava/awt/Point;Ljava/awt/Point;)V", nullptr, $PROTECTED},
	{"getDockingColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getDockingConstraint", "(Ljava/awt/Component;Ljava/awt/Point;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(BasicToolBarUI::*)($Component*,$Point*)>(&BasicToolBarUI::getDockingConstraint))},
	{"getFloatingColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getHandler", "()Ljavax/swing/plaf/basic/BasicToolBarUI$Handler;", nullptr, $PRIVATE, $method(static_cast<$BasicToolBarUI$Handler*(BasicToolBarUI::*)()>(&BasicToolBarUI::getHandler))},
	{"getInputMap", "(I)Ljavax/swing/InputMap;", nullptr, 0},
	{"getNonRolloverBorder", "(Ljavax/swing/AbstractButton;)Ljavax/swing/border/Border;", nullptr, $PROTECTED},
	{"getRolloverBorder", "(Ljavax/swing/AbstractButton;)Ljavax/swing/border/Border;", nullptr, $PROTECTED},
	{"installComponents", "()V", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installNonRolloverBorders", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"installNormalBorders", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"installRolloverBorders", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"isBlocked", "(Ljava/awt/Component;Ljava/lang/Object;)Z", nullptr, $PRIVATE, $method(static_cast<bool(BasicToolBarUI::*)($Component*,Object$*)>(&BasicToolBarUI::isBlocked))},
	{"isFloating", "()Z", nullptr, $PUBLIC},
	{"isRolloverBorders", "()Z", nullptr, $PUBLIC},
	{"loadActionMap", "(Ljavax/swing/plaf/basic/LazyActionMap;)V", nullptr, $STATIC, $method(static_cast<void(*)($LazyActionMap*)>(&BasicToolBarUI::loadActionMap))},
	{"mapConstraintToOrientation", "(Ljava/lang/String;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicToolBarUI::*)($String*)>(&BasicToolBarUI::mapConstraintToOrientation))},
	{"navigateFocusedComp", "(I)V", nullptr, $PROTECTED},
	{"paintDragWindow", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"setBorderToNonRollover", "(Ljava/awt/Component;)V", nullptr, $PROTECTED},
	{"setBorderToNormal", "(Ljava/awt/Component;)V", nullptr, $PROTECTED},
	{"setBorderToRollover", "(Ljava/awt/Component;)V", nullptr, $PROTECTED},
	{"setDockingColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setFloating", "(ZLjava/awt/Point;)V", nullptr, $PUBLIC},
	{"setFloatingColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setFloatingLocation", "(II)V", nullptr, $PUBLIC},
	{"setOrientation", "(I)V", nullptr, $PUBLIC},
	{"setRolloverBorders", "(Z)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallComponents", "()V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicToolBarUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicToolBarUI$DragWindow", "javax.swing.plaf.basic.BasicToolBarUI", "DragWindow", $PROTECTED},
	{"javax.swing.plaf.basic.BasicToolBarUI$DockingListener", "javax.swing.plaf.basic.BasicToolBarUI", "DockingListener", $PUBLIC},
	{"javax.swing.plaf.basic.BasicToolBarUI$PropertyListener", "javax.swing.plaf.basic.BasicToolBarUI", "PropertyListener", $PROTECTED},
	{"javax.swing.plaf.basic.BasicToolBarUI$ToolBarFocusListener", "javax.swing.plaf.basic.BasicToolBarUI", "ToolBarFocusListener", $PROTECTED},
	{"javax.swing.plaf.basic.BasicToolBarUI$ToolBarContListener", "javax.swing.plaf.basic.BasicToolBarUI", "ToolBarContListener", $PROTECTED},
	{"javax.swing.plaf.basic.BasicToolBarUI$FrameListener", "javax.swing.plaf.basic.BasicToolBarUI", "FrameListener", $PROTECTED},
	{"javax.swing.plaf.basic.BasicToolBarUI$Handler", "javax.swing.plaf.basic.BasicToolBarUI", "Handler", $PRIVATE},
	{"javax.swing.plaf.basic.BasicToolBarUI$Actions", "javax.swing.plaf.basic.BasicToolBarUI", "Actions", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicToolBarUI$2", nullptr, nullptr, 0},
	{"javax.swing.plaf.basic.BasicToolBarUI$1ToolBarDialog", nullptr, "ToolBarDialog", 0},
	{"javax.swing.plaf.basic.BasicToolBarUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicToolBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicToolBarUI",
	"javax.swing.plaf.ToolBarUI",
	"javax.swing.SwingConstants",
	_BasicToolBarUI_FieldInfo_,
	_BasicToolBarUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicToolBarUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicToolBarUI$DragWindow,javax.swing.plaf.basic.BasicToolBarUI$DockingListener,javax.swing.plaf.basic.BasicToolBarUI$PropertyListener,javax.swing.plaf.basic.BasicToolBarUI$ToolBarFocusListener,javax.swing.plaf.basic.BasicToolBarUI$ToolBarContListener,javax.swing.plaf.basic.BasicToolBarUI$FrameListener,javax.swing.plaf.basic.BasicToolBarUI$Handler,javax.swing.plaf.basic.BasicToolBarUI$Actions,javax.swing.plaf.basic.BasicToolBarUI$2,javax.swing.plaf.basic.BasicToolBarUI$1ToolBarDialog,javax.swing.plaf.basic.BasicToolBarUI$1ToolBarDialog$1,javax.swing.plaf.basic.BasicToolBarUI$1,javax.swing.plaf.basic.BasicToolBarUI$1$1"
};

$Object* allocate$BasicToolBarUI($Class* clazz) {
	return $of($alloc(BasicToolBarUI));
}

int32_t BasicToolBarUI::hashCode() {
	 return this->$ToolBarUI::hashCode();
}

bool BasicToolBarUI::equals(Object$* arg0) {
	 return this->$ToolBarUI::equals(arg0);
}

$Object* BasicToolBarUI::clone() {
	 return this->$ToolBarUI::clone();
}

$String* BasicToolBarUI::toString() {
	 return this->$ToolBarUI::toString();
}

void BasicToolBarUI::finalize() {
	this->$ToolBarUI::finalize();
}

$String* BasicToolBarUI::IS_ROLLOVER = nullptr;
$Border* BasicToolBarUI::rolloverBorder = nullptr;
$Border* BasicToolBarUI::nonRolloverBorder = nullptr;
$Border* BasicToolBarUI::nonRolloverToggleBorder = nullptr;
$String* BasicToolBarUI::FOCUSED_COMP_INDEX = nullptr;

void BasicToolBarUI::init$() {
	$ToolBarUI::init$();
	this->dockingSensitivity = 0;
	this->focusedCompIndex = -1;
	$set(this, dockingColor, nullptr);
	$set(this, floatingColor, nullptr);
	$set(this, dockingBorderColor, nullptr);
	$set(this, floatingBorderColor, nullptr);
	$init($BorderLayout);
	$set(this, constraintBeforeFloating, $BorderLayout::NORTH);
	this->rolloverBorders = false;
	$set(this, borderTable, $new($HashMap));
	$set(this, rolloverTable, $new($Hashtable));
}

$ComponentUI* BasicToolBarUI::createUI($JComponent* c) {
	$init(BasicToolBarUI);
	return $new(BasicToolBarUI);
}

void BasicToolBarUI::installUI($JComponent* c) {
	$set(this, toolBar, $cast($JToolBar, c));
	installDefaults();
	installComponents();
	installListeners();
	installKeyboardActions();
	this->dockingSensitivity = 0;
	this->floating = false;
	this->floatingX = (this->floatingY = 0);
	$set(this, floatingToolBar, nullptr);
	setOrientation($nc(this->toolBar)->getOrientation());
	$init($Boolean);
	$LookAndFeel::installProperty(c, "opaque"_s, $Boolean::TRUE);
	if ($nc(c)->getClientProperty(BasicToolBarUI::FOCUSED_COMP_INDEX) != nullptr) {
		this->focusedCompIndex = $nc((($cast($Integer, $(c->getClientProperty(BasicToolBarUI::FOCUSED_COMP_INDEX))))))->intValue();
	}
}

void BasicToolBarUI::uninstallUI($JComponent* c) {
	uninstallDefaults();
	uninstallComponents();
	uninstallListeners();
	uninstallKeyboardActions();
	if (isFloating()) {
		setFloating(false, nullptr);
	}
	$set(this, floatingToolBar, nullptr);
	$set(this, dragWindow, nullptr);
	$set(this, dockingSource, nullptr);
	$nc(c)->putClientProperty(BasicToolBarUI::FOCUSED_COMP_INDEX, $($Integer::valueOf(this->focusedCompIndex)));
}

void BasicToolBarUI::installDefaults() {
	$LookAndFeel::installBorder(this->toolBar, "ToolBar.border"_s);
	$LookAndFeel::installColorsAndFont(this->toolBar, "ToolBar.background"_s, "ToolBar.foreground"_s, "ToolBar.font"_s);
	if (this->dockingColor == nullptr || $instanceOf($UIResource, this->dockingColor)) {
		$set(this, dockingColor, $UIManager::getColor("ToolBar.dockingBackground"_s));
	}
	if (this->floatingColor == nullptr || $instanceOf($UIResource, this->floatingColor)) {
		$set(this, floatingColor, $UIManager::getColor("ToolBar.floatingBackground"_s));
	}
	if (this->dockingBorderColor == nullptr || $instanceOf($UIResource, this->dockingBorderColor)) {
		$set(this, dockingBorderColor, $UIManager::getColor("ToolBar.dockingForeground"_s));
	}
	if (this->floatingBorderColor == nullptr || $instanceOf($UIResource, this->floatingBorderColor)) {
		$set(this, floatingBorderColor, $UIManager::getColor("ToolBar.floatingForeground"_s));
	}
	$var($Object, rolloverProp, $nc(this->toolBar)->getClientProperty(BasicToolBarUI::IS_ROLLOVER));
	if (rolloverProp == nullptr) {
		$assign(rolloverProp, $UIManager::get("ToolBar.isRollover"_s));
	}
	if (rolloverProp != nullptr) {
		this->rolloverBorders = $nc(($cast($Boolean, rolloverProp)))->booleanValue();
	}
	if (BasicToolBarUI::rolloverBorder == nullptr) {
		$assignStatic(BasicToolBarUI::rolloverBorder, createRolloverBorder());
	}
	if (BasicToolBarUI::nonRolloverBorder == nullptr) {
		$assignStatic(BasicToolBarUI::nonRolloverBorder, createNonRolloverBorder());
	}
	if (BasicToolBarUI::nonRolloverToggleBorder == nullptr) {
		$assignStatic(BasicToolBarUI::nonRolloverToggleBorder, createNonRolloverToggleBorder());
	}
	setRolloverBorders(isRolloverBorders());
}

void BasicToolBarUI::uninstallDefaults() {
	$LookAndFeel::uninstallBorder(this->toolBar);
	$set(this, dockingColor, nullptr);
	$set(this, floatingColor, nullptr);
	$set(this, dockingBorderColor, nullptr);
	$set(this, floatingBorderColor, nullptr);
	installNormalBorders(this->toolBar);
	$assignStatic(BasicToolBarUI::rolloverBorder, nullptr);
	$assignStatic(BasicToolBarUI::nonRolloverBorder, nullptr);
	$assignStatic(BasicToolBarUI::nonRolloverToggleBorder, nullptr);
}

void BasicToolBarUI::installComponents() {
}

void BasicToolBarUI::uninstallComponents() {
}

void BasicToolBarUI::installListeners() {
	$useLocalCurrentObjectStackCache();
	$set(this, dockingListener, createDockingListener());
	if (this->dockingListener != nullptr) {
		$nc(this->toolBar)->addMouseMotionListener(this->dockingListener);
		$nc(this->toolBar)->addMouseListener(this->dockingListener);
	}
	$set(this, propertyListener, createPropertyListener());
	if (this->propertyListener != nullptr) {
		$nc(this->toolBar)->addPropertyChangeListener(this->propertyListener);
	}
	$set(this, toolBarContListener, createToolBarContListener());
	if (this->toolBarContListener != nullptr) {
		$nc(this->toolBar)->addContainerListener(this->toolBarContListener);
	}
	$set(this, toolBarFocusListener, createToolBarFocusListener());
	if (this->toolBarFocusListener != nullptr) {
		$var($ComponentArray, components, $nc(this->toolBar)->getComponents());
		{
			$var($ComponentArray, arr$, components);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, component, arr$->get(i$));
				{
					$nc(component)->addFocusListener(this->toolBarFocusListener);
				}
			}
		}
	}
}

void BasicToolBarUI::uninstallListeners() {
	$useLocalCurrentObjectStackCache();
	if (this->dockingListener != nullptr) {
		$nc(this->toolBar)->removeMouseMotionListener(this->dockingListener);
		$nc(this->toolBar)->removeMouseListener(this->dockingListener);
		$set(this, dockingListener, nullptr);
	}
	if (this->propertyListener != nullptr) {
		$nc(this->toolBar)->removePropertyChangeListener(this->propertyListener);
		$set(this, propertyListener, nullptr);
	}
	if (this->toolBarContListener != nullptr) {
		$nc(this->toolBar)->removeContainerListener(this->toolBarContListener);
		$set(this, toolBarContListener, nullptr);
	}
	if (this->toolBarFocusListener != nullptr) {
		$var($ComponentArray, components, $nc(this->toolBar)->getComponents());
		{
			$var($ComponentArray, arr$, components);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, component, arr$->get(i$));
				{
					$nc(component)->removeFocusListener(this->toolBarFocusListener);
				}
			}
		}
		$set(this, toolBarFocusListener, nullptr);
	}
	$set(this, handler, nullptr);
}

void BasicToolBarUI::installKeyboardActions() {
	$var($InputMap, km, getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT));
	$SwingUtilities::replaceUIInputMap(this->toolBar, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, km);
	$LazyActionMap::installLazyActionMap(this->toolBar, BasicToolBarUI::class$, "ToolBar.actionMap"_s);
}

$InputMap* BasicToolBarUI::getInputMap(int32_t condition) {
	if (condition == $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT) {
		return $cast($InputMap, $DefaultLookup::get(this->toolBar, this, "ToolBar.ancestorInputMap"_s));
	}
	return nullptr;
}

void BasicToolBarUI::loadActionMap($LazyActionMap* map) {
	$init(BasicToolBarUI);
	$useLocalCurrentObjectStackCache();
	$init($BasicToolBarUI$Actions);
	$nc(map)->put($$new($BasicToolBarUI$Actions, $BasicToolBarUI$Actions::NAVIGATE_RIGHT));
	map->put($$new($BasicToolBarUI$Actions, $BasicToolBarUI$Actions::NAVIGATE_LEFT));
	map->put($$new($BasicToolBarUI$Actions, $BasicToolBarUI$Actions::NAVIGATE_UP));
	map->put($$new($BasicToolBarUI$Actions, $BasicToolBarUI$Actions::NAVIGATE_DOWN));
}

void BasicToolBarUI::uninstallKeyboardActions() {
	$SwingUtilities::replaceUIActionMap(this->toolBar, nullptr);
	$SwingUtilities::replaceUIInputMap(this->toolBar, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, nullptr);
}

void BasicToolBarUI::navigateFocusedComp(int32_t direction) {
	$useLocalCurrentObjectStackCache();
	int32_t nComp = $nc(this->toolBar)->getComponentCount();
	int32_t j = 0;
	switch (direction) {
	case $SwingConstants::EAST:
		{}
	case $SwingConstants::SOUTH:
		{
			if (this->focusedCompIndex < 0 || this->focusedCompIndex >= nComp) {
				break;
			}
			j = this->focusedCompIndex + 1;
			while (j != this->focusedCompIndex) {
				if (j >= nComp) {
					j = 0;
				}
				$var($Component, comp, $nc(this->toolBar)->getComponentAtIndex(j++));
				bool var$0 = comp != nullptr && comp->isFocusTraversable();
				if (var$0 && comp->isEnabled()) {
					comp->requestFocus();
					break;
				}
			}
			break;
		}
	case $SwingConstants::WEST:
		{}
	case $SwingConstants::NORTH:
		{
			if (this->focusedCompIndex < 0 || this->focusedCompIndex >= nComp) {
				break;
			}
			j = this->focusedCompIndex - 1;
			while (j != this->focusedCompIndex) {
				if (j < 0) {
					j = nComp - 1;
				}
				$var($Component, comp, $nc(this->toolBar)->getComponentAtIndex(j--));
				bool var$1 = comp != nullptr && comp->isFocusTraversable();
				if (var$1 && comp->isEnabled()) {
					comp->requestFocus();
					break;
				}
			}
			break;
		}
	default:
		{
			break;
		}
	}
}

$Border* BasicToolBarUI::createRolloverBorder() {
	$useLocalCurrentObjectStackCache();
	$var($Object, border, $UIManager::get("ToolBar.rolloverBorder"_s));
	if (border != nullptr) {
		return $cast($Border, border);
	}
	$var($UIDefaults, table, $UIManager::getLookAndFeelDefaults());
	$var($Color, var$1, $nc(table)->getColor("controlShadow"_s));
	$var($Color, var$2, table->getColor("controlDkShadow"_s));
	$var($Color, var$3, table->getColor("controlHighlight"_s));
	$var($Border, var$0, static_cast<$Border*>($new($BasicBorders$RolloverButtonBorder, var$1, var$2, var$3, $(table->getColor("controlLtHighlight"_s)))));
	return $new($CompoundBorder, var$0, $$new($BasicBorders$RolloverMarginBorder));
}

$Border* BasicToolBarUI::createNonRolloverBorder() {
	$useLocalCurrentObjectStackCache();
	$var($Object, border, $UIManager::get("ToolBar.nonrolloverBorder"_s));
	if (border != nullptr) {
		return $cast($Border, border);
	}
	$var($UIDefaults, table, $UIManager::getLookAndFeelDefaults());
	$var($Color, var$1, $nc(table)->getColor("Button.shadow"_s));
	$var($Color, var$2, table->getColor("Button.darkShadow"_s));
	$var($Color, var$3, table->getColor("Button.light"_s));
	$var($Border, var$0, static_cast<$Border*>($new($BasicBorders$ButtonBorder, var$1, var$2, var$3, $(table->getColor("Button.highlight"_s)))));
	return $new($CompoundBorder, var$0, $$new($BasicBorders$RolloverMarginBorder));
}

$Border* BasicToolBarUI::createNonRolloverToggleBorder() {
	$useLocalCurrentObjectStackCache();
	$var($UIDefaults, table, $UIManager::getLookAndFeelDefaults());
	$var($Color, var$1, $nc(table)->getColor("ToggleButton.shadow"_s));
	$var($Color, var$2, table->getColor("ToggleButton.darkShadow"_s));
	$var($Color, var$3, table->getColor("ToggleButton.light"_s));
	$var($Border, var$0, static_cast<$Border*>($new($BasicBorders$RadioButtonBorder, var$1, var$2, var$3, $(table->getColor("ToggleButton.highlight"_s)))));
	return $new($CompoundBorder, var$0, $$new($BasicBorders$RolloverMarginBorder));
}

$JFrame* BasicToolBarUI::createFloatingFrame($JToolBar* toolbar) {
	$useLocalCurrentObjectStackCache();
	$var($Window, window, $SwingUtilities::getWindowAncestor(toolbar));
	$var($String, var$0, $nc(toolbar)->getName());
	$var($JFrame, frame, $new($BasicToolBarUI$1, this, var$0, (window != nullptr) ? $($nc(window)->getGraphicsConfiguration()) : ($GraphicsConfiguration*)nullptr));
	$nc($(frame->getRootPane()))->setName("ToolBar.FloatingFrame"_s);
	frame->setResizable(false);
	$var($WindowListener, wl, createFrameListener());
	frame->addWindowListener(wl);
	return frame;
}

$RootPaneContainer* BasicToolBarUI::createFloatingWindow($JToolBar* toolbar) {
	$useLocalCurrentObjectStackCache();
	{
	}
	$var($JDialog, dialog, nullptr);
	$var($Window, window, $SwingUtilities::getWindowAncestor(toolbar));
	if ($instanceOf($Frame, window)) {
		$assign(dialog, $new($BasicToolBarUI$1ToolBarDialog, this, $cast($Frame, window), $($nc(toolbar)->getName()), false));
	} else if ($instanceOf($Dialog, window)) {
		$assign(dialog, $new($BasicToolBarUI$1ToolBarDialog, this, $cast($Dialog, window), $($nc(toolbar)->getName()), false));
	} else {
		$assign(dialog, $new($BasicToolBarUI$1ToolBarDialog, this, ($Frame*)nullptr, $($nc(toolbar)->getName()), false));
	}
	$nc($($nc(dialog)->getRootPane()))->setName("ToolBar.FloatingWindow"_s);
	dialog->setTitle($($nc(toolbar)->getName()));
	dialog->setResizable(false);
	$var($WindowListener, wl, createFrameListener());
	dialog->addWindowListener(wl);
	return dialog;
}

$BasicToolBarUI$DragWindow* BasicToolBarUI::createDragWindow($JToolBar* toolbar) {
	$useLocalCurrentObjectStackCache();
	$var($Window, frame, nullptr);
	if (this->toolBar != nullptr) {
		$var($Container, p, nullptr);
		for ($assign(p, $nc(this->toolBar)->getParent()); p != nullptr && !($instanceOf($Window, p)); $assign(p, $nc(p)->getParent())) {
		}
		if (p != nullptr && $instanceOf($Window, p)) {
			$assign(frame, $cast($Window, p));
		}
	}
	if (this->floatingToolBar == nullptr) {
		$set(this, floatingToolBar, createFloatingWindow(this->toolBar));
	}
	if ($instanceOf($Window, this->floatingToolBar)) {
		$assign(frame, $cast($Window, this->floatingToolBar));
	}
	$var($BasicToolBarUI$DragWindow, dragWindow, $new($BasicToolBarUI$DragWindow, this, frame));
	return dragWindow;
}

bool BasicToolBarUI::isRolloverBorders() {
	return this->rolloverBorders;
}

void BasicToolBarUI::setRolloverBorders(bool rollover) {
	this->rolloverBorders = rollover;
	if (this->rolloverBorders) {
		installRolloverBorders(this->toolBar);
	} else {
		installNonRolloverBorders(this->toolBar);
	}
}

void BasicToolBarUI::installRolloverBorders($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($ComponentArray, components, $nc(c)->getComponents());
	{
		$var($ComponentArray, arr$, components);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Component, component, arr$->get(i$));
			{
				if ($instanceOf($JComponent, component)) {
					$nc(($cast($JComponent, component)))->updateUI();
					setBorderToRollover(component);
				}
			}
		}
	}
}

void BasicToolBarUI::installNonRolloverBorders($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($ComponentArray, components, $nc(c)->getComponents());
	{
		$var($ComponentArray, arr$, components);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Component, component, arr$->get(i$));
			{
				if ($instanceOf($JComponent, component)) {
					$nc(($cast($JComponent, component)))->updateUI();
					setBorderToNonRollover(component);
				}
			}
		}
	}
}

void BasicToolBarUI::installNormalBorders($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($ComponentArray, components, $nc(c)->getComponents());
	{
		$var($ComponentArray, arr$, components);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Component, component, arr$->get(i$));
			{
				setBorderToNormal(component);
			}
		}
	}
}

void BasicToolBarUI::setBorderToRollover($Component* c) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($AbstractButton, c)) {
		$var($AbstractButton, b, $cast($AbstractButton, c));
		$var($Border, border, $cast($Border, $nc(this->borderTable)->get(b)));
		if (border == nullptr || $instanceOf($UIResource, border)) {
			$nc(this->borderTable)->put(b, $($nc(b)->getBorder()));
		}
		if ($instanceOf($UIResource, $($nc(b)->getBorder()))) {
			b->setBorder($(getRolloverBorder(b)));
		}
		$init($Boolean);
		$nc(this->rolloverTable)->put(b, $nc(b)->isRolloverEnabled() ? $Boolean::TRUE : $Boolean::FALSE);
		$nc(b)->setRolloverEnabled(true);
	}
}

$Border* BasicToolBarUI::getRolloverBorder($AbstractButton* b) {
	return BasicToolBarUI::rolloverBorder;
}

void BasicToolBarUI::setBorderToNonRollover($Component* c) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($AbstractButton, c)) {
		$var($AbstractButton, b, $cast($AbstractButton, c));
		$var($Border, border, $cast($Border, $nc(this->borderTable)->get(b)));
		if (border == nullptr || $instanceOf($UIResource, border)) {
			$nc(this->borderTable)->put(b, $($nc(b)->getBorder()));
		}
		if ($instanceOf($UIResource, $($nc(b)->getBorder()))) {
			b->setBorder($(getNonRolloverBorder(b)));
		}
		$init($Boolean);
		$nc(this->rolloverTable)->put(b, $nc(b)->isRolloverEnabled() ? $Boolean::TRUE : $Boolean::FALSE);
		$nc(b)->setRolloverEnabled(false);
	}
}

$Border* BasicToolBarUI::getNonRolloverBorder($AbstractButton* b) {
	if ($instanceOf($JToggleButton, b)) {
		return BasicToolBarUI::nonRolloverToggleBorder;
	} else {
		return BasicToolBarUI::nonRolloverBorder;
	}
}

void BasicToolBarUI::setBorderToNormal($Component* c) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($AbstractButton, c)) {
		$var($AbstractButton, b, $cast($AbstractButton, c));
		$var($Border, border, $cast($Border, $nc(this->borderTable)->remove(b)));
		$nc(b)->setBorder(border);
		$var($Boolean, value, $cast($Boolean, $nc(this->rolloverTable)->remove(b)));
		if (value != nullptr) {
			b->setRolloverEnabled(value->booleanValue());
		}
	}
}

void BasicToolBarUI::setFloatingLocation(int32_t x, int32_t y) {
	this->floatingX = x;
	this->floatingY = y;
}

bool BasicToolBarUI::isFloating() {
	return this->floating;
}

void BasicToolBarUI::setFloating(bool b, $Point* p) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->toolBar)->isFloatable()) {
		bool visible = false;
		$var($Window, ancestor, $SwingUtilities::getWindowAncestor(this->toolBar));
		if (ancestor != nullptr) {
			visible = ancestor->isVisible();
		}
		if (this->dragWindow != nullptr) {
			$nc(this->dragWindow)->setVisible(false);
		}
		this->floating = b;
		if (this->floatingToolBar == nullptr) {
			$set(this, floatingToolBar, createFloatingWindow(this->toolBar));
		}
		if (b == true) {
			if (this->dockingSource == nullptr) {
				$set(this, dockingSource, $nc(this->toolBar)->getParent());
				$nc(this->dockingSource)->remove(static_cast<$Component*>(this->toolBar));
			}
			$set(this, constraintBeforeFloating, calculateConstraint());
			if (this->propertyListener != nullptr) {
				$UIManager::addPropertyChangeListener(this->propertyListener);
			}
			$init($BorderLayout);
			$nc($($nc(this->floatingToolBar)->getContentPane()))->add(static_cast<$Component*>(this->toolBar), $of($BorderLayout::CENTER));
			if ($instanceOf($Window, this->floatingToolBar)) {
				$nc(($cast($Window, this->floatingToolBar)))->pack();
				$nc(($cast($Window, this->floatingToolBar)))->setLocation(this->floatingX, this->floatingY);
				if (visible) {
					$nc(($cast($Window, this->floatingToolBar)))->show();
				} else {
					$nc(ancestor)->addWindowListener($$new($BasicToolBarUI$2, this));
				}
			}
		} else {
			if (this->floatingToolBar == nullptr) {
				$set(this, floatingToolBar, createFloatingWindow(this->toolBar));
			}
			if ($instanceOf($Window, this->floatingToolBar)) {
				$nc(($cast($Window, this->floatingToolBar)))->setVisible(false);
			}
			$nc($($nc(this->floatingToolBar)->getContentPane()))->remove(static_cast<$Component*>(this->toolBar));
			$var($String, constraint, getDockingConstraint(this->dockingSource, p));
			if (constraint == nullptr) {
				$init($BorderLayout);
				$assign(constraint, $BorderLayout::NORTH);
			}
			int32_t orientation = mapConstraintToOrientation(constraint);
			setOrientation(orientation);
			if (this->dockingSource == nullptr) {
				$set(this, dockingSource, $nc(this->toolBar)->getParent());
			}
			if (this->propertyListener != nullptr) {
				$UIManager::removePropertyChangeListener(this->propertyListener);
			}
			$nc(this->dockingSource)->add(constraint, static_cast<$Component*>(this->toolBar));
		}
		$nc(this->dockingSource)->invalidate();
		$var($Container, dockingSourceParent, $nc(this->dockingSource)->getParent());
		if (dockingSourceParent != nullptr) {
			dockingSourceParent->validate();
		}
		$nc(this->dockingSource)->repaint();
	}
}

int32_t BasicToolBarUI::mapConstraintToOrientation($String* constraint) {
	int32_t orientation = $nc(this->toolBar)->getOrientation();
	if (constraint != nullptr) {
		$init($BorderLayout);
		bool var$0 = constraint->equals($BorderLayout::EAST);
		if (var$0 || constraint->equals($BorderLayout::WEST)) {
			orientation = $JToolBar::VERTICAL;
		} else {
			bool var$2 = constraint->equals($BorderLayout::NORTH);
			if (var$2 || constraint->equals($BorderLayout::SOUTH)) {
				orientation = $JToolBar::HORIZONTAL;
			}
		}
	}
	return orientation;
}

void BasicToolBarUI::setOrientation(int32_t orientation) {
	$nc(this->toolBar)->setOrientation(orientation);
	if (this->dragWindow != nullptr) {
		$nc(this->dragWindow)->setOrientation(orientation);
	}
}

$Color* BasicToolBarUI::getDockingColor() {
	return this->dockingColor;
}

void BasicToolBarUI::setDockingColor($Color* c) {
	$set(this, dockingColor, c);
}

$Color* BasicToolBarUI::getFloatingColor() {
	return this->floatingColor;
}

void BasicToolBarUI::setFloatingColor($Color* c) {
	$set(this, floatingColor, c);
}

bool BasicToolBarUI::isBlocked($Component* comp, Object$* constraint) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Container, comp)) {
		$var($Container, cont, $cast($Container, comp));
		$var($LayoutManager, lm, $nc(cont)->getLayout());
		if ($instanceOf($BorderLayout, lm)) {
			$var($BorderLayout, blm, $cast($BorderLayout, lm));
			$var($Component, c, $nc(blm)->getLayoutComponent(cont, constraint));
			return (c != nullptr && !$equals(c, this->toolBar));
		}
	}
	return false;
}

bool BasicToolBarUI::canDock($Component* c, $Point* p) {
	return (p != nullptr && getDockingConstraint(c, p) != nullptr);
}

$String* BasicToolBarUI::calculateConstraint() {
	$useLocalCurrentObjectStackCache();
	$var($String, constraint, nullptr);
	$var($LayoutManager, lm, $nc(this->dockingSource)->getLayout());
	if ($instanceOf($BorderLayout, lm)) {
		$assign(constraint, $cast($String, $nc(($cast($BorderLayout, lm)))->getConstraints(this->toolBar)));
	}
	return (constraint != nullptr) ? constraint : this->constraintBeforeFloating;
}

$String* BasicToolBarUI::getDockingConstraint($Component* c, $Point* p) {
	$useLocalCurrentObjectStackCache();
	if (p == nullptr) {
		return this->constraintBeforeFloating;
	}
	if ($nc(c)->contains(p)) {
		this->dockingSensitivity = ($nc(this->toolBar)->getOrientation() == $JToolBar::HORIZONTAL) ? $nc($($nc(this->toolBar)->getSize()))->height : $nc($($nc(this->toolBar)->getSize()))->width;
		$init($BorderLayout);
		if ($nc(p)->y < this->dockingSensitivity && !isBlocked(c, $BorderLayout::NORTH)) {
			return $BorderLayout::NORTH;
		}
		bool var$0 = $nc(p)->x >= c->getWidth() - this->dockingSensitivity;
		if (var$0 && !isBlocked(c, $BorderLayout::EAST)) {
			return $BorderLayout::EAST;
		}
		if ($nc(p)->x < this->dockingSensitivity && !isBlocked(c, $BorderLayout::WEST)) {
			return $BorderLayout::WEST;
		}
		bool var$1 = $nc(p)->y >= c->getHeight() - this->dockingSensitivity;
		if (var$1 && !isBlocked(c, $BorderLayout::SOUTH)) {
			return $BorderLayout::SOUTH;
		}
	}
	return nullptr;
}

void BasicToolBarUI::dragTo($Point* position, $Point* origin) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->toolBar)->isFloatable()) {
		try {
			if (this->dragWindow == nullptr) {
				$set(this, dragWindow, createDragWindow(this->toolBar));
			}
			$var($Point, offset, $nc(this->dragWindow)->getOffset());
			if (offset == nullptr) {
				$var($Dimension, size, $nc(this->toolBar)->getPreferredSize());
				$assign(offset, $new($Point, $nc(size)->width / 2, size->height / 2));
				$nc(this->dragWindow)->setOffset(offset);
			}
			$var($Point, global, $new($Point, $nc(origin)->x + $nc(position)->x, origin->y + position->y));
			$var($Point, dragPoint, $new($Point, global->x - $nc(offset)->x, global->y - offset->y));
			if (this->dockingSource == nullptr) {
				$set(this, dockingSource, $nc(this->toolBar)->getParent());
			}
			$set(this, constraintBeforeFloating, calculateConstraint());
			$var($Point, dockingPosition, $nc(this->dockingSource)->getLocationOnScreen());
			$var($Point, comparisonPoint, $new($Point, global->x - $nc(dockingPosition)->x, global->y - dockingPosition->y));
			if (canDock(this->dockingSource, comparisonPoint)) {
				$nc(this->dragWindow)->setBackground($(getDockingColor()));
				$var($String, constraint, getDockingConstraint(this->dockingSource, comparisonPoint));
				int32_t orientation = mapConstraintToOrientation(constraint);
				$nc(this->dragWindow)->setOrientation(orientation);
				$nc(this->dragWindow)->setBorderColor(this->dockingBorderColor);
			} else {
				$nc(this->dragWindow)->setBackground($(getFloatingColor()));
				$nc(this->dragWindow)->setBorderColor(this->floatingBorderColor);
				$nc(this->dragWindow)->setOrientation($nc(this->toolBar)->getOrientation());
			}
			$nc(this->dragWindow)->setLocation(dragPoint->x, dragPoint->y);
			if ($nc(this->dragWindow)->isVisible() == false) {
				$var($Dimension, size, $nc(this->toolBar)->getPreferredSize());
				$nc(this->dragWindow)->setSize($nc(size)->width, size->height);
				$nc(this->dragWindow)->show();
			}
		} catch ($IllegalComponentStateException&) {
			$catch();
		}
	}
}

void BasicToolBarUI::floatAt($Point* position, $Point* origin) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->toolBar)->isFloatable()) {
		try {
			$var($Point, offset, $nc(this->dragWindow)->getOffset());
			if (offset == nullptr) {
				$assign(offset, position);
				$nc(this->dragWindow)->setOffset(offset);
			}
			$var($Point, global, $new($Point, $nc(origin)->x + $nc(position)->x, origin->y + position->y));
			setFloatingLocation(global->x - $nc(offset)->x, global->y - offset->y);
			if (this->dockingSource != nullptr) {
				$var($Point, dockingPosition, $nc(this->dockingSource)->getLocationOnScreen());
				$var($Point, comparisonPoint, $new($Point, global->x - $nc(dockingPosition)->x, global->y - dockingPosition->y));
				if (canDock(this->dockingSource, comparisonPoint)) {
					setFloating(false, comparisonPoint);
				} else {
					setFloating(true, nullptr);
				}
			} else {
				setFloating(true, nullptr);
			}
			$nc(this->dragWindow)->setOffset(nullptr);
		} catch ($IllegalComponentStateException&) {
			$catch();
		}
	}
}

$BasicToolBarUI$Handler* BasicToolBarUI::getHandler() {
	if (this->handler == nullptr) {
		$set(this, handler, $new($BasicToolBarUI$Handler, this));
	}
	return this->handler;
}

$ContainerListener* BasicToolBarUI::createToolBarContListener() {
	return getHandler();
}

$FocusListener* BasicToolBarUI::createToolBarFocusListener() {
	return getHandler();
}

$PropertyChangeListener* BasicToolBarUI::createPropertyListener() {
	return getHandler();
}

$MouseInputListener* BasicToolBarUI::createDockingListener() {
	$set($nc($(getHandler())), tb, this->toolBar);
	return getHandler();
}

$WindowListener* BasicToolBarUI::createFrameListener() {
	return $new($BasicToolBarUI$FrameListener, this);
}

void BasicToolBarUI::paintDragWindow($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->setColor($($nc(this->dragWindow)->getBackground()));
	int32_t w = $nc(this->dragWindow)->getWidth();
	int32_t h = $nc(this->dragWindow)->getHeight();
	g->fillRect(0, 0, w, h);
	g->setColor($($nc(this->dragWindow)->getBorderColor()));
	g->drawRect(0, 0, w - 1, h - 1);
}

void clinit$BasicToolBarUI($Class* class$) {
	$assignStatic(BasicToolBarUI::IS_ROLLOVER, "JToolBar.isRollover"_s);
	$assignStatic(BasicToolBarUI::FOCUSED_COMP_INDEX, "JToolBar.focusedCompIndex"_s);
}

BasicToolBarUI::BasicToolBarUI() {
}

$Class* BasicToolBarUI::load$($String* name, bool initialize) {
	$loadClass(BasicToolBarUI, name, initialize, &_BasicToolBarUI_ClassInfo_, clinit$BasicToolBarUI, allocate$BasicToolBarUI);
	return class$;
}

$Class* BasicToolBarUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax