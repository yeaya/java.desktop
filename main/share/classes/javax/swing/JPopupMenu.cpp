#include <javax/swing/JPopupMenu.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/StringBuffer.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/EventListener.h>
#include <java/util/Iterator.h>
#include <java/util/Vector.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/DefaultSingleSelectionModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu$1.h>
#include <javax/swing/JPopupMenu$AccessibleJPopupMenu.h>
#include <javax/swing/JPopupMenu$Separator.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/Popup.h>
#include <javax/swing/PopupFactory.h>
#include <javax/swing/SingleSelectionModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/event/MenuKeyEvent.h>
#include <javax/swing/event/MenuKeyListener.h>
#include <javax/swing/event/PopupMenuEvent.h>
#include <javax/swing/event/PopupMenuListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/PopupMenuUI.h>
#include <sun/awt/SunToolkit.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef ACCESSIBLE_VISIBLE_DATA_PROPERTY
#undef CENTER
#undef DEBUG
#undef FALSE
#undef HEAVY_WEIGHT_POPUP
#undef KEY_PRESSED
#undef KEY_RELEASED
#undef KEY_TYPED
#undef LIGHT_WEIGHT_POPUP
#undef MAX_VALUE
#undef MIN_VALUE
#undef MOUSE_EVENT_MASK
#undef TRACE
#undef TRAILING
#undef TRUE
#undef TYPE_RASTER_SCREEN
#undef VERBOSE

