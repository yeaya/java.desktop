#include <com/apple/laf/AquaComboBoxUI.h>

#include <apple/laf/JRSUIConstants$Size.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaButtonBorder.h>
#include <com/apple/laf/AquaComboBoxButton.h>
#include <com/apple/laf/AquaComboBoxPopup.h>
#include <com/apple/laf/AquaComboBoxRenderer.h>
#include <com/apple/laf/AquaComboBoxRendererInternal.h>
#include <com/apple/laf/AquaComboBoxUI$1.h>
#include <com/apple/laf/AquaComboBoxUI$10.h>
#include <com/apple/laf/AquaComboBoxUI$11.h>
#include <com/apple/laf/AquaComboBoxUI$12.h>
#include <com/apple/laf/AquaComboBoxUI$2.h>
#include <com/apple/laf/AquaComboBoxUI$3.h>
#include <com/apple/laf/AquaComboBoxUI$4.h>
#include <com/apple/laf/AquaComboBoxUI$5.h>
#include <com/apple/laf/AquaComboBoxUI$6.h>
#include <com/apple/laf/AquaComboBoxUI$7.h>
#include <com/apple/laf/AquaComboBoxUI$8.h>
#include <com/apple/laf/AquaComboBoxUI$9.h>
#include <com/apple/laf/AquaComboBoxUI$AquaComboBoxEditor.h>
#include <com/apple/laf/AquaComboBoxUI$AquaComboBoxLayoutManager.h>
#include <com/apple/laf/AquaComboBoxUI$ComboBoxAction.h>
#include <com/apple/laf/AquaUtilControlSize.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/ClientPropertyApplicator.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/ItemListener.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Math.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/CellRendererPane.h>
#include <javax/swing/ComboBoxEditor.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ActionMapUIResource.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicComboBoxEditor.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$ComboBoxLayoutManager.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$FocusHandler.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <javax/swing/plaf/basic/ComboPopup.h>
#include <jcpp.h>

#undef APPLICATOR
#undef FALSE
#undef ISSQUARE_CLIENT_PROPERTY_KEY
#undef IS_TABLE_CELL_EDITOR
#undef POPDOWN_CLIENT_PROPERTY_KEY
#undef TRUE
#undef VK_ENTER
#undef WHEN_IN_FOCUSED_WINDOW

