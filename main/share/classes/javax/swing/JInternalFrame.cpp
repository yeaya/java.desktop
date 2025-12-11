#include <javax/swing/JInternalFrame.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/EventQueue.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/Graphics.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/PropertyVetoException.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/SecurityException.h>
#include <java/util/EventListener.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/Icon.h>
#include <javax/swing/InternalFrameFocusTraversalPolicy.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame$AccessibleJInternalFrame.h>
#include <javax/swing/JInternalFrame$FocusPropertyChangeListener.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/WindowConstants.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/event/InternalFrameEvent.h>
#include <javax/swing/event/InternalFrameListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/InternalFrameUI.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/UngrabEvent.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef CENTER
#undef CONTENT_PANE_PROPERTY
#undef DISPOSE_ON_CLOSE
#undef DO_NOTHING_ON_CLOSE
#undef E_RESIZE_CURSOR
#undef FALSE
#undef FRAME_ICON_PROPERTY
#undef GLASS_PANE_PROPERTY
#undef HIDE_ON_CLOSE
#undef INTERNAL_FRAME_ACTIVATED
#undef INTERNAL_FRAME_CLOSED
#undef INTERNAL_FRAME_CLOSING
#undef INTERNAL_FRAME_DEACTIVATED
#undef INTERNAL_FRAME_DEICONIFIED
#undef INTERNAL_FRAME_ICONIFIED
#undef INTERNAL_FRAME_OPENED
#undef IS_CLOSED_PROPERTY
#undef IS_ICON_PROPERTY
#undef IS_MAXIMUM_PROPERTY
#undef IS_SELECTED_PROPERTY
#undef LAYERED_PANE_PROPERTY
#undef MENU_BAR_PROPERTY
#undef NE_RESIZE_CURSOR
#undef NW_RESIZE_CURSOR
#undef N_RESIZE_CURSOR
#undef PROPERTY_CHANGE_LISTENER_KEY
#undef ROOT_PANE_PROPERTY
#undef SE_RESIZE_CURSOR
#undef SW_RESIZE_CURSOR
#undef S_RESIZE_CURSOR
#undef TITLE_PROPERTY
#undef TRUE
#undef W_RESIZE_CURSOR

