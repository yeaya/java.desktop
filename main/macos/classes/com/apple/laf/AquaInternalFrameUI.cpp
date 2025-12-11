#include <com/apple/laf/AquaInternalFrameUI.h>

#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaInternalFrameBorder.h>
#include <com/apple/laf/AquaInternalFrameUI$1.h>
#include <com/apple/laf/AquaInternalFrameUI$2.h>
#include <com/apple/laf/AquaInternalFrameUI$3.h>
#include <com/apple/laf/AquaInternalFrameUI$4.h>
#include <com/apple/laf/AquaInternalFrameUI$5.h>
#include <com/apple/laf/AquaInternalFrameUI$6.h>
#include <com/apple/laf/AquaInternalFrameUI$AquaBorderListener.h>
#include <com/apple/laf/AquaInternalFrameUI$CompoundUIBorder.h>
#include <com/apple/laf/AquaInternalFrameUI$InternalFrameShadow.h>
#include <com/apple/laf/AquaInternalFrameUI$PropertyListener.h>
#include <com/apple/laf/AquaInternalFrameUI$ResizeBox.h>
#include <com/apple/laf/AquaLookAndFeel.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/DesktopManager.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/event/MouseInputAdapter.h>
#include <javax/swing/plaf/ActionMapUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/InternalFrameUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>
#include <jcpp.h>

#undef DRAG_LAYER
#undef FRAME_ACTIVE_PROPERTY
#undef FRAME_TYPE
#undef IS_PALETTE_PROPERTY
#undef NORMAL_FRAME
#undef OPTION_DIALOG
#undef PALETTE_FRAME
#undef RESIZE_ICON