using $JRSUIConstants$Size = ::apple::laf::JRSUIConstants$Size;
using $AquaButtonBorder = ::com::apple::laf::AquaButtonBorder;
using $AquaComboBoxButton = ::com::apple::laf::AquaComboBoxButton;
using $AquaComboBoxPopup = ::com::apple::laf::AquaComboBoxPopup;
using $AquaComboBoxRenderer = ::com::apple::laf::AquaComboBoxRenderer;
using $AquaComboBoxRendererInternal = ::com::apple::laf::AquaComboBoxRendererInternal;
using $AquaComboBoxUI$1 = ::com::apple::laf::AquaComboBoxUI$1;
using $AquaComboBoxUI$10 = ::com::apple::laf::AquaComboBoxUI$10;
using $AquaComboBoxUI$11 = ::com::apple::laf::AquaComboBoxUI$11;
using $AquaComboBoxUI$12 = ::com::apple::laf::AquaComboBoxUI$12;
using $AquaComboBoxUI$2 = ::com::apple::laf::AquaComboBoxUI$2;
using $AquaComboBoxUI$3 = ::com::apple::laf::AquaComboBoxUI$3;
using $AquaComboBoxUI$4 = ::com::apple::laf::AquaComboBoxUI$4;
using $AquaComboBoxUI$5 = ::com::apple::laf::AquaComboBoxUI$5;
using $AquaComboBoxUI$6 = ::com::apple::laf::AquaComboBoxUI$6;
using $AquaComboBoxUI$7 = ::com::apple::laf::AquaComboBoxUI$7;
using $AquaComboBoxUI$8 = ::com::apple::laf::AquaComboBoxUI$8;
using $AquaComboBoxUI$9 = ::com::apple::laf::AquaComboBoxUI$9;
using $AquaComboBoxUI$AquaComboBoxEditor = ::com::apple::laf::AquaComboBoxUI$AquaComboBoxEditor;
using $AquaComboBoxUI$AquaComboBoxLayoutManager = ::com::apple::laf::AquaComboBoxUI$AquaComboBoxLayoutManager;
using $AquaComboBoxUI$ComboBoxAction = ::com::apple::laf::AquaComboBoxUI$ComboBoxAction;
using $AquaUtilControlSize = ::com::apple::laf::AquaUtilControlSize;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClientPropertyApplicator = ::com::apple::laf::ClientPropertyApplicator;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $ItemListener = ::java::awt::event::ItemListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $ComboBoxEditor = ::javax::swing::ComboBoxEditor;
using $InputMap = ::javax::swing::InputMap;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $JRootPane = ::javax::swing::JRootPane;
using $KeyStroke = ::javax::swing::KeyStroke;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Border = ::javax::swing::border::Border;
using $ActionMapUIResource = ::javax::swing::plaf::ActionMapUIResource;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicComboBoxEditor = ::javax::swing::plaf::basic::BasicComboBoxEditor;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;
using $BasicComboBoxUI$ComboBoxLayoutManager = ::javax::swing::plaf::basic::BasicComboBoxUI$ComboBoxLayoutManager;
using $BasicComboBoxUI$FocusHandler = ::javax::swing::plaf::basic::BasicComboBoxUI$FocusHandler;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;
using $ComboPopup = ::javax::swing::plaf::basic::ComboPopup;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaComboBoxUI_FieldInfo_[] = {
	{"POPDOWN_CLIENT_PROPERTY_KEY", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaComboBoxUI, POPDOWN_CLIENT_PROPERTY_KEY)},
	{"ISSQUARE_CLIENT_PROPERTY_KEY", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaComboBoxUI, ISSQUARE_CLIENT_PROPERTY_KEY)},
	{"wasOpaque", "Z", nullptr, $PRIVATE, $field(AquaComboBoxUI, wasOpaque)},
	{"highlightNextAction", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(AquaComboBoxUI, highlightNextAction)},
	{"highlightPreviousAction", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(AquaComboBoxUI, highlightPreviousAction)},
	{"highlightFirstAction", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(AquaComboBoxUI, highlightFirstAction)},
	{"highlightLastAction", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(AquaComboBoxUI, highlightLastAction)},
	{"highlightPageUpAction", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(AquaComboBoxUI, highlightPageUpAction)},
	{"highlightPageDownAction", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(AquaComboBoxUI, highlightPageDownAction)},
	{"IS_TABLE_CELL_EDITOR", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AquaComboBoxUI, IS_TABLE_CELL_EDITOR)},
	{"triggerSelectionAction", "Ljavax/swing/Action;", nullptr, $PRIVATE | $FINAL, $field(AquaComboBoxUI, triggerSelectionAction)},
	{"toggleSelectionAction", "Ljavax/swing/Action;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaComboBoxUI, toggleSelectionAction)},
	{"hideAction", "Ljavax/swing/Action;", nullptr, $PRIVATE | $FINAL, $field(AquaComboBoxUI, hideAction)},
	{"APPLICATOR", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/ClientPropertyApplicator<Ljavax/swing/JComboBox<*>;Lcom/apple/laf/AquaComboBoxUI;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaComboBoxUI, APPLICATOR)},
	{}
};

