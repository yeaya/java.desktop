#include <javax/swing/JComboBox.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/ItemSelectable.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/ItemListener.h>
#include <java/awt/event/KeyEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventListener.h>
#include <java/util/Vector.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionPropertyChangeListener.h>
#include <javax/swing/ComboBoxEditor.h>
#include <javax/swing/ComboBoxModel.h>
#include <javax/swing/DefaultComboBoxModel.h>
#include <javax/swing/JComboBox$1.h>
#include <javax/swing/JComboBox$AccessibleJComboBox.h>
#include <javax/swing/JComboBox$ComboBoxActionPropertyChangeListener.h>
#include <javax/swing/JComboBox$DefaultKeySelectionManager.h>
#include <javax/swing/JComboBox$KeySelectionManager.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/MutableComboBoxModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/AncestorListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/event/ListDataEvent.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/event/PopupMenuEvent.h>
#include <javax/swing/event/PopupMenuListener.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

#undef ACTION_COMMAND_KEY
#undef ACTION_PERFORMED
#undef DESELECTED
#undef ITEM_STATE_CHANGED
#undef SELECTED
#undef SHORT_DESCRIPTION
#undef TRUE
#undef VK_TAB
#undef WHEN_FOCUSED

using $ActionListenerArray = $Array<::java::awt::event::ActionListener>;
using $ItemListenerArray = $Array<::java::awt::event::ItemListener>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $PopupMenuListenerArray = $Array<::javax::swing::event::PopupMenuListener>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $EventQueue = ::java::awt::EventQueue;
using $ItemSelectable = ::java::awt::ItemSelectable;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ItemListener = ::java::awt::event::ItemListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $RuntimeException = ::java::lang::RuntimeException;
using $EventListener = ::java::util::EventListener;
using $Vector = ::java::util::Vector;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $ActionPropertyChangeListener = ::javax::swing::ActionPropertyChangeListener;
using $ComboBoxEditor = ::javax::swing::ComboBoxEditor;
using $ComboBoxModel = ::javax::swing::ComboBoxModel;
using $DefaultComboBoxModel = ::javax::swing::DefaultComboBoxModel;
using $JComboBox$1 = ::javax::swing::JComboBox$1;
using $JComboBox$AccessibleJComboBox = ::javax::swing::JComboBox$AccessibleJComboBox;
using $JComboBox$ComboBoxActionPropertyChangeListener = ::javax::swing::JComboBox$ComboBoxActionPropertyChangeListener;
using $JComboBox$DefaultKeySelectionManager = ::javax::swing::JComboBox$DefaultKeySelectionManager;
using $JComboBox$KeySelectionManager = ::javax::swing::JComboBox$KeySelectionManager;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $KeyStroke = ::javax::swing::KeyStroke;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $ListModel = ::javax::swing::ListModel;
using $MutableComboBoxModel = ::javax::swing::MutableComboBoxModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $AncestorListener = ::javax::swing::event::AncestorListener;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;
using $ListDataListener = ::javax::swing::event::ListDataListener;
using $PopupMenuEvent = ::javax::swing::event::PopupMenuEvent;
using $PopupMenuListener = ::javax::swing::event::PopupMenuListener;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {

$NamedAttribute JComboBox_Attribute_var$0[] = {
	{"defaultProperty", 's', "UI"},
	{"description", 's', "A combination of a text field and a drop-down list."},
	{}
};

$NamedAttribute JComboBox_Attribute_var$1[] = {
	{"value", 'Z', "false"},
	{}
};
$CompoundAttribute _JComboBox_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JComboBox_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", JComboBox_Attribute_var$1},
	{}
};

$NamedAttribute JComboBox_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JComboBox_MethodAnnotations_getAccessibleContext21[] = {
	{"Ljava/beans/BeanProperty;", JComboBox_Attribute_var$2},
	{}
};

$NamedAttribute JComboBox_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JComboBox_MethodAnnotations_getActionListeners24[] = {
	{"Ljava/beans/BeanProperty;", JComboBox_Attribute_var$3},
	{}
};

$NamedAttribute JComboBox_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JComboBox_MethodAnnotations_getItemCount27[] = {
	{"Ljava/beans/BeanProperty;", JComboBox_Attribute_var$4},
	{}
};