using $ComponentArray = $Array<::java::awt::Component>;
using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaInternalFrameBorder = ::com::apple::laf::AquaInternalFrameBorder;
using $AquaInternalFrameUI$1 = ::com::apple::laf::AquaInternalFrameUI$1;
using $AquaInternalFrameUI$2 = ::com::apple::laf::AquaInternalFrameUI$2;
using $AquaInternalFrameUI$3 = ::com::apple::laf::AquaInternalFrameUI$3;
using $AquaInternalFrameUI$4 = ::com::apple::laf::AquaInternalFrameUI$4;
using $AquaInternalFrameUI$5 = ::com::apple::laf::AquaInternalFrameUI$5;
using $AquaInternalFrameUI$6 = ::com::apple::laf::AquaInternalFrameUI$6;
using $AquaInternalFrameUI$AquaBorderListener = ::com::apple::laf::AquaInternalFrameUI$AquaBorderListener;
using $AquaInternalFrameUI$CompoundUIBorder = ::com::apple::laf::AquaInternalFrameUI$CompoundUIBorder;
using $AquaInternalFrameUI$InternalFrameShadow = ::com::apple::laf::AquaInternalFrameUI$InternalFrameShadow;
using $AquaInternalFrameUI$PropertyListener = ::com::apple::laf::AquaInternalFrameUI$PropertyListener;
using $AquaInternalFrameUI$ResizeBox = ::com::apple::laf::AquaInternalFrameUI$ResizeBox;
using $AquaLookAndFeel = ::com::apple::laf::AquaLookAndFeel;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ActionMap = ::javax::swing::ActionMap;
using $DesktopManager = ::javax::swing::DesktopManager;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JLabel = ::javax::swing::JLabel;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JMenu = ::javax::swing::JMenu;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;
using $MouseInputAdapter = ::javax::swing::event::MouseInputAdapter;
using $ActionMapUIResource = ::javax::swing::plaf::ActionMapUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $InternalFrameUI = ::javax::swing::plaf::InternalFrameUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicInternalFrameUI = ::javax::swing::plaf::basic::BasicInternalFrameUI;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaInternalFrameUI_FieldInfo_[] = {
	{"IS_PALETTE_PROPERTY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AquaInternalFrameUI, IS_PALETTE_PROPERTY)},
	{"FRAME_TYPE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaInternalFrameUI, FRAME_TYPE)},
	{"NORMAL_FRAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaInternalFrameUI, NORMAL_FRAME)},
	{"PALETTE_FRAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaInternalFrameUI, PALETTE_FRAME)},
	{"OPTION_DIALOG", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaInternalFrameUI, OPTION_DIALOG)},
	{"fPropertyListener", "Ljava/beans/PropertyChangeListener;", nullptr, 0, $field(AquaInternalFrameUI, fPropertyListener)},
	{"fSelectedTextColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(AquaInternalFrameUI, fSelectedTextColor)},
	{"fNotSelectedTextColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(AquaInternalFrameUI, fNotSelectedTextColor)},
	{"fAquaBorder", "Lcom/apple/laf/AquaInternalFrameBorder;", nullptr, 0, $field(AquaInternalFrameUI, fAquaBorder)},
	{"resizeBox", "Lcom/apple/laf/AquaInternalFrameUI$ResizeBox;", nullptr, $PRIVATE, $field(AquaInternalFrameUI, resizeBox)},
	{"fMouseOverPressedButton", "Z", nullptr, 0, $field(AquaInternalFrameUI, fMouseOverPressedButton)},
	{"fWhichButtonPressed", "I", nullptr, 0, $field(AquaInternalFrameUI, fWhichButtonPressed)},
	{"fRollover", "Z", nullptr, 0, $field(AquaInternalFrameUI, fRollover)},
	{"fDocumentEdited", "Z", nullptr, 0, $field(AquaInternalFrameUI, fDocumentEdited)},
	{"fIsPallet", "Z", nullptr, 0, $field(AquaInternalFrameUI, fIsPallet)},
	{"closeIcon", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/Icon;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaInternalFrameUI, closeIcon)},
	{"minimizeIcon", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/Icon;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaInternalFrameUI, minimizeIcon)},
	{"zoomIcon", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/Icon;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaInternalFrameUI, zoomIcon)},
	{"documentWindowShadow", "Lcom/apple/laf/AquaInternalFrameUI$InternalFrameShadow;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaInternalFrameUI, documentWindowShadow)},
	{"paletteWindowShadow", "Lcom/apple/laf/AquaInternalFrameUI$InternalFrameShadow;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaInternalFrameUI, paletteWindowShadow)},
	{"RESIZE_ICON", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/Icon;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaInternalFrameUI, RESIZE_ICON)},
	{}
};

$MethodInfo _AquaInternalFrameUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaInternalFrameUI::*)($JInternalFrame*)>(&AquaInternalFrameUI::init$))},
	{"access$000", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$000))},
	{"access$100", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$100))},
	{"access$1000", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$1000))},
	{"access$1100", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$1100))},
	{"access$1200", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/DesktopManager;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$DesktopManager*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$1200))},
	{"access$1300", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$1300))},
	{"access$1400", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$1400))},
	{"access$1500", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$1500))},
	{"access$1600", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$1600))},
	{"access$1700", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/DesktopManager;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$DesktopManager*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$1700))},
	{"access$1800", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$1800))},
	{"access$1900", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$1900))},
	{"access$200", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$200))},
	{"access$2000", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$2000))},
	{"access$2100", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$2100))},
	{"access$2200", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/DesktopManager;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$DesktopManager*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$2200))},
	{"access$2300", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$2300))},
	{"access$2400", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/DesktopManager;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$DesktopManager*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$2400))},
	{"access$2500", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$2500))},
	{"access$2600", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$2600))},
	{"access$2700", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$2700))},
	{"access$2800", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$2800))},
	{"access$2900", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$2900))},
	{"access$300", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$300))},
	{"access$3000", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$3000))},
	{"access$3100", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$3100))},
	{"access$3200", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$3200))},
	{"access$3300", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$3300))},
	{"access$3400", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$3400))},
	{"access$3500", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/DesktopManager;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$DesktopManager*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$3500))},
	{"access$3600", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$3600))},
	{"access$3700", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$3700))},
	{"access$3800", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$3800))},
	{"access$3900", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$3900))},
	{"access$400", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$400))},
	{"access$4000", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$4000))},
	{"access$4100", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$4100))},
	{"access$4200", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$4200))},
	{"access$4300", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$4300))},
	{"access$4400", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$4400))},
	{"access$4500", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$4500))},
	{"access$4600", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$4600))},
	{"access$4700", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$4700))},
	{"access$4800", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$4800))},
	{"access$4900", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$4900))},
	{"access$500", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$500))},
	{"access$5000", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$5000))},
	{"access$5100", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$5100))},
	{"access$5200", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$5200))},
	{"access$5300", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$5300))},
	{"access$5400", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$5400))},
	{"access$5500", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$5500))},
	{"access$5600", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$5600))},
	{"access$5700", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$5700))},
	{"access$5800", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$5800))},
	{"access$5900", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$5900))},
	{"access$600", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$600))},
	{"access$6000", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$6000))},
	{"access$6100", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$6100))},
	{"access$6200", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$6200))},
	{"access$6300", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$6300))},
	{"access$6400", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$6400))},
	{"access$6500", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/DesktopManager;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$DesktopManager*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$6500))},
	{"access$6600", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$6600))},
	{"access$6700", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$6700))},
	{"access$6800", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$6800))},
	{"access$6900", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$6900))},
	{"access$700", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$700))},
	{"access$7000", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$7000))},
	{"access$7100", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$7100))},
	{"access$7200", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$7200))},
	{"access$7300", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$7300))},
	{"access$7400", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/DesktopManager;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$DesktopManager*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$7400))},
	{"access$7500", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$7500))},
	{"access$7600", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/DesktopManager;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$DesktopManager*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$7600))},
	{"access$800", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$800))},
	{"access$900", "(Lcom/apple/laf/AquaInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(AquaInternalFrameUI*)>(&AquaInternalFrameUI::access$900))},
	{"createActionMap", "()Ljavax/swing/ActionMap;", nullptr, 0},
	{"createBorderListener", "(Ljavax/swing/JInternalFrame;)Ljavax/swing/event/MouseInputAdapter;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaInternalFrameUI::createUI))},
	{"deinstallMouseHandlers", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"exportCloseIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&AquaInternalFrameUI::exportCloseIcon))},
	{"exportMinimizeIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&AquaInternalFrameUI::exportMinimizeIcon))},
	{"exportZoomIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&AquaInternalFrameUI::exportZoomIcon))},
	{"getMouseOverPressedButton", "()Z", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getRollover", "()Z", nullptr, $PUBLIC},
	{"getWhichButtonPressed", "()I", nullptr, $PUBLIC},
	{"installComponents", "()V", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installMouseHandlers", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"isDocumentEdited", "()Z", nullptr, $PUBLIC},
	{"replacePane", "(Ljavax/swing/JComponent;Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"setDocumentEdited", "(Z)V", nullptr, $PUBLIC},
	{"setFrameType", "(Ljava/lang/String;)V", nullptr, 0},
	{"setNorthPane", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"setPalette", "(Z)V", nullptr, $PUBLIC},
	{"setSouthPane", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallComponents", "()V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"updateComponentTreeUIActivation", "(Ljava/awt/Component;Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)($Component*,Object$*)>(&AquaInternalFrameUI::updateComponentTreeUIActivation))},
	{}
};

$InnerClassInfo _AquaInternalFrameUI_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameUI$ResizeBox", "com.apple.laf.AquaInternalFrameUI", "ResizeBox", $PRIVATE | $FINAL},
	{"com.apple.laf.AquaInternalFrameUI$InternalFrameShadow", "com.apple.laf.AquaInternalFrameUI", "InternalFrameShadow", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaInternalFrameUI$CompoundUIBorder", "com.apple.laf.AquaInternalFrameUI", "CompoundUIBorder", $STATIC},
	{"com.apple.laf.AquaInternalFrameUI$PropertyListener", "com.apple.laf.AquaInternalFrameUI", "PropertyListener", 0},
	{"com.apple.laf.AquaInternalFrameUI$AquaBorderListener", "com.apple.laf.AquaInternalFrameUI", "AquaBorderListener", $PROTECTED},
	{"com.apple.laf.AquaInternalFrameUI$AquaInternalFrameButtonIcon", "com.apple.laf.AquaInternalFrameUI", "AquaInternalFrameButtonIcon", $STATIC},
	{"com.apple.laf.AquaInternalFrameUI$6", nullptr, nullptr, 0},
	{"com.apple.laf.AquaInternalFrameUI$5", nullptr, nullptr, 0},
	{"com.apple.laf.AquaInternalFrameUI$4", nullptr, nullptr, 0},
	{"com.apple.laf.AquaInternalFrameUI$3", nullptr, nullptr, 0},
	{"com.apple.laf.AquaInternalFrameUI$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaInternalFrameUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaInternalFrameUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaInternalFrameUI",
	"javax.swing.plaf.basic.BasicInternalFrameUI",
	"javax.swing.SwingConstants",
	_AquaInternalFrameUI_FieldInfo_,
	_AquaInternalFrameUI_MethodInfo_,
	nullptr,
	nullptr,
	_AquaInternalFrameUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameUI$ResizeBox,com.apple.laf.AquaInternalFrameUI$InternalFrameShadow,com.apple.laf.AquaInternalFrameUI$InternalFrameShadow$1,com.apple.laf.AquaInternalFrameUI$CompoundUIBorder,com.apple.laf.AquaInternalFrameUI$PropertyListener,com.apple.laf.AquaInternalFrameUI$AquaBorderListener,com.apple.laf.AquaInternalFrameUI$AquaInternalFrameButtonIcon,com.apple.laf.AquaInternalFrameUI$6,com.apple.laf.AquaInternalFrameUI$6$1,com.apple.laf.AquaInternalFrameUI$5,com.apple.laf.AquaInternalFrameUI$5$1,com.apple.laf.AquaInternalFrameUI$4,com.apple.laf.AquaInternalFrameUI$4$4,com.apple.laf.AquaInternalFrameUI$4$3,com.apple.laf.AquaInternalFrameUI$4$2,com.apple.laf.AquaInternalFrameUI$4$1,com.apple.laf.AquaInternalFrameUI$3,com.apple.laf.AquaInternalFrameUI$2,com.apple.laf.AquaInternalFrameUI$1"
};

$Object* allocate$AquaInternalFrameUI($Class* clazz) {
	return $of($alloc(AquaInternalFrameUI));
}

int32_t AquaInternalFrameUI::hashCode() {
	 return this->$BasicInternalFrameUI::hashCode();
}

bool AquaInternalFrameUI::equals(Object$* arg0) {
	 return this->$BasicInternalFrameUI::equals(arg0);
}

$Object* AquaInternalFrameUI::clone() {
	 return this->$BasicInternalFrameUI::clone();
}

$String* AquaInternalFrameUI::toString() {
	 return this->$BasicInternalFrameUI::toString();
}

void AquaInternalFrameUI::finalize() {
	this->$BasicInternalFrameUI::finalize();
}

$String* AquaInternalFrameUI::IS_PALETTE_PROPERTY = nullptr;
$String* AquaInternalFrameUI::FRAME_TYPE = nullptr;
$String* AquaInternalFrameUI::NORMAL_FRAME = nullptr;
$String* AquaInternalFrameUI::PALETTE_FRAME = nullptr;
$String* AquaInternalFrameUI::OPTION_DIALOG = nullptr;
$AquaUtils$RecyclableSingleton* AquaInternalFrameUI::closeIcon = nullptr;
$AquaUtils$RecyclableSingleton* AquaInternalFrameUI::minimizeIcon = nullptr;
$AquaUtils$RecyclableSingleton* AquaInternalFrameUI::zoomIcon = nullptr;
$AquaInternalFrameUI$InternalFrameShadow* AquaInternalFrameUI::documentWindowShadow = nullptr;
$AquaInternalFrameUI$InternalFrameShadow* AquaInternalFrameUI::paletteWindowShadow = nullptr;
$AquaUtils$RecyclableSingleton* AquaInternalFrameUI::RESIZE_ICON = nullptr;

$DesktopManager* AquaInternalFrameUI::access$7600(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->getDesktopManager();
}

$JInternalFrame* AquaInternalFrameUI::access$7500(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$DesktopManager* AquaInternalFrameUI::access$7400(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->getDesktopManager();
}

$JInternalFrame* AquaInternalFrameUI::access$7300(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$7200(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$7100(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$7000(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$6900(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$6800(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$6700(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$6600(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$DesktopManager* AquaInternalFrameUI::access$6500(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->getDesktopManager();
}

$JInternalFrame* AquaInternalFrameUI::access$6400(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$6300(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$6200(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$6100(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$6000(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$5900(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$5800(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$5700(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$5600(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$5500(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$5400(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$5300(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$5200(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$5100(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$5000(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$4900(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$4800(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$4700(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$4600(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$4500(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$4400(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$4300(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$4200(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$4100(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$4000(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$3900(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$3800(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$3700(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$3600(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$DesktopManager* AquaInternalFrameUI::access$3500(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->getDesktopManager();
}

$JInternalFrame* AquaInternalFrameUI::access$3400(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$3300(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$3200(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$3100(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$3000(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$2900(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$2800(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$2700(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$2600(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$2500(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$DesktopManager* AquaInternalFrameUI::access$2400(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->getDesktopManager();
}

$JInternalFrame* AquaInternalFrameUI::access$2300(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$DesktopManager* AquaInternalFrameUI::access$2200(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->getDesktopManager();
}

$JInternalFrame* AquaInternalFrameUI::access$2100(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$2000(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$1900(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$1800(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$DesktopManager* AquaInternalFrameUI::access$1700(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->getDesktopManager();
}

$JInternalFrame* AquaInternalFrameUI::access$1600(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$1500(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$1400(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$1300(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$DesktopManager* AquaInternalFrameUI::access$1200(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->getDesktopManager();
}

$JInternalFrame* AquaInternalFrameUI::access$1100(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$1000(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$900(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$800(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$700(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$600(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$500(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$400(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$300(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$200(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$100(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* AquaInternalFrameUI::access$000(AquaInternalFrameUI* x0) {
	$init(AquaInternalFrameUI);
	return $nc(x0)->frame;
}

int32_t AquaInternalFrameUI::getWhichButtonPressed() {
	return this->fWhichButtonPressed;
}

bool AquaInternalFrameUI::getMouseOverPressedButton() {
	return this->fMouseOverPressedButton;
}

bool AquaInternalFrameUI::getRollover() {
	return this->fRollover;
}

$ComponentUI* AquaInternalFrameUI::createUI($JComponent* b) {
	$init(AquaInternalFrameUI);
	return $new(AquaInternalFrameUI, $cast($JInternalFrame, b));
}

void AquaInternalFrameUI::init$($JInternalFrame* b) {
	$BasicInternalFrameUI::init$(b);
	this->fWhichButtonPressed = -1;
	this->fRollover = false;
	this->fDocumentEdited = false;
}

void AquaInternalFrameUI::installUI($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$set(this, frame, $cast($JInternalFrame, c));
	$nc(this->frame)->add($(static_cast<$Component*>($nc(this->frame)->getRootPane())), $of("Center"_s));
	installDefaults();
	installListeners();
	installComponents();
	installKeyboardActions();
	$var($Object, paletteProp, $nc(c)->getClientProperty(AquaInternalFrameUI::IS_PALETTE_PROPERTY));
	if (paletteProp != nullptr) {
		setPalette($nc(($cast($Boolean, paletteProp)))->booleanValue());
	} else {
		$assign(paletteProp, c->getClientProperty(AquaInternalFrameUI::FRAME_TYPE));
		if (paletteProp != nullptr) {
			setFrameType($cast($String, paletteProp));
		} else {
			setFrameType(AquaInternalFrameUI::NORMAL_FRAME);
		}
	}
	$nc(this->frame)->setMinimumSize($$new($Dimension, this->fIsPallet ? 120 : 150, this->fIsPallet ? 39 : 65));
	$nc(this->frame)->setOpaque(false);
	$var($Border, var$0, this->fIsPallet ? $cast($Border, $nc(AquaInternalFrameUI::paletteWindowShadow)->get()) : $cast($Border, $nc(AquaInternalFrameUI::documentWindowShadow)->get()));
	c->setBorder($$new($AquaInternalFrameUI$CompoundUIBorder, var$0, $(c->getBorder())));
}

void AquaInternalFrameUI::installDefaults() {
	$BasicInternalFrameUI::installDefaults();
	$set(this, fSelectedTextColor, $UIManager::getColor("InternalFrame.activeTitleForeground"_s));
	$set(this, fNotSelectedTextColor, $UIManager::getColor("InternalFrame.inactiveTitleForeground"_s));
}

void AquaInternalFrameUI::setSouthPane($JComponent* c) {
	if (this->southPane != nullptr) {
		$nc(this->frame)->remove(static_cast<$Component*>(this->southPane));
		deinstallMouseHandlers(this->southPane);
	}
	if (c != nullptr) {
		$nc(this->frame)->add(static_cast<$Component*>(c));
		installMouseHandlers(c);
	}
	$set(this, southPane, c);
}

$Icon* AquaInternalFrameUI::exportCloseIcon() {
	$init(AquaInternalFrameUI);
	return $cast($Icon, $nc(AquaInternalFrameUI::closeIcon)->get());
}

$Icon* AquaInternalFrameUI::exportMinimizeIcon() {
	$init(AquaInternalFrameUI);
	return $cast($Icon, $nc(AquaInternalFrameUI::minimizeIcon)->get());
}

$Icon* AquaInternalFrameUI::exportZoomIcon() {
	$init(AquaInternalFrameUI);
	return $cast($Icon, $nc(AquaInternalFrameUI::zoomIcon)->get());
}

void AquaInternalFrameUI::installKeyboardActions() {
}

void AquaInternalFrameUI::installComponents() {
	$var($JLayeredPane, layeredPane, $nc(this->frame)->getLayeredPane());
	$set(this, resizeBox, $new($AquaInternalFrameUI$ResizeBox, this, layeredPane));
	$nc(this->resizeBox)->repositionResizeBox();
	$nc(layeredPane)->add(static_cast<$Component*>(this->resizeBox));
	layeredPane->setLayer(this->resizeBox, $nc($JLayeredPane::DRAG_LAYER)->intValue());
	layeredPane->addComponentListener(this->resizeBox);
	$nc(this->resizeBox)->addListeners();
	$nc(this->resizeBox)->setVisible($nc(this->frame)->isResizable());
}

void AquaInternalFrameUI::installListeners() {
	$set(this, fPropertyListener, $new($AquaInternalFrameUI$PropertyListener, this));
	$nc(this->frame)->addPropertyChangeListener(this->fPropertyListener);
	$BasicInternalFrameUI::installListeners();
}

void AquaInternalFrameUI::uninstallComponents() {
	$BasicInternalFrameUI::uninstallComponents();
	$var($JLayeredPane, layeredPane, $nc(this->frame)->getLayeredPane());
	$nc(this->resizeBox)->removeListeners();
	$nc(layeredPane)->removeComponentListener(this->resizeBox);
	layeredPane->remove(static_cast<$Component*>(this->resizeBox));
	$set(this, resizeBox, nullptr);
}

void AquaInternalFrameUI::uninstallListeners() {
	$BasicInternalFrameUI::uninstallListeners();
	$nc(this->frame)->removePropertyChangeListener(this->fPropertyListener);
}

void AquaInternalFrameUI::uninstallKeyboardActions() {
}

void AquaInternalFrameUI::installMouseHandlers($JComponent* c) {
	$nc(c)->addMouseListener(static_cast<$MouseListener*>(static_cast<$MouseAdapter*>(this->borderListener)));
	c->addMouseMotionListener(static_cast<$MouseMotionListener*>(static_cast<$MouseAdapter*>(this->borderListener)));
}

void AquaInternalFrameUI::deinstallMouseHandlers($JComponent* c) {
	$nc(c)->removeMouseListener(static_cast<$MouseListener*>(static_cast<$MouseAdapter*>(this->borderListener)));
	c->removeMouseMotionListener(static_cast<$MouseMotionListener*>(static_cast<$MouseAdapter*>(this->borderListener)));
}

$ActionMap* AquaInternalFrameUI::createActionMap() {
	$useLocalCurrentObjectStackCache();
	$var($ActionMap, map, $new($ActionMapUIResource));
	$var($AquaLookAndFeel, lf, $cast($AquaLookAndFeel, $UIManager::getLookAndFeel()));
	$var($ActionMap, audioMap, $nc(lf)->getAudioActionMap());
	map->setParent(audioMap);
	return map;
}

$Dimension* AquaInternalFrameUI::getPreferredSize($JComponent* x) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, preferredSize, $BasicInternalFrameUI::getPreferredSize(x));
	$var($Dimension, minimumSize, $nc(this->frame)->getMinimumSize());
	if ($nc(preferredSize)->width < $nc(minimumSize)->width) {
		preferredSize->width = minimumSize->width;
	}
	if ($nc(preferredSize)->height < $nc(minimumSize)->height) {
		preferredSize->height = minimumSize->height;
	}
	return preferredSize;
}

void AquaInternalFrameUI::setNorthPane($JComponent* c) {
	replacePane(this->northPane, c);
	$set(this, northPane, c);
}

void AquaInternalFrameUI::replacePane($JComponent* currentPane, $JComponent* newPane) {
	if (currentPane != nullptr) {
		deinstallMouseHandlers(currentPane);
		$nc(this->frame)->remove(static_cast<$Component*>(currentPane));
	}
	if (newPane != nullptr) {
		$nc(this->frame)->add(static_cast<$Component*>(newPane));
		installMouseHandlers(newPane);
	}
}

$MouseInputAdapter* AquaInternalFrameUI::createBorderListener($JInternalFrame* w) {
	return $new($AquaInternalFrameUI$AquaBorderListener, this);
}

void AquaInternalFrameUI::setFrameType($String* frameType) {
	$useLocalCurrentObjectStackCache();
	$var($Color, bg, $nc(this->frame)->getBackground());
	bool replaceColor = (bg == nullptr || $instanceOf($UIResource, bg));
	$var($Font, font, $nc(this->frame)->getFont());
	bool replaceFont = (font == nullptr || $instanceOf($UIResource, font));
	bool isPalette = false;
	if ($nc(frameType)->equals(AquaInternalFrameUI::OPTION_DIALOG)) {
		$set(this, fAquaBorder, $AquaInternalFrameBorder::dialog());
		if (replaceColor) {
			$nc(this->frame)->setBackground($($UIManager::getColor("InternalFrame.optionDialogBackground"_s)));
		}
		if (replaceFont) {
			$nc(this->frame)->setFont($($UIManager::getFont("InternalFrame.optionDialogTitleFont"_s)));
		}
	} else if (frameType->equals(AquaInternalFrameUI::PALETTE_FRAME)) {
		$set(this, fAquaBorder, $AquaInternalFrameBorder::utility());
		if (replaceColor) {
			$nc(this->frame)->setBackground($($UIManager::getColor("InternalFrame.paletteBackground"_s)));
		}
		if (replaceFont) {
			$nc(this->frame)->setFont($($UIManager::getFont("InternalFrame.paletteTitleFont"_s)));
		}
		isPalette = true;
	} else {
		$set(this, fAquaBorder, $AquaInternalFrameBorder::window());
		if (replaceColor) {
			$nc(this->frame)->setBackground($($UIManager::getColor("InternalFrame.background"_s)));
		}
		if (replaceFont) {
			$nc(this->frame)->setFont($($UIManager::getFont("InternalFrame.titleFont"_s)));
		}
	}
	$nc(this->fAquaBorder)->setColors(this->fSelectedTextColor, this->fNotSelectedTextColor);
	$nc(this->frame)->setBorder(this->fAquaBorder);
	this->fIsPallet = isPalette;
}

void AquaInternalFrameUI::setPalette(bool isPalette) {
	setFrameType(isPalette ? AquaInternalFrameUI::PALETTE_FRAME : AquaInternalFrameUI::NORMAL_FRAME);
}

bool AquaInternalFrameUI::isDocumentEdited() {
	return this->fDocumentEdited;
}

void AquaInternalFrameUI::setDocumentEdited(bool flag) {
	this->fDocumentEdited = flag;
}

void AquaInternalFrameUI::updateComponentTreeUIActivation($Component* c, Object$* active) {
	$init(AquaInternalFrameUI);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JComponent, c)) {
		$init($AquaFocusHandler);
		$nc(($cast($JComponent, c)))->putClientProperty($AquaFocusHandler::FRAME_ACTIVE_PROPERTY, active);
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
				$var($Component, element, arr$->get(i$));
				{
					updateComponentTreeUIActivation(element, active);
				}
			}
		}
	}
}

void clinit$AquaInternalFrameUI($Class* class$) {
	$assignStatic(AquaInternalFrameUI::IS_PALETTE_PROPERTY, "JInternalFrame.isPalette"_s);
	$assignStatic(AquaInternalFrameUI::FRAME_TYPE, "JInternalFrame.frameType"_s);
	$assignStatic(AquaInternalFrameUI::NORMAL_FRAME, "normal"_s);
	$assignStatic(AquaInternalFrameUI::PALETTE_FRAME, "palette"_s);
	$assignStatic(AquaInternalFrameUI::OPTION_DIALOG, "optionDialog"_s);
	$assignStatic(AquaInternalFrameUI::closeIcon, $new($AquaInternalFrameUI$1));
	$assignStatic(AquaInternalFrameUI::minimizeIcon, $new($AquaInternalFrameUI$2));
	$assignStatic(AquaInternalFrameUI::zoomIcon, $new($AquaInternalFrameUI$3));
	$assignStatic(AquaInternalFrameUI::documentWindowShadow, $new($AquaInternalFrameUI$4));
	$assignStatic(AquaInternalFrameUI::paletteWindowShadow, $new($AquaInternalFrameUI$5));
	$assignStatic(AquaInternalFrameUI::RESIZE_ICON, $new($AquaInternalFrameUI$6));
}

AquaInternalFrameUI::AquaInternalFrameUI() {
}

$Class* AquaInternalFrameUI::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameUI, name, initialize, &_AquaInternalFrameUI_ClassInfo_, clinit$AquaInternalFrameUI, allocate$AquaInternalFrameUI);
	return class$;
}

$Class* AquaInternalFrameUI::class$ = nullptr;

		} // laf
	} // apple
} // com