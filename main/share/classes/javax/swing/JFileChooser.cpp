#include <javax/swing/JFileChooser.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/HierarchyListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/File.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/EventListener.h>
#include <java/util/Vector.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JFileChooser$1.h>
#include <javax/swing/JFileChooser$AccessibleJFileChooser.h>
#include <javax/swing/JFileChooser$FCHierarchyListener.h>
#include <javax/swing/JFileChooser$WeakPCL.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/filechooser/FileView.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/FileChooserUI.h>
#include <jcpp.h>

#undef ACCEPT_ALL_FILE_FILTER_USED_CHANGED_PROPERTY
#undef ACCESSIBLE_DESCRIPTION_PROPERTY
#undef ACCESSORY_CHANGED_PROPERTY
#undef ACTION_PERFORMED
#undef APPROVE_BUTTON_MNEMONIC_CHANGED_PROPERTY
#undef APPROVE_BUTTON_TEXT_CHANGED_PROPERTY
#undef APPROVE_BUTTON_TOOL_TIP_TEXT_CHANGED_PROPERTY
#undef APPROVE_OPTION
#undef APPROVE_SELECTION
#undef CANCEL_OPTION
#undef CANCEL_SELECTION
#undef CENTER
#undef CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY
#undef CONTROL_BUTTONS_ARE_SHOWN_CHANGED_PROPERTY
#undef CUSTOM_DIALOG
#undef DIALOG_TITLE_CHANGED_PROPERTY
#undef DIALOG_TYPE_CHANGED_PROPERTY
#undef DIRECTORIES_ONLY
#undef DIRECTORY_CHANGED_PROPERTY
#undef ERROR_OPTION
#undef FILES_AND_DIRECTORIES
#undef FILES_ONLY
#undef FILE_CHOOSER_DIALOG
#undef FILE_FILTER_CHANGED_PROPERTY
#undef FILE_HIDING_CHANGED_PROPERTY
#undef FILE_SELECTION_MODE_CHANGED_PROPERTY
#undef FILE_SYSTEM_VIEW_CHANGED_PROPERTY
#undef FILE_VIEW_CHANGED_PROPERTY
#undef MOUSE_EVENT_MASK
#undef MULTI_SELECTION_ENABLED_CHANGED_PROPERTY
#undef OPEN_DIALOG
#undef SAVE_DIALOG
#undef SELECTED_FILES_CHANGED_PROPERTY
#undef SELECTED_FILE_CHANGED_PROPERTY
#undef SHOW_HIDDEN_PROP

using $ActionListenerArray = $Array<::java::awt::event::ActionListener>;
using $FileArray = $Array<::java::io::File>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $FileFilterArray = $Array<::javax::swing::filechooser::FileFilter>;
using $AWTEvent = ::java::awt::AWTEvent;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Dialog = ::java::awt::Dialog;
using $EventQueue = ::java::awt::EventQueue;
using $Frame = ::java::awt::Frame;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $HierarchyListener = ::java::awt::event::HierarchyListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $File = ::java::io::File;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Attribute = ::java::lang::Attribute;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $EventListener = ::java::util::EventListener;
using $Vector = ::java::util::Vector;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JDialog = ::javax::swing::JDialog;
using $JFileChooser$1 = ::javax::swing::JFileChooser$1;
using $JFileChooser$AccessibleJFileChooser = ::javax::swing::JFileChooser$AccessibleJFileChooser;
using $JFileChooser$FCHierarchyListener = ::javax::swing::JFileChooser$FCHierarchyListener;
using $JFileChooser$WeakPCL = ::javax::swing::JFileChooser$WeakPCL;
using $JOptionPane = ::javax::swing::JOptionPane;
using $JRootPane = ::javax::swing::JRootPane;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $FileFilter = ::javax::swing::filechooser::FileFilter;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $FileView = ::javax::swing::filechooser::FileView;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $FileChooserUI = ::javax::swing::plaf::FileChooserUI;

namespace javax {
	namespace swing {

$NamedAttribute JFileChooser_Attribute_var$0[] = {
	{"defaultProperty", 's', "UI"},
	{"description", 's', "A component which allows for the interactive selection of a file."},
	{}
};

$NamedAttribute JFileChooser_Attribute_var$1[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _JFileChooser_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JFileChooser_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", JFileChooser_Attribute_var$1},
	{}
};

$NamedAttribute JFileChooser_Attribute_var$2[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "Adds a filter to the list of user choosable file filters."},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_addChoosableFileFilter8[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$2},
	{}
};

$NamedAttribute JFileChooser_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_getAcceptAllFileFilter18[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$3},
	{}
};

$NamedAttribute JFileChooser_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_getAccessibleContext19[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$4},
	{}
};

$NamedAttribute JFileChooser_Attribute_var$5[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_getActionListeners21[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$5},
	{}
};

$NamedAttribute JFileChooser_Attribute_var$6[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_getChoosableFileFilters25[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$6},
	{}
};

$NamedAttribute JFileChooser_Attribute_var$7[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_getUI41[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$7},
	{}
};

$NamedAttribute JFileChooser_Attribute_var$8[] = {
	{"bound", 'Z', "false"},
	{"expert", 'Z', "true"},
	{"description", 's', "A string that specifies the name of the L&F class."},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_getUIClassID42[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$8},
	{}
};

$NamedAttribute JFileChooser_Attribute_var$9[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_isDirectorySelectionEnabled46[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$9},
	{}
};

$NamedAttribute JFileChooser_Attribute_var$10[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_isFileSelectionEnabled48[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$10},
	{}
};

$NamedAttribute JFileChooser_Attribute_var$11[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "Sets whether the AcceptAll FileFilter is used as an available choice in the choosable filter list."},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_setAcceptAllFileFilterUsed57[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$11},
	{}
};

$NamedAttribute JFileChooser_Attribute_var$12[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "Sets the accessory component on the JFileChooser."},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_setAccessory58[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$12},
	{}
};

$NamedAttribute JFileChooser_Attribute_var$13[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "The mnemonic key accelerator for the ApproveButton."},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_setApproveButtonMnemonic59[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$13},
	{}
};

$NamedAttribute JFileChooser_Attribute_var$14[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "The text that goes in the ApproveButton."},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_setApproveButtonText61[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$14},
	{}
};

$NamedAttribute JFileChooser_Attribute_var$15[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "The tooltip text for the ApproveButton."},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_setApproveButtonToolTipText62[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$15},
	{}
};

$NamedAttribute JFileChooser_Attribute_var$16[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "Sets whether the approve & cancel buttons are shown."},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_setControlButtonsAreShown63[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$16},
	{}
};

$NamedAttribute JFileChooser_Attribute_var$17[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "The directory that the JFileChooser is showing files of."},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_setCurrentDirectory64[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$17},
	{}
};

$NamedAttribute JFileChooser_Attribute_var$18[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "The title of the JFileChooser dialog window."},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_setDialogTitle65[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$18},
	{}
};

$Attribute JFileChooser_Attribute_var$20[] = {
	{'s', "JFileChooser.OPEN_DIALOG"},
	{'s', "JFileChooser.SAVE_DIALOG"},
	{'s', "JFileChooser.CUSTOM_DIALOG"},
	{'-'}
};

$NamedAttribute JFileChooser_Attribute_var$19[] = {
	{"preferred", 'Z', "true"},
	{"enumerationValues", '[', JFileChooser_Attribute_var$20},
	{"description", 's', "The type (open, save, custom) of the JFileChooser."},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_setDialogType66[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$19},
	{}
};

$NamedAttribute JFileChooser_Attribute_var$21[] = {
	{"bound", 'Z', "false"},
	{"description", 's', "determines whether automatic drag handling is enabled"},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_setDragEnabled67[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$21},
	{}
};

$NamedAttribute JFileChooser_Attribute_var$22[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "Sets the File Filter used to filter out files of type."},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_setFileFilter68[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$22},
	{}
};

$NamedAttribute JFileChooser_Attribute_var$23[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "Sets file hiding on or off."},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_setFileHidingEnabled69[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$23},
	{}
};