using $ComponentArray = $Array<::java::awt::Component>;
using $InternalFrameListenerArray = $Array<::javax::swing::event::InternalFrameListener>;
using $AWTEvent = ::java::awt::AWTEvent;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Cursor = ::java::awt::Cursor;
using $EventQueue = ::java::awt::EventQueue;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $Graphics = ::java::awt::Graphics;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SecurityException = ::java::lang::SecurityException;
using $EventListener = ::java::util::EventListener;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $Icon = ::javax::swing::Icon;
using $InternalFrameFocusTraversalPolicy = ::javax::swing::InternalFrameFocusTraversalPolicy;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JInternalFrame$AccessibleJInternalFrame = ::javax::swing::JInternalFrame$AccessibleJInternalFrame;
using $JInternalFrame$FocusPropertyChangeListener = ::javax::swing::JInternalFrame$FocusPropertyChangeListener;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JRootPane = ::javax::swing::JRootPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $WindowConstants = ::javax::swing::WindowConstants;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $InternalFrameEvent = ::javax::swing::event::InternalFrameEvent;
using $InternalFrameListener = ::javax::swing::event::InternalFrameListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $InternalFrameUI = ::javax::swing::plaf::InternalFrameUI;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;
using $UngrabEvent = ::sun::awt::UngrabEvent;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {

$NamedAttribute JInternalFrame_Attribute_var$0[] = {
	{"defaultProperty", 's', "JMenuBar"},
	{"description", 's', "A frame container which is contained within another window."},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$1[] = {
	{"delegate", 's', "getContentPane"},
	{}
};

$CompoundAttribute _JInternalFrame_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JInternalFrame_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", JInternalFrame_Attribute_var$1},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_getAccessibleContext14[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$2},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_getDesktopPane18[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$3},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_getFocusCycleRootAncestor19[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$4},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$5[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_getInternalFrameListeners23[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$5},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$6[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_getLastCursor25[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$6},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_getMenuBar28[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$7[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_getMostRecentFocusOwner29[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$7},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$8[] = {
	{"hidden", 'Z', "true"},
	{"description", 's', "The root pane used by this internal frame."},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_getRootPane31[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$8},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$9[] = {
	{"bound", 'Z', "false"},
	{"description", 's', "UIClassID"},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_getUIClassID34[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$9},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$10[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_getWarningString35[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$10},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$11[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "Indicates whether this internal frame can be closed."},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_setClosable56[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$11},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$12[] = {
	{"description", 's', "Indicates whether this internal frame has been closed."},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_setClosed57[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$12},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$13[] = {
	{"hidden", 'Z', "true"},
	{"description", 's', "The client area of the internal frame where child components are normally inserted."},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_setContentPane58[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$13},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$14[] = {
	{"description", 's', "The icon shown when this internal frame is minimized."},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_setDesktopIcon61[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$14},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$15[] = {
	{"description", 's', "The icon shown in the top-left corner of this internal frame."},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_setFrameIcon63[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$15},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$16[] = {
	{"hidden", 'Z', "true"},
	{"description", 's', "A transparent pane used for menu rendering."},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_setGlassPane64[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$16},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$17[] = {
	{"description", 's', "The image displayed when this internal frame is minimized."},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_setIcon65[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$17},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$18[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "Determines whether this internal frame can be iconified."},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_setIconifiable66[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$18},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$19[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "The menu bar for accessing pulldown menus from this internal frame."},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_setJMenuBar67[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$19},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$20[] = {
	{"bound", 'Z', "false"},
	{"expert", 'Z', "true"},
	{"description", 's', "Specifies what desktop layer is used."},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_setLayer69[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$20},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$21[] = {
	{"bound", 'Z', "false"},
	{"expert", 'Z', "true"},
	{"description", 's', "Specifies what desktop layer is used."},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_setLayer70[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$21},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$22[] = {
	{"hidden", 'Z', "true"},
	{"description", 's', "The pane which holds the various desktop layers."},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_setLayeredPane71[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$22},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$23[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "Determines whether this internal frame can be maximized."},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_setMaximizable73[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$23},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$24[] = {
	{"description", 's', "Indicates whether this internal frame is maximized."},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_setMaximum74[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$24},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_setMenuBar75[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$25[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "Determines whether this internal frame can be resized by the user."},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_setResizable77[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$25},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$26[] = {
	{"hidden", 'Z', "true"},
	{"description", 's', "Whether the add and setLayout methods are forwarded"},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_setRootPaneCheckingEnabled79[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$26},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$27[] = {
	{"description", 's', "Indicates whether this internal frame is currently the active frame."},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_setSelected80[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$27},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$28[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "The text displayed in the title bar."},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_setTitle81[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$28},
	{}
};

$NamedAttribute JInternalFrame_Attribute_var$29[] = {
	{"hidden", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The UI object that implements the Component\'s LookAndFeel."},
	{}
};

$CompoundAttribute _JInternalFrame_MethodAnnotations_setUI82[] = {
	{"Ljava/beans/BeanProperty;", JInternalFrame_Attribute_var$29},
	{}
};

$FieldInfo _JInternalFrame_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JInternalFrame, uiClassID)},
	{"rootPane", "Ljavax/swing/JRootPane;", nullptr, $PROTECTED, $field(JInternalFrame, rootPane)},
	{"rootPaneCheckingEnabled", "Z", nullptr, $PROTECTED, $field(JInternalFrame, rootPaneCheckingEnabled)},
	{"closable", "Z", nullptr, $PROTECTED, $field(JInternalFrame, closable)},
	{"isClosed", "Z", nullptr, $PROTECTED, $field(JInternalFrame, isClosed$)},
	{"maximizable", "Z", nullptr, $PROTECTED, $field(JInternalFrame, maximizable)},
	{"isMaximum", "Z", nullptr, $PROTECTED, $field(JInternalFrame, isMaximum$)},
	{"iconable", "Z", nullptr, $PROTECTED, $field(JInternalFrame, iconable)},
	{"isIcon", "Z", nullptr, $PROTECTED, $field(JInternalFrame, isIcon$)},
	{"resizable", "Z", nullptr, $PROTECTED, $field(JInternalFrame, resizable)},
	{"isSelected", "Z", nullptr, $PROTECTED, $field(JInternalFrame, isSelected$)},
	{"frameIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(JInternalFrame, frameIcon)},
	{"title", "Ljava/lang/String;", nullptr, $PROTECTED, $field(JInternalFrame, title)},
	{"desktopIcon", "Ljavax/swing/JInternalFrame$JDesktopIcon;", nullptr, $PROTECTED, $field(JInternalFrame, desktopIcon)},
	{"lastCursor", "Ljava/awt/Cursor;", nullptr, $PRIVATE, $field(JInternalFrame, lastCursor)},
	{"opened", "Z", nullptr, $PRIVATE, $field(JInternalFrame, opened)},
	{"normalBounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(JInternalFrame, normalBounds)},
	{"defaultCloseOperation", "I", nullptr, $PRIVATE, $field(JInternalFrame, defaultCloseOperation)},
	{"lastFocusOwner", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(JInternalFrame, lastFocusOwner)},
	{"CONTENT_PANE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JInternalFrame, CONTENT_PANE_PROPERTY)},
	{"MENU_BAR_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JInternalFrame, MENU_BAR_PROPERTY)},
	{"TITLE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JInternalFrame, TITLE_PROPERTY)},
	{"LAYERED_PANE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JInternalFrame, LAYERED_PANE_PROPERTY)},
	{"ROOT_PANE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JInternalFrame, ROOT_PANE_PROPERTY)},
	{"GLASS_PANE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JInternalFrame, GLASS_PANE_PROPERTY)},
	{"FRAME_ICON_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JInternalFrame, FRAME_ICON_PROPERTY)},
	{"IS_SELECTED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JInternalFrame, IS_SELECTED_PROPERTY)},
	{"IS_CLOSED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JInternalFrame, IS_CLOSED_PROPERTY)},
	{"IS_MAXIMUM_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JInternalFrame, IS_MAXIMUM_PROPERTY)},
	{"IS_ICON_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JInternalFrame, IS_ICON_PROPERTY)},
	{"PROPERTY_CHANGE_LISTENER_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JInternalFrame, PROPERTY_CHANGE_LISTENER_KEY)},
	{"isDragging", "Z", nullptr, 0, $field(JInternalFrame, isDragging)},
	{"danger", "Z", nullptr, 0, $field(JInternalFrame, danger)},
	{}
};

$MethodInfo _JInternalFrame_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JInternalFrame::*)()>(&JInternalFrame::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JInternalFrame::*)($String*)>(&JInternalFrame::init$))},
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(JInternalFrame::*)($String*,bool)>(&JInternalFrame::init$))},
	{"<init>", "(Ljava/lang/String;ZZ)V", nullptr, $PUBLIC, $method(static_cast<void(JInternalFrame::*)($String*,bool,bool)>(&JInternalFrame::init$))},
	{"<init>", "(Ljava/lang/String;ZZZ)V", nullptr, $PUBLIC, $method(static_cast<void(JInternalFrame::*)($String*,bool,bool,bool)>(&JInternalFrame::init$))},
	{"<init>", "(Ljava/lang/String;ZZZZ)V", nullptr, $PUBLIC, $method(static_cast<void(JInternalFrame::*)($String*,bool,bool,bool,bool)>(&JInternalFrame::init$))},
	{"addImpl", "(Ljava/awt/Component;Ljava/lang/Object;I)V", nullptr, $PROTECTED},
	{"addInternalFrameListener", "(Ljavax/swing/event/InternalFrameListener;)V", nullptr, $PUBLIC},
	{"addPropertyChangeListenerIfNecessary", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&JInternalFrame::addPropertyChangeListenerIfNecessary))},
	{"compWriteObjectNotify", "()V", nullptr, 0},
	{"createRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PROTECTED},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"doDefaultCloseAction", "()V", nullptr, $PUBLIC},
	{"fireInternalFrameEvent", "(I)V", nullptr, $PROTECTED},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JInternalFrame_MethodAnnotations_getAccessibleContext14},
	{"getContentPane", "()Ljava/awt/Container;", nullptr, $PUBLIC},
	{"getDefaultCloseOperation", "()I", nullptr, $PUBLIC},
	{"getDesktopIcon", "()Ljavax/swing/JInternalFrame$JDesktopIcon;", nullptr, $PUBLIC},
	{"getDesktopPane", "()Ljavax/swing/JDesktopPane;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JInternalFrame_MethodAnnotations_getDesktopPane18},
	{"getFocusCycleRootAncestor", "()Ljava/awt/Container;", nullptr, $PUBLIC | $FINAL, nullptr, nullptr, nullptr, _JInternalFrame_MethodAnnotations_getFocusCycleRootAncestor19},
	{"getFocusOwner", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getFrameIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getGlassPane", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getInternalFrameListeners", "()[Ljavax/swing/event/InternalFrameListener;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JInternalFrame_MethodAnnotations_getInternalFrameListeners23},
	{"getJMenuBar", "()Ljavax/swing/JMenuBar;", nullptr, $PUBLIC},
	{"getLastCursor", "()Ljava/awt/Cursor;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JInternalFrame_MethodAnnotations_getLastCursor25},
	{"getLayer", "()I", nullptr, $PUBLIC},
	{"getLayeredPane", "()Ljavax/swing/JLayeredPane;", nullptr, $PUBLIC},
	{"getMenuBar", "()Ljavax/swing/JMenuBar;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _JInternalFrame_MethodAnnotations_getMenuBar28},
	{"getMostRecentFocusOwner", "()Ljava/awt/Component;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JInternalFrame_MethodAnnotations_getMostRecentFocusOwner29},
	{"getNormalBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JInternalFrame_MethodAnnotations_getRootPane31},
	{"getTitle", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUI", "()Ljavax/swing/plaf/InternalFrameUI;", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JInternalFrame_MethodAnnotations_getUIClassID34},
	{"getWarningString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(JInternalFrame::*)()>(&JInternalFrame::getWarningString)), nullptr, nullptr, _JInternalFrame_MethodAnnotations_getWarningString35},
	{"hide", "()V", nullptr, $PUBLIC},
	{"isClosable", "()Z", nullptr, $PUBLIC},
	{"isClosed", "()Z", nullptr, $PUBLIC},
	{"isFocusCycleRoot", "()Z", nullptr, $PUBLIC | $FINAL},
	{"isIcon", "()Z", nullptr, $PUBLIC},
	{"isIconifiable", "()Z", nullptr, $PUBLIC},
	{"isMaximizable", "()Z", nullptr, $PUBLIC},
	{"isMaximum", "()Z", nullptr, $PUBLIC},
	{"isResizable", "()Z", nullptr, $PUBLIC},
	{"isRootPaneCheckingEnabled", "()Z", nullptr, $PROTECTED},
	{"isSelected", "()Z", nullptr, $PUBLIC},
	{"moveToBack", "()V", nullptr, $PUBLIC},
	{"moveToFront", "()V", nullptr, $PUBLIC},
	{"pack", "()V", nullptr, $PUBLIC},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"remove", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"removeInternalFrameListener", "(Ljavax/swing/event/InternalFrameListener;)V", nullptr, $PUBLIC},
	{"reshape", "(IIII)V", nullptr, $PUBLIC},
	{"restoreSubcomponentFocus", "()V", nullptr, $PUBLIC},
	{"setClosable", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JInternalFrame_MethodAnnotations_setClosable56},
	{"setClosed", "(Z)V", nullptr, $PUBLIC, nullptr, "java.beans.PropertyVetoException", nullptr, _JInternalFrame_MethodAnnotations_setClosed57},
	{"setContentPane", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JInternalFrame_MethodAnnotations_setContentPane58},
	{"setCursor", "(Ljava/awt/Cursor;)V", nullptr, $PUBLIC},
	{"setDefaultCloseOperation", "(I)V", nullptr, $PUBLIC},
	{"setDesktopIcon", "(Ljavax/swing/JInternalFrame$JDesktopIcon;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JInternalFrame_MethodAnnotations_setDesktopIcon61},
	{"setFocusCycleRoot", "(Z)V", nullptr, $PUBLIC | $FINAL},
	{"setFrameIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JInternalFrame_MethodAnnotations_setFrameIcon63},
	{"setGlassPane", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JInternalFrame_MethodAnnotations_setGlassPane64},
	{"setIcon", "(Z)V", nullptr, $PUBLIC, nullptr, "java.beans.PropertyVetoException", nullptr, _JInternalFrame_MethodAnnotations_setIcon65},
	{"setIconifiable", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JInternalFrame_MethodAnnotations_setIconifiable66},
	{"setJMenuBar", "(Ljavax/swing/JMenuBar;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JInternalFrame_MethodAnnotations_setJMenuBar67},
	{"setLastFocusOwner", "(Ljava/awt/Component;)V", nullptr, $PRIVATE, $method(static_cast<void(JInternalFrame::*)($Component*)>(&JInternalFrame::setLastFocusOwner))},
	{"setLayer", "(Ljava/lang/Integer;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JInternalFrame_MethodAnnotations_setLayer69},
	{"setLayer", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JInternalFrame_MethodAnnotations_setLayer70},
	{"setLayeredPane", "(Ljavax/swing/JLayeredPane;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JInternalFrame_MethodAnnotations_setLayeredPane71},
	{"setLayout", "(Ljava/awt/LayoutManager;)V", nullptr, $PUBLIC},
	{"setMaximizable", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JInternalFrame_MethodAnnotations_setMaximizable73},
	{"setMaximum", "(Z)V", nullptr, $PUBLIC, nullptr, "java.beans.PropertyVetoException", nullptr, _JInternalFrame_MethodAnnotations_setMaximum74},
	{"setMenuBar", "(Ljavax/swing/JMenuBar;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _JInternalFrame_MethodAnnotations_setMenuBar75},
	{"setNormalBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"setResizable", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JInternalFrame_MethodAnnotations_setResizable77},
	{"setRootPane", "(Ljavax/swing/JRootPane;)V", nullptr, $PROTECTED},
	{"setRootPaneCheckingEnabled", "(Z)V", nullptr, $PROTECTED, nullptr, nullptr, nullptr, _JInternalFrame_MethodAnnotations_setRootPaneCheckingEnabled79},
	{"setSelected", "(Z)V", nullptr, $PUBLIC, nullptr, "java.beans.PropertyVetoException", nullptr, _JInternalFrame_MethodAnnotations_setSelected80},
	{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JInternalFrame_MethodAnnotations_setTitle81},
	{"setUI", "(Ljavax/swing/plaf/InternalFrameUI;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JInternalFrame_MethodAnnotations_setUI82},
	{"show", "()V", nullptr, $PUBLIC},
	{"toBack", "()V", nullptr, $PUBLIC},
	{"toFront", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateLastFocusOwner", "(Ljava/awt/Component;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Component*)>(&JInternalFrame::updateLastFocusOwner))},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"updateUIWhenHidden", "()V", nullptr, 0},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JInternalFrame::*)($ObjectOutputStream*)>(&JInternalFrame::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JInternalFrame_InnerClassesInfo_[] = {
	{"javax.swing.JInternalFrame$JDesktopIcon", "javax.swing.JInternalFrame", "JDesktopIcon", $PUBLIC | $STATIC},
	{"javax.swing.JInternalFrame$AccessibleJInternalFrame", "javax.swing.JInternalFrame", "AccessibleJInternalFrame", $PROTECTED},
	{"javax.swing.JInternalFrame$FocusPropertyChangeListener", "javax.swing.JInternalFrame", "FocusPropertyChangeListener", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JInternalFrame_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JInternalFrame",
	"javax.swing.JComponent",
	"javax.accessibility.Accessible,javax.swing.WindowConstants,javax.swing.RootPaneContainer",
	_JInternalFrame_FieldInfo_,
	_JInternalFrame_MethodInfo_,
	nullptr,
	nullptr,
	_JInternalFrame_InnerClassesInfo_,
	_JInternalFrame_Annotations_,
	nullptr,
	"javax.swing.JInternalFrame$JDesktopIcon,javax.swing.JInternalFrame$JDesktopIcon$AccessibleJDesktopIcon,javax.swing.JInternalFrame$AccessibleJInternalFrame,javax.swing.JInternalFrame$FocusPropertyChangeListener"
};

$Object* allocate$JInternalFrame($Class* clazz) {
	return $of($alloc(JInternalFrame));
}

$String* JInternalFrame::toString() {
	 return this->$JComponent::toString();
}

int32_t JInternalFrame::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JInternalFrame::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JInternalFrame::clone() {
	 return this->$JComponent::clone();
}

void JInternalFrame::finalize() {
	this->$JComponent::finalize();
}

$String* JInternalFrame::uiClassID = nullptr;
$String* JInternalFrame::CONTENT_PANE_PROPERTY = nullptr;
$String* JInternalFrame::MENU_BAR_PROPERTY = nullptr;
$String* JInternalFrame::TITLE_PROPERTY = nullptr;
$String* JInternalFrame::LAYERED_PANE_PROPERTY = nullptr;
$String* JInternalFrame::ROOT_PANE_PROPERTY = nullptr;
$String* JInternalFrame::GLASS_PANE_PROPERTY = nullptr;
$String* JInternalFrame::FRAME_ICON_PROPERTY = nullptr;
$String* JInternalFrame::IS_SELECTED_PROPERTY = nullptr;
$String* JInternalFrame::IS_CLOSED_PROPERTY = nullptr;
$String* JInternalFrame::IS_MAXIMUM_PROPERTY = nullptr;
$String* JInternalFrame::IS_ICON_PROPERTY = nullptr;
$Object* JInternalFrame::PROPERTY_CHANGE_LISTENER_KEY = nullptr;

void JInternalFrame::addPropertyChangeListenerIfNecessary() {
	$init(JInternalFrame);
	$useLocalCurrentObjectStackCache();
	if ($nc($($AppContext::getAppContext()))->get(JInternalFrame::PROPERTY_CHANGE_LISTENER_KEY) == nullptr) {
		$var($PropertyChangeListener, focusListener, $new($JInternalFrame$FocusPropertyChangeListener));
		$nc($($AppContext::getAppContext()))->put(JInternalFrame::PROPERTY_CHANGE_LISTENER_KEY, focusListener);
		$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->addPropertyChangeListener(focusListener);
	}
}

void JInternalFrame::updateLastFocusOwner($Component* component) {
	$init(JInternalFrame);
	if (component != nullptr) {
		$var($Component, parent, component);
		while (parent != nullptr && !($instanceOf($Window, parent))) {
			if ($instanceOf(JInternalFrame, parent)) {
				$nc(($cast(JInternalFrame, parent)))->setLastFocusOwner(component);
			}
			$assign(parent, parent->getParent());
		}
	}
}

void JInternalFrame::init$() {
	JInternalFrame::init$(""_s, false, false, false, false);
}

void JInternalFrame::init$($String* title) {
	JInternalFrame::init$(title, false, false, false, false);
}

void JInternalFrame::init$($String* title, bool resizable) {
	JInternalFrame::init$(title, resizable, false, false, false);
}

void JInternalFrame::init$($String* title, bool resizable, bool closable) {
	JInternalFrame::init$(title, resizable, closable, false, false);
}

void JInternalFrame::init$($String* title, bool resizable, bool closable, bool maximizable) {
	JInternalFrame::init$(title, resizable, closable, maximizable, false);
}

void JInternalFrame::init$($String* title, bool resizable, bool closable, bool maximizable, bool iconifiable) {
	$useLocalCurrentObjectStackCache();
	$JComponent::init$();
	this->rootPaneCheckingEnabled = false;
	$set(this, normalBounds, nullptr);
	this->defaultCloseOperation = $WindowConstants::DISPOSE_ON_CLOSE;
	this->isDragging = false;
	this->danger = false;
	setRootPane($(createRootPane()));
	setLayout($$new($BorderLayout));
	$set(this, title, title);
	this->resizable = resizable;
	this->closable = closable;
	this->maximizable = maximizable;
	this->isMaximum$ = false;
	this->iconable = iconifiable;
	this->isIcon$ = false;
	setVisible(false);
	setRootPaneCheckingEnabled(true);
	$set(this, desktopIcon, $new($JInternalFrame$JDesktopIcon, this));
	updateUI();
	$SunToolkit::checkAndSetPolicy(this);
	addPropertyChangeListenerIfNecessary();
}

$JRootPane* JInternalFrame::createRootPane() {
	return $new($JRootPane);
}

$ComponentUI* JInternalFrame::getUI() {
	return $cast($InternalFrameUI, this->ui);
}

void JInternalFrame::setUI($InternalFrameUI* ui) {
	bool checkingEnabled = isRootPaneCheckingEnabled();
	{
		$var($Throwable, var$0, nullptr);
		try {
			setRootPaneCheckingEnabled(false);
			$JComponent::setUI(ui);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			setRootPaneCheckingEnabled(checkingEnabled);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JInternalFrame::updateUI() {
	setUI($cast($InternalFrameUI, $($UIManager::getUI(this))));
	invalidate();
	if (this->desktopIcon != nullptr) {
		$nc(this->desktopIcon)->updateUIWhenHidden();
	}
}

void JInternalFrame::updateUIWhenHidden() {
	$useLocalCurrentObjectStackCache();
	setUI($cast($InternalFrameUI, $($UIManager::getUI(this))));
	invalidate();
	$var($ComponentArray, children, getComponents());
	if (children != nullptr) {
		{
			$var($ComponentArray, arr$, children);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, child, arr$->get(i$));
				{
					$SwingUtilities::updateComponentTreeUI(child);
				}
			}
		}
	}
}

$String* JInternalFrame::getUIClassID() {
	return JInternalFrame::uiClassID;
}

bool JInternalFrame::isRootPaneCheckingEnabled() {
	return this->rootPaneCheckingEnabled;
}

void JInternalFrame::setRootPaneCheckingEnabled(bool enabled) {
	this->rootPaneCheckingEnabled = enabled;
}

void JInternalFrame::addImpl($Component* comp, Object$* constraints, int32_t index) {
	if (isRootPaneCheckingEnabled()) {
		$nc($(getContentPane()))->add(comp, constraints, index);
	} else {
		$JComponent::addImpl(comp, constraints, index);
	}
}

void JInternalFrame::remove($Component* comp) {
	int32_t oldCount = getComponentCount();
	$JComponent::remove(comp);
	if (oldCount == getComponentCount()) {
		$nc($(getContentPane()))->remove(comp);
	}
}

void JInternalFrame::setLayout($LayoutManager* manager) {
	if (isRootPaneCheckingEnabled()) {
		$nc($(getContentPane()))->setLayout(manager);
	} else {
		$JComponent::setLayout(manager);
	}
}

$JMenuBar* JInternalFrame::getMenuBar() {
	return $nc($(getRootPane()))->getMenuBar();
}

$JMenuBar* JInternalFrame::getJMenuBar() {
	return $nc($(getRootPane()))->getJMenuBar();
}

void JInternalFrame::setMenuBar($JMenuBar* m) {
	$useLocalCurrentObjectStackCache();
	$var($JMenuBar, oldValue, getMenuBar());
	$nc($(getRootPane()))->setJMenuBar(m);
	firePropertyChange(JInternalFrame::MENU_BAR_PROPERTY, $of(oldValue), $of(m));
}

void JInternalFrame::setJMenuBar($JMenuBar* m) {
	$useLocalCurrentObjectStackCache();
	$var($JMenuBar, oldValue, getMenuBar());
	$nc($(getRootPane()))->setJMenuBar(m);
	firePropertyChange(JInternalFrame::MENU_BAR_PROPERTY, $of(oldValue), $of(m));
}

$Container* JInternalFrame::getContentPane() {
	return $nc($(getRootPane()))->getContentPane();
}

void JInternalFrame::setContentPane($Container* c) {
	$useLocalCurrentObjectStackCache();
	$var($Container, oldValue, getContentPane());
	$nc($(getRootPane()))->setContentPane(c);
	firePropertyChange(JInternalFrame::CONTENT_PANE_PROPERTY, $of(oldValue), $of(c));
}

$JLayeredPane* JInternalFrame::getLayeredPane() {
	return $nc($(getRootPane()))->getLayeredPane();
}

void JInternalFrame::setLayeredPane($JLayeredPane* layered) {
	$useLocalCurrentObjectStackCache();
	$var($JLayeredPane, oldValue, getLayeredPane());
	$nc($(getRootPane()))->setLayeredPane(layered);
	firePropertyChange(JInternalFrame::LAYERED_PANE_PROPERTY, $of(oldValue), $of(layered));
}

$Component* JInternalFrame::getGlassPane() {
	return $nc($(getRootPane()))->getGlassPane();
}

void JInternalFrame::setGlassPane($Component* glass) {
	$useLocalCurrentObjectStackCache();
	$var($Component, oldValue, getGlassPane());
	$nc($(getRootPane()))->setGlassPane(glass);
	firePropertyChange(JInternalFrame::GLASS_PANE_PROPERTY, $of(oldValue), $of(glass));
}

$JRootPane* JInternalFrame::getRootPane() {
	return this->rootPane;
}

void JInternalFrame::setRootPane($JRootPane* root) {
	$useLocalCurrentObjectStackCache();
	if (this->rootPane != nullptr) {
		remove(static_cast<$Component*>(this->rootPane));
	}
	$var($JRootPane, oldValue, getRootPane());
	$set(this, rootPane, root);
	if (this->rootPane != nullptr) {
		bool checkingEnabled = isRootPaneCheckingEnabled();
		{
			$var($Throwable, var$0, nullptr);
			try {
				setRootPaneCheckingEnabled(false);
				$init($BorderLayout);
				add(static_cast<$Component*>(this->rootPane), $of($BorderLayout::CENTER));
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				setRootPaneCheckingEnabled(checkingEnabled);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	firePropertyChange(JInternalFrame::ROOT_PANE_PROPERTY, $of(oldValue), $of(root));
}

void JInternalFrame::setClosable(bool b) {
	$useLocalCurrentObjectStackCache();
	$init($Boolean);
	$var($Boolean, oldValue, this->closable ? $Boolean::TRUE : $Boolean::FALSE);
	$var($Boolean, newValue, b ? $Boolean::TRUE : $Boolean::FALSE);
	this->closable = b;
	firePropertyChange("closable"_s, $of(oldValue), $of(newValue));
}

bool JInternalFrame::isClosable() {
	return this->closable;
}

bool JInternalFrame::isClosed() {
	return this->isClosed$;
}

void JInternalFrame::setClosed(bool b) {
	$useLocalCurrentObjectStackCache();
	if (this->isClosed$ == b) {
		return;
	}
	$init($Boolean);
	$var($Boolean, oldValue, this->isClosed$ ? $Boolean::TRUE : $Boolean::FALSE);
	$var($Boolean, newValue, b ? $Boolean::TRUE : $Boolean::FALSE);
	if (b) {
		fireInternalFrameEvent($InternalFrameEvent::INTERNAL_FRAME_CLOSING);
	}
	fireVetoableChange(JInternalFrame::IS_CLOSED_PROPERTY, oldValue, newValue);
	this->isClosed$ = b;
	if (this->isClosed$) {
		setVisible(false);
	}
	firePropertyChange(JInternalFrame::IS_CLOSED_PROPERTY, $of(oldValue), $of(newValue));
	if (this->isClosed$) {
		dispose();
	} else if (!this->opened) {
	}
}

void JInternalFrame::setResizable(bool b) {
	$useLocalCurrentObjectStackCache();
	$init($Boolean);
	$var($Boolean, oldValue, this->resizable ? $Boolean::TRUE : $Boolean::FALSE);
	$var($Boolean, newValue, b ? $Boolean::TRUE : $Boolean::FALSE);
	this->resizable = b;
	firePropertyChange("resizable"_s, $of(oldValue), $of(newValue));
}

bool JInternalFrame::isResizable() {
	return this->isMaximum$ ? false : this->resizable;
}

void JInternalFrame::setIconifiable(bool b) {
	$useLocalCurrentObjectStackCache();
	$init($Boolean);
	$var($Boolean, oldValue, this->iconable ? $Boolean::TRUE : $Boolean::FALSE);
	$var($Boolean, newValue, b ? $Boolean::TRUE : $Boolean::FALSE);
	this->iconable = b;
	firePropertyChange("iconable"_s, $of(oldValue), $of(newValue));
}

bool JInternalFrame::isIconifiable() {
	return this->iconable;
}

bool JInternalFrame::isIcon() {
	return this->isIcon$;
}

void JInternalFrame::setIcon(bool b) {
	$useLocalCurrentObjectStackCache();
	if (this->isIcon$ == b) {
		return;
	}
	firePropertyChange("ancestor"_s, ($Object*)nullptr, $($of(getParent())));
	$init($Boolean);
	$var($Boolean, oldValue, this->isIcon$ ? $Boolean::TRUE : $Boolean::FALSE);
	$var($Boolean, newValue, b ? $Boolean::TRUE : $Boolean::FALSE);
	fireVetoableChange(JInternalFrame::IS_ICON_PROPERTY, oldValue, newValue);
	this->isIcon$ = b;
	firePropertyChange(JInternalFrame::IS_ICON_PROPERTY, $of(oldValue), $of(newValue));
	if (b) {
		fireInternalFrameEvent($InternalFrameEvent::INTERNAL_FRAME_ICONIFIED);
	} else {
		fireInternalFrameEvent($InternalFrameEvent::INTERNAL_FRAME_DEICONIFIED);
	}
}

void JInternalFrame::setMaximizable(bool b) {
	$useLocalCurrentObjectStackCache();
	$init($Boolean);
	$var($Boolean, oldValue, this->maximizable ? $Boolean::TRUE : $Boolean::FALSE);
	$var($Boolean, newValue, b ? $Boolean::TRUE : $Boolean::FALSE);
	this->maximizable = b;
	firePropertyChange("maximizable"_s, $of(oldValue), $of(newValue));
}

bool JInternalFrame::isMaximizable() {
	return this->maximizable;
}

bool JInternalFrame::isMaximum() {
	return this->isMaximum$;
}

void JInternalFrame::setMaximum(bool b) {
	$useLocalCurrentObjectStackCache();
	if (this->isMaximum$ == b) {
		return;
	}
	$init($Boolean);
	$var($Boolean, oldValue, this->isMaximum$ ? $Boolean::TRUE : $Boolean::FALSE);
	$var($Boolean, newValue, b ? $Boolean::TRUE : $Boolean::FALSE);
	fireVetoableChange(JInternalFrame::IS_MAXIMUM_PROPERTY, oldValue, newValue);
	this->isMaximum$ = b;
	firePropertyChange(JInternalFrame::IS_MAXIMUM_PROPERTY, $of(oldValue), $of(newValue));
}

$String* JInternalFrame::getTitle() {
	return this->title;
}

void JInternalFrame::setTitle($String* title) {
	$var($String, oldValue, this->title);
	$set(this, title, title);
	firePropertyChange(JInternalFrame::TITLE_PROPERTY, $of(oldValue), $of(title));
}

void JInternalFrame::setSelected(bool selected) {
	$useLocalCurrentObjectStackCache();
	if (selected && this->isSelected$) {
		restoreSubcomponentFocus();
		return;
	}
	if ((this->isSelected$ == selected) || (selected && (this->isIcon$ ? !$nc(this->desktopIcon)->isShowing() : !isShowing()))) {
		return;
	}
	$init($Boolean);
	$var($Boolean, oldValue, this->isSelected$ ? $Boolean::TRUE : $Boolean::FALSE);
	$var($Boolean, newValue, selected ? $Boolean::TRUE : $Boolean::FALSE);
	fireVetoableChange(JInternalFrame::IS_SELECTED_PROPERTY, oldValue, newValue);
	if (selected) {
		restoreSubcomponentFocus();
	}
	this->isSelected$ = selected;
	firePropertyChange(JInternalFrame::IS_SELECTED_PROPERTY, $of(oldValue), $of(newValue));
	if (this->isSelected$) {
		fireInternalFrameEvent($InternalFrameEvent::INTERNAL_FRAME_ACTIVATED);
	} else {
		fireInternalFrameEvent($InternalFrameEvent::INTERNAL_FRAME_DEACTIVATED);
		try {
			$nc($($nc($($Toolkit::getDefaultToolkit()))->getSystemEventQueue()))->postEvent($$new($UngrabEvent, this));
		} catch ($SecurityException& e) {
			this->dispatchEvent($$new($UngrabEvent, this));
		}
	}
	repaint();
}

bool JInternalFrame::isSelected() {
	return this->isSelected$;
}

void JInternalFrame::setFrameIcon($Icon* icon) {
	$var($Icon, oldIcon, this->frameIcon);
	$set(this, frameIcon, icon);
	firePropertyChange(JInternalFrame::FRAME_ICON_PROPERTY, $of(oldIcon), $of(icon));
}

$Icon* JInternalFrame::getFrameIcon() {
	return this->frameIcon;
}

void JInternalFrame::moveToFront() {
	$useLocalCurrentObjectStackCache();
	if (isIcon()) {
		if ($instanceOf($JLayeredPane, $($nc($(getDesktopIcon()))->getParent()))) {
			$nc(($cast($JLayeredPane, $($nc($(getDesktopIcon()))->getParent()))))->moveToFront($(getDesktopIcon()));
		}
	} else if ($instanceOf($JLayeredPane, $(getParent()))) {
		$nc(($cast($JLayeredPane, $(getParent()))))->moveToFront(this);
	}
}

void JInternalFrame::moveToBack() {
	$useLocalCurrentObjectStackCache();
	if (isIcon()) {
		if ($instanceOf($JLayeredPane, $($nc($(getDesktopIcon()))->getParent()))) {
			$nc(($cast($JLayeredPane, $($nc($(getDesktopIcon()))->getParent()))))->moveToBack($(getDesktopIcon()));
		}
	} else if ($instanceOf($JLayeredPane, $(getParent()))) {
		$nc(($cast($JLayeredPane, $(getParent()))))->moveToBack(this);
	}
}

$Cursor* JInternalFrame::getLastCursor() {
	return this->lastCursor;
}

void JInternalFrame::setCursor($Cursor* cursor) {
	if (cursor == nullptr) {
		$set(this, lastCursor, nullptr);
		$JComponent::setCursor(cursor);
		return;
	}
	int32_t type = $nc(cursor)->getType();
	if (!(type == $Cursor::SW_RESIZE_CURSOR || type == $Cursor::SE_RESIZE_CURSOR || type == $Cursor::NW_RESIZE_CURSOR || type == $Cursor::NE_RESIZE_CURSOR || type == $Cursor::N_RESIZE_CURSOR || type == $Cursor::S_RESIZE_CURSOR || type == $Cursor::W_RESIZE_CURSOR || type == $Cursor::E_RESIZE_CURSOR)) {
		$set(this, lastCursor, cursor);
	}
	$JComponent::setCursor(cursor);
}

void JInternalFrame::setLayer($Integer* layer) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = getParent() != nullptr;
	if (var$0 && $instanceOf($JLayeredPane, $(getParent()))) {
		$var($JLayeredPane, p, $cast($JLayeredPane, getParent()));
		int32_t var$1 = $nc(layer)->intValue();
		$nc(p)->setLayer(this, var$1, p->getPosition(this));
	} else {
		$JLayeredPane::putLayer(this, $nc(layer)->intValue());
		if (getParent() != nullptr) {
			int32_t var$2 = getX();
			int32_t var$3 = getY();
			int32_t var$4 = getWidth();
			$nc($(getParent()))->repaint(var$2, var$3, var$4, getHeight());
		}
	}
}

void JInternalFrame::setLayer(int32_t layer) {
	this->setLayer($($Integer::valueOf(layer)));
}

int32_t JInternalFrame::getLayer() {
	return $JLayeredPane::getLayer(static_cast<$JComponent*>(this));
}

$JDesktopPane* JInternalFrame::getDesktopPane() {
	$useLocalCurrentObjectStackCache();
	$var($Container, p, nullptr);
	$assign(p, getParent());
	while (p != nullptr && !($instanceOf($JDesktopPane, p))) {
		$assign(p, p->getParent());
	}
	if (p == nullptr) {
		$assign(p, $nc($(getDesktopIcon()))->getParent());
		while (p != nullptr && !($instanceOf($JDesktopPane, p))) {
			$assign(p, p->getParent());
		}
	}
	return $cast($JDesktopPane, p);
}

void JInternalFrame::setDesktopIcon($JInternalFrame$JDesktopIcon* d) {
	$var($JInternalFrame$JDesktopIcon, oldValue, getDesktopIcon());
	$set(this, desktopIcon, d);
	firePropertyChange("desktopIcon"_s, $of(oldValue), $of(d));
}

$JInternalFrame$JDesktopIcon* JInternalFrame::getDesktopIcon() {
	return this->desktopIcon;
}

$Rectangle* JInternalFrame::getNormalBounds() {
	if (this->normalBounds != nullptr) {
		return this->normalBounds;
	} else {
		return getBounds();
	}
}

void JInternalFrame::setNormalBounds($Rectangle* r) {
	$set(this, normalBounds, r);
}

$Component* JInternalFrame::getFocusOwner() {
	if (isSelected()) {
		return this->lastFocusOwner;
	}
	return nullptr;
}

$Component* JInternalFrame::getMostRecentFocusOwner() {
	$useLocalCurrentObjectStackCache();
	if (isSelected()) {
		return getFocusOwner();
	}
	if (this->lastFocusOwner != nullptr) {
		return this->lastFocusOwner;
	}
	$var($FocusTraversalPolicy, policy, getFocusTraversalPolicy());
	if ($instanceOf($InternalFrameFocusTraversalPolicy, policy)) {
		return $nc(($cast($InternalFrameFocusTraversalPolicy, policy)))->getInitialComponent(this);
	}
	$var($Component, toFocus, $nc(policy)->getDefaultComponent(this));
	if (toFocus != nullptr) {
		return toFocus;
	}
	return getContentPane();
}

void JInternalFrame::restoreSubcomponentFocus() {
	$useLocalCurrentObjectStackCache();
	if (isIcon()) {
		$SwingUtilities2::compositeRequestFocus($(getDesktopIcon()));
	} else {
		$var($Component, component, $nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getPermanentFocusOwner());
		if ((component == nullptr) || !$SwingUtilities::isDescendingFrom(component, this)) {
			setLastFocusOwner($(getMostRecentFocusOwner()));
			if (this->lastFocusOwner == nullptr) {
				setLastFocusOwner($(getContentPane()));
			}
			$nc(this->lastFocusOwner)->requestFocus();
		}
	}
}

void JInternalFrame::setLastFocusOwner($Component* component) {
	$set(this, lastFocusOwner, component);
}

void JInternalFrame::reshape(int32_t x, int32_t y, int32_t width, int32_t height) {
	$JComponent::reshape(x, y, width, height);
	validate();
	repaint();
}

void JInternalFrame::addInternalFrameListener($InternalFrameListener* l) {
	$load($InternalFrameListener);
	$nc(this->listenerList)->add($InternalFrameListener::class$, l);
	enableEvents(0);
}

void JInternalFrame::removeInternalFrameListener($InternalFrameListener* l) {
	$load($InternalFrameListener);
	$nc(this->listenerList)->remove($InternalFrameListener::class$, l);
}

$InternalFrameListenerArray* JInternalFrame::getInternalFrameListeners() {
	$load($InternalFrameListener);
	return $fcast($InternalFrameListenerArray, $nc(this->listenerList)->getListeners($InternalFrameListener::class$));
}

void JInternalFrame::fireInternalFrameEvent(int32_t id) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	$var($InternalFrameEvent, e, nullptr);
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($InternalFrameListener);
		if ($equals(listeners->get(i), $InternalFrameListener::class$)) {
			if (e == nullptr) {
				$assign(e, $new($InternalFrameEvent, this, id));
			}
			switch ($nc(e)->getID()) {
			case $InternalFrameEvent::INTERNAL_FRAME_OPENED:
				{
					$nc(($cast($InternalFrameListener, listeners->get(i + 1))))->internalFrameOpened(e);
					break;
				}
			case $InternalFrameEvent::INTERNAL_FRAME_CLOSING:
				{
					$nc(($cast($InternalFrameListener, listeners->get(i + 1))))->internalFrameClosing(e);
					break;
				}
			case $InternalFrameEvent::INTERNAL_FRAME_CLOSED:
				{
					$nc(($cast($InternalFrameListener, listeners->get(i + 1))))->internalFrameClosed(e);
					break;
				}
			case $InternalFrameEvent::INTERNAL_FRAME_ICONIFIED:
				{
					$nc(($cast($InternalFrameListener, listeners->get(i + 1))))->internalFrameIconified(e);
					break;
				}
			case $InternalFrameEvent::INTERNAL_FRAME_DEICONIFIED:
				{
					$nc(($cast($InternalFrameListener, listeners->get(i + 1))))->internalFrameDeiconified(e);
					break;
				}
			case $InternalFrameEvent::INTERNAL_FRAME_ACTIVATED:
				{
					$nc(($cast($InternalFrameListener, listeners->get(i + 1))))->internalFrameActivated(e);
					break;
				}
			case $InternalFrameEvent::INTERNAL_FRAME_DEACTIVATED:
				{
					$nc(($cast($InternalFrameListener, listeners->get(i + 1))))->internalFrameDeactivated(e);
					break;
				}
			default:
				{
					break;
				}
			}
		}
	}
}

void JInternalFrame::doDefaultCloseAction() {
	fireInternalFrameEvent($InternalFrameEvent::INTERNAL_FRAME_CLOSING);
	switch (this->defaultCloseOperation) {
	case $WindowConstants::DO_NOTHING_ON_CLOSE:
		{
			break;
		}
	case $WindowConstants::HIDE_ON_CLOSE:
		{
			setVisible(false);
			if (isSelected()) {
				try {
					setSelected(false);
				} catch ($PropertyVetoException& pve) {
				}
			}
			break;
		}
	case $WindowConstants::DISPOSE_ON_CLOSE:
		{
			try {
				$init($Boolean);
				fireVetoableChange(JInternalFrame::IS_CLOSED_PROPERTY, $Boolean::FALSE, $Boolean::TRUE);
				this->isClosed$ = true;
				setVisible(false);
				firePropertyChange(JInternalFrame::IS_CLOSED_PROPERTY, $of($Boolean::FALSE), $of($Boolean::TRUE));
				dispose();
			} catch ($PropertyVetoException& pve) {
			}
			break;
		}
	default:
		{
			break;
		}
	}
}

void JInternalFrame::setDefaultCloseOperation(int32_t operation) {
	this->defaultCloseOperation = operation;
}

int32_t JInternalFrame::getDefaultCloseOperation() {
	return this->defaultCloseOperation;
}

void JInternalFrame::pack() {
	try {
		if (isIcon()) {
			setIcon(false);
		} else if (isMaximum()) {
			setMaximum(false);
		}
	} catch ($PropertyVetoException& e) {
		return;
	}
	setSize($(getPreferredSize()));
	validate();
}

void JInternalFrame::show() {
	if (isVisible()) {
		return;
	}
	if (!this->opened) {
		fireInternalFrameEvent($InternalFrameEvent::INTERNAL_FRAME_OPENED);
		this->opened = true;
	}
	$nc($(getDesktopIcon()))->setVisible(true);
	toFront();
	$JComponent::show();
	if (this->isIcon$) {
		return;
	}
	if (!isSelected()) {
		try {
			setSelected(true);
		} catch ($PropertyVetoException& pve) {
		}
	}
}

void JInternalFrame::hide() {
	if (isIcon()) {
		$nc($(getDesktopIcon()))->setVisible(false);
	}
	$JComponent::hide();
}

void JInternalFrame::dispose() {
	$useLocalCurrentObjectStackCache();
	if (isVisible()) {
		setVisible(false);
	}
	if (!this->isClosed$) {
		$init($Boolean);
		firePropertyChange(JInternalFrame::IS_CLOSED_PROPERTY, $of($Boolean::FALSE), $of($Boolean::TRUE));
		this->isClosed$ = true;
	}
	fireInternalFrameEvent($InternalFrameEvent::INTERNAL_FRAME_CLOSED);
	try {
		$nc($($nc($($Toolkit::getDefaultToolkit()))->getSystemEventQueue()))->postEvent($$new($UngrabEvent, this));
	} catch ($SecurityException& e) {
		this->dispatchEvent($$new($UngrabEvent, this));
	}
}

void JInternalFrame::toFront() {
	moveToFront();
}

void JInternalFrame::toBack() {
	moveToBack();
}

void JInternalFrame::setFocusCycleRoot(bool focusCycleRoot) {
}

bool JInternalFrame::isFocusCycleRoot() {
	return true;
}

$Container* JInternalFrame::getFocusCycleRootAncestor() {
	return nullptr;
}

$String* JInternalFrame::getWarningString() {
	return nullptr;
}

void JInternalFrame::writeObject($ObjectOutputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JInternalFrame::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			bool old = isRootPaneCheckingEnabled();
			{
				$var($Throwable, var$0, nullptr);
				try {
					setRootPaneCheckingEnabled(false);
					$nc(this->ui)->installUI(this);
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					setRootPaneCheckingEnabled(old);
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
}

void JInternalFrame::compWriteObjectNotify() {
	bool old = isRootPaneCheckingEnabled();
	{
		$var($Throwable, var$0, nullptr);
		try {
			setRootPaneCheckingEnabled(false);
			$JComponent::compWriteObjectNotify();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			setRootPaneCheckingEnabled(old);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$String* JInternalFrame::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, rootPaneString, this->rootPane != nullptr ? $nc(this->rootPane)->toString() : ""_s);
	$var($String, rootPaneCheckingEnabledString, this->rootPaneCheckingEnabled ? "true"_s : "false"_s);
	$var($String, closableString, this->closable ? "true"_s : "false"_s);
	$var($String, isClosedString, this->isClosed$ ? "true"_s : "false"_s);
	$var($String, maximizableString, this->maximizable ? "true"_s : "false"_s);
	$var($String, isMaximumString, this->isMaximum$ ? "true"_s : "false"_s);
	$var($String, iconableString, this->iconable ? "true"_s : "false"_s);
	$var($String, isIconString, this->isIcon$ ? "true"_s : "false"_s);
	$var($String, resizableString, this->resizable ? "true"_s : "false"_s);
	$var($String, isSelectedString, this->isSelected$ ? "true"_s : "false"_s);
	$var($String, frameIconString, this->frameIcon != nullptr ? $nc($of(this->frameIcon))->toString() : ""_s);
	$var($String, titleString, this->title != nullptr ? this->title : ""_s);
	$var($String, desktopIconString, this->desktopIcon != nullptr ? $nc(this->desktopIcon)->toString() : ""_s);
	$var($String, openedString, this->opened ? "true"_s : "false"_s);
	$var($String, defaultCloseOperationString, nullptr);
	if (this->defaultCloseOperation == $WindowConstants::HIDE_ON_CLOSE) {
		$assign(defaultCloseOperationString, "HIDE_ON_CLOSE"_s);
	} else if (this->defaultCloseOperation == $WindowConstants::DISPOSE_ON_CLOSE) {
		$assign(defaultCloseOperationString, "DISPOSE_ON_CLOSE"_s);
	} else if (this->defaultCloseOperation == $WindowConstants::DO_NOTHING_ON_CLOSE) {
		$assign(defaultCloseOperationString, "DO_NOTHING_ON_CLOSE"_s);
	} else {
		$assign(defaultCloseOperationString, ""_s);
	}
	return $str({$($JComponent::paramString()), ",closable="_s, closableString, ",defaultCloseOperation="_s, defaultCloseOperationString, ",desktopIcon="_s, desktopIconString, ",frameIcon="_s, frameIconString, ",iconable="_s, iconableString, ",isClosed="_s, isClosedString, ",isIcon="_s, isIconString, ",isMaximum="_s, 
	isMaximumString, ",isSelected="_s, isSelectedString, ",maximizable="_s, maximizableString, ",opened="_s, openedString, ",resizable="_s, resizableString, ",rootPane="_s, rootPaneString, ",rootPaneCheckingEnabled="_s, rootPaneCheckingEnabledString, ",title="_s, titleString});
}

void JInternalFrame::paintComponent($Graphics* g) {
	if (this->isDragging) {
		this->danger = true;
	}
	$JComponent::paintComponent(g);
}

$AccessibleContext* JInternalFrame::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JInternalFrame$AccessibleJInternalFrame, this));
	}
	return this->accessibleContext;
}

void clinit$JInternalFrame($Class* class$) {
	$assignStatic(JInternalFrame::uiClassID, "InternalFrameUI"_s);
	$assignStatic(JInternalFrame::CONTENT_PANE_PROPERTY, "contentPane"_s);
	$assignStatic(JInternalFrame::MENU_BAR_PROPERTY, "JMenuBar"_s);
	$assignStatic(JInternalFrame::TITLE_PROPERTY, "title"_s);
	$assignStatic(JInternalFrame::LAYERED_PANE_PROPERTY, "layeredPane"_s);
	$assignStatic(JInternalFrame::ROOT_PANE_PROPERTY, "rootPane"_s);
	$assignStatic(JInternalFrame::GLASS_PANE_PROPERTY, "glassPane"_s);
	$assignStatic(JInternalFrame::FRAME_ICON_PROPERTY, "frameIcon"_s);
	$assignStatic(JInternalFrame::IS_SELECTED_PROPERTY, "selected"_s);
	$assignStatic(JInternalFrame::IS_CLOSED_PROPERTY, "closed"_s);
	$assignStatic(JInternalFrame::IS_MAXIMUM_PROPERTY, "maximum"_s);
	$assignStatic(JInternalFrame::IS_ICON_PROPERTY, "icon"_s);
	$assignStatic(JInternalFrame::PROPERTY_CHANGE_LISTENER_KEY, $new($StringBuilder, "InternalFramePropertyChangeListener"_s));
}

JInternalFrame::JInternalFrame() {
}

$Class* JInternalFrame::load$($String* name, bool initialize) {
	$loadClass(JInternalFrame, name, initialize, &_JInternalFrame_ClassInfo_, clinit$JInternalFrame, allocate$JInternalFrame);
	return class$;
}

$Class* JInternalFrame::class$ = nullptr;

	} // swing
} // javax