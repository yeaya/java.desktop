#include <javax/swing/JTabbedPane.h>

#include <java/awt/Color.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/MouseEvent.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/EventListener.h>
#include <java/util/List.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/swing/DefaultSingleSelectionModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTabbedPane$AccessibleJTabbedPane.h>
#include <javax/swing/JTabbedPane$ModelListener.h>
#include <javax/swing/JTabbedPane$Page.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SingleSelectionModel.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/ToolTipManager.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TabbedPaneUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef ACCESSIBLE_NAME_PROPERTY
#undef ACCESSIBLE_STATE_PROPERTY
#undef ACCESSIBLE_VISIBLE_DATA_PROPERTY
#undef BOTTOM
#undef LEFT
#undef RIGHT
#undef SCROLL_TAB_LAYOUT
#undef SELECTED
#undef TOP
#undef WRAP_TAB_LAYOUT

using $ComponentArray = $Array<::java::awt::Component>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $ChangeListenerArray = $Array<::javax::swing::event::ChangeListener>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Rectangle = ::java::awt::Rectangle;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $EventListener = ::java::util::EventListener;
using $List = ::java::util::List;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $DefaultSingleSelectionModel = ::javax::swing::DefaultSingleSelectionModel;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JTabbedPane$AccessibleJTabbedPane = ::javax::swing::JTabbedPane$AccessibleJTabbedPane;
using $JTabbedPane$ModelListener = ::javax::swing::JTabbedPane$ModelListener;
using $JTabbedPane$Page = ::javax::swing::JTabbedPane$Page;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SingleSelectionModel = ::javax::swing::SingleSelectionModel;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ToolTipManager = ::javax::swing::ToolTipManager;
using $UIManager = ::javax::swing::UIManager;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TabbedPaneUI = ::javax::swing::plaf::TabbedPaneUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {

$NamedAttribute JTabbedPane_Attribute_var$0[] = {
	{"defaultProperty", 's', "UI"},
	{"description", 's', "A component which provides a tab folder metaphor for displaying one component from a set of components."},
	{}
};

$CompoundAttribute _JTabbedPane_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JTabbedPane_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", nullptr},
	{}
};