$MethodInfo _AquaComboBoxUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaComboBoxUI::*)()>(&AquaComboBoxUI::init$))},
	{"access$000", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/plaf/basic/ComboPopup;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$ComboPopup*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$000))},
	{"access$100", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/plaf/basic/ComboPopup;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$ComboPopup*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$100))},
	{"access$1000", "(Lcom/apple/laf/AquaComboBoxUI;)Ljava/awt/Component;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Component*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$1000))},
	{"access$1100", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$1100))},
	{"access$1200", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$1200))},
	{"access$1302", "(Lcom/apple/laf/AquaComboBoxUI;Z)Z", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(AquaComboBoxUI*,bool)>(&AquaComboBoxUI::access$1302))},
	{"access$1400", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$1400))},
	{"access$1500", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$1500))},
	{"access$1600", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$1600))},
	{"access$1700", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$1700))},
	{"access$1800", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$1800))},
	{"access$1900", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$1900))},
	{"access$200", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$200))},
	{"access$2000", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$2000))},
	{"access$2100", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$2100))},
	{"access$2200", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$2200))},
	{"access$2300", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$2300))},
	{"access$2400", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$2400))},
	{"access$2500", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$2500))},
	{"access$2600", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$2600))},
	{"access$2700", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$2700))},
	{"access$2800", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$2800))},
	{"access$2900", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$2900))},
	{"access$300", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/plaf/basic/ComboPopup;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$ComboPopup*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$300))},
	{"access$3000", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$3000))},
	{"access$3100", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$3100))},
	{"access$3200", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$3200))},
	{"access$3300", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$3300))},
	{"access$3400", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$3400))},
	{"access$3500", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$3500))},
	{"access$3600", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$3600))},
	{"access$3700", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$3700))},
	{"access$3800", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$3800))},
	{"access$3900", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$3900))},
	{"access$400", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$400))},
	{"access$4000", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$4000))},
	{"access$4100", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$4100))},
	{"access$4200", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$4200))},
	{"access$4300", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$4300))},
	{"access$4400", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$4400))},
	{"access$4500", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$4500))},
	{"access$4600", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$4600))},
	{"access$4700", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$4700))},
	{"access$4800", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$4800))},
	{"access$4900", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$4900))},
	{"access$500", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/plaf/basic/ComboPopup;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$ComboPopup*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$500))},
	{"access$5000", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$5000))},
	{"access$5100", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$5100))},
	{"access$5200", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$5200))},
	{"access$5300", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$5300))},
	{"access$5400", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$5400))},
	{"access$5500", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$5500))},
	{"access$5600", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$5600))},
	{"access$5700", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$5700))},
	{"access$5800", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$5800))},
	{"access$5900", "(Lcom/apple/laf/AquaComboBoxUI;)Ljava/awt/Insets;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Insets*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$5900))},
	{"access$600", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/plaf/basic/ComboPopup;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$ComboPopup*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$600))},
	{"access$6000", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$6000))},
	{"access$6100", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$6100))},
	{"access$6200", "(Lcom/apple/laf/AquaComboBoxUI;)Ljava/awt/Component;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Component*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$6200))},
	{"access$6300", "(Lcom/apple/laf/AquaComboBoxUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$6300))},
	{"access$6400", "(Lcom/apple/laf/AquaComboBoxUI;)Ljava/awt/Component;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Component*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$6400))},
	{"access$6500", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$6500))},
	{"access$6600", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$6600))},
	{"access$6700", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$6700))},
	{"access$6800", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$6800))},
	{"access$6900", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$6900))},
	{"access$700", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/plaf/basic/ComboPopup;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$ComboPopup*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$700))},
	{"access$7000", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$7000))},
	{"access$7100", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$7100))},
	{"access$7200", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$7200))},
	{"access$7300", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$7300))},
	{"access$7400", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$7400))},
	{"access$7500", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$7500))},
	{"access$7600", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$7600))},
	{"access$7700", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$7700))},
	{"access$7800", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$7800))},
	{"access$7900", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$7900))},
	{"access$800", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JComboBox;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JComboBox*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$800))},
	{"access$8000", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JList;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JList*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$8000))},
	{"access$8100", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$8100))},
	{"access$8200", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$8200))},
	{"access$8300", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$8300))},
	{"access$8400", "(Lcom/apple/laf/AquaComboBoxUI;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$8400))},
	{"access$900", "(Lcom/apple/laf/AquaComboBoxUI;)Ljava/awt/Component;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Component*(*)(AquaComboBoxUI*)>(&AquaComboBoxUI::access$900))},
	{"applySizeFor", "(Ljavax/swing/JComponent;Lapple/laf/JRSUIConstants$Size;)V", nullptr, $PUBLIC},
	{"createArrowButton", "()Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"createEditor", "()Ljavax/swing/ComboBoxEditor;", nullptr, $PROTECTED},
	{"createFocusListener", "()Ljava/awt/event/FocusListener;", nullptr, $PROTECTED},
	{"createItemListener", "()Ljava/awt/event/ItemListener;", nullptr, $PROTECTED},
	{"createLayoutManager", "()Ljava/awt/LayoutManager;", nullptr, $PROTECTED},
	{"createPopup", "()Ljavax/swing/plaf/basic/ComboPopup;", nullptr, $PROTECTED},
	{"createRenderer", "()Ljavax/swing/ListCellRenderer;", "()Ljavax/swing/ListCellRenderer<Ljava/lang/Object;>;", $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaComboBoxUI::createUI))},
	{"getApplicator", "()Lcom/apple/laf/ClientPropertyApplicator;", "()Lcom/apple/laf/ClientPropertyApplicator<Ljavax/swing/JComboBox<*>;Lcom/apple/laf/AquaComboBoxUI;>;", $STATIC, $method(static_cast<$ClientPropertyApplicator*(*)()>(&AquaComboBoxUI::getApplicator))},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPopup", "()Ljavax/swing/plaf/basic/ComboPopup;", nullptr, $PUBLIC},
	{"installComponents", "()V", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"isPopdown", "(Ljavax/swing/JComboBox;)Z", "(Ljavax/swing/JComboBox<*>;)Z", $PROTECTED | $STATIC, $method(static_cast<bool(*)($JComboBox*)>(&AquaComboBoxUI::isPopdown))},
	{"isTableCellEditor", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED | $STATIC, $method(static_cast<bool(*)($JComponent*)>(&AquaComboBoxUI::isTableCellEditor))},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"triggerSelectionEvent", "(Ljavax/swing/JComboBox;Ljava/awt/event/ActionEvent;)V", "(Ljavax/swing/JComboBox<*>;Ljava/awt/event/ActionEvent;)V", $PROTECTED | $STATIC, $method(static_cast<void(*)($JComboBox*,$ActionEvent*)>(&AquaComboBoxUI::triggerSelectionEvent))},
	{"uninstallComponents", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaComboBoxUI_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaUtilControlSize$Sizeable", "com.apple.laf.AquaUtilControlSize", "Sizeable", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.apple.laf.AquaComboBoxUI$AquaComboBoxLayoutManager", "com.apple.laf.AquaComboBoxUI", "AquaComboBoxLayoutManager", 0},
	{"com.apple.laf.AquaComboBoxUI$ComboBoxAction", "com.apple.laf.AquaComboBoxUI", "ComboBoxAction", $PRIVATE | $ABSTRACT},
	{"com.apple.laf.AquaComboBoxUI$AquaCustomComboTextField", "com.apple.laf.AquaComboBoxUI", "AquaCustomComboTextField", 0},
	{"com.apple.laf.AquaComboBoxUI$AquaComboBoxEditor", "com.apple.laf.AquaComboBoxUI", "AquaComboBoxEditor", $FINAL},
	{"com.apple.laf.AquaComboBoxUI$12", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$11", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$10", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$9", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$8", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$7", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$6", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$5", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$4", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$3", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaComboBoxUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaComboBoxUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaComboBoxUI",
	"javax.swing.plaf.basic.BasicComboBoxUI",
	"com.apple.laf.AquaUtilControlSize$Sizeable",
	_AquaComboBoxUI_FieldInfo_,
	_AquaComboBoxUI_MethodInfo_,
	nullptr,
	nullptr,
	_AquaComboBoxUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaComboBoxUI$AquaComboBoxLayoutManager,com.apple.laf.AquaComboBoxUI$ComboBoxAction,com.apple.laf.AquaComboBoxUI$AquaCustomComboTextField,com.apple.laf.AquaComboBoxUI$AquaCustomComboTextField$1,com.apple.laf.AquaComboBoxUI$AquaComboBoxEditor,com.apple.laf.AquaComboBoxUI$12,com.apple.laf.AquaComboBoxUI$12$7,com.apple.laf.AquaComboBoxUI$12$6,com.apple.laf.AquaComboBoxUI$12$5,com.apple.laf.AquaComboBoxUI$12$4,com.apple.laf.AquaComboBoxUI$12$3,com.apple.laf.AquaComboBoxUI$12$2,com.apple.laf.AquaComboBoxUI$12$1,com.apple.laf.AquaComboBoxUI$11,com.apple.laf.AquaComboBoxUI$10,com.apple.laf.AquaComboBoxUI$9,com.apple.laf.AquaComboBoxUI$8,com.apple.laf.AquaComboBoxUI$7,com.apple.laf.AquaComboBoxUI$6,com.apple.laf.AquaComboBoxUI$5,com.apple.laf.AquaComboBoxUI$4,com.apple.laf.AquaComboBoxUI$3,com.apple.laf.AquaComboBoxUI$2,com.apple.laf.AquaComboBoxUI$1,com.apple.laf.AquaComboBoxUI$1$1"
};