using $ComponentArray = $Array<::java::awt::Component>;
using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $MenuKeyListenerArray = $Array<::javax::swing::event::MenuKeyListener>;
using $PopupMenuListenerArray = $Array<::javax::swing::event::PopupMenuListener>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Dimension = ::java::awt::Dimension;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $StringBuffer = ::java::lang::StringBuffer;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $EventListener = ::java::util::EventListener;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $DefaultSingleSelectionModel = ::javax::swing::DefaultSingleSelectionModel;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu$1 = ::javax::swing::JPopupMenu$1;
using $JPopupMenu$AccessibleJPopupMenu = ::javax::swing::JPopupMenu$AccessibleJPopupMenu;
using $JPopupMenu$Separator = ::javax::swing::JPopupMenu$Separator;
using $JSeparator = ::javax::swing::JSeparator;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $Popup = ::javax::swing::Popup;
using $PopupFactory = ::javax::swing::PopupFactory;
using $SingleSelectionModel = ::javax::swing::SingleSelectionModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $MenuKeyEvent = ::javax::swing::event::MenuKeyEvent;
using $MenuKeyListener = ::javax::swing::event::MenuKeyListener;
using $PopupMenuEvent = ::javax::swing::event::PopupMenuEvent;
using $PopupMenuListener = ::javax::swing::event::PopupMenuListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $PopupMenuUI = ::javax::swing::plaf::PopupMenuUI;
using $SunToolkit = ::sun::awt::SunToolkit;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace javax {
	namespace swing {

$NamedAttribute JPopupMenu_Attribute_var$0[] = {
	{"defaultProperty", 's', "UI"},
	{"description", 's', "A small window that pops up and displays a series of choices."},
	{}
};

$NamedAttribute JPopupMenu_Attribute_var$1[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _JPopupMenu_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JPopupMenu_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", JPopupMenu_Attribute_var$1},
	{}
};

$NamedAttribute JPopupMenu_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JPopupMenu_MethodAnnotations_getAccessibleContext19[] = {
	{"Ljava/beans/BeanProperty;", JPopupMenu_Attribute_var$2},
	{}
};

$CompoundAttribute _JPopupMenu_MethodAnnotations_getComponentAtIndex21[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$NamedAttribute JPopupMenu_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JPopupMenu_MethodAnnotations_getMargin28[] = {
	{"Ljava/beans/BeanProperty;", JPopupMenu_Attribute_var$3},
	{}
};

$NamedAttribute JPopupMenu_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JPopupMenu_MethodAnnotations_getMenuKeyListeners29[] = {
	{"Ljava/beans/BeanProperty;", JPopupMenu_Attribute_var$4},
	{}
};

$NamedAttribute JPopupMenu_Attribute_var$5[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JPopupMenu_MethodAnnotations_getPopupMenuListeners30[] = {
	{"Ljava/beans/BeanProperty;", JPopupMenu_Attribute_var$5},
	{}
};

$NamedAttribute JPopupMenu_Attribute_var$6[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JPopupMenu_MethodAnnotations_getSubElements33[] = {
	{"Ljava/beans/BeanProperty;", JPopupMenu_Attribute_var$6},
	{}
};

$NamedAttribute JPopupMenu_Attribute_var$7[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JPopupMenu_MethodAnnotations_getUIClassID35[] = {
	{"Ljava/beans/BeanProperty;", JPopupMenu_Attribute_var$7},
	{}
};

$NamedAttribute JPopupMenu_Attribute_var$8[] = {
	{"bound", 'Z', "false"},
	{"description", 's', "Is the border of the popup menu painted"},
	{}
};

$CompoundAttribute _JPopupMenu_MethodAnnotations_setBorderPainted57[] = {
	{"Ljava/beans/BeanProperty;", JPopupMenu_Attribute_var$8},
	{}
};

$NamedAttribute JPopupMenu_Attribute_var$9[] = {
	{"bound", 'Z', "false"},
	{"expert", 'Z', "true"},
	{"description", 's', "The invoking component for the popup menu"},
	{}
};

$CompoundAttribute _JPopupMenu_MethodAnnotations_setInvoker59[] = {
	{"Ljava/beans/BeanProperty;", JPopupMenu_Attribute_var$9},
	{}
};

$NamedAttribute JPopupMenu_Attribute_var$10[] = {
	{"description", 's', "The label for the popup menu."},
	{}
};

$CompoundAttribute _JPopupMenu_MethodAnnotations_setLabel60[] = {
	{"Ljava/beans/BeanProperty;", JPopupMenu_Attribute_var$10},
	{}
};

$NamedAttribute JPopupMenu_Attribute_var$11[] = {
	{"bound", 'Z', "false"},
	{"expert", 'Z', "true"},
	{"description", 's', "Determines whether lightweight popups are used when possible"},
	{}
};

$CompoundAttribute _JPopupMenu_MethodAnnotations_setLightWeightPopupEnabled61[] = {
	{"Ljava/beans/BeanProperty;", JPopupMenu_Attribute_var$11},
	{}
};

$NamedAttribute JPopupMenu_Attribute_var$12[] = {
	{"description", 's', "The location of the popup menu."},
	{}
};

$CompoundAttribute _JPopupMenu_MethodAnnotations_setLocation62[] = {
	{"Ljava/beans/BeanProperty;", JPopupMenu_Attribute_var$12},
	{}
};

$NamedAttribute JPopupMenu_Attribute_var$13[] = {
	{"description", 's', "The size of the popup menu"},
	{}
};

$CompoundAttribute _JPopupMenu_MethodAnnotations_setPopupSize63[] = {
	{"Ljava/beans/BeanProperty;", JPopupMenu_Attribute_var$13},
	{}
};

$NamedAttribute JPopupMenu_Attribute_var$14[] = {
	{"description", 's', "The size of the popup menu"},
	{}
};

$CompoundAttribute _JPopupMenu_MethodAnnotations_setPopupSize64[] = {
	{"Ljava/beans/BeanProperty;", JPopupMenu_Attribute_var$14},
	{}
};

$NamedAttribute JPopupMenu_Attribute_var$15[] = {
	{"expert", 'Z', "true"},
	{"hidden", 'Z', "true"},
	{"description", 's', "The selected component on the popup menu"},
	{}
};

$CompoundAttribute _JPopupMenu_MethodAnnotations_setSelected65[] = {
	{"Ljava/beans/BeanProperty;", JPopupMenu_Attribute_var$15},
	{}
};

$NamedAttribute JPopupMenu_Attribute_var$16[] = {
	{"bound", 'Z', "false"},
	{"expert", 'Z', "true"},
	{"description", 's', "The selection model for the popup menu"},
	{}
};

$CompoundAttribute _JPopupMenu_MethodAnnotations_setSelectionModel66[] = {
	{"Ljava/beans/BeanProperty;", JPopupMenu_Attribute_var$16},
	{}
};

$NamedAttribute JPopupMenu_Attribute_var$17[] = {
	{"hidden", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The UI object that implements the Component\'s LookAndFeel."},
	{}
};

$CompoundAttribute _JPopupMenu_MethodAnnotations_setUI67[] = {
	{"Ljava/beans/BeanProperty;", JPopupMenu_Attribute_var$17},
	{}
};

$NamedAttribute JPopupMenu_Attribute_var$18[] = {
	{"description", 's', "Makes the popup visible"},
	{}
};

$CompoundAttribute _JPopupMenu_MethodAnnotations_setVisible68[] = {
	{"Ljava/beans/BeanProperty;", JPopupMenu_Attribute_var$18},
	{}
};

$FieldInfo _JPopupMenu_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPopupMenu, uiClassID)},
	{"defaultLWPopupEnabledKey", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPopupMenu, defaultLWPopupEnabledKey)},
	{"popupPostionFixDisabled", "Z", nullptr, $STATIC, $staticField(JPopupMenu, popupPostionFixDisabled)},
	{"invoker", "Ljava/awt/Component;", nullptr, $TRANSIENT, $field(JPopupMenu, invoker)},
	{"popup", "Ljavax/swing/Popup;", nullptr, $TRANSIENT, $field(JPopupMenu, popup)},
	{"frame", "Ljava/awt/Frame;", nullptr, $TRANSIENT, $field(JPopupMenu, frame)},
	{"desiredLocationX", "I", nullptr, $PRIVATE, $field(JPopupMenu, desiredLocationX)},
	{"desiredLocationY", "I", nullptr, $PRIVATE, $field(JPopupMenu, desiredLocationY)},
	{"label", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JPopupMenu, label)},
	{"paintBorder", "Z", nullptr, $PRIVATE, $field(JPopupMenu, paintBorder$)},
	{"margin", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(JPopupMenu, margin)},
	{"lightWeightPopup", "Z", nullptr, $PRIVATE, $field(JPopupMenu, lightWeightPopup)},
	{"selectionModel", "Ljavax/swing/SingleSelectionModel;", nullptr, $PRIVATE, $field(JPopupMenu, selectionModel)},
	{"classLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPopupMenu, classLock)},
	{"TRACE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JPopupMenu, TRACE)},
	{"VERBOSE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JPopupMenu, VERBOSE)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JPopupMenu, DEBUG)},
	{}
};

$MethodInfo _JPopupMenu_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JPopupMenu::*)()>(&JPopupMenu::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JPopupMenu::*)($String*)>(&JPopupMenu::init$))},
	{"add", "(Ljavax/swing/JMenuItem;)Ljavax/swing/JMenuItem;", nullptr, $PUBLIC},
	{"add", "(Ljava/lang/String;)Ljavax/swing/JMenuItem;", nullptr, $PUBLIC},
	{"add", "(Ljavax/swing/Action;)Ljavax/swing/JMenuItem;", nullptr, $PUBLIC},
	{"addMenuKeyListener", "(Ljavax/swing/event/MenuKeyListener;)V", nullptr, $PUBLIC},
	{"addPopupMenuListener", "(Ljavax/swing/event/PopupMenuListener;)V", nullptr, $PUBLIC},
	{"addSeparator", "()V", nullptr, $PUBLIC},
	{"adjustPopupLocationToFitScreen", "(II)Ljava/awt/Point;", nullptr, 0},
	{"alwaysOnTop", "()Z", nullptr, 0},
	{"canPopupOverlapTaskBar", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&JPopupMenu::canPopupOverlapTaskBar))},
	{"createActionChangeListener", "(Ljavax/swing/JMenuItem;)Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createActionComponent", "(Ljavax/swing/Action;)Ljavax/swing/JMenuItem;", nullptr, $PROTECTED},
	{"fireMenuKeyPressed", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(JPopupMenu::*)($MenuKeyEvent*)>(&JPopupMenu::fireMenuKeyPressed))},
	{"fireMenuKeyReleased", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(JPopupMenu::*)($MenuKeyEvent*)>(&JPopupMenu::fireMenuKeyReleased))},
	{"fireMenuKeyTyped", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(JPopupMenu::*)($MenuKeyEvent*)>(&JPopupMenu::fireMenuKeyTyped))},
	{"firePopupMenuCanceled", "()V", nullptr, $PROTECTED},
	{"firePopupMenuWillBecomeInvisible", "()V", nullptr, $PROTECTED},
	{"firePopupMenuWillBecomeVisible", "()V", nullptr, $PROTECTED},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JPopupMenu_MethodAnnotations_getAccessibleContext19},
	{"getComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getComponentAtIndex", "(I)Ljava/awt/Component;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _JPopupMenu_MethodAnnotations_getComponentAtIndex21},
	{"getComponentIndex", "(Ljava/awt/Component;)I", nullptr, $PUBLIC},
	{"getCurrentGraphicsConfiguration", "(Ljava/awt/Point;)Ljava/awt/GraphicsConfiguration;", nullptr, $PRIVATE, $method(static_cast<$GraphicsConfiguration*(JPopupMenu::*)($Point*)>(&JPopupMenu::getCurrentGraphicsConfiguration))},
	{"getDefaultLightWeightPopupEnabled", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&JPopupMenu::getDefaultLightWeightPopupEnabled))},
	{"getFrame", "(Ljava/awt/Component;)Ljava/awt/Frame;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Frame*(*)($Component*)>(&JPopupMenu::getFrame))},
	{"getInvoker", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getLabel", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMargin", "()Ljava/awt/Insets;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JPopupMenu_MethodAnnotations_getMargin28},
	{"getMenuKeyListeners", "()[Ljavax/swing/event/MenuKeyListener;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JPopupMenu_MethodAnnotations_getMenuKeyListeners29},
	{"getPopupMenuListeners", "()[Ljavax/swing/event/PopupMenuListener;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JPopupMenu_MethodAnnotations_getPopupMenuListeners30},
	{"getRootPopupMenu", "()Ljavax/swing/JPopupMenu;", nullptr, 0},
	{"getSelectionModel", "()Ljavax/swing/SingleSelectionModel;", nullptr, $PUBLIC},
	{"getSubElements", "()[Ljavax/swing/MenuElement;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JPopupMenu_MethodAnnotations_getSubElements33},
	{"getUI", "()Ljavax/swing/plaf/PopupMenuUI;", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JPopupMenu_MethodAnnotations_getUIClassID35},
	{"insert", "(Ljavax/swing/Action;I)V", nullptr, $PUBLIC},
	{"insert", "(Ljava/awt/Component;I)V", nullptr, $PUBLIC},
	{"isBorderPainted", "()Z", nullptr, $PUBLIC},
	{"isLightWeightPopupEnabled", "()Z", nullptr, $PUBLIC},
	{"isPopupMenu", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(JPopupMenu::*)()>(&JPopupMenu::isPopupMenu))},
	{"isPopupTrigger", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PUBLIC},
	{"isSubPopupMenu", "(Ljavax/swing/JPopupMenu;)Z", nullptr, 0},
	{"isVisible", "()Z", nullptr, $PUBLIC},
	{"menuSelectionChanged", "(Z)V", nullptr, $PUBLIC},
	{"pack", "()V", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"processFocusEvent", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PROTECTED},
	{"processKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PROTECTED},
	{"processKeyEvent", "(Ljava/awt/event/KeyEvent;[Ljavax/swing/MenuElement;Ljavax/swing/MenuSelectionManager;)V", nullptr, $PUBLIC},
	{"processMenuKeyEvent", "(Ljavax/swing/event/MenuKeyEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(JPopupMenu::*)($MenuKeyEvent*)>(&JPopupMenu::processMenuKeyEvent))},
	{"processMouseEvent", "(Ljava/awt/event/MouseEvent;[Ljavax/swing/MenuElement;Ljavax/swing/MenuSelectionManager;)V", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JPopupMenu::*)($ObjectInputStream*)>(&JPopupMenu::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"remove", "(I)V", nullptr, $PUBLIC},
	{"removeMenuKeyListener", "(Ljavax/swing/event/MenuKeyListener;)V", nullptr, $PUBLIC},
	{"removePopupMenuListener", "(Ljavax/swing/event/PopupMenuListener;)V", nullptr, $PUBLIC},
	{"setBorderPainted", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JPopupMenu_MethodAnnotations_setBorderPainted57},
	{"setDefaultLightWeightPopupEnabled", "(Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool)>(&JPopupMenu::setDefaultLightWeightPopupEnabled))},
	{"setInvoker", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JPopupMenu_MethodAnnotations_setInvoker59},
	{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JPopupMenu_MethodAnnotations_setLabel60},
	{"setLightWeightPopupEnabled", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JPopupMenu_MethodAnnotations_setLightWeightPopupEnabled61},
	{"setLocation", "(II)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JPopupMenu_MethodAnnotations_setLocation62},
	{"setPopupSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JPopupMenu_MethodAnnotations_setPopupSize63},
	{"setPopupSize", "(II)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JPopupMenu_MethodAnnotations_setPopupSize64},
	{"setSelected", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JPopupMenu_MethodAnnotations_setSelected65},
	{"setSelectionModel", "(Ljavax/swing/SingleSelectionModel;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JPopupMenu_MethodAnnotations_setSelectionModel66},
	{"setUI", "(Ljavax/swing/plaf/PopupMenuUI;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JPopupMenu_MethodAnnotations_setUI67},
	{"setVisible", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JPopupMenu_MethodAnnotations_setVisible68},
	{"show", "(Ljava/awt/Component;II)V", nullptr, $PUBLIC},
	{"showPopup", "()V", nullptr, $PRIVATE, $method(static_cast<void(JPopupMenu::*)()>(&JPopupMenu::showPopup))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JPopupMenu::*)($ObjectOutputStream*)>(&JPopupMenu::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JPopupMenu_InnerClassesInfo_[] = {
	{"javax.swing.JPopupMenu$Separator", "javax.swing.JPopupMenu", "Separator", $PUBLIC | $STATIC},
	{"javax.swing.JPopupMenu$AccessibleJPopupMenu", "javax.swing.JPopupMenu", "AccessibleJPopupMenu", $PROTECTED},
	{"javax.swing.JPopupMenu$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JPopupMenu_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JPopupMenu",
	"javax.swing.JComponent",
	"javax.accessibility.Accessible,javax.swing.MenuElement",
	_JPopupMenu_FieldInfo_,
	_JPopupMenu_MethodInfo_,
	nullptr,
	nullptr,
	_JPopupMenu_InnerClassesInfo_,
	_JPopupMenu_Annotations_,
	nullptr,
	"javax.swing.JPopupMenu$Separator,javax.swing.JPopupMenu$AccessibleJPopupMenu,javax.swing.JPopupMenu$1"
};

$Object* allocate$JPopupMenu($Class* clazz) {
	return $of($alloc(JPopupMenu));
}

$String* JPopupMenu::toString() {
	 return this->$JComponent::toString();
}

int32_t JPopupMenu::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JPopupMenu::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JPopupMenu::clone() {
	 return this->$JComponent::clone();
}

void JPopupMenu::finalize() {
	this->$JComponent::finalize();
}

$String* JPopupMenu::uiClassID = nullptr;
$Object* JPopupMenu::defaultLWPopupEnabledKey = nullptr;
bool JPopupMenu::popupPostionFixDisabled = false;
$Object* JPopupMenu::classLock = nullptr;

void JPopupMenu::setDefaultLightWeightPopupEnabled(bool aFlag) {
	$init(JPopupMenu);
	$SwingUtilities::appContextPut(JPopupMenu::defaultLWPopupEnabledKey, $($Boolean::valueOf(aFlag)));
}

bool JPopupMenu::getDefaultLightWeightPopupEnabled() {
	$init(JPopupMenu);
	$var($Boolean, b, $cast($Boolean, $SwingUtilities::appContextGet(JPopupMenu::defaultLWPopupEnabledKey)));
	if (b == nullptr) {
		$init($Boolean);
		$SwingUtilities::appContextPut(JPopupMenu::defaultLWPopupEnabledKey, $Boolean::TRUE);
		return true;
	}
	return $nc(b)->booleanValue();
}

void JPopupMenu::init$() {
	JPopupMenu::init$(nullptr);
}

void JPopupMenu::init$($String* label) {
	$JComponent::init$();
	$set(this, label, nullptr);
	this->paintBorder$ = true;
	$set(this, margin, nullptr);
	this->lightWeightPopup = true;
	$set(this, label, label);
	this->lightWeightPopup = getDefaultLightWeightPopupEnabled();
	setSelectionModel($$new($DefaultSingleSelectionModel));
	enableEvents($AWTEvent::MOUSE_EVENT_MASK);
	setFocusTraversalKeysEnabled(false);
	updateUI();
}

$ComponentUI* JPopupMenu::getUI() {
	return $cast($PopupMenuUI, this->ui);
}

void JPopupMenu::setUI($PopupMenuUI* ui) {
	$JComponent::setUI(ui);
}

void JPopupMenu::updateUI() {
	setUI($cast($PopupMenuUI, $($UIManager::getUI(this))));
}

$String* JPopupMenu::getUIClassID() {
	return JPopupMenu::uiClassID;
}

void JPopupMenu::processFocusEvent($FocusEvent* evt) {
	$JComponent::processFocusEvent(evt);
}

void JPopupMenu::processKeyEvent($KeyEvent* evt) {
	$nc($($MenuSelectionManager::defaultManager()))->processKeyEvent(evt);
	if ($nc(evt)->isConsumed()) {
		return;
	}
	$JComponent::processKeyEvent(evt);
}

$SingleSelectionModel* JPopupMenu::getSelectionModel() {
	return this->selectionModel;
}

void JPopupMenu::setSelectionModel($SingleSelectionModel* model) {
	$set(this, selectionModel, model);
}

$JMenuItem* JPopupMenu::add($JMenuItem* menuItem) {
	$JComponent::add(static_cast<$Component*>(menuItem));
	return menuItem;
}

$JMenuItem* JPopupMenu::add($String* s) {
	return add($$new($JMenuItem, s));
}

$JMenuItem* JPopupMenu::add($Action* a) {
	$var($JMenuItem, mi, createActionComponent(a));
	$nc(mi)->setAction(a);
	add(mi);
	return mi;
}

$Point* JPopupMenu::adjustPopupLocationToFitScreen(int32_t xPosition, int32_t yPosition) {
	$useLocalCurrentObjectStackCache();
	$var($Point, popupLocation, $new($Point, xPosition, yPosition));
	if (JPopupMenu::popupPostionFixDisabled == true || $GraphicsEnvironment::isHeadless()) {
		return popupLocation;
	}
	$var($GraphicsConfiguration, gc, getCurrentGraphicsConfiguration(popupLocation));
	if (gc == nullptr) {
		$assign(gc, $nc($($nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getDefaultScreenDevice()))->getDefaultConfiguration());
	}
	$var($Rectangle, scrBounds, $nc(gc)->getBounds());
	$var($Dimension, popupSize, this->getPreferredSize());
	int64_t popupRightX = (int64_t)popupLocation->x + (int64_t)$nc(popupSize)->width;
	int64_t popupBottomY = (int64_t)popupLocation->y + (int64_t)popupSize->height;
	int32_t scrWidth = $nc(scrBounds)->width;
	int32_t scrHeight = scrBounds->height;
	if (!canPopupOverlapTaskBar()) {
		$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
		$var($Insets, scrInsets, $nc(toolkit)->getScreenInsets(gc));
		scrBounds->x += $nc(scrInsets)->left;
		scrBounds->y += scrInsets->top;
		scrWidth -= scrInsets->left + scrInsets->right;
		scrHeight -= scrInsets->top + scrInsets->bottom;
	}
	int32_t scrRightX = scrBounds->x + scrWidth;
	int32_t scrBottomY = scrBounds->y + scrHeight;
	if (popupRightX > (int64_t)scrRightX) {
		popupLocation->x = scrRightX - popupSize->width;
	}
	if (popupBottomY > (int64_t)scrBottomY) {
		popupLocation->y = scrBottomY - popupSize->height;
	}
	if (popupLocation->x < scrBounds->x) {
		popupLocation->x = scrBounds->x;
	}
	if (popupLocation->y < scrBounds->y) {
		popupLocation->y = scrBounds->y;
	}
	return popupLocation;
}

$GraphicsConfiguration* JPopupMenu::getCurrentGraphicsConfiguration($Point* popupLocation) {
	$useLocalCurrentObjectStackCache();
	$var($GraphicsConfiguration, gc, nullptr);
	$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	$var($GraphicsDeviceArray, gd, $nc(ge)->getScreenDevices());
	for (int32_t i = 0; i < $nc(gd)->length; ++i) {
		if ($nc(gd->get(i))->getType() == $GraphicsDevice::TYPE_RASTER_SCREEN) {
			$var($GraphicsConfiguration, dgc, $nc(gd->get(i))->getDefaultConfiguration());
			if ($nc($($nc(dgc)->getBounds()))->contains(popupLocation)) {
				$assign(gc, dgc);
				break;
			}
		}
	}
	if (gc == nullptr && getInvoker() != nullptr) {
		$assign(gc, $nc($(getInvoker()))->getGraphicsConfiguration());
	}
	return gc;
}

bool JPopupMenu::canPopupOverlapTaskBar() {
	$init(JPopupMenu);
	bool result = true;
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	if ($instanceOf($SunToolkit, tk)) {
		result = $nc(($cast($SunToolkit, tk)))->canPopupOverlapTaskBar();
	}
	return result;
}

$JMenuItem* JPopupMenu::createActionComponent($Action* a) {
	$var($JMenuItem, mi, $new($JPopupMenu$1, this));
	mi->setHorizontalTextPosition($JButton::TRAILING);
	mi->setVerticalTextPosition($JButton::CENTER);
	return mi;
}

$PropertyChangeListener* JPopupMenu::createActionChangeListener($JMenuItem* b) {
	return $nc(b)->createActionPropertyChangeListener0($(b->getAction()));
}

void JPopupMenu::remove(int32_t pos) {
	if (pos < 0) {
		$throwNew($IllegalArgumentException, "index less than zero."_s);
	}
	if (pos > getComponentCount() - 1) {
		$throwNew($IllegalArgumentException, "index greater than the number of items."_s);
	}
	$JComponent::remove(pos);
}

void JPopupMenu::setLightWeightPopupEnabled(bool aFlag) {
	this->lightWeightPopup = aFlag;
}

bool JPopupMenu::isLightWeightPopupEnabled() {
	return this->lightWeightPopup;
}

$String* JPopupMenu::getLabel() {
	return this->label;
}

void JPopupMenu::setLabel($String* label) {
	$var($String, oldValue, this->label);
	$set(this, label, label);
	firePropertyChange("label"_s, $of(oldValue), $of(label));
	if (this->accessibleContext != nullptr) {
		$init($AccessibleContext);
		$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY, oldValue, label);
	}
	invalidate();
	repaint();
}

void JPopupMenu::addSeparator() {
	add(static_cast<$Component*>($$new($JPopupMenu$Separator)));
}

void JPopupMenu::insert($Action* a, int32_t index) {
	$var($JMenuItem, mi, createActionComponent(a));
	$nc(mi)->setAction(a);
	insert(static_cast<$Component*>(mi), index);
}

void JPopupMenu::insert($Component* component, int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index < 0) {
		$throwNew($IllegalArgumentException, "index less than zero."_s);
	}
	int32_t nitems = getComponentCount();
	$var($Vector, tempItems, $new($Vector));
	for (int32_t i = index; i < nitems; ++i) {
		tempItems->addElement($(getComponent(index)));
		remove(index);
	}
	add(component);
	{
		$var($Iterator, i$, tempItems->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Component, tempItem, $cast($Component, i$->next()));
			{
				add(tempItem);
			}
		}
	}
}

void JPopupMenu::addPopupMenuListener($PopupMenuListener* l) {
	$load($PopupMenuListener);
	$nc(this->listenerList)->add($PopupMenuListener::class$, l);
}

void JPopupMenu::removePopupMenuListener($PopupMenuListener* l) {
	$load($PopupMenuListener);
	$nc(this->listenerList)->remove($PopupMenuListener::class$, l);
}

$PopupMenuListenerArray* JPopupMenu::getPopupMenuListeners() {
	$load($PopupMenuListener);
	return $fcast($PopupMenuListenerArray, $nc(this->listenerList)->getListeners($PopupMenuListener::class$));
}

void JPopupMenu::addMenuKeyListener($MenuKeyListener* l) {
	$load($MenuKeyListener);
	$nc(this->listenerList)->add($MenuKeyListener::class$, l);
}

void JPopupMenu::removeMenuKeyListener($MenuKeyListener* l) {
	$load($MenuKeyListener);
	$nc(this->listenerList)->remove($MenuKeyListener::class$, l);
}

$MenuKeyListenerArray* JPopupMenu::getMenuKeyListeners() {
	$load($MenuKeyListener);
	return $fcast($MenuKeyListenerArray, $nc(this->listenerList)->getListeners($MenuKeyListener::class$));
}

void JPopupMenu::firePopupMenuWillBecomeVisible() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	$var($PopupMenuEvent, e, nullptr);
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($PopupMenuListener);
		if ($equals(listeners->get(i), $PopupMenuListener::class$)) {
			if (e == nullptr) {
				$assign(e, $new($PopupMenuEvent, this));
			}
			$nc(($cast($PopupMenuListener, listeners->get(i + 1))))->popupMenuWillBecomeVisible(e);
		}
	}
}

void JPopupMenu::firePopupMenuWillBecomeInvisible() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	$var($PopupMenuEvent, e, nullptr);
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($PopupMenuListener);
		if ($equals(listeners->get(i), $PopupMenuListener::class$)) {
			if (e == nullptr) {
				$assign(e, $new($PopupMenuEvent, this));
			}
			$nc(($cast($PopupMenuListener, listeners->get(i + 1))))->popupMenuWillBecomeInvisible(e);
		}
	}
}

void JPopupMenu::firePopupMenuCanceled() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	$var($PopupMenuEvent, e, nullptr);
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($PopupMenuListener);
		if ($equals(listeners->get(i), $PopupMenuListener::class$)) {
			if (e == nullptr) {
				$assign(e, $new($PopupMenuEvent, this));
			}
			$nc(($cast($PopupMenuListener, listeners->get(i + 1))))->popupMenuCanceled(e);
		}
	}
}

bool JPopupMenu::alwaysOnTop() {
	return true;
}

void JPopupMenu::pack() {
	if (this->popup != nullptr) {
		$var($Dimension, pref, getPreferredSize());
		bool var$0 = pref == nullptr || $nc(pref)->width != getWidth();
		if (var$0 || $nc(pref)->height != getHeight()) {
			showPopup();
		} else {
			validate();
		}
	}
}

void JPopupMenu::setVisible(bool b) {
	$useLocalCurrentObjectStackCache();
	if (b == isVisible()) {
		return;
	}
	if (b == false) {
		$var($Boolean, doCanceled, $cast($Boolean, getClientProperty("JPopupMenu.firePopupMenuCanceled"_s)));
		$init($Boolean);
		if (doCanceled != nullptr && doCanceled == $Boolean::TRUE) {
			putClientProperty("JPopupMenu.firePopupMenuCanceled"_s, $Boolean::FALSE);
			firePopupMenuCanceled();
		}
		$nc($(getSelectionModel()))->clearSelection();
	} else if (isPopupMenu()) {
		$var($MenuElementArray, me, $new($MenuElementArray, 1));
		me->set(0, this);
		$nc($($MenuSelectionManager::defaultManager()))->setSelectedPath(me);
	}
	if (b) {
		firePopupMenuWillBecomeVisible();
		showPopup();
		$init($Boolean);
		firePropertyChange("visible"_s, $of($Boolean::FALSE), $of($Boolean::TRUE));
	} else if (this->popup != nullptr) {
		firePopupMenuWillBecomeInvisible();
		$nc(this->popup)->hide();
		$set(this, popup, nullptr);
		$init($Boolean);
		firePropertyChange("visible"_s, $of($Boolean::TRUE), $of($Boolean::FALSE));
		if (isPopupMenu()) {
			$nc($($MenuSelectionManager::defaultManager()))->clearSelectedPath();
		}
	}
}

void JPopupMenu::showPopup() {
	$useLocalCurrentObjectStackCache();
	$var($Popup, oldPopup, this->popup);
	if (oldPopup != nullptr) {
		oldPopup->hide();
	}
	$var($PopupFactory, popupFactory, $PopupFactory::getSharedInstance());
	if (isLightWeightPopupEnabled()) {
		$nc(popupFactory)->setPopupType($PopupFactory::LIGHT_WEIGHT_POPUP);
	} else {
		$nc(popupFactory)->setPopupType($PopupFactory::HEAVY_WEIGHT_POPUP);
	}
	$var($Point, p, adjustPopupLocationToFitScreen(this->desiredLocationX, this->desiredLocationY));
	this->desiredLocationX = $nc(p)->x;
	this->desiredLocationY = p->y;
	$var($Popup, newPopup, $nc($($cast($PopupMenuUI, getUI())))->getPopup(this, this->desiredLocationX, this->desiredLocationY));
	$nc(popupFactory)->setPopupType($PopupFactory::LIGHT_WEIGHT_POPUP);
	$set(this, popup, newPopup);
	$nc(newPopup)->show();
}

bool JPopupMenu::isVisible() {
	return this->popup != nullptr;
}

void JPopupMenu::setLocation(int32_t x, int32_t y) {
	int32_t oldX = this->desiredLocationX;
	int32_t oldY = this->desiredLocationY;
	this->desiredLocationX = x;
	this->desiredLocationY = y;
	if (this->popup != nullptr && (x != oldX || y != oldY)) {
		showPopup();
	}
}

bool JPopupMenu::isPopupMenu() {
	return ((this->invoker != nullptr) && !($instanceOf($JMenu, this->invoker)));
}

$Component* JPopupMenu::getInvoker() {
	return this->invoker;
}

void JPopupMenu::setInvoker($Component* invoker) {
	$var($Component, oldInvoker, this->invoker);
	$set(this, invoker, invoker);
	if ((oldInvoker != this->invoker) && (this->ui != nullptr)) {
		$nc(this->ui)->uninstallUI(this);
		$nc(this->ui)->installUI(this);
	}
	invalidate();
}

void JPopupMenu::show($Component* invoker, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	setInvoker(invoker);
	$var($Frame, newFrame, getFrame(invoker));
	if (newFrame != this->frame) {
		if (newFrame != nullptr) {
			$set(this, frame, newFrame);
			if (this->popup != nullptr) {
				setVisible(false);
			}
		}
	}
	$var($Point, invokerOrigin, nullptr);
	if (invoker != nullptr) {
		$assign(invokerOrigin, invoker->getLocationOnScreen());
		int64_t lx = 0;
		int64_t ly = 0;
		lx = ((int64_t)$nc(invokerOrigin)->x) + ((int64_t)x);
		ly = ((int64_t)invokerOrigin->y) + ((int64_t)y);
		if (lx > $Integer::MAX_VALUE) {
			lx = $Integer::MAX_VALUE;
		}
		if (lx < $Integer::MIN_VALUE) {
			lx = $Integer::MIN_VALUE;
		}
		if (ly > $Integer::MAX_VALUE) {
			ly = $Integer::MAX_VALUE;
		}
		if (ly < $Integer::MIN_VALUE) {
			ly = $Integer::MIN_VALUE;
		}
		setLocation((int32_t)lx, (int32_t)ly);
	} else {
		setLocation(x, y);
	}
	setVisible(true);
}

JPopupMenu* JPopupMenu::getRootPopupMenu() {
	$useLocalCurrentObjectStackCache();
	$var(JPopupMenu, mp, this);
	while (true) {
		bool var$2 = (mp != nullptr) && (mp->isPopupMenu() != true);
		bool var$1 = var$2 && (mp->getInvoker() != nullptr);
		bool var$0 = var$1 && ($nc($(mp->getInvoker()))->getParent() != nullptr);
		if (!(var$0 && ($instanceOf(JPopupMenu, $($nc($(mp->getInvoker()))->getParent()))))) {
			break;
		}
		{
			$assign(mp, $cast(JPopupMenu, $nc($(mp->getInvoker()))->getParent()));
		}
	}
	return mp;
}

$Component* JPopupMenu::getComponentAtIndex(int32_t i) {
	return getComponent(i);
}

int32_t JPopupMenu::getComponentIndex($Component* c) {
	$useLocalCurrentObjectStackCache();
	int32_t ncomponents = this->getComponentCount();
	$var($ComponentArray, component, this->getComponents());
	for (int32_t i = 0; i < ncomponents; ++i) {
		$var($Component, comp, $nc(component)->get(i));
		if (comp == c) {
			return i;
		}
	}
	return -1;
}

void JPopupMenu::setPopupSize($Dimension* d) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, oldSize, getPreferredSize());
	setPreferredSize(d);
	if (this->popup != nullptr) {
		$var($Dimension, newSize, getPreferredSize());
		if (!$nc(oldSize)->equals(newSize)) {
			showPopup();
		}
	}
}

void JPopupMenu::setPopupSize(int32_t width, int32_t height) {
	setPopupSize($$new($Dimension, width, height));
}

void JPopupMenu::setSelected($Component* sel) {
	$var($SingleSelectionModel, model, getSelectionModel());
	int32_t index = getComponentIndex(sel);
	$nc(model)->setSelectedIndex(index);
}

bool JPopupMenu::isBorderPainted() {
	return this->paintBorder$;
}

void JPopupMenu::setBorderPainted(bool b) {
	this->paintBorder$ = b;
	repaint();
}

void JPopupMenu::paintBorder($Graphics* g) {
	if (isBorderPainted()) {
		$JComponent::paintBorder(g);
	}
}

$Insets* JPopupMenu::getMargin() {
	if (this->margin == nullptr) {
		return $new($Insets, 0, 0, 0, 0);
	} else {
		return this->margin;
	}
}

bool JPopupMenu::isSubPopupMenu(JPopupMenu* popup) {
	$useLocalCurrentObjectStackCache();
	int32_t ncomponents = this->getComponentCount();
	$var($ComponentArray, component, this->getComponents());
	for (int32_t i = 0; i < ncomponents; ++i) {
		$var($Component, comp, $nc(component)->get(i));
		if ($instanceOf($JMenu, comp)) {
			$var($JMenu, menu, $cast($JMenu, comp));
			$var(JPopupMenu, subPopup, $nc(menu)->getPopupMenu());
			if (subPopup == popup) {
				return true;
			}
			if ($nc(subPopup)->isSubPopupMenu(popup)) {
				return true;
			}
		}
	}
	return false;
}

$Frame* JPopupMenu::getFrame($Component* c) {
	$init(JPopupMenu);
	$var($Component, w, c);
	while (!($instanceOf($Frame, w)) && (w != nullptr)) {
		$assign(w, w->getParent());
	}
	return $cast($Frame, w);
}

$String* JPopupMenu::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, labelString, this->label != nullptr ? this->label : ""_s);
	$var($String, paintBorderString, this->paintBorder$ ? "true"_s : "false"_s);
	$var($String, marginString, this->margin != nullptr ? $nc(this->margin)->toString() : ""_s);
	$var($String, lightWeightPopupEnabledString, isLightWeightPopupEnabled() ? "true"_s : "false"_s);
	return $str({$($JComponent::paramString()), ",desiredLocationX="_s, $$str(this->desiredLocationX), ",desiredLocationY="_s, $$str(this->desiredLocationY), ",label="_s, labelString, ",lightWeightPopupEnabled="_s, lightWeightPopupEnabledString, ",margin="_s, marginString, ",paintBorder="_s, paintBorderString});
}

$AccessibleContext* JPopupMenu::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JPopupMenu$AccessibleJPopupMenu, this));
	}
	return this->accessibleContext;
}

