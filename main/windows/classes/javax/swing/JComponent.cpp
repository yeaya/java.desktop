#include <javax/swing/JComponent.h>

#include <java/applet/Applet.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Color.h>
#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Shape.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/VetoableChangeListener.h>
#include <java/beans/VetoableChangeSupport.h>
#include <java/io/IOException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Attribute.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Enumeration.h>
#include <java/util/EventListener.h>
#include <java/util/HashSet.h>
#include <java/util/Hashtable.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/AncestorNotifier.h>
#include <javax/swing/ArrayTable.h>
#include <javax/swing/Autoscroller.h>
#include <javax/swing/CellRendererPane.h>
#include <javax/swing/ClientPropertyKey.h>
#include <javax/swing/ComponentInputMap.h>
#include <javax/swing/DebugGraphics.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/InputVerifier.h>
#include <javax/swing/JComponent$1.h>
#include <javax/swing/JComponent$2.h>
#include <javax/swing/JComponent$ActionStandin.h>
#include <javax/swing/JComponent$KeyboardState.h>
#include <javax/swing/JComponent$ReadObjectCallback.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/JToolTip.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/KeyboardManager.h>
#include <javax/swing/LegacyGlueFocusTraversalPolicy.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/Popup$HeavyWeightWindow.h>
#include <javax/swing/RepaintManager.h>
#include <javax/swing/RootPaneContainer.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/ToolTipManager.h>
#include <javax/swing/TransferHandler$DropLocation.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/UIClientPropertyKey.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/AncestorListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/table/JTableHeader.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/RequestFocusController.h>
#include <sun/awt/SunToolkit.h>
#include <sun/swing/SwingAccessor$JComponentAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef ACCESSIBLE_STATE_PROPERTY
#undef ACTIONMAP_CREATED
#undef ANCESTOR_INPUTMAP_CREATED
#undef ANCESTOR_USING_BUFFER
#undef AUTOSCROLLS_SET
#undef BACKWARD_TRAVERSAL_KEYS
#undef COMPLETELY_OBSCURED
#undef CREATED_DOUBLE_BUFFER
#undef CTRL_MASK
#undef DEBUG_GRAPHICS_LOADED
#undef ENABLED
#undef FOCUS_INPUTMAP_CREATED
#undef FOCUS_TRAVERSAL_KEYS_BACKWARD_SET
#undef FOCUS_TRAVERSAL_KEYS_FORWARD_SET
#undef FORWARD_TRAVERSAL_KEYS
#undef INHERITS_POPUP_MENU
#undef INPUT_VERIFIER_SOURCE_KEY
#undef IS_DOUBLE_BUFFERED
#undef IS_OPAQUE
#undef IS_PAINTING_TILE
#undef IS_PRINTING
#undef IS_PRINTING_ALL
#undef IS_REPAINTING
#undef KEYBOARD_BINDINGS_KEY
#undef KEY_EVENTS_ENABLED
#undef KEY_EVENT_MASK
#undef KEY_PRESSED
#undef KEY_TEXT_ANTIALIASING
#undef KEY_TEXT_LCD_CONTRAST
#undef KEY_TYPED
#undef MOUSE_DRAGGED
#undef MOUSE_EVENT_MASK
#undef MOUSE_MOTION_EVENT_MASK
#undef MOUSE_RELEASED
#undef NEXT_FOCUS
#undef NOT_OBSCURED
#undef OPAQUE_SET
#undef OTHER
#undef PARTIALLY_OBSCURED
#undef REQUEST_FOCUS_DISABLED
#undef RESERVED_1
#undef RESERVED_2
#undef RESERVED_3
#undef RESERVED_4
#undef RESERVED_5
#undef RESERVED_6
#undef SHIFT_MASK
#undef TOOL_TIP_TEXT_KEY
#undef UNDEFINED_CONDITION
#undef VK_TAB
#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT
#undef WHEN_FOCUSED
#undef WHEN_IN_FOCUSED_WINDOW
#undef WHEN_IN_FOCUSED_WINDOW_BINDINGS
#undef WIF_INPUTMAP_CREATED
#undef WRITE_OBJ_COUNTER_FIRST
#undef WRITE_OBJ_COUNTER_LAST

