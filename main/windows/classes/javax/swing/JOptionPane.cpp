#include <javax/swing/JOptionPane.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/Frame.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentAdapter.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowFocusListener.h>
#include <java/awt/event/WindowListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/PropertyVetoException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Vector.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/ClientPropertyKey.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JOptionPane$1.h>
#include <javax/swing/JOptionPane$2.h>
#include <javax/swing/JOptionPane$3.h>
#include <javax/swing/JOptionPane$4.h>
#include <javax/swing/JOptionPane$5.h>
#include <javax/swing/JOptionPane$AccessibleJOptionPane.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities$SharedOwnerFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/InternalFrameAdapter.h>
#include <javax/swing/event/InternalFrameListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/OptionPaneUI.h>
#include <sun/awt/AWTAccessor$ContainerAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

#undef CANCEL_OPTION
#undef CENTER
#undef CLOSED_OPTION
#undef DEFAULT_OPTION
#undef ERROR_DIALOG
#undef ERROR_MESSAGE
#undef ICON_PROPERTY
#undef INFORMATION_DIALOG
#undef INFORMATION_MESSAGE
#undef INITIAL_SELECTION_VALUE_PROPERTY
#undef INITIAL_VALUE_PROPERTY
#undef INPUT_VALUE_PROPERTY
#undef MAX_VALUE
#undef MESSAGE_PROPERTY
#undef MESSAGE_TYPE_PROPERTY
#undef MODAL_LAYER
#undef NO_OPTION
#undef OK_CANCEL_OPTION
#undef OK_OPTION
#undef OPTIONS_PROPERTY
#undef OPTION_TYPE_PROPERTY
#undef PLAIN_DIALOG
#undef PLAIN_MESSAGE
#undef QUESTION_DIALOG
#undef QUESTION_MESSAGE
#undef SELECTION_VALUES_PROPERTY
#undef TRUE
#undef UNINITIALIZED_VALUE
#undef VALUE_PROPERTY
#undef WANTS_INPUT_PROPERTY
#undef WARNING_DIALOG
#undef WARNING_MESSAGE
#undef YES_NO_CANCEL_OPTION
#undef YES_NO_OPTION
#undef YES_OPTION

using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Dialog = ::java::awt::Dialog;
using $Dimension = ::java::awt::Dimension;
using $Frame = ::java::awt::Frame;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Point = ::java::awt::Point;
using $Window = ::java::awt::Window;
using $ComponentAdapter = ::java::awt::event::ComponentAdapter;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowFocusListener = ::java::awt::event::WindowFocusListener;
using $WindowListener = ::java::awt::event::WindowListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $RuntimeException = ::java::lang::RuntimeException;
using $Arrays = ::java::util::Arrays;
using $Vector = ::java::util::Vector;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $ClientPropertyKey = ::javax::swing::ClientPropertyKey;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JDialog = ::javax::swing::JDialog;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JOptionPane$1 = ::javax::swing::JOptionPane$1;
using $JOptionPane$2 = ::javax::swing::JOptionPane$2;
using $JOptionPane$3 = ::javax::swing::JOptionPane$3;
using $JOptionPane$4 = ::javax::swing::JOptionPane$4;
using $JOptionPane$5 = ::javax::swing::JOptionPane$5;
using $JOptionPane$AccessibleJOptionPane = ::javax::swing::JOptionPane$AccessibleJOptionPane;
using $JRootPane = ::javax::swing::JRootPane;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $SwingUtilities$SharedOwnerFrame = ::javax::swing::SwingUtilities$SharedOwnerFrame;
using $UIManager = ::javax::swing::UIManager;
using $InternalFrameAdapter = ::javax::swing::event::InternalFrameAdapter;
using $InternalFrameListener = ::javax::swing::event::InternalFrameListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $OptionPaneUI = ::javax::swing::plaf::OptionPaneUI;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ContainerAccessor = ::sun::awt::AWTAccessor$ContainerAccessor;

namespace javax {
	namespace swing {

$NamedAttribute JOptionPane_Attribute_var$0[] = {
	{"defaultProperty", 's', "UI"},
	{"description", 's', "A component which implements standard dialog box controls."},
	{}
};
$CompoundAttribute _JOptionPane_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JOptionPane_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", nullptr},
	{}
};

$NamedAttribute JOptionPane_Attribute_var$1[] = {
	{"bound", 'Z', "false"},
	{"expert", 'Z', "true"},
	{"description", 's', "The AccessibleContext associated with this option pane"},
	{}
};

$CompoundAttribute _JOptionPane_MethodAnnotations_getAccessibleContext14[] = {
	{"Ljava/beans/BeanProperty;", JOptionPane_Attribute_var$1},
	{}
};

$NamedAttribute JOptionPane_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JOptionPane_MethodAnnotations_getMaxCharactersPerLineCount21[] = {
	{"Ljava/beans/BeanProperty;", JOptionPane_Attribute_var$2},
	{}
};

$NamedAttribute JOptionPane_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JOptionPane_MethodAnnotations_getUIClassID29[] = {
	{"Ljava/beans/BeanProperty;", JOptionPane_Attribute_var$3},
	{}
};

$NamedAttribute JOptionPane_Attribute_var$4[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "The option pane\'s type icon."},
	{}
};

$CompoundAttribute _JOptionPane_MethodAnnotations_setIcon37[] = {
	{"Ljava/beans/BeanProperty;", JOptionPane_Attribute_var$4},
	{}
};

$NamedAttribute JOptionPane_Attribute_var$5[] = {
	{"description", 's', "The option pane\'s initial selection value object."},
	{}
};

$CompoundAttribute _JOptionPane_MethodAnnotations_setInitialSelectionValue38[] = {
	{"Ljava/beans/BeanProperty;", JOptionPane_Attribute_var$5},
	{}
};

$NamedAttribute JOptionPane_Attribute_var$6[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "The option pane\'s initial value object."},
	{}
};

$CompoundAttribute _JOptionPane_MethodAnnotations_setInitialValue39[] = {
	{"Ljava/beans/BeanProperty;", JOptionPane_Attribute_var$6},
	{}
};

$NamedAttribute JOptionPane_Attribute_var$7[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "The option pane\'s input value object."},
	{}
};

$CompoundAttribute _JOptionPane_MethodAnnotations_setInputValue40[] = {
	{"Ljava/beans/BeanProperty;", JOptionPane_Attribute_var$7},
	{}
};

$NamedAttribute JOptionPane_Attribute_var$8[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "The optionpane\'s message object."},
	{}
};

$CompoundAttribute _JOptionPane_MethodAnnotations_setMessage41[] = {
	{"Ljava/beans/BeanProperty;", JOptionPane_Attribute_var$8},
	{}
};

$NamedAttribute JOptionPane_Attribute_var$9[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "The option pane\'s message type."},
	{}
};

$CompoundAttribute _JOptionPane_MethodAnnotations_setMessageType42[] = {
	{"Ljava/beans/BeanProperty;", JOptionPane_Attribute_var$9},
	{}
};

$NamedAttribute JOptionPane_Attribute_var$10[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "The option pane\'s option type."},
	{}
};

$CompoundAttribute _JOptionPane_MethodAnnotations_setOptionType43[] = {
	{"Ljava/beans/BeanProperty;", JOptionPane_Attribute_var$10},
	{}
};

$NamedAttribute JOptionPane_Attribute_var$11[] = {
	{"description", 's', "The option pane\'s options objects."},
	{}
};

$CompoundAttribute _JOptionPane_MethodAnnotations_setOptions44[] = {
	{"Ljava/beans/BeanProperty;", JOptionPane_Attribute_var$11},
	{}
};

$NamedAttribute JOptionPane_Attribute_var$12[] = {
	{"description", 's', "The option pane\'s selection values."},
	{}
};

$CompoundAttribute _JOptionPane_MethodAnnotations_setSelectionValues46[] = {
	{"Ljava/beans/BeanProperty;", JOptionPane_Attribute_var$12},
	{}
};