void JPopupMenu::writeObject($ObjectOutputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($Vector, values, $new($Vector));
	$nc(s)->defaultWriteObject();
	if (this->invoker != nullptr && $instanceOf($Serializable, this->invoker)) {
		values->addElement("invoker"_s);
		values->addElement(this->invoker);
	}
	if (this->popup != nullptr && $instanceOf($Serializable, this->popup)) {
		values->addElement("popup"_s);
		values->addElement(this->popup);
	}
	s->writeObject(values);
	if ($nc($(getUIClassID()))->equals(JPopupMenu::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

void JPopupMenu::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	int32_t newDesiredLocationX = $nc(f)->get("desiredLocationX"_s, 0);
	int32_t newDesiredLocationY = f->get("desiredLocationY"_s, 0);
	$var($Point, p, adjustPopupLocationToFitScreen(newDesiredLocationX, newDesiredLocationY));
	this->desiredLocationX = $nc(p)->x;
	this->desiredLocationY = p->y;
	$set(this, label, $cast($String, f->get("label"_s, ($Object*)nullptr)));
	this->paintBorder$ = f->get("paintBorder"_s, false);
	$set(this, margin, $cast($Insets, f->get("margin"_s, ($Object*)nullptr)));
	this->lightWeightPopup = f->get("lightWeightPopup"_s, false);
	$set(this, selectionModel, $cast($SingleSelectionModel, f->get("selectionModel"_s, ($Object*)nullptr)));
	$var($Vector, values, $cast($Vector, s->readObject()));
	int32_t indexCounter = 0;
	int32_t maxCounter = $nc(values)->size();
	if (indexCounter < maxCounter && $nc($of($(values->elementAt(indexCounter))))->equals("invoker"_s)) {
		$set(this, invoker, $cast($Component, values->elementAt(++indexCounter)));
		++indexCounter;
	}
	if (indexCounter < maxCounter && $nc($of($(values->elementAt(indexCounter))))->equals("popup"_s)) {
		$set(this, popup, $cast($Popup, values->elementAt(++indexCounter)));
		++indexCounter;
	}
}

void JPopupMenu::processMouseEvent($MouseEvent* event, $MenuElementArray* path, $MenuSelectionManager* manager) {
}

void JPopupMenu::processKeyEvent($KeyEvent* e, $MenuElementArray* path, $MenuSelectionManager* manager) {
	$useLocalCurrentObjectStackCache();
	$var($Component, var$0, $nc(e)->getComponent());
	int32_t var$1 = e->getID();
	int64_t var$2 = e->getWhen();
	int32_t var$3 = e->getModifiers();
	int32_t var$4 = e->getKeyCode();
	$var($MenuKeyEvent, mke, $new($MenuKeyEvent, var$0, var$1, var$2, var$3, var$4, e->getKeyChar(), path, manager));
	processMenuKeyEvent(mke);
	if (mke->isConsumed()) {
		$nc(e)->consume();
	}
}

void JPopupMenu::processMenuKeyEvent($MenuKeyEvent* e) {
	switch ($nc(e)->getID()) {
	case $KeyEvent::KEY_PRESSED:
		{
			fireMenuKeyPressed(e);
			break;
		}
	case $KeyEvent::KEY_RELEASED:
		{
			fireMenuKeyReleased(e);
			break;
		}
	case $KeyEvent::KEY_TYPED:
		{
			fireMenuKeyTyped(e);
			break;
		}
	default:
		{
			break;
		}
	}
}

void JPopupMenu::fireMenuKeyPressed($MenuKeyEvent* event) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($MenuKeyListener);
		if ($equals(listeners->get(i), $MenuKeyListener::class$)) {
			$nc(($cast($MenuKeyListener, listeners->get(i + 1))))->menuKeyPressed(event);
		}
	}
}