using $ComponentArray = $Array<::java::awt::Component>;
using $PropertyChangeListenerArray = $Array<::java::beans::PropertyChangeListener>;
using $VetoableChangeListenerArray = $Array<::java::beans::VetoableChangeListener>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $KeyStrokeArray = $Array<::javax::swing::KeyStroke>;
using $AncestorListenerArray = $Array<::javax::swing::event::AncestorListener>;
using $KeyStrokeArray2 = $Array<::javax::swing::KeyStroke, 2>;
using $Applet = ::java::applet::Applet;
using $AWTEvent = ::java::awt::AWTEvent;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $RenderingHints = ::java::awt::RenderingHints;
using $RenderingHints$Key = ::java::awt::RenderingHints$Key;
using $Shape = ::java::awt::Shape;
using $Window = ::java::awt::Window;
using $ActionListener = ::java::awt::event::ActionListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $VetoableChangeListener = ::java::beans::VetoableChangeListener;
using $VetoableChangeSupport = ::java::beans::VetoableChangeSupport;
using $IOException = ::java::io::IOException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $Attribute = ::java::lang::Attribute;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Enumeration = ::java::util::Enumeration;
using $EventListener = ::java::util::EventListener;
using $HashSet = ::java::util::HashSet;
using $Hashtable = ::java::util::Hashtable;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $AncestorNotifier = ::javax::swing::AncestorNotifier;
using $ArrayTable = ::javax::swing::ArrayTable;
using $Autoscroller = ::javax::swing::Autoscroller;
using $CellRendererPane = ::javax::swing::CellRendererPane;
using $ClientPropertyKey = ::javax::swing::ClientPropertyKey;
using $ComponentInputMap = ::javax::swing::ComponentInputMap;
using $DebugGraphics = ::javax::swing::DebugGraphics;
using $InputMap = ::javax::swing::InputMap;
using $InputVerifier = ::javax::swing::InputVerifier;
using $JComponent$1 = ::javax::swing::JComponent$1;
using $JComponent$2 = ::javax::swing::JComponent$2;
using $JComponent$ActionStandin = ::javax::swing::JComponent$ActionStandin;
using $JComponent$KeyboardState = ::javax::swing::JComponent$KeyboardState;
using $JComponent$ReadObjectCallback = ::javax::swing::JComponent$ReadObjectCallback;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JRootPane = ::javax::swing::JRootPane;
using $JToolTip = ::javax::swing::JToolTip;
using $KeyStroke = ::javax::swing::KeyStroke;
using $KeyboardManager = ::javax::swing::KeyboardManager;
using $LegacyGlueFocusTraversalPolicy = ::javax::swing::LegacyGlueFocusTraversalPolicy;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $Popup$HeavyWeightWindow = ::javax::swing::Popup$HeavyWeightWindow;
using $RepaintManager = ::javax::swing::RepaintManager;
using $RootPaneContainer = ::javax::swing::RootPaneContainer;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ToolTipManager = ::javax::swing::ToolTipManager;
using $TransferHandler = ::javax::swing::TransferHandler;
using $TransferHandler$DropLocation = ::javax::swing::TransferHandler$DropLocation;
using $TransferHandler$HasGetTransferHandler = ::javax::swing::TransferHandler$HasGetTransferHandler;
using $UIClientPropertyKey = ::javax::swing::UIClientPropertyKey;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $AncestorListener = ::javax::swing::event::AncestorListener;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AppContext = ::sun::awt::AppContext;
using $RequestFocusController = ::sun::awt::RequestFocusController;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingAccessor$JComponentAccessor = ::sun::swing::SwingAccessor$JComponentAccessor;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {

class JComponent$$Lambda$lambda$revalidate$0 : public $Runnable {
	$class(JComponent$$Lambda$lambda$revalidate$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(JComponent* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$revalidate$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JComponent$$Lambda$lambda$revalidate$0>());
	}
	JComponent* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JComponent$$Lambda$lambda$revalidate$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JComponent$$Lambda$lambda$revalidate$0, inst$)},
	{}
};
$MethodInfo JComponent$$Lambda$lambda$revalidate$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $method(static_cast<void(JComponent$$Lambda$lambda$revalidate$0::*)(JComponent*)>(&JComponent$$Lambda$lambda$revalidate$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JComponent$$Lambda$lambda$revalidate$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.swing.JComponent$$Lambda$lambda$revalidate$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* JComponent$$Lambda$lambda$revalidate$0::load$($String* name, bool initialize) {
	$loadClass(JComponent$$Lambda$lambda$revalidate$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JComponent$$Lambda$lambda$revalidate$0::class$ = nullptr;

$NamedAttribute JComponent_Attribute_var$0[] = {
	{"defaultProperty", 's', "UIClassID"},
	{}
};
$CompoundAttribute _JComponent_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JComponent_Attribute_var$0},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_disable20[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_enable23[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$NamedAttribute JComponent_Attribute_var$1[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_getAncestorListeners34[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$1},
	{}
};

$NamedAttribute JComponent_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_getBaselineResizeBehavior38[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$2},
	{}
};

$NamedAttribute JComponent_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_getGraphics51[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$3},
	{}
};

$NamedAttribute JComponent_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_getHeight53[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$4},
	{}
};

$NamedAttribute JComponent_Attribute_var$5[] = {
	{"expert", 'Z', "true"},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_getInsets59[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$5},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_getMaximumSize65[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_getMinimumSize66[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_getNextFocusableComponent67[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_getPreferredSize70[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$NamedAttribute JComponent_Attribute_var$6[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_getRegisteredKeyStrokes71[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$6},
	{}
};

$NamedAttribute JComponent_Attribute_var$7[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_getRootPane72[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$7},
	{}
};

$NamedAttribute JComponent_Attribute_var$8[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_getTopLevelAncestor77[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$8},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_getUI79[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$NamedAttribute JComponent_Attribute_var$9[] = {
	{"bound", 'Z', "false"},
	{"expert", 'Z', "true"},
	{"description", 's', "UIClassID"},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_getUIClassID80[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$9},
	{}
};

$NamedAttribute JComponent_Attribute_var$10[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_getVetoableChangeListeners82[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$10},
	{}
};

$NamedAttribute JComponent_Attribute_var$11[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_getVisibleRect83[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$11},
	{}
};

$NamedAttribute JComponent_Attribute_var$12[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_getWidth84[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$12},
	{}
};

$NamedAttribute JComponent_Attribute_var$13[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_getX86[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$13},
	{}
};

$NamedAttribute JComponent_Attribute_var$14[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_getY87[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$14},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_hide89[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$NamedAttribute JComponent_Attribute_var$15[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_isManagingFocus93[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$15},
	{}
};

$NamedAttribute JComponent_Attribute_var$16[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_isOptimizedDrawingEnabled95[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$16},
	{}
};

$NamedAttribute JComponent_Attribute_var$17[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_isPaintingForPrint97[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$17},
	{}
};

$NamedAttribute JComponent_Attribute_var$18[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_isPaintingTile99[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$18},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_requestDefaultFocus139[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_reshape145[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$NamedAttribute JComponent_Attribute_var$19[] = {
	{"description", 's', "The preferred horizontal alignment of the component."},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_setAlignmentX151[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$19},
	{}
};

$NamedAttribute JComponent_Attribute_var$20[] = {
	{"description", 's', "The preferred vertical alignment of the component."},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_setAlignmentY152[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$20},
	{}
};

$NamedAttribute JComponent_Attribute_var$21[] = {
	{"bound", 'Z', "false"},
	{"expert", 'Z', "true"},
	{"description", 's', "Determines if this component automatically scrolls its contents when dragged."},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_setAutoscrolls153[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$21},
	{}
};

$NamedAttribute JComponent_Attribute_var$22[] = {
	{"preferred", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The background color of the component."},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_setBackground154[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$22},
	{}
};

$NamedAttribute JComponent_Attribute_var$23[] = {
	{"preferred", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The component\'s border."},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_setBorder155[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$23},
	{}
};

$NamedAttribute JComponent_Attribute_var$24[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "Popup to show"},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_setComponentPopupMenu156[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$24},
	{}
};

$Attribute JComponent_Attribute_var$26[] = {
	{'s', "DebugGraphics.NONE_OPTION"},
	{'s', "DebugGraphics.LOG_OPTION"},
	{'s', "DebugGraphics.FLASH_OPTION"},
	{'s', "DebugGraphics.BUFFERED_OPTION"},
	{'-'}
};

$NamedAttribute JComponent_Attribute_var$25[] = {
	{"bound", 'Z', "false"},
	{"preferred", 'Z', "true"},
	{"enumerationValues", '[', JComponent_Attribute_var$26},
	{"description", 's', "Diagnostic options for graphics operations."},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_setDebugGraphicsOptions158[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$25},
	{}
};

$NamedAttribute JComponent_Attribute_var$27[] = {
	{"expert", 'Z', "true"},
	{"preferred", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The enabled state of the component."},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_setEnabled162[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$27},
	{}
};

$NamedAttribute JComponent_Attribute_var$28[] = {
	{"preferred", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The font for the component."},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_setFont165[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$28},
	{}
};

$NamedAttribute JComponent_Attribute_var$29[] = {
	{"preferred", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The foreground color of the component."},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_setForeground166[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$29},
	{}
};

$NamedAttribute JComponent_Attribute_var$30[] = {
	{"description", 's', "Whether or not the JPopupMenu is inherited"},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_setInheritsPopupMenu167[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$30},
	{}
};

$NamedAttribute JComponent_Attribute_var$31[] = {
	{"description", 's', "The component\'s input verifier."},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_setInputVerifier169[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$31},
	{}
};

$NamedAttribute JComponent_Attribute_var$32[] = {
	{"description", 's', "The maximum size of the component."},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_setMaximumSize170[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$32},
	{}
};

$NamedAttribute JComponent_Attribute_var$33[] = {
	{"description", 's', "The minimum size of the component."},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_setMinimumSize171[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$33},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_setNextFocusableComponent172[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$NamedAttribute JComponent_Attribute_var$34[] = {
	{"expert", 'Z', "true"},
	{"description", 's', "The component\'s opacity"},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_setOpaque173[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$34},
	{}
};

$NamedAttribute JComponent_Attribute_var$35[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "The preferred size of the component."},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_setPreferredSize175[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$35},
	{}
};

$NamedAttribute JComponent_Attribute_var$36[] = {
	{"bound", 'Z', "false"},
	{"preferred", 'Z', "true"},
	{"description", 's', "The text to display in a tool tip."},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_setToolTipText177[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$36},
	{}
};

$NamedAttribute JComponent_Attribute_var$37[] = {
	{"hidden", 'Z', "true"},
	{"description", 's', "Mechanism for transfer of data to and from the component"},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_setTransferHandler178[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$37},
	{}
};

$NamedAttribute JComponent_Attribute_var$38[] = {
	{"hidden", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The component\'s look and feel delegate."},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_setUI179[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$38},
	{}
};

$NamedAttribute JComponent_Attribute_var$39[] = {
	{"description", 's', "Whether the Component verifies input before accepting focus."},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_setVerifyInputWhenFocusTarget181[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$39},
	{}
};

$NamedAttribute JComponent_Attribute_var$40[] = {
	{"hidden", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{}
};

$CompoundAttribute _JComponent_MethodAnnotations_setVisible182[] = {
	{"Ljava/beans/BeanProperty;", JComponent_Attribute_var$40},
	{}
};


$FieldInfo _JComponent_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JComponent, uiClassID)},
	{"readObjectCallbacks", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/io/ObjectInputStream;Ljavax/swing/JComponent$ReadObjectCallback;>;", $PRIVATE | $STATIC | $FINAL, $staticField(JComponent, readObjectCallbacks)},
	{"managingFocusForwardTraversalKeys", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/swing/KeyStroke;>;", $PRIVATE | $STATIC, $staticField(JComponent, managingFocusForwardTraversalKeys)},
	{"managingFocusBackwardTraversalKeys", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/swing/KeyStroke;>;", $PRIVATE | $STATIC, $staticField(JComponent, managingFocusBackwardTraversalKeys)},
	{"NOT_OBSCURED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, NOT_OBSCURED)},
	{"PARTIALLY_OBSCURED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, PARTIALLY_OBSCURED)},
	{"COMPLETELY_OBSCURED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, COMPLETELY_OBSCURED)},
	{"DEBUG_GRAPHICS_LOADED", "Z", nullptr, $STATIC, $staticField(JComponent, DEBUG_GRAPHICS_LOADED)},
	{"INPUT_VERIFIER_SOURCE_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JComponent, INPUT_VERIFIER_SOURCE_KEY)},
	{"isAlignmentXSet", "Z", nullptr, $PRIVATE, $field(JComponent, isAlignmentXSet)},
	{"alignmentX", "F", nullptr, $PRIVATE, $field(JComponent, alignmentX)},
	{"isAlignmentYSet", "Z", nullptr, $PRIVATE, $field(JComponent, isAlignmentYSet)},
	{"alignmentY", "F", nullptr, $PRIVATE, $field(JComponent, alignmentY)},
	{"ui", "Ljavax/swing/plaf/ComponentUI;", nullptr, $PROTECTED | $TRANSIENT, $field(JComponent, ui)},
	{"listenerList", "Ljavax/swing/event/EventListenerList;", nullptr, $PROTECTED, $field(JComponent, listenerList)},
	{"clientProperties", "Ljavax/swing/ArrayTable;", nullptr, $PRIVATE | $TRANSIENT, $field(JComponent, clientProperties)},
	{"vetoableChangeSupport", "Ljava/beans/VetoableChangeSupport;", nullptr, $PRIVATE, $field(JComponent, vetoableChangeSupport)},
	{"autoscrolls", "Z", nullptr, $PRIVATE, $field(JComponent, autoscrolls)},
	{"border", "Ljavax/swing/border/Border;", nullptr, $PRIVATE, $field(JComponent, border)},
	{"flags", "I", nullptr, $PRIVATE, $field(JComponent, flags)},
	{"inputVerifier", "Ljavax/swing/InputVerifier;", nullptr, $PRIVATE, $field(JComponent, inputVerifier)},
	{"verifyInputWhenFocusTarget", "Z", nullptr, $PRIVATE, $field(JComponent, verifyInputWhenFocusTarget)},
	{"paintingChild", "Ljava/awt/Component;", nullptr, $TRANSIENT, $field(JComponent, paintingChild)},
	{"WHEN_FOCUSED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JComponent, WHEN_FOCUSED)},
	{"WHEN_ANCESTOR_OF_FOCUSED_COMPONENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JComponent, WHEN_ANCESTOR_OF_FOCUSED_COMPONENT)},
	{"WHEN_IN_FOCUSED_WINDOW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JComponent, WHEN_IN_FOCUSED_WINDOW)},
	{"UNDEFINED_CONDITION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JComponent, UNDEFINED_CONDITION)},
	{"KEYBOARD_BINDINGS_KEY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JComponent, KEYBOARD_BINDINGS_KEY)},
	{"WHEN_IN_FOCUSED_WINDOW_BINDINGS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JComponent, WHEN_IN_FOCUSED_WINDOW_BINDINGS)},
	{"TOOL_TIP_TEXT_KEY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JComponent, TOOL_TIP_TEXT_KEY)},
	{"NEXT_FOCUS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JComponent, NEXT_FOCUS)},
	{"popupMenu", "Ljavax/swing/JPopupMenu;", nullptr, $PRIVATE, $field(JComponent, popupMenu)},
	{"IS_DOUBLE_BUFFERED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, IS_DOUBLE_BUFFERED)},
	{"ANCESTOR_USING_BUFFER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, ANCESTOR_USING_BUFFER)},
	{"IS_PAINTING_TILE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, IS_PAINTING_TILE)},
	{"IS_OPAQUE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, IS_OPAQUE)},
	{"KEY_EVENTS_ENABLED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, KEY_EVENTS_ENABLED)},
	{"FOCUS_INPUTMAP_CREATED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, FOCUS_INPUTMAP_CREATED)},
	{"ANCESTOR_INPUTMAP_CREATED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, ANCESTOR_INPUTMAP_CREATED)},
	{"WIF_INPUTMAP_CREATED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, WIF_INPUTMAP_CREATED)},
	{"ACTIONMAP_CREATED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, ACTIONMAP_CREATED)},
	{"CREATED_DOUBLE_BUFFER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, CREATED_DOUBLE_BUFFER)},
	{"IS_PRINTING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, IS_PRINTING)},
	{"IS_PRINTING_ALL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, IS_PRINTING_ALL)},
	{"IS_REPAINTING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, IS_REPAINTING)},
	{"WRITE_OBJ_COUNTER_FIRST", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, WRITE_OBJ_COUNTER_FIRST)},
	{"RESERVED_1", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, RESERVED_1)},
	{"RESERVED_2", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, RESERVED_2)},
	{"RESERVED_3", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, RESERVED_3)},
	{"RESERVED_4", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, RESERVED_4)},
	{"RESERVED_5", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, RESERVED_5)},
	{"RESERVED_6", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, RESERVED_6)},
	{"WRITE_OBJ_COUNTER_LAST", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, WRITE_OBJ_COUNTER_LAST)},
	{"REQUEST_FOCUS_DISABLED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, REQUEST_FOCUS_DISABLED)},
	{"INHERITS_POPUP_MENU", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, INHERITS_POPUP_MENU)},
	{"OPAQUE_SET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, OPAQUE_SET)},
	{"AUTOSCROLLS_SET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, AUTOSCROLLS_SET)},
	{"FOCUS_TRAVERSAL_KEYS_FORWARD_SET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, FOCUS_TRAVERSAL_KEYS_FORWARD_SET)},
	{"FOCUS_TRAVERSAL_KEYS_BACKWARD_SET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComponent, FOCUS_TRAVERSAL_KEYS_BACKWARD_SET)},
	{"revalidateRunnableScheduled", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $TRANSIENT, $field(JComponent, revalidateRunnableScheduled)},
	{"tempRectangles", "Ljava/util/List;", "Ljava/util/List<Ljava/awt/Rectangle;>;", $PRIVATE | $STATIC, $staticField(JComponent, tempRectangles)},
	{"focusInputMap", "Ljavax/swing/InputMap;", nullptr, $PRIVATE, $field(JComponent, focusInputMap)},
	{"ancestorInputMap", "Ljavax/swing/InputMap;", nullptr, $PRIVATE, $field(JComponent, ancestorInputMap)},
	{"windowInputMap", "Ljavax/swing/ComponentInputMap;", nullptr, $PRIVATE, $field(JComponent, windowInputMap)},
	{"actionMap", "Ljavax/swing/ActionMap;", nullptr, $PRIVATE, $field(JComponent, actionMap)},
	{"defaultLocale", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JComponent, defaultLocale)},
	{"componentObtainingGraphicsFrom", "Ljava/awt/Component;", nullptr, $PRIVATE | $STATIC, $staticField(JComponent, componentObtainingGraphicsFrom)},
	{"componentObtainingGraphicsFromLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(JComponent, componentObtainingGraphicsFromLock)},
	{"aaHint", "Ljava/lang/Object;", nullptr, $PRIVATE | $TRANSIENT, $field(JComponent, aaHint)},
	{"lcdRenderingHint", "Ljava/lang/Object;", nullptr, $PRIVATE | $TRANSIENT, $field(JComponent, lcdRenderingHint)},
	{"focusController", "Lsun/awt/RequestFocusController;", nullptr, $STATIC | $FINAL, $staticField(JComponent, focusController)},
	{}
};

$MethodInfo _JComponent_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JComponent::*)()>(&JComponent::init$))},
	{"_paintImmediately", "(IIII)V", nullptr, 0},
	{"access$000", "(Ljavax/swing/JComponent;)Ljavax/accessibility/AccessibleContext;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$AccessibleContext*(*)(JComponent*)>(&JComponent::access$000))},
	{"access$100", "(Ljavax/swing/JComponent;)Ljavax/accessibility/AccessibleContext;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$AccessibleContext*(*)(JComponent*)>(&JComponent::access$100))},
	{"access$200", "(Ljavax/swing/JComponent;)Ljavax/accessibility/AccessibleContext;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$AccessibleContext*(*)(JComponent*)>(&JComponent::access$200))},
	{"access$300", "(Ljavax/swing/JComponent;)Ljavax/accessibility/AccessibleContext;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$AccessibleContext*(*)(JComponent*)>(&JComponent::access$300))},
	{"addAncestorListener", "(Ljavax/swing/event/AncestorListener;)V", nullptr, $PUBLIC},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"addVetoableChangeListener", "(Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"adjustPaintFlags", "()V", nullptr, $PRIVATE, $method(static_cast<void(JComponent::*)()>(&JComponent::adjustPaintFlags))},
	{"alwaysOnTop", "()Z", nullptr, 0},
	{"checkIfChildObscuredBySibling", "()Z", nullptr, 0},
	{"clientPropertyChanged", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0},
	{"compWriteObjectNotify", "()V", nullptr, 0},
	{"componentInputMapChanged", "(Ljavax/swing/ComponentInputMap;)V", nullptr, 0},
	{"computeVisibleRect", "(Ljava/awt/Component;Ljava/awt/Rectangle;)V", nullptr, $STATIC | $FINAL, $method(static_cast<void(*)($Component*,$Rectangle*)>(&JComponent::computeVisibleRect))},
	{"computeVisibleRect", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"contains", "(II)Z", nullptr, $PUBLIC},
	{"createToolTip", "()Ljavax/swing/JToolTip;", nullptr, $PUBLIC},
	{"deregisterNextFocusableComponent", "()V", nullptr, $PRIVATE, $method(static_cast<void(JComponent::*)()>(&JComponent::deregisterNextFocusableComponent))},
	{"disable", "()V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_disable20},
	{"dndDone", "()V", nullptr, 0},
	{"dropLocationForPoint", "(Ljava/awt/Point;)Ljavax/swing/TransferHandler$DropLocation;", nullptr, 0},
	{"enable", "()V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_enable23},
	{"fetchRectangle", "()Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Rectangle*(*)()>(&JComponent::fetchRectangle))},
	{"firePropertyChange", "(Ljava/lang/String;ZZ)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;II)V", nullptr, $PUBLIC},
	{"firePropertyChange", "(Ljava/lang/String;CC)V", nullptr, $PUBLIC},
	{"fireVetoableChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PROTECTED, nullptr, "java.beans.PropertyVetoException"},
	{"getActionForKeyStroke", "(Ljavax/swing/KeyStroke;)Ljava/awt/event/ActionListener;", nullptr, $PUBLIC},
	{"getActionMap", "()Ljavax/swing/ActionMap;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$ActionMap*(JComponent::*)()>(&JComponent::getActionMap))},
	{"getActionMap", "(Z)Ljavax/swing/ActionMap;", nullptr, $FINAL, $method(static_cast<$ActionMap*(JComponent::*)(bool)>(&JComponent::getActionMap))},
	{"getAlignmentX", "()F", nullptr, $PUBLIC},
	{"getAlignmentY", "()F", nullptr, $PUBLIC},
	{"getAncestorListeners", "()[Ljavax/swing/event/AncestorListener;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_getAncestorListeners34},
	{"getAncestorNotifier", "()Ljavax/swing/AncestorNotifier;", nullptr, $PRIVATE, $method(static_cast<$AncestorNotifier*(JComponent::*)()>(&JComponent::getAncestorNotifier))},
	{"getAutoscrolls", "()Z", nullptr, $PUBLIC},
	{"getBaseline", "(II)I", nullptr, $PUBLIC},
	{"getBaselineResizeBehavior", "()Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_getBaselineResizeBehavior38},
	{"getBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC},
	{"getBounds", "(Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getClientProperties", "()Ljavax/swing/ArrayTable;", nullptr, $PRIVATE, $method(static_cast<$ArrayTable*(JComponent::*)()>(&JComponent::getClientProperties))},
	{"getClientProperty", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Object*(JComponent::*)(Object$*)>(&JComponent::getClientProperty))},
	{"getComponentGraphics", "(Ljava/awt/Graphics;)Ljava/awt/Graphics;", nullptr, $PROTECTED},
	{"getComponentPopupMenu", "()Ljavax/swing/JPopupMenu;", nullptr, $PUBLIC},
	{"getConditionForKeyStroke", "(Ljavax/swing/KeyStroke;)I", nullptr, $PUBLIC},
	{"getCreatedDoubleBuffer", "()Z", nullptr, 0},
	{"getDebugGraphicsOptions", "()I", nullptr, $PUBLIC},
	{"getDefaultLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Locale*(*)()>(&JComponent::getDefaultLocale))},
	{"getFlag", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(JComponent::*)(int32_t)>(&JComponent::getFlag))},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_getGraphics51},
	{"getGraphicsInvoked", "(Ljava/awt/Component;)V", nullptr, $STATIC, $method(static_cast<void(*)($Component*)>(&JComponent::getGraphicsInvoked))},
	{"getHeight", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_getHeight53},
	{"getInheritsPopupMenu", "()Z", nullptr, $PUBLIC},
	{"getInputMap", "(I)Ljavax/swing/InputMap;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$InputMap*(JComponent::*)(int32_t)>(&JComponent::getInputMap))},
	{"getInputMap", "()Ljavax/swing/InputMap;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$InputMap*(JComponent::*)()>(&JComponent::getInputMap))},
	{"getInputMap", "(IZ)Ljavax/swing/InputMap;", nullptr, $FINAL, $method(static_cast<$InputMap*(JComponent::*)(int32_t,bool)>(&JComponent::getInputMap))},
	{"getInputVerifier", "()Ljavax/swing/InputVerifier;", nullptr, $PUBLIC},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_getInsets59},
	{"getInsets", "(Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getLocation", "(Ljava/awt/Point;)Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getManagingFocusBackwardTraversalKeys", "()Ljava/util/Set;", "()Ljava/util/Set<Ljavax/swing/KeyStroke;>;", $STATIC, $method(static_cast<$Set*(*)()>(&JComponent::getManagingFocusBackwardTraversalKeys))},
	{"getManagingFocusForwardTraversalKeys", "()Ljava/util/Set;", "()Ljava/util/Set<Ljavax/swing/KeyStroke;>;", $STATIC, $method(static_cast<$Set*(*)()>(&JComponent::getManagingFocusForwardTraversalKeys))},
	{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_getMaximumSize65},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_getMinimumSize66},
	{"getNextFocusableComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_getNextFocusableComponent67},
	{"getObscuredState", "(IIIII)I", nullptr, $PRIVATE, $method(static_cast<int32_t(JComponent::*)(int32_t,int32_t,int32_t,int32_t,int32_t)>(&JComponent::getObscuredState))},
	{"getPopupLocation", "(Ljava/awt/event/MouseEvent;)Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_getPreferredSize70},
	{"getRegisteredKeyStrokes", "()[Ljavax/swing/KeyStroke;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_getRegisteredKeyStrokes71},
	{"getRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_getRootPane72},
	{"getSize", "(Ljava/awt/Dimension;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getToolTipLocation", "(Ljava/awt/event/MouseEvent;)Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getToolTipText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getToolTipText", "(Ljava/awt/event/MouseEvent;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTopLevelAncestor", "()Ljava/awt/Container;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_getTopLevelAncestor77},
	{"getTransferHandler", "()Ljavax/swing/TransferHandler;", nullptr, $PUBLIC},
	{"getUI", "()Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_getUI79},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_getUIClassID80},
	{"getVerifyInputWhenFocusTarget", "()Z", nullptr, $PUBLIC},
	{"getVetoableChangeListeners", "()[Ljava/beans/VetoableChangeListener;", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_getVetoableChangeListeners82},
	{"getVisibleRect", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_getVisibleRect83},
	{"getWidth", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_getWidth84},
	{"getWriteObjCounter", "(Ljavax/swing/JComponent;)B", nullptr, $STATIC, $method(static_cast<int8_t(*)(JComponent*)>(&JComponent::getWriteObjCounter))},
	{"getX", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_getX86},
	{"getY", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_getY87},
	{"grabFocus", "()V", nullptr, $PUBLIC},
	{"hide", "()V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_hide89},
	{"isComponentObtainingGraphicsFrom", "(Ljava/awt/Component;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Component*)>(&JComponent::isComponentObtainingGraphicsFrom))},
	{"isDoubleBuffered", "()Z", nullptr, $PUBLIC},
	{"isLightweightComponent", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Component*)>(&JComponent::isLightweightComponent))},
	{"isManagingFocus", "()Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_isManagingFocus93},
	{"isOpaque", "()Z", nullptr, $PUBLIC},
	{"isOptimizedDrawingEnabled", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_isOptimizedDrawingEnabled95},
	{"isPainting", "()Z", nullptr, 0},
	{"isPaintingForPrint", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(JComponent::*)()>(&JComponent::isPaintingForPrint)), nullptr, nullptr, _JComponent_MethodAnnotations_isPaintingForPrint97},
	{"isPaintingOrigin", "()Z", nullptr, $PROTECTED},
	{"isPaintingTile", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_isPaintingTile99},
	{"isRequestFocusEnabled", "()Z", nullptr, $PUBLIC},
	{"isValidateRoot", "()Z", nullptr, $PUBLIC},
	{"lambda$revalidate$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(JComponent::*)()>(&JComponent::lambda$revalidate$0))},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintChildren", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintForceDoubleBuffered", "(Ljava/awt/Graphics;)V", nullptr, 0},
	{"paintImmediately", "(IIII)V", nullptr, $PUBLIC},
	{"paintImmediately", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"paintToOffscreen", "(Ljava/awt/Graphics;IIIIII)V", nullptr, 0},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"printAll", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"printBorder", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"printChildren", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"printComponent", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"processComponentKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PROTECTED},
	{"processKeyBinding", "(Ljavax/swing/KeyStroke;Ljava/awt/event/KeyEvent;IZ)Z", nullptr, $PROTECTED},
	{"processKeyBindings", "(Ljava/awt/event/KeyEvent;Z)Z", nullptr, 0},
	{"processKeyBindingsForAllComponents", "(Ljava/awt/event/KeyEvent;Ljava/awt/Container;Z)Z", nullptr, $STATIC, $method(static_cast<bool(*)($KeyEvent*,$Container*,bool)>(&JComponent::processKeyBindingsForAllComponents))},
	{"processKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PROTECTED},
	{"processMouseEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PROTECTED},
	{"processMouseMotionEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PROTECTED},
	{"putClientProperty", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(JComponent::*)(Object$*,Object$*)>(&JComponent::putClientProperty))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JComponent::*)($ObjectInputStream*)>(&JComponent::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"rectangleIsObscured", "(IIII)Z", nullptr, 0},
	{"recycleRectangle", "(Ljava/awt/Rectangle;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Rectangle*)>(&JComponent::recycleRectangle))},
	{"registerKeyboardAction", "(Ljava/awt/event/ActionListener;Ljava/lang/String;Ljavax/swing/KeyStroke;I)V", nullptr, $PUBLIC},
	{"registerKeyboardAction", "(Ljava/awt/event/ActionListener;Ljavax/swing/KeyStroke;I)V", nullptr, $PUBLIC},
	{"registerNextFocusableComponent", "()V", nullptr, $PRIVATE, $method(static_cast<void(JComponent::*)()>(&JComponent::registerNextFocusableComponent))},
	{"registerNextFocusableComponent", "(Ljava/awt/Component;)V", nullptr, $PRIVATE, $method(static_cast<void(JComponent::*)($Component*)>(&JComponent::registerNextFocusableComponent))},
	{"registerWithKeyboardManager", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(JComponent::*)(bool)>(&JComponent::registerWithKeyboardManager))},
	{"registerWithKeyboardManager", "(Ljavax/swing/KeyStroke;)V", nullptr, $PRIVATE, $method(static_cast<void(JComponent::*)($KeyStroke*)>(&JComponent::registerWithKeyboardManager))},
	{"removeAncestorListener", "(Ljavax/swing/event/AncestorListener;)V", nullptr, $PUBLIC},
	{"removeNotify", "()V", nullptr, $PUBLIC},
	{"removeVetoableChangeListener", "(Ljava/beans/VetoableChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"repaint", "(JIIII)V", nullptr, $PUBLIC},
	{"repaint", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"requestDefaultFocus", "()Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_requestDefaultFocus139},
	{"requestFocus", "()V", nullptr, $PUBLIC},
	{"requestFocus", "(Z)Z", nullptr, $PUBLIC},
	{"requestFocusInWindow", "()Z", nullptr, $PUBLIC},
	{"requestFocusInWindow", "(Z)Z", nullptr, $PROTECTED},
	{"resetKeyboardActions", "()V", nullptr, $PUBLIC},
	{"reshape", "(IIII)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_reshape145},
	{"revalidate", "()V", nullptr, $PUBLIC},
	{"safelyGetGraphics", "(Ljava/awt/Component;)Ljava/awt/Graphics;", nullptr, $STATIC, $method(static_cast<$Graphics*(*)($Component*)>(&JComponent::safelyGetGraphics))},
	{"safelyGetGraphics", "(Ljava/awt/Component;Ljava/awt/Component;)Ljava/awt/Graphics;", nullptr, $STATIC, $method(static_cast<$Graphics*(*)($Component*,$Component*)>(&JComponent::safelyGetGraphics))},
	{"scrollRectToVisible", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"setActionMap", "(Ljavax/swing/ActionMap;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(JComponent::*)($ActionMap*)>(&JComponent::setActionMap))},
	{"setAlignmentX", "(F)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_setAlignmentX151},
	{"setAlignmentY", "(F)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_setAlignmentY152},
	{"setAutoscrolls", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_setAutoscrolls153},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_setBackground154},
	{"setBorder", "(Ljavax/swing/border/Border;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_setBorder155},
	{"setComponentPopupMenu", "(Ljavax/swing/JPopupMenu;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_setComponentPopupMenu156},
	{"setCreatedDoubleBuffer", "(Z)V", nullptr, 0},
	{"setDebugGraphicsOptions", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_setDebugGraphicsOptions158},
	{"setDefaultLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Locale*)>(&JComponent::setDefaultLocale))},
	{"setDoubleBuffered", "(Z)V", nullptr, $PUBLIC},
	{"setDropLocation", "(Ljavax/swing/TransferHandler$DropLocation;Ljava/lang/Object;Z)Ljava/lang/Object;", nullptr, 0},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_setEnabled162},
	{"setFlag", "(IZ)V", nullptr, $PRIVATE, $method(static_cast<void(JComponent::*)(int32_t,bool)>(&JComponent::setFlag))},
	{"setFocusTraversalKeys", "(ILjava/util/Set;)V", "(ILjava/util/Set<+Ljava/awt/AWTKeyStroke;>;)V", $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_setFont165},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_setForeground166},
	{"setInheritsPopupMenu", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_setInheritsPopupMenu167},
	{"setInputMap", "(ILjavax/swing/InputMap;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(JComponent::*)(int32_t,$InputMap*)>(&JComponent::setInputMap))},
	{"setInputVerifier", "(Ljavax/swing/InputVerifier;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_setInputVerifier169},
	{"setMaximumSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_setMaximumSize170},
	{"setMinimumSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_setMinimumSize171},
	{"setNextFocusableComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_setNextFocusableComponent172},
	{"setOpaque", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_setOpaque173},
	{"setPaintingChild", "(Ljava/awt/Component;)V", nullptr, 0},
	{"setPreferredSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_setPreferredSize175},
	{"setRequestFocusEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setToolTipText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_setToolTipText177},
	{"setTransferHandler", "(Ljavax/swing/TransferHandler;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_setTransferHandler178},
	{"setUI", "(Ljavax/swing/plaf/ComponentUI;)V", nullptr, $PROTECTED, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_setUI179},
	{"setUIProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, 0},
	{"setVerifyInputWhenFocusTarget", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_setVerifyInputWhenFocusTarget181},
	{"setVisible", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComponent_MethodAnnotations_setVisible182},
	{"setWriteObjCounter", "(Ljavax/swing/JComponent;B)V", nullptr, $STATIC, $method(static_cast<void(*)(JComponent*,int8_t)>(&JComponent::setWriteObjCounter))},
	{"shouldDebugGraphics", "()I", nullptr, 0},
	{"superProcessMouseMotionEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallUIAndProperties", "()V", nullptr, $PRIVATE, $method(static_cast<void(JComponent::*)()>(&JComponent::uninstallUIAndProperties))},
	{"unregisterKeyboardAction", "(Ljavax/swing/KeyStroke;)V", nullptr, $PUBLIC},
	{"unregisterWithKeyboardManager", "()V", nullptr, $PRIVATE, $method(static_cast<void(JComponent::*)()>(&JComponent::unregisterWithKeyboardManager))},
	{"unregisterWithKeyboardManager", "(Ljavax/swing/KeyStroke;)V", nullptr, $PRIVATE, $method(static_cast<void(JComponent::*)($KeyStroke*)>(&JComponent::unregisterWithKeyboardManager))},
	{"update", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"validateAlignment", "(F)F", nullptr, $PRIVATE, $method(static_cast<float(JComponent::*)(float)>(&JComponent::validateAlignment))},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JComponent::*)($ObjectOutputStream*)>(&JComponent::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JComponent_InnerClassesInfo_[] = {
	{"javax.swing.TransferHandler$HasGetTransferHandler", "javax.swing.TransferHandler", "HasGetTransferHandler", $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.JComponent$ReadObjectCallback", "javax.swing.JComponent", "ReadObjectCallback", $PRIVATE},
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{"javax.swing.JComponent$KeyboardState", "javax.swing.JComponent", "KeyboardState", $STATIC},
	{"javax.swing.JComponent$IntVector", "javax.swing.JComponent", "IntVector", $STATIC | $FINAL},
	{"javax.swing.JComponent$ActionStandin", "javax.swing.JComponent", "ActionStandin", $FINAL},
	{"javax.swing.JComponent$2", nullptr, nullptr, 0},
	{"javax.swing.JComponent$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JComponent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.JComponent",
	"java.awt.Container",
	"javax.swing.TransferHandler$HasGetTransferHandler",
	_JComponent_FieldInfo_,
	_JComponent_MethodInfo_,
	nullptr,
	nullptr,
	_JComponent_InnerClassesInfo_,
	_JComponent_Annotations_,
	nullptr,
	"javax.swing.JComponent$ReadObjectCallback,javax.swing.JComponent$AccessibleJComponent,javax.swing.JComponent$AccessibleJComponent$AccessibleFocusHandler,javax.swing.JComponent$AccessibleJComponent$AccessibleContainerHandler,javax.swing.JComponent$KeyboardState,javax.swing.JComponent$IntVector,javax.swing.JComponent$ActionStandin,javax.swing.JComponent$2,javax.swing.JComponent$1"
};

$Object* allocate$JComponent($Class* clazz) {
	return $of($alloc(JComponent));
}

$String* JComponent::toString() {
	 return this->$Container::toString();
}

int32_t JComponent::hashCode() {
	 return this->$Container::hashCode();
}

bool JComponent::equals(Object$* arg0) {
	 return this->$Container::equals(arg0);
}

$Object* JComponent::clone() {
	 return this->$Container::clone();
}

void JComponent::finalize() {
	this->$Container::finalize();
}


$String* JComponent::uiClassID = nullptr;

$Hashtable* JComponent::readObjectCallbacks = nullptr;

$Set* JComponent::managingFocusForwardTraversalKeys = nullptr;

$Set* JComponent::managingFocusBackwardTraversalKeys = nullptr;

bool JComponent::DEBUG_GRAPHICS_LOADED = false;

$Object* JComponent::INPUT_VERIFIER_SOURCE_KEY = nullptr;

$String* JComponent::KEYBOARD_BINDINGS_KEY = nullptr;

$String* JComponent::WHEN_IN_FOCUSED_WINDOW_BINDINGS = nullptr;

$String* JComponent::TOOL_TIP_TEXT_KEY = nullptr;
$String* JComponent::NEXT_FOCUS = nullptr;

$List* JComponent::tempRectangles = nullptr;

$String* JComponent::defaultLocale = nullptr;
$Component* JComponent::componentObtainingGraphicsFrom = nullptr;
$Object* JComponent::componentObtainingGraphicsFromLock = nullptr;
$RequestFocusController* JComponent::focusController = nullptr;

$AccessibleContext* JComponent::access$300(JComponent* x0) {
	$init(JComponent);
	return $nc(x0)->accessibleContext;
}

$AccessibleContext* JComponent::access$200(JComponent* x0) {
	$init(JComponent);
	return $nc(x0)->accessibleContext;
}

$AccessibleContext* JComponent::access$100(JComponent* x0) {
	$init(JComponent);
	return $nc(x0)->accessibleContext;
}

$AccessibleContext* JComponent::access$000(JComponent* x0) {
	$init(JComponent);
	return $nc(x0)->accessibleContext;
}

$Graphics* JComponent::safelyGetGraphics($Component* c) {
	$init(JComponent);
	return safelyGetGraphics(c, $($SwingUtilities::getRoot(c)));
}

$Graphics* JComponent::safelyGetGraphics($Component* c, $Component* root) {
	$init(JComponent);
	$synchronized(JComponent::componentObtainingGraphicsFromLock) {
		$assignStatic(JComponent::componentObtainingGraphicsFrom, root);
		$var($Graphics, g, $nc(c)->getGraphics());
		$assignStatic(JComponent::componentObtainingGraphicsFrom, nullptr);
		return g;
	}
}

void JComponent::getGraphicsInvoked($Component* root) {
	$init(JComponent);
	if (!JComponent::isComponentObtainingGraphicsFrom(root)) {
		$var($JRootPane, rootPane, $nc(($cast($RootPaneContainer, root)))->getRootPane());
		if (rootPane != nullptr) {
			rootPane->disableTrueDoubleBuffering();
		}
	}
}

bool JComponent::isComponentObtainingGraphicsFrom($Component* c) {
	$init(JComponent);
	$synchronized(JComponent::componentObtainingGraphicsFromLock) {
		return (JComponent::componentObtainingGraphicsFrom == c);
	}
}

$Set* JComponent::getManagingFocusForwardTraversalKeys() {
	$init(JComponent);
	$synchronized(JComponent::class$) {
		if (JComponent::managingFocusForwardTraversalKeys == nullptr) {
			$assignStatic(JComponent::managingFocusForwardTraversalKeys, $new($HashSet, 1));
			$nc(JComponent::managingFocusForwardTraversalKeys)->add($($KeyStroke::getKeyStroke($KeyEvent::VK_TAB, $InputEvent::CTRL_MASK)));
		}
	}
	return JComponent::managingFocusForwardTraversalKeys;
}

$Set* JComponent::getManagingFocusBackwardTraversalKeys() {
	$init(JComponent);
	$synchronized(JComponent::class$) {
		if (JComponent::managingFocusBackwardTraversalKeys == nullptr) {
			$assignStatic(JComponent::managingFocusBackwardTraversalKeys, $new($HashSet, 1));
			$nc(JComponent::managingFocusBackwardTraversalKeys)->add($($KeyStroke::getKeyStroke($KeyEvent::VK_TAB, $InputEvent::SHIFT_MASK | $InputEvent::CTRL_MASK)));
		}
	}
	return JComponent::managingFocusBackwardTraversalKeys;
}

$Rectangle* JComponent::fetchRectangle() {
	$init(JComponent);
	$synchronized(JComponent::tempRectangles) {
		$var($Rectangle, rect, nullptr);
		int32_t size = $nc(JComponent::tempRectangles)->size();
		if (size > 0) {
			$assign(rect, $cast($Rectangle, $nc(JComponent::tempRectangles)->remove(size - 1)));
		} else {
			$assign(rect, $new($Rectangle, 0, 0, 0, 0));
		}
		return rect;
	}
}

void JComponent::recycleRectangle($Rectangle* rect) {
	$init(JComponent);
	$synchronized(JComponent::tempRectangles) {
		$nc(JComponent::tempRectangles)->add(rect);
	}
}

void JComponent::setInheritsPopupMenu(bool value) {
	bool oldValue = getFlag(JComponent::INHERITS_POPUP_MENU);
	setFlag(JComponent::INHERITS_POPUP_MENU, value);
	firePropertyChange("inheritsPopupMenu"_s, oldValue, value);
}

bool JComponent::getInheritsPopupMenu() {
	return getFlag(JComponent::INHERITS_POPUP_MENU);
}

void JComponent::setComponentPopupMenu($JPopupMenu* popup) {
	if (popup != nullptr) {
		enableEvents($AWTEvent::MOUSE_EVENT_MASK);
	}
	$var($JPopupMenu, oldPopup, this->popupMenu);
	$set(this, popupMenu, popup);
	firePropertyChange("componentPopupMenu"_s, $of(oldPopup), $of(popup));
}

$JPopupMenu* JComponent::getComponentPopupMenu() {
	if (!getInheritsPopupMenu()) {
		return this->popupMenu;
	}
	if (this->popupMenu == nullptr) {
		$var($Container, parent, getParent());
		while (parent != nullptr) {
			if ($instanceOf(JComponent, parent)) {
				return $nc(($cast(JComponent, parent)))->getComponentPopupMenu();
			}
			if ($instanceOf($Window, parent) || $instanceOf($Applet, parent)) {
				break;
			}
			$assign(parent, parent->getParent());
		}
		return nullptr;
	}
	return this->popupMenu;
}

void JComponent::init$() {
	$useLocalCurrentObjectStackCache();
	$Container::init$();
	$set(this, listenerList, $new($EventListenerList));
	$set(this, inputVerifier, nullptr);
	this->verifyInputWhenFocusTarget = true;
	$set(this, revalidateRunnableScheduled, $new($AtomicBoolean, false));
	enableEvents($AWTEvent::KEY_EVENT_MASK);
	if (isManagingFocus()) {
		$LookAndFeel::installProperty(this, "focusTraversalKeysForward"_s, $(getManagingFocusForwardTraversalKeys()));
		$LookAndFeel::installProperty(this, "focusTraversalKeysBackward"_s, $(getManagingFocusBackwardTraversalKeys()));
	}
	$Container::setLocale($(JComponent::getDefaultLocale()));
}

void JComponent::updateUI() {
}

$ComponentUI* JComponent::getUI() {
	return this->ui;
}

void JComponent::setUI($ComponentUI* newUI) {
	$useLocalCurrentObjectStackCache();
	uninstallUIAndProperties();
	$init($RenderingHints);
	$set(this, aaHint, $nc($($UIManager::getDefaults()))->get($RenderingHints::KEY_TEXT_ANTIALIASING));
	$set(this, lcdRenderingHint, $nc($($UIManager::getDefaults()))->get($RenderingHints::KEY_TEXT_LCD_CONTRAST));
	$var($ComponentUI, oldUI, this->ui);
	$set(this, ui, newUI);
	if (this->ui != nullptr) {
		$nc(this->ui)->installUI(this);
	}
	firePropertyChange("UI"_s, $of(oldUI), $of(newUI));
	revalidate();
	repaint();
}

void JComponent::uninstallUIAndProperties() {
	$useLocalCurrentObjectStackCache();
	if (this->ui != nullptr) {
		$nc(this->ui)->uninstallUI(this);
		if (this->clientProperties != nullptr) {
			$synchronized(this->clientProperties) {
				$var($ObjectArray, clientPropertyKeys, $nc(this->clientProperties)->getKeys(nullptr));
				if (clientPropertyKeys != nullptr) {
					{
						$var($ObjectArray, arr$, clientPropertyKeys);
						int32_t len$ = arr$->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($Object0, key, arr$->get(i$));
							{
								if ($instanceOf($UIClientPropertyKey, key)) {
									putClientProperty(key, nullptr);
								}
							}
						}
					}
				}
			}
		}
	}
}

$String* JComponent::getUIClassID() {
	return JComponent::uiClassID;
}

$Graphics* JComponent::getComponentGraphics($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, componentGraphics, g);
	if (this->ui != nullptr && JComponent::DEBUG_GRAPHICS_LOADED) {
		bool var$0 = ($DebugGraphics::debugComponentCount() != 0);
		if (var$0 && (shouldDebugGraphics() != 0) && !($instanceOf($DebugGraphics, g))) {
			$assign(componentGraphics, $new($DebugGraphics, g, this));
		}
	}
	$nc(componentGraphics)->setColor($(getForeground()));
	componentGraphics->setFont($(getFont()));
	return componentGraphics;
}

void JComponent::paintComponent($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	if (this->ui != nullptr) {
		$var($Graphics, scratchGraphics, (g == nullptr) ? ($Graphics*)nullptr : $nc(g)->create());
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(this->ui)->update(scratchGraphics, this);
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$nc(scratchGraphics)->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void JComponent::paintChildren($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, sg, g);
	$synchronized(getTreeLock()) {
		int32_t i = getComponentCount() - 1;
		if (i < 0) {
			return;
		}
		if (this->paintingChild != nullptr && ($instanceOf(JComponent, this->paintingChild)) && $nc(this->paintingChild)->isOpaque()) {
			for (; i >= 0; --i) {
				if (getComponent(i) == this->paintingChild) {
					break;
				}
			}
		}
		$var($Rectangle, tmpRect, fetchRectangle());
		bool var$0 = !isOptimizedDrawingEnabled();
		bool checkSiblings = (var$0 && checkIfChildObscuredBySibling());
		$var($Rectangle, clipBounds, nullptr);
		if (checkSiblings) {
			$assign(clipBounds, $nc(sg)->getClipBounds());
			if (clipBounds == nullptr) {
				int32_t var$1 = getWidth();
				$assign(clipBounds, $new($Rectangle, 0, 0, var$1, getHeight()));
			}
		}
		bool printing = getFlag(JComponent::IS_PRINTING);
		$var($Window, window, $SwingUtilities::getWindowAncestor(this));
		bool isWindowOpaque = window == nullptr || $nc(window)->isOpaque();
		for (; i >= 0; --i) {
			$var($Component, comp, getComponent(i));
			if (comp == nullptr) {
				continue;
			}
			bool isJComponent = $instanceOf(JComponent, comp);
			bool var$2 = (!isWindowOpaque || isJComponent || isLightweightComponent(comp));
			if (var$2 && $nc(comp)->isVisible()) {
				$var($Rectangle, cr, nullptr);
				$assign(cr, comp->getBounds(tmpRect));
				$var($Shape, clip, $nc(g)->getClip());
				bool hitClip = (clip != nullptr) ? $nc(clip)->intersects((double)$nc(cr)->x, (double)cr->y, (double)cr->width, (double)cr->height) : true;
				if (hitClip) {
					if (checkSiblings && i > 0) {
						int32_t x = $nc(cr)->x;
						int32_t y = cr->y;
						int32_t width = cr->width;
						int32_t height = cr->height;
						$SwingUtilities::computeIntersection($nc(clipBounds)->x, clipBounds->y, clipBounds->width, clipBounds->height, cr);
						if (getObscuredState(i, cr->x, cr->y, cr->width, cr->height) == JComponent::COMPLETELY_OBSCURED) {
							continue;
						}
						cr->x = x;
						cr->y = y;
						cr->width = width;
						cr->height = height;
					}
					$var($Graphics, cg, $nc(sg)->create($nc(cr)->x, cr->y, cr->width, cr->height));
					$nc(cg)->setColor($(comp->getForeground()));
					cg->setFont($(comp->getFont()));
					bool shouldSetFlagBack = false;
					{
						$var($Throwable, var$3, nullptr);
						try {
							if (isJComponent) {
								if (getFlag(JComponent::ANCESTOR_USING_BUFFER)) {
									$nc(($cast(JComponent, comp)))->setFlag(JComponent::ANCESTOR_USING_BUFFER, true);
									shouldSetFlagBack = true;
								}
								if (getFlag(JComponent::IS_PAINTING_TILE)) {
									$nc(($cast(JComponent, comp)))->setFlag(JComponent::IS_PAINTING_TILE, true);
									shouldSetFlagBack = true;
								}
								if (!printing) {
									comp->paint(cg);
								} else if (!getFlag(JComponent::IS_PRINTING_ALL)) {
									comp->print(cg);
								} else {
									comp->printAll(cg);
								}
							} else if (!printing) {
								comp->paint(cg);
							} else if (!getFlag(JComponent::IS_PRINTING_ALL)) {
								comp->print(cg);
							} else {
								comp->printAll(cg);
							}
						} catch ($Throwable&) {
							$assign(var$3, $catch());
						} /*finally*/ {
							cg->dispose();
							if (shouldSetFlagBack) {
								$nc(($cast(JComponent, comp)))->setFlag(JComponent::ANCESTOR_USING_BUFFER, false);
								$nc(($cast(JComponent, comp)))->setFlag(JComponent::IS_PAINTING_TILE, false);
							}
						}
						if (var$3 != nullptr) {
							$throw(var$3);
						}
					}
				}
			}
		}
		recycleRectangle(tmpRect);
	}
}

void JComponent::paintBorder($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($Border, border, getBorder());
	if (border != nullptr) {
		$var($Graphics, var$0, g);
		int32_t var$1 = getWidth();
		border->paintBorder(this, var$0, 0, 0, var$1, getHeight());
	}
}

void JComponent::update($Graphics* g) {
	paint(g);
}

void JComponent::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	bool shouldClearPaintFlags = false;
	bool var$0 = (getWidth() <= 0);
	if (var$0 || (getHeight() <= 0)) {
		return;
	}
	$var($Graphics, componentGraphics, getComponentGraphics(g));
	$var($Graphics, co, $nc(componentGraphics)->create());
	{
		$var($Throwable, var$1, nullptr);
		try {
			$var($RepaintManager, repaintManager, $RepaintManager::currentManager(this));
			$var($Rectangle, clipRect, $nc(co)->getClipBounds());
			int32_t clipX = 0;
			int32_t clipY = 0;
			int32_t clipW = 0;
			int32_t clipH = 0;
			if (clipRect == nullptr) {
				clipX = (clipY = 0);
				clipW = getWidth();
				clipH = getHeight();
			} else {
				clipX = $nc(clipRect)->x;
				clipY = clipRect->y;
				clipW = clipRect->width;
				clipH = clipRect->height;
			}
			if (clipW > getWidth()) {
				clipW = getWidth();
			}
			if (clipH > getHeight()) {
				clipH = getHeight();
			}
			bool var$2 = getParent() != nullptr;
			if (var$2 && !($instanceOf(JComponent, $(getParent())))) {
				adjustPaintFlags();
				shouldClearPaintFlags = true;
			}
			int32_t bw = 0;
			int32_t bh = 0;
			bool printing = getFlag(JComponent::IS_PRINTING);
			bool var$5 = !printing && $nc(repaintManager)->isDoubleBufferingEnabled();
			bool var$4 = var$5 && !getFlag(JComponent::ANCESTOR_USING_BUFFER);
			bool var$3 = var$4 && isDoubleBuffered();
			if (var$3) {
				bool var$6 = getFlag(JComponent::IS_REPAINTING);
				var$3 = (var$6 || repaintManager->isPainting());
			}
			if (var$3) {
				$nc(repaintManager)->beginPaint();
				{
					$var($Throwable, var$7, nullptr);
					try {
						repaintManager->paint(this, this, co, clipX, clipY, clipW, clipH);
					} catch ($Throwable&) {
						$assign(var$7, $catch());
					} /*finally*/ {
						repaintManager->endPaint();
					}
					if (var$7 != nullptr) {
						$throw(var$7);
					}
				}
			} else {
				if (clipRect == nullptr) {
					co->setClip(clipX, clipY, clipW, clipH);
				}
				if (!rectangleIsObscured(clipX, clipY, clipW, clipH)) {
					if (!printing) {
						paintComponent(co);
						paintBorder(co);
					} else {
						printComponent(co);
						printBorder(co);
					}
				}
				if (!printing) {
					paintChildren(co);
				} else {
					printChildren(co);
				}
			}
		} catch ($Throwable&) {
			$assign(var$1, $catch());
		} /*finally*/ {
			$nc(co)->dispose();
			if (shouldClearPaintFlags) {
				setFlag(JComponent::ANCESTOR_USING_BUFFER, false);
				setFlag(JComponent::IS_PAINTING_TILE, false);
				setFlag(JComponent::IS_PRINTING, false);
				setFlag(JComponent::IS_PRINTING_ALL, false);
			}
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
	}
}

void JComponent::paintForceDoubleBuffered($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($RepaintManager, rm, $RepaintManager::currentManager(this));
	$var($Rectangle, clip, $nc(g)->getClipBounds());
	$nc(rm)->beginPaint();
	setFlag(JComponent::IS_REPAINTING, true);
	{
		$var($Throwable, var$0, nullptr);
		try {
			rm->paint(this, this, g, $nc(clip)->x, clip->y, clip->width, clip->height);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			rm->endPaint();
			setFlag(JComponent::IS_REPAINTING, false);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool JComponent::isPainting() {
	$var($Container, component, this);
	while (component != nullptr) {
		if ($instanceOf(JComponent, component) && $nc(($cast(JComponent, component)))->getFlag(JComponent::ANCESTOR_USING_BUFFER)) {
			return true;
		}
		$assign(component, component->getParent());
	}
	return false;
}

void JComponent::adjustPaintFlags() {
	$useLocalCurrentObjectStackCache();
	$var(JComponent, jparent, nullptr);
	$var($Container, parent, nullptr);
	for ($assign(parent, getParent()); parent != nullptr; $assign(parent, $nc(parent)->getParent())) {
		if ($instanceOf(JComponent, parent)) {
			$assign(jparent, $cast(JComponent, parent));
			if (jparent->getFlag(JComponent::ANCESTOR_USING_BUFFER)) {
				setFlag(JComponent::ANCESTOR_USING_BUFFER, true);
			}
			if (jparent->getFlag(JComponent::IS_PAINTING_TILE)) {
				setFlag(JComponent::IS_PAINTING_TILE, true);
			}
			if (jparent->getFlag(JComponent::IS_PRINTING)) {
				setFlag(JComponent::IS_PRINTING, true);
			}
			if (jparent->getFlag(JComponent::IS_PRINTING_ALL)) {
				setFlag(JComponent::IS_PRINTING_ALL, true);
			}
			break;
		}
	}
}

void JComponent::printAll($Graphics* g) {
	setFlag(JComponent::IS_PRINTING_ALL, true);
	{
		$var($Throwable, var$0, nullptr);
		try {
			print(g);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			setFlag(JComponent::IS_PRINTING_ALL, false);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JComponent::print($Graphics* g) {
	setFlag(JComponent::IS_PRINTING, true);
	firePropertyChange("paintingForPrint"_s, false, true);
	{
		$var($Throwable, var$0, nullptr);
		try {
			paint(g);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			setFlag(JComponent::IS_PRINTING, false);
			firePropertyChange("paintingForPrint"_s, true, false);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JComponent::printComponent($Graphics* g) {
	paintComponent(g);
}

void JComponent::printChildren($Graphics* g) {
	paintChildren(g);
}

void JComponent::printBorder($Graphics* g) {
	paintBorder(g);
}

bool JComponent::isPaintingTile() {
	return getFlag(JComponent::IS_PAINTING_TILE);
}

bool JComponent::isPaintingForPrint() {
	return getFlag(JComponent::IS_PRINTING);
}

bool JComponent::isManagingFocus() {
	return false;
}

void JComponent::registerNextFocusableComponent() {
	registerNextFocusableComponent($(getNextFocusableComponent()));
}

void JComponent::registerNextFocusableComponent($Component* nextFocusableComponent) {
	$useLocalCurrentObjectStackCache();
	if (nextFocusableComponent == nullptr) {
		return;
	}
	$var($Container, nearestRoot, (isFocusCycleRoot()) ? static_cast<$Container*>(this) : getFocusCycleRootAncestor());
	$var($FocusTraversalPolicy, policy, $nc(nearestRoot)->getFocusTraversalPolicy());
	if (!($instanceOf($LegacyGlueFocusTraversalPolicy, policy))) {
		$assign(policy, $new($LegacyGlueFocusTraversalPolicy, policy));
		nearestRoot->setFocusTraversalPolicy(policy);
	}
	$nc(($cast($LegacyGlueFocusTraversalPolicy, policy)))->setNextFocusableComponent(this, nextFocusableComponent);
}

void JComponent::deregisterNextFocusableComponent() {
	$useLocalCurrentObjectStackCache();
	$var($Component, nextFocusableComponent, getNextFocusableComponent());
	if (nextFocusableComponent == nullptr) {
		return;
	}
	$var($Container, nearestRoot, (isFocusCycleRoot()) ? static_cast<$Container*>(this) : getFocusCycleRootAncestor());
	if (nearestRoot == nullptr) {
		return;
	}
	$var($FocusTraversalPolicy, policy, $nc(nearestRoot)->getFocusTraversalPolicy());
	if ($instanceOf($LegacyGlueFocusTraversalPolicy, policy)) {
		$nc(($cast($LegacyGlueFocusTraversalPolicy, policy)))->unsetNextFocusableComponent(this, nextFocusableComponent);
	}
}

void JComponent::setNextFocusableComponent($Component* aComponent) {
	bool displayable = isDisplayable();
	if (displayable) {
		deregisterNextFocusableComponent();
	}
	putClientProperty(JComponent::NEXT_FOCUS, aComponent);
	if (displayable) {
		registerNextFocusableComponent(aComponent);
	}
}

$Component* JComponent::getNextFocusableComponent() {
	return $cast($Component, getClientProperty(JComponent::NEXT_FOCUS));
}

void JComponent::setRequestFocusEnabled(bool requestFocusEnabled) {
	setFlag(JComponent::REQUEST_FOCUS_DISABLED, !requestFocusEnabled);
}

bool JComponent::isRequestFocusEnabled() {
	return !getFlag(JComponent::REQUEST_FOCUS_DISABLED);
}

void JComponent::requestFocus() {
	$Container::requestFocus();
}

bool JComponent::requestFocus(bool temporary) {
	return $Container::requestFocus(temporary);
}

bool JComponent::requestFocusInWindow() {
	return $Container::requestFocusInWindow();
}

bool JComponent::requestFocusInWindow(bool temporary) {
	return $Container::requestFocusInWindow(temporary);
}

void JComponent::grabFocus() {
	requestFocus();
}

void JComponent::setVerifyInputWhenFocusTarget(bool verifyInputWhenFocusTarget) {
	bool oldVerifyInputWhenFocusTarget = this->verifyInputWhenFocusTarget;
	this->verifyInputWhenFocusTarget = verifyInputWhenFocusTarget;
	firePropertyChange("verifyInputWhenFocusTarget"_s, oldVerifyInputWhenFocusTarget, verifyInputWhenFocusTarget);
}

bool JComponent::getVerifyInputWhenFocusTarget() {
	return this->verifyInputWhenFocusTarget;
}

$FontMetrics* JComponent::getFontMetrics($Font* font) {
	return $SwingUtilities2::getFontMetrics(this, font);
}

void JComponent::setPreferredSize($Dimension* preferredSize) {
	$Container::setPreferredSize(preferredSize);
}

$Dimension* JComponent::getPreferredSize() {
	if (isPreferredSizeSet()) {
		return $Container::getPreferredSize();
	}
	$var($Dimension, size, nullptr);
	if (this->ui != nullptr) {
		$assign(size, $nc(this->ui)->getPreferredSize(this));
	}
	return (size != nullptr) ? size : $Container::getPreferredSize();
}

void JComponent::setMaximumSize($Dimension* maximumSize) {
	$Container::setMaximumSize(maximumSize);
}

$Dimension* JComponent::getMaximumSize() {
	if (isMaximumSizeSet()) {
		return $Container::getMaximumSize();
	}
	$var($Dimension, size, nullptr);
	if (this->ui != nullptr) {
		$assign(size, $nc(this->ui)->getMaximumSize(this));
	}
	return (size != nullptr) ? size : $Container::getMaximumSize();
}

void JComponent::setMinimumSize($Dimension* minimumSize) {
	$Container::setMinimumSize(minimumSize);
}

$Dimension* JComponent::getMinimumSize() {
	if (isMinimumSizeSet()) {
		return $Container::getMinimumSize();
	}
	$var($Dimension, size, nullptr);
	if (this->ui != nullptr) {
		$assign(size, $nc(this->ui)->getMinimumSize(this));
	}
	return (size != nullptr) ? size : $Container::getMinimumSize();
}

bool JComponent::contains(int32_t x, int32_t y) {
	return (this->ui != nullptr) ? $nc(this->ui)->contains(this, x, y) : $Container::contains(x, y);
}

void JComponent::setBorder($Border* border) {
	$useLocalCurrentObjectStackCache();
	$var($Border, oldBorder, this->border);
	$set(this, border, border);
	firePropertyChange("border"_s, $of(oldBorder), $of(border));
	if (border != oldBorder) {
		if (border == nullptr || oldBorder == nullptr || !($nc($($nc(border)->getBorderInsets(this)))->equals($($nc(oldBorder)->getBorderInsets(this))))) {
			revalidate();
		}
		repaint();
	}
}

$Border* JComponent::getBorder() {
	return this->border;
}

$Insets* JComponent::getInsets() {
	if (this->border != nullptr) {
		return $nc(this->border)->getBorderInsets(this);
	}
	return $Container::getInsets();
}

$Insets* JComponent::getInsets($Insets* insets$renamed) {
	$var($Insets, insets, insets$renamed);
	if (insets == nullptr) {
		$assign(insets, $new($Insets, 0, 0, 0, 0));
	}
	if (this->border != nullptr) {
		if ($instanceOf($AbstractBorder, this->border)) {
			return $nc(($cast($AbstractBorder, this->border)))->getBorderInsets(this, insets);
		} else {
			return $nc(this->border)->getBorderInsets(this);
		}
	} else {
		$nc(insets)->left = (insets->top = (insets->right = (insets->bottom = 0)));
		return insets;
	}
}

float JComponent::getAlignmentY() {
	if (this->isAlignmentYSet) {
		return this->alignmentY;
	}
	return $Container::getAlignmentY();
}

void JComponent::setAlignmentY(float alignmentY) {
	this->alignmentY = validateAlignment(alignmentY);
	this->isAlignmentYSet = true;
}

float JComponent::getAlignmentX() {
	if (this->isAlignmentXSet) {
		return this->alignmentX;
	}
	return $Container::getAlignmentX();
}

void JComponent::setAlignmentX(float alignmentX) {
	this->alignmentX = validateAlignment(alignmentX);
	this->isAlignmentXSet = true;
}

float JComponent::validateAlignment(float alignment) {
	return alignment > 1.0f ? 1.0f : alignment < 0.0f ? 0.0f : alignment;
}

void JComponent::setInputVerifier($InputVerifier* inputVerifier) {
	$init($ClientPropertyKey);
	$var($InputVerifier, oldInputVerifier, $cast($InputVerifier, getClientProperty($ClientPropertyKey::JComponent_INPUT_VERIFIER)));
	putClientProperty($ClientPropertyKey::JComponent_INPUT_VERIFIER, inputVerifier);
	firePropertyChange("inputVerifier"_s, $of(oldInputVerifier), $of(inputVerifier));
}

$InputVerifier* JComponent::getInputVerifier() {
	$init($ClientPropertyKey);
	return $cast($InputVerifier, getClientProperty($ClientPropertyKey::JComponent_INPUT_VERIFIER));
}

$Graphics* JComponent::getGraphics() {
	$useLocalCurrentObjectStackCache();
	if (JComponent::DEBUG_GRAPHICS_LOADED && shouldDebugGraphics() != 0) {
		$var($DebugGraphics, graphics, $new($DebugGraphics, $($Container::getGraphics()), this));
		return graphics;
	}
	return $Container::getGraphics();
}

void JComponent::setDebugGraphicsOptions(int32_t debugOptions) {
	$DebugGraphics::setDebugOptions(this, debugOptions);
}

int32_t JComponent::getDebugGraphicsOptions() {
	return $DebugGraphics::getDebugOptions(this);
}

int32_t JComponent::shouldDebugGraphics() {
	return $DebugGraphics::shouldComponentDebug(this);
}

void JComponent::registerKeyboardAction($ActionListener* anAction, $String* aCommand, $KeyStroke* aKeyStroke, int32_t aCondition) {
	$useLocalCurrentObjectStackCache();
	$var($InputMap, inputMap, getInputMap(aCondition, true));
	if (inputMap != nullptr) {
		$var($ActionMap, actionMap, getActionMap(true));
		$var($JComponent$ActionStandin, action, $new($JComponent$ActionStandin, this, anAction, aCommand));
		inputMap->put(aKeyStroke, action);
		if (actionMap != nullptr) {
			actionMap->put(action, action);
		}
	}
}

void JComponent::registerWithKeyboardManager(bool onlyIfNew) {
	$useLocalCurrentObjectStackCache();
	$var($InputMap, inputMap, getInputMap(JComponent::WHEN_IN_FOCUSED_WINDOW, false));
	$var($KeyStrokeArray, strokes, nullptr);
	$var($Hashtable, registered, $cast($Hashtable, getClientProperty(JComponent::WHEN_IN_FOCUSED_WINDOW_BINDINGS)));
	if (inputMap != nullptr) {
		$assign(strokes, inputMap->allKeys());
		if (strokes != nullptr) {
			for (int32_t counter = strokes->length - 1; counter >= 0; --counter) {
				if (!onlyIfNew || registered == nullptr || $nc(registered)->get(strokes->get(counter)) == nullptr) {
					registerWithKeyboardManager(strokes->get(counter));
				}
				if (registered != nullptr) {
					registered->remove(strokes->get(counter));
				}
			}
		}
	} else {
		$assign(strokes, nullptr);
	}
	if (registered != nullptr && registered->size() > 0) {
		$var($Enumeration, keys, registered->keys());
		while ($nc(keys)->hasMoreElements()) {
			$var($KeyStroke, ks, $cast($KeyStroke, keys->nextElement()));
			unregisterWithKeyboardManager(ks);
		}
		registered->clear();
	}
	if (strokes != nullptr && strokes->length > 0) {
		if (registered == nullptr) {
			$assign(registered, $new($Hashtable, strokes->length));
			putClientProperty(JComponent::WHEN_IN_FOCUSED_WINDOW_BINDINGS, registered);
		}
		for (int32_t counter = strokes->length - 1; counter >= 0; --counter) {
			$nc(registered)->put(strokes->get(counter), strokes->get(counter));
		}
	} else {
		putClientProperty(JComponent::WHEN_IN_FOCUSED_WINDOW_BINDINGS, nullptr);
	}
}

void JComponent::unregisterWithKeyboardManager() {
	$useLocalCurrentObjectStackCache();
	$var($Hashtable, registered, $cast($Hashtable, getClientProperty(JComponent::WHEN_IN_FOCUSED_WINDOW_BINDINGS)));
	if (registered != nullptr && registered->size() > 0) {
		$var($Enumeration, keys, registered->keys());
		while ($nc(keys)->hasMoreElements()) {
			$var($KeyStroke, ks, $cast($KeyStroke, keys->nextElement()));
			unregisterWithKeyboardManager(ks);
		}
	}
	putClientProperty(JComponent::WHEN_IN_FOCUSED_WINDOW_BINDINGS, nullptr);
}

void JComponent::componentInputMapChanged($ComponentInputMap* inputMap) {
	$var($InputMap, km, getInputMap(JComponent::WHEN_IN_FOCUSED_WINDOW, false));
	while (!$equals(km, inputMap) && km != nullptr) {
		$assign(km, km->getParent());
	}
	if (km != nullptr) {
		registerWithKeyboardManager(false);
	}
}

void JComponent::registerWithKeyboardManager($KeyStroke* aKeyStroke) {
	$nc($($KeyboardManager::getCurrentManager()))->registerKeyStroke(aKeyStroke, this);
}

void JComponent::unregisterWithKeyboardManager($KeyStroke* aKeyStroke) {
	$nc($($KeyboardManager::getCurrentManager()))->unregisterKeyStroke(aKeyStroke, this);
}

void JComponent::registerKeyboardAction($ActionListener* anAction, $KeyStroke* aKeyStroke, int32_t aCondition) {
	registerKeyboardAction(anAction, nullptr, aKeyStroke, aCondition);
}

void JComponent::unregisterKeyboardAction($KeyStroke* aKeyStroke) {
	$useLocalCurrentObjectStackCache();
	$var($ActionMap, am, getActionMap(false));
	for (int32_t counter = 0; counter < 3; ++counter) {
		$var($InputMap, km, getInputMap(counter, false));
		if (km != nullptr) {
			$var($Object, actionID, km->get(aKeyStroke));
			if (am != nullptr && actionID != nullptr) {
				am->remove(actionID);
			}
			km->remove(aKeyStroke);
		}
	}
}

$KeyStrokeArray* JComponent::getRegisteredKeyStrokes() {
	$useLocalCurrentObjectStackCache();
	$var($ints, counts, $new($ints, 3));
	$var($KeyStrokeArray2, strokes, $new($KeyStrokeArray2, 3));
	for (int32_t counter = 0; counter < 3; ++counter) {
		$var($InputMap, km, getInputMap(counter, false));
		strokes->set(counter, (km != nullptr) ? $($nc(km)->allKeys()) : ($KeyStrokeArray*)nullptr);
		counts->set(counter, (strokes->get(counter) != nullptr) ? $nc(strokes->get(counter))->length : 0);
	}
	$var($KeyStrokeArray, retValue, $new($KeyStrokeArray, counts->get(0) + counts->get(1) + counts->get(2)));
	{
		int32_t counter = 0;
		int32_t last = 0;
		for (; counter < 3; ++counter) {
			if (counts->get(counter) > 0) {
				$System::arraycopy(strokes->get(counter), 0, retValue, last, counts->get(counter));
				last += counts->get(counter);
			}
		}
	}
	return retValue;
}

int32_t JComponent::getConditionForKeyStroke($KeyStroke* aKeyStroke) {
	$useLocalCurrentObjectStackCache();
	for (int32_t counter = 0; counter < 3; ++counter) {
		$var($InputMap, inputMap, getInputMap(counter, false));
		if (inputMap != nullptr && inputMap->get(aKeyStroke) != nullptr) {
			return counter;
		}
	}
	return JComponent::UNDEFINED_CONDITION;
}

$ActionListener* JComponent::getActionForKeyStroke($KeyStroke* aKeyStroke) {
	$useLocalCurrentObjectStackCache();
	$var($ActionMap, am, getActionMap(false));
	if (am == nullptr) {
		return nullptr;
	}
	for (int32_t counter = 0; counter < 3; ++counter) {
		$var($InputMap, inputMap, getInputMap(counter, false));
		if (inputMap != nullptr) {
			$var($Object, actionBinding, inputMap->get(aKeyStroke));
			if (actionBinding != nullptr) {
				$var($Action, action, $nc(am)->get(actionBinding));
				if ($instanceOf($JComponent$ActionStandin, action)) {
					return $nc(($cast($JComponent$ActionStandin, action)))->actionListener;
				}
				return action;
			}
		}
	}
	return nullptr;
}

void JComponent::resetKeyboardActions() {
	$useLocalCurrentObjectStackCache();
	for (int32_t counter = 0; counter < 3; ++counter) {
		$var($InputMap, inputMap, getInputMap(counter, false));
		if (inputMap != nullptr) {
			inputMap->clear();
		}
	}
	$var($ActionMap, am, getActionMap(false));
	if (am != nullptr) {
		am->clear();
	}
}

void JComponent::setInputMap(int32_t condition, $InputMap* map) {
	switch (condition) {
	case JComponent::WHEN_IN_FOCUSED_WINDOW:
		{
			if (map != nullptr && !($instanceOf($ComponentInputMap, map))) {
				$throwNew($IllegalArgumentException, "WHEN_IN_FOCUSED_WINDOW InputMaps must be of type ComponentInputMap"_s);
			}
			$set(this, windowInputMap, $cast($ComponentInputMap, map));
			setFlag(JComponent::WIF_INPUTMAP_CREATED, true);
			registerWithKeyboardManager(false);
			break;
		}
	case JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT:
		{
			$set(this, ancestorInputMap, map);
			setFlag(JComponent::ANCESTOR_INPUTMAP_CREATED, true);
			break;
		}
	case JComponent::WHEN_FOCUSED:
		{
			$set(this, focusInputMap, map);
			setFlag(JComponent::FOCUS_INPUTMAP_CREATED, true);
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "condition must be one of JComponent.WHEN_IN_FOCUSED_WINDOW, JComponent.WHEN_FOCUSED or JComponent.WHEN_ANCESTOR_OF_FOCUSED_COMPONENT"_s);
		}
	}
}

$InputMap* JComponent::getInputMap(int32_t condition) {
	return getInputMap(condition, true);
}

$InputMap* JComponent::getInputMap() {
	return getInputMap(JComponent::WHEN_FOCUSED, true);
}

void JComponent::setActionMap($ActionMap* am) {
	$set(this, actionMap, am);
	setFlag(JComponent::ACTIONMAP_CREATED, true);
}

$ActionMap* JComponent::getActionMap() {
	return getActionMap(true);
}

$InputMap* JComponent::getInputMap(int32_t condition, bool create) {
	$useLocalCurrentObjectStackCache();
	switch (condition) {
	case JComponent::WHEN_FOCUSED:
		{
			if (getFlag(JComponent::FOCUS_INPUTMAP_CREATED)) {
				return this->focusInputMap;
			}
			if (create) {
				$var($InputMap, km, $new($InputMap));
				setInputMap(condition, km);
				return km;
			}
			break;
		}
	case JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT:
		{
			if (getFlag(JComponent::ANCESTOR_INPUTMAP_CREATED)) {
				return this->ancestorInputMap;
			}
			if (create) {
				$var($InputMap, km, $new($InputMap));
				setInputMap(condition, km);
				return km;
			}
			break;
		}
	case JComponent::WHEN_IN_FOCUSED_WINDOW:
		{
			if (getFlag(JComponent::WIF_INPUTMAP_CREATED)) {
				return this->windowInputMap;
			}
			if (create) {
				$var($ComponentInputMap, km, $new($ComponentInputMap, this));
				setInputMap(condition, km);
				return km;
			}
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "condition must be one of JComponent.WHEN_IN_FOCUSED_WINDOW, JComponent.WHEN_FOCUSED or JComponent.WHEN_ANCESTOR_OF_FOCUSED_COMPONENT"_s);
		}
	}
	return nullptr;
}

$ActionMap* JComponent::getActionMap(bool create) {
	if (getFlag(JComponent::ACTIONMAP_CREATED)) {
		return this->actionMap;
	}
	if (create) {
		$var($ActionMap, am, $new($ActionMap));
		setActionMap(am);
		return am;
	}
	return nullptr;
}

int32_t JComponent::getBaseline(int32_t width, int32_t height) {
	$Container::getBaseline(width, height);
	if (this->ui != nullptr) {
		return $nc(this->ui)->getBaseline(this, width, height);
	}
	return -1;
}

$Component$BaselineResizeBehavior* JComponent::getBaselineResizeBehavior() {
	if (this->ui != nullptr) {
		return $nc(this->ui)->getBaselineResizeBehavior(this);
	}
	$init($Component$BaselineResizeBehavior);
	return $Component$BaselineResizeBehavior::OTHER;
}

bool JComponent::requestDefaultFocus() {
	$useLocalCurrentObjectStackCache();
	$var($Container, nearestRoot, (isFocusCycleRoot()) ? static_cast<$Container*>(this) : getFocusCycleRootAncestor());
	if (nearestRoot == nullptr) {
		return false;
	}
	$var($Component, comp, $nc($($nc(nearestRoot)->getFocusTraversalPolicy()))->getDefaultComponent(nearestRoot));
	if (comp != nullptr) {
		comp->requestFocus();
		return true;
	} else {
		return false;
	}
}

void JComponent::setVisible(bool aFlag) {
	$useLocalCurrentObjectStackCache();
	if (aFlag != isVisible()) {
		$Container::setVisible(aFlag);
		if (aFlag) {
			$var($Container, parent, getParent());
			if (parent != nullptr) {
				$var($Rectangle, r, getBounds());
				parent->repaint($nc(r)->x, r->y, r->width, r->height);
			}
			revalidate();
		}
	}
}

void JComponent::setEnabled(bool enabled) {
	bool oldEnabled = isEnabled();
	$Container::setEnabled(enabled);
	firePropertyChange("enabled"_s, oldEnabled, enabled);
	if (enabled != oldEnabled) {
		repaint();
	}
}

void JComponent::setForeground($Color* fg) {
	$var($Color, oldFg, getForeground());
	$Container::setForeground(fg);
	if ((oldFg != nullptr) ? !$nc(oldFg)->equals(fg) : ((fg != nullptr) && !fg->equals(oldFg))) {
		repaint();
	}
}

void JComponent::setBackground($Color* bg) {
	$var($Color, oldBg, getBackground());
	$Container::setBackground(bg);
	if ((oldBg != nullptr) ? !$nc(oldBg)->equals(bg) : ((bg != nullptr) && !bg->equals(oldBg))) {
		repaint();
	}
}

void JComponent::setFont($Font* font) {
	$var($Font, oldFont, getFont());
	$Container::setFont(font);
	if (font != oldFont) {
		revalidate();
		repaint();
	}
}

$Locale* JComponent::getDefaultLocale() {
	$init(JComponent);
	$var($Locale, l, $cast($Locale, $SwingUtilities::appContextGet(JComponent::defaultLocale)));
	if (l == nullptr) {
		$assign(l, $Locale::getDefault());
		JComponent::setDefaultLocale(l);
	}
	return l;
}

void JComponent::setDefaultLocale($Locale* l) {
	$init(JComponent);
	$SwingUtilities::appContextPut(JComponent::defaultLocale, l);
}

void JComponent::processComponentKeyEvent($KeyEvent* e) {
}

void JComponent::processKeyEvent($KeyEvent* e) {
	bool result = false;
	bool shouldProcessKey = false;
	$Container::processKeyEvent(e);
	if (!$nc(e)->isConsumed()) {
		processComponentKeyEvent(e);
	}
	shouldProcessKey = $JComponent$KeyboardState::shouldProcess(e);
	if ($nc(e)->isConsumed()) {
		return;
	}
	if (shouldProcessKey && processKeyBindings(e, $nc(e)->getID() == $KeyEvent::KEY_PRESSED)) {
		$nc(e)->consume();
	}
}

bool JComponent::processKeyBinding($KeyStroke* ks, $KeyEvent* e, int32_t condition, bool pressed) {
	$useLocalCurrentObjectStackCache();
	$var($InputMap, map, getInputMap(condition, false));
	$var($ActionMap, am, getActionMap(false));
	if (map != nullptr && am != nullptr && isEnabled()) {
		$var($Object, binding, map->get(ks));
		$var($Action, action, (binding == nullptr) ? ($Action*)nullptr : am->get(binding));
		if (action != nullptr) {
			return $SwingUtilities::notifyAction(action, ks, e, this, $nc(e)->getModifiers());
		}
	}
	return false;
}

bool JComponent::processKeyBindings($KeyEvent* e, bool pressed) {
	$useLocalCurrentObjectStackCache();
	if (!$SwingUtilities::isValidKeyEventForKeyBindings(e)) {
		return false;
	}
	$var($KeyStroke, ks, nullptr);
	$var($KeyStroke, ksE, nullptr);
	if ($nc(e)->getID() == $KeyEvent::KEY_TYPED) {
		$assign(ks, $KeyStroke::getKeyStroke(e->getKeyChar()));
	} else {
		int32_t var$0 = e->getKeyCode();
		$assign(ks, $KeyStroke::getKeyStroke(var$0, e->getModifiers(), (pressed ? false : true)));
		int32_t var$1 = e->getKeyCode();
		if (var$1 != e->getExtendedKeyCode()) {
			int32_t var$2 = e->getExtendedKeyCode();
			$assign(ksE, $KeyStroke::getKeyStroke(var$2, e->getModifiers(), (pressed ? false : true)));
		}
	}
	if (ksE != nullptr && processKeyBinding(ksE, e, JComponent::WHEN_FOCUSED, pressed)) {
		return true;
	}
	if (processKeyBinding(ks, e, JComponent::WHEN_FOCUSED, pressed)) {
		return true;
	}
	$var($Container, parent, this);
	while (parent != nullptr && !($instanceOf($Window, parent)) && !($instanceOf($Applet, parent))) {
		if ($instanceOf(JComponent, parent)) {
			if (ksE != nullptr && $nc(($cast(JComponent, parent)))->processKeyBinding(ksE, e, JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, pressed)) {
				return true;
			}
			if ($nc(($cast(JComponent, parent)))->processKeyBinding(ks, e, JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, pressed)) {
				return true;
			}
		}
		if (($instanceOf($JInternalFrame, parent)) && JComponent::processKeyBindingsForAllComponents(e, parent, pressed)) {
			return true;
		}
		$assign(parent, parent->getParent());
	}
	if (parent != nullptr) {
		return JComponent::processKeyBindingsForAllComponents(e, parent, pressed);
	}
	return false;
}

bool JComponent::processKeyBindingsForAllComponents($KeyEvent* e, $Container* container$renamed, bool pressed) {
	$init(JComponent);
	$useLocalCurrentObjectStackCache();
	$var($Container, container, container$renamed);
	while (true) {
		if ($nc($($KeyboardManager::getCurrentManager()))->fireKeyboardAction(e, pressed, container)) {
			return true;
		}
		if ($instanceOf($Popup$HeavyWeightWindow, container)) {
			$assign(container, $nc(($cast($Window, container)))->getOwner());
		} else {
			return false;
		}
	}
}

void JComponent::setToolTipText($String* text) {
	$useLocalCurrentObjectStackCache();
	$var($String, oldText, getToolTipText());
	putClientProperty(JComponent::TOOL_TIP_TEXT_KEY, text);
	$var($ToolTipManager, toolTipManager, $ToolTipManager::sharedInstance());
	if (text != nullptr) {
		if (oldText == nullptr) {
			$nc(toolTipManager)->registerComponent(this);
		}
	} else {
		$nc(toolTipManager)->unregisterComponent(this);
	}
}

$String* JComponent::getToolTipText() {
	return $cast($String, getClientProperty(JComponent::TOOL_TIP_TEXT_KEY));
}

$String* JComponent::getToolTipText($MouseEvent* event) {
	return getToolTipText();
}

$Point* JComponent::getToolTipLocation($MouseEvent* event) {
	return nullptr;
}

$Point* JComponent::getPopupLocation($MouseEvent* event) {
	return nullptr;
}

$JToolTip* JComponent::createToolTip() {
	$var($JToolTip, tip, $new($JToolTip));
	tip->setComponent(this);
	return tip;
}

void JComponent::scrollRectToVisible($Rectangle* aRect) {
	$useLocalCurrentObjectStackCache();
	$var($Container, parent, nullptr);
	int32_t dx = getX();
	int32_t dy = getY();
	for ($assign(parent, getParent()); !(parent == nullptr) && !($instanceOf(JComponent, parent)) && !($instanceOf($CellRendererPane, parent)); $assign(parent, $nc(parent)->getParent())) {
		$var($Rectangle, bounds, parent->getBounds());
		dx += $nc(bounds)->x;
		dy += bounds->y;
	}
	if (!(parent == nullptr) && !($instanceOf($CellRendererPane, parent))) {
		$nc(aRect)->x += dx;
		aRect->y += dy;
		$nc(($cast(JComponent, parent)))->scrollRectToVisible(aRect);
		aRect->x -= dx;
		aRect->y -= dy;
	}
}

void JComponent::setAutoscrolls(bool autoscrolls) {
	setFlag(JComponent::AUTOSCROLLS_SET, true);
	if (this->autoscrolls != autoscrolls) {
		this->autoscrolls = autoscrolls;
		if (autoscrolls) {
			enableEvents($AWTEvent::MOUSE_EVENT_MASK);
			enableEvents($AWTEvent::MOUSE_MOTION_EVENT_MASK);
		} else {
			$Autoscroller::stop(this);
		}
	}
}

bool JComponent::getAutoscrolls() {
	return this->autoscrolls;
}

void JComponent::setTransferHandler($TransferHandler* newHandler) {
	$init($ClientPropertyKey);
	$var($TransferHandler, oldHandler, $cast($TransferHandler, getClientProperty($ClientPropertyKey::JComponent_TRANSFER_HANDLER)));
	putClientProperty($ClientPropertyKey::JComponent_TRANSFER_HANDLER, newHandler);
	$SwingUtilities::installSwingDropTargetAsNecessary(this, newHandler);
	firePropertyChange("transferHandler"_s, $of(oldHandler), $of(newHandler));
}

$TransferHandler* JComponent::getTransferHandler() {
	$init($ClientPropertyKey);
	return $cast($TransferHandler, getClientProperty($ClientPropertyKey::JComponent_TRANSFER_HANDLER));
}

$TransferHandler$DropLocation* JComponent::dropLocationForPoint($Point* p) {
	return nullptr;
}

$Object* JComponent::setDropLocation($TransferHandler$DropLocation* location, Object$* state, bool forDrop) {
	return $of(nullptr);
}

void JComponent::dndDone() {
}

void JComponent::processMouseEvent($MouseEvent* e) {
	if (this->autoscrolls && $nc(e)->getID() == $MouseEvent::MOUSE_RELEASED) {
		$Autoscroller::stop(this);
	}
	$Container::processMouseEvent(e);
}

void JComponent::processMouseMotionEvent($MouseEvent* e) {
	bool dispatch = true;
	if (this->autoscrolls && $nc(e)->getID() == $MouseEvent::MOUSE_DRAGGED) {
		dispatch = !$Autoscroller::isRunning(this);
		$Autoscroller::processMouseDragged(e);
	}
	if (dispatch) {
		$Container::processMouseMotionEvent(e);
	}
}

void JComponent::superProcessMouseMotionEvent($MouseEvent* e) {
	$Container::processMouseMotionEvent(e);
}

void JComponent::setCreatedDoubleBuffer(bool newValue) {
	setFlag(JComponent::CREATED_DOUBLE_BUFFER, newValue);
}

bool JComponent::getCreatedDoubleBuffer() {
	return getFlag(JComponent::CREATED_DOUBLE_BUFFER);
}

void JComponent::enable() {
	if (isEnabled() != true) {
		$Container::enable();
		if (this->accessibleContext != nullptr) {
			$init($AccessibleContext);
			$init($AccessibleState);
			$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, $AccessibleState::ENABLED);
		}
	}
}

void JComponent::disable() {
	if (isEnabled() != false) {
		$Container::disable();
		if (this->accessibleContext != nullptr) {
			$init($AccessibleContext);
			$init($AccessibleState);
			$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, $AccessibleState::ENABLED, nullptr);
		}
	}
}

$ArrayTable* JComponent::getClientProperties() {
	if (this->clientProperties == nullptr) {
		$set(this, clientProperties, $new($ArrayTable));
	}
	return this->clientProperties;
}

$Object* JComponent::getClientProperty(Object$* key) {
	$init($RenderingHints);
	if ($equals(key, $RenderingHints::KEY_TEXT_ANTIALIASING)) {
		return $of(this->aaHint);
	} else {
		if ($equals(key, $RenderingHints::KEY_TEXT_LCD_CONTRAST)) {
			return $of(this->lcdRenderingHint);
		}
	}
	if (this->clientProperties == nullptr) {
		return $of(nullptr);
	} else {
		$synchronized(this->clientProperties) {
			return $of($nc(this->clientProperties)->get(key));
		}
	}
}

void JComponent::putClientProperty(Object$* key, Object$* value) {
	$useLocalCurrentObjectStackCache();
	$init($RenderingHints);
	if ($equals(key, $RenderingHints::KEY_TEXT_ANTIALIASING)) {
		$set(this, aaHint, value);
		return;
	} else {
		if ($equals(key, $RenderingHints::KEY_TEXT_LCD_CONTRAST)) {
			$set(this, lcdRenderingHint, value);
			return;
		}
	}
	if (value == nullptr && this->clientProperties == nullptr) {
		return;
	}
	$var($ArrayTable, clientProperties, getClientProperties());
	$var($Object, oldValue, nullptr);
	$synchronized(clientProperties) {
		$assign(oldValue, $nc(clientProperties)->get(key));
		if (value != nullptr) {
			clientProperties->put(key, value);
		} else if (oldValue != nullptr) {
			clientProperties->remove(key);
		} else {
			return;
		}
	}
	clientPropertyChanged(key, oldValue, value);
	firePropertyChange($($nc($of(key))->toString()), oldValue, value);
}

void JComponent::clientPropertyChanged(Object$* key, Object$* oldValue, Object$* newValue) {
}

void JComponent::setUIProperty($String* propertyName, Object$* value) {
	$useLocalCurrentObjectStackCache();
	if (propertyName == "opaque"_s) {
		if (!getFlag(JComponent::OPAQUE_SET)) {
			setOpaque($nc(($cast($Boolean, value)))->booleanValue());
			setFlag(JComponent::OPAQUE_SET, false);
		}
	} else if (propertyName == "autoscrolls"_s) {
		if (!getFlag(JComponent::AUTOSCROLLS_SET)) {
			setAutoscrolls($nc(($cast($Boolean, value)))->booleanValue());
			setFlag(JComponent::AUTOSCROLLS_SET, false);
		}
	} else if (propertyName == "focusTraversalKeysForward"_s) {
		$var($Set, strokeSet, $cast($Set, value));
		if (!getFlag(JComponent::FOCUS_TRAVERSAL_KEYS_FORWARD_SET)) {
			$Container::setFocusTraversalKeys($KeyboardFocusManager::FORWARD_TRAVERSAL_KEYS, strokeSet);
		}
	} else if (propertyName == "focusTraversalKeysBackward"_s) {
		$var($Set, strokeSet, $cast($Set, value));
		if (!getFlag(JComponent::FOCUS_TRAVERSAL_KEYS_BACKWARD_SET)) {
			$Container::setFocusTraversalKeys($KeyboardFocusManager::BACKWARD_TRAVERSAL_KEYS, strokeSet);
		}
	} else {
		$throwNew($IllegalArgumentException, $$str({"property \""_s, propertyName, "\" cannot be set using this method"_s}));
	}
}

void JComponent::setFocusTraversalKeys(int32_t id, $Set* keystrokes) {
	if (id == $KeyboardFocusManager::FORWARD_TRAVERSAL_KEYS) {
		setFlag(JComponent::FOCUS_TRAVERSAL_KEYS_FORWARD_SET, true);
	} else if (id == $KeyboardFocusManager::BACKWARD_TRAVERSAL_KEYS) {
		setFlag(JComponent::FOCUS_TRAVERSAL_KEYS_BACKWARD_SET, true);
	}
	$Container::setFocusTraversalKeys(id, keystrokes);
}

bool JComponent::isLightweightComponent($Component* c) {
	$init(JComponent);
	return $nc($($AWTAccessor::getComponentAccessor()))->isLightweight(c);
}

void JComponent::reshape(int32_t x, int32_t y, int32_t w, int32_t h) {
	$Container::reshape(x, y, w, h);
}

$Rectangle* JComponent::getBounds($Rectangle* rv) {
	if (rv == nullptr) {
		int32_t var$0 = getX();
		int32_t var$1 = getY();
		int32_t var$2 = getWidth();
		return $new($Rectangle, var$0, var$1, var$2, getHeight());
	} else {
		int32_t var$3 = getX();
		int32_t var$4 = getY();
		int32_t var$5 = getWidth();
		$nc(rv)->setBounds(var$3, var$4, var$5, getHeight());
		return rv;
	}
}

$Dimension* JComponent::getSize($Dimension* rv) {
	if (rv == nullptr) {
		int32_t var$0 = getWidth();
		return $new($Dimension, var$0, getHeight());
	} else {
		int32_t var$1 = getWidth();
		$nc(rv)->setSize(var$1, getHeight());
		return rv;
	}
}

$Point* JComponent::getLocation($Point* rv) {
	if (rv == nullptr) {
		int32_t var$0 = getX();
		return $new($Point, var$0, getY());
	} else {
		int32_t var$1 = getX();
		$nc(rv)->setLocation(var$1, getY());
		return rv;
	}
}

int32_t JComponent::getX() {
	return $Container::getX();
}

int32_t JComponent::getY() {
	return $Container::getY();
}

int32_t JComponent::getWidth() {
	return $Container::getWidth();
}

int32_t JComponent::getHeight() {
	return $Container::getHeight();
}

bool JComponent::isOpaque() {
	return getFlag(JComponent::IS_OPAQUE);
}

void JComponent::setOpaque(bool isOpaque) {
	bool oldValue = getFlag(JComponent::IS_OPAQUE);
	setFlag(JComponent::IS_OPAQUE, isOpaque);
	setFlag(JComponent::OPAQUE_SET, true);
	firePropertyChange("opaque"_s, oldValue, isOpaque);
}

bool JComponent::rectangleIsObscured(int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	int32_t numChildren = getComponentCount();
	for (int32_t i = 0; i < numChildren; ++i) {
		$var($Component, child, getComponent(i));
		int32_t cx = 0;
		int32_t cy = 0;
		int32_t cw = 0;
		int32_t ch = 0;
		cx = $nc(child)->getX();
		cy = child->getY();
		cw = child->getWidth();
		ch = child->getHeight();
		if (x >= cx && (x + width) <= (cx + cw) && y >= cy && (y + height) <= (cy + ch) && child->isVisible()) {
			if ($instanceOf(JComponent, child)) {
				return child->isOpaque();
			} else {
				return false;
			}
		}
	}
	return false;
}

void JComponent::computeVisibleRect($Component* c, $Rectangle* visibleRect) {
	$init(JComponent);
	$useLocalCurrentObjectStackCache();
	$var($Container, p, $nc(c)->getParent());
	$var($Rectangle, bounds, c->getBounds());
	if (p == nullptr || $instanceOf($Window, p) || $instanceOf($Applet, p)) {
		$nc(visibleRect)->setBounds(0, 0, $nc(bounds)->width, bounds->height);
	} else {
		computeVisibleRect(p, visibleRect);
		$nc(visibleRect)->x -= $nc(bounds)->x;
		visibleRect->y -= bounds->y;
		$SwingUtilities::computeIntersection(0, 0, bounds->width, bounds->height, visibleRect);
	}
}

void JComponent::computeVisibleRect($Rectangle* visibleRect) {
	computeVisibleRect(this, visibleRect);
}

$Rectangle* JComponent::getVisibleRect() {
	$var($Rectangle, visibleRect, $new($Rectangle));
	computeVisibleRect(visibleRect);
	return visibleRect;
}

void JComponent::firePropertyChange($String* propertyName, bool oldValue, bool newValue) {
	$Container::firePropertyChange(propertyName, oldValue, newValue);
}

void JComponent::firePropertyChange($String* propertyName, int32_t oldValue, int32_t newValue) {
	$Container::firePropertyChange(propertyName, oldValue, newValue);
}

void JComponent::firePropertyChange($String* propertyName, char16_t oldValue, char16_t newValue) {
	$Container::firePropertyChange(propertyName, oldValue, newValue);
}

void JComponent::fireVetoableChange($String* propertyName, Object$* oldValue, Object$* newValue) {
	if (this->vetoableChangeSupport == nullptr) {
		return;
	}
	$nc(this->vetoableChangeSupport)->fireVetoableChange(propertyName, oldValue, newValue);
}

void JComponent::addVetoableChangeListener($VetoableChangeListener* listener) {
	$synchronized(this) {
		if (this->vetoableChangeSupport == nullptr) {
			$set(this, vetoableChangeSupport, $new($VetoableChangeSupport, this));
		}
		$nc(this->vetoableChangeSupport)->addVetoableChangeListener(listener);
	}
}

void JComponent::removeVetoableChangeListener($VetoableChangeListener* listener) {
	$synchronized(this) {
		if (this->vetoableChangeSupport == nullptr) {
			return;
		}
		$nc(this->vetoableChangeSupport)->removeVetoableChangeListener(listener);
	}
}

$VetoableChangeListenerArray* JComponent::getVetoableChangeListeners() {
	$synchronized(this) {
		if (this->vetoableChangeSupport == nullptr) {
			return $new($VetoableChangeListenerArray, 0);
		}
		return $nc(this->vetoableChangeSupport)->getVetoableChangeListeners();
	}
}

$Container* JComponent::getTopLevelAncestor() {
	{
		$var($Container, p, this);
		for (; p != nullptr; $assign(p, p->getParent())) {
			if ($instanceOf($Window, p) || $instanceOf($Applet, p)) {
				return p;
			}
		}
	}
	return nullptr;
}

$AncestorNotifier* JComponent::getAncestorNotifier() {
	$init($ClientPropertyKey);
	return $cast($AncestorNotifier, getClientProperty($ClientPropertyKey::JComponent_ANCESTOR_NOTIFIER));
}

void JComponent::addAncestorListener($AncestorListener* listener) {
	$var($AncestorNotifier, ancestorNotifier, getAncestorNotifier());
	if (ancestorNotifier == nullptr) {
		$assign(ancestorNotifier, $new($AncestorNotifier, this));
		$init($ClientPropertyKey);
		putClientProperty($ClientPropertyKey::JComponent_ANCESTOR_NOTIFIER, ancestorNotifier);
	}
	$nc(ancestorNotifier)->addAncestorListener(listener);
}

void JComponent::removeAncestorListener($AncestorListener* listener) {
	$useLocalCurrentObjectStackCache();
	$var($AncestorNotifier, ancestorNotifier, getAncestorNotifier());
	if (ancestorNotifier == nullptr) {
		return;
	}
	$nc(ancestorNotifier)->removeAncestorListener(listener);
	if ($nc($($nc(ancestorNotifier->listenerList)->getListenerList()))->length == 0) {
		ancestorNotifier->removeAllListeners();
		$init($ClientPropertyKey);
		putClientProperty($ClientPropertyKey::JComponent_ANCESTOR_NOTIFIER, nullptr);
	}
}

$AncestorListenerArray* JComponent::getAncestorListeners() {
	$var($AncestorNotifier, ancestorNotifier, getAncestorNotifier());
	if (ancestorNotifier == nullptr) {
		return $new($AncestorListenerArray, 0);
	}
	return $nc(ancestorNotifier)->getAncestorListeners();
}

$EventListenerArray* JComponent::getListeners($Class* listenerType) {
	$var($EventListenerArray, result, nullptr);
	$load($AncestorListener);
	if (listenerType == $AncestorListener::class$) {
		$assign(result, $fcast($EventListenerArray, getAncestorListeners()));
	} else {
		$load($VetoableChangeListener);
		if (listenerType == $VetoableChangeListener::class$) {
			$assign(result, $fcast($EventListenerArray, getVetoableChangeListeners()));
		} else {
			$load($PropertyChangeListener);
			if (listenerType == $PropertyChangeListener::class$) {
				$assign(result, $fcast($EventListenerArray, getPropertyChangeListeners()));
			} else {
				$assign(result, $nc(this->listenerList)->getListeners(listenerType));
			}
		}
	}
	if ($nc(result)->length == 0) {
		return $Container::getListeners(listenerType);
	}
	return result;
}

void JComponent::addNotify() {
	$Container::addNotify();
	firePropertyChange("ancestor"_s, ($Object*)nullptr, $($of(getParent())));
	registerWithKeyboardManager(false);
	registerNextFocusableComponent();
}

void JComponent::removeNotify() {
	$useLocalCurrentObjectStackCache();
	$Container::removeNotify();
	firePropertyChange("ancestor"_s, $($of(getParent())), ($Object*)nullptr);
	unregisterWithKeyboardManager();
	deregisterNextFocusableComponent();
	if (getCreatedDoubleBuffer()) {
		$nc($($RepaintManager::currentManager(this)))->resetDoubleBuffer();
		setCreatedDoubleBuffer(false);
	}
	if (this->autoscrolls) {
		$Autoscroller::stop(this);
	}
}

void JComponent::repaint(int64_t tm, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$nc($($RepaintManager::currentManager($($SunToolkit::targetToAppContext(this)))))->addDirtyRegion(this, x, y, width, height);
}

void JComponent::repaint($Rectangle* r) {
	repaint(0, $nc(r)->x, r->y, r->width, r->height);
}

void JComponent::revalidate() {
	$useLocalCurrentObjectStackCache();
	if (getParent() == nullptr) {
		return;
	}
	if ($SunToolkit::isDispatchThreadForAppContext(this)) {
		invalidate();
		$nc($($RepaintManager::currentManager(this)))->addInvalidComponent(this);
	} else {
		if ($nc(this->revalidateRunnableScheduled)->getAndSet(true)) {
			return;
		}
		$SunToolkit::executeOnEventHandlerThread(this, static_cast<$Runnable*>($$new(JComponent$$Lambda$lambda$revalidate$0, this)));
	}
}

bool JComponent::isValidateRoot() {
	return false;
}

bool JComponent::isOptimizedDrawingEnabled() {
	return true;
}

bool JComponent::isPaintingOrigin() {
	return false;
}

void JComponent::paintImmediately(int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Component, c, this);
	$var($Component, parent, nullptr);
	if (!isShowing()) {
		return;
	}
	$var(JComponent, paintingOigin, $SwingUtilities::getPaintingOrigin(this));
	if (paintingOigin != nullptr) {
		$var($Rectangle, rectangle, $SwingUtilities::convertRectangle(c, $$new($Rectangle, x, y, w, h), paintingOigin));
		paintingOigin->paintImmediately($nc(rectangle)->x, rectangle->y, rectangle->width, rectangle->height);
		return;
	}
	while (!$nc(c)->isOpaque()) {
		$assign(parent, c->getParent());
		if (parent != nullptr) {
			x += c->getX();
			y += c->getY();
			$assign(c, parent);
		} else {
			break;
		}
		if (!($instanceOf(JComponent, c))) {
			break;
		}
	}
	if ($instanceOf(JComponent, c)) {
		$nc(($cast(JComponent, c)))->_paintImmediately(x, y, w, h);
	} else {
		$nc(c)->repaint(x, y, w, h);
	}
}

void JComponent::paintImmediately($Rectangle* r) {
	paintImmediately($nc(r)->x, r->y, r->width, r->height);
}

bool JComponent::alwaysOnTop() {
	return false;
}

void JComponent::setPaintingChild($Component* paintingChild) {
	$set(this, paintingChild, paintingChild);
}

void JComponent::_paintImmediately(int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, g, nullptr);
	$var($Container, c, nullptr);
	$var($Rectangle, b, nullptr);
	int32_t tmpX = 0;
	int32_t tmpY = 0;
	int32_t tmpWidth = 0;
	int32_t tmpHeight = 0;
	int32_t offsetX = 0;
	int32_t offsetY = 0;
	bool hasBuffer = false;
	$var(JComponent, bufferedComponent, nullptr);
	$var(JComponent, paintingComponent, this);
	$var($RepaintManager, repaintManager, $RepaintManager::currentManager(this));
	$var($List, path, $new($ArrayList, 7));
	int32_t pIndex = -1;
	int32_t pCount = 0;
	tmpX = (tmpY = (tmpWidth = (tmpHeight = 0)));
	$var($Rectangle, paintImmediatelyClip, fetchRectangle());
	$nc(paintImmediatelyClip)->x = x;
	paintImmediatelyClip->y = y;
	paintImmediatelyClip->width = w;
	paintImmediatelyClip->height = h;
	bool var$0 = alwaysOnTop();
	bool ontop = var$0 && isOpaque();
	if (ontop) {
		int32_t var$1 = getWidth();
		$SwingUtilities::computeIntersection(0, 0, var$1, getHeight(), paintImmediatelyClip);
		if (paintImmediatelyClip->width == 0) {
			recycleRectangle(paintImmediatelyClip);
			return;
		}
	}
	$var($Component, child, nullptr);
	for ($assign(c, this), $assign(child, nullptr); c != nullptr && !($instanceOf($Window, c)) && !($instanceOf($Applet, c)); $assign(child, c), $assign(c, c->getParent())) {
		$var(JComponent, jc, ($instanceOf(JComponent, c)) ? $cast(JComponent, c) : (JComponent*)nullptr);
		path->add(c);
		if (!ontop && jc != nullptr && !jc->isOptimizedDrawingEnabled()) {
			bool resetPC = false;
			if (!$equals(c, this)) {
				if (jc->isPaintingOrigin()) {
					resetPC = true;
				} else {
					$var($ComponentArray, children, $nc(c)->getComponents());
					int32_t i = 0;
					for (; i < $nc(children)->length; ++i) {
						if (children->get(i) == child) {
							break;
						}
					}
					switch (jc->getObscuredState(i, paintImmediatelyClip->x, paintImmediatelyClip->y, paintImmediatelyClip->width, paintImmediatelyClip->height)) {
					case JComponent::NOT_OBSCURED:
						{
							resetPC = false;
							break;
						}
					case JComponent::COMPLETELY_OBSCURED:
						{
							recycleRectangle(paintImmediatelyClip);
							return;
						}
					default:
						{
							resetPC = true;
							break;
						}
					}
				}
			} else {
				resetPC = false;
			}
			if (resetPC) {
				$assign(paintingComponent, jc);
				pIndex = pCount;
				offsetX = (offsetY = 0);
				hasBuffer = false;
			}
		}
		++pCount;
		bool var$2 = $nc(repaintManager)->isDoubleBufferingEnabled() && jc != nullptr;
		if (var$2 && jc->isDoubleBuffered()) {
			hasBuffer = true;
			$assign(bufferedComponent, jc);
		}
		if (!ontop) {
			int32_t bx = $nc(c)->getX();
			int32_t by = c->getY();
			tmpWidth = c->getWidth();
			tmpHeight = c->getHeight();
			$SwingUtilities::computeIntersection(tmpX, tmpY, tmpWidth, tmpHeight, paintImmediatelyClip);
			paintImmediatelyClip->x += bx;
			paintImmediatelyClip->y += by;
			offsetX += bx;
			offsetY += by;
		}
	}
	if (c == nullptr || !$nc(c)->isDisplayable() || paintImmediatelyClip->width <= 0 || paintImmediatelyClip->height <= 0) {
		recycleRectangle(paintImmediatelyClip);
		return;
	}
	$nc(paintingComponent)->setFlag(JComponent::IS_REPAINTING, true);
	paintImmediatelyClip->x -= offsetX;
	paintImmediatelyClip->y -= offsetY;
	if (paintingComponent != this) {
		$var($Component, comp, nullptr);
		int32_t i = pIndex;
		for (; i > 0; --i) {
			$assign(comp, $cast($Component, path->get(i)));
			if ($instanceOf(JComponent, comp)) {
				$nc(($cast(JComponent, comp)))->setPaintingChild($cast($Component, $(path->get(i - 1))));
			}
		}
	}
	{
		$var($Throwable, var$3, nullptr);
		try {
			if (($assign(g, safelyGetGraphics(paintingComponent, c))) != nullptr) {
				{
					$var($Throwable, var$4, nullptr);
					try {
						if (hasBuffer) {
							$var($RepaintManager, rm, $RepaintManager::currentManager(bufferedComponent));
							$nc(rm)->beginPaint();
							{
								$var($Throwable, var$5, nullptr);
								try {
									rm->paint(paintingComponent, bufferedComponent, g, paintImmediatelyClip->x, paintImmediatelyClip->y, paintImmediatelyClip->width, paintImmediatelyClip->height);
								} catch ($Throwable&) {
									$assign(var$5, $catch());
								} /*finally*/ {
									rm->endPaint();
								}
								if (var$5 != nullptr) {
									$throw(var$5);
								}
							}
						} else {
							$nc(g)->setClip(paintImmediatelyClip->x, paintImmediatelyClip->y, paintImmediatelyClip->width, paintImmediatelyClip->height);
							paintingComponent->paint(g);
						}
					} catch ($Throwable&) {
						$assign(var$4, $catch());
					} /*finally*/ {
						$nc(g)->dispose();
					}
					if (var$4 != nullptr) {
						$throw(var$4);
					}
				}
			}
		} catch ($Throwable&) {
			$assign(var$3, $catch());
		} /*finally*/ {
			if (paintingComponent != this) {
				$var($Component, comp, nullptr);
				int32_t i = pIndex;
				for (; i > 0; --i) {
					$assign(comp, $cast($Component, path->get(i)));
					if ($instanceOf(JComponent, comp)) {
						$nc(($cast(JComponent, comp)))->setPaintingChild(nullptr);
					}
				}
			}
			paintingComponent->setFlag(JComponent::IS_REPAINTING, false);
		}
		if (var$3 != nullptr) {
			$throw(var$3);
		}
	}
	recycleRectangle(paintImmediatelyClip);
}

void JComponent::paintToOffscreen($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t maxX, int32_t maxY) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			setFlag(JComponent::ANCESTOR_USING_BUFFER, true);
			if ((y + h) < maxY || (x + w) < maxX) {
				setFlag(JComponent::IS_PAINTING_TILE, true);
			}
			if (getFlag(JComponent::IS_REPAINTING)) {
				paint(g);
			} else {
				if (!rectangleIsObscured(x, y, w, h)) {
					paintComponent(g);
					paintBorder(g);
				}
				paintChildren(g);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			setFlag(JComponent::ANCESTOR_USING_BUFFER, false);
			setFlag(JComponent::IS_PAINTING_TILE, false);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t JComponent::getObscuredState(int32_t compIndex, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	int32_t retValue = JComponent::NOT_OBSCURED;
	$var($Rectangle, tmpRect, fetchRectangle());
	for (int32_t i = compIndex - 1; i >= 0; --i) {
		$var($Component, sibling, getComponent(i));
		if (!$nc(sibling)->isVisible()) {
			continue;
		}
		$var($Rectangle, siblingRect, nullptr);
		bool opaque = false;
		if ($instanceOf(JComponent, sibling)) {
			opaque = $nc(sibling)->isOpaque();
			if (!opaque) {
				if (retValue == JComponent::PARTIALLY_OBSCURED) {
					continue;
				}
			}
		} else {
			opaque = true;
		}
		$assign(siblingRect, $nc(sibling)->getBounds(tmpRect));
		if (opaque && x >= $nc(siblingRect)->x && (x + width) <= (siblingRect->x + siblingRect->width) && y >= siblingRect->y && (y + height) <= (siblingRect->y + siblingRect->height)) {
			recycleRectangle(tmpRect);
			return JComponent::COMPLETELY_OBSCURED;
		} else if (retValue == JComponent::NOT_OBSCURED && !((x + width <= siblingRect->x) || (y + height <= siblingRect->y) || (x >= siblingRect->x + siblingRect->width) || (y >= siblingRect->y + siblingRect->height))) {
			retValue = JComponent::PARTIALLY_OBSCURED;
		}
	}
	recycleRectangle(tmpRect);
	return retValue;
}

bool JComponent::checkIfChildObscuredBySibling() {
	return true;
}

void JComponent::setFlag(int32_t aFlag, bool aValue) {
	if (aValue) {
		this->flags |= ($sl(1, aFlag));
	} else {
		this->flags &= (uint32_t)~($sl(1, aFlag));
	}
}

bool JComponent::getFlag(int32_t aFlag) {
	int32_t mask = ($sl(1, aFlag));
	return (((int32_t)(this->flags & (uint32_t)mask)) == mask);
}

void JComponent::setWriteObjCounter(JComponent* comp, int8_t count) {
	$init(JComponent);
	$nc(comp)->flags = ((int32_t)(comp->flags & (uint32_t)~($sl(255, JComponent::WRITE_OBJ_COUNTER_FIRST)))) | ($sl((int32_t)count, JComponent::WRITE_OBJ_COUNTER_FIRST));
}

int8_t JComponent::getWriteObjCounter(JComponent* comp) {
	$init(JComponent);
	return (int8_t)((int32_t)(($sr($nc(comp)->flags, JComponent::WRITE_OBJ_COUNTER_FIRST)) & (uint32_t)255));
}

void JComponent::setDoubleBuffered(bool aFlag) {
	setFlag(JComponent::IS_DOUBLE_BUFFERED, aFlag);
}

bool JComponent::isDoubleBuffered() {
	return getFlag(JComponent::IS_DOUBLE_BUFFERED);
}

$JRootPane* JComponent::getRootPane() {
	return $SwingUtilities::getRootPane(this);
}

void JComponent::compWriteObjectNotify() {
	int8_t count = JComponent::getWriteObjCounter(this);
	JComponent::setWriteObjCounter(this, (int8_t)(count + 1));
	if (count != 0) {
		return;
	}
	uninstallUIAndProperties();
	if (getToolTipText() != nullptr || $instanceOf($JTableHeader, this)) {
		$nc($($ToolTipManager::sharedInstance()))->unregisterComponent(this);
	}
}

void JComponent::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	this->isAlignmentXSet = $nc(f)->get("isAlignmentXSet"_s, false);
	this->alignmentX = validateAlignment(f->get("alignmentX"_s, 0.0f));
	this->isAlignmentYSet = f->get("isAlignmentYSet"_s, false);
	this->alignmentY = validateAlignment(f->get("alignmentY"_s, 0.0f));
	$set(this, listenerList, $cast($EventListenerList, f->get("listenerList"_s, ($Object*)nullptr)));
	$set(this, vetoableChangeSupport, $cast($VetoableChangeSupport, f->get("vetoableChangeSupport"_s, ($Object*)nullptr)));
	this->autoscrolls = f->get("autoscrolls"_s, false);
	$set(this, border, $cast($Border, f->get("border"_s, ($Object*)nullptr)));
	this->flags = f->get("flags"_s, 0);
	$set(this, inputVerifier, $cast($InputVerifier, f->get("inputVerifier"_s, ($Object*)nullptr)));
	this->verifyInputWhenFocusTarget = f->get("verifyInputWhenFocusTarget"_s, false);
	$set(this, popupMenu, $cast($JPopupMenu, f->get("popupMenu"_s, ($Object*)nullptr)));
	$set(this, focusInputMap, $cast($InputMap, f->get("focusInputMap"_s, ($Object*)nullptr)));
	$set(this, ancestorInputMap, $cast($InputMap, f->get("ancestorInputMap"_s, ($Object*)nullptr)));
	$set(this, windowInputMap, $cast($ComponentInputMap, f->get("windowInputMap"_s, ($Object*)nullptr)));
	$set(this, actionMap, $cast($ActionMap, f->get("actionMap"_s, ($Object*)nullptr)));
	$var($JComponent$ReadObjectCallback, cb, $cast($JComponent$ReadObjectCallback, $nc(JComponent::readObjectCallbacks)->get(s)));
	if (cb == nullptr) {
		try {
			$nc(JComponent::readObjectCallbacks)->put(s, $assign(cb, $new($JComponent$ReadObjectCallback, this, s)));
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$throwNew($IOException, $(e->toString()));
		}
	}
	$nc(cb)->registerComponent(this);
	int32_t cpCount = s->readInt();
	if (cpCount > 0) {
		$set(this, clientProperties, $new($ArrayTable));
		for (int32_t counter = 0; counter < cpCount; ++counter) {
			$var($Object, var$0, s->readObject());
			$nc(this->clientProperties)->put(var$0, $(s->readObject()));
		}
	}
	if (getToolTipText() != nullptr) {
		$nc($($ToolTipManager::sharedInstance()))->registerComponent(this);
	}
	setWriteObjCounter(this, (int8_t)0);
	$set(this, revalidateRunnableScheduled, $new($AtomicBoolean, false));
}

void JComponent::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JComponent::uiClassID)) {
		int8_t count = JComponent::getWriteObjCounter(this);
		JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
	$ArrayTable::writeArrayTable(s, this->clientProperties);
}

$String* JComponent::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, preferredSizeString, isPreferredSizeSet() ? $nc($(getPreferredSize()))->toString() : ""_s);
	$var($String, minimumSizeString, isMinimumSizeSet() ? $nc($(getMinimumSize()))->toString() : ""_s);
	$var($String, maximumSizeString, isMaximumSizeSet() ? $nc($(getMaximumSize()))->toString() : ""_s);
	$var($String, borderString, this->border == nullptr ? ""_s : ($equals(this->border, this) ? "this"_s : $nc($of(this->border))->toString()));
	return $str({$($Container::paramString()), ",alignmentX="_s, $$str(this->alignmentX), ",alignmentY="_s, $$str(this->alignmentY), ",border="_s, borderString, ",flags="_s, $$str(this->flags), ",maximumSize="_s, maximumSizeString, ",minimumSize="_s, minimumSizeString, ",preferredSize="_s, preferredSizeString});
}

void JComponent::hide() {
	$useLocalCurrentObjectStackCache();
	bool showing = isShowing();
	$Container::hide();
	if (showing) {
		$var($Container, parent, getParent());
		if (parent != nullptr) {
			$var($Rectangle, r, getBounds());
			parent->repaint($nc(r)->x, r->y, r->width, r->height);
		}
		revalidate();
	}
}

void JComponent::lambda$revalidate$0() {
	$nc(this->revalidateRunnableScheduled)->set(false);
	revalidate();
}

void clinit$JComponent($Class* class$) {
	$assignStatic(JComponent::uiClassID, "ComponentUI"_s);
	$assignStatic(JComponent::KEYBOARD_BINDINGS_KEY, "_KeyboardBindings"_s);
	$assignStatic(JComponent::WHEN_IN_FOCUSED_WINDOW_BINDINGS, "_WhenInFocusedWindow"_s);
	$assignStatic(JComponent::TOOL_TIP_TEXT_KEY, "ToolTipText"_s);
	$assignStatic(JComponent::NEXT_FOCUS, "nextFocus"_s);
	$assignStatic(JComponent::defaultLocale, "JComponent.defaultLocale"_s);
	$assignStatic(JComponent::readObjectCallbacks, $new($Hashtable, 1));
	$assignStatic(JComponent::INPUT_VERIFIER_SOURCE_KEY, $new($StringBuilder, "InputVerifierSourceKey"_s));
	$assignStatic(JComponent::tempRectangles, $new($ArrayList, 11));
	$assignStatic(JComponent::componentObtainingGraphicsFromLock, $new($StringBuilder, "componentObtainingGraphicsFrom"_s));
	{
		$SwingAccessor::setJComponentAccessor($$new($JComponent$1));
	}
	$assignStatic(JComponent::focusController, $new($JComponent$2));
}

JComponent::JComponent() {
}

$Class* JComponent::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JComponent$$Lambda$lambda$revalidate$0::classInfo$.name)) {
			return JComponent$$Lambda$lambda$revalidate$0::load$(name, initialize);
		}
	}
	$loadClass(JComponent, name, initialize, &_JComponent_ClassInfo_, clinit$JComponent, allocate$JComponent);
	return class$;
}

$Class* JComponent::class$ = nullptr;

	} // swing
} // javax