$NamedAttribute JComboBox_Attribute_var$5[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JComboBox_MethodAnnotations_getItemListeners28[] = {
	{"Ljava/beans/BeanProperty;", JComboBox_Attribute_var$5},
	{}
};

$NamedAttribute JComboBox_Attribute_var$6[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JComboBox_MethodAnnotations_getPopupMenuListeners32[] = {
	{"Ljava/beans/BeanProperty;", JComboBox_Attribute_var$6},
	{}
};

$CompoundAttribute _JComboBox_MethodAnnotations_getSelectedIndex35[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$NamedAttribute JComboBox_Attribute_var$7[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JComboBox_MethodAnnotations_getSelectedObjects37[] = {
	{"Ljava/beans/BeanProperty;", JComboBox_Attribute_var$7},
	{}
};

$NamedAttribute JComboBox_Attribute_var$8[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JComboBox_MethodAnnotations_getUIClassID39[] = {
	{"Ljava/beans/BeanProperty;", JComboBox_Attribute_var$8},
	{}
};

$NamedAttribute JComboBox_Attribute_var$9[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "the Action instance connected with this ActionEvent source"},
	{}
};

$CompoundAttribute _JComboBox_MethodAnnotations_setAction61[] = {
	{"Ljava/beans/BeanProperty;", JComboBox_Attribute_var$9},
	{}
};

$NamedAttribute JComboBox_Attribute_var$10[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "If true, the user can type a new value in the combo box."},
	{}
};

$CompoundAttribute _JComboBox_MethodAnnotations_setEditable64[] = {
	{"Ljava/beans/BeanProperty;", JComboBox_Attribute_var$10},
	{}
};

$NamedAttribute JComboBox_Attribute_var$11[] = {
	{"expert", 'Z', "true"},
	{"description", 's', "The editor that combo box uses to edit the current value"},
	{}
};

$CompoundAttribute _JComboBox_MethodAnnotations_setEditor65[] = {
	{"Ljava/beans/BeanProperty;", JComboBox_Attribute_var$11},
	{}
};

$NamedAttribute JComboBox_Attribute_var$12[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "The enabled state of the component."},
	{}
};

$CompoundAttribute _JComboBox_MethodAnnotations_setEnabled66[] = {
	{"Ljava/beans/BeanProperty;", JComboBox_Attribute_var$12},
	{}
};

$NamedAttribute JComboBox_Attribute_var$13[] = {
	{"bound", 'Z', "false"},
	{"expert", 'Z', "true"},
	{"description", 's', "The objects that changes the selection when a key is pressed."},
	{}
};

$CompoundAttribute _JComboBox_MethodAnnotations_setKeySelectionManager67[] = {
	{"Ljava/beans/BeanProperty;", JComboBox_Attribute_var$13},
	{}
};

$NamedAttribute JComboBox_Attribute_var$14[] = {
	{"expert", 'Z', "true"},
	{"description", 's', "Set to <code>false</code> to require heavyweight popups."},
	{}
};

$CompoundAttribute _JComboBox_MethodAnnotations_setLightWeightPopupEnabled68[] = {
	{"Ljava/beans/BeanProperty;", JComboBox_Attribute_var$14},
	{}
};

$NamedAttribute JComboBox_Attribute_var$15[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "The maximum number of rows the popup should have"},
	{}
};

$CompoundAttribute _JComboBox_MethodAnnotations_setMaximumRowCount69[] = {
	{"Ljava/beans/BeanProperty;", JComboBox_Attribute_var$15},
	{}
};

$NamedAttribute JComboBox_Attribute_var$16[] = {
	{"description", 's', "Model that the combo box uses to get data to display."},
	{}
};

$CompoundAttribute _JComboBox_MethodAnnotations_setModel70[] = {
	{"Ljava/beans/BeanProperty;", JComboBox_Attribute_var$16},
	{}
};

$NamedAttribute JComboBox_Attribute_var$17[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The display prototype value, used to compute display width and height."},
	{}
};

$CompoundAttribute _JComboBox_MethodAnnotations_setPrototypeDisplayValue72[] = {
	{"Ljava/beans/BeanProperty;", JComboBox_Attribute_var$17},
	{}
};

$NamedAttribute JComboBox_Attribute_var$18[] = {
	{"expert", 'Z', "true"},
	{"description", 's', "The renderer that paints the item selected in the list."},
	{}
};

$CompoundAttribute _JComboBox_MethodAnnotations_setRenderer73[] = {
	{"Ljava/beans/BeanProperty;", JComboBox_Attribute_var$18},
	{}
};

$NamedAttribute JComboBox_Attribute_var$19[] = {
	{"bound", 'Z', "false"},
	{"preferred", 'Z', "true"},
	{"description", 's', "The item at index is selected."},
	{}
};

$CompoundAttribute _JComboBox_MethodAnnotations_setSelectedIndex74[] = {
	{"Ljava/beans/BeanProperty;", JComboBox_Attribute_var$19},
	{}
};

$NamedAttribute JComboBox_Attribute_var$20[] = {
	{"bound", 'Z', "false"},
	{"preferred", 'Z', "true"},
	{"description", 's', "Sets the selected item in the JComboBox."},
	{}
};

$CompoundAttribute _JComboBox_MethodAnnotations_setSelectedItem75[] = {
	{"Ljava/beans/BeanProperty;", JComboBox_Attribute_var$20},
	{}
};

$NamedAttribute JComboBox_Attribute_var$21[] = {
	{"hidden", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The UI object that implements the Component\'s LookAndFeel."},
	{}
};

$CompoundAttribute _JComboBox_MethodAnnotations_setUI76[] = {
	{"Ljava/beans/BeanProperty;", JComboBox_Attribute_var$21},
	{}
};


$FieldInfo _JComboBox_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JComboBox, uiClassID)},
	{"dataModel", "Ljavax/swing/ComboBoxModel;", "Ljavax/swing/ComboBoxModel<TE;>;", $PROTECTED, $field(JComboBox, dataModel)},
	{"renderer", "Ljavax/swing/ListCellRenderer;", "Ljavax/swing/ListCellRenderer<-TE;>;", $PROTECTED, $field(JComboBox, renderer)},
	{"editor", "Ljavax/swing/ComboBoxEditor;", nullptr, $PROTECTED, $field(JComboBox, editor)},
	{"maximumRowCount", "I", nullptr, $PROTECTED, $field(JComboBox, maximumRowCount)},
	{"isEditable", "Z", nullptr, $PROTECTED, $field(JComboBox, isEditable$)},
	{"keySelectionManager", "Ljavax/swing/JComboBox$KeySelectionManager;", nullptr, $PROTECTED, $field(JComboBox, keySelectionManager)},
	{"actionCommand", "Ljava/lang/String;", nullptr, $PROTECTED, $field(JComboBox, actionCommand)},
	{"lightWeightPopupEnabled", "Z", nullptr, $PROTECTED, $field(JComboBox, lightWeightPopupEnabled)},
	{"selectedItemReminder", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(JComboBox, selectedItemReminder)},
	{"prototypeDisplayValue", "Ljava/lang/Object;", "TE;", $PRIVATE, $field(JComboBox, prototypeDisplayValue)},
	{"firingActionEvent", "Z", nullptr, $PRIVATE, $field(JComboBox, firingActionEvent)},
	{"selectingItem", "Z", nullptr, $PRIVATE, $field(JComboBox, selectingItem)},
	{"updateInProgress", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(JComboBox, updateInProgress)},
	{"action", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(JComboBox, action$)},
	{"actionPropertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(JComboBox, actionPropertyChangeListener)},
	{}
};

