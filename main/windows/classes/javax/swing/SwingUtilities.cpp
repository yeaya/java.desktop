#include <javax/swing/SwingUtilities.h>

#include <java/applet/Applet.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/IllegalComponentStateException.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <java/awt/event/WindowListener.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/CellRendererPane.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent$ActionStandin.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLayer.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/RootPaneContainer.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities$SharedOwnerFrame.h>
#include <javax/swing/TransferHandler$SwingDropTarget.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/event/MenuDragMouseEvent.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/text/View.h>
#include <sun/awt/AWTAccessor$MouseEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef ACTION_COMMAND_KEY
#undef ACTION_PERFORMED
#undef BUTTON1
#undef BUTTON1_DOWN_MASK
#undef BUTTON2
#undef BUTTON2_DOWN_MASK
#undef BUTTON3
#undef BUTTON3_DOWN_MASK
#undef CENTER
#undef CHAR_UNDEFINED
#undef KEY_PRESSED
#undef LEADING
#undef LEFT
#undef MOUSE_CLICKED
#undef MOUSE_DRAGGED
#undef MOUSE_ENTERED
#undef MOUSE_EXITED
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED
#undef RIGHT
#undef TOP
#undef TRAILING
#undef X_AXIS
#undef Y_AXIS

using $ComponentArray = $Array<::java::awt::Component>;
using $RectangleArray = $Array<::java::awt::Rectangle>;
using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $Applet = ::java::applet::Applet;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $EventQueue = ::java::awt::EventQueue;
using $FontMetrics = ::java::awt::FontMetrics;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $IllegalComponentStateException = ::java::awt::IllegalComponentStateException;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $WindowListener = ::java::awt::event::WindowListener;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $StringBuffer = ::java::lang::StringBuffer;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $CellRendererPane = ::javax::swing::CellRendererPane;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$ActionStandin = ::javax::swing::JComponent$ActionStandin;
using $JLayer = ::javax::swing::JLayer;
using $JMenu = ::javax::swing::JMenu;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JRootPane = ::javax::swing::JRootPane;
using $JViewport = ::javax::swing::JViewport;
using $KeyStroke = ::javax::swing::KeyStroke;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $RootPaneContainer = ::javax::swing::RootPaneContainer;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities$SharedOwnerFrame = ::javax::swing::SwingUtilities$SharedOwnerFrame;
using $TransferHandler = ::javax::swing::TransferHandler;
using $TransferHandler$SwingDropTarget = ::javax::swing::TransferHandler$SwingDropTarget;
using $MenuDragMouseEvent = ::javax::swing::event::MenuDragMouseEvent;
using $UIResource = ::javax::swing::plaf::UIResource;
using $View = ::javax::swing::text::View;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MouseEventAccessor = ::sun::awt::AWTAccessor$MouseEventAccessor;
using $AppContext = ::sun::awt::AppContext;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {

$CompoundAttribute _SwingUtilities_MethodAnnotations_findFocusOwner19[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _SwingUtilities_FieldInfo_[] = {
	{"canAccessEventQueue", "Z", nullptr, $PRIVATE | $STATIC, $staticField(SwingUtilities, canAccessEventQueue)},
	{"eventQueueTested", "Z", nullptr, $PRIVATE | $STATIC, $staticField(SwingUtilities, eventQueueTested)},
	{"suppressDropSupport", "Z", nullptr, $PRIVATE | $STATIC, $staticField(SwingUtilities, suppressDropSupport)},
	{"checkedSuppressDropSupport", "Z", nullptr, $PRIVATE | $STATIC, $staticField(SwingUtilities, checkedSuppressDropSupport)},
	{"sharedOwnerFrameKey", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SwingUtilities, sharedOwnerFrameKey)},
	{}
};

$MethodInfo _SwingUtilities_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SwingUtilities::*)()>(&SwingUtilities::init$))},
	{"appContextGet", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)(Object$*)>(&SwingUtilities::appContextGet))},
	{"appContextPut", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)(Object$*,Object$*)>(&SwingUtilities::appContextPut))},
	{"appContextRemove", "(Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)(Object$*)>(&SwingUtilities::appContextRemove))},
	{"calculateInnerArea", "(Ljavax/swing/JComponent;Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Rectangle*(*)($JComponent*,$Rectangle*)>(&SwingUtilities::calculateInnerArea))},
	{"checkMouseButton", "(Ljava/awt/event/MouseEvent;II)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($MouseEvent*,int32_t,int32_t)>(&SwingUtilities::checkMouseButton))},
	{"computeDifference", "(Ljava/awt/Rectangle;Ljava/awt/Rectangle;)[Ljava/awt/Rectangle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$RectangleArray*(*)($Rectangle*,$Rectangle*)>(&SwingUtilities::computeDifference))},
	{"computeIntersection", "(IIIILjava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Rectangle*(*)(int32_t,int32_t,int32_t,int32_t,$Rectangle*)>(&SwingUtilities::computeIntersection))},
	{"computeStringWidth", "(Ljava/awt/FontMetrics;Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($FontMetrics*,$String*)>(&SwingUtilities::computeStringWidth))},
	{"computeUnion", "(IIIILjava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Rectangle*(*)(int32_t,int32_t,int32_t,int32_t,$Rectangle*)>(&SwingUtilities::computeUnion))},
	{"convertMouseEvent", "(Ljava/awt/Component;Ljava/awt/event/MouseEvent;Ljava/awt/Component;)Ljava/awt/event/MouseEvent;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MouseEvent*(*)($Component*,$MouseEvent*,$Component*)>(&SwingUtilities::convertMouseEvent))},
	{"convertPoint", "(Ljava/awt/Component;Ljava/awt/Point;Ljava/awt/Component;)Ljava/awt/Point;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Point*(*)($Component*,$Point*,$Component*)>(&SwingUtilities::convertPoint))},
	{"convertPoint", "(Ljava/awt/Component;IILjava/awt/Component;)Ljava/awt/Point;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Point*(*)($Component*,int32_t,int32_t,$Component*)>(&SwingUtilities::convertPoint))},
	{"convertPointFromScreen", "(Ljava/awt/Point;Ljava/awt/Component;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Point*,$Component*)>(&SwingUtilities::convertPointFromScreen))},
	{"convertPointToScreen", "(Ljava/awt/Point;Ljava/awt/Component;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Point*,$Component*)>(&SwingUtilities::convertPointToScreen))},
	{"convertRectangle", "(Ljava/awt/Component;Ljava/awt/Rectangle;Ljava/awt/Component;)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Rectangle*(*)($Component*,$Rectangle*,$Component*)>(&SwingUtilities::convertRectangle))},
	{"convertScreenLocationToParent", "(Ljava/awt/Container;II)Ljava/awt/Point;", nullptr, $STATIC, $method(static_cast<$Point*(*)($Container*,int32_t,int32_t)>(&SwingUtilities::convertScreenLocationToParent))},
	{"doesIconReferenceImage", "(Ljavax/swing/Icon;Ljava/awt/Image;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Icon*,$Image*)>(&SwingUtilities::doesIconReferenceImage))},
	{"findDisplayedMnemonicIndex", "(Ljava/lang/String;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($String*,int32_t)>(&SwingUtilities::findDisplayedMnemonicIndex))},
	{"findFocusOwner", "(Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<$Component*(*)($Component*)>(&SwingUtilities::findFocusOwner)), nullptr, nullptr, _SwingUtilities_MethodAnnotations_findFocusOwner19},
	{"getAccessibleAt", "(Ljava/awt/Component;Ljava/awt/Point;)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Accessible*(*)($Component*,$Point*)>(&SwingUtilities::getAccessibleAt))},
	{"getAccessibleChild", "(Ljava/awt/Component;I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Accessible*(*)($Component*,int32_t)>(&SwingUtilities::getAccessibleChild))},
	{"getAccessibleChildrenCount", "(Ljava/awt/Component;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Component*)>(&SwingUtilities::getAccessibleChildrenCount))},
	{"getAccessibleIndexInParent", "(Ljava/awt/Component;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Component*)>(&SwingUtilities::getAccessibleIndexInParent))},
	{"getAccessibleStateSet", "(Ljava/awt/Component;)Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AccessibleStateSet*(*)($Component*)>(&SwingUtilities::getAccessibleStateSet))},
	{"getAncestorNamed", "(Ljava/lang/String;Ljava/awt/Component;)Ljava/awt/Container;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Container*(*)($String*,$Component*)>(&SwingUtilities::getAncestorNamed))},
	{"getAncestorOfClass", "(Ljava/lang/Class;Ljava/awt/Component;)Ljava/awt/Container;", "(Ljava/lang/Class<*>;Ljava/awt/Component;)Ljava/awt/Container;", $PUBLIC | $STATIC, $method(static_cast<$Container*(*)($Class*,$Component*)>(&SwingUtilities::getAncestorOfClass))},
	{"getCellRendererPane", "(Ljava/awt/Component;Ljava/awt/Container;)Ljavax/swing/CellRendererPane;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$CellRendererPane*(*)($Component*,$Container*)>(&SwingUtilities::getCellRendererPane))},
	{"getDeepestComponentAt", "(Ljava/awt/Component;II)Ljava/awt/Component;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Component*(*)($Component*,int32_t,int32_t)>(&SwingUtilities::getDeepestComponentAt))},
	{"getLocalBounds", "(Ljava/awt/Component;)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Rectangle*(*)($Component*)>(&SwingUtilities::getLocalBounds))},
	{"getPaintingOrigin", "(Ljavax/swing/JComponent;)Ljavax/swing/JComponent;", nullptr, $STATIC, $method(static_cast<$JComponent*(*)($JComponent*)>(&SwingUtilities::getPaintingOrigin))},
	{"getRoot", "(Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Component*(*)($Component*)>(&SwingUtilities::getRoot))},
	{"getRootPane", "(Ljava/awt/Component;)Ljavax/swing/JRootPane;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JRootPane*(*)($Component*)>(&SwingUtilities::getRootPane))},
	{"getSharedOwnerFrame", "()Ljava/awt/Frame;", nullptr, $STATIC, $method(static_cast<$Frame*(*)()>(&SwingUtilities::getSharedOwnerFrame)), "java.awt.HeadlessException"},
	{"getSharedOwnerFrameShutdownListener", "()Ljava/awt/event/WindowListener;", nullptr, $STATIC, $method(static_cast<$WindowListener*(*)()>(&SwingUtilities::getSharedOwnerFrameShutdownListener)), "java.awt.HeadlessException"},
	{"getSuppressDropTarget", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&SwingUtilities::getSuppressDropTarget))},
	{"getUIActionMap", "(Ljavax/swing/JComponent;)Ljavax/swing/ActionMap;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ActionMap*(*)($JComponent*)>(&SwingUtilities::getUIActionMap))},
	{"getUIInputMap", "(Ljavax/swing/JComponent;I)Ljavax/swing/InputMap;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$InputMap*(*)($JComponent*,int32_t)>(&SwingUtilities::getUIInputMap))},
	{"getUnwrappedParent", "(Ljava/awt/Component;)Ljava/awt/Container;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Container*(*)($Component*)>(&SwingUtilities::getUnwrappedParent))},
	{"getUnwrappedView", "(Ljavax/swing/JViewport;)Ljava/awt/Component;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Component*(*)($JViewport*)>(&SwingUtilities::getUnwrappedView))},
	{"getValidateRoot", "(Ljava/awt/Container;Z)Ljava/awt/Container;", nullptr, $STATIC, $method(static_cast<$Container*(*)($Container*,bool)>(&SwingUtilities::getValidateRoot))},
	{"getWindowAncestor", "(Ljava/awt/Component;)Ljava/awt/Window;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Window*(*)($Component*)>(&SwingUtilities::getWindowAncestor))},
	{"installSwingDropTargetAsNecessary", "(Ljava/awt/Component;Ljavax/swing/TransferHandler;)V", nullptr, $STATIC, $method(static_cast<void(*)($Component*,$TransferHandler*)>(&SwingUtilities::installSwingDropTargetAsNecessary))},
	{"invokeAndWait", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Runnable*)>(&SwingUtilities::invokeAndWait)), "java.lang.InterruptedException,java.lang.reflect.InvocationTargetException"},
	{"invokeLater", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Runnable*)>(&SwingUtilities::invokeLater))},
	{"isDescendingFrom", "(Ljava/awt/Component;Ljava/awt/Component;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Component*,$Component*)>(&SwingUtilities::isDescendingFrom))},
	{"isEventDispatchThread", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&SwingUtilities::isEventDispatchThread))},
	{"isLeftMouseButton", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($MouseEvent*)>(&SwingUtilities::isLeftMouseButton))},
	{"isLeftToRight", "(Ljava/awt/Component;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Component*)>(&SwingUtilities::isLeftToRight))},
	{"isMiddleMouseButton", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($MouseEvent*)>(&SwingUtilities::isMiddleMouseButton))},
	{"isRectangleContainingRectangle", "(Ljava/awt/Rectangle;Ljava/awt/Rectangle;)Z", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<bool(*)($Rectangle*,$Rectangle*)>(&SwingUtilities::isRectangleContainingRectangle))},
	{"isRightMouseButton", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($MouseEvent*)>(&SwingUtilities::isRightMouseButton))},
	{"isValidKeyEventForKeyBindings", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($KeyEvent*)>(&SwingUtilities::isValidKeyEventForKeyBindings))},
	{"layoutCompoundLabel", "(Ljavax/swing/JComponent;Ljava/awt/FontMetrics;Ljava/lang/String;Ljavax/swing/Icon;IIIILjava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($JComponent*,$FontMetrics*,$String*,$Icon*,int32_t,int32_t,int32_t,int32_t,$Rectangle*,$Rectangle*,$Rectangle*,int32_t)>(&SwingUtilities::layoutCompoundLabel))},
	{"layoutCompoundLabel", "(Ljava/awt/FontMetrics;Ljava/lang/String;Ljavax/swing/Icon;IIIILjava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($FontMetrics*,$String*,$Icon*,int32_t,int32_t,int32_t,int32_t,$Rectangle*,$Rectangle*,$Rectangle*,int32_t)>(&SwingUtilities::layoutCompoundLabel))},
	{"layoutCompoundLabelImpl", "(Ljavax/swing/JComponent;Ljava/awt/FontMetrics;Ljava/lang/String;Ljavax/swing/Icon;IIIILjava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($JComponent*,$FontMetrics*,$String*,$Icon*,int32_t,int32_t,int32_t,int32_t,$Rectangle*,$Rectangle*,$Rectangle*,int32_t)>(&SwingUtilities::layoutCompoundLabelImpl))},
	{"loadSystemClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $STATIC, $method(static_cast<$Class*(*)($String*)>(&SwingUtilities::loadSystemClass)), "java.lang.ClassNotFoundException"},
	{"notifyAction", "(Ljavax/swing/Action;Ljavax/swing/KeyStroke;Ljava/awt/event/KeyEvent;Ljava/lang/Object;I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Action*,$KeyStroke*,$KeyEvent*,Object$*,int32_t)>(&SwingUtilities::notifyAction))},
	{"paintComponent", "(Ljava/awt/Graphics;Ljava/awt/Component;Ljava/awt/Container;IIII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Graphics*,$Component*,$Container*,int32_t,int32_t,int32_t,int32_t)>(&SwingUtilities::paintComponent))},
	{"paintComponent", "(Ljava/awt/Graphics;Ljava/awt/Component;Ljava/awt/Container;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Graphics*,$Component*,$Container*,$Rectangle*)>(&SwingUtilities::paintComponent))},
	{"processKeyBindings", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($KeyEvent*)>(&SwingUtilities::processKeyBindings))},
	{"replaceUIActionMap", "(Ljavax/swing/JComponent;Ljavax/swing/ActionMap;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JComponent*,$ActionMap*)>(&SwingUtilities::replaceUIActionMap))},
	{"replaceUIInputMap", "(Ljavax/swing/JComponent;ILjavax/swing/InputMap;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JComponent*,int32_t,$InputMap*)>(&SwingUtilities::replaceUIInputMap))},
	{"updateComponentTreeUI", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Component*)>(&SwingUtilities::updateComponentTreeUI))},
	{"updateComponentTreeUI0", "(Ljava/awt/Component;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Component*)>(&SwingUtilities::updateComponentTreeUI0))},
	{"updateRendererOrEditorUI", "(Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)(Object$*)>(&SwingUtilities::updateRendererOrEditorUI))},
	{"windowForComponent", "(Ljava/awt/Component;)Ljava/awt/Window;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Window*(*)($Component*)>(&SwingUtilities::windowForComponent))},
	{}
};

$InnerClassInfo _SwingUtilities_InnerClassesInfo_[] = {
	{"javax.swing.SwingUtilities$SharedOwnerFrame", "javax.swing.SwingUtilities", "SharedOwnerFrame", $STATIC},
	{}
};

$ClassInfo _SwingUtilities_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.SwingUtilities",
	"java.lang.Object",
	"javax.swing.SwingConstants",
	_SwingUtilities_FieldInfo_,
	_SwingUtilities_MethodInfo_,
	nullptr,
	nullptr,
	_SwingUtilities_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.SwingUtilities$SharedOwnerFrame"
};

$Object* allocate$SwingUtilities($Class* clazz) {
	return $of($alloc(SwingUtilities));
}

bool SwingUtilities::canAccessEventQueue = false;
bool SwingUtilities::eventQueueTested = false;

bool SwingUtilities::suppressDropSupport = false;

bool SwingUtilities::checkedSuppressDropSupport = false;
$Object* SwingUtilities::sharedOwnerFrameKey = nullptr;

bool SwingUtilities::getSuppressDropTarget() {
	$init(SwingUtilities);
	$beforeCallerSensitive();
	if (!SwingUtilities::checkedSuppressDropSupport) {
		SwingUtilities::suppressDropSupport = $nc($($Boolean::valueOf($cast($String, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "suppressSwingDropSupport"_s))))))))->booleanValue();
		SwingUtilities::checkedSuppressDropSupport = true;
	}
	return SwingUtilities::suppressDropSupport;
}

void SwingUtilities::installSwingDropTargetAsNecessary($Component* c, $TransferHandler* t) {
	$init(SwingUtilities);
	if (!getSuppressDropTarget()) {
		$var($DropTarget, dropHandler, $nc(c)->getDropTarget());
		if ((dropHandler == nullptr) || ($instanceOf($UIResource, dropHandler))) {
			if (t == nullptr) {
				c->setDropTarget(nullptr);
			} else if (!$GraphicsEnvironment::isHeadless()) {
				c->setDropTarget($$new($TransferHandler$SwingDropTarget, c));
			}
		}
	}
}

bool SwingUtilities::isRectangleContainingRectangle($Rectangle* a, $Rectangle* b) {
	$init(SwingUtilities);
	return $nc(b)->x >= $nc(a)->x && (b->x + b->width) <= (a->x + a->width) && b->y >= a->y && (b->y + b->height) <= (a->y + a->height);
}

$Rectangle* SwingUtilities::getLocalBounds($Component* aComponent) {
	$init(SwingUtilities);
	$var($Rectangle, b, $new($Rectangle, $($nc(aComponent)->getBounds())));
	b->x = (b->y = 0);
	return b;
}

$Window* SwingUtilities::getWindowAncestor($Component* c) {
	$init(SwingUtilities);
	{
		$var($Container, p, $nc(c)->getParent());
		for (; p != nullptr; $assign(p, $nc(p)->getParent())) {
			if ($instanceOf($Window, p)) {
				return $cast($Window, p);
			}
		}
	}
	return nullptr;
}

$Point* SwingUtilities::convertScreenLocationToParent($Container* parent, int32_t x, int32_t y) {
	$init(SwingUtilities);
	{
		$var($Container, p, parent);
		for (; p != nullptr; $assign(p, $nc(p)->getParent())) {
			if ($instanceOf($Window, p)) {
				$var($Point, point, $new($Point, x, y));
				SwingUtilities::convertPointFromScreen(point, parent);
				return point;
			}
		}
	}
	$throwNew($Error, "convertScreenLocationToParent: no window ancestor"_s);
}

$Point* SwingUtilities::convertPoint($Component* source$renamed, $Point* aPoint, $Component* destination$renamed) {
	$init(SwingUtilities);
	$var($Component, destination, destination$renamed);
	$var($Component, source, source$renamed);
	$var($Point, p, nullptr);
	if (source == nullptr && destination == nullptr) {
		return aPoint;
	}
	if (source == nullptr) {
		$assign(source, getWindowAncestor(destination));
		if (source == nullptr) {
			$throwNew($Error, "Source component not connected to component tree hierarchy"_s);
		}
	}
	$assign(p, $new($Point, aPoint));
	convertPointToScreen(p, source);
	if (destination == nullptr) {
		$assign(destination, getWindowAncestor(source));
		if (destination == nullptr) {
			$throwNew($Error, "Destination component not connected to component tree hierarchy"_s);
		}
	}
	convertPointFromScreen(p, destination);
	return p;
}

$Point* SwingUtilities::convertPoint($Component* source, int32_t x, int32_t y, $Component* destination) {
	$init(SwingUtilities);
	$var($Point, point, $new($Point, x, y));
	return convertPoint(source, point, destination);
}

$Rectangle* SwingUtilities::convertRectangle($Component* source, $Rectangle* aRectangle, $Component* destination) {
	$init(SwingUtilities);
	$var($Point, point, $new($Point, $nc(aRectangle)->x, aRectangle->y));
	$assign(point, convertPoint(source, point, destination));
	return $new($Rectangle, $nc(point)->x, point->y, $nc(aRectangle)->width, aRectangle->height);
}

$Container* SwingUtilities::getAncestorOfClass($Class* c, $Component* comp) {
	$init(SwingUtilities);
	if (comp == nullptr || c == nullptr) {
		return nullptr;
	}
	$var($Container, parent, $nc(comp)->getParent());
	while (parent != nullptr && !($nc(c)->isInstance(parent))) {
		$assign(parent, parent->getParent());
	}
	return parent;
}

$Container* SwingUtilities::getAncestorNamed($String* name, $Component* comp) {
	$init(SwingUtilities);
	if (comp == nullptr || name == nullptr) {
		return nullptr;
	}
	$var($Container, parent, $nc(comp)->getParent());
	while (parent != nullptr && !($nc(name)->equals($(parent->getName())))) {
		$assign(parent, parent->getParent());
	}
	return parent;
}

$Component* SwingUtilities::getDeepestComponentAt($Component* parent, int32_t x, int32_t y) {
	$init(SwingUtilities);
	if (!$nc(parent)->contains(x, y)) {
		return nullptr;
	}
	if ($instanceOf($Container, parent)) {
		$var($ComponentArray, components, $nc(($cast($Container, parent)))->getComponents());
		{
			$var($ComponentArray, arr$, components);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, comp, arr$->get(i$));
				{
					if (comp != nullptr && comp->isVisible()) {
						$var($Point, loc, comp->getLocation());
						if ($instanceOf($Container, comp)) {
							$assign(comp, getDeepestComponentAt(comp, x - $nc(loc)->x, y - loc->y));
						} else {
							$assign(comp, comp->getComponentAt(x - $nc(loc)->x, y - loc->y));
						}
						if (comp != nullptr && comp->isVisible()) {
							return comp;
						}
					}
				}
			}
		}
	}
	return parent;
}

$MouseEvent* SwingUtilities::convertMouseEvent($Component* source, $MouseEvent* sourceEvent, $Component* destination) {
	$init(SwingUtilities);
	int32_t var$0 = $nc(sourceEvent)->getX();
	$var($Point, p, convertPoint(source, $$new($Point, var$0, sourceEvent->getY()), destination));
	$var($Component, newSource, nullptr);
	if (destination != nullptr) {
		$assign(newSource, destination);
	} else {
		$assign(newSource, source);
	}
	$var($MouseEvent, newEvent, nullptr);
	if ($instanceOf($MouseWheelEvent, sourceEvent)) {
		$var($MouseWheelEvent, sourceWheelEvent, $cast($MouseWheelEvent, sourceEvent));
		$var($Component, var$1, newSource);
		int32_t var$2 = $nc(sourceWheelEvent)->getID();
		int64_t var$3 = sourceWheelEvent->getWhen();
		int32_t var$5 = sourceWheelEvent->getModifiers();
		int32_t var$4 = var$5 | sourceWheelEvent->getModifiersEx();
		int32_t var$6 = $nc(p)->x;
		int32_t var$7 = p->y;
		int32_t var$8 = sourceWheelEvent->getXOnScreen();
		int32_t var$9 = sourceWheelEvent->getYOnScreen();
		int32_t var$10 = sourceWheelEvent->getClickCount();
		bool var$11 = sourceWheelEvent->isPopupTrigger();
		int32_t var$12 = sourceWheelEvent->getScrollType();
		int32_t var$13 = sourceWheelEvent->getScrollAmount();
		int32_t var$14 = sourceWheelEvent->getWheelRotation();
		$assign(newEvent, $new($MouseWheelEvent, var$1, var$2, var$3, var$4, var$6, var$7, var$8, var$9, var$10, var$11, var$12, var$13, var$14, sourceWheelEvent->getPreciseWheelRotation()));
	} else if ($instanceOf($MenuDragMouseEvent, sourceEvent)) {
		$var($MenuDragMouseEvent, sourceMenuDragEvent, $cast($MenuDragMouseEvent, sourceEvent));
		$var($Component, var$15, newSource);
		int32_t var$16 = $nc(sourceMenuDragEvent)->getID();
		int64_t var$17 = sourceMenuDragEvent->getWhen();
		int32_t var$19 = sourceMenuDragEvent->getModifiers();
		int32_t var$18 = var$19 | sourceMenuDragEvent->getModifiersEx();
		int32_t var$20 = $nc(p)->x;
		int32_t var$21 = p->y;
		int32_t var$22 = sourceMenuDragEvent->getXOnScreen();
		int32_t var$23 = sourceMenuDragEvent->getYOnScreen();
		int32_t var$24 = sourceMenuDragEvent->getClickCount();
		bool var$25 = sourceMenuDragEvent->isPopupTrigger();
		$var($MenuElementArray, var$26, sourceMenuDragEvent->getPath());
		$assign(newEvent, $new($MenuDragMouseEvent, var$15, var$16, var$17, var$18, var$20, var$21, var$22, var$23, var$24, var$25, var$26, $(sourceMenuDragEvent->getMenuSelectionManager())));
	} else {
		$var($Component, var$27, newSource);
		int32_t var$28 = $nc(sourceEvent)->getID();
		int64_t var$29 = sourceEvent->getWhen();
		int32_t var$31 = sourceEvent->getModifiers();
		int32_t var$30 = var$31 | sourceEvent->getModifiersEx();
		int32_t var$32 = $nc(p)->x;
		int32_t var$33 = p->y;
		int32_t var$34 = sourceEvent->getXOnScreen();
		int32_t var$35 = sourceEvent->getYOnScreen();
		int32_t var$36 = sourceEvent->getClickCount();
		bool var$37 = sourceEvent->isPopupTrigger();
		$assign(newEvent, $new($MouseEvent, var$27, var$28, var$29, var$30, var$32, var$33, var$34, var$35, var$36, var$37, sourceEvent->getButton()));
		$var($AWTAccessor$MouseEventAccessor, meAccessor, $AWTAccessor::getMouseEventAccessor());
		$nc(meAccessor)->setCausedByTouchEvent(newEvent, meAccessor->isCausedByTouchEvent(sourceEvent));
	}
	return newEvent;
}

void SwingUtilities::convertPointToScreen($Point* p, $Component* c$renamed) {
	$init(SwingUtilities);
	$var($Component, c, c$renamed);
	$var($Rectangle, b, nullptr);
	int32_t x = 0;
	int32_t y = 0;
	do {
		if ($instanceOf($JComponent, c)) {
			x = $nc(c)->getX();
			y = c->getY();
		} else if ($instanceOf($Applet, c) || $instanceOf($Window, c)) {
			try {
				$var($Point, pp, $nc(c)->getLocationOnScreen());
				x = $nc(pp)->x;
				y = pp->y;
			} catch ($IllegalComponentStateException&) {
				$var($IllegalComponentStateException, icse, $catch());
				x = $nc(c)->getX();
				y = c->getY();
			}
		} else {
			x = $nc(c)->getX();
			y = c->getY();
		}
		$nc(p)->x += x;
		p->y += y;
		if ($instanceOf($Window, c) || $instanceOf($Applet, c)) {
			break;
		}
		$assign(c, $nc(c)->getParent());
	} while (c != nullptr);
}

void SwingUtilities::convertPointFromScreen($Point* p, $Component* c$renamed) {
	$init(SwingUtilities);
	$var($Component, c, c$renamed);
	$var($Rectangle, b, nullptr);
	int32_t x = 0;
	int32_t y = 0;
	do {
		if ($instanceOf($JComponent, c)) {
			x = $nc(c)->getX();
			y = c->getY();
		} else if ($instanceOf($Applet, c) || $instanceOf($Window, c)) {
			try {
				$var($Point, pp, $nc(c)->getLocationOnScreen());
				x = $nc(pp)->x;
				y = pp->y;
			} catch ($IllegalComponentStateException&) {
				$var($IllegalComponentStateException, icse, $catch());
				x = $nc(c)->getX();
				y = c->getY();
			}
		} else {
			x = $nc(c)->getX();
			y = c->getY();
		}
		$nc(p)->x -= x;
		p->y -= y;
		if ($instanceOf($Window, c) || $instanceOf($Applet, c)) {
			break;
		}
		$assign(c, $nc(c)->getParent());
	} while (c != nullptr);
}

$Window* SwingUtilities::windowForComponent($Component* c) {
	$init(SwingUtilities);
	return getWindowAncestor(c);
}

bool SwingUtilities::isDescendingFrom($Component* a, $Component* b) {
	$init(SwingUtilities);
	if (a == b) {
		return true;
	}
	{
		$var($Container, p, $nc(a)->getParent());
		for (; p != nullptr; $assign(p, $nc(p)->getParent())) {
			if ($equals(p, b)) {
				return true;
			}
		}
	}
	return false;
}

$Rectangle* SwingUtilities::computeIntersection(int32_t x, int32_t y, int32_t width, int32_t height, $Rectangle* dest) {
	$init(SwingUtilities);
	int32_t x1 = (x > $nc(dest)->x) ? x : $nc(dest)->x;
	int32_t x2 = ((x + width) < (dest->x + dest->width)) ? (x + width) : (dest->x + dest->width);
	int32_t y1 = (y > dest->y) ? y : dest->y;
	int32_t y2 = ((y + height) < (dest->y + dest->height) ? (y + height) : (dest->y + dest->height));
	dest->x = x1;
	dest->y = y1;
	dest->width = x2 - x1;
	dest->height = y2 - y1;
	if (dest->width < 0 || dest->height < 0) {
		dest->x = (dest->y = (dest->width = (dest->height = 0)));
	}
	return dest;
}

$Rectangle* SwingUtilities::computeUnion(int32_t x, int32_t y, int32_t width, int32_t height, $Rectangle* dest) {
	$init(SwingUtilities);
	int32_t x1 = (x < $nc(dest)->x) ? x : $nc(dest)->x;
	int32_t x2 = ((x + width) > (dest->x + dest->width)) ? (x + width) : (dest->x + dest->width);
	int32_t y1 = (y < dest->y) ? y : dest->y;
	int32_t y2 = ((y + height) > (dest->y + dest->height)) ? (y + height) : (dest->y + dest->height);
	dest->x = x1;
	dest->y = y1;
	dest->width = (x2 - x1);
	dest->height = (y2 - y1);
	return dest;
}

$RectangleArray* SwingUtilities::computeDifference($Rectangle* rectA, $Rectangle* rectB) {
	$init(SwingUtilities);
	bool var$0 = rectB == nullptr || !$nc(rectA)->intersects(rectB);
	if (var$0 || isRectangleContainingRectangle(rectB, rectA)) {
		return $new($RectangleArray, 0);
	}
	$var($Rectangle, t, $new($Rectangle));
	$var($Rectangle, a, nullptr);
	$var($Rectangle, b, nullptr);
	$var($Rectangle, c, nullptr);
	$var($Rectangle, d, nullptr);
	$var($RectangleArray, result, nullptr);
	int32_t rectCount = 0;
	if (isRectangleContainingRectangle(rectA, rectB)) {
		t->x = $nc(rectA)->x;
		t->y = rectA->y;
		t->width = $nc(rectB)->x - rectA->x;
		t->height = rectA->height;
		if (t->width > 0 && t->height > 0) {
			$assign(a, $new($Rectangle, t));
			++rectCount;
		}
		t->x = rectB->x;
		t->y = rectA->y;
		t->width = rectB->width;
		t->height = rectB->y - rectA->y;
		if (t->width > 0 && t->height > 0) {
			$assign(b, $new($Rectangle, t));
			++rectCount;
		}
		t->x = rectB->x;
		t->y = rectB->y + rectB->height;
		t->width = rectB->width;
		t->height = rectA->y + rectA->height - (rectB->y + rectB->height);
		if (t->width > 0 && t->height > 0) {
			$assign(c, $new($Rectangle, t));
			++rectCount;
		}
		t->x = rectB->x + rectB->width;
		t->y = rectA->y;
		t->width = rectA->x + rectA->width - (rectB->x + rectB->width);
		t->height = rectA->height;
		if (t->width > 0 && t->height > 0) {
			$assign(d, $new($Rectangle, t));
			++rectCount;
		}
	} else if (rectB->x <= rectA->x && rectB->y <= rectA->y) {
		if ((rectB->x + rectB->width) > (rectA->x + rectA->width)) {
			t->x = rectA->x;
			t->y = rectB->y + rectB->height;
			t->width = rectA->width;
			t->height = rectA->y + rectA->height - (rectB->y + rectB->height);
			if (t->width > 0 && t->height > 0) {
				$assign(a, t);
				++rectCount;
			}
		} else if ((rectB->y + rectB->height) > (rectA->y + rectA->height)) {
			t->setBounds((rectB->x + rectB->width), rectA->y, (rectA->x + rectA->width) - (rectB->x + rectB->width), rectA->height);
			if (t->width > 0 && t->height > 0) {
				$assign(a, t);
				++rectCount;
			}
		} else {
			t->setBounds((rectB->x + rectB->width), rectA->y, (rectA->x + rectA->width) - (rectB->x + rectB->width), (rectB->y + rectB->height) - rectA->y);
			if (t->width > 0 && t->height > 0) {
				$assign(a, $new($Rectangle, t));
				++rectCount;
			}
			t->setBounds(rectA->x, (rectB->y + rectB->height), rectA->width, (rectA->y + rectA->height) - (rectB->y + rectB->height));
			if (t->width > 0 && t->height > 0) {
				$assign(b, $new($Rectangle, t));
				++rectCount;
			}
		}
	} else if (rectB->x <= rectA->x && (rectB->y + rectB->height) >= (rectA->y + rectA->height)) {
		if ((rectB->x + rectB->width) > (rectA->x + rectA->width)) {
			t->setBounds(rectA->x, rectA->y, rectA->width, rectB->y - rectA->y);
			if (t->width > 0 && t->height > 0) {
				$assign(a, t);
				++rectCount;
			}
		} else {
			t->setBounds(rectA->x, rectA->y, rectA->width, rectB->y - rectA->y);
			if (t->width > 0 && t->height > 0) {
				$assign(a, $new($Rectangle, t));
				++rectCount;
			}
			t->setBounds((rectB->x + rectB->width), rectB->y, (rectA->x + rectA->width) - (rectB->x + rectB->width), (rectA->y + rectA->height) - rectB->y);
			if (t->width > 0 && t->height > 0) {
				$assign(b, $new($Rectangle, t));
				++rectCount;
			}
		}
	} else if (rectB->x <= rectA->x) {
		if ((rectB->x + rectB->width) >= (rectA->x + rectA->width)) {
			t->setBounds(rectA->x, rectA->y, rectA->width, rectB->y - rectA->y);
			if (t->width > 0 && t->height > 0) {
				$assign(a, $new($Rectangle, t));
				++rectCount;
			}
			t->setBounds(rectA->x, (rectB->y + rectB->height), rectA->width, (rectA->y + rectA->height) - (rectB->y + rectB->height));
			if (t->width > 0 && t->height > 0) {
				$assign(b, $new($Rectangle, t));
				++rectCount;
			}
		} else {
			t->setBounds(rectA->x, rectA->y, rectA->width, rectB->y - rectA->y);
			if (t->width > 0 && t->height > 0) {
				$assign(a, $new($Rectangle, t));
				++rectCount;
			}
			t->setBounds((rectB->x + rectB->width), rectB->y, (rectA->x + rectA->width) - (rectB->x + rectB->width), rectB->height);
			if (t->width > 0 && t->height > 0) {
				$assign(b, $new($Rectangle, t));
				++rectCount;
			}
			t->setBounds(rectA->x, (rectB->y + rectB->height), rectA->width, (rectA->y + rectA->height) - (rectB->y + rectB->height));
			if (t->width > 0 && t->height > 0) {
				$assign(c, $new($Rectangle, t));
				++rectCount;
			}
		}
	} else if (rectB->x <= (rectA->x + rectA->width) && (rectB->x + rectB->width) > (rectA->x + rectA->width)) {
		if (rectB->y <= rectA->y && (rectB->y + rectB->height) > (rectA->y + rectA->height)) {
			t->setBounds(rectA->x, rectA->y, rectB->x - rectA->x, rectA->height);
			if (t->width > 0 && t->height > 0) {
				$assign(a, t);
				++rectCount;
			}
		} else if (rectB->y <= rectA->y) {
			t->setBounds(rectA->x, rectA->y, rectB->x - rectA->x, (rectB->y + rectB->height) - rectA->y);
			if (t->width > 0 && t->height > 0) {
				$assign(a, $new($Rectangle, t));
				++rectCount;
			}
			t->setBounds(rectA->x, (rectB->y + rectB->height), rectA->width, (rectA->y + rectA->height) - (rectB->y + rectB->height));
			if (t->width > 0 && t->height > 0) {
				$assign(b, $new($Rectangle, t));
				++rectCount;
			}
		} else if ((rectB->y + rectB->height) > (rectA->y + rectA->height)) {
			t->setBounds(rectA->x, rectA->y, rectA->width, rectB->y - rectA->y);
			if (t->width > 0 && t->height > 0) {
				$assign(a, $new($Rectangle, t));
				++rectCount;
			}
			t->setBounds(rectA->x, rectB->y, rectB->x - rectA->x, (rectA->y + rectA->height) - rectB->y);
			if (t->width > 0 && t->height > 0) {
				$assign(b, $new($Rectangle, t));
				++rectCount;
			}
		} else {
			t->setBounds(rectA->x, rectA->y, rectA->width, rectB->y - rectA->y);
			if (t->width > 0 && t->height > 0) {
				$assign(a, $new($Rectangle, t));
				++rectCount;
			}
			t->setBounds(rectA->x, rectB->y, rectB->x - rectA->x, rectB->height);
			if (t->width > 0 && t->height > 0) {
				$assign(b, $new($Rectangle, t));
				++rectCount;
			}
			t->setBounds(rectA->x, (rectB->y + rectB->height), rectA->width, (rectA->y + rectA->height) - (rectB->y + rectB->height));
			if (t->width > 0 && t->height > 0) {
				$assign(c, $new($Rectangle, t));
				++rectCount;
			}
		}
	} else if (rectB->x >= rectA->x && (rectB->x + rectB->width) <= (rectA->x + rectA->width)) {
		if (rectB->y <= rectA->y && (rectB->y + rectB->height) > (rectA->y + rectA->height)) {
			t->setBounds(rectA->x, rectA->y, rectB->x - rectA->x, rectA->height);
			if (t->width > 0 && t->height > 0) {
				$assign(a, $new($Rectangle, t));
				++rectCount;
			}
			t->setBounds((rectB->x + rectB->width), rectA->y, (rectA->x + rectA->width) - (rectB->x + rectB->width), rectA->height);
			if (t->width > 0 && t->height > 0) {
				$assign(b, $new($Rectangle, t));
				++rectCount;
			}
		} else if (rectB->y <= rectA->y) {
			t->setBounds(rectA->x, rectA->y, rectB->x - rectA->x, rectA->height);
			if (t->width > 0 && t->height > 0) {
				$assign(a, $new($Rectangle, t));
				++rectCount;
			}
			t->setBounds(rectB->x, (rectB->y + rectB->height), rectB->width, (rectA->y + rectA->height) - (rectB->y + rectB->height));
			if (t->width > 0 && t->height > 0) {
				$assign(b, $new($Rectangle, t));
				++rectCount;
			}
			t->setBounds((rectB->x + rectB->width), rectA->y, (rectA->x + rectA->width) - (rectB->x + rectB->width), rectA->height);
			if (t->width > 0 && t->height > 0) {
				$assign(c, $new($Rectangle, t));
				++rectCount;
			}
		} else {
			t->setBounds(rectA->x, rectA->y, rectB->x - rectA->x, rectA->height);
			if (t->width > 0 && t->height > 0) {
				$assign(a, $new($Rectangle, t));
				++rectCount;
			}
			t->setBounds(rectB->x, rectA->y, rectB->width, rectB->y - rectA->y);
			if (t->width > 0 && t->height > 0) {
				$assign(b, $new($Rectangle, t));
				++rectCount;
			}
			t->setBounds((rectB->x + rectB->width), rectA->y, (rectA->x + rectA->width) - (rectB->x + rectB->width), rectA->height);
			if (t->width > 0 && t->height > 0) {
				$assign(c, $new($Rectangle, t));
				++rectCount;
			}
		}
	}
	$assign(result, $new($RectangleArray, rectCount));
	rectCount = 0;
	if (a != nullptr) {
		result->set(rectCount++, a);
	}
	if (b != nullptr) {
		result->set(rectCount++, b);
	}
	if (c != nullptr) {
		result->set(rectCount++, c);
	}
	if (d != nullptr) {
		result->set(rectCount++, d);
	}
	return result;
}

bool SwingUtilities::checkMouseButton($MouseEvent* anEvent, int32_t mouseButton, int32_t mouseButtonDownMask) {
	$init(SwingUtilities);
	switch ($nc(anEvent)->getID()) {
	case $MouseEvent::MOUSE_PRESSED:
		{}
	case $MouseEvent::MOUSE_RELEASED:
		{}
	case $MouseEvent::MOUSE_CLICKED:
		{
			return (anEvent->getButton() == mouseButton);
		}
	case $MouseEvent::MOUSE_ENTERED:
		{}
	case $MouseEvent::MOUSE_EXITED:
		{}
	case $MouseEvent::MOUSE_DRAGGED:
		{
			return (((int32_t)(anEvent->getModifiersEx() & (uint32_t)mouseButtonDownMask)) != 0);
		}
	default:
		{
			bool var$0 = ((int32_t)(anEvent->getModifiersEx() & (uint32_t)mouseButtonDownMask)) != 0;
			return (var$0 || anEvent->getButton() == mouseButton);
		}
	}
}

bool SwingUtilities::isLeftMouseButton($MouseEvent* anEvent) {
	$init(SwingUtilities);
	return checkMouseButton(anEvent, $MouseEvent::BUTTON1, $InputEvent::BUTTON1_DOWN_MASK);
}

bool SwingUtilities::isMiddleMouseButton($MouseEvent* anEvent) {
	$init(SwingUtilities);
	return checkMouseButton(anEvent, $MouseEvent::BUTTON2, $InputEvent::BUTTON2_DOWN_MASK);
}

bool SwingUtilities::isRightMouseButton($MouseEvent* anEvent) {
	$init(SwingUtilities);
	return checkMouseButton(anEvent, $MouseEvent::BUTTON3, $InputEvent::BUTTON3_DOWN_MASK);
}

int32_t SwingUtilities::computeStringWidth($FontMetrics* fm, $String* str) {
	$init(SwingUtilities);
	return $SwingUtilities2::stringWidth(nullptr, fm, str);
}

$String* SwingUtilities::layoutCompoundLabel($JComponent* c, $FontMetrics* fm, $String* text, $Icon* icon, int32_t verticalAlignment, int32_t horizontalAlignment, int32_t verticalTextPosition, int32_t horizontalTextPosition, $Rectangle* viewR, $Rectangle* iconR, $Rectangle* textR, int32_t textIconGap) {
	$init(SwingUtilities);
	bool orientationIsLeftToRight = true;
	int32_t hAlign = horizontalAlignment;
	int32_t hTextPos = horizontalTextPosition;
	if (c != nullptr) {
		if (!($nc($(c->getComponentOrientation()))->isLeftToRight())) {
			orientationIsLeftToRight = false;
		}
	}
	switch (horizontalAlignment) {
	case $SwingConstants::LEADING:
		{
			hAlign = (orientationIsLeftToRight) ? $SwingConstants::LEFT : $SwingConstants::RIGHT;
			break;
		}
	case $SwingConstants::TRAILING:
		{
			hAlign = (orientationIsLeftToRight) ? $SwingConstants::RIGHT : $SwingConstants::LEFT;
			break;
		}
	}
	switch (horizontalTextPosition) {
	case $SwingConstants::LEADING:
		{
			hTextPos = (orientationIsLeftToRight) ? $SwingConstants::LEFT : $SwingConstants::RIGHT;
			break;
		}
	case $SwingConstants::TRAILING:
		{
			hTextPos = (orientationIsLeftToRight) ? $SwingConstants::RIGHT : $SwingConstants::LEFT;
			break;
		}
	}
	return layoutCompoundLabelImpl(c, fm, text, icon, verticalAlignment, hAlign, verticalTextPosition, hTextPos, viewR, iconR, textR, textIconGap);
}

$String* SwingUtilities::layoutCompoundLabel($FontMetrics* fm, $String* text, $Icon* icon, int32_t verticalAlignment, int32_t horizontalAlignment, int32_t verticalTextPosition, int32_t horizontalTextPosition, $Rectangle* viewR, $Rectangle* iconR, $Rectangle* textR, int32_t textIconGap) {
	$init(SwingUtilities);
	return layoutCompoundLabelImpl(nullptr, fm, text, icon, verticalAlignment, horizontalAlignment, verticalTextPosition, horizontalTextPosition, viewR, iconR, textR, textIconGap);
}

$String* SwingUtilities::layoutCompoundLabelImpl($JComponent* c, $FontMetrics* fm, $String* text$renamed, $Icon* icon, int32_t verticalAlignment, int32_t horizontalAlignment, int32_t verticalTextPosition, int32_t horizontalTextPosition, $Rectangle* viewR, $Rectangle* iconR, $Rectangle* textR, int32_t textIconGap) {
	$init(SwingUtilities);
	$var($String, text, text$renamed);
	if (icon != nullptr) {
		$nc(iconR)->width = icon->getIconWidth();
		iconR->height = icon->getIconHeight();
	} else {
		$nc(iconR)->width = (iconR->height = 0);
	}
	bool textIsEmpty = (text == nullptr) || $nc(text)->isEmpty();
	int32_t lsb = 0;
	int32_t rsb = 0;
	int32_t gap = 0;
	$var($View, v, nullptr);
	if (textIsEmpty) {
		$nc(textR)->width = (textR->height = 0);
		$assign(text, ""_s);
		gap = 0;
	} else {
		int32_t availTextWidth = 0;
		gap = (icon == nullptr) ? 0 : textIconGap;
		if (horizontalTextPosition == $SwingConstants::CENTER) {
			availTextWidth = $nc(viewR)->width;
		} else {
			availTextWidth = $nc(viewR)->width - ($nc(iconR)->width + gap);
		}
		$assign(v, (c != nullptr) ? $cast($View, $nc(c)->getClientProperty("html"_s)) : ($View*)nullptr);
		if (v != nullptr) {
			$nc(textR)->width = $Math::min(availTextWidth, $cast(int32_t, v->getPreferredSpan($View::X_AXIS)));
			textR->height = $cast(int32_t, v->getPreferredSpan($View::Y_AXIS));
		} else {
			$nc(textR)->width = $SwingUtilities2::stringWidth(c, fm, text);
			lsb = $SwingUtilities2::getLeftSideBearing(c, fm, text);
			if (lsb < 0) {
				textR->width -= lsb;
			}
			if (textR->width > availTextWidth) {
				$assign(text, $SwingUtilities2::clipString(c, fm, text, availTextWidth));
				textR->width = $SwingUtilities2::stringWidth(c, fm, text);
			}
			textR->height = $nc(fm)->getHeight();
		}
	}
	if (verticalTextPosition == $SwingConstants::TOP) {
		if (horizontalTextPosition != $SwingConstants::CENTER) {
			$nc(textR)->y = 0;
		} else {
			$nc(textR)->y = -(textR->height + gap);
		}
	} else if (verticalTextPosition == $SwingConstants::CENTER) {
		$nc(textR)->y = ($nc(iconR)->height / 2) - (textR->height / 2);
	} else if (horizontalTextPosition != $SwingConstants::CENTER) {
		$nc(textR)->y = $nc(iconR)->height - textR->height;
	} else {
		$nc(textR)->y = ($nc(iconR)->height + gap);
	}
	if (horizontalTextPosition == $SwingConstants::LEFT) {
		$nc(textR)->x = -(textR->width + gap);
	} else if (horizontalTextPosition == $SwingConstants::CENTER) {
		$nc(textR)->x = ($nc(iconR)->width / 2) - (textR->width / 2);
	} else {
		$nc(textR)->x = ($nc(iconR)->width + gap);
	}
	int32_t labelR_x = $Math::min($nc(iconR)->x, $nc(textR)->x);
	int32_t labelR_width = $Math::max($nc(iconR)->x + iconR->width, $nc(textR)->x + textR->width) - labelR_x;
	int32_t labelR_y = $Math::min($nc(iconR)->y, $nc(textR)->y);
	int32_t labelR_height = $Math::max($nc(iconR)->y + iconR->height, $nc(textR)->y + textR->height) - labelR_y;
	int32_t dx = 0;
	int32_t dy = 0;
	if (verticalAlignment == $SwingConstants::TOP) {
		dy = $nc(viewR)->y - labelR_y;
	} else if (verticalAlignment == $SwingConstants::CENTER) {
		dy = ($nc(viewR)->y + (viewR->height / 2)) - (labelR_y + (labelR_height / 2));
	} else {
		dy = ($nc(viewR)->y + viewR->height) - (labelR_y + labelR_height);
	}
	if (horizontalAlignment == $SwingConstants::LEFT) {
		dx = $nc(viewR)->x - labelR_x;
	} else if (horizontalAlignment == $SwingConstants::RIGHT) {
		dx = ($nc(viewR)->x + viewR->width) - (labelR_x + labelR_width);
	} else {
		dx = ($nc(viewR)->x + (viewR->width / 2)) - (labelR_x + (labelR_width / 2));
	}
	$nc(textR)->x += dx;
	textR->y += dy;
	$nc(iconR)->x += dx;
	iconR->y += dy;
	if (lsb < 0) {
		textR->x -= lsb;
		textR->width += lsb;
	}
	if (rsb > 0) {
		textR->width -= rsb;
	}
	return text;
}

void SwingUtilities::paintComponent($Graphics* g, $Component* c, $Container* p, int32_t x, int32_t y, int32_t w, int32_t h) {
	$init(SwingUtilities);
	$nc($(getCellRendererPane(c, p)))->paintComponent(g, c, p, x, y, w, h, false);
}

void SwingUtilities::paintComponent($Graphics* g, $Component* c, $Container* p, $Rectangle* r) {
	$init(SwingUtilities);
	paintComponent(g, c, p, $nc(r)->x, r->y, r->width, r->height);
}

$CellRendererPane* SwingUtilities::getCellRendererPane($Component* c, $Container* p) {
	$init(SwingUtilities);
	$var($Container, shell, $nc(c)->getParent());
	if ($instanceOf($CellRendererPane, shell)) {
		if ($nc(shell)->getParent() != p) {
			$nc(p)->add(static_cast<$Component*>(shell));
		}
	} else {
		$assign(shell, $new($CellRendererPane));
		shell->add(c);
		$nc(p)->add(static_cast<$Component*>(shell));
	}
	return $cast($CellRendererPane, shell);
}

void SwingUtilities::updateComponentTreeUI($Component* c) {
	$init(SwingUtilities);
	updateComponentTreeUI0(c);
	$nc(c)->invalidate();
	c->validate();
	c->repaint();
}

void SwingUtilities::updateComponentTreeUI0($Component* c) {
	$init(SwingUtilities);
	if ($instanceOf($JComponent, c)) {
		$var($JComponent, jc, $cast($JComponent, c));
		$nc(jc)->updateUI();
		$var($JPopupMenu, jpm, jc->getComponentPopupMenu());
		if (jpm != nullptr) {
			updateComponentTreeUI(jpm);
		}
	}
	$var($ComponentArray, children, nullptr);
	if ($instanceOf($JMenu, c)) {
		$assign(children, $nc(($cast($JMenu, c)))->getMenuComponents());
	} else if ($instanceOf($Container, c)) {
		$assign(children, $nc(($cast($Container, c)))->getComponents());
	}
	if (children != nullptr) {
		{
			$var($ComponentArray, arr$, children);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, child, arr$->get(i$));
				{
					updateComponentTreeUI0(child);
				}
			}
		}
	}
}

void SwingUtilities::invokeLater($Runnable* doRun) {
	$init(SwingUtilities);
	$EventQueue::invokeLater(doRun);
}

void SwingUtilities::invokeAndWait($Runnable* doRun) {
	$init(SwingUtilities);
	$EventQueue::invokeAndWait(doRun);
}

bool SwingUtilities::isEventDispatchThread() {
	$init(SwingUtilities);
	return $EventQueue::isDispatchThread();
}

int32_t SwingUtilities::getAccessibleIndexInParent($Component* c) {
	$init(SwingUtilities);
	return $nc($($nc(c)->getAccessibleContext()))->getAccessibleIndexInParent();
}

$Accessible* SwingUtilities::getAccessibleAt($Component* c, $Point* p) {
	$init(SwingUtilities);
	if ($instanceOf($Container, c)) {
		return $nc($($nc($($nc(c)->getAccessibleContext()))->getAccessibleComponent()))->getAccessibleAt(p);
	} else if ($instanceOf($Accessible, c)) {
		$var($Accessible, a, $cast($Accessible, c));
		if (a != nullptr) {
			$var($AccessibleContext, ac, a->getAccessibleContext());
			if (ac != nullptr) {
				$var($AccessibleComponent, acmp, nullptr);
				$var($Point, location, nullptr);
				int32_t nchildren = ac->getAccessibleChildrenCount();
				for (int32_t i = 0; i < nchildren; ++i) {
					$assign(a, $nc(ac)->getAccessibleChild(i));
					if (a != nullptr) {
						$assign(ac, a->getAccessibleContext());
						if (ac != nullptr) {
							$assign(acmp, ac->getAccessibleComponent());
							if ((acmp != nullptr) && (acmp->isShowing())) {
								$assign(location, acmp->getLocation());
								$var($Point, np, $new($Point, $nc(p)->x - $nc(location)->x, p->y - location->y));
								if (acmp->contains(np)) {
									return a;
								}
							}
						}
					}
				}
			}
		}
		return $cast($Accessible, c);
	}
	return nullptr;
}

$AccessibleStateSet* SwingUtilities::getAccessibleStateSet($Component* c) {
	$init(SwingUtilities);
	return $nc($($nc(c)->getAccessibleContext()))->getAccessibleStateSet();
}

int32_t SwingUtilities::getAccessibleChildrenCount($Component* c) {
	$init(SwingUtilities);
	return $nc($($nc(c)->getAccessibleContext()))->getAccessibleChildrenCount();
}

$Accessible* SwingUtilities::getAccessibleChild($Component* c, int32_t i) {
	$init(SwingUtilities);
	return $nc($($nc(c)->getAccessibleContext()))->getAccessibleChild(i);
}

$Component* SwingUtilities::findFocusOwner($Component* c) {
	$init(SwingUtilities);
	$var($Component, focusOwner, $nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getFocusOwner());
	{
		$var($Component, temp, focusOwner);
		for (; temp != nullptr; $assign(temp, ($instanceOf($Window, temp)) ? ($Component*)nullptr : static_cast<$Component*>($nc(temp)->getParent()))) {
			if (temp == c) {
				return focusOwner;
			}
		}
	}
	return nullptr;
}

$JRootPane* SwingUtilities::getRootPane($Component* c$renamed) {
	$init(SwingUtilities);
	$var($Component, c, c$renamed);
	if ($instanceOf($RootPaneContainer, c)) {
		return $nc(($cast($RootPaneContainer, c)))->getRootPane();
	}
	for (; c != nullptr; $assign(c, $nc(c)->getParent())) {
		if ($instanceOf($JRootPane, c)) {
			return $cast($JRootPane, c);
		}
	}
	return nullptr;
}

$Component* SwingUtilities::getRoot($Component* c) {
	$init(SwingUtilities);
	$var($Component, applet, nullptr);
	{
		$var($Component, p, c);
		for (; p != nullptr; $assign(p, $nc(p)->getParent())) {
			if ($instanceOf($Window, p)) {
				return p;
			}
			if ($instanceOf($Applet, p)) {
				$assign(applet, p);
			}
		}
	}
	return applet;
}

$JComponent* SwingUtilities::getPaintingOrigin($JComponent* c) {
	$init(SwingUtilities);
	$var($Container, p, c);
	while ($instanceOf($JComponent, $assign(p, $nc(p)->getParent()))) {
		$var($JComponent, jp, $cast($JComponent, p));
		if (jp->isPaintingOrigin()) {
			return jp;
		}
	}
	return nullptr;
}

bool SwingUtilities::processKeyBindings($KeyEvent* event) {
	$init(SwingUtilities);
	if (event != nullptr) {
		if (event->isConsumed()) {
			return false;
		}
		$var($Component, component, event->getComponent());
		bool pressed = (event->getID() == $KeyEvent::KEY_PRESSED);
		if (!isValidKeyEventForKeyBindings(event)) {
			return false;
		}
		while (component != nullptr) {
			if ($instanceOf($JComponent, component)) {
				return $nc(($cast($JComponent, component)))->processKeyBindings(event, pressed);
			}
			if (($instanceOf($Applet, component)) || ($instanceOf($Window, component))) {
				return $JComponent::processKeyBindingsForAllComponents(event, $cast($Container, component), pressed);
			}
			$assign(component, component->getParent());
		}
	}
	return false;
}

bool SwingUtilities::isValidKeyEventForKeyBindings($KeyEvent* e) {
	$init(SwingUtilities);
	return true;
}

bool SwingUtilities::notifyAction($Action* action, $KeyStroke* ks, $KeyEvent* event, Object$* sender, int32_t modifiers) {
	$init(SwingUtilities);
	if (action == nullptr || !$nc(action)->accept(sender)) {
		return false;
	}
	$var($Object, commandO, nullptr);
	bool stayNull = false;
	$assign(commandO, $nc(action)->getValue($Action::ACTION_COMMAND_KEY));
	if (commandO == nullptr && ($instanceOf($JComponent$ActionStandin, action))) {
		stayNull = true;
	} else {
		stayNull = false;
	}
	$var($String, command, nullptr);
	if (commandO != nullptr) {
		$assign(command, $of(commandO)->toString());
	} else if (!stayNull && event->getKeyChar() != $KeyEvent::CHAR_UNDEFINED) {
		$assign(command, $String::valueOf(event->getKeyChar()));
	} else {
		$assign(command, nullptr);
	}
	action->actionPerformed($$new($ActionEvent, sender, $ActionEvent::ACTION_PERFORMED, command, event->getWhen(), modifiers));
	return true;
}

void SwingUtilities::replaceUIInputMap($JComponent* component, int32_t type, $InputMap* uiInputMap) {
	$init(SwingUtilities);
	$var($InputMap, map, $nc(component)->getInputMap(type, (uiInputMap != nullptr)));
	while (map != nullptr) {
		$var($InputMap, parent, map->getParent());
		if (parent == nullptr || ($instanceOf($UIResource, parent))) {
			map->setParent(uiInputMap);
			return;
		}
		$assign(map, parent);
	}
}

void SwingUtilities::replaceUIActionMap($JComponent* component, $ActionMap* uiActionMap) {
	$init(SwingUtilities);
	$var($ActionMap, map, $nc(component)->getActionMap((uiActionMap != nullptr)));
	while (map != nullptr) {
		$var($ActionMap, parent, map->getParent());
		if (parent == nullptr || ($instanceOf($UIResource, parent))) {
			map->setParent(uiActionMap);
			return;
		}
		$assign(map, parent);
	}
}

$InputMap* SwingUtilities::getUIInputMap($JComponent* component, int32_t condition) {
	$init(SwingUtilities);
	$var($InputMap, map, $nc(component)->getInputMap(condition, false));
	while (map != nullptr) {
		$var($InputMap, parent, map->getParent());
		if ($instanceOf($UIResource, parent)) {
			return parent;
		}
		$assign(map, parent);
	}
	return nullptr;
}

$ActionMap* SwingUtilities::getUIActionMap($JComponent* component) {
	$init(SwingUtilities);
	$var($ActionMap, map, $nc(component)->getActionMap(false));
	while (map != nullptr) {
		$var($ActionMap, parent, map->getParent());
		if ($instanceOf($UIResource, parent)) {
			return parent;
		}
		$assign(map, parent);
	}
	return nullptr;
}

$Frame* SwingUtilities::getSharedOwnerFrame() {
	$init(SwingUtilities);
	$var($Frame, sharedOwnerFrame, $cast($Frame, SwingUtilities::appContextGet(SwingUtilities::sharedOwnerFrameKey)));
	if (sharedOwnerFrame == nullptr) {
		$assign(sharedOwnerFrame, $new($SwingUtilities$SharedOwnerFrame));
		SwingUtilities::appContextPut(SwingUtilities::sharedOwnerFrameKey, sharedOwnerFrame);
	}
	return sharedOwnerFrame;
}

$WindowListener* SwingUtilities::getSharedOwnerFrameShutdownListener() {
	$init(SwingUtilities);
	$var($Frame, sharedOwnerFrame, getSharedOwnerFrame());
	return $cast($WindowListener, sharedOwnerFrame);
}

$Object* SwingUtilities::appContextGet(Object$* key) {
	$init(SwingUtilities);
	return $of($nc($($AppContext::getAppContext()))->get(key));
}

void SwingUtilities::appContextPut(Object$* key, Object$* value) {
	$init(SwingUtilities);
	$nc($($AppContext::getAppContext()))->put(key, value);
}

void SwingUtilities::appContextRemove(Object$* key) {
	$init(SwingUtilities);
	$nc($($AppContext::getAppContext()))->remove(key);
}

$Class* SwingUtilities::loadSystemClass($String* className) {
	$init(SwingUtilities);
	$beforeCallerSensitive();
	$ReflectUtil::checkPackageAccess(className);
	return $Class::forName(className, true, $($($Thread::currentThread())->getContextClassLoader()));
}

bool SwingUtilities::isLeftToRight($Component* c) {
	$init(SwingUtilities);
	return $nc($($nc(c)->getComponentOrientation()))->isLeftToRight();
}

void SwingUtilities::init$() {
	$throwNew($Error, "SwingUtilities is just a container for static methods"_s);
}

bool SwingUtilities::doesIconReferenceImage($Icon* icon, $Image* image) {
	$init(SwingUtilities);
	$var($Image, iconImage, (icon != nullptr && ($instanceOf($ImageIcon, icon))) ? $nc(($cast($ImageIcon, icon)))->getImage() : ($Image*)nullptr);
	return (iconImage == image);
}

int32_t SwingUtilities::findDisplayedMnemonicIndex($String* text, int32_t mnemonic) {
	$init(SwingUtilities);
	if (text == nullptr || mnemonic == u'\0') {
		return -1;
	}
	char16_t uc = $Character::toUpperCase((char16_t)mnemonic);
	char16_t lc = $Character::toLowerCase((char16_t)mnemonic);
	int32_t uci = $nc(text)->indexOf((int32_t)uc);
	int32_t lci = text->indexOf((int32_t)lc);
	if (uci == -1) {
		return lci;
	} else if (lci == -1) {
		return uci;
	} else {
		return (lci < uci) ? lci : uci;
	}
}

$Rectangle* SwingUtilities::calculateInnerArea($JComponent* c, $Rectangle* r) {
	$init(SwingUtilities);
	if (c == nullptr) {
		return nullptr;
	}
	$var($Rectangle, rect, r);
	$var($Insets, insets, $nc(c)->getInsets());
	if (rect == nullptr) {
		$assign(rect, $new($Rectangle));
	}
	$nc(rect)->x = $nc(insets)->left;
	rect->y = insets->top;
	rect->width = c->getWidth() - insets->left - insets->right;
	rect->height = c->getHeight() - insets->top - insets->bottom;
	return rect;
}

void SwingUtilities::updateRendererOrEditorUI(Object$* rendererOrEditor) {
	$init(SwingUtilities);
	if (rendererOrEditor == nullptr) {
		return;
	}
	$var($Component, component, nullptr);
	if ($instanceOf($Component, rendererOrEditor)) {
		$assign(component, $cast($Component, rendererOrEditor));
	}
	if ($instanceOf($DefaultCellEditor, rendererOrEditor)) {
		$assign(component, $nc(($cast($DefaultCellEditor, rendererOrEditor)))->getComponent());
	}
	if (component != nullptr) {
		SwingUtilities::updateComponentTreeUI(component);
	}
}

$Container* SwingUtilities::getUnwrappedParent($Component* component) {
	$init(SwingUtilities);
	$var($Container, parent, $nc(component)->getParent());
	while ($instanceOf($JLayer, parent)) {
		$assign(parent, $nc(parent)->getParent());
	}
	return parent;
}

$Component* SwingUtilities::getUnwrappedView($JViewport* viewport) {
	$init(SwingUtilities);
	$var($Component, view, $nc(viewport)->getView());
	while ($instanceOf($JLayer, view)) {
		$assign(view, $nc(($cast($JLayer, view)))->getView());
	}
	return view;
}

$Container* SwingUtilities::getValidateRoot($Container* c$renamed, bool visibleOnly) {
	$init(SwingUtilities);
	$var($Container, c, c$renamed);
	$var($Container, root, nullptr);
	for (; c != nullptr; $assign(c, $nc(c)->getParent())) {
		if (!c->isDisplayable() || $instanceOf($CellRendererPane, c)) {
			return nullptr;
		}
		if (c->isValidateRoot()) {
			$assign(root, c);
			break;
		}
	}
	if (root == nullptr) {
		return nullptr;
	}
	for (; c != nullptr; $assign(c, c->getParent())) {
		bool var$0 = !$nc(c)->isDisplayable();
		if (var$0 || (visibleOnly && !$nc(c)->isVisible())) {
			return nullptr;
		}
		if ($instanceOf($Window, c) || $instanceOf($Applet, c)) {
			return root;
		}
	}
	return nullptr;
}

void clinit$SwingUtilities($Class* class$) {
	SwingUtilities::canAccessEventQueue = false;
	SwingUtilities::eventQueueTested = false;
	$assignStatic(SwingUtilities::sharedOwnerFrameKey, $new($StringBuffer, "SwingUtilities.sharedOwnerFrame"_s));
}

SwingUtilities::SwingUtilities() {
}

$Class* SwingUtilities::load$($String* name, bool initialize) {
	$loadClass(SwingUtilities, name, initialize, &_SwingUtilities_ClassInfo_, clinit$SwingUtilities, allocate$SwingUtilities);
	return class$;
}

$Class* SwingUtilities::class$ = nullptr;

	} // swing
} // javax