$Attribute JFileChooser_Attribute_var$25[] = {
	{'s', "JFileChooser.FILES_ONLY"},
	{'s', "JFileChooser.DIRECTORIES_ONLY"},
	{'s', "JFileChooser.FILES_AND_DIRECTORIES"},
	{'-'}
};

$NamedAttribute JFileChooser_Attribute_var$24[] = {
	{"preferred", 'Z', "true"},
	{"enumerationValues", '[', JFileChooser_Attribute_var$25},
	{"description", 's', "Sets the types of files that the JFileChooser can choose."},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_setFileSelectionMode70[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$24},
	{}
};

$NamedAttribute JFileChooser_Attribute_var$26[] = {
	{"expert", 'Z', "true"},
	{"description", 's', "Sets the FileSytemView used to get filesystem information."},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_setFileSystemView71[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$26},
	{}
};

$NamedAttribute JFileChooser_Attribute_var$27[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "Sets the File View used to get file type information."},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_setFileView72[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$27},
	{}
};

$NamedAttribute JFileChooser_Attribute_var$28[] = {
	{"description", 's', "Sets multiple file selection mode."},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_setMultiSelectionEnabled73[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$28},
	{}
};

$NamedAttribute JFileChooser_Attribute_var$29[] = {
	{"preferred", 'Z', "true"},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_setSelectedFile74[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$29},
	{}
};

$NamedAttribute JFileChooser_Attribute_var$30[] = {
	{"description", 's', "The list of selected files if the chooser is in multiple selection mode."},
	{}
};

$CompoundAttribute _JFileChooser_MethodAnnotations_setSelectedFiles75[] = {
	{"Ljava/beans/BeanProperty;", JFileChooser_Attribute_var$30},
	{}
};