$MethodInfo _JComboBox_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/ComboBoxModel;)V", "(Ljavax/swing/ComboBoxModel<TE;>;)V", $PUBLIC, $method(static_cast<void(JComboBox::*)($ComboBoxModel*)>(&JComboBox::init$))},
	{"<init>", "([Ljava/lang/Object;)V", "([TE;)V", $PUBLIC, $method(static_cast<void(JComboBox::*)($ObjectArray*)>(&JComboBox::init$))},
	{"<init>", "(Ljava/util/Vector;)V", "(Ljava/util/Vector<TE;>;)V", $PUBLIC, $method(static_cast<void(JComboBox::*)($Vector*)>(&JComboBox::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JComboBox::*)()>(&JComboBox::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"actionPropertyChanged", "(Ljavax/swing/Action;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"addActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC},
	{"addItem", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC},
	{"addItemListener", "(Ljava/awt/event/ItemListener;)V", nullptr, $PUBLIC},
	{"addPopupMenuListener", "(Ljavax/swing/event/PopupMenuListener;)V", nullptr, $PUBLIC},
	{"checkMutableComboBoxModel", "()V", nullptr, 0},
	{"configureEditor", "(Ljavax/swing/ComboBoxEditor;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"configurePropertiesFromAction", "(Ljavax/swing/Action;)V", nullptr, $PROTECTED},
	{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"createActionPropertyChangeListener", "(Ljavax/swing/Action;)Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createDefaultKeySelectionManager", "()Ljavax/swing/JComboBox$KeySelectionManager;", nullptr, $PROTECTED},
	{"fireActionEvent", "()V", nullptr, $PROTECTED},
	{"fireItemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PROTECTED},
	{"firePopupMenuCanceled", "()V", nullptr, $PUBLIC},
	{"firePopupMenuWillBecomeInvisible", "()V", nullptr, $PUBLIC},
	{"firePopupMenuWillBecomeVisible", "()V", nullptr, $PUBLIC},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComboBox_MethodAnnotations_getAccessibleContext21},
	{"getAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"getActionCommand", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getActionListeners", "()[Ljava/awt/event/ActionListener;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComboBox_MethodAnnotations_getActionListeners24},
	{"getEditor", "()Ljavax/swing/ComboBoxEditor;", nullptr, $PUBLIC},
	{"getItemAt", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"getItemCount", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComboBox_MethodAnnotations_getItemCount27},
	{"getItemListeners", "()[Ljava/awt/event/ItemListener;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComboBox_MethodAnnotations_getItemListeners28},
	{"getKeySelectionManager", "()Ljavax/swing/JComboBox$KeySelectionManager;", nullptr, $PUBLIC},
	{"getMaximumRowCount", "()I", nullptr, $PUBLIC},
	{"getModel", "()Ljavax/swing/ComboBoxModel;", "()Ljavax/swing/ComboBoxModel<TE;>;", $PUBLIC},
	{"getPopupMenuListeners", "()[Ljavax/swing/event/PopupMenuListener;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComboBox_MethodAnnotations_getPopupMenuListeners32},
	{"getPrototypeDisplayValue", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"getRenderer", "()Ljavax/swing/ListCellRenderer;", "()Ljavax/swing/ListCellRenderer<-TE;>;", $PUBLIC},
	{"getSelectedIndex", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComboBox_MethodAnnotations_getSelectedIndex35},
	{"getSelectedItem", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getSelectedObjects", "()[Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComboBox_MethodAnnotations_getSelectedObjects37},
	{"getUI", "()Ljavax/swing/plaf/ComboBoxUI;", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComboBox_MethodAnnotations_getUIClassID39},
	{"hidePopup", "()V", nullptr, $PUBLIC},
	{"init", "()V", nullptr, $PRIVATE, $method(static_cast<void(JComboBox::*)()>(&JComboBox::init))},
	{"insertItemAt", "(Ljava/lang/Object;I)V", "(TE;I)V", $PUBLIC},
	{"installAncestorListener", "()V", nullptr, $PROTECTED},
	{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"isEditable", "()Z", nullptr, $PUBLIC},
	{"isLightWeightPopupEnabled", "()Z", nullptr, $PUBLIC},
	{"isListener", "(Ljava/lang/Class;Ljava/awt/event/ActionListener;)Z", "(Ljava/lang/Class<*>;Ljava/awt/event/ActionListener;)Z", $PRIVATE, $method(static_cast<bool(JComboBox::*)($Class*,$ActionListener*)>(&JComboBox::isListener))},
	{"isPopupVisible", "()Z", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"processKeyBinding", "(Ljavax/swing/KeyStroke;Ljava/awt/event/KeyEvent;IZ)Z", nullptr, $PROTECTED},
	{"processKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"removeActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC},
	{"removeAllItems", "()V", nullptr, $PUBLIC},
	{"removeItem", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"removeItemAt", "(I)V", nullptr, $PUBLIC},
	{"removeItemListener", "(Ljava/awt/event/ItemListener;)V", nullptr, $PUBLIC},
	{"removePopupMenuListener", "(Ljavax/swing/event/PopupMenuListener;)V", nullptr, $PUBLIC},
	{"selectWithKeyChar", "(C)Z", nullptr, $PUBLIC},
	{"selectedItemChanged", "()V", nullptr, $PROTECTED},
	{"setAction", "(Ljavax/swing/Action;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComboBox_MethodAnnotations_setAction61},
	{"setActionCommand", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setActionCommandFromAction", "(Ljavax/swing/Action;)V", nullptr, $PRIVATE, $method(static_cast<void(JComboBox::*)($Action*)>(&JComboBox::setActionCommandFromAction))},
	{"setEditable", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComboBox_MethodAnnotations_setEditable64},
	{"setEditor", "(Ljavax/swing/ComboBoxEditor;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComboBox_MethodAnnotations_setEditor65},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComboBox_MethodAnnotations_setEnabled66},
	{"setKeySelectionManager", "(Ljavax/swing/JComboBox$KeySelectionManager;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComboBox_MethodAnnotations_setKeySelectionManager67},
	{"setLightWeightPopupEnabled", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComboBox_MethodAnnotations_setLightWeightPopupEnabled68},
	{"setMaximumRowCount", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComboBox_MethodAnnotations_setMaximumRowCount69},
	{"setModel", "(Ljavax/swing/ComboBoxModel;)V", "(Ljavax/swing/ComboBoxModel<TE;>;)V", $PUBLIC, nullptr, nullptr, nullptr, _JComboBox_MethodAnnotations_setModel70},
	{"setPopupVisible", "(Z)V", nullptr, $PUBLIC},
	{"setPrototypeDisplayValue", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, nullptr, nullptr, nullptr, _JComboBox_MethodAnnotations_setPrototypeDisplayValue72},
	{"setRenderer", "(Ljavax/swing/ListCellRenderer;)V", "(Ljavax/swing/ListCellRenderer<-TE;>;)V", $PUBLIC, nullptr, nullptr, nullptr, _JComboBox_MethodAnnotations_setRenderer73},
	{"setSelectedIndex", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComboBox_MethodAnnotations_setSelectedIndex74},
	{"setSelectedItem", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComboBox_MethodAnnotations_setSelectedItem75},
	{"setUI", "(Ljavax/swing/plaf/ComboBoxUI;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JComboBox_MethodAnnotations_setUI76},
	{"showPopup", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JComboBox::*)($ObjectOutputStream*)>(&JComboBox::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JComboBox_InnerClassesInfo_[] = {
	{"javax.swing.JComboBox$AccessibleJComboBox", "javax.swing.JComboBox", "AccessibleJComboBox", $PROTECTED},
	{"javax.swing.JComboBox$DefaultKeySelectionManager", "javax.swing.JComboBox", "DefaultKeySelectionManager", 0},
	{"javax.swing.JComboBox$KeySelectionManager", "javax.swing.JComboBox", "KeySelectionManager", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.JComboBox$ComboBoxActionPropertyChangeListener", "javax.swing.JComboBox", "ComboBoxActionPropertyChangeListener", $PRIVATE | $STATIC},
	{"javax.swing.JComboBox$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JComboBox_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JComboBox",
	"javax.swing.JComponent",
	"java.awt.ItemSelectable,javax.swing.event.ListDataListener,java.awt.event.ActionListener,javax.accessibility.Accessible",
	_JComboBox_FieldInfo_,
	_JComboBox_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljavax/swing/JComponent;Ljava/awt/ItemSelectable;Ljavax/swing/event/ListDataListener;Ljava/awt/event/ActionListener;Ljavax/accessibility/Accessible;",
	nullptr,
	_JComboBox_InnerClassesInfo_,
	_JComboBox_Annotations_,
	nullptr,
	"javax.swing.JComboBox$AccessibleJComboBox,javax.swing.JComboBox$AccessibleJComboBox$EditorAccessibleContext,javax.swing.JComboBox$AccessibleJComboBox$AccessibleEditor,javax.swing.JComboBox$AccessibleJComboBox$AccessibleJComboBoxListSelectionListener,javax.swing.JComboBox$AccessibleJComboBox$AccessibleJComboBoxPopupMenuListener,javax.swing.JComboBox$AccessibleJComboBox$AccessibleJComboBoxPropertyChangeListener,javax.swing.JComboBox$DefaultKeySelectionManager,javax.swing.JComboBox$KeySelectionManager,javax.swing.JComboBox$ComboBoxActionPropertyChangeListener,javax.swing.JComboBox$1"
};

$Object* allocate$JComboBox($Class* clazz) {
	return $of($alloc(JComboBox));
}

$String* JComboBox::toString() {
	 return this->$JComponent::toString();
}

int32_t JComboBox::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JComboBox::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JComboBox::clone() {
	 return this->$JComponent::clone();
}

void JComboBox::finalize() {
	this->$JComponent::finalize();
}


$String* JComboBox::uiClassID = nullptr;

void JComboBox::init$($ComboBoxModel* aModel) {
	$JComponent::init$();
	this->maximumRowCount = 8;
	this->isEditable$ = false;
	$set(this, keySelectionManager, nullptr);
	$set(this, actionCommand, "comboBoxChanged"_s);
	this->lightWeightPopupEnabled = $JPopupMenu::getDefaultLightWeightPopupEnabled();
	$set(this, selectedItemReminder, nullptr);
	this->firingActionEvent = false;
	this->selectingItem = false;
	setModel(aModel);
	init();
}

void JComboBox::init$($ObjectArray* items) {
	$JComponent::init$();
	this->maximumRowCount = 8;
	this->isEditable$ = false;
	$set(this, keySelectionManager, nullptr);
	$set(this, actionCommand, "comboBoxChanged"_s);
	this->lightWeightPopupEnabled = $JPopupMenu::getDefaultLightWeightPopupEnabled();
	$set(this, selectedItemReminder, nullptr);
	this->firingActionEvent = false;
	this->selectingItem = false;
	setModel($$new($DefaultComboBoxModel, items));
	init();
}

void JComboBox::init$($Vector* items) {
	$JComponent::init$();
	this->maximumRowCount = 8;
	this->isEditable$ = false;
	$set(this, keySelectionManager, nullptr);
	$set(this, actionCommand, "comboBoxChanged"_s);
	this->lightWeightPopupEnabled = $JPopupMenu::getDefaultLightWeightPopupEnabled();
	$set(this, selectedItemReminder, nullptr);
	this->firingActionEvent = false;
	this->selectingItem = false;
	setModel($$new($DefaultComboBoxModel, items));
	init();
}

void JComboBox::init$() {
	$JComponent::init$();
	this->maximumRowCount = 8;
	this->isEditable$ = false;
	$set(this, keySelectionManager, nullptr);
	$set(this, actionCommand, "comboBoxChanged"_s);
	this->lightWeightPopupEnabled = $JPopupMenu::getDefaultLightWeightPopupEnabled();
	$set(this, selectedItemReminder, nullptr);
	this->firingActionEvent = false;
	this->selectingItem = false;
	setModel($$new($DefaultComboBoxModel));
	init();
}

void JComboBox::init() {
	installAncestorListener();
	setUIProperty("opaque"_s, $($Boolean::valueOf(true)));
	updateUI();
}

void JComboBox::installAncestorListener() {
	addAncestorListener($$new($JComboBox$1, this));
}

void JComboBox::setUI($ComboBoxUI* ui) {
	$JComponent::setUI(ui);
}

void JComboBox::updateUI() {
	if (!this->updateInProgress) {
		this->updateInProgress = true;
		{
			$var($Throwable, var$0, nullptr);
			try {
				setUI($cast($ComboBoxUI, $($UIManager::getUI(this))));
				$var($ListCellRenderer, renderer, getRenderer());
				if ($instanceOf($Component, renderer)) {
					$SwingUtilities::updateComponentTreeUI($cast($Component, renderer));
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				this->updateInProgress = false;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

$String* JComboBox::getUIClassID() {
	return JComboBox::uiClassID;
}

$ComponentUI* JComboBox::getUI() {
	return $cast($ComboBoxUI, this->ui);
}

void JComboBox::setModel($ComboBoxModel* aModel) {
	$var($ComboBoxModel, oldModel, this->dataModel);
	if (oldModel != nullptr) {
		oldModel->removeListDataListener(this);
	}
	$set(this, dataModel, aModel);
	$nc(this->dataModel)->addListDataListener(this);
	$set(this, selectedItemReminder, $nc(this->dataModel)->getSelectedItem());
	firePropertyChange("model"_s, $of(oldModel), $of(this->dataModel));
}

$ComboBoxModel* JComboBox::getModel() {
	return this->dataModel;
}

void JComboBox::setLightWeightPopupEnabled(bool aFlag) {
	bool oldFlag = this->lightWeightPopupEnabled;
	this->lightWeightPopupEnabled = aFlag;
	firePropertyChange("lightWeightPopupEnabled"_s, oldFlag, this->lightWeightPopupEnabled);
}

bool JComboBox::isLightWeightPopupEnabled() {
	return this->lightWeightPopupEnabled;
}

void JComboBox::setEditable(bool aFlag) {
	bool oldFlag = this->isEditable$;
	this->isEditable$ = aFlag;
	firePropertyChange("editable"_s, oldFlag, this->isEditable$);
}

bool JComboBox::isEditable() {
	return this->isEditable$;
}

void JComboBox::setMaximumRowCount(int32_t count) {
	int32_t oldCount = this->maximumRowCount;
	this->maximumRowCount = count;
	firePropertyChange("maximumRowCount"_s, oldCount, this->maximumRowCount);
}

int32_t JComboBox::getMaximumRowCount() {
	return this->maximumRowCount;
}

void JComboBox::setRenderer($ListCellRenderer* aRenderer) {
	$var($ListCellRenderer, oldRenderer, this->renderer);
	$set(this, renderer, aRenderer);
	firePropertyChange("renderer"_s, $of(oldRenderer), $of(this->renderer));
	invalidate();
}

$ListCellRenderer* JComboBox::getRenderer() {
	return this->renderer;
}

void JComboBox::setEditor($ComboBoxEditor* anEditor) {
	$var($ComboBoxEditor, oldEditor, this->editor);
	if (this->editor != nullptr) {
		$nc(this->editor)->removeActionListener(this);
	}
	$set(this, editor, anEditor);
	if (this->editor != nullptr) {
		$nc(this->editor)->addActionListener(this);
	}
	firePropertyChange("editor"_s, $of(oldEditor), $of(this->editor));
}

$ComboBoxEditor* JComboBox::getEditor() {
	return this->editor;
}

void JComboBox::setSelectedItem(Object$* anObject) {
	$var($Object, oldSelection, this->selectedItemReminder);
	$var($Object, objectToSelect, anObject);
	if (oldSelection == nullptr || !$nc($of(oldSelection))->equals(anObject)) {
		if (anObject != nullptr && !isEditable()) {
			bool found = false;
			for (int32_t i = 0; i < $nc(this->dataModel)->getSize(); ++i) {
				$var($Object, element, $nc(this->dataModel)->getElementAt(i));
				if ($of(anObject)->equals(element)) {
					found = true;
					$assign(objectToSelect, element);
					break;
				}
			}
			if (!found) {
				return;
			}
			$nc($(getEditor()))->setItem(anObject);
		}
		this->selectingItem = true;
		$nc(this->dataModel)->setSelectedItem(objectToSelect);
		this->selectingItem = false;
		if (!$equals(this->selectedItemReminder, $nc(this->dataModel)->getSelectedItem())) {
			selectedItemChanged();
		}
	}
	fireActionEvent();
}

$Object* JComboBox::getSelectedItem() {
	return $of($nc(this->dataModel)->getSelectedItem());
}

void JComboBox::setSelectedIndex(int32_t anIndex) {
	int32_t size = $nc(this->dataModel)->getSize();
	if (anIndex == -1) {
		setSelectedItem(nullptr);
	} else if (anIndex < -1 || anIndex >= size) {
		$throwNew($IllegalArgumentException, $$str({"setSelectedIndex: "_s, $$str(anIndex), " out of bounds"_s}));
	} else {
		setSelectedItem($($nc(this->dataModel)->getElementAt(anIndex)));
	}
}

int32_t JComboBox::getSelectedIndex() {
	$var($Object, sObject, $nc(this->dataModel)->getSelectedItem());
	int32_t i = 0;
	int32_t c = 0;
	$var($Object, obj, nullptr);
	for (i = 0, c = $nc(this->dataModel)->getSize(); i < c; ++i) {
		$assign(obj, $nc(this->dataModel)->getElementAt(i));
		if (obj != nullptr && $of(obj)->equals(sObject)) {
			return i;
		}
	}
	return -1;
}

$Object* JComboBox::getPrototypeDisplayValue() {
	return $of(this->prototypeDisplayValue);
}

void JComboBox::setPrototypeDisplayValue(Object$* prototypeDisplayValue) {
	$var($Object, oldValue, this->prototypeDisplayValue);
	$set(this, prototypeDisplayValue, prototypeDisplayValue);
	firePropertyChange("prototypeDisplayValue"_s, oldValue, prototypeDisplayValue);
}

void JComboBox::addItem(Object$* item) {
	checkMutableComboBoxModel();
	$nc(($cast($MutableComboBoxModel, this->dataModel)))->addElement(item);
}

void JComboBox::insertItemAt(Object$* item, int32_t index) {
	checkMutableComboBoxModel();
	$nc(($cast($MutableComboBoxModel, this->dataModel)))->insertElementAt(item, index);
}

void JComboBox::removeItem(Object$* anObject) {
	checkMutableComboBoxModel();
	$nc(($cast($MutableComboBoxModel, this->dataModel)))->removeElement(anObject);
}

void JComboBox::removeItemAt(int32_t anIndex) {
	checkMutableComboBoxModel();
	$nc(($cast($MutableComboBoxModel, this->dataModel)))->removeElementAt(anIndex);
}

void JComboBox::removeAllItems() {
	checkMutableComboBoxModel();
	$var($MutableComboBoxModel, model, $cast($MutableComboBoxModel, this->dataModel));
	int32_t size = $nc(model)->getSize();
	if ($instanceOf($DefaultComboBoxModel, model)) {
		$nc(($cast($DefaultComboBoxModel, model)))->removeAllElements();
	} else {
		for (int32_t i = 0; i < size; ++i) {
			$var($Object, element, model->getElementAt(0));
			model->removeElement(element);
		}
	}
	$set(this, selectedItemReminder, nullptr);
	if (isEditable()) {
		$nc(this->editor)->setItem(nullptr);
	}
}

void JComboBox::checkMutableComboBoxModel() {
	if (!($instanceOf($MutableComboBoxModel, this->dataModel))) {
		$throwNew($RuntimeException, "Cannot use this method with a non-Mutable data model."_s);
	}
}

void JComboBox::showPopup() {
	setPopupVisible(true);
}

void JComboBox::hidePopup() {
	setPopupVisible(false);
}

void JComboBox::setPopupVisible(bool v) {
	$nc($($cast($ComboBoxUI, getUI())))->setPopupVisible(this, v);
}

bool JComboBox::isPopupVisible() {
	return $nc($($cast($ComboBoxUI, getUI())))->isPopupVisible(this);
}

void JComboBox::addItemListener($ItemListener* aListener) {
	$load($ItemListener);
	$nc(this->listenerList)->add($ItemListener::class$, aListener);
}

void JComboBox::removeItemListener($ItemListener* aListener) {
	$load($ItemListener);
	$nc(this->listenerList)->remove($ItemListener::class$, aListener);
}

$ItemListenerArray* JComboBox::getItemListeners() {
	$load($ItemListener);
	return $fcast($ItemListenerArray, $nc(this->listenerList)->getListeners($ItemListener::class$));
}

void JComboBox::addActionListener($ActionListener* l) {
	$load($ActionListener);
	$nc(this->listenerList)->add($ActionListener::class$, l);
}

void JComboBox::removeActionListener($ActionListener* l) {
	if ((l != nullptr) && ($equals(getAction(), l))) {
		setAction(nullptr);
	} else {
		$load($ActionListener);
		$nc(this->listenerList)->remove($ActionListener::class$, l);
	}
}

$ActionListenerArray* JComboBox::getActionListeners() {
	$load($ActionListener);
	return $fcast($ActionListenerArray, $nc(this->listenerList)->getListeners($ActionListener::class$));
}

void JComboBox::addPopupMenuListener($PopupMenuListener* l) {
	$load($PopupMenuListener);
	$nc(this->listenerList)->add($PopupMenuListener::class$, l);
}

void JComboBox::removePopupMenuListener($PopupMenuListener* l) {
	$load($PopupMenuListener);
	$nc(this->listenerList)->remove($PopupMenuListener::class$, l);
}

$PopupMenuListenerArray* JComboBox::getPopupMenuListeners() {
	$load($PopupMenuListener);
	return $fcast($PopupMenuListenerArray, $nc(this->listenerList)->getListeners($PopupMenuListener::class$));
}

void JComboBox::firePopupMenuWillBecomeVisible() {
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

void JComboBox::firePopupMenuWillBecomeInvisible() {
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

void JComboBox::firePopupMenuCanceled() {
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

void JComboBox::setActionCommand($String* aCommand) {
	$set(this, actionCommand, aCommand);
}

$String* JComboBox::getActionCommand() {
	return this->actionCommand;
}

void JComboBox::setAction($Action* a) {
	$var($Action, oldValue, getAction());
	if (this->action$ == nullptr || !$nc($of(this->action$))->equals(a)) {
		$set(this, action$, a);
		if (oldValue != nullptr) {
			removeActionListener(oldValue);
			oldValue->removePropertyChangeListener(this->actionPropertyChangeListener);
			$set(this, actionPropertyChangeListener, nullptr);
		}
		configurePropertiesFromAction(this->action$);
		if (this->action$ != nullptr) {
			$load($ActionListener);
			if (!isListener($ActionListener::class$, this->action$)) {
				addActionListener(this->action$);
			}
			$set(this, actionPropertyChangeListener, createActionPropertyChangeListener(this->action$));
			$nc(this->action$)->addPropertyChangeListener(this->actionPropertyChangeListener);
		}
		firePropertyChange("action"_s, $of(oldValue), $of(this->action$));
	}
}

bool JComboBox::isListener($Class* c, $ActionListener* a) {
	bool isListener = false;
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		if ($equals(listeners->get(i), c) && $equals(listeners->get(i + 1), a)) {
			isListener = true;
		}
	}
	return isListener;
}

$Action* JComboBox::getAction() {
	return this->action$;
}

void JComboBox::configurePropertiesFromAction($Action* a) {
	$AbstractAction::setEnabledFromAction(this, a);
	$AbstractAction::setToolTipTextFromAction(this, a);
	setActionCommandFromAction(a);
}

$PropertyChangeListener* JComboBox::createActionPropertyChangeListener($Action* a) {
	return $new($JComboBox$ComboBoxActionPropertyChangeListener, this, a);
}

void JComboBox::actionPropertyChanged($Action* action, $String* propertyName) {
	$init($Action);
	if (propertyName == $Action::ACTION_COMMAND_KEY) {
		setActionCommandFromAction(action);
	} else if (propertyName == "enabled"_s) {
		$AbstractAction::setEnabledFromAction(this, action);
	} else {
		if ($Action::SHORT_DESCRIPTION == propertyName) {
			$AbstractAction::setToolTipTextFromAction(this, action);
		}
	}
}

void JComboBox::setActionCommandFromAction($Action* a) {
	$init($Action);
	setActionCommand((a != nullptr) ? $cast($String, $($nc(a)->getValue($Action::ACTION_COMMAND_KEY))) : ($String*)nullptr);
}

void JComboBox::fireItemStateChanged($ItemEvent* e) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ItemListener);
		if ($equals(listeners->get(i), $ItemListener::class$)) {
			$nc(($cast($ItemListener, listeners->get(i + 1))))->itemStateChanged(e);
		}
	}
}

void JComboBox::fireActionEvent() {
	if (!this->firingActionEvent) {
		this->firingActionEvent = true;
		$var($ActionEvent, e, nullptr);
		$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
		int64_t mostRecentEventTime = $EventQueue::getMostRecentEventTime();
		int32_t modifiers = 0;
		$var($AWTEvent, currentEvent, $EventQueue::getCurrentEvent());
		if ($instanceOf($InputEvent, currentEvent)) {
			modifiers = $nc(($cast($InputEvent, currentEvent)))->getModifiers();
		} else if ($instanceOf($ActionEvent, currentEvent)) {
			modifiers = $nc(($cast($ActionEvent, currentEvent)))->getModifiers();
		}
		{
			$var($Throwable, var$0, nullptr);
			try {
				for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
					$load($ActionListener);
					if ($equals(listeners->get(i), $ActionListener::class$)) {
						if (e == nullptr) {
							$assign(e, $new($ActionEvent, this, $ActionEvent::ACTION_PERFORMED, $(getActionCommand()), mostRecentEventTime, modifiers));
						}
						$nc(($cast($ActionListener, listeners->get(i + 1))))->actionPerformed(e);
					}
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				this->firingActionEvent = false;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void JComboBox::selectedItemChanged() {
	if (this->selectedItemReminder != nullptr) {
		fireItemStateChanged($$new($ItemEvent, this, $ItemEvent::ITEM_STATE_CHANGED, this->selectedItemReminder, $ItemEvent::DESELECTED));
	}
	$set(this, selectedItemReminder, $nc(this->dataModel)->getSelectedItem());
	if (this->selectedItemReminder != nullptr) {
		fireItemStateChanged($$new($ItemEvent, this, $ItemEvent::ITEM_STATE_CHANGED, this->selectedItemReminder, $ItemEvent::SELECTED));
	}
}

$ObjectArray* JComboBox::getSelectedObjects() {
	$var($Object, selectedObject, getSelectedItem());
	if (selectedObject == nullptr) {
		return $new($ObjectArray, 0);
	} else {
		$var($ObjectArray, result, $new($ObjectArray, 1));
		result->set(0, selectedObject);
		return result;
	}
}

void JComboBox::actionPerformed($ActionEvent* e) {
	setPopupVisible(false);
	$nc($(getModel()))->setSelectedItem($($nc($(getEditor()))->getItem()));
	$var($String, oldCommand, getActionCommand());
	setActionCommand("comboBoxEdited"_s);
	fireActionEvent();
	setActionCommand(oldCommand);
}

void JComboBox::contentsChanged($ListDataEvent* e) {
	$var($Object, oldSelection, this->selectedItemReminder);
	$var($Object, newSelection, $nc(this->dataModel)->getSelectedItem());
	if (oldSelection == nullptr || !$nc($of(oldSelection))->equals(newSelection)) {
		selectedItemChanged();
		if (!this->selectingItem) {
			fireActionEvent();
		}
	}
}

void JComboBox::intervalAdded($ListDataEvent* e) {
	if (!$equals(this->selectedItemReminder, $nc(this->dataModel)->getSelectedItem())) {
		selectedItemChanged();
	}
}

void JComboBox::intervalRemoved($ListDataEvent* e) {
	contentsChanged(e);
}

bool JComboBox::selectWithKeyChar(char16_t keyChar) {
	int32_t index = 0;
	if (this->keySelectionManager == nullptr) {
		$set(this, keySelectionManager, createDefaultKeySelectionManager());
	}
	index = $nc(this->keySelectionManager)->selectionForKey(keyChar, $(getModel()));
	if (index != -1) {
		setSelectedIndex(index);
		return true;
	} else {
		return false;
	}
}

void JComboBox::setEnabled(bool b) {
	$JComponent::setEnabled(b);
	$var($String, var$0, "enabled"_s);
	bool var$1 = !isEnabled();
	firePropertyChange(var$0, var$1, isEnabled());
}

void JComboBox::configureEditor($ComboBoxEditor* anEditor, Object$* anItem) {
	$nc(anEditor)->setItem(anItem);
}

void JComboBox::processKeyEvent($KeyEvent* e) {
	if ($nc(e)->getKeyCode() == $KeyEvent::VK_TAB) {
		hidePopup();
	}
	$JComponent::processKeyEvent(e);
}

bool JComboBox::processKeyBinding($KeyStroke* ks, $KeyEvent* e, int32_t condition, bool pressed) {
	if ($JComponent::processKeyBinding(ks, e, condition, pressed)) {
		return true;
	}
	bool var$1 = !isEditable() || condition != $JComponent::WHEN_FOCUSED;
	bool var$0 = var$1 || getEditor() == nullptr;
	$init($Boolean);
	if (var$0 || !$nc($Boolean::TRUE)->equals($(getClientProperty("JComboBox.isTableCellEditor"_s)))) {
		return false;
	}
	$var($Component, editorComponent, $nc($(getEditor()))->getEditorComponent());
	if ($instanceOf($JComponent, editorComponent)) {
		$var($JComponent, component, $cast($JComponent, editorComponent));
		return $nc(component)->processKeyBinding(ks, e, $JComponent::WHEN_FOCUSED, pressed);
	}
	return false;
}

void JComboBox::setKeySelectionManager($JComboBox$KeySelectionManager* aManager) {
	$set(this, keySelectionManager, aManager);
}

$JComboBox$KeySelectionManager* JComboBox::getKeySelectionManager() {
	return this->keySelectionManager;
}

int32_t JComboBox::getItemCount() {
	return $nc(this->dataModel)->getSize();
}

$Object* JComboBox::getItemAt(int32_t index) {
	return $of($nc(this->dataModel)->getElementAt(index));
}

$JComboBox$KeySelectionManager* JComboBox::createDefaultKeySelectionManager() {
	return $new($JComboBox$DefaultKeySelectionManager, this);
}

void JComboBox::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JComboBox::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

$String* JComboBox::paramString() {
	$var($String, selectedItemReminderString, this->selectedItemReminder != nullptr ? $nc($of(this->selectedItemReminder))->toString() : ""_s);
	$var($String, isEditableString, this->isEditable$ ? "true"_s : "false"_s);
	$var($String, lightWeightPopupEnabledString, this->lightWeightPopupEnabled ? "true"_s : "false"_s);
	return $str({$($JComponent::paramString()), ",isEditable="_s, isEditableString, ",lightWeightPopupEnabled="_s, lightWeightPopupEnabledString, ",maximumRowCount="_s, $$str(this->maximumRowCount), ",selectedItemReminder="_s, selectedItemReminderString});
}

$AccessibleContext* JComboBox::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JComboBox$AccessibleJComboBox, this));
	}
	return this->accessibleContext;
}

JComboBox::JComboBox() {
}

void clinit$JComboBox($Class* class$) {
	$assignStatic(JComboBox::uiClassID, "ComboBoxUI"_s);
}

$Class* JComboBox::load$($String* name, bool initialize) {
	$loadClass(JComboBox, name, initialize, &_JComboBox_ClassInfo_, clinit$JComboBox, allocate$JComboBox);
	return class$;
}

$Class* JComboBox::class$ = nullptr;

	} // swing
} // javax