$Object* allocate$AquaComboBoxUI($Class* clazz) {
	return $of($alloc(AquaComboBoxUI));
}

int32_t AquaComboBoxUI::hashCode() {
	 return this->$BasicComboBoxUI::hashCode();
}

bool AquaComboBoxUI::equals(Object$* arg0) {
	 return this->$BasicComboBoxUI::equals(arg0);
}

$Object* AquaComboBoxUI::clone() {
	 return this->$BasicComboBoxUI::clone();
}

$String* AquaComboBoxUI::toString() {
	 return this->$BasicComboBoxUI::toString();
}

void AquaComboBoxUI::finalize() {
	this->$BasicComboBoxUI::finalize();
}

$String* AquaComboBoxUI::POPDOWN_CLIENT_PROPERTY_KEY = nullptr;
$String* AquaComboBoxUI::ISSQUARE_CLIENT_PROPERTY_KEY = nullptr;
$String* AquaComboBoxUI::IS_TABLE_CELL_EDITOR = nullptr;
$Action* AquaComboBoxUI::toggleSelectionAction = nullptr;
$AquaUtils$RecyclableSingleton* AquaComboBoxUI::APPLICATOR = nullptr;

$JButton* AquaComboBoxUI::access$8400(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->arrowButton;
}

$JButton* AquaComboBoxUI::access$8300(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->arrowButton;
}