$FieldInfo _JFileChooser_FieldInfo_[] = {
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JFileChooser, uiClassID)},
	{"OPEN_DIALOG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JFileChooser, OPEN_DIALOG)},
	{"SAVE_DIALOG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JFileChooser, SAVE_DIALOG)},
	{"CUSTOM_DIALOG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JFileChooser, CUSTOM_DIALOG)},
	{"CANCEL_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JFileChooser, CANCEL_OPTION)},
	{"APPROVE_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JFileChooser, APPROVE_OPTION)},
	{"ERROR_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JFileChooser, ERROR_OPTION)},
	{"FILES_ONLY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JFileChooser, FILES_ONLY)},
	{"DIRECTORIES_ONLY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JFileChooser, DIRECTORIES_ONLY)},
	{"FILES_AND_DIRECTORIES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JFileChooser, FILES_AND_DIRECTORIES)},
	{"CANCEL_SELECTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, CANCEL_SELECTION)},
	{"APPROVE_SELECTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, APPROVE_SELECTION)},
	{"APPROVE_BUTTON_TEXT_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, APPROVE_BUTTON_TEXT_CHANGED_PROPERTY)},
	{"APPROVE_BUTTON_TOOL_TIP_TEXT_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, APPROVE_BUTTON_TOOL_TIP_TEXT_CHANGED_PROPERTY)},
	{"APPROVE_BUTTON_MNEMONIC_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, APPROVE_BUTTON_MNEMONIC_CHANGED_PROPERTY)},
	{"CONTROL_BUTTONS_ARE_SHOWN_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, CONTROL_BUTTONS_ARE_SHOWN_CHANGED_PROPERTY)},
	{"DIRECTORY_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, DIRECTORY_CHANGED_PROPERTY)},
	{"SELECTED_FILE_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, SELECTED_FILE_CHANGED_PROPERTY)},
	{"SELECTED_FILES_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, SELECTED_FILES_CHANGED_PROPERTY)},
	{"MULTI_SELECTION_ENABLED_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, MULTI_SELECTION_ENABLED_CHANGED_PROPERTY)},
	{"FILE_SYSTEM_VIEW_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, FILE_SYSTEM_VIEW_CHANGED_PROPERTY)},
	{"FILE_VIEW_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, FILE_VIEW_CHANGED_PROPERTY)},
	{"FILE_HIDING_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, FILE_HIDING_CHANGED_PROPERTY)},
	{"FILE_FILTER_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, FILE_FILTER_CHANGED_PROPERTY)},
	{"FILE_SELECTION_MODE_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, FILE_SELECTION_MODE_CHANGED_PROPERTY)},
	{"ACCESSORY_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, ACCESSORY_CHANGED_PROPERTY)},
	{"ACCEPT_ALL_FILE_FILTER_USED_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, ACCEPT_ALL_FILE_FILTER_USED_CHANGED_PROPERTY)},
	{"DIALOG_TITLE_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, DIALOG_TITLE_CHANGED_PROPERTY)},
	{"DIALOG_TYPE_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, DIALOG_TYPE_CHANGED_PROPERTY)},
	{"CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JFileChooser, CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY)},
	{"dialogTitle", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JFileChooser, dialogTitle)},
	{"approveButtonText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JFileChooser, approveButtonText)},
	{"approveButtonToolTipText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JFileChooser, approveButtonToolTipText)},
	{"approveButtonMnemonic", "I", nullptr, $PRIVATE, $field(JFileChooser, approveButtonMnemonic)},
	{"filters", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/filechooser/FileFilter;>;", $PRIVATE, $field(JFileChooser, filters)},
	{"dialog", "Ljavax/swing/JDialog;", nullptr, $PRIVATE, $field(JFileChooser, dialog)},
	{"dialogType", "I", nullptr, $PRIVATE, $field(JFileChooser, dialogType)},
	{"returnValue", "I", nullptr, $PRIVATE, $field(JFileChooser, returnValue)},
	{"accessory", "Ljavax/swing/JComponent;", nullptr, $PRIVATE, $field(JFileChooser, accessory)},
	{"fileView", "Ljavax/swing/filechooser/FileView;", nullptr, $PRIVATE, $field(JFileChooser, fileView)},
	{"controlsShown", "Z", nullptr, $PRIVATE, $field(JFileChooser, controlsShown)},
	{"useFileHiding", "Z", nullptr, $PRIVATE, $field(JFileChooser, useFileHiding)},
	{"SHOW_HIDDEN_PROP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JFileChooser, SHOW_HIDDEN_PROP)},
	{"showFilesListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE | $TRANSIENT, $field(JFileChooser, showFilesListener)},
	{"fileSelectionMode", "I", nullptr, $PRIVATE, $field(JFileChooser, fileSelectionMode)},
	{"multiSelectionEnabled", "Z", nullptr, $PRIVATE, $field(JFileChooser, multiSelectionEnabled)},
	{"useAcceptAllFileFilter", "Z", nullptr, $PRIVATE, $field(JFileChooser, useAcceptAllFileFilter)},
	{"dragEnabled", "Z", nullptr, $PRIVATE, $field(JFileChooser, dragEnabled)},
	{"fileFilter", "Ljavax/swing/filechooser/FileFilter;", nullptr, $PRIVATE, $field(JFileChooser, fileFilter)},
	{"fileSystemView", "Ljavax/swing/filechooser/FileSystemView;", nullptr, $PRIVATE, $field(JFileChooser, fileSystemView)},
	{"currentDirectory", "Ljava/io/File;", nullptr, $PRIVATE, $field(JFileChooser, currentDirectory)},
	{"selectedFile", "Ljava/io/File;", nullptr, $PRIVATE, $field(JFileChooser, selectedFile)},
	{"selectedFiles", "[Ljava/io/File;", nullptr, $PRIVATE, $field(JFileChooser, selectedFiles)},
	{"accessibleContext", "Ljavax/accessibility/AccessibleContext;", nullptr, $PROTECTED, $field(JFileChooser, accessibleContext)},
	{}
};

$MethodInfo _JFileChooser_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JFileChooser::*)()>(&JFileChooser::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JFileChooser::*)($String*)>(&JFileChooser::init$))},
	{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(static_cast<void(JFileChooser::*)($File*)>(&JFileChooser::init$))},
	{"<init>", "(Ljavax/swing/filechooser/FileSystemView;)V", nullptr, $PUBLIC, $method(static_cast<void(JFileChooser::*)($FileSystemView*)>(&JFileChooser::init$))},
	{"<init>", "(Ljava/io/File;Ljavax/swing/filechooser/FileSystemView;)V", nullptr, $PUBLIC, $method(static_cast<void(JFileChooser::*)($File*,$FileSystemView*)>(&JFileChooser::init$))},
	{"<init>", "(Ljava/lang/String;Ljavax/swing/filechooser/FileSystemView;)V", nullptr, $PUBLIC, $method(static_cast<void(JFileChooser::*)($String*,$FileSystemView*)>(&JFileChooser::init$))},
	{"accept", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"addActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC},
	{"addChoosableFileFilter", "(Ljavax/swing/filechooser/FileFilter;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_addChoosableFileFilter8},
	{"approveSelection", "()V", nullptr, $PUBLIC},
	{"cancelSelection", "()V", nullptr, $PUBLIC},
	{"changeToParentDirectory", "()V", nullptr, $PUBLIC},
	{"checkDialogType", "(I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t)>(&JFileChooser::checkDialogType))},
	{"checkDragEnabled", "(Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(bool)>(&JFileChooser::checkDragEnabled))},
	{"checkFileSelectionMode", "(I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t)>(&JFileChooser::checkFileSelectionMode))},
	{"createDialog", "(Ljava/awt/Component;)Ljavax/swing/JDialog;", nullptr, $PROTECTED, nullptr, "java.awt.HeadlessException"},
	{"ensureFileIsVisible", "(Ljava/io/File;)V", nullptr, $PUBLIC},
	{"fireActionPerformed", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"getAcceptAllFileFilter", "()Ljavax/swing/filechooser/FileFilter;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_getAcceptAllFileFilter18},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_getAccessibleContext19},
	{"getAccessory", "()Ljavax/swing/JComponent;", nullptr, $PUBLIC},
	{"getActionListeners", "()[Ljava/awt/event/ActionListener;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_getActionListeners21},
	{"getApproveButtonMnemonic", "()I", nullptr, $PUBLIC},
	{"getApproveButtonText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getApproveButtonToolTipText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getChoosableFileFilters", "()[Ljavax/swing/filechooser/FileFilter;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_getChoosableFileFilters25},
	{"getControlButtonsAreShown", "()Z", nullptr, $PUBLIC},
	{"getCurrentDirectory", "()Ljava/io/File;", nullptr, $PUBLIC},
	{"getDescription", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDialogTitle", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDialogType", "()I", nullptr, $PUBLIC},
	{"getDragEnabled", "()Z", nullptr, $PUBLIC},
	{"getFileFilter", "()Ljavax/swing/filechooser/FileFilter;", nullptr, $PUBLIC},
	{"getFileSelectionMode", "()I", nullptr, $PUBLIC},
	{"getFileSystemView", "()Ljavax/swing/filechooser/FileSystemView;", nullptr, $PUBLIC},
	{"getFileView", "()Ljavax/swing/filechooser/FileView;", nullptr, $PUBLIC},
	{"getIcon", "(Ljava/io/File;)Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getName", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSelectedFile", "()Ljava/io/File;", nullptr, $PUBLIC},
	{"getSelectedFiles", "()[Ljava/io/File;", nullptr, $PUBLIC},
	{"getTypeDescription", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUI", "()Ljavax/swing/plaf/FileChooserUI;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_getUI41},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_getUIClassID42},
	{"installHierarchyListener", "()V", nullptr, $PRIVATE, $method(static_cast<void(JFileChooser::*)()>(&JFileChooser::installHierarchyListener))},
	{"installShowFilesListener", "()V", nullptr, $PRIVATE, $method(static_cast<void(JFileChooser::*)()>(&JFileChooser::installShowFilesListener))},
	{"isAcceptAllFileFilterUsed", "()Z", nullptr, $PUBLIC},
	{"isDirectorySelectionEnabled", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_isDirectorySelectionEnabled46},
	{"isFileHidingEnabled", "()Z", nullptr, $PUBLIC},
	{"isFileSelectionEnabled", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_isFileSelectionEnabled48},
	{"isMultiSelectionEnabled", "()Z", nullptr, $PUBLIC},
	{"isTraversable", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JFileChooser::*)($ObjectInputStream*)>(&JFileChooser::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"removeActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC},
	{"removeChoosableFileFilter", "(Ljavax/swing/filechooser/FileFilter;)Z", nullptr, $PUBLIC},
	{"rescanCurrentDirectory", "()V", nullptr, $PUBLIC},
	{"resetChoosableFileFilters", "()V", nullptr, $PUBLIC},
	{"setAcceptAllFileFilterUsed", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_setAcceptAllFileFilterUsed57},
	{"setAccessory", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_setAccessory58},
	{"setApproveButtonMnemonic", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_setApproveButtonMnemonic59},
	{"setApproveButtonMnemonic", "(C)V", nullptr, $PUBLIC},
	{"setApproveButtonText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_setApproveButtonText61},
	{"setApproveButtonToolTipText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_setApproveButtonToolTipText62},
	{"setControlButtonsAreShown", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_setControlButtonsAreShown63},
	{"setCurrentDirectory", "(Ljava/io/File;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_setCurrentDirectory64},
	{"setDialogTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_setDialogTitle65},
	{"setDialogType", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_setDialogType66},
	{"setDragEnabled", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_setDragEnabled67},
	{"setFileFilter", "(Ljavax/swing/filechooser/FileFilter;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_setFileFilter68},
	{"setFileHidingEnabled", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_setFileHidingEnabled69},
	{"setFileSelectionMode", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_setFileSelectionMode70},
	{"setFileSystemView", "(Ljavax/swing/filechooser/FileSystemView;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_setFileSystemView71},
	{"setFileView", "(Ljavax/swing/filechooser/FileView;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_setFileView72},
	{"setMultiSelectionEnabled", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_setMultiSelectionEnabled73},
	{"setSelectedFile", "(Ljava/io/File;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_setSelectedFile74},
	{"setSelectedFiles", "([Ljava/io/File;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JFileChooser_MethodAnnotations_setSelectedFiles75},
	{"setup", "(Ljavax/swing/filechooser/FileSystemView;)V", nullptr, $PROTECTED},
	{"showDialog", "(Ljava/awt/Component;Ljava/lang/String;)I", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"showOpenDialog", "(Ljava/awt/Component;)I", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"showSaveDialog", "(Ljava/awt/Component;)I", nullptr, $PUBLIC, nullptr, "java.awt.HeadlessException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JFileChooser::*)($ObjectOutputStream*)>(&JFileChooser::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JFileChooser_InnerClassesInfo_[] = {
	{"javax.swing.JFileChooser$FCHierarchyListener", "javax.swing.JFileChooser", "FCHierarchyListener", $PRIVATE},
	{"javax.swing.JFileChooser$AccessibleJFileChooser", "javax.swing.JFileChooser", "AccessibleJFileChooser", $PROTECTED},
	{"javax.swing.JFileChooser$WeakPCL", "javax.swing.JFileChooser", "WeakPCL", $PRIVATE | $STATIC},
	{"javax.swing.JFileChooser$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JFileChooser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JFileChooser",
	"javax.swing.JComponent",
	"javax.accessibility.Accessible",
	_JFileChooser_FieldInfo_,
	_JFileChooser_MethodInfo_,
	nullptr,
	nullptr,
	_JFileChooser_InnerClassesInfo_,
	_JFileChooser_Annotations_,
	nullptr,
	"javax.swing.JFileChooser$FCHierarchyListener,javax.swing.JFileChooser$AccessibleJFileChooser,javax.swing.JFileChooser$WeakPCL,javax.swing.JFileChooser$1"
};

$Object* allocate$JFileChooser($Class* clazz) {
	return $of($alloc(JFileChooser));
}

$String* JFileChooser::toString() {
	 return this->$JComponent::toString();
}

int32_t JFileChooser::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JFileChooser::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JFileChooser::clone() {
	 return this->$JComponent::clone();
}

void JFileChooser::finalize() {
	this->$JComponent::finalize();
}

$String* JFileChooser::uiClassID = nullptr;
$String* JFileChooser::CANCEL_SELECTION = nullptr;
$String* JFileChooser::APPROVE_SELECTION = nullptr;
$String* JFileChooser::APPROVE_BUTTON_TEXT_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::APPROVE_BUTTON_TOOL_TIP_TEXT_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::APPROVE_BUTTON_MNEMONIC_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::CONTROL_BUTTONS_ARE_SHOWN_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::DIRECTORY_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::SELECTED_FILE_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::SELECTED_FILES_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::MULTI_SELECTION_ENABLED_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::FILE_SYSTEM_VIEW_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::FILE_VIEW_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::FILE_HIDING_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::FILE_FILTER_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::FILE_SELECTION_MODE_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::ACCESSORY_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::ACCEPT_ALL_FILE_FILTER_USED_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::DIALOG_TITLE_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::DIALOG_TYPE_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY = nullptr;
$String* JFileChooser::SHOW_HIDDEN_PROP = nullptr;

void JFileChooser::init$() {
	JFileChooser::init$(($File*)nullptr, ($FileSystemView*)nullptr);
}

void JFileChooser::init$($String* currentDirectoryPath) {
	JFileChooser::init$(currentDirectoryPath, ($FileSystemView*)nullptr);
}

void JFileChooser::init$($File* currentDirectory) {
	JFileChooser::init$(currentDirectory, ($FileSystemView*)nullptr);
}

void JFileChooser::init$($FileSystemView* fsv) {
	JFileChooser::init$(($File*)nullptr, fsv);
}

void JFileChooser::init$($File* currentDirectory, $FileSystemView* fsv) {
	$JComponent::init$();
	$set(this, dialogTitle, nullptr);
	$set(this, approveButtonText, nullptr);
	$set(this, approveButtonToolTipText, nullptr);
	this->approveButtonMnemonic = 0;
	$set(this, filters, $new($Vector, 5));
	$set(this, dialog, nullptr);
	this->dialogType = JFileChooser::OPEN_DIALOG;
	this->returnValue = JFileChooser::ERROR_OPTION;
	$set(this, accessory, nullptr);
	$set(this, fileView, nullptr);
	this->controlsShown = true;
	this->useFileHiding = true;
	$set(this, showFilesListener, nullptr);
	this->fileSelectionMode = JFileChooser::FILES_ONLY;
	this->multiSelectionEnabled = false;
	this->useAcceptAllFileFilter = true;
	this->dragEnabled = false;
	$set(this, fileFilter, nullptr);
	$set(this, fileSystemView, nullptr);
	$set(this, currentDirectory, nullptr);
	$set(this, selectedFile, nullptr);
	$set(this, accessibleContext, nullptr);
	setup(fsv);
	setCurrentDirectory(currentDirectory);
}

void JFileChooser::init$($String* currentDirectoryPath, $FileSystemView* fsv) {
	$JComponent::init$();
	$set(this, dialogTitle, nullptr);
	$set(this, approveButtonText, nullptr);
	$set(this, approveButtonToolTipText, nullptr);
	this->approveButtonMnemonic = 0;
	$set(this, filters, $new($Vector, 5));
	$set(this, dialog, nullptr);
	this->dialogType = JFileChooser::OPEN_DIALOG;
	this->returnValue = JFileChooser::ERROR_OPTION;
	$set(this, accessory, nullptr);
	$set(this, fileView, nullptr);
	this->controlsShown = true;
	this->useFileHiding = true;
	$set(this, showFilesListener, nullptr);
	this->fileSelectionMode = JFileChooser::FILES_ONLY;
	this->multiSelectionEnabled = false;
	this->useAcceptAllFileFilter = true;
	this->dragEnabled = false;
	$set(this, fileFilter, nullptr);
	$set(this, fileSystemView, nullptr);
	$set(this, currentDirectory, nullptr);
	$set(this, selectedFile, nullptr);
	$set(this, accessibleContext, nullptr);
	setup(fsv);
	if (currentDirectoryPath == nullptr) {
		setCurrentDirectory(nullptr);
	} else {
		setCurrentDirectory($($nc(this->fileSystemView)->createFileObject(currentDirectoryPath)));
	}
}

void JFileChooser::setup($FileSystemView* view$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($FileSystemView, view, view$renamed);
	installShowFilesListener();
	installHierarchyListener();
	if (view == nullptr) {
		$assign(view, $FileSystemView::getFileSystemView());
	}
	setFileSystemView(view);
	updateUI();
	if (isAcceptAllFileFilterUsed()) {
		setFileFilter($(getAcceptAllFileFilter()));
	}
	enableEvents($AWTEvent::MOUSE_EVENT_MASK);
}

void JFileChooser::installHierarchyListener() {
	addHierarchyListener($$new($JFileChooser$FCHierarchyListener, this));
}

void JFileChooser::installShowFilesListener() {
	$useLocalCurrentObjectStackCache();
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	$var($Object, showHiddenProperty, $nc(tk)->getDesktopProperty(JFileChooser::SHOW_HIDDEN_PROP));
	if ($instanceOf($Boolean, showHiddenProperty)) {
		this->useFileHiding = !$nc(($cast($Boolean, showHiddenProperty)))->booleanValue();
		$set(this, showFilesListener, $new($JFileChooser$WeakPCL, this));
		tk->addPropertyChangeListener(JFileChooser::SHOW_HIDDEN_PROP, this->showFilesListener);
	}
}

void JFileChooser::setDragEnabled(bool b) {
	checkDragEnabled(b);
	this->dragEnabled = b;
}

void JFileChooser::checkDragEnabled(bool b) {
	$init(JFileChooser);
	if (b && $GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
}

bool JFileChooser::getDragEnabled() {
	return this->dragEnabled;
}

$File* JFileChooser::getSelectedFile() {
	return this->selectedFile;
}

void JFileChooser::setSelectedFile($File* file) {
	$useLocalCurrentObjectStackCache();
	$var($File, oldValue, this->selectedFile);
	$set(this, selectedFile, file);
	if (this->selectedFile != nullptr) {
		bool var$0 = $nc(file)->isAbsolute();
		if (var$0 && !$nc($(getFileSystemView()))->isParent($(getCurrentDirectory()), this->selectedFile)) {
			setCurrentDirectory($($nc(this->selectedFile)->getParentFile()));
		}
		if (!isMultiSelectionEnabled() || this->selectedFiles == nullptr || $nc(this->selectedFiles)->length == 1) {
			ensureFileIsVisible(this->selectedFile);
		}
	}
	firePropertyChange(JFileChooser::SELECTED_FILE_CHANGED_PROPERTY, $of(oldValue), $of(this->selectedFile));
}

$FileArray* JFileChooser::getSelectedFiles() {
	if (this->selectedFiles == nullptr) {
		return $new($FileArray, 0);
	} else {
		return $cast($FileArray, $nc(this->selectedFiles)->clone());
	}
}

void JFileChooser::setSelectedFiles($FileArray* selectedFiles$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($FileArray, selectedFiles, selectedFiles$renamed);
	$var($FileArray, oldValue, this->selectedFiles);
	if (selectedFiles == nullptr || $nc(selectedFiles)->length == 0) {
		$assign(selectedFiles, nullptr);
		$set(this, selectedFiles, nullptr);
		setSelectedFile(nullptr);
	} else {
		$set(this, selectedFiles, $cast($FileArray, selectedFiles->clone()));
		setSelectedFile($nc(this->selectedFiles)->get(0));
	}
	firePropertyChange(JFileChooser::SELECTED_FILES_CHANGED_PROPERTY, $of(oldValue), $of(selectedFiles));
}

$File* JFileChooser::getCurrentDirectory() {
	return this->currentDirectory;
}

void JFileChooser::setCurrentDirectory($File* dir$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($File, dir, dir$renamed);
	$var($File, oldValue, this->currentDirectory);
	if (dir != nullptr && !dir->exists()) {
		$assign(dir, this->currentDirectory);
	}
	if (dir == nullptr) {
		$assign(dir, $nc($(getFileSystemView()))->getDefaultDirectory());
	}
	if (this->currentDirectory != nullptr) {
		if ($nc(this->currentDirectory)->equals(dir)) {
			return;
		}
	}
	$var($File, prev, nullptr);
	while (!isTraversable(dir) && prev != dir) {
		$assign(prev, dir);
		$assign(dir, $nc($(getFileSystemView()))->getParentDirectory(dir));
	}
	$set(this, currentDirectory, dir);
	firePropertyChange(JFileChooser::DIRECTORY_CHANGED_PROPERTY, $of(oldValue), $of(this->currentDirectory));
}

void JFileChooser::changeToParentDirectory() {
	$useLocalCurrentObjectStackCache();
	$set(this, selectedFile, nullptr);
	$var($File, oldValue, getCurrentDirectory());
	setCurrentDirectory($($nc($(getFileSystemView()))->getParentDirectory(oldValue)));
}

void JFileChooser::rescanCurrentDirectory() {
	$nc($($cast($FileChooserUI, getUI())))->rescanCurrentDirectory(this);
}

void JFileChooser::ensureFileIsVisible($File* f) {
	$nc($($cast($FileChooserUI, getUI())))->ensureFileIsVisible(this, f);
}

int32_t JFileChooser::showOpenDialog($Component* parent) {
	setDialogType(JFileChooser::OPEN_DIALOG);
	return showDialog(parent, nullptr);
}

int32_t JFileChooser::showSaveDialog($Component* parent) {
	setDialogType(JFileChooser::SAVE_DIALOG);
	return showDialog(parent, nullptr);
}

int32_t JFileChooser::showDialog($Component* parent, $String* approveButtonText) {
	$useLocalCurrentObjectStackCache();
	if (this->dialog != nullptr) {
		return JFileChooser::ERROR_OPTION;
	}
	if (approveButtonText != nullptr) {
		setApproveButtonText(approveButtonText);
		setDialogType(JFileChooser::CUSTOM_DIALOG);
	}
	$set(this, dialog, createDialog(parent));
	$nc(this->dialog)->addWindowListener($$new($JFileChooser$1, this));
	this->returnValue = JFileChooser::ERROR_OPTION;
	rescanCurrentDirectory();
	$nc(this->dialog)->show();
	firePropertyChange("JFileChooserDialogIsClosingProperty"_s, $of(this->dialog), ($Object*)nullptr);
	$nc($($nc(this->dialog)->getContentPane()))->removeAll();
	$nc(this->dialog)->dispose();
	$set(this, dialog, nullptr);
	return this->returnValue;
}

$JDialog* JFileChooser::createDialog($Component* parent) {
	$useLocalCurrentObjectStackCache();
	$var($FileChooserUI, ui, $cast($FileChooserUI, getUI()));
	$var($String, title, $nc(ui)->getDialogTitle(this));
	$init($AccessibleContext);
	putClientProperty($AccessibleContext::ACCESSIBLE_DESCRIPTION_PROPERTY, title);
	$var($JDialog, dialog, nullptr);
	$var($Window, window, $JOptionPane::getWindowForComponent(parent));
	if ($instanceOf($Frame, window)) {
		$assign(dialog, $new($JDialog, $cast($Frame, window), title, true));
	} else {
		$assign(dialog, $new($JDialog, $cast($Dialog, window), title, true));
	}
	$nc(dialog)->setComponentOrientation($(this->getComponentOrientation()));
	$var($Container, contentPane, dialog->getContentPane());
	$nc(contentPane)->setLayout($$new($BorderLayout));
	$init($BorderLayout);
	contentPane->add(static_cast<$Component*>(this), $of($BorderLayout::CENTER));
	if ($JDialog::isDefaultLookAndFeelDecorated()) {
		bool supportsWindowDecorations = $nc($($UIManager::getLookAndFeel()))->getSupportsWindowDecorations();
		if (supportsWindowDecorations) {
			$nc($(dialog->getRootPane()))->setWindowDecorationStyle($JRootPane::FILE_CHOOSER_DIALOG);
		}
	}
	dialog->pack();
	dialog->setLocationRelativeTo(parent);
	return dialog;
}

bool JFileChooser::getControlButtonsAreShown() {
	return this->controlsShown;
}

void JFileChooser::setControlButtonsAreShown(bool b) {
	if (this->controlsShown == b) {
		return;
	}
	bool oldValue = this->controlsShown;
	this->controlsShown = b;
	firePropertyChange(JFileChooser::CONTROL_BUTTONS_ARE_SHOWN_CHANGED_PROPERTY, oldValue, this->controlsShown);
}

int32_t JFileChooser::getDialogType() {
	return this->dialogType;
}

void JFileChooser::setDialogType(int32_t dialogType) {
	if (this->dialogType == dialogType) {
		return;
	}
	checkDialogType(dialogType);
	int32_t oldValue = this->dialogType;
	this->dialogType = dialogType;
	if (dialogType == JFileChooser::OPEN_DIALOG || dialogType == JFileChooser::SAVE_DIALOG) {
		setApproveButtonText(nullptr);
	}
	firePropertyChange(JFileChooser::DIALOG_TYPE_CHANGED_PROPERTY, oldValue, dialogType);
}

void JFileChooser::checkDialogType(int32_t dialogType) {
	$init(JFileChooser);
	$useLocalCurrentObjectStackCache();
	if (!(dialogType == JFileChooser::OPEN_DIALOG || dialogType == JFileChooser::SAVE_DIALOG || dialogType == JFileChooser::CUSTOM_DIALOG)) {
		$throwNew($IllegalArgumentException, $$str({"Incorrect Dialog Type: "_s, $$str(dialogType)}));
	}
}

void JFileChooser::setDialogTitle($String* dialogTitle) {
	$var($String, oldValue, this->dialogTitle);
	$set(this, dialogTitle, dialogTitle);
	if (this->dialog != nullptr) {
		$nc(this->dialog)->setTitle(dialogTitle);
	}
	firePropertyChange(JFileChooser::DIALOG_TITLE_CHANGED_PROPERTY, $of(oldValue), $of(dialogTitle));
}

$String* JFileChooser::getDialogTitle() {
	return this->dialogTitle;
}

void JFileChooser::setApproveButtonToolTipText($String* toolTipText) {
	if (this->approveButtonToolTipText == toolTipText) {
		return;
	}
	$var($String, oldValue, this->approveButtonToolTipText);
	$set(this, approveButtonToolTipText, toolTipText);
	firePropertyChange(JFileChooser::APPROVE_BUTTON_TOOL_TIP_TEXT_CHANGED_PROPERTY, $of(oldValue), $of(this->approveButtonToolTipText));
}

$String* JFileChooser::getApproveButtonToolTipText() {
	return this->approveButtonToolTipText;
}

int32_t JFileChooser::getApproveButtonMnemonic() {
	return this->approveButtonMnemonic;
}

void JFileChooser::setApproveButtonMnemonic(int32_t mnemonic) {
	if (this->approveButtonMnemonic == mnemonic) {
		return;
	}
	int32_t oldValue = this->approveButtonMnemonic;
	this->approveButtonMnemonic = mnemonic;
	firePropertyChange(JFileChooser::APPROVE_BUTTON_MNEMONIC_CHANGED_PROPERTY, oldValue, this->approveButtonMnemonic);
}

void JFileChooser::setApproveButtonMnemonic(char16_t mnemonic) {
	int32_t vk = (int32_t)mnemonic;
	if (vk >= u'a' && vk <= u'z') {
		vk -= (u'a' - u'A');
	}
	setApproveButtonMnemonic(vk);
}

void JFileChooser::setApproveButtonText($String* approveButtonText) {
	if (this->approveButtonText == approveButtonText) {
		return;
	}
	$var($String, oldValue, this->approveButtonText);
	$set(this, approveButtonText, approveButtonText);
	firePropertyChange(JFileChooser::APPROVE_BUTTON_TEXT_CHANGED_PROPERTY, $of(oldValue), $of(approveButtonText));
}

$String* JFileChooser::getApproveButtonText() {
	return this->approveButtonText;
}

$FileFilterArray* JFileChooser::getChoosableFileFilters() {
	$var($FileFilterArray, filterArray, $new($FileFilterArray, $nc(this->filters)->size()));
	$nc(this->filters)->copyInto(filterArray);
	return filterArray;
}

void JFileChooser::addChoosableFileFilter($FileFilter* filter) {
	$useLocalCurrentObjectStackCache();
	if (filter != nullptr && !$nc(this->filters)->contains(filter)) {
		$var($FileFilterArray, oldValue, getChoosableFileFilters());
		$nc(this->filters)->addElement(filter);
		firePropertyChange(JFileChooser::CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY, $of(oldValue), $($of(getChoosableFileFilters())));
		if (this->fileFilter == nullptr && $nc(this->filters)->size() == 1) {
			setFileFilter(filter);
		}
	}
}

bool JFileChooser::removeChoosableFileFilter($FileFilter* f) {
	$useLocalCurrentObjectStackCache();
	int32_t index = $nc(this->filters)->indexOf(f);
	if (index >= 0) {
		if (getFileFilter() == f) {
			$var($FileFilter, aaff, getAcceptAllFileFilter());
			if (isAcceptAllFileFilterUsed() && (aaff != f)) {
				setFileFilter(aaff);
			} else if (index > 0) {
				setFileFilter($cast($FileFilter, $($nc(this->filters)->get(0))));
			} else if ($nc(this->filters)->size() > 1) {
				setFileFilter($cast($FileFilter, $($nc(this->filters)->get(1))));
			} else {
				setFileFilter(nullptr);
			}
		}
		$var($FileFilterArray, oldValue, getChoosableFileFilters());
		$nc(this->filters)->removeElement(f);
		firePropertyChange(JFileChooser::CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY, $of(oldValue), $($of(getChoosableFileFilters())));
		return true;
	} else {
		return false;
	}
}

void JFileChooser::resetChoosableFileFilters() {
	$useLocalCurrentObjectStackCache();
	$var($FileFilterArray, oldValue, getChoosableFileFilters());
	setFileFilter(nullptr);
	$nc(this->filters)->removeAllElements();
	if (isAcceptAllFileFilterUsed()) {
		addChoosableFileFilter($(getAcceptAllFileFilter()));
	}
	firePropertyChange(JFileChooser::CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY, $of(oldValue), $($of(getChoosableFileFilters())));
}

$FileFilter* JFileChooser::getAcceptAllFileFilter() {
	$useLocalCurrentObjectStackCache();
	$var($FileFilter, filter, nullptr);
	if ($cast($FileChooserUI, getUI()) != nullptr) {
		$assign(filter, $nc($($cast($FileChooserUI, getUI())))->getAcceptAllFileFilter(this));
	}
	return filter;
}

bool JFileChooser::isAcceptAllFileFilterUsed() {
	return this->useAcceptAllFileFilter;
}

void JFileChooser::setAcceptAllFileFilterUsed(bool b) {
	$useLocalCurrentObjectStackCache();
	bool oldValue = this->useAcceptAllFileFilter;
	this->useAcceptAllFileFilter = b;
	if (!b) {
		removeChoosableFileFilter($(getAcceptAllFileFilter()));
	} else {
		removeChoosableFileFilter($(getAcceptAllFileFilter()));
		addChoosableFileFilter($(getAcceptAllFileFilter()));
	}
	firePropertyChange(JFileChooser::ACCEPT_ALL_FILE_FILTER_USED_CHANGED_PROPERTY, oldValue, this->useAcceptAllFileFilter);
}

$JComponent* JFileChooser::getAccessory() {
	return this->accessory;
}

void JFileChooser::setAccessory($JComponent* newAccessory) {
	$var($JComponent, oldValue, this->accessory);
	$set(this, accessory, newAccessory);
	firePropertyChange(JFileChooser::ACCESSORY_CHANGED_PROPERTY, $of(oldValue), $of(this->accessory));
}

void JFileChooser::setFileSelectionMode(int32_t mode) {
	if (this->fileSelectionMode == mode) {
		return;
	}
	checkFileSelectionMode(mode);
	int32_t oldValue = this->fileSelectionMode;
	this->fileSelectionMode = mode;
	firePropertyChange(JFileChooser::FILE_SELECTION_MODE_CHANGED_PROPERTY, oldValue, this->fileSelectionMode);
}

void JFileChooser::checkFileSelectionMode(int32_t mode) {
	$init(JFileChooser);
	$useLocalCurrentObjectStackCache();
	if ((mode != JFileChooser::FILES_ONLY) && (mode != JFileChooser::DIRECTORIES_ONLY) && (mode != JFileChooser::FILES_AND_DIRECTORIES)) {
		$throwNew($IllegalArgumentException, $$str({"Incorrect Mode for file selection: "_s, $$str(mode)}));
	}
}

int32_t JFileChooser::getFileSelectionMode() {
	return this->fileSelectionMode;
}

bool JFileChooser::isFileSelectionEnabled() {
	return ((this->fileSelectionMode == JFileChooser::FILES_ONLY) || (this->fileSelectionMode == JFileChooser::FILES_AND_DIRECTORIES));
}

bool JFileChooser::isDirectorySelectionEnabled() {
	return ((this->fileSelectionMode == JFileChooser::DIRECTORIES_ONLY) || (this->fileSelectionMode == JFileChooser::FILES_AND_DIRECTORIES));
}

void JFileChooser::setMultiSelectionEnabled(bool b) {
	if (this->multiSelectionEnabled == b) {
		return;
	}
	bool oldValue = this->multiSelectionEnabled;
	this->multiSelectionEnabled = b;
	firePropertyChange(JFileChooser::MULTI_SELECTION_ENABLED_CHANGED_PROPERTY, oldValue, this->multiSelectionEnabled);
}

bool JFileChooser::isMultiSelectionEnabled() {
	return this->multiSelectionEnabled;
}

bool JFileChooser::isFileHidingEnabled() {
	return this->useFileHiding;
}

void JFileChooser::setFileHidingEnabled(bool b) {
	if (this->showFilesListener != nullptr) {
		$nc($($Toolkit::getDefaultToolkit()))->removePropertyChangeListener(JFileChooser::SHOW_HIDDEN_PROP, this->showFilesListener);
		$set(this, showFilesListener, nullptr);
	}
	bool oldValue = this->useFileHiding;
	this->useFileHiding = b;
	firePropertyChange(JFileChooser::FILE_HIDING_CHANGED_PROPERTY, oldValue, this->useFileHiding);
}

void JFileChooser::setFileFilter($FileFilter* filter) {
	$useLocalCurrentObjectStackCache();
	$var($FileFilter, oldValue, this->fileFilter);
	$set(this, fileFilter, filter);
	if (filter != nullptr) {
		if (isMultiSelectionEnabled() && this->selectedFiles != nullptr && $nc(this->selectedFiles)->length > 0) {
			$var($Vector, fList, $new($Vector));
			bool failed = false;
			{
				$var($FileArray, arr$, this->selectedFiles);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($File, file, arr$->get(i$));
					{
						if (filter->accept(file)) {
							fList->add(file);
						} else {
							failed = true;
						}
					}
				}
			}
			if (failed) {
				setSelectedFiles((fList->size() == 0) ? ($FileArray*)nullptr : $fcast($FileArray, $(fList->toArray($$new($FileArray, fList->size())))));
			}
		} else if (this->selectedFile != nullptr && !filter->accept(this->selectedFile)) {
			setSelectedFile(nullptr);
		}
	}
	firePropertyChange(JFileChooser::FILE_FILTER_CHANGED_PROPERTY, $of(oldValue), $of(this->fileFilter));
}

$FileFilter* JFileChooser::getFileFilter() {
	return this->fileFilter;
}

void JFileChooser::setFileView($FileView* fileView) {
	$var($FileView, oldValue, this->fileView);
	$set(this, fileView, fileView);
	firePropertyChange(JFileChooser::FILE_VIEW_CHANGED_PROPERTY, $of(oldValue), $of(fileView));
}

$FileView* JFileChooser::getFileView() {
	return this->fileView;
}

$String* JFileChooser::getName($File* f) {
	$useLocalCurrentObjectStackCache();
	$var($String, filename, nullptr);
	if (f != nullptr) {
		if (getFileView() != nullptr) {
			$assign(filename, $nc($(getFileView()))->getName(f));
		}
		$var($FileView, uiFileView, $nc($($cast($FileChooserUI, getUI())))->getFileView(this));
		if (filename == nullptr && uiFileView != nullptr) {
			$assign(filename, uiFileView->getName(f));
		}
	}
	return filename;
}

$String* JFileChooser::getDescription($File* f) {
	$useLocalCurrentObjectStackCache();
	$var($String, description, nullptr);
	if (f != nullptr) {
		if (getFileView() != nullptr) {
			$assign(description, $nc($(getFileView()))->getDescription(f));
		}
		$var($FileView, uiFileView, $nc($($cast($FileChooserUI, getUI())))->getFileView(this));
		if (description == nullptr && uiFileView != nullptr) {
			$assign(description, uiFileView->getDescription(f));
		}
	}
	return description;
}

$String* JFileChooser::getTypeDescription($File* f) {
	$useLocalCurrentObjectStackCache();
	$var($String, typeDescription, nullptr);
	if (f != nullptr) {
		if (getFileView() != nullptr) {
			$assign(typeDescription, $nc($(getFileView()))->getTypeDescription(f));
		}
		$var($FileView, uiFileView, $nc($($cast($FileChooserUI, getUI())))->getFileView(this));
		if (typeDescription == nullptr && uiFileView != nullptr) {
			$assign(typeDescription, uiFileView->getTypeDescription(f));
		}
	}
	return typeDescription;
}

$Icon* JFileChooser::getIcon($File* f) {
	$useLocalCurrentObjectStackCache();
	$var($Icon, icon, nullptr);
	if (f != nullptr) {
		if (getFileView() != nullptr) {
			$assign(icon, $nc($(getFileView()))->getIcon(f));
		}
		$var($FileView, uiFileView, $nc($($cast($FileChooserUI, getUI())))->getFileView(this));
		if (icon == nullptr && uiFileView != nullptr) {
			$assign(icon, uiFileView->getIcon(f));
		}
	}
	return icon;
}

bool JFileChooser::isTraversable($File* f) {
	$useLocalCurrentObjectStackCache();
	$var($Boolean, traversable, nullptr);
	if (f != nullptr) {
		$var($FileView, fileView, getFileView());
		if (fileView != nullptr) {
			$assign(traversable, fileView->isTraversable(f));
		}
		$var($FileChooserUI, ui, $cast($FileChooserUI, getUI()));
		if (traversable == nullptr && ui != nullptr) {
			$var($FileView, uiFileView, ui->getFileView(this));
			if (uiFileView != nullptr) {
				$assign(traversable, uiFileView->isTraversable(f));
			}
		}
		$var($FileSystemView, fileSystemView, getFileSystemView());
		if (traversable == nullptr && fileSystemView != nullptr) {
			$assign(traversable, fileSystemView->isTraversable(f));
		}
	}
	return traversable != nullptr && traversable->booleanValue();
}

bool JFileChooser::accept($File* f) {
	$var($FileFilter, filter, this->fileFilter);
	return f == nullptr || filter == nullptr || $nc(filter)->accept(f);
}

void JFileChooser::setFileSystemView($FileSystemView* fsv) {
	$var($FileSystemView, oldValue, this->fileSystemView);
	$set(this, fileSystemView, fsv);
	firePropertyChange(JFileChooser::FILE_SYSTEM_VIEW_CHANGED_PROPERTY, $of(oldValue), $of(this->fileSystemView));
}

$FileSystemView* JFileChooser::getFileSystemView() {
	return this->fileSystemView;
}

void JFileChooser::approveSelection() {
	this->returnValue = JFileChooser::APPROVE_OPTION;
	if (this->dialog != nullptr) {
		$nc(this->dialog)->setVisible(false);
	}
	fireActionPerformed(JFileChooser::APPROVE_SELECTION);
}

void JFileChooser::cancelSelection() {
	this->returnValue = JFileChooser::CANCEL_OPTION;
	if (this->dialog != nullptr) {
		$nc(this->dialog)->setVisible(false);
	}
	fireActionPerformed(JFileChooser::CANCEL_SELECTION);
}

void JFileChooser::addActionListener($ActionListener* l) {
	$load($ActionListener);
	$nc(this->listenerList)->add($ActionListener::class$, l);
}

void JFileChooser::removeActionListener($ActionListener* l) {
	$load($ActionListener);
	$nc(this->listenerList)->remove($ActionListener::class$, l);
}

$ActionListenerArray* JFileChooser::getActionListeners() {
	$load($ActionListener);
	return $fcast($ActionListenerArray, $nc(this->listenerList)->getListeners($ActionListener::class$));
}

void JFileChooser::fireActionPerformed($String* command) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	int64_t mostRecentEventTime = $EventQueue::getMostRecentEventTime();
	int32_t modifiers = 0;
	$var($AWTEvent, currentEvent, $EventQueue::getCurrentEvent());
	if ($instanceOf($InputEvent, currentEvent)) {
		modifiers = $nc(($cast($InputEvent, currentEvent)))->getModifiers();
	} else if ($instanceOf($ActionEvent, currentEvent)) {
		modifiers = $nc(($cast($ActionEvent, currentEvent)))->getModifiers();
	}
	$var($ActionEvent, e, nullptr);
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ActionListener);
		if ($equals(listeners->get(i), $ActionListener::class$)) {
			if (e == nullptr) {
				$assign(e, $new($ActionEvent, this, $ActionEvent::ACTION_PERFORMED, command, mostRecentEventTime, modifiers));
			}
			$nc(($cast($ActionListener, listeners->get(i + 1))))->actionPerformed(e);
		}
	}
}

void JFileChooser::updateUI() {
	$useLocalCurrentObjectStackCache();
	if (isAcceptAllFileFilterUsed()) {
		removeChoosableFileFilter($(getAcceptAllFileFilter()));
	}
	$var($FileChooserUI, ui, $cast($FileChooserUI, $UIManager::getUI(this)));
	if (this->fileSystemView == nullptr) {
		setFileSystemView($($FileSystemView::getFileSystemView()));
	}
	setUI(ui);
	if (isAcceptAllFileFilterUsed()) {
		addChoosableFileFilter($(getAcceptAllFileFilter()));
	}
}

$String* JFileChooser::getUIClassID() {
	return JFileChooser::uiClassID;
}

$ComponentUI* JFileChooser::getUI() {
	return $cast($FileChooserUI, this->ui);
}

void JFileChooser::readObject($ObjectInputStream* in) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, f, $nc(in)->readFields());
	$set(this, dialogTitle, $cast($String, $nc(f)->get("dialogTitle"_s, ($Object*)nullptr)));
	$set(this, approveButtonText, $cast($String, f->get("approveButtonText"_s, ($Object*)nullptr)));
	$set(this, approveButtonToolTipText, $cast($String, f->get("approveButtonToolTipText"_s, ($Object*)nullptr)));
	this->approveButtonMnemonic = f->get("approveButtonMnemonic"_s, 0);
	$var($Vector, newFilters, $cast($Vector, f->get("filters"_s, ($Object*)nullptr)));
	if (newFilters == nullptr) {
		$throwNew($InvalidObjectException, "Null filters"_s);
	}
	$set(this, filters, newFilters);
	$set(this, dialog, $cast($JDialog, f->get("dialog"_s, ($Object*)nullptr)));
	int32_t newDialogType = f->get("dialogType"_s, JFileChooser::OPEN_DIALOG);
	checkDialogType(newDialogType);
	this->dialogType = newDialogType;
	this->returnValue = f->get("returnValue"_s, 0);
	$set(this, accessory, $cast($JComponent, f->get("accessory"_s, ($Object*)nullptr)));
	$set(this, fileView, $cast($FileView, f->get("fileView"_s, ($Object*)nullptr)));
	this->controlsShown = f->get("controlsShown"_s, false);
	this->useFileHiding = f->get("useFileHiding"_s, false);
	int32_t newFileSelectionMode = f->get("fileSelectionMode"_s, JFileChooser::FILES_ONLY);
	checkFileSelectionMode(newFileSelectionMode);
	this->fileSelectionMode = newFileSelectionMode;
	this->multiSelectionEnabled = f->get("multiSelectionEnabled"_s, false);
	this->useAcceptAllFileFilter = f->get("useAcceptAllFileFilter"_s, false);
	bool newDragEnabled = f->get("dragEnabled"_s, false);
	checkDragEnabled(newDragEnabled);
	this->dragEnabled = newDragEnabled;
	$set(this, fileFilter, $cast($FileFilter, f->get("fileFilter"_s, ($Object*)nullptr)));
	$set(this, fileSystemView, $cast($FileSystemView, f->get("fileSystemView"_s, ($Object*)nullptr)));
	$set(this, currentDirectory, $cast($File, f->get("currentDirectory"_s, ($Object*)nullptr)));
	$set(this, selectedFile, $cast($File, f->get("selectedFile"_s, ($Object*)nullptr)));
	$set(this, selectedFiles, $cast($FileArray, f->get("selectedFiles"_s, ($Object*)nullptr)));
	$set(this, accessibleContext, $cast($AccessibleContext, f->get("accessibleContext"_s, ($Object*)nullptr)));
	installShowFilesListener();
}

void JFileChooser::writeObject($ObjectOutputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($FileSystemView, fsv, nullptr);
	if (isAcceptAllFileFilterUsed()) {
		removeChoosableFileFilter($(getAcceptAllFileFilter()));
	}
	if ($nc($of(this->fileSystemView))->equals($($FileSystemView::getFileSystemView()))) {
		$assign(fsv, this->fileSystemView);
		$set(this, fileSystemView, nullptr);
	}
	$nc(s)->defaultWriteObject();
	if (fsv != nullptr) {
		$set(this, fileSystemView, fsv);
	}
	if (isAcceptAllFileFilterUsed()) {
		addChoosableFileFilter($(getAcceptAllFileFilter()));
	}
	if ($nc($(getUIClassID()))->equals(JFileChooser::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

$String* JFileChooser::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, approveButtonTextString, this->approveButtonText != nullptr ? this->approveButtonText : ""_s);
	$var($String, dialogTitleString, this->dialogTitle != nullptr ? this->dialogTitle : ""_s);
	$var($String, dialogTypeString, nullptr);
	if (this->dialogType == JFileChooser::OPEN_DIALOG) {
		$assign(dialogTypeString, "OPEN_DIALOG"_s);
	} else if (this->dialogType == JFileChooser::SAVE_DIALOG) {
		$assign(dialogTypeString, "SAVE_DIALOG"_s);
	} else if (this->dialogType == JFileChooser::CUSTOM_DIALOG) {
		$assign(dialogTypeString, "CUSTOM_DIALOG"_s);
	} else {
		$assign(dialogTypeString, ""_s);
	}
	$var($String, returnValueString, nullptr);
	if (this->returnValue == JFileChooser::CANCEL_OPTION) {
		$assign(returnValueString, "CANCEL_OPTION"_s);
	} else if (this->returnValue == JFileChooser::APPROVE_OPTION) {
		$assign(returnValueString, "APPROVE_OPTION"_s);
	} else if (this->returnValue == JFileChooser::ERROR_OPTION) {
		$assign(returnValueString, "ERROR_OPTION"_s);
	} else {
		$assign(returnValueString, ""_s);
	}
	$var($String, useFileHidingString, this->useFileHiding ? "true"_s : "false"_s);
	$var($String, fileSelectionModeString, nullptr);
	if (this->fileSelectionMode == JFileChooser::FILES_ONLY) {
		$assign(fileSelectionModeString, "FILES_ONLY"_s);
	} else if (this->fileSelectionMode == JFileChooser::DIRECTORIES_ONLY) {
		$assign(fileSelectionModeString, "DIRECTORIES_ONLY"_s);
	} else if (this->fileSelectionMode == JFileChooser::FILES_AND_DIRECTORIES) {
		$assign(fileSelectionModeString, "FILES_AND_DIRECTORIES"_s);
	} else {
		$assign(fileSelectionModeString, ""_s);
	}
	$var($String, currentDirectoryString, this->currentDirectory != nullptr ? $nc(this->currentDirectory)->toString() : ""_s);
	$var($String, selectedFileString, this->selectedFile != nullptr ? $nc(this->selectedFile)->toString() : ""_s);
	return $str({$($JComponent::paramString()), ",approveButtonText="_s, approveButtonTextString, ",currentDirectory="_s, currentDirectoryString, ",dialogTitle="_s, dialogTitleString, ",dialogType="_s, dialogTypeString, ",fileSelectionMode="_s, fileSelectionModeString, ",returnValue="_s, returnValueString, ",selectedFile="_s, selectedFileString, ",useFileHiding="_s, 
	useFileHidingString});
}

$AccessibleContext* JFileChooser::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JFileChooser$AccessibleJFileChooser, this));
	}
	return this->accessibleContext;
}

JFileChooser::JFileChooser() {
}

void clinit$JFileChooser($Class* class$) {
	$assignStatic(JFileChooser::uiClassID, "FileChooserUI"_s);
	$assignStatic(JFileChooser::CANCEL_SELECTION, "CancelSelection"_s);
	$assignStatic(JFileChooser::APPROVE_SELECTION, "ApproveSelection"_s);
	$assignStatic(JFileChooser::APPROVE_BUTTON_TEXT_CHANGED_PROPERTY, "ApproveButtonTextChangedProperty"_s);
	$assignStatic(JFileChooser::APPROVE_BUTTON_TOOL_TIP_TEXT_CHANGED_PROPERTY, "ApproveButtonToolTipTextChangedProperty"_s);
	$assignStatic(JFileChooser::APPROVE_BUTTON_MNEMONIC_CHANGED_PROPERTY, "ApproveButtonMnemonicChangedProperty"_s);
	$assignStatic(JFileChooser::CONTROL_BUTTONS_ARE_SHOWN_CHANGED_PROPERTY, "ControlButtonsAreShownChangedProperty"_s);
	$assignStatic(JFileChooser::DIRECTORY_CHANGED_PROPERTY, "directoryChanged"_s);
	$assignStatic(JFileChooser::SELECTED_FILE_CHANGED_PROPERTY, "SelectedFileChangedProperty"_s);
	$assignStatic(JFileChooser::SELECTED_FILES_CHANGED_PROPERTY, "SelectedFilesChangedProperty"_s);
	$assignStatic(JFileChooser::MULTI_SELECTION_ENABLED_CHANGED_PROPERTY, "MultiSelectionEnabledChangedProperty"_s);
	$assignStatic(JFileChooser::FILE_SYSTEM_VIEW_CHANGED_PROPERTY, "FileSystemViewChanged"_s);
	$assignStatic(JFileChooser::FILE_VIEW_CHANGED_PROPERTY, "fileViewChanged"_s);
	$assignStatic(JFileChooser::FILE_HIDING_CHANGED_PROPERTY, "FileHidingChanged"_s);
	$assignStatic(JFileChooser::FILE_FILTER_CHANGED_PROPERTY, "fileFilterChanged"_s);
	$assignStatic(JFileChooser::FILE_SELECTION_MODE_CHANGED_PROPERTY, "fileSelectionChanged"_s);
	$assignStatic(JFileChooser::ACCESSORY_CHANGED_PROPERTY, "AccessoryChangedProperty"_s);
	$assignStatic(JFileChooser::ACCEPT_ALL_FILE_FILTER_USED_CHANGED_PROPERTY, "acceptAllFileFilterUsedChanged"_s);
	$assignStatic(JFileChooser::DIALOG_TITLE_CHANGED_PROPERTY, "DialogTitleChangedProperty"_s);
	$assignStatic(JFileChooser::DIALOG_TYPE_CHANGED_PROPERTY, "DialogTypeChangedProperty"_s);
	$assignStatic(JFileChooser::CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY, "ChoosableFileFilterChangedProperty"_s);
	$assignStatic(JFileChooser::SHOW_HIDDEN_PROP, "awt.file.showHiddenFiles"_s);
}

$Class* JFileChooser::load$($String* name, bool initialize) {
	$loadClass(JFileChooser, name, initialize, &_JFileChooser_ClassInfo_, clinit$JFileChooser, allocate$JFileChooser);
	return class$;
}

$Class* JFileChooser::class$ = nullptr;

	} // swing
} // javax