$NamedAttribute JOptionPane_Attribute_var$13[] = {
	{"hidden", 'Z', "true"},
	{"description", 's', "The UI object that implements the optionpane\'s LookAndFeel"},
	{}
};

$CompoundAttribute _JOptionPane_MethodAnnotations_setUI47[] = {
	{"Ljava/beans/BeanProperty;", JOptionPane_Attribute_var$13},
	{}
};

$NamedAttribute JOptionPane_Attribute_var$14[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "The option pane\'s value object."},
	{}
};

$CompoundAttribute _JOptionPane_MethodAnnotations_setValue48[] = {
	{"Ljava/beans/BeanProperty;", JOptionPane_Attribute_var$14},
	{}
};

$NamedAttribute JOptionPane_Attribute_var$15[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "Flag which allows the user to input a value."},
	{}
};

$CompoundAttribute _JOptionPane_MethodAnnotations_setWantsInput49[] = {
	{"Ljava/beans/BeanProperty;", JOptionPane_Attribute_var$15},
	{}
};


$FieldInfo _JOptionPane_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JOptionPane, uiClassID)},
	{"UNINITIALIZED_VALUE", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JOptionPane, UNINITIALIZED_VALUE)},
	{"DEFAULT_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, DEFAULT_OPTION)},
	{"YES_NO_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, YES_NO_OPTION)},
	{"YES_NO_CANCEL_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, YES_NO_CANCEL_OPTION)},
	{"OK_CANCEL_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, OK_CANCEL_OPTION)},
	{"YES_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, YES_OPTION)},
	{"NO_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, NO_OPTION)},
	{"CANCEL_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, CANCEL_OPTION)},
	{"OK_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, OK_OPTION)},
	{"CLOSED_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, CLOSED_OPTION)},
	{"ERROR_MESSAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, ERROR_MESSAGE)},
	{"INFORMATION_MESSAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, INFORMATION_MESSAGE)},
	{"WARNING_MESSAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, WARNING_MESSAGE)},
	{"QUESTION_MESSAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, QUESTION_MESSAGE)},
	{"PLAIN_MESSAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JOptionPane, PLAIN_MESSAGE)},
	{"ICON_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JOptionPane, ICON_PROPERTY)},
	{"MESSAGE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JOptionPane, MESSAGE_PROPERTY)},
	{"VALUE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JOptionPane, VALUE_PROPERTY)},
	{"OPTIONS_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JOptionPane, OPTIONS_PROPERTY)},
	{"INITIAL_VALUE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JOptionPane, INITIAL_VALUE_PROPERTY)},
	{"MESSAGE_TYPE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JOptionPane, MESSAGE_TYPE_PROPERTY)},
	{"OPTION_TYPE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JOptionPane, OPTION_TYPE_PROPERTY)},
	{"SELECTION_VALUES_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JOptionPane, SELECTION_VALUES_PROPERTY)},
	{"INITIAL_SELECTION_VALUE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JOptionPane, INITIAL_SELECTION_VALUE_PROPERTY)},
	{"INPUT_VALUE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JOptionPane, INPUT_VALUE_PROPERTY)},
	{"WANTS_INPUT_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JOptionPane, WANTS_INPUT_PROPERTY)},
	{"icon", "Ljavax/swing/Icon;", nullptr, $PROTECTED | $TRANSIENT, $field(JOptionPane, icon)},
	{"message", "Ljava/lang/Object;", nullptr, $PROTECTED | $TRANSIENT, $field(JOptionPane, message)},
	{"options", "[Ljava/lang/Object;", nullptr, $PROTECTED | $TRANSIENT, $field(JOptionPane, options)},
	{"initialValue", "Ljava/lang/Object;", nullptr, $PROTECTED | $TRANSIENT, $field(JOptionPane, initialValue)},
	{"messageType", "I", nullptr, $PROTECTED, $field(JOptionPane, messageType)},
	{"optionType", "I", nullptr, $PROTECTED, $field(JOptionPane, optionType)},
	{"value", "Ljava/lang/Object;", nullptr, $PROTECTED | $TRANSIENT, $field(JOptionPane, value)},
	{"selectionValues", "[Ljava/lang/Object;", nullptr, $PROTECTED | $TRANSIENT, $field(JOptionPane, selectionValues)},
	{"inputValue", "Ljava/lang/Object;", nullptr, $PROTECTED | $TRANSIENT, $field(JOptionPane, inputValue)},
	{"initialSelectionValue", "Ljava/lang/Object;", nullptr, $PROTECTED | $TRANSIENT, $field(JOptionPane, initialSelectionValue)},
	{"wantsInput", "Z", nullptr, $PROTECTED, $field(JOptionPane, wantsInput)},
	{"sharedFrameKey", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JOptionPane, sharedFrameKey)},
	{}
};

$MethodInfo _JOptionPane_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JOptionPane::*)()>(&JOptionPane::init$))},
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(JOptionPane::*)(Object$*)>(&JOptionPane::init$))},
	{"<init>", "(Ljava/lang/Object;I)V", nullptr, $PUBLIC, $method(static_cast<void(JOptionPane::*)(Object$*,int32_t)>(&JOptionPane::init$))},
	{"<init>", "(Ljava/lang/Object;II)V", nullptr, $PUBLIC, $method(static_cast<void(JOptionPane::*)(Object$*,int32_t,int32_t)>(&JOptionPane::init$))},
	{"<init>", "(Ljava/lang/Object;IILjavax/swing/Icon;)V", nullptr, $PUBLIC, $method(static_cast<void(JOptionPane::*)(Object$*,int32_t,int32_t,$Icon*)>(&JOptionPane::init$))},
	{"<init>", "(Ljava/lang/Object;IILjavax/swing/Icon;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(JOptionPane::*)(Object$*,int32_t,int32_t,$Icon*,$ObjectArray*)>(&JOptionPane::init$))},
	{"<init>", "(Ljava/lang/Object;IILjavax/swing/Icon;[Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(JOptionPane::*)(Object$*,int32_t,int32_t,$Icon*,$ObjectArray*,Object$*)>(&JOptionPane::init$))},
	{"checkFrameForComponent", "(Ljava/awt/Component;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Component*)>(&JOptionPane::checkFrameForComponent))},
	{"checkMessageType", "(I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t)>(&JOptionPane::checkMessageType))},
	{"checkOptionType", "(I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t)>(&JOptionPane::checkOptionType))},
	{"createDialog", "(Ljava/awt/Component;Ljava/lang/String;)Ljavax/swing/JDialog;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"createDialog", "(Ljava/lang/String;)Ljavax/swing/JDialog;", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"createDialog", "(Ljava/awt/Component;Ljava/lang/String;I)Ljavax/swing/JDialog;", nullptr, $PRIVATE, $method(static_cast<$JDialog*(JOptionPane::*)($Component*,$String*,int32_t)>(&JOptionPane::createDialog)), "java.awt.HeadlessException"},
	{"createInternalFrame", "(Ljava/awt/Component;Ljava/lang/String;)Ljavax/swing/JInternalFrame;", nullptr, $PUBLIC},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JOptionPane_MethodAnnotations_getAccessibleContext14},
	{"getDesktopPaneForComponent", "(Ljava/awt/Component;)Ljavax/swing/JDesktopPane;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JDesktopPane*(*)($Component*)>(&JOptionPane::getDesktopPaneForComponent))},
	{"getFrameForComponent", "(Ljava/awt/Component;)Ljava/awt/Frame;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Frame*(*)($Component*)>(&JOptionPane::getFrameForComponent)), "java.awt.HeadlessException"},
	{"getIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getInitialSelectionValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getInitialValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getInputValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getMaxCharactersPerLineCount", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JOptionPane_MethodAnnotations_getMaxCharactersPerLineCount21},
	{"getMessage", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getMessageType", "()I", nullptr, $PUBLIC},
	{"getOptionType", "()I", nullptr, $PUBLIC},
	{"getOptions", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getRootFrame", "()Ljava/awt/Frame;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Frame*(*)()>(&JOptionPane::getRootFrame)), "java.awt.HeadlessException"},
	{"getSelectionValues", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getUI", "()Ljavax/swing/plaf/OptionPaneUI;", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JOptionPane_MethodAnnotations_getUIClassID29},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getWantsInput", "()Z", nullptr, $PUBLIC},
	{"getWindowForComponent", "(Ljava/awt/Component;)Ljava/awt/Window;", nullptr, $STATIC, $method(static_cast<$Window*(*)($Component*)>(&JOptionPane::getWindowForComponent)), "java.awt.HeadlessException"},
	{"initDialog", "(Ljavax/swing/JDialog;ILjava/awt/Component;)V", nullptr, $PRIVATE, $method(static_cast<void(JOptionPane::*)($JDialog*,int32_t,$Component*)>(&JOptionPane::initDialog))},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JOptionPane::*)($ObjectInputStream*)>(&JOptionPane::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"selectInitialValue", "()V", nullptr, $PUBLIC},
	{"setIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JOptionPane_MethodAnnotations_setIcon37},
	{"setInitialSelectionValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JOptionPane_MethodAnnotations_setInitialSelectionValue38},
	{"setInitialValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JOptionPane_MethodAnnotations_setInitialValue39},
	{"setInputValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JOptionPane_MethodAnnotations_setInputValue40},
	{"setMessage", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JOptionPane_MethodAnnotations_setMessage41},
	{"setMessageType", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JOptionPane_MethodAnnotations_setMessageType42},
	{"setOptionType", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JOptionPane_MethodAnnotations_setOptionType43},
	{"setOptions", "([Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JOptionPane_MethodAnnotations_setOptions44},
	{"setRootFrame", "(Ljava/awt/Frame;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Frame*)>(&JOptionPane::setRootFrame))},
	{"setSelectionValues", "([Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JOptionPane_MethodAnnotations_setSelectionValues46},
	{"setUI", "(Ljavax/swing/plaf/OptionPaneUI;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JOptionPane_MethodAnnotations_setUI47},
	{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JOptionPane_MethodAnnotations_setValue48},
	{"setWantsInput", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JOptionPane_MethodAnnotations_setWantsInput49},
	{"showConfirmDialog", "(Ljava/awt/Component;Ljava/lang/Object;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Component*,Object$*)>(&JOptionPane::showConfirmDialog)), "java.awt.HeadlessException"},
	{"showConfirmDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Component*,Object$*,$String*,int32_t)>(&JOptionPane::showConfirmDialog)), "java.awt.HeadlessException"},
	{"showConfirmDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Component*,Object$*,$String*,int32_t,int32_t)>(&JOptionPane::showConfirmDialog)), "java.awt.HeadlessException"},
	{"showConfirmDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;IILjavax/swing/Icon;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Component*,Object$*,$String*,int32_t,int32_t,$Icon*)>(&JOptionPane::showConfirmDialog)), "java.awt.HeadlessException"},
	{"showInputDialog", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(Object$*)>(&JOptionPane::showInputDialog)), "java.awt.HeadlessException"},
	{"showInputDialog", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(Object$*,Object$*)>(&JOptionPane::showInputDialog))},
	{"showInputDialog", "(Ljava/awt/Component;Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Component*,Object$*)>(&JOptionPane::showInputDialog)), "java.awt.HeadlessException"},
	{"showInputDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Component*,Object$*,Object$*)>(&JOptionPane::showInputDialog))},
	{"showInputDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Component*,Object$*,$String*,int32_t)>(&JOptionPane::showInputDialog)), "java.awt.HeadlessException"},
	{"showInputDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;ILjavax/swing/Icon;[Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($Component*,Object$*,$String*,int32_t,$Icon*,$ObjectArray*,Object$*)>(&JOptionPane::showInputDialog)), "java.awt.HeadlessException"},
	{"showInternalConfirmDialog", "(Ljava/awt/Component;Ljava/lang/Object;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Component*,Object$*)>(&JOptionPane::showInternalConfirmDialog))},
	{"showInternalConfirmDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Component*,Object$*,$String*,int32_t)>(&JOptionPane::showInternalConfirmDialog))},
	{"showInternalConfirmDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Component*,Object$*,$String*,int32_t,int32_t)>(&JOptionPane::showInternalConfirmDialog))},
	{"showInternalConfirmDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;IILjavax/swing/Icon;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Component*,Object$*,$String*,int32_t,int32_t,$Icon*)>(&JOptionPane::showInternalConfirmDialog))},
	{"showInternalInputDialog", "(Ljava/awt/Component;Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Component*,Object$*)>(&JOptionPane::showInternalInputDialog))},
	{"showInternalInputDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Component*,Object$*,$String*,int32_t)>(&JOptionPane::showInternalInputDialog))},
	{"showInternalInputDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;ILjavax/swing/Icon;[Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($Component*,Object$*,$String*,int32_t,$Icon*,$ObjectArray*,Object$*)>(&JOptionPane::showInternalInputDialog))},
	{"showInternalMessageDialog", "(Ljava/awt/Component;Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Component*,Object$*)>(&JOptionPane::showInternalMessageDialog))},
	{"showInternalMessageDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Component*,Object$*,$String*,int32_t)>(&JOptionPane::showInternalMessageDialog))},
	{"showInternalMessageDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;ILjavax/swing/Icon;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Component*,Object$*,$String*,int32_t,$Icon*)>(&JOptionPane::showInternalMessageDialog))},
	{"showInternalOptionDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;IILjavax/swing/Icon;[Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Component*,Object$*,$String*,int32_t,int32_t,$Icon*,$ObjectArray*,Object$*)>(&JOptionPane::showInternalOptionDialog))},
	{"showMessageDialog", "(Ljava/awt/Component;Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Component*,Object$*)>(&JOptionPane::showMessageDialog)), "java.awt.HeadlessException"},
	{"showMessageDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Component*,Object$*,$String*,int32_t)>(&JOptionPane::showMessageDialog)), "java.awt.HeadlessException"},
	{"showMessageDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;ILjavax/swing/Icon;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Component*,Object$*,$String*,int32_t,$Icon*)>(&JOptionPane::showMessageDialog)), "java.awt.HeadlessException"},
	{"showOptionDialog", "(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;IILjavax/swing/Icon;[Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Component*,Object$*,$String*,int32_t,int32_t,$Icon*,$ObjectArray*,Object$*)>(&JOptionPane::showOptionDialog)), "java.awt.HeadlessException"},
	{"styleFromMessageType", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&JOptionPane::styleFromMessageType))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JOptionPane::*)($ObjectOutputStream*)>(&JOptionPane::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JOptionPane_InnerClassesInfo_[] = {
	{"javax.swing.JOptionPane$AccessibleJOptionPane", "javax.swing.JOptionPane", "AccessibleJOptionPane", $PROTECTED},
	{"javax.swing.JOptionPane$5", nullptr, nullptr, 0},
	{"javax.swing.JOptionPane$4", nullptr, nullptr, 0},
	{"javax.swing.JOptionPane$3", nullptr, nullptr, 0},
	{"javax.swing.JOptionPane$2", nullptr, nullptr, 0},
	{"javax.swing.JOptionPane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JOptionPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JOptionPane",
	"javax.swing.JComponent",
	"javax.accessibility.Accessible",
	_JOptionPane_FieldInfo_,
	_JOptionPane_MethodInfo_,
	nullptr,
	nullptr,
	_JOptionPane_InnerClassesInfo_,
	_JOptionPane_Annotations_,
	nullptr,
	"javax.swing.JOptionPane$AccessibleJOptionPane,javax.swing.JOptionPane$5,javax.swing.JOptionPane$4,javax.swing.JOptionPane$3,javax.swing.JOptionPane$2,javax.swing.JOptionPane$1"
};

$Object* allocate$JOptionPane($Class* clazz) {
	return $of($alloc(JOptionPane));
}

$String* JOptionPane::toString() {
	 return this->$JComponent::toString();
}

int32_t JOptionPane::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JOptionPane::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JOptionPane::clone() {
	 return this->$JComponent::clone();
}

void JOptionPane::finalize() {
	this->$JComponent::finalize();
}


$String* JOptionPane::uiClassID = nullptr;

$Object* JOptionPane::UNINITIALIZED_VALUE = nullptr;

$String* JOptionPane::ICON_PROPERTY = nullptr;

$String* JOptionPane::MESSAGE_PROPERTY = nullptr;

$String* JOptionPane::VALUE_PROPERTY = nullptr;

$String* JOptionPane::OPTIONS_PROPERTY = nullptr;

$String* JOptionPane::INITIAL_VALUE_PROPERTY = nullptr;

$String* JOptionPane::MESSAGE_TYPE_PROPERTY = nullptr;

$String* JOptionPane::OPTION_TYPE_PROPERTY = nullptr;

$String* JOptionPane::SELECTION_VALUES_PROPERTY = nullptr;

$String* JOptionPane::INITIAL_SELECTION_VALUE_PROPERTY = nullptr;

$String* JOptionPane::INPUT_VALUE_PROPERTY = nullptr;

$String* JOptionPane::WANTS_INPUT_PROPERTY = nullptr;
$Object* JOptionPane::sharedFrameKey = nullptr;

$String* JOptionPane::showInputDialog(Object$* message) {
	$init(JOptionPane);
	return showInputDialog(($Component*)nullptr, message);
}

$String* JOptionPane::showInputDialog(Object$* message, Object$* initialSelectionValue) {
	$init(JOptionPane);
	return showInputDialog(nullptr, message, initialSelectionValue);
}

$String* JOptionPane::showInputDialog($Component* parentComponent, Object$* message) {
	$init(JOptionPane);
	return showInputDialog(parentComponent, message, $($UIManager::getString($of("OptionPane.inputDialogTitle"_s), parentComponent)), JOptionPane::QUESTION_MESSAGE);
}

$String* JOptionPane::showInputDialog($Component* parentComponent, Object$* message, Object$* initialSelectionValue) {
	$init(JOptionPane);
	return $cast($String, showInputDialog(parentComponent, message, $($UIManager::getString($of("OptionPane.inputDialogTitle"_s), parentComponent)), JOptionPane::QUESTION_MESSAGE, nullptr, nullptr, initialSelectionValue));
}

$String* JOptionPane::showInputDialog($Component* parentComponent, Object$* message, $String* title, int32_t messageType) {
	$init(JOptionPane);
	return $cast($String, showInputDialog(parentComponent, message, title, messageType, nullptr, nullptr, nullptr));
}

$Object* JOptionPane::showInputDialog($Component* parentComponent, Object$* message, $String* title, int32_t messageType, $Icon* icon, $ObjectArray* selectionValues, Object$* initialSelectionValue) {
	$init(JOptionPane);
	$var(JOptionPane, pane, $new(JOptionPane, message, messageType, JOptionPane::OK_CANCEL_OPTION, icon, nullptr, nullptr));
	pane->setWantsInput(true);
	pane->setSelectionValues(selectionValues);
	pane->setInitialSelectionValue(initialSelectionValue);
	pane->setComponentOrientation($($nc(((parentComponent == nullptr) ? $(static_cast<$Component*>(getRootFrame())) : parentComponent))->getComponentOrientation()));
	int32_t style = styleFromMessageType(messageType);
	$var($JDialog, dialog, pane->createDialog(parentComponent, title, style));
	pane->selectInitialValue();
	$nc(dialog)->show();
	dialog->dispose();
	$var($Object, value, pane->getInputValue());
	if ($equals(value, JOptionPane::UNINITIALIZED_VALUE)) {
		return $of(nullptr);
	}
	return $of(value);
}

void JOptionPane::showMessageDialog($Component* parentComponent, Object$* message) {
	$init(JOptionPane);
	showMessageDialog(parentComponent, message, $($UIManager::getString($of("OptionPane.messageDialogTitle"_s), parentComponent)), JOptionPane::INFORMATION_MESSAGE);
}

void JOptionPane::showMessageDialog($Component* parentComponent, Object$* message, $String* title, int32_t messageType) {
	$init(JOptionPane);
	showMessageDialog(parentComponent, message, title, messageType, nullptr);
}

void JOptionPane::showMessageDialog($Component* parentComponent, Object$* message, $String* title, int32_t messageType, $Icon* icon) {
	$init(JOptionPane);
	showOptionDialog(parentComponent, message, title, JOptionPane::DEFAULT_OPTION, messageType, icon, nullptr, nullptr);
}

int32_t JOptionPane::showConfirmDialog($Component* parentComponent, Object$* message) {
	$init(JOptionPane);
	return showConfirmDialog(parentComponent, message, $($UIManager::getString("OptionPane.titleText"_s)), JOptionPane::YES_NO_CANCEL_OPTION);
}

int32_t JOptionPane::showConfirmDialog($Component* parentComponent, Object$* message, $String* title, int32_t optionType) {
	$init(JOptionPane);
	return showConfirmDialog(parentComponent, message, title, optionType, JOptionPane::QUESTION_MESSAGE);
}

int32_t JOptionPane::showConfirmDialog($Component* parentComponent, Object$* message, $String* title, int32_t optionType, int32_t messageType) {
	$init(JOptionPane);
	return showConfirmDialog(parentComponent, message, title, optionType, messageType, nullptr);
}

int32_t JOptionPane::showConfirmDialog($Component* parentComponent, Object$* message, $String* title, int32_t optionType, int32_t messageType, $Icon* icon) {
	$init(JOptionPane);
	return showOptionDialog(parentComponent, message, title, optionType, messageType, icon, nullptr, nullptr);
}

int32_t JOptionPane::showOptionDialog($Component* parentComponent, Object$* message, $String* title, int32_t optionType, int32_t messageType, $Icon* icon, $ObjectArray* options, Object$* initialValue) {
	$init(JOptionPane);
	$var(JOptionPane, pane, $new(JOptionPane, message, messageType, optionType, icon, options, initialValue));
	pane->setInitialValue(initialValue);
	pane->setComponentOrientation($($nc(((parentComponent == nullptr) ? $(static_cast<$Component*>(getRootFrame())) : parentComponent))->getComponentOrientation()));
	int32_t style = styleFromMessageType(messageType);
	$var($JDialog, dialog, pane->createDialog(parentComponent, title, style));
	pane->selectInitialValue();
	$nc(dialog)->show();
	dialog->dispose();
	$var($Object, selectedValue, pane->getValue());
	if (selectedValue == nullptr) {
		return JOptionPane::CLOSED_OPTION;
	}
	if (options == nullptr) {
		if ($instanceOf($Integer, selectedValue)) {
			return $nc(($cast($Integer, selectedValue)))->intValue();
		}
		return JOptionPane::CLOSED_OPTION;
	}
	{
		int32_t counter = 0;
		int32_t maxCounter = $nc(options)->length;
		for (; counter < maxCounter; ++counter) {
			if ($nc($of(options->get(counter)))->equals(selectedValue)) {
				return counter;
			}
		}
	}
	return JOptionPane::CLOSED_OPTION;
}

$JDialog* JOptionPane::createDialog($Component* parentComponent, $String* title) {
	int32_t style = styleFromMessageType(getMessageType());
	return createDialog(parentComponent, title, style);
}

$JDialog* JOptionPane::createDialog($String* title) {
	int32_t style = styleFromMessageType(getMessageType());
	$var($JDialog, dialog, $new($JDialog, ($Dialog*)nullptr, title, true));
	initDialog(dialog, style, nullptr);
	return dialog;
}

$JDialog* JOptionPane::createDialog($Component* parentComponent, $String* title, int32_t style) {
	$var($JDialog, dialog, nullptr);
	$var($Window, window, JOptionPane::getWindowForComponent(parentComponent));
	if ($instanceOf($Frame, window)) {
		$assign(dialog, $new($JDialog, $cast($Frame, window), title, true));
	} else {
		$assign(dialog, $new($JDialog, $cast($Dialog, window), title, true));
	}
	if ($instanceOf($SwingUtilities$SharedOwnerFrame, window)) {
		$var($WindowListener, ownerShutdownListener, $SwingUtilities::getSharedOwnerFrameShutdownListener());
		$nc(dialog)->addWindowListener(ownerShutdownListener);
	}
	initDialog(dialog, style, parentComponent);
	return dialog;
}

void JOptionPane::initDialog($JDialog* dialog, int32_t style, $Component* parentComponent) {
	$nc(dialog)->setComponentOrientation($(this->getComponentOrientation()));
	$var($Container, contentPane, dialog->getContentPane());
	$nc(contentPane)->setLayout($$new($BorderLayout));
	$init($BorderLayout);
	contentPane->add(static_cast<$Component*>(this), $of($BorderLayout::CENTER));
	dialog->setResizable(false);
	if ($JDialog::isDefaultLookAndFeelDecorated()) {
		bool supportsWindowDecorations = $nc($($UIManager::getLookAndFeel()))->getSupportsWindowDecorations();
		if (supportsWindowDecorations) {
			dialog->setUndecorated(true);
			$nc($(getRootPane()))->setWindowDecorationStyle(style);
		}
	}
	dialog->pack();
	dialog->setLocationRelativeTo(parentComponent);
	$var($PropertyChangeListener, listener, $new($JOptionPane$1, this, dialog));
	$var($WindowAdapter, adapter, $new($JOptionPane$2, this, listener, dialog));
	dialog->addWindowListener(adapter);
	dialog->addWindowFocusListener(adapter);
	dialog->addComponentListener($$new($JOptionPane$3, this));
	addPropertyChangeListener(listener);
}

void JOptionPane::showInternalMessageDialog($Component* parentComponent, Object$* message) {
	$init(JOptionPane);
	showInternalMessageDialog(parentComponent, message, $($UIManager::getString($of("OptionPane.messageDialogTitle"_s), parentComponent)), JOptionPane::INFORMATION_MESSAGE);
}

void JOptionPane::showInternalMessageDialog($Component* parentComponent, Object$* message, $String* title, int32_t messageType) {
	$init(JOptionPane);
	showInternalMessageDialog(parentComponent, message, title, messageType, nullptr);
}

void JOptionPane::showInternalMessageDialog($Component* parentComponent, Object$* message, $String* title, int32_t messageType, $Icon* icon) {
	$init(JOptionPane);
	showInternalOptionDialog(parentComponent, message, title, JOptionPane::DEFAULT_OPTION, messageType, icon, nullptr, nullptr);
}

int32_t JOptionPane::showInternalConfirmDialog($Component* parentComponent, Object$* message) {
	$init(JOptionPane);
	return showInternalConfirmDialog(parentComponent, message, $($UIManager::getString("OptionPane.titleText"_s)), JOptionPane::YES_NO_CANCEL_OPTION);
}

int32_t JOptionPane::showInternalConfirmDialog($Component* parentComponent, Object$* message, $String* title, int32_t optionType) {
	$init(JOptionPane);
	return showInternalConfirmDialog(parentComponent, message, title, optionType, JOptionPane::QUESTION_MESSAGE);
}

int32_t JOptionPane::showInternalConfirmDialog($Component* parentComponent, Object$* message, $String* title, int32_t optionType, int32_t messageType) {
	$init(JOptionPane);
	return showInternalConfirmDialog(parentComponent, message, title, optionType, messageType, nullptr);
}

int32_t JOptionPane::showInternalConfirmDialog($Component* parentComponent, Object$* message, $String* title, int32_t optionType, int32_t messageType, $Icon* icon) {
	$init(JOptionPane);
	return showInternalOptionDialog(parentComponent, message, title, optionType, messageType, icon, nullptr, nullptr);
}

bool JOptionPane::checkFrameForComponent($Component* parentComponent) {
	$init(JOptionPane);
	if (parentComponent == nullptr) {
		return false;
	}
	if ($instanceOf($Frame, parentComponent)) {
		return true;
	}
	return checkFrameForComponent($($nc(parentComponent)->getParent()));
}

int32_t JOptionPane::showInternalOptionDialog($Component* parentComponent, Object$* message, $String* title, int32_t optionType, int32_t messageType, $Icon* icon, $ObjectArray* options, Object$* initialValue) {
	$init(JOptionPane);
	$var(JOptionPane, pane, $new(JOptionPane, message, messageType, optionType, icon, options, initialValue));
	$init($ClientPropertyKey);
	$init($Boolean);
	pane->putClientProperty($ClientPropertyKey::PopupFactory_FORCE_HEAVYWEIGHT_POPUP, $Boolean::TRUE);
	$var($Component, fo, $nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getFocusOwner());
	pane->setInitialValue(initialValue);
	if (checkFrameForComponent(parentComponent)) {
		$var($JInternalFrame, dialog, pane->createInternalFrame(parentComponent, title));
		pane->selectInitialValue();
		$nc(dialog)->setVisible(true);
		bool var$0 = dialog->isVisible();
		if (var$0 && !dialog->isShowing()) {
			$var($Container, parent, dialog->getParent());
			while (parent != nullptr) {
				if (parent->isVisible() == false) {
					parent->setVisible(true);
				}
				$assign(parent, parent->getParent());
			}
		}
		$nc($($AWTAccessor::getContainerAccessor()))->startLWModal(dialog);
	} else {
		pane->setComponentOrientation($($nc($(getRootFrame()))->getComponentOrientation()));
		int32_t style = styleFromMessageType(messageType);
		$var($JDialog, dialog, pane->createDialog(parentComponent, title, style));
		pane->selectInitialValue();
		$nc(dialog)->setVisible(true);
	}
	if ($instanceOf($JInternalFrame, parentComponent)) {
		try {
			$nc(($cast($JInternalFrame, parentComponent)))->setSelected(true);
		} catch ($PropertyVetoException&) {
			$catch();
		}
	}
	$var($Object, selectedValue, pane->getValue());
	if (fo != nullptr && fo->isShowing()) {
		fo->requestFocus();
	}
	if (selectedValue == nullptr) {
		return JOptionPane::CLOSED_OPTION;
	}
	if (options == nullptr) {
		if ($instanceOf($Integer, selectedValue)) {
			return $nc(($cast($Integer, selectedValue)))->intValue();
		}
		return JOptionPane::CLOSED_OPTION;
	}
	{
		int32_t counter = 0;
		int32_t maxCounter = $nc(options)->length;
		for (; counter < maxCounter; ++counter) {
			if ($nc($of(options->get(counter)))->equals(selectedValue)) {
				return counter;
			}
		}
	}
	return JOptionPane::CLOSED_OPTION;
}

$String* JOptionPane::showInternalInputDialog($Component* parentComponent, Object$* message) {
	$init(JOptionPane);
	return showInternalInputDialog(parentComponent, message, $($UIManager::getString($of("OptionPane.inputDialogTitle"_s), parentComponent)), JOptionPane::QUESTION_MESSAGE);
}

$String* JOptionPane::showInternalInputDialog($Component* parentComponent, Object$* message, $String* title, int32_t messageType) {
	$init(JOptionPane);
	return $cast($String, showInternalInputDialog(parentComponent, message, title, messageType, nullptr, nullptr, nullptr));
}

$Object* JOptionPane::showInternalInputDialog($Component* parentComponent, Object$* message, $String* title, int32_t messageType, $Icon* icon, $ObjectArray* selectionValues, Object$* initialSelectionValue) {
	$init(JOptionPane);
	$var(JOptionPane, pane, $new(JOptionPane, message, messageType, JOptionPane::OK_CANCEL_OPTION, icon, nullptr, nullptr));
	$init($ClientPropertyKey);
	$init($Boolean);
	pane->putClientProperty($ClientPropertyKey::PopupFactory_FORCE_HEAVYWEIGHT_POPUP, $Boolean::TRUE);
	$var($Component, fo, $nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getFocusOwner());
	pane->setWantsInput(true);
	pane->setSelectionValues(selectionValues);
	pane->setInitialSelectionValue(initialSelectionValue);
	$var($JInternalFrame, dialog, pane->createInternalFrame(parentComponent, title));
	pane->selectInitialValue();
	$nc(dialog)->setVisible(true);
	bool var$0 = dialog->isVisible();
	if (var$0 && !dialog->isShowing()) {
		$var($Container, parent, dialog->getParent());
		while (parent != nullptr) {
			if (parent->isVisible() == false) {
				parent->setVisible(true);
			}
			$assign(parent, parent->getParent());
		}
	}
	$nc($($AWTAccessor::getContainerAccessor()))->startLWModal(dialog);
	if ($instanceOf($JInternalFrame, parentComponent)) {
		try {
			$nc(($cast($JInternalFrame, parentComponent)))->setSelected(true);
		} catch ($PropertyVetoException&) {
			$catch();
		}
	}
	if (fo != nullptr && fo->isShowing()) {
		fo->requestFocus();
	}
	$var($Object, value, pane->getInputValue());
	if ($equals(value, JOptionPane::UNINITIALIZED_VALUE)) {
		return $of(nullptr);
	}
	return $of(value);
}

$JInternalFrame* JOptionPane::createInternalFrame($Component* parentComponent, $String* title) {
	$var($Container, parent, JOptionPane::getDesktopPaneForComponent(parentComponent));
	if (parent == nullptr && (parentComponent == nullptr || ($assign(parent, $nc(parentComponent)->getParent())) == nullptr)) {
		$throwNew($RuntimeException, "JOptionPane: parentComponent does not have a valid parent"_s);
	}
	$var($JInternalFrame, iFrame, $new($JInternalFrame, title, false, true, false, false));
	iFrame->putClientProperty("JInternalFrame.frameType"_s, "optionDialog"_s);
	iFrame->putClientProperty("JInternalFrame.messageType"_s, $($Integer::valueOf(getMessageType())));
	iFrame->addInternalFrameListener($$new($JOptionPane$4, this));
	addPropertyChangeListener($$new($JOptionPane$5, this, iFrame));
	$init($BorderLayout);
	$nc($(iFrame->getContentPane()))->add(static_cast<$Component*>(this), $of($BorderLayout::CENTER));
	if ($instanceOf($JDesktopPane, parent)) {
		$init($JLayeredPane);
		$nc(parent)->add(static_cast<$Component*>(iFrame), $of($JLayeredPane::MODAL_LAYER));
	} else {
		$nc(parent)->add(static_cast<$Component*>(iFrame), $of($BorderLayout::CENTER));
	}
	$var($Dimension, iFrameSize, iFrame->getPreferredSize());
	$var($Dimension, rootSize, $nc(parent)->getSize());
	$var($Dimension, parentSize, $nc(parentComponent)->getSize());
	iFrame->setBounds(($nc(rootSize)->width - $nc(iFrameSize)->width) / 2, (rootSize->height - iFrameSize->height) / 2, iFrameSize->width, iFrameSize->height);
	$var($Point, iFrameCoord, $SwingUtilities::convertPoint(parentComponent, 0, 0, parent));
	int32_t x = ($nc(parentSize)->width - $nc(iFrameSize)->width) / 2 + $nc(iFrameCoord)->x;
	int32_t y = (parentSize->height - iFrameSize->height) / 2 + iFrameCoord->y;
	int32_t ovrx = x + iFrameSize->width - $nc(rootSize)->width;
	int32_t ovry = y + iFrameSize->height - rootSize->height;
	x = $Math::max((ovrx > 0 ? x - ovrx : x), 0);
	y = $Math::max((ovry > 0 ? y - ovry : y), 0);
	iFrame->setBounds(x, y, iFrameSize->width, iFrameSize->height);
	parent->validate();
	try {
		iFrame->setSelected(true);
	} catch ($PropertyVetoException&) {
		$catch();
	}
	return iFrame;
}

$Frame* JOptionPane::getFrameForComponent($Component* parentComponent) {
	$init(JOptionPane);
	if (parentComponent == nullptr) {
		return getRootFrame();
	}
	if ($instanceOf($Frame, parentComponent)) {
		return $cast($Frame, parentComponent);
	}
	return JOptionPane::getFrameForComponent($($nc(parentComponent)->getParent()));
}

$Window* JOptionPane::getWindowForComponent($Component* parentComponent) {
	$init(JOptionPane);
	if (parentComponent == nullptr) {
		return getRootFrame();
	}
	if ($instanceOf($Frame, parentComponent) || $instanceOf($Dialog, parentComponent)) {
		return $cast($Window, parentComponent);
	}
	return JOptionPane::getWindowForComponent($($nc(parentComponent)->getParent()));
}

$JDesktopPane* JOptionPane::getDesktopPaneForComponent($Component* parentComponent) {
	$init(JOptionPane);
	if (parentComponent == nullptr) {
		return nullptr;
	}
	if ($instanceOf($JDesktopPane, parentComponent)) {
		return $cast($JDesktopPane, parentComponent);
	}
	return getDesktopPaneForComponent($($nc(parentComponent)->getParent()));
}

void JOptionPane::setRootFrame($Frame* newRootFrame) {
	$init(JOptionPane);
	if (newRootFrame != nullptr) {
		$SwingUtilities::appContextPut(JOptionPane::sharedFrameKey, newRootFrame);
	} else {
		$SwingUtilities::appContextRemove(JOptionPane::sharedFrameKey);
	}
}

$Frame* JOptionPane::getRootFrame() {
	$init(JOptionPane);
	$var($Frame, sharedFrame, $cast($Frame, $SwingUtilities::appContextGet(JOptionPane::sharedFrameKey)));
	if (sharedFrame == nullptr) {
		$assign(sharedFrame, $SwingUtilities::getSharedOwnerFrame());
		$SwingUtilities::appContextPut(JOptionPane::sharedFrameKey, sharedFrame);
	}
	return sharedFrame;
}

void JOptionPane::init$() {
	JOptionPane::init$("JOptionPane message"_s);
}

void JOptionPane::init$(Object$* message) {
	JOptionPane::init$(message, JOptionPane::PLAIN_MESSAGE);
}

void JOptionPane::init$(Object$* message, int32_t messageType) {
	JOptionPane::init$(message, messageType, JOptionPane::DEFAULT_OPTION);
}

void JOptionPane::init$(Object$* message, int32_t messageType, int32_t optionType) {
	JOptionPane::init$(message, messageType, optionType, nullptr);
}

void JOptionPane::init$(Object$* message, int32_t messageType, int32_t optionType, $Icon* icon) {
	JOptionPane::init$(message, messageType, optionType, icon, nullptr);
}

void JOptionPane::init$(Object$* message, int32_t messageType, int32_t optionType, $Icon* icon, $ObjectArray* options) {
	JOptionPane::init$(message, messageType, optionType, icon, options, nullptr);
}

void JOptionPane::init$(Object$* message, int32_t messageType, int32_t optionType, $Icon* icon, $ObjectArray* options, Object$* initialValue) {
	$JComponent::init$();
	$set(this, message, message);
	$set(this, options, options == nullptr ? ($ObjectArray*)nullptr : $Arrays::copyOf(options, $nc(options)->length));
	$set(this, initialValue, initialValue);
	$set(this, icon, icon);
	setMessageType(messageType);
	setOptionType(optionType);
	$set(this, value, JOptionPane::UNINITIALIZED_VALUE);
	$set(this, inputValue, JOptionPane::UNINITIALIZED_VALUE);
	updateUI();
}

void JOptionPane::setUI($OptionPaneUI* ui) {
	if (!$equals(this->ui, ui)) {
		$JComponent::setUI(ui);
		invalidate();
	}
}

$ComponentUI* JOptionPane::getUI() {
	return $cast($OptionPaneUI, this->ui);
}

void JOptionPane::updateUI() {
	setUI($cast($OptionPaneUI, $($UIManager::getUI(this))));
}

$String* JOptionPane::getUIClassID() {
	return JOptionPane::uiClassID;
}

void JOptionPane::setMessage(Object$* newMessage) {
	$var($Object, oldMessage, this->message);
	$set(this, message, newMessage);
	firePropertyChange(JOptionPane::MESSAGE_PROPERTY, oldMessage, this->message);
}

$Object* JOptionPane::getMessage() {
	return $of(this->message);
}

void JOptionPane::setIcon($Icon* newIcon) {
	$var($Object, oldIcon, this->icon);
	$set(this, icon, newIcon);
	firePropertyChange(JOptionPane::ICON_PROPERTY, oldIcon, $of(this->icon));
}

$Icon* JOptionPane::getIcon() {
	return this->icon;
}

void JOptionPane::setValue(Object$* newValue) {
	$var($Object, oldValue, this->value);
	$set(this, value, newValue);
	firePropertyChange(JOptionPane::VALUE_PROPERTY, oldValue, this->value);
}

$Object* JOptionPane::getValue() {
	return $of(this->value);
}

void JOptionPane::setOptions($ObjectArray* newOptions) {
	$var($ObjectArray, oldOptions, this->options);
	$set(this, options, newOptions == nullptr ? ($ObjectArray*)nullptr : $Arrays::copyOf(newOptions, $nc(newOptions)->length));
	firePropertyChange(JOptionPane::OPTIONS_PROPERTY, $of(oldOptions), $of(this->options));
}

$ObjectArray* JOptionPane::getOptions() {
	return this->options == nullptr ? ($ObjectArray*)nullptr : $Arrays::copyOf(this->options, $nc(this->options)->length);
}

void JOptionPane::setInitialValue(Object$* newInitialValue) {
	$var($Object, oldIV, this->initialValue);
	$set(this, initialValue, newInitialValue);
	firePropertyChange(JOptionPane::INITIAL_VALUE_PROPERTY, oldIV, this->initialValue);
}

$Object* JOptionPane::getInitialValue() {
	return $of(this->initialValue);
}

void JOptionPane::setMessageType(int32_t newType) {
	checkMessageType(newType);
	int32_t oldType = this->messageType;
	this->messageType = newType;
	firePropertyChange(JOptionPane::MESSAGE_TYPE_PROPERTY, oldType, this->messageType);
}

void JOptionPane::checkMessageType(int32_t newType) {
	$init(JOptionPane);
	if (newType != JOptionPane::ERROR_MESSAGE && newType != JOptionPane::INFORMATION_MESSAGE && newType != JOptionPane::WARNING_MESSAGE && newType != JOptionPane::QUESTION_MESSAGE && newType != JOptionPane::PLAIN_MESSAGE) {
		$throwNew($RuntimeException, "JOptionPane: type must be one of JOptionPane.ERROR_MESSAGE, JOptionPane.INFORMATION_MESSAGE, JOptionPane.WARNING_MESSAGE, JOptionPane.QUESTION_MESSAGE or JOptionPane.PLAIN_MESSAGE"_s);
	}
}

int32_t JOptionPane::getMessageType() {
	return this->messageType;
}

void JOptionPane::setOptionType(int32_t newType) {
	checkOptionType(newType);
	int32_t oldType = this->optionType;
	this->optionType = newType;
	firePropertyChange(JOptionPane::OPTION_TYPE_PROPERTY, oldType, this->optionType);
}

void JOptionPane::checkOptionType(int32_t newType) {
	$init(JOptionPane);
	if (newType != JOptionPane::DEFAULT_OPTION && newType != JOptionPane::YES_NO_OPTION && newType != JOptionPane::YES_NO_CANCEL_OPTION && newType != JOptionPane::OK_CANCEL_OPTION) {
		$throwNew($RuntimeException, "JOptionPane: option type must be one of JOptionPane.DEFAULT_OPTION, JOptionPane.YES_NO_OPTION, JOptionPane.YES_NO_CANCEL_OPTION or JOptionPane.OK_CANCEL_OPTION"_s);
	}
}

int32_t JOptionPane::getOptionType() {
	return this->optionType;
}

void JOptionPane::setSelectionValues($ObjectArray* newValues) {
	$var($ObjectArray, oldValues, this->selectionValues);
	$set(this, selectionValues, newValues == nullptr ? ($ObjectArray*)nullptr : $Arrays::copyOf(newValues, $nc(newValues)->length));
	firePropertyChange(JOptionPane::SELECTION_VALUES_PROPERTY, $of(oldValues), $of(newValues));
	if (this->selectionValues != nullptr) {
		setWantsInput(true);
	}
}

$ObjectArray* JOptionPane::getSelectionValues() {
	return this->selectionValues == nullptr ? ($ObjectArray*)nullptr : $Arrays::copyOf(this->selectionValues, $nc(this->selectionValues)->length);
}

void JOptionPane::setInitialSelectionValue(Object$* newValue) {
	$var($Object, oldValue, this->initialSelectionValue);
	$set(this, initialSelectionValue, newValue);
	firePropertyChange(JOptionPane::INITIAL_SELECTION_VALUE_PROPERTY, oldValue, newValue);
}

$Object* JOptionPane::getInitialSelectionValue() {
	return $of(this->initialSelectionValue);
}

void JOptionPane::setInputValue(Object$* newValue) {
	$var($Object, oldValue, this->inputValue);
	$set(this, inputValue, newValue);
	firePropertyChange(JOptionPane::INPUT_VALUE_PROPERTY, oldValue, newValue);
}

$Object* JOptionPane::getInputValue() {
	return $of(this->inputValue);
}

int32_t JOptionPane::getMaxCharactersPerLineCount() {
	return $Integer::MAX_VALUE;
}

void JOptionPane::setWantsInput(bool newValue) {
	bool oldValue = this->wantsInput;
	this->wantsInput = newValue;
	firePropertyChange(JOptionPane::WANTS_INPUT_PROPERTY, oldValue, newValue);
}

bool JOptionPane::getWantsInput() {
	return this->wantsInput;
}

void JOptionPane::selectInitialValue() {
	$var($OptionPaneUI, ui, $cast($OptionPaneUI, getUI()));
	if (ui != nullptr) {
		ui->selectInitialValue(this);
	}
}

int32_t JOptionPane::styleFromMessageType(int32_t messageType) {
	$init(JOptionPane);
	switch (messageType) {
	case JOptionPane::ERROR_MESSAGE:
		{
			return $JRootPane::ERROR_DIALOG;
		}
	case JOptionPane::QUESTION_MESSAGE:
		{
			return $JRootPane::QUESTION_DIALOG;
		}
	case JOptionPane::WARNING_MESSAGE:
		{
			return $JRootPane::WARNING_DIALOG;
		}
	case JOptionPane::INFORMATION_MESSAGE:
		{
			return $JRootPane::INFORMATION_DIALOG;
		}
	case JOptionPane::PLAIN_MESSAGE:
		{}
	default:
		{
			return $JRootPane::PLAIN_DIALOG;
		}
	}
}

void JOptionPane::writeObject($ObjectOutputStream* s) {
	$var($Vector, values, $new($Vector));
	$nc(s)->defaultWriteObject();
	if (this->icon != nullptr && $instanceOf($Serializable, this->icon)) {
		values->addElement("icon"_s);
		values->addElement(this->icon);
	}
	if (this->message != nullptr && $instanceOf($Serializable, this->message)) {
		values->addElement("message"_s);
		values->addElement(this->message);
	}
	if (this->options != nullptr) {
		$var($Vector, serOptions, $new($Vector));
		{
			int32_t counter = 0;
			int32_t maxCounter = $nc(this->options)->length;
			for (; counter < maxCounter; ++counter) {
				if ($instanceOf($Serializable, $nc(this->options)->get(counter))) {
					serOptions->addElement($nc(this->options)->get(counter));
				}
			}
		}
		if (serOptions->size() > 0) {
			int32_t optionCount = serOptions->size();
			$var($ObjectArray, arrayOptions, $new($ObjectArray, optionCount));
			serOptions->copyInto(arrayOptions);
			values->addElement("options"_s);
			values->addElement(arrayOptions);
		}
	}
	if (this->initialValue != nullptr && $instanceOf($Serializable, this->initialValue)) {
		values->addElement("initialValue"_s);
		values->addElement(this->initialValue);
	}
	if (this->value != nullptr && $instanceOf($Serializable, this->value)) {
		values->addElement("value"_s);
		values->addElement(this->value);
	}
	if (this->selectionValues != nullptr) {
		bool serialize = true;
		{
			int32_t counter = 0;
			int32_t maxCounter = $nc(this->selectionValues)->length;
			for (; counter < maxCounter; ++counter) {
				if ($nc(this->selectionValues)->get(counter) != nullptr && !($instanceOf($Serializable, $nc(this->selectionValues)->get(counter)))) {
					serialize = false;
					break;
				}
			}
		}
		if (serialize) {
			values->addElement("selectionValues"_s);
			values->addElement(this->selectionValues);
		}
	}
	if (this->inputValue != nullptr && $instanceOf($Serializable, this->inputValue)) {
		values->addElement("inputValue"_s);
		values->addElement(this->inputValue);
	}
	if (this->initialSelectionValue != nullptr && $instanceOf($Serializable, this->initialSelectionValue)) {
		values->addElement("initialSelectionValue"_s);
		values->addElement(this->initialSelectionValue);
	}
	s->writeObject(values);
}

void JOptionPane::readObject($ObjectInputStream* s) {
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	int32_t newMessageType = $nc(f)->get("messageType"_s, 0);
	checkMessageType(newMessageType);
	this->messageType = newMessageType;
	int32_t newOptionType = f->get("optionType"_s, 0);
	checkOptionType(newOptionType);
	this->optionType = newOptionType;
	this->wantsInput = f->get("wantsInput"_s, false);
	$var($Vector, values, $cast($Vector, s->readObject()));
	int32_t indexCounter = 0;
	int32_t maxCounter = $nc(values)->size();
	if (indexCounter < maxCounter && $nc($of($(values->elementAt(indexCounter))))->equals("icon"_s)) {
		$set(this, icon, $cast($Icon, values->elementAt(++indexCounter)));
		++indexCounter;
	}
	if (indexCounter < maxCounter && $nc($of($(values->elementAt(indexCounter))))->equals("message"_s)) {
		$set(this, message, values->elementAt(++indexCounter));
		++indexCounter;
	}
	if (indexCounter < maxCounter && $nc($of($(values->elementAt(indexCounter))))->equals("options"_s)) {
		$set(this, options, $cast($ObjectArray, values->elementAt(++indexCounter)));
		++indexCounter;
	}
	if (indexCounter < maxCounter && $nc($of($(values->elementAt(indexCounter))))->equals("initialValue"_s)) {
		$set(this, initialValue, values->elementAt(++indexCounter));
		++indexCounter;
	}
	if (indexCounter < maxCounter && $nc($of($(values->elementAt(indexCounter))))->equals("value"_s)) {
		$set(this, value, values->elementAt(++indexCounter));
		++indexCounter;
	}
	if (indexCounter < maxCounter && $nc($of($(values->elementAt(indexCounter))))->equals("selectionValues"_s)) {
		$set(this, selectionValues, $cast($ObjectArray, values->elementAt(++indexCounter)));
		++indexCounter;
	}
	if (indexCounter < maxCounter && $nc($of($(values->elementAt(indexCounter))))->equals("inputValue"_s)) {
		$set(this, inputValue, values->elementAt(++indexCounter));
		++indexCounter;
	}
	if (indexCounter < maxCounter && $nc($of($(values->elementAt(indexCounter))))->equals("initialSelectionValue"_s)) {
		$set(this, initialSelectionValue, values->elementAt(++indexCounter));
		++indexCounter;
	}
	if ($nc($(getUIClassID()))->equals(JOptionPane::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

$String* JOptionPane::paramString() {
	$var($String, iconString, this->icon != nullptr ? $nc($of(this->icon))->toString() : ""_s);
	$var($String, initialValueString, this->initialValue != nullptr ? $nc($of(this->initialValue))->toString() : ""_s);
	$var($String, messageString, this->message != nullptr ? $nc($of(this->message))->toString() : ""_s);
	$var($String, messageTypeString, nullptr);
	if (this->messageType == JOptionPane::ERROR_MESSAGE) {
		$assign(messageTypeString, "ERROR_MESSAGE"_s);
	} else if (this->messageType == JOptionPane::INFORMATION_MESSAGE) {
		$assign(messageTypeString, "INFORMATION_MESSAGE"_s);
	} else if (this->messageType == JOptionPane::WARNING_MESSAGE) {
		$assign(messageTypeString, "WARNING_MESSAGE"_s);
	} else if (this->messageType == JOptionPane::QUESTION_MESSAGE) {
		$assign(messageTypeString, "QUESTION_MESSAGE"_s);
	} else if (this->messageType == JOptionPane::PLAIN_MESSAGE) {
		$assign(messageTypeString, "PLAIN_MESSAGE"_s);
	} else {
		$assign(messageTypeString, ""_s);
	}
	$var($String, optionTypeString, nullptr);
	if (this->optionType == JOptionPane::DEFAULT_OPTION) {
		$assign(optionTypeString, "DEFAULT_OPTION"_s);
	} else if (this->optionType == JOptionPane::YES_NO_OPTION) {
		$assign(optionTypeString, "YES_NO_OPTION"_s);
	} else if (this->optionType == JOptionPane::YES_NO_CANCEL_OPTION) {
		$assign(optionTypeString, "YES_NO_CANCEL_OPTION"_s);
	} else if (this->optionType == JOptionPane::OK_CANCEL_OPTION) {
		$assign(optionTypeString, "OK_CANCEL_OPTION"_s);
	} else {
		$assign(optionTypeString, ""_s);
	}
	$var($String, wantsInputString, this->wantsInput ? "true"_s : "false"_s);
	return $str({$($JComponent::paramString()), ",icon="_s, iconString, ",initialValue="_s, initialValueString, ",message="_s, messageString, ",messageType="_s, messageTypeString, ",optionType="_s, optionTypeString, ",wantsInput="_s, wantsInputString});
}

$AccessibleContext* JOptionPane::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JOptionPane$AccessibleJOptionPane, this));
	}
	return this->accessibleContext;
}

void clinit$JOptionPane($Class* class$) {
	$assignStatic(JOptionPane::uiClassID, "OptionPaneUI"_s);
	$assignStatic(JOptionPane::ICON_PROPERTY, "icon"_s);
	$assignStatic(JOptionPane::MESSAGE_PROPERTY, "message"_s);
	$assignStatic(JOptionPane::VALUE_PROPERTY, "value"_s);
	$assignStatic(JOptionPane::OPTIONS_PROPERTY, "options"_s);
	$assignStatic(JOptionPane::INITIAL_VALUE_PROPERTY, "initialValue"_s);
	$assignStatic(JOptionPane::MESSAGE_TYPE_PROPERTY, "messageType"_s);
	$assignStatic(JOptionPane::OPTION_TYPE_PROPERTY, "optionType"_s);
	$assignStatic(JOptionPane::SELECTION_VALUES_PROPERTY, "selectionValues"_s);
	$assignStatic(JOptionPane::INITIAL_SELECTION_VALUE_PROPERTY, "initialSelectionValue"_s);
	$assignStatic(JOptionPane::INPUT_VALUE_PROPERTY, "inputValue"_s);
	$assignStatic(JOptionPane::WANTS_INPUT_PROPERTY, "wantsInput"_s);
	$assignStatic(JOptionPane::UNINITIALIZED_VALUE, "uninitializedValue"_s);
	$assignStatic(JOptionPane::sharedFrameKey, JOptionPane::class$);
}

JOptionPane::JOptionPane() {
}

$Class* JOptionPane::load$($String* name, bool initialize) {
	$loadClass(JOptionPane, name, initialize, &_JOptionPane_ClassInfo_, clinit$JOptionPane, allocate$JOptionPane);
	return class$;
}

$Class* JOptionPane::class$ = nullptr;

	} // swing
} // javax