$JButton* AquaComboBoxUI::access$8200(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->arrowButton;
}

$JButton* AquaComboBoxUI::access$8100(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->arrowButton;
}

$JList* AquaComboBoxUI::access$8000(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JList* AquaComboBoxUI::access$7900(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JButton* AquaComboBoxUI::access$7800(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->arrowButton;
}

$JButton* AquaComboBoxUI::access$7700(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->arrowButton;
}

$JList* AquaComboBoxUI::access$7600(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JList* AquaComboBoxUI::access$7500(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JButton* AquaComboBoxUI::access$7400(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->arrowButton;
}

$JButton* AquaComboBoxUI::access$7300(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->arrowButton;
}

$JComboBox* AquaComboBoxUI::access$7200(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* AquaComboBoxUI::access$7100(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->comboBox;
}

$JList* AquaComboBoxUI::access$7000(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JList* AquaComboBoxUI::access$6900(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JComboBox* AquaComboBoxUI::access$6800(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* AquaComboBoxUI::access$6700(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* AquaComboBoxUI::access$6600(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* AquaComboBoxUI::access$6500(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->comboBox;
}

$Component* AquaComboBoxUI::access$6400(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->editor;
}

$Rectangle* AquaComboBoxUI::access$6300(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->rectangleForCurrentValue();
}

$Component* AquaComboBoxUI::access$6200(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->editor;
}

$JButton* AquaComboBoxUI::access$6100(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->arrowButton;
}

$JButton* AquaComboBoxUI::access$6000(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->arrowButton;
}

$Insets* AquaComboBoxUI::access$5900(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->getInsets();
}

$JButton* AquaComboBoxUI::access$5800(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->arrowButton;
}

$JComboBox* AquaComboBoxUI::access$5700(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* AquaComboBoxUI::access$5600(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* AquaComboBoxUI::access$5500(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* AquaComboBoxUI::access$5400(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->comboBox;
}

$JButton* AquaComboBoxUI::access$5300(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->arrowButton;
}

$JList* AquaComboBoxUI::access$5200(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JList* AquaComboBoxUI::access$5100(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JList* AquaComboBoxUI::access$5000(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JList* AquaComboBoxUI::access$4900(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JList* AquaComboBoxUI::access$4800(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JList* AquaComboBoxUI::access$4700(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JList* AquaComboBoxUI::access$4600(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JList* AquaComboBoxUI::access$4500(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JList* AquaComboBoxUI::access$4400(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JList* AquaComboBoxUI::access$4300(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JList* AquaComboBoxUI::access$4200(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JList* AquaComboBoxUI::access$4100(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JList* AquaComboBoxUI::access$4000(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JList* AquaComboBoxUI::access$3900(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JList* AquaComboBoxUI::access$3800(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JList* AquaComboBoxUI::access$3700(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JList* AquaComboBoxUI::access$3600(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JList* AquaComboBoxUI::access$3500(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JList* AquaComboBoxUI::access$3400(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JList* AquaComboBoxUI::access$3300(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JComboBox* AquaComboBoxUI::access$3200(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->comboBox;
}

$JList* AquaComboBoxUI::access$3100(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JList* AquaComboBoxUI::access$3000(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JList* AquaComboBoxUI::access$2900(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JComboBox* AquaComboBoxUI::access$2800(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->comboBox;
}

$JList* AquaComboBoxUI::access$2700(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JList* AquaComboBoxUI::access$2600(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JComboBox* AquaComboBoxUI::access$2500(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->comboBox;
}

$JList* AquaComboBoxUI::access$2400(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$JComboBox* AquaComboBoxUI::access$2300(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* AquaComboBoxUI::access$2200(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* AquaComboBoxUI::access$2100(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* AquaComboBoxUI::access$2000(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* AquaComboBoxUI::access$1900(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->comboBox;
}

$JButton* AquaComboBoxUI::access$1800(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->arrowButton;
}

$JButton* AquaComboBoxUI::access$1700(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->arrowButton;
}

$JComboBox* AquaComboBoxUI::access$1600(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* AquaComboBoxUI::access$1500(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->comboBox;
}

$JComboBox* AquaComboBoxUI::access$1400(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->comboBox;
}

bool AquaComboBoxUI::access$1302(AquaComboBoxUI* x0, bool x1) {
	$init(AquaComboBoxUI);
	return $nc(x0)->hasFocus = x1;
}

$JButton* AquaComboBoxUI::access$1200(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->arrowButton;
}

$JButton* AquaComboBoxUI::access$1100(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->arrowButton;
}

$Component* AquaComboBoxUI::access$1000(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->editor;
}

$Component* AquaComboBoxUI::access$900(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->editor;
}

$JComboBox* AquaComboBoxUI::access$800(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->comboBox;
}

$ComboPopup* AquaComboBoxUI::access$700(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->popup;
}

$ComboPopup* AquaComboBoxUI::access$600(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->popup;
}

$ComboPopup* AquaComboBoxUI::access$500(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->popup;
}

$JList* AquaComboBoxUI::access$400(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->listBox;
}

$ComboPopup* AquaComboBoxUI::access$300(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->popup;
}

$JComboBox* AquaComboBoxUI::access$200(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->comboBox;
}

$ComboPopup* AquaComboBoxUI::access$100(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->popup;
}

$ComboPopup* AquaComboBoxUI::access$000(AquaComboBoxUI* x0) {
	$init(AquaComboBoxUI);
	return $nc(x0)->popup;
}

void AquaComboBoxUI::init$() {
	$BasicComboBoxUI::init$();
	$set(this, highlightNextAction, $new($AquaComboBoxUI$3, this));
	$set(this, highlightPreviousAction, $new($AquaComboBoxUI$4, this));
	$set(this, highlightFirstAction, $new($AquaComboBoxUI$5, this));
	$set(this, highlightLastAction, $new($AquaComboBoxUI$6, this));
	$set(this, highlightPageUpAction, $new($AquaComboBoxUI$7, this));
	$set(this, highlightPageDownAction, $new($AquaComboBoxUI$8, this));
	$set(this, triggerSelectionAction, $new($AquaComboBoxUI$9, this));
	$set(this, hideAction, $new($AquaComboBoxUI$11, this));
}

$ComponentUI* AquaComboBoxUI::createUI($JComponent* c) {
	$init(AquaComboBoxUI);
	return $new(AquaComboBoxUI);
}

void AquaComboBoxUI::installUI($JComponent* c) {
	$BasicComboBoxUI::installUI(c);
	$init($Boolean);
	$LookAndFeel::installProperty(c, "opaque"_s, $Boolean::FALSE);
	this->wasOpaque = $nc(c)->isOpaque();
	c->setOpaque(false);
}

void AquaComboBoxUI::uninstallUI($JComponent* c) {
	$nc(c)->setOpaque(this->wasOpaque);
	$BasicComboBoxUI::uninstallUI(c);
}

void AquaComboBoxUI::installListeners() {
	$BasicComboBoxUI::installListeners();
	$AquaUtilControlSize::addSizePropertyListener(this->comboBox);
}

void AquaComboBoxUI::uninstallListeners() {
	$AquaUtilControlSize::removeSizePropertyListener(this->comboBox);
	$BasicComboBoxUI::uninstallListeners();
}

void AquaComboBoxUI::installComponents() {
	$BasicComboBoxUI::installComponents();
	$nc($(getApplicator()))->attachAndApplyClientProperties(this->comboBox);
}

void AquaComboBoxUI::uninstallComponents() {
	$useLocalCurrentObjectStackCache();
	$nc($(getApplicator()))->removeFrom(this->comboBox);
	$nc($($cast($ButtonUI, $nc(this->arrowButton)->getUI())))->uninstallUI(this->arrowButton);
	$BasicComboBoxUI::uninstallComponents();
}

$ItemListener* AquaComboBoxUI::createItemListener() {
	return $new($AquaComboBoxUI$1, this);
}

void AquaComboBoxUI::paint($Graphics* g, $JComponent* c) {
}

$ListCellRenderer* AquaComboBoxUI::createRenderer() {
	return $new($AquaComboBoxRenderer, this->comboBox);
}

$ComboPopup* AquaComboBoxUI::createPopup() {
	return $new($AquaComboBoxPopup, this->comboBox);
}

$JButton* AquaComboBoxUI::createArrowButton() {
	return $new($AquaComboBoxButton, this, this->comboBox, this->currentValuePane, this->listBox);
}

$ComboBoxEditor* AquaComboBoxUI::createEditor() {
	return $new($AquaComboBoxUI$AquaComboBoxEditor, this);
}

$FocusListener* AquaComboBoxUI::createFocusListener() {
	return $new($AquaComboBoxUI$2, this);
}

void AquaComboBoxUI::installKeyboardActions() {
	$BasicComboBoxUI::installKeyboardActions();
	$var($ActionMap, actionMap, $new($ActionMapUIResource));
	actionMap->put("aquaSelectNext"_s, this->highlightNextAction);
	actionMap->put("aquaSelectPrevious"_s, this->highlightPreviousAction);
	actionMap->put("enterPressed"_s, this->triggerSelectionAction);
	actionMap->put("aquaSpacePressed"_s, AquaComboBoxUI::toggleSelectionAction);
	actionMap->put("aquaSelectHome"_s, this->highlightFirstAction);
	actionMap->put("aquaSelectEnd"_s, this->highlightLastAction);
	actionMap->put("aquaSelectPageUp"_s, this->highlightPageUpAction);
	actionMap->put("aquaSelectPageDown"_s, this->highlightPageDownAction);
	actionMap->put("aquaHidePopup"_s, this->hideAction);
	$SwingUtilities::replaceUIActionMap(this->comboBox, actionMap);
}

$ComboPopup* AquaComboBoxUI::getPopup() {
	return this->popup;
}

$LayoutManager* AquaComboBoxUI::createLayoutManager() {
	return $new($AquaComboBoxUI$AquaComboBoxLayoutManager, this);
}

bool AquaComboBoxUI::isTableCellEditor($JComponent* c) {
	$init(AquaComboBoxUI);
	$init($Boolean);
	return $nc($Boolean::TRUE)->equals($($nc(c)->getClientProperty(AquaComboBoxUI::IS_TABLE_CELL_EDITOR)));
}

bool AquaComboBoxUI::isPopdown($JComboBox* c) {
	$init(AquaComboBoxUI);
	bool var$0 = $nc(c)->isEditable();
	$init($Boolean);
	return var$0 || $nc($Boolean::TRUE)->equals($($nc(c)->getClientProperty(AquaComboBoxUI::POPDOWN_CLIENT_PROPERTY_KEY)));
}

void AquaComboBoxUI::triggerSelectionEvent($JComboBox* comboBox, $ActionEvent* e) {
	$init(AquaComboBoxUI);
	$useLocalCurrentObjectStackCache();
	if (!$nc(comboBox)->isEnabled()) {
		return;
	}
	$var(AquaComboBoxUI, aquaUi, $cast(AquaComboBoxUI, $cast($ComboBoxUI, $nc(comboBox)->getUI())));
	if ($nc($($nc($($nc(aquaUi)->getPopup()))->getList()))->getSelectedIndex() < 0) {
		comboBox->setPopupVisible(false);
	}
	if (isTableCellEditor(comboBox)) {
		comboBox->setSelectedIndex($nc($($nc($($nc(aquaUi)->getPopup()))->getList()))->getSelectedIndex());
		return;
	}
	if (comboBox->isPopupVisible()) {
		comboBox->setSelectedIndex($nc($($nc($($nc(aquaUi)->getPopup()))->getList()))->getSelectedIndex());
		comboBox->setPopupVisible(false);
		return;
	}
	$var($JRootPane, root, $SwingUtilities::getRootPane(comboBox));
	if (root == nullptr) {
		return;
	}
	$var($InputMap, im, $nc(root)->getInputMap($JComponent::WHEN_IN_FOCUSED_WINDOW));
	$var($ActionMap, am, root->getActionMap());
	if (im == nullptr || am == nullptr) {
		return;
	}
	$var($Object, obj, $nc(im)->get($($KeyStroke::getKeyStroke($KeyEvent::VK_ENTER, 0))));
	if (obj == nullptr) {
		return;
	}
	$var($Action, action, $nc(am)->get(obj));
	if (action == nullptr) {
		return;
	}
	$var($Object, var$0, $of(root));
	int32_t var$1 = $nc(e)->getID();
	$var($String, var$2, e->getActionCommand());
	int64_t var$3 = e->getWhen();
	$nc(action)->actionPerformed($$new($ActionEvent, var$0, var$1, var$2, var$3, e->getModifiers()));
}

void AquaComboBoxUI::applySizeFor($JComponent* c, $JRSUIConstants$Size* size) {
	$useLocalCurrentObjectStackCache();
	if (this->arrowButton == nullptr) {
		return;
	}
	$var($Border, border, $nc(this->arrowButton)->getBorder());
	if (!($instanceOf($AquaButtonBorder, border))) {
		return;
	}
	$var($AquaButtonBorder, aquaBorder, $cast($AquaButtonBorder, border));
	$nc(this->arrowButton)->setBorder($($nc(aquaBorder)->deriveBorderForSize(size)));
}

$Dimension* AquaComboBoxUI::getMinimumSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	if (!this->isMinimumSizeDirty) {
		return $new($Dimension, this->cachedMinimumSize);
	}
	bool editable = $nc(this->comboBox)->isEditable();
	$var($Dimension, size, nullptr);
	if (!editable && this->arrowButton != nullptr && $instanceOf($AquaComboBoxButton, this->arrowButton)) {
		$var($AquaComboBoxButton, button, $cast($AquaComboBoxButton, this->arrowButton));
		$var($Insets, buttonInsets, $nc(button)->getInsets());
		$var($Insets, insets, $new($Insets, 0, 5, 0, 25));
		$assign(size, getDisplaySize());
		$nc(size)->width += insets->left + insets->right;
		size->width += $nc(buttonInsets)->left + buttonInsets->right;
		size->width += buttonInsets->right + 10;
		size->height += insets->top + insets->bottom;
		size->height += buttonInsets->top + buttonInsets->bottom;
		size->height = $Math::max(27, size->height);
	} else if (editable && this->arrowButton != nullptr && this->editor != nullptr) {
		$assign(size, $BasicComboBoxUI::getMinimumSize(c));
		$var($Insets, margin, $nc(this->arrowButton)->getMargin());
		$nc(size)->height += $nc(margin)->top + margin->bottom;
	} else {
		$assign(size, $BasicComboBoxUI::getMinimumSize(c));
	}
	$var($Border, border, $nc(c)->getBorder());
	if (border != nullptr) {
		$var($Insets, insets, border->getBorderInsets(c));
		$nc(size)->height += $nc(insets)->top + insets->bottom;
		size->width += insets->left + insets->right;
	}
	$nc(this->cachedMinimumSize)->setSize($nc(size)->width, size->height);
	this->isMinimumSizeDirty = false;
	return $new($Dimension, this->cachedMinimumSize);
}

$ClientPropertyApplicator* AquaComboBoxUI::getApplicator() {
	$init(AquaComboBoxUI);
	return $cast($ClientPropertyApplicator, $nc(AquaComboBoxUI::APPLICATOR)->get());
}

void clinit$AquaComboBoxUI($Class* class$) {
	$assignStatic(AquaComboBoxUI::POPDOWN_CLIENT_PROPERTY_KEY, "JComboBox.isPopDown"_s);
	$assignStatic(AquaComboBoxUI::ISSQUARE_CLIENT_PROPERTY_KEY, "JComboBox.isSquare"_s);
	$assignStatic(AquaComboBoxUI::IS_TABLE_CELL_EDITOR, "JComboBox.isTableCellEditor"_s);
	$assignStatic(AquaComboBoxUI::toggleSelectionAction, $new($AquaComboBoxUI$10));
	$assignStatic(AquaComboBoxUI::APPLICATOR, $new($AquaComboBoxUI$12));
}

AquaComboBoxUI::AquaComboBoxUI() {
}

$Class* AquaComboBoxUI::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxUI, name, initialize, &_AquaComboBoxUI_ClassInfo_, clinit$AquaComboBoxUI, allocate$AquaComboBoxUI);
	return class$;
}

$Class* AquaComboBoxUI::class$ = nullptr;

		} // laf
	} // apple
} // com