void JPopupMenu::fireMenuKeyReleased($MenuKeyEvent* event) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($MenuKeyListener);
		if ($equals(listeners->get(i), $MenuKeyListener::class$)) {
			$nc(($cast($MenuKeyListener, listeners->get(i + 1))))->menuKeyReleased(event);
		}
	}
}

void JPopupMenu::fireMenuKeyTyped($MenuKeyEvent* event) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($MenuKeyListener);
		if ($equals(listeners->get(i), $MenuKeyListener::class$)) {
			$nc(($cast($MenuKeyListener, listeners->get(i + 1))))->menuKeyTyped(event);
		}
	}
}

void JPopupMenu::menuSelectionChanged(bool isIncluded) {
	if ($instanceOf($JMenu, this->invoker)) {
		$var($JMenu, m, $cast($JMenu, this->invoker));
		if (isIncluded) {
			$nc(m)->setPopupMenuVisible(true);
		} else {
			$nc(m)->setPopupMenuVisible(false);
		}
	}
	if (isPopupMenu() && !isIncluded) {
		setVisible(false);
	}
}

$MenuElementArray* JPopupMenu::getSubElements() {
	$useLocalCurrentObjectStackCache();
	$var($MenuElementArray, result, nullptr);
	$var($Vector, tmp, $new($Vector));
	int32_t c = getComponentCount();
	int32_t i = 0;
	$var($Component, m, nullptr);
	for (i = 0; i < c; ++i) {
		$assign(m, getComponent(i));
		if ($instanceOf($MenuElement, m)) {
			tmp->addElement($cast($MenuElement, m));
		}
	}
	$assign(result, $new($MenuElementArray, tmp->size()));
	for (i = 0, c = tmp->size(); i < c; ++i) {
		result->set(i, $cast($MenuElement, $(tmp->elementAt(i))));
	}
	return result;
}

$Component* JPopupMenu::getComponent() {
	return this;
}

bool JPopupMenu::isPopupTrigger($MouseEvent* e) {
	return $nc($($cast($PopupMenuUI, getUI())))->isPopupTrigger(e);
}

void clinit$JPopupMenu($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(JPopupMenu::uiClassID, "PopupMenuUI"_s);
	$beforeCallerSensitive();
	$assignStatic(JPopupMenu::defaultLWPopupEnabledKey, $new($StringBuffer, "JPopupMenu.defaultLWPopupEnabledKey"_s));
	JPopupMenu::popupPostionFixDisabled = false;
	{
		JPopupMenu::popupPostionFixDisabled = $nc(($cast($String, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "javax.swing.adjustPopupLocationToFit"_s, ""_s)))))))->equals("false"_s);
	}
	$assignStatic(JPopupMenu::classLock, $new($Object));
}

JPopupMenu::JPopupMenu() {
}

$Class* JPopupMenu::load$($String* name, bool initialize) {
	$loadClass(JPopupMenu, name, initialize, &_JPopupMenu_ClassInfo_, clinit$JPopupMenu, allocate$JPopupMenu);
	return class$;
}

$Class* JPopupMenu::class$ = nullptr;

	} // swing
} // javax