$NamedAttribute JTabbedPane_Attribute_var$1[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTabbedPane_MethodAnnotations_getAccessibleContext22[] = {
	{"Ljava/beans/BeanProperty;", JTabbedPane_Attribute_var$1},
	{}
};

$NamedAttribute JTabbedPane_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTabbedPane_MethodAnnotations_getChangeListeners25[] = {
	{"Ljava/beans/BeanProperty;", JTabbedPane_Attribute_var$2},
	{}
};

$CompoundAttribute _JTabbedPane_MethodAnnotations_getSelectedComponent33[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$CompoundAttribute _JTabbedPane_MethodAnnotations_getSelectedIndex34[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$NamedAttribute JTabbedPane_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTabbedPane_MethodAnnotations_getTabCount36[] = {
	{"Ljava/beans/BeanProperty;", JTabbedPane_Attribute_var$3},
	{}
};

$NamedAttribute JTabbedPane_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTabbedPane_MethodAnnotations_getTabRunCount39[] = {
	{"Ljava/beans/BeanProperty;", JTabbedPane_Attribute_var$4},
	{}
};

$NamedAttribute JTabbedPane_Attribute_var$5[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTabbedPane_MethodAnnotations_getUIClassID44[] = {
	{"Ljava/beans/BeanProperty;", JTabbedPane_Attribute_var$5},
	{}
};

$NamedAttribute JTabbedPane_Attribute_var$6[] = {
	{"preferred", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The background color at the specified tab index."},
	{}
};

$CompoundAttribute _JTabbedPane_MethodAnnotations_setBackgroundAt59[] = {
	{"Ljava/beans/BeanProperty;", JTabbedPane_Attribute_var$6},
	{}
};

$NamedAttribute JTabbedPane_Attribute_var$7[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The component at the specified tab index."},
	{}
};

$CompoundAttribute _JTabbedPane_MethodAnnotations_setComponentAt60[] = {
	{"Ljava/beans/BeanProperty;", JTabbedPane_Attribute_var$7},
	{}
};

$NamedAttribute JTabbedPane_Attribute_var$8[] = {
	{"preferred", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The disabled icon at the specified tab index."},
	{}
};

$CompoundAttribute _JTabbedPane_MethodAnnotations_setDisabledIconAt61[] = {
	{"Ljava/beans/BeanProperty;", JTabbedPane_Attribute_var$8},
	{}
};

$NamedAttribute JTabbedPane_Attribute_var$9[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "the index into the String to draw the keyboard character mnemonic at"},
	{}
};

$CompoundAttribute _JTabbedPane_MethodAnnotations_setDisplayedMnemonicIndexAt62[] = {
	{"Ljava/beans/BeanProperty;", JTabbedPane_Attribute_var$9},
	{}
};

$NamedAttribute JTabbedPane_Attribute_var$10[] = {
	{"preferred", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The foreground color at the specified tab index."},
	{}
};

$CompoundAttribute _JTabbedPane_MethodAnnotations_setForegroundAt64[] = {
	{"Ljava/beans/BeanProperty;", JTabbedPane_Attribute_var$10},
	{}
};

$NamedAttribute JTabbedPane_Attribute_var$11[] = {
	{"preferred", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The icon at the specified tab index."},
	{}
};

$CompoundAttribute _JTabbedPane_MethodAnnotations_setIconAt65[] = {
	{"Ljava/beans/BeanProperty;", JTabbedPane_Attribute_var$11},
	{}
};

$NamedAttribute JTabbedPane_Attribute_var$12[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The keyboard mnenmonic, as a KeyEvent VK constant, for the specified tab"},
	{}
};

$CompoundAttribute _JTabbedPane_MethodAnnotations_setMnemonicAt66[] = {
	{"Ljava/beans/BeanProperty;", JTabbedPane_Attribute_var$12},
	{}
};

$NamedAttribute JTabbedPane_Attribute_var$13[] = {
	{"description", 's', "The tabbedpane\'s SingleSelectionModel."},
	{}
};

$CompoundAttribute _JTabbedPane_MethodAnnotations_setModel67[] = {
	{"Ljava/beans/BeanProperty;", JTabbedPane_Attribute_var$13},
	{}
};

$NamedAttribute JTabbedPane_Attribute_var$14[] = {
	{"bound", 'Z', "false"},
	{"preferred", 'Z', "true"},
	{"description", 's', "The tabbedpane\'s selected component."},
	{}
};

$CompoundAttribute _JTabbedPane_MethodAnnotations_setSelectedComponent68[] = {
	{"Ljava/beans/BeanProperty;", JTabbedPane_Attribute_var$14},
	{}
};

$NamedAttribute JTabbedPane_Attribute_var$15[] = {
	{"bound", 'Z', "false"},
	{"preferred", 'Z', "true"},
	{"description", 's', "The tabbedpane\'s selected tab index."},
	{}
};

$CompoundAttribute _JTabbedPane_MethodAnnotations_setSelectedIndex69[] = {
	{"Ljava/beans/BeanProperty;", JTabbedPane_Attribute_var$15},
	{}
};

$NamedAttribute JTabbedPane_Attribute_var$16[] = {
	{"preferred", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The tab component at the specified tab index."},
	{}
};

$CompoundAttribute _JTabbedPane_MethodAnnotations_setTabComponentAt71[] = {
	{"Ljava/beans/BeanProperty;", JTabbedPane_Attribute_var$16},
	{}
};

$Attribute JTabbedPane_Attribute_var$18[] = {
	{'s', "JTabbedPane.WRAP_TAB_LAYOUT"},
	{'s', "JTabbedPane.SCROLL_TAB_LAYOUT"},
	{'-'}
};

$NamedAttribute JTabbedPane_Attribute_var$17[] = {
	{"preferred", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"enumerationValues", '[', JTabbedPane_Attribute_var$18},
	{"description", 's', "The tabbedpane\'s policy for laying out the tabs"},
	{}
};

$CompoundAttribute _JTabbedPane_MethodAnnotations_setTabLayoutPolicy72[] = {
	{"Ljava/beans/BeanProperty;", JTabbedPane_Attribute_var$17},
	{}
};

$Attribute JTabbedPane_Attribute_var$20[] = {
	{'s', "JTabbedPane.TOP"},
	{'s', "JTabbedPane.LEFT"},
	{'s', "JTabbedPane.BOTTOM"},
	{'s', "JTabbedPane.RIGHT"},
	{'-'}
};

$NamedAttribute JTabbedPane_Attribute_var$19[] = {
	{"preferred", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"enumerationValues", '[', JTabbedPane_Attribute_var$20},
	{"description", 's', "The tabbedpane\'s tab placement."},
	{}
};

$CompoundAttribute _JTabbedPane_MethodAnnotations_setTabPlacement73[] = {
	{"Ljava/beans/BeanProperty;", JTabbedPane_Attribute_var$19},
	{}
};

$NamedAttribute JTabbedPane_Attribute_var$21[] = {
	{"preferred", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The title at the specified tab index."},
	{}
};

$CompoundAttribute _JTabbedPane_MethodAnnotations_setTitleAt74[] = {
	{"Ljava/beans/BeanProperty;", JTabbedPane_Attribute_var$21},
	{}
};

$NamedAttribute JTabbedPane_Attribute_var$22[] = {
	{"preferred", 'Z', "true"},
	{"description", 's', "The tooltip text at the specified tab index."},
	{}
};

$CompoundAttribute _JTabbedPane_MethodAnnotations_setToolTipTextAt75[] = {
	{"Ljava/beans/BeanProperty;", JTabbedPane_Attribute_var$22},
	{}
};

$NamedAttribute JTabbedPane_Attribute_var$23[] = {
	{"hidden", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The UI object that implements the tabbedpane\'s LookAndFeel"},
	{}
};

$CompoundAttribute _JTabbedPane_MethodAnnotations_setUI76[] = {
	{"Ljava/beans/BeanProperty;", JTabbedPane_Attribute_var$23},
	{}
};

$FieldInfo _JTabbedPane_FieldInfo_[] = {
	{"WRAP_TAB_LAYOUT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JTabbedPane, WRAP_TAB_LAYOUT)},
	{"SCROLL_TAB_LAYOUT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JTabbedPane, SCROLL_TAB_LAYOUT)},
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JTabbedPane, uiClassID)},
	{"tabPlacement", "I", nullptr, $PROTECTED, $field(JTabbedPane, tabPlacement)},
	{"tabLayoutPolicy", "I", nullptr, $PRIVATE, $field(JTabbedPane, tabLayoutPolicy)},
	{"model", "Ljavax/swing/SingleSelectionModel;", nullptr, $PROTECTED, $field(JTabbedPane, model)},
	{"haveRegistered", "Z", nullptr, $PRIVATE, $field(JTabbedPane, haveRegistered)},
	{"changeListener", "Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED, $field(JTabbedPane, changeListener)},
	{"pages", "Ljava/util/List;", "Ljava/util/List<Ljavax/swing/JTabbedPane$Page;>;", $PRIVATE, $field(JTabbedPane, pages)},
	{"visComp", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(JTabbedPane, visComp)},
	{"changeEvent", "Ljavax/swing/event/ChangeEvent;", nullptr, $PROTECTED | $TRANSIENT, $field(JTabbedPane, changeEvent)},
	{}
};

$MethodInfo _JTabbedPane_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTabbedPane::*)()>(&JTabbedPane::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(JTabbedPane::*)(int32_t)>(&JTabbedPane::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(JTabbedPane::*)(int32_t,int32_t)>(&JTabbedPane::init$))},
	{"access$000", "(Ljavax/swing/JTabbedPane;)Ljavax/accessibility/AccessibleContext;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$AccessibleContext*(*)(JTabbedPane*)>(&JTabbedPane::access$000))},
	{"access$100", "(Ljavax/swing/JTabbedPane;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(JTabbedPane*,$String*,Object$*,Object$*)>(&JTabbedPane::access$100))},
	{"add", "(Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"add", "(Ljava/lang/String;Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"add", "(Ljava/awt/Component;I)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"add", "(Ljava/awt/Component;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"add", "(Ljava/awt/Component;Ljava/lang/Object;I)V", nullptr, $PUBLIC},
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"addTab", "(Ljava/lang/String;Ljavax/swing/Icon;Ljava/awt/Component;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addTab", "(Ljava/lang/String;Ljavax/swing/Icon;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"addTab", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"changeAccessibleSelection", "(Ljavax/swing/JTabbedPane$Page;Ljava/lang/String;Ljavax/swing/JTabbedPane$Page;)V", nullptr, $PRIVATE, $method(static_cast<void(JTabbedPane::*)($JTabbedPane$Page*,$String*,$JTabbedPane$Page*)>(&JTabbedPane::changeAccessibleSelection))},
	{"checkIndex", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(JTabbedPane::*)(int32_t)>(&JTabbedPane::checkIndex))},
	{"checkTabLayoutPolicy", "(I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t)>(&JTabbedPane::checkTabLayoutPolicy))},
	{"checkTabPlacement", "(I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t)>(&JTabbedPane::checkTabPlacement))},
	{"clearAccessibleParent", "(Ljava/awt/Component;)V", nullptr, $PRIVATE, $method(static_cast<void(JTabbedPane::*)($Component*)>(&JTabbedPane::clearAccessibleParent))},
	{"compWriteObjectNotify", "()V", nullptr, 0},
	{"createChangeListener", "()Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED},
	{"fireStateChanged", "()V", nullptr, $PROTECTED},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTabbedPane_MethodAnnotations_getAccessibleContext22},
	{"getBackgroundAt", "(I)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getBoundsAt", "(I)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getChangeListeners", "()[Ljavax/swing/event/ChangeListener;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTabbedPane_MethodAnnotations_getChangeListeners25},
	{"getComponentAt", "(I)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getDisabledIconAt", "(I)Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getDisplayedMnemonicIndexAt", "(I)I", nullptr, $PUBLIC},
	{"getForegroundAt", "(I)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getIconAt", "(I)Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getMnemonicAt", "(I)I", nullptr, $PUBLIC},
	{"getModel", "()Ljavax/swing/SingleSelectionModel;", nullptr, $PUBLIC},
	{"getSelectedComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTabbedPane_MethodAnnotations_getSelectedComponent33},
	{"getSelectedIndex", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTabbedPane_MethodAnnotations_getSelectedIndex34},
	{"getTabComponentAt", "(I)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getTabCount", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTabbedPane_MethodAnnotations_getTabCount36},
	{"getTabLayoutPolicy", "()I", nullptr, $PUBLIC},
	{"getTabPlacement", "()I", nullptr, $PUBLIC},
	{"getTabRunCount", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTabbedPane_MethodAnnotations_getTabRunCount39},
	{"getTitleAt", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getToolTipText", "(Ljava/awt/event/MouseEvent;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getToolTipTextAt", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUI", "()Ljavax/swing/plaf/TabbedPaneUI;", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTabbedPane_MethodAnnotations_getUIClassID44},
	{"indexAtLocation", "(II)I", nullptr, $PUBLIC},
	{"indexOfComponent", "(Ljava/awt/Component;)I", nullptr, $PUBLIC},
	{"indexOfTab", "(Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"indexOfTab", "(Ljavax/swing/Icon;)I", nullptr, $PUBLIC},
	{"indexOfTabComponent", "(Ljava/awt/Component;)I", nullptr, $PUBLIC},
	{"insertTab", "(Ljava/lang/String;Ljavax/swing/Icon;Ljava/awt/Component;Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"isEnabledAt", "(I)Z", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JTabbedPane::*)($ObjectInputStream*)>(&JTabbedPane::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"remove", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"remove", "(I)V", nullptr, $PUBLIC},
	{"removeAll", "()V", nullptr, $PUBLIC},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"removeTabAt", "(I)V", nullptr, $PUBLIC},
	{"setBackgroundAt", "(ILjava/awt/Color;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTabbedPane_MethodAnnotations_setBackgroundAt59},
	{"setComponentAt", "(ILjava/awt/Component;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTabbedPane_MethodAnnotations_setComponentAt60},
	{"setDisabledIconAt", "(ILjavax/swing/Icon;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTabbedPane_MethodAnnotations_setDisabledIconAt61},
	{"setDisplayedMnemonicIndexAt", "(II)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTabbedPane_MethodAnnotations_setDisplayedMnemonicIndexAt62},
	{"setEnabledAt", "(IZ)V", nullptr, $PUBLIC},
	{"setForegroundAt", "(ILjava/awt/Color;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTabbedPane_MethodAnnotations_setForegroundAt64},
	{"setIconAt", "(ILjavax/swing/Icon;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTabbedPane_MethodAnnotations_setIconAt65},
	{"setMnemonicAt", "(II)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTabbedPane_MethodAnnotations_setMnemonicAt66},
	{"setModel", "(Ljavax/swing/SingleSelectionModel;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTabbedPane_MethodAnnotations_setModel67},
	{"setSelectedComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTabbedPane_MethodAnnotations_setSelectedComponent68},
	{"setSelectedIndex", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTabbedPane_MethodAnnotations_setSelectedIndex69},
	{"setSelectedIndexImpl", "(IZ)V", nullptr, $PRIVATE, $method(static_cast<void(JTabbedPane::*)(int32_t,bool)>(&JTabbedPane::setSelectedIndexImpl))},
	{"setTabComponentAt", "(ILjava/awt/Component;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTabbedPane_MethodAnnotations_setTabComponentAt71},
	{"setTabLayoutPolicy", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTabbedPane_MethodAnnotations_setTabLayoutPolicy72},
	{"setTabPlacement", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTabbedPane_MethodAnnotations_setTabPlacement73},
	{"setTitleAt", "(ILjava/lang/String;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTabbedPane_MethodAnnotations_setTitleAt74},
	{"setToolTipTextAt", "(ILjava/lang/String;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTabbedPane_MethodAnnotations_setToolTipTextAt75},
	{"setUI", "(Ljavax/swing/plaf/TabbedPaneUI;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTabbedPane_MethodAnnotations_setUI76},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JTabbedPane::*)($ObjectOutputStream*)>(&JTabbedPane::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JTabbedPane_InnerClassesInfo_[] = {
	{"javax.swing.JTabbedPane$Page", "javax.swing.JTabbedPane", "Page", $PRIVATE},
	{"javax.swing.JTabbedPane$AccessibleJTabbedPane", "javax.swing.JTabbedPane", "AccessibleJTabbedPane", $PROTECTED},
	{"javax.swing.JTabbedPane$ModelListener", "javax.swing.JTabbedPane", "ModelListener", $PROTECTED},
	{}
};

$ClassInfo _JTabbedPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JTabbedPane",
	"javax.swing.JComponent",
	"javax.accessibility.Accessible,javax.swing.SwingConstants",
	_JTabbedPane_FieldInfo_,
	_JTabbedPane_MethodInfo_,
	nullptr,
	nullptr,
	_JTabbedPane_InnerClassesInfo_,
	_JTabbedPane_Annotations_,
	nullptr,
	"javax.swing.JTabbedPane$Page,javax.swing.JTabbedPane$AccessibleJTabbedPane,javax.swing.JTabbedPane$ModelListener"
};

$Object* allocate$JTabbedPane($Class* clazz) {
	return $of($alloc(JTabbedPane));
}

$String* JTabbedPane::toString() {
	 return this->$JComponent::toString();
}

int32_t JTabbedPane::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JTabbedPane::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JTabbedPane::clone() {
	 return this->$JComponent::clone();
}

void JTabbedPane::finalize() {
	this->$JComponent::finalize();
}

$String* JTabbedPane::uiClassID = nullptr;

void JTabbedPane::access$100(JTabbedPane* x0, $String* x1, Object$* x2, Object$* x3) {
	$init(JTabbedPane);
	$nc(x0)->firePropertyChange(x1, x2, x3);
}

$AccessibleContext* JTabbedPane::access$000(JTabbedPane* x0) {
	$init(JTabbedPane);
	return $nc(x0)->accessibleContext;
}

void JTabbedPane::init$() {
	JTabbedPane::init$($SwingConstants::TOP, JTabbedPane::WRAP_TAB_LAYOUT);
}

void JTabbedPane::init$(int32_t tabPlacement) {
	JTabbedPane::init$(tabPlacement, JTabbedPane::WRAP_TAB_LAYOUT);
}

void JTabbedPane::init$(int32_t tabPlacement, int32_t tabLayoutPolicy) {
	$JComponent::init$();
	this->tabPlacement = $SwingConstants::TOP;
	$set(this, changeListener, nullptr);
	$set(this, visComp, nullptr);
	$set(this, changeEvent, nullptr);
	setTabPlacement(tabPlacement);
	setTabLayoutPolicy(tabLayoutPolicy);
	$set(this, pages, $new($ArrayList, 1));
	setModel($$new($DefaultSingleSelectionModel));
	updateUI();
}

$ComponentUI* JTabbedPane::getUI() {
	return $cast($TabbedPaneUI, this->ui);
}

void JTabbedPane::setUI($TabbedPaneUI* ui) {
	$useLocalCurrentObjectStackCache();
	$JComponent::setUI(ui);
	for (int32_t i = 0; i < getTabCount(); ++i) {
		$var($Icon, icon, $nc(($cast($JTabbedPane$Page, $($nc(this->pages)->get(i)))))->disabledIcon);
		if ($instanceOf($UIResource, icon)) {
			setDisabledIconAt(i, nullptr);
		}
	}
}

void JTabbedPane::updateUI() {
	setUI($cast($TabbedPaneUI, $($UIManager::getUI(this))));
}

$String* JTabbedPane::getUIClassID() {
	return JTabbedPane::uiClassID;
}

$ChangeListener* JTabbedPane::createChangeListener() {
	return $new($JTabbedPane$ModelListener, this);
}

void JTabbedPane::addChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->add($ChangeListener::class$, l);
}

void JTabbedPane::removeChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->remove($ChangeListener::class$, l);
}

$ChangeListenerArray* JTabbedPane::getChangeListeners() {
	$load($ChangeListener);
	return $fcast($ChangeListenerArray, $nc(this->listenerList)->getListeners($ChangeListener::class$));
}

void JTabbedPane::fireStateChanged() {
	$useLocalCurrentObjectStackCache();
	int32_t selIndex = getSelectedIndex();
	if (selIndex < 0) {
		if (this->visComp != nullptr && $nc(this->visComp)->isVisible()) {
			$nc(this->visComp)->setVisible(false);
		}
		$set(this, visComp, nullptr);
	} else {
		$var($Component, newComp, getComponentAt(selIndex));
		if (newComp != nullptr && newComp != this->visComp) {
			bool shouldChangeFocus = false;
			if (this->visComp != nullptr) {
				shouldChangeFocus = ($SwingUtilities::findFocusOwner(this->visComp) != nullptr);
				if ($nc(this->visComp)->isVisible()) {
					$nc(this->visComp)->setVisible(false);
				}
			}
			if (!newComp->isVisible()) {
				newComp->setVisible(true);
			}
			if (shouldChangeFocus) {
				$SwingUtilities2::tabbedPaneChangeFocusTo(newComp);
			}
			$set(this, visComp, newComp);
		}
	}
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ChangeListener);
		if ($equals(listeners->get(i), $ChangeListener::class$)) {
			if (this->changeEvent == nullptr) {
				$set(this, changeEvent, $new($ChangeEvent, this));
			}
			$nc(($cast($ChangeListener, listeners->get(i + 1))))->stateChanged(this->changeEvent);
		}
	}
}

$SingleSelectionModel* JTabbedPane::getModel() {
	return this->model;
}

void JTabbedPane::setModel($SingleSelectionModel* model) {
	$var($SingleSelectionModel, oldModel, getModel());
	if (oldModel != nullptr) {
		oldModel->removeChangeListener(this->changeListener);
		$set(this, changeListener, nullptr);
	}
	$set(this, model, model);
	if (model != nullptr) {
		$set(this, changeListener, createChangeListener());
		model->addChangeListener(this->changeListener);
	}
	firePropertyChange("model"_s, $of(oldModel), $of(model));
	repaint();
}

int32_t JTabbedPane::getTabPlacement() {
	return this->tabPlacement;
}

void JTabbedPane::setTabPlacement(int32_t tabPlacement) {
	checkTabPlacement(tabPlacement);
	if (this->tabPlacement != tabPlacement) {
		int32_t oldValue = this->tabPlacement;
		this->tabPlacement = tabPlacement;
		firePropertyChange("tabPlacement"_s, oldValue, tabPlacement);
		revalidate();
		repaint();
	}
}

void JTabbedPane::checkTabPlacement(int32_t tabPlacement) {
	$init(JTabbedPane);
	if (tabPlacement != $SwingConstants::TOP && tabPlacement != $SwingConstants::LEFT && tabPlacement != $SwingConstants::BOTTOM && tabPlacement != $SwingConstants::RIGHT) {
		$throwNew($IllegalArgumentException, "illegal tab placement: must be TOP, BOTTOM, LEFT, or RIGHT"_s);
	}
}

int32_t JTabbedPane::getTabLayoutPolicy() {
	return this->tabLayoutPolicy;
}

void JTabbedPane::setTabLayoutPolicy(int32_t tabLayoutPolicy) {
	checkTabLayoutPolicy(tabLayoutPolicy);
	if (this->tabLayoutPolicy != tabLayoutPolicy) {
		int32_t oldValue = this->tabLayoutPolicy;
		this->tabLayoutPolicy = tabLayoutPolicy;
		firePropertyChange("tabLayoutPolicy"_s, oldValue, tabLayoutPolicy);
		revalidate();
		repaint();
	}
}

void JTabbedPane::checkTabLayoutPolicy(int32_t tabLayoutPolicy) {
	$init(JTabbedPane);
	if (tabLayoutPolicy != JTabbedPane::WRAP_TAB_LAYOUT && tabLayoutPolicy != JTabbedPane::SCROLL_TAB_LAYOUT) {
		$throwNew($IllegalArgumentException, "illegal tab layout policy: must be WRAP_TAB_LAYOUT or SCROLL_TAB_LAYOUT"_s);
	}
}

int32_t JTabbedPane::getSelectedIndex() {
	return $nc(this->model)->getSelectedIndex();
}

void JTabbedPane::setSelectedIndex(int32_t index) {
	if (index != -1) {
		checkIndex(index);
	}
	setSelectedIndexImpl(index, true);
}

void JTabbedPane::setSelectedIndexImpl(int32_t index, bool doAccessibleChanges) {
	$useLocalCurrentObjectStackCache();
	int32_t oldIndex = $nc(this->model)->getSelectedIndex();
	$var($JTabbedPane$Page, oldPage, nullptr);
	$var($JTabbedPane$Page, newPage, nullptr);
	$var($String, oldName, nullptr);
	doAccessibleChanges = doAccessibleChanges && (oldIndex != index);
	if (doAccessibleChanges) {
		if (this->accessibleContext != nullptr) {
			$assign(oldName, $nc(this->accessibleContext)->getAccessibleName());
		}
		if (oldIndex >= 0) {
			$assign(oldPage, $cast($JTabbedPane$Page, $nc(this->pages)->get(oldIndex)));
		}
		if (index >= 0) {
			$assign(newPage, $cast($JTabbedPane$Page, $nc(this->pages)->get(index)));
		}
	}
	$nc(this->model)->setSelectedIndex(index);
	if (doAccessibleChanges) {
		changeAccessibleSelection(oldPage, oldName, newPage);
	}
}

void JTabbedPane::changeAccessibleSelection($JTabbedPane$Page* oldPage, $String* oldName, $JTabbedPane$Page* newPage) {
	if (this->accessibleContext == nullptr) {
		return;
	}
	if (oldPage != nullptr) {
		$init($AccessibleContext);
		$init($AccessibleState);
		oldPage->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, $AccessibleState::SELECTED, nullptr);
	}
	if (newPage != nullptr) {
		$init($AccessibleContext);
		$init($AccessibleState);
		newPage->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, $AccessibleState::SELECTED);
	}
	$init($AccessibleContext);
	$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_NAME_PROPERTY, oldName, $($nc(this->accessibleContext)->getAccessibleName()));
}

$Component* JTabbedPane::getSelectedComponent() {
	int32_t index = getSelectedIndex();
	if (index == -1) {
		return nullptr;
	}
	return getComponentAt(index);
}

void JTabbedPane::setSelectedComponent($Component* c) {
	int32_t index = indexOfComponent(c);
	if (index != -1) {
		setSelectedIndex(index);
	} else {
		$throwNew($IllegalArgumentException, "component not found in tabbed pane"_s);
	}
}

void JTabbedPane::insertTab($String* title, $Icon* icon, $Component* component, $String* tip, int32_t index) {
	$useLocalCurrentObjectStackCache();
	int32_t newIndex = index;
	int32_t removeIndex = indexOfComponent(component);
	if (component != nullptr && removeIndex != -1) {
		removeTabAt(removeIndex);
		if (newIndex > removeIndex) {
			--newIndex;
		}
	}
	int32_t selectedIndex = getSelectedIndex();
	$nc(this->pages)->add(newIndex, $$new($JTabbedPane$Page, this, this, title != nullptr ? title : ""_s, icon, nullptr, component, tip));
	if (component != nullptr) {
		addImpl(component, nullptr, -1);
		component->setVisible(false);
	} else {
		firePropertyChange("indexForNullComponent"_s, -1, index);
	}
	if ($nc(this->pages)->size() == 1) {
		setSelectedIndex(0);
	}
	if (selectedIndex >= newIndex) {
		setSelectedIndexImpl(selectedIndex + 1, false);
	}
	if (!this->haveRegistered && tip != nullptr) {
		$nc($($ToolTipManager::sharedInstance()))->registerComponent(this);
		this->haveRegistered = true;
	}
	if (this->accessibleContext != nullptr) {
		$init($AccessibleContext);
		$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY, nullptr, component);
	}
	revalidate();
	repaint();
}

void JTabbedPane::addTab($String* title, $Icon* icon, $Component* component, $String* tip) {
	insertTab(title, icon, component, tip, $nc(this->pages)->size());
}

void JTabbedPane::addTab($String* title, $Icon* icon, $Component* component) {
	insertTab(title, icon, component, nullptr, $nc(this->pages)->size());
}

void JTabbedPane::addTab($String* title, $Component* component) {
	insertTab(title, nullptr, component, nullptr, $nc(this->pages)->size());
}

$Component* JTabbedPane::add($Component* component) {
	if (!($instanceOf($UIResource, component))) {
		addTab($($nc(component)->getName()), component);
	} else {
		$JComponent::add(component);
	}
	return component;
}

$Component* JTabbedPane::add($String* title, $Component* component) {
	if (!($instanceOf($UIResource, component))) {
		addTab(title, component);
	} else {
		$JComponent::add(title, component);
	}
	return component;
}

$Component* JTabbedPane::add($Component* component, int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($UIResource, component))) {
		$var($String, var$0, $nc(component)->getName());
		$var($Component, var$1, component);
		insertTab(var$0, nullptr, var$1, nullptr, index == -1 ? getTabCount() : index);
	} else {
		$JComponent::add(component, index);
	}
	return component;
}

void JTabbedPane::add($Component* component, Object$* constraints) {
	if (!($instanceOf($UIResource, component))) {
		if ($instanceOf($String, constraints)) {
			addTab($cast($String, constraints), component);
		} else if ($instanceOf($Icon, constraints)) {
			addTab(nullptr, $cast($Icon, constraints), component);
		} else {
			add(component);
		}
	} else {
		$JComponent::add(component, constraints);
	}
}

void JTabbedPane::add($Component* component, Object$* constraints, int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($UIResource, component))) {
		$var($Icon, icon, $instanceOf($Icon, constraints) ? $cast($Icon, constraints) : ($Icon*)nullptr);
		$var($String, title, $instanceOf($String, constraints) ? $cast($String, constraints) : ($String*)nullptr);
		insertTab(title, icon, component, nullptr, index == -1 ? getTabCount() : index);
	} else {
		$JComponent::add(component, constraints, index);
	}
}

void JTabbedPane::clearAccessibleParent($Component* c) {
	$var($AccessibleContext, ac, $nc(c)->getAccessibleContext());
	if (ac != nullptr) {
		ac->setAccessibleParent(nullptr);
	}
}

void JTabbedPane::removeTabAt(int32_t index) {
	$useLocalCurrentObjectStackCache();
	checkIndex(index);
	$var($Component, component, getComponentAt(index));
	bool shouldChangeFocus = false;
	int32_t selected = getSelectedIndex();
	$var($String, oldName, nullptr);
	if (component == this->visComp) {
		shouldChangeFocus = ($SwingUtilities::findFocusOwner(this->visComp) != nullptr);
		$set(this, visComp, nullptr);
	}
	if (this->accessibleContext != nullptr) {
		if (index == selected) {
			$init($AccessibleContext);
			$init($AccessibleState);
			$nc(($cast($JTabbedPane$Page, $($nc(this->pages)->get(index)))))->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, $AccessibleState::SELECTED, nullptr);
			$assign(oldName, $nc(this->accessibleContext)->getAccessibleName());
		}
		$init($AccessibleContext);
		$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY, component, nullptr);
	}
	setTabComponentAt(index, nullptr);
	$nc(this->pages)->remove(index);
	putClientProperty("__index_to_remove__"_s, $($Integer::valueOf(index)));
	if (selected > index) {
		setSelectedIndexImpl(selected - 1, false);
	} else if (selected >= getTabCount()) {
		setSelectedIndexImpl(selected - 1, false);
		$var($JTabbedPane$Page, newSelected, (selected != 0) ? $cast($JTabbedPane$Page, $nc(this->pages)->get(selected - 1)) : ($JTabbedPane$Page*)nullptr);
		changeAccessibleSelection(nullptr, oldName, newSelected);
	} else if (index == selected) {
		fireStateChanged();
		changeAccessibleSelection(nullptr, oldName, $cast($JTabbedPane$Page, $($nc(this->pages)->get(index))));
	}
	if (component != nullptr) {
		$var($ComponentArray, components, getComponents());
		for (int32_t i = $nc(components)->length; --i >= 0;) {
			if (components->get(i) == component) {
				$JComponent::remove(i);
				component->setVisible(true);
				clearAccessibleParent(component);
				break;
			}
		}
	}
	if (shouldChangeFocus) {
		$SwingUtilities2::tabbedPaneChangeFocusTo($(getSelectedComponent()));
	}
	revalidate();
	repaint();
}

void JTabbedPane::remove($Component* component) {
	int32_t index = indexOfComponent(component);
	if (index != -1) {
		removeTabAt(index);
	} else {
		$var($ComponentArray, children, getComponents());
		for (int32_t i = 0; i < $nc(children)->length; ++i) {
			if (component == children->get(i)) {
				$JComponent::remove(i);
				break;
			}
		}
	}
}

void JTabbedPane::remove(int32_t index) {
	removeTabAt(index);
}

void JTabbedPane::removeAll() {
	setSelectedIndexImpl(-1, true);
	int32_t tabCount = getTabCount();
	while (tabCount-- > 0) {
		removeTabAt(tabCount);
	}
}

int32_t JTabbedPane::getTabCount() {
	return $nc(this->pages)->size();
}

int32_t JTabbedPane::getTabRunCount() {
	if (this->ui != nullptr) {
		return $nc(($cast($TabbedPaneUI, this->ui)))->getTabRunCount(this);
	}
	return 0;
}

$String* JTabbedPane::getTitleAt(int32_t index) {
	return $nc(($cast($JTabbedPane$Page, $($nc(this->pages)->get(index)))))->title;
}

$Icon* JTabbedPane::getIconAt(int32_t index) {
	return $nc(($cast($JTabbedPane$Page, $($nc(this->pages)->get(index)))))->icon;
}

$Icon* JTabbedPane::getDisabledIconAt(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($JTabbedPane$Page, page, $cast($JTabbedPane$Page, $nc(this->pages)->get(index)));
	if ($nc(page)->disabledIcon == nullptr) {
		$set(page, disabledIcon, $nc($($UIManager::getLookAndFeel()))->getDisabledIcon(this, page->icon));
	}
	return $nc(page)->disabledIcon;
}

$String* JTabbedPane::getToolTipTextAt(int32_t index) {
	return $nc(($cast($JTabbedPane$Page, $($nc(this->pages)->get(index)))))->tip;
}

$Color* JTabbedPane::getBackgroundAt(int32_t index) {
	return $nc(($cast($JTabbedPane$Page, $($nc(this->pages)->get(index)))))->getBackground();
}

$Color* JTabbedPane::getForegroundAt(int32_t index) {
	return $nc(($cast($JTabbedPane$Page, $($nc(this->pages)->get(index)))))->getForeground();
}

bool JTabbedPane::isEnabledAt(int32_t index) {
	return $nc(($cast($JTabbedPane$Page, $($nc(this->pages)->get(index)))))->isEnabled();
}

$Component* JTabbedPane::getComponentAt(int32_t index) {
	return $nc(($cast($JTabbedPane$Page, $($nc(this->pages)->get(index)))))->component;
}

int32_t JTabbedPane::getMnemonicAt(int32_t tabIndex) {
	checkIndex(tabIndex);
	$var($JTabbedPane$Page, page, $cast($JTabbedPane$Page, $nc(this->pages)->get(tabIndex)));
	return $nc(page)->getMnemonic();
}

int32_t JTabbedPane::getDisplayedMnemonicIndexAt(int32_t tabIndex) {
	checkIndex(tabIndex);
	$var($JTabbedPane$Page, page, $cast($JTabbedPane$Page, $nc(this->pages)->get(tabIndex)));
	return $nc(page)->getDisplayedMnemonicIndex();
}

$Rectangle* JTabbedPane::getBoundsAt(int32_t index) {
	checkIndex(index);
	if (this->ui != nullptr) {
		return $nc(($cast($TabbedPaneUI, this->ui)))->getTabBounds(this, index);
	}
	return nullptr;
}

void JTabbedPane::setTitleAt(int32_t index, $String* title) {
	$useLocalCurrentObjectStackCache();
	$var($JTabbedPane$Page, page, $cast($JTabbedPane$Page, $nc(this->pages)->get(index)));
	$var($String, oldTitle, $nc(page)->title);
	$set(page, title, title);
	if (oldTitle != title) {
		firePropertyChange("indexForTitle"_s, -1, index);
	}
	page->updateDisplayedMnemonicIndex();
	if ((oldTitle != title) && (this->accessibleContext != nullptr)) {
		$init($AccessibleContext);
		$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY, oldTitle, title);
	}
	if (title == nullptr || oldTitle == nullptr || !$nc(title)->equals(oldTitle)) {
		revalidate();
		repaint();
	}
}

void JTabbedPane::setIconAt(int32_t index, $Icon* icon) {
	$useLocalCurrentObjectStackCache();
	$var($JTabbedPane$Page, page, $cast($JTabbedPane$Page, $nc(this->pages)->get(index)));
	$var($Icon, oldIcon, $nc(page)->icon);
	if (icon != oldIcon) {
		$set(page, icon, icon);
		if ($instanceOf($UIResource, page->disabledIcon)) {
			$set(page, disabledIcon, nullptr);
		}
		if (this->accessibleContext != nullptr) {
			$init($AccessibleContext);
			$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY, oldIcon, icon);
		}
		revalidate();
		repaint();
	}
}

void JTabbedPane::setDisabledIconAt(int32_t index, $Icon* disabledIcon) {
	$useLocalCurrentObjectStackCache();
	$var($Icon, oldIcon, $nc(($cast($JTabbedPane$Page, $($nc(this->pages)->get(index)))))->disabledIcon);
	$set($nc($cast($JTabbedPane$Page, $($nc(this->pages)->get(index)))), disabledIcon, disabledIcon);
	if (disabledIcon != oldIcon && !isEnabledAt(index)) {
		revalidate();
		repaint();
	}
}

void JTabbedPane::setToolTipTextAt(int32_t index, $String* toolTipText) {
	$useLocalCurrentObjectStackCache();
	$var($String, oldToolTipText, $nc(($cast($JTabbedPane$Page, $($nc(this->pages)->get(index)))))->tip);
	$set($nc($cast($JTabbedPane$Page, $($nc(this->pages)->get(index)))), tip, toolTipText);
	if ((oldToolTipText != toolTipText) && (this->accessibleContext != nullptr)) {
		$init($AccessibleContext);
		$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_VISIBLE_DATA_PROPERTY, oldToolTipText, toolTipText);
	}
	if (!this->haveRegistered && toolTipText != nullptr) {
		$nc($($ToolTipManager::sharedInstance()))->registerComponent(this);
		this->haveRegistered = true;
	}
}

void JTabbedPane::setBackgroundAt(int32_t index, $Color* background) {
	$useLocalCurrentObjectStackCache();
	$var($Color, oldBg, $nc(($cast($JTabbedPane$Page, $($nc(this->pages)->get(index)))))->background);
	$nc(($cast($JTabbedPane$Page, $($nc(this->pages)->get(index)))))->setBackground(background);
	if (background == nullptr || oldBg == nullptr || !$nc(background)->equals(oldBg)) {
		$var($Rectangle, tabBounds, getBoundsAt(index));
		if (tabBounds != nullptr) {
			repaint(tabBounds);
		}
	}
}

void JTabbedPane::setForegroundAt(int32_t index, $Color* foreground) {
	$useLocalCurrentObjectStackCache();
	$var($Color, oldFg, $nc(($cast($JTabbedPane$Page, $($nc(this->pages)->get(index)))))->foreground);
	$nc(($cast($JTabbedPane$Page, $($nc(this->pages)->get(index)))))->setForeground(foreground);
	if (foreground == nullptr || oldFg == nullptr || !$nc(foreground)->equals(oldFg)) {
		$var($Rectangle, tabBounds, getBoundsAt(index));
		if (tabBounds != nullptr) {
			repaint(tabBounds);
		}
	}
}

void JTabbedPane::setEnabledAt(int32_t index, bool enabled) {
	$useLocalCurrentObjectStackCache();
	bool oldEnabled = $nc(($cast($JTabbedPane$Page, $($nc(this->pages)->get(index)))))->isEnabled();
	$nc(($cast($JTabbedPane$Page, $($nc(this->pages)->get(index)))))->setEnabled(enabled);
	if (enabled != oldEnabled) {
		revalidate();
		repaint();
	}
}

void JTabbedPane::setComponentAt(int32_t index, $Component* component) {
	$useLocalCurrentObjectStackCache();
	$var($JTabbedPane$Page, page, $cast($JTabbedPane$Page, $nc(this->pages)->get(index)));
	if (component != $nc(page)->component) {
		bool shouldChangeFocus = false;
		if (page->component != nullptr) {
			shouldChangeFocus = ($SwingUtilities::findFocusOwner(page->component) != nullptr);
			$synchronized(getTreeLock()) {
				int32_t count = getComponentCount();
				$var($ComponentArray, children, getComponents());
				for (int32_t i = 0; i < count; ++i) {
					if ($nc(children)->get(i) == page->component) {
						$JComponent::remove(i);
						clearAccessibleParent(children->get(i));
					}
				}
			}
		}
		$set(page, component, component);
		bool selectedPage = (getSelectedIndex() == index);
		if (selectedPage) {
			$set(this, visComp, component);
		}
		if (component != nullptr) {
			component->setVisible(selectedPage);
			addImpl(component, nullptr, -1);
			if (shouldChangeFocus) {
				$SwingUtilities2::tabbedPaneChangeFocusTo(component);
			}
		} else {
			repaint();
		}
		revalidate();
	}
}

void JTabbedPane::setDisplayedMnemonicIndexAt(int32_t tabIndex, int32_t mnemonicIndex) {
	checkIndex(tabIndex);
	$var($JTabbedPane$Page, page, $cast($JTabbedPane$Page, $nc(this->pages)->get(tabIndex)));
	$nc(page)->setDisplayedMnemonicIndex(mnemonicIndex);
}

void JTabbedPane::setMnemonicAt(int32_t tabIndex, int32_t mnemonic) {
	checkIndex(tabIndex);
	$var($JTabbedPane$Page, page, $cast($JTabbedPane$Page, $nc(this->pages)->get(tabIndex)));
	$nc(page)->setMnemonic(mnemonic);
	firePropertyChange("mnemonicAt"_s, ($Object*)nullptr, ($Object*)nullptr);
}

int32_t JTabbedPane::indexOfTab($String* title) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < getTabCount(); ++i) {
		if ($nc($(getTitleAt(i)))->equals(title == nullptr ? $of(""_s) : $of(title))) {
			return i;
		}
	}
	return -1;
}

int32_t JTabbedPane::indexOfTab($Icon* icon) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < getTabCount(); ++i) {
		$var($Icon, tabIcon, getIconAt(i));
		if ((tabIcon != nullptr && $of(tabIcon)->equals(icon)) || (tabIcon == nullptr && tabIcon == icon)) {
			return i;
		}
	}
	return -1;
}

int32_t JTabbedPane::indexOfComponent($Component* component) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < getTabCount(); ++i) {
		$var($Component, c, getComponentAt(i));
		if ((c != nullptr && $of(c)->equals(component)) || (c == nullptr && c == component)) {
			return i;
		}
	}
	return -1;
}

int32_t JTabbedPane::indexAtLocation(int32_t x, int32_t y) {
	if (this->ui != nullptr) {
		return $nc(($cast($TabbedPaneUI, this->ui)))->tabForCoordinate(this, x, y);
	}
	return -1;
}

$String* JTabbedPane::getToolTipText($MouseEvent* event) {
	if (this->ui != nullptr) {
		int32_t var$0 = $nc(event)->getX();
		int32_t index = $nc(($cast($TabbedPaneUI, this->ui)))->tabForCoordinate(this, var$0, event->getY());
		if (index != -1) {
			return $nc(($cast($JTabbedPane$Page, $($nc(this->pages)->get(index)))))->tip;
		}
	}
	return $JComponent::getToolTipText(event);
}

void JTabbedPane::checkIndex(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index < 0 || index >= $nc(this->pages)->size()) {
		$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index), ", Tab count: "_s, $$str($nc(this->pages)->size())}));
	}
}

void JTabbedPane::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JTabbedPane::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

void JTabbedPane::compWriteObjectNotify() {
	$JComponent::compWriteObjectNotify();
	if (getToolTipText() == nullptr && this->haveRegistered) {
		$nc($($ToolTipManager::sharedInstance()))->unregisterComponent(this);
	}
}

void JTabbedPane::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	int32_t newTabPlacement = $nc(f)->get("tabPlacement"_s, $SwingConstants::TOP);
	checkTabPlacement(newTabPlacement);
	this->tabPlacement = newTabPlacement;
	int32_t newTabLayoutPolicy = f->get("tabLayoutPolicy"_s, 0);
	checkTabLayoutPolicy(newTabLayoutPolicy);
	this->tabLayoutPolicy = newTabLayoutPolicy;
	$set(this, model, $cast($SingleSelectionModel, f->get("model"_s, ($Object*)nullptr)));
	this->haveRegistered = f->get("haveRegistered"_s, false);
	$set(this, changeListener, $cast($ChangeListener, f->get("changeListener"_s, ($Object*)nullptr)));
	$set(this, pages, $cast($List, f->get("pages"_s, ($Object*)nullptr)));
	$set(this, visComp, $cast($Component, f->get("visComp"_s, ($Object*)nullptr)));
	if ((this->ui != nullptr) && ($nc($(getUIClassID()))->equals(JTabbedPane::uiClassID))) {
		$nc(this->ui)->installUI(this);
	}
	if (getToolTipText() == nullptr && this->haveRegistered) {
		$nc($($ToolTipManager::sharedInstance()))->registerComponent(this);
	}
}

$String* JTabbedPane::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, tabPlacementString, nullptr);
	if (this->tabPlacement == $SwingConstants::TOP) {
		$assign(tabPlacementString, "TOP"_s);
	} else if (this->tabPlacement == $SwingConstants::BOTTOM) {
		$assign(tabPlacementString, "BOTTOM"_s);
	} else if (this->tabPlacement == $SwingConstants::LEFT) {
		$assign(tabPlacementString, "LEFT"_s);
	} else if (this->tabPlacement == $SwingConstants::RIGHT) {
		$assign(tabPlacementString, "RIGHT"_s);
	} else {
		$assign(tabPlacementString, ""_s);
	}
	$var($String, haveRegisteredString, this->haveRegistered ? "true"_s : "false"_s);
	return $str({$($JComponent::paramString()), ",haveRegistered="_s, haveRegisteredString, ",tabPlacement="_s, tabPlacementString});
}

$AccessibleContext* JTabbedPane::getAccessibleContext() {
	$useLocalCurrentObjectStackCache();
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JTabbedPane$AccessibleJTabbedPane, this));
		int32_t count = getTabCount();
		for (int32_t i = 0; i < count; ++i) {
			$nc(($cast($JTabbedPane$Page, $($nc(this->pages)->get(i)))))->initAccessibleContext();
		}
	}
	return this->accessibleContext;
}

void JTabbedPane::setTabComponentAt(int32_t index, $Component* component) {
	$useLocalCurrentObjectStackCache();
	if (component != nullptr && indexOfComponent(component) != -1) {
		$throwNew($IllegalArgumentException, "Component is already added to this JTabbedPane"_s);
	}
	$var($Component, oldValue, getTabComponentAt(index));
	if (component != oldValue) {
		int32_t tabComponentIndex = indexOfTabComponent(component);
		if (tabComponentIndex != -1) {
			setTabComponentAt(tabComponentIndex, nullptr);
		}
		$set($nc($cast($JTabbedPane$Page, $($nc(this->pages)->get(index)))), tabComponent, component);
		firePropertyChange("indexForTabComponent"_s, -1, index);
	}
}

$Component* JTabbedPane::getTabComponentAt(int32_t index) {
	return $nc(($cast($JTabbedPane$Page, $($nc(this->pages)->get(index)))))->tabComponent;
}

int32_t JTabbedPane::indexOfTabComponent($Component* tabComponent) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < getTabCount(); ++i) {
		$var($Component, c, getTabComponentAt(i));
		if (c == tabComponent) {
			return i;
		}
	}
	return -1;
}

JTabbedPane::JTabbedPane() {
}

void clinit$JTabbedPane($Class* class$) {
	$assignStatic(JTabbedPane::uiClassID, "TabbedPaneUI"_s);
}

$Class* JTabbedPane::load$($String* name, bool initialize) {
	$loadClass(JTabbedPane, name, initialize, &_JTabbedPane_ClassInfo_, clinit$JTabbedPane, allocate$JTabbedPane);
	return class$;
}

$Class* JTabbedPane::class$ = nullptr;

	} // swing
} // javax