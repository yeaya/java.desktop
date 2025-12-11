#include <com/apple/laf/AquaSliderUI.h>

#include <apple/laf/JRSUIConstants$Direction.h>
#include <apple/laf/JRSUIConstants$Focused.h>
#include <apple/laf/JRSUIConstants$Orientation.h>
#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$Size.h>
#include <apple/laf/JRSUIConstants$State.h>
#include <apple/laf/JRSUIState.h>
#include <apple/laf/JRSUIStateFactory.h>
#include <apple/laf/JRSUIUtils$NineSliceMetricsProvider.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaSliderUI$1.h>
#include <com/apple/laf/AquaSliderUI$2.h>
#include <com/apple/laf/AquaSliderUI$3.h>
#include <com/apple/laf/AquaSliderUI$4.h>
#include <com/apple/laf/AquaSliderUI$TrackListener.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <com/apple/laf/AquaUtilControlSize.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/Timer.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SliderUI.h>
#include <javax/swing/plaf/basic/BasicSliderUI$TrackListener.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <jcpp.h>

#undef ACTIVE
#undef DISABLED
#undef DOWN
#undef FALSE
#undef HORIZONTAL
#undef INACTIVE
#undef MINI
#undef NO
#undef NONE
#undef PRESSED
#undef REGULAR
#undef RIGHT
#undef SMALL
#undef VERTICAL
#undef YES

using $JRSUIConstants$Direction = ::apple::laf::JRSUIConstants$Direction;
using $JRSUIConstants$Focused = ::apple::laf::JRSUIConstants$Focused;
using $JRSUIConstants$Orientation = ::apple::laf::JRSUIConstants$Orientation;
using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$Size = ::apple::laf::JRSUIConstants$Size;
using $JRSUIConstants$State = ::apple::laf::JRSUIConstants$State;
using $JRSUIState = ::apple::laf::JRSUIState;
using $JRSUIStateFactory = ::apple::laf::JRSUIStateFactory;
using $JRSUIUtils$NineSliceMetricsProvider = ::apple::laf::JRSUIUtils$NineSliceMetricsProvider;
using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $AquaSliderUI$1 = ::com::apple::laf::AquaSliderUI$1;
using $AquaSliderUI$2 = ::com::apple::laf::AquaSliderUI$2;
using $AquaSliderUI$3 = ::com::apple::laf::AquaSliderUI$3;
using $AquaSliderUI$4 = ::com::apple::laf::AquaSliderUI$4;
using $AquaSliderUI$TrackListener = ::com::apple::laf::AquaSliderUI$TrackListener;
using $AquaUtilControlSize = ::com::apple::laf::AquaUtilControlSize;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JSlider = ::javax::swing::JSlider;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingConstants = ::javax::swing::SwingConstants;
using $Timer = ::javax::swing::Timer;
using $UIManager = ::javax::swing::UIManager;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SliderUI = ::javax::swing::plaf::SliderUI;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;
using $BasicSliderUI$TrackListener = ::javax::swing::plaf::basic::BasicSliderUI$TrackListener;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaSliderUI_FieldInfo_[] = {
	{"roundThumbDescriptor", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaSliderUI, roundThumbDescriptor)},
	{"pointingThumbDescriptor", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaSliderUI, pointingThumbDescriptor)},
	{"trackPainter", "Lcom/apple/laf/AquaPainter;", "Lcom/apple/laf/AquaPainter<Lapple/laf/JRSUIState;>;", $STATIC | $FINAL, $staticField(AquaSliderUI, trackPainter)},
	{"thumbPainter", "Lcom/apple/laf/AquaPainter;", "Lcom/apple/laf/AquaPainter<Lapple/laf/JRSUIState;>;", $FINAL, $field(AquaSliderUI, thumbPainter)},
	{"tickColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(AquaSliderUI, tickColor)},
	{"disabledTickColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(AquaSliderUI, disabledTickColor)},
	{"fIsDragging", "Z", nullptr, $PROTECTED | $TRANSIENT, $field(AquaSliderUI, fIsDragging)},
	{"kTickWidth", "I", nullptr, $STATIC | $FINAL, $constField(AquaSliderUI, kTickWidth)},
	{"kTickLength", "I", nullptr, $STATIC | $FINAL, $constField(AquaSliderUI, kTickLength)},
	{}
};

$MethodInfo _AquaSliderUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JSlider;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaSliderUI::*)($JSlider*)>(&AquaSliderUI::init$))},
	{"access$000", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$000))},
	{"access$100", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$100))},
	{"access$1000", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$1000))},
	{"access$1100", "(Lcom/apple/laf/AquaSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(AquaSliderUI*)>(&AquaSliderUI::access$1100))},
	{"access$1200", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$1200))},
	{"access$1300", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$1300))},
	{"access$1400", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$1400))},
	{"access$1500", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$1500))},
	{"access$1600", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$1600))},
	{"access$1700", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$1700))},
	{"access$1800", "(Lcom/apple/laf/AquaSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(AquaSliderUI*)>(&AquaSliderUI::access$1800))},
	{"access$1900", "(Lcom/apple/laf/AquaSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(AquaSliderUI*)>(&AquaSliderUI::access$1900))},
	{"access$200", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/Timer;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Timer*(*)(AquaSliderUI*)>(&AquaSliderUI::access$200))},
	{"access$2000", "(Lcom/apple/laf/AquaSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(AquaSliderUI*)>(&AquaSliderUI::access$2000))},
	{"access$2100", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$2100))},
	{"access$2200", "(Lcom/apple/laf/AquaSliderUI;)Z", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(AquaSliderUI*)>(&AquaSliderUI::access$2200))},
	{"access$2300", "(Lcom/apple/laf/AquaSliderUI;)Z", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(AquaSliderUI*)>(&AquaSliderUI::access$2300))},
	{"access$2400", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$2400))},
	{"access$2500", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$2500))},
	{"access$2600", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$2600))},
	{"access$2700", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$2700))},
	{"access$2800", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$2800))},
	{"access$2900", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$2900))},
	{"access$300", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$300))},
	{"access$3000", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$3000))},
	{"access$3100", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$3100))},
	{"access$3200", "(Lcom/apple/laf/AquaSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(AquaSliderUI*)>(&AquaSliderUI::access$3200))},
	{"access$3300", "(Lcom/apple/laf/AquaSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(AquaSliderUI*)>(&AquaSliderUI::access$3300))},
	{"access$3400", "(Lcom/apple/laf/AquaSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(AquaSliderUI*)>(&AquaSliderUI::access$3400))},
	{"access$3500", "(Lcom/apple/laf/AquaSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(AquaSliderUI*)>(&AquaSliderUI::access$3500))},
	{"access$3600", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$3600))},
	{"access$3700", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$3700))},
	{"access$3800", "(Lcom/apple/laf/AquaSliderUI;I)I", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)(AquaSliderUI*,int32_t)>(&AquaSliderUI::access$3800))},
	{"access$3900", "(Lcom/apple/laf/AquaSliderUI;)Z", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(AquaSliderUI*)>(&AquaSliderUI::access$3900))},
	{"access$400", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$400))},
	{"access$4000", "(Lcom/apple/laf/AquaSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(AquaSliderUI*)>(&AquaSliderUI::access$4000))},
	{"access$4100", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$4100))},
	{"access$4200", "(Lcom/apple/laf/AquaSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(AquaSliderUI*)>(&AquaSliderUI::access$4200))},
	{"access$4300", "(Lcom/apple/laf/AquaSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(AquaSliderUI*)>(&AquaSliderUI::access$4300))},
	{"access$4400", "(Lcom/apple/laf/AquaSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(AquaSliderUI*)>(&AquaSliderUI::access$4400))},
	{"access$4500", "(Lcom/apple/laf/AquaSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(AquaSliderUI*)>(&AquaSliderUI::access$4500))},
	{"access$4600", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$4600))},
	{"access$4700", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$4700))},
	{"access$4800", "(Lcom/apple/laf/AquaSliderUI;I)I", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)(AquaSliderUI*,int32_t)>(&AquaSliderUI::access$4800))},
	{"access$4900", "(Lcom/apple/laf/AquaSliderUI;)Z", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(AquaSliderUI*)>(&AquaSliderUI::access$4900))},
	{"access$500", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$500))},
	{"access$5000", "(Lcom/apple/laf/AquaSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(AquaSliderUI*)>(&AquaSliderUI::access$5000))},
	{"access$5100", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$5100))},
	{"access$5200", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$5200))},
	{"access$5300", "(Lcom/apple/laf/AquaSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(AquaSliderUI*)>(&AquaSliderUI::access$5300))},
	{"access$5400", "(Lcom/apple/laf/AquaSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(AquaSliderUI*)>(&AquaSliderUI::access$5400))},
	{"access$600", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$600))},
	{"access$700", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$700))},
	{"access$800", "(Lcom/apple/laf/AquaSliderUI;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(AquaSliderUI*)>(&AquaSliderUI::access$800))},
	{"access$900", "(Lcom/apple/laf/AquaSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(AquaSliderUI*)>(&AquaSliderUI::access$900))},
	{"applySizeFor", "(Ljavax/swing/JComponent;Lapple/laf/JRSUIConstants$Size;)V", nullptr, $PUBLIC},
	{"calculateThumbLocation", "()V", nullptr, $PROTECTED},
	{"calculateThumbSize", "()V", nullptr, $PROTECTED},
	{"calculateTickRect", "()V", nullptr, $PROTECTED},
	{"createChangeListener", "(Ljavax/swing/JSlider;)Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED},
	{"createTrackListener", "(Ljavax/swing/JSlider;)Ljavax/swing/plaf/basic/BasicSliderUI$TrackListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaSliderUI::createUI))},
	{"getDirection", "(Lapple/laf/JRSUIConstants$Orientation;)Lapple/laf/JRSUIConstants$Direction;", nullptr, 0},
	{"getPreferredHorizontalSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredVerticalSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getScale", "()I", nullptr, 0},
	{"getState", "()Lapple/laf/JRSUIConstants$State;", nullptr, 0},
	{"installListeners", "(Ljavax/swing/JSlider;)V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintThumb", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Lapple/laf/JRSUIConstants$Orientation;Lapple/laf/JRSUIConstants$State;)V", nullptr, $PUBLIC},
	{"paintTicks", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintTrack", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Lapple/laf/JRSUIConstants$Orientation;Lapple/laf/JRSUIConstants$State;)V", nullptr, $PUBLIC},
	{"shouldUseArrowThumb", "()Z", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallListeners", "(Ljavax/swing/JSlider;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaSliderUI_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaUtilControlSize$Sizeable", "com.apple.laf.AquaUtilControlSize", "Sizeable", $STATIC | $INTERFACE | $ABSTRACT},
	{"com.apple.laf.AquaSliderUI$TrackListener", "com.apple.laf.AquaSliderUI", "TrackListener", 0},
	{"com.apple.laf.AquaSliderUI$4", nullptr, nullptr, 0},
	{"com.apple.laf.AquaSliderUI$3", nullptr, nullptr, 0},
	{"com.apple.laf.AquaSliderUI$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaSliderUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaSliderUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaSliderUI",
	"javax.swing.plaf.basic.BasicSliderUI",
	"com.apple.laf.AquaUtilControlSize$Sizeable",
	_AquaSliderUI_FieldInfo_,
	_AquaSliderUI_MethodInfo_,
	nullptr,
	nullptr,
	_AquaSliderUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaSliderUI$TrackListener,com.apple.laf.AquaSliderUI$4,com.apple.laf.AquaSliderUI$3,com.apple.laf.AquaSliderUI$2,com.apple.laf.AquaSliderUI$2$1,com.apple.laf.AquaSliderUI$1,com.apple.laf.AquaSliderUI$1$1"
};

$Object* allocate$AquaSliderUI($Class* clazz) {
	return $of($alloc(AquaSliderUI));
}

int32_t AquaSliderUI::hashCode() {
	 return this->$BasicSliderUI::hashCode();
}

bool AquaSliderUI::equals(Object$* arg0) {
	 return this->$BasicSliderUI::equals(arg0);
}

$Object* AquaSliderUI::clone() {
	 return this->$BasicSliderUI::clone();
}

$String* AquaSliderUI::toString() {
	 return this->$BasicSliderUI::toString();
}

void AquaSliderUI::finalize() {
	this->$BasicSliderUI::finalize();
}

$AquaUtils$RecyclableSingleton* AquaSliderUI::roundThumbDescriptor = nullptr;
$AquaUtils$RecyclableSingleton* AquaSliderUI::pointingThumbDescriptor = nullptr;
$AquaPainter* AquaSliderUI::trackPainter = nullptr;

$Rectangle* AquaSliderUI::access$5400(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->thumbRect;
}

$Rectangle* AquaSliderUI::access$5300(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->thumbRect;
}

$JSlider* AquaSliderUI::access$5200(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$JSlider* AquaSliderUI::access$5100(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$Rectangle* AquaSliderUI::access$5000(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->thumbRect;
}

bool AquaSliderUI::access$4900(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->drawInverted();
}

int32_t AquaSliderUI::access$4800(AquaSliderUI* x0, int32_t x1) {
	$init(AquaSliderUI);
	return $nc(x0)->xPositionForValue(x1);
}

$JSlider* AquaSliderUI::access$4700(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$JSlider* AquaSliderUI::access$4600(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$Rectangle* AquaSliderUI::access$4500(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->trackRect;
}

$Rectangle* AquaSliderUI::access$4400(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->trackRect;
}

$Rectangle* AquaSliderUI::access$4300(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->trackRect;
}

$Rectangle* AquaSliderUI::access$4200(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->thumbRect;
}

$JSlider* AquaSliderUI::access$4100(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$Rectangle* AquaSliderUI::access$4000(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->thumbRect;
}

bool AquaSliderUI::access$3900(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->drawInverted();
}

int32_t AquaSliderUI::access$3800(AquaSliderUI* x0, int32_t x1) {
	$init(AquaSliderUI);
	return $nc(x0)->yPositionForValue(x1);
}

$JSlider* AquaSliderUI::access$3700(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$JSlider* AquaSliderUI::access$3600(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$Rectangle* AquaSliderUI::access$3500(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->trackRect;
}

$Rectangle* AquaSliderUI::access$3400(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->trackRect;
}

$Rectangle* AquaSliderUI::access$3300(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->trackRect;
}

$Rectangle* AquaSliderUI::access$3200(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->thumbRect;
}

$JSlider* AquaSliderUI::access$3100(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$JSlider* AquaSliderUI::access$3000(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$JSlider* AquaSliderUI::access$2900(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$JSlider* AquaSliderUI::access$2800(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$JSlider* AquaSliderUI::access$2700(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$JSlider* AquaSliderUI::access$2600(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$JSlider* AquaSliderUI::access$2500(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$JSlider* AquaSliderUI::access$2400(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

bool AquaSliderUI::access$2300(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->drawInverted();
}

bool AquaSliderUI::access$2200(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->drawInverted();
}

$JSlider* AquaSliderUI::access$2100(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$Rectangle* AquaSliderUI::access$2000(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->thumbRect;
}

$Rectangle* AquaSliderUI::access$1900(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->thumbRect;
}

$Rectangle* AquaSliderUI::access$1800(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->thumbRect;
}

$JSlider* AquaSliderUI::access$1700(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$JSlider* AquaSliderUI::access$1600(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$JSlider* AquaSliderUI::access$1500(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$JSlider* AquaSliderUI::access$1400(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$JSlider* AquaSliderUI::access$1300(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$JSlider* AquaSliderUI::access$1200(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$Rectangle* AquaSliderUI::access$1100(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->thumbRect;
}

$JSlider* AquaSliderUI::access$1000(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$JSlider* AquaSliderUI::access$900(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

void AquaSliderUI::access$800(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	$nc(x0)->calculateGeometry();
}

$JSlider* AquaSliderUI::access$700(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$JSlider* AquaSliderUI::access$600(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$JSlider* AquaSliderUI::access$500(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$JSlider* AquaSliderUI::access$400(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$JSlider* AquaSliderUI::access$300(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$Timer* AquaSliderUI::access$200(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->scrollTimer;
}

$JSlider* AquaSliderUI::access$100(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$JSlider* AquaSliderUI::access$000(AquaSliderUI* x0) {
	$init(AquaSliderUI);
	return $nc(x0)->slider;
}

$ComponentUI* AquaSliderUI::createUI($JComponent* c) {
	$init(AquaSliderUI);
	return $new(AquaSliderUI, $cast($JSlider, c));
}

void AquaSliderUI::init$($JSlider* b) {
	$BasicSliderUI::init$(b);
	$set(this, thumbPainter, $AquaPainter::create($($JRSUIStateFactory::getSliderThumb())));
	this->fIsDragging = false;
}

void AquaSliderUI::installUI($JComponent* c) {
	$BasicSliderUI::installUI(c);
	$init($Boolean);
	$LookAndFeel::installProperty(this->slider, "opaque"_s, $Boolean::FALSE);
	$set(this, tickColor, $UIManager::getColor("Slider.tickColor"_s));
}

$BasicSliderUI$TrackListener* AquaSliderUI::createTrackListener($JSlider* s) {
	return $new($AquaSliderUI$TrackListener, this);
}

void AquaSliderUI::installListeners($JSlider* s) {
	$BasicSliderUI::installListeners(s);
	$AquaFocusHandler::install(s);
	$AquaUtilControlSize::addSizePropertyListener(s);
}

void AquaSliderUI::uninstallListeners($JSlider* s) {
	$AquaUtilControlSize::removeSizePropertyListener(s);
	$AquaFocusHandler::uninstall(s);
	$BasicSliderUI::uninstallListeners(s);
}

void AquaSliderUI::applySizeFor($JComponent* c, $JRSUIConstants$Size* size) {
	$nc($nc(this->thumbPainter)->state)->set(size);
	$nc($nc(AquaSliderUI::trackPainter)->state)->set(size);
}

void AquaSliderUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	recalculateIfInsetsChanged();
	$var($Rectangle, clip, $nc(g)->getClipBounds());
	$init($JRSUIConstants$Orientation);
	$var($JRSUIConstants$Orientation, orientation, $nc(this->slider)->getOrientation() == $SwingConstants::HORIZONTAL ? $JRSUIConstants$Orientation::HORIZONTAL : $JRSUIConstants$Orientation::VERTICAL);
	$var($JRSUIConstants$State, state, getState());
	if ($nc(this->slider)->getPaintTrack()) {
		bool trackIntersectsClip = $nc(clip)->intersects(this->trackRect);
		if (!trackIntersectsClip) {
			calculateGeometry();
		}
		if (trackIntersectsClip || clip->intersects(this->thumbRect)) {
			paintTrack(g, c, orientation, state);
		}
	}
	bool var$0 = $nc(this->slider)->getPaintTicks();
	if (var$0 && $nc(clip)->intersects(this->tickRect)) {
		paintTicks(g);
	}
	bool var$1 = $nc(this->slider)->getPaintLabels();
	if (var$1 && $nc(clip)->intersects(this->labelRect)) {
		paintLabels(g);
	}
	if ($nc(clip)->intersects(this->thumbRect)) {
		paintThumb(g, c, orientation, state);
	}
}

void AquaSliderUI::paintTrack($Graphics* g, $JComponent* c, $JRSUIConstants$Orientation* orientation, $JRSUIConstants$State* state) {
	$nc($nc(AquaSliderUI::trackPainter)->state)->set(orientation);
	$nc($nc(AquaSliderUI::trackPainter)->state)->set(state);
	$nc(AquaSliderUI::trackPainter)->paint(g, c, $nc(this->trackRect)->x, $nc(this->trackRect)->y, $nc(this->trackRect)->width, $nc(this->trackRect)->height);
}

void AquaSliderUI::paintThumb($Graphics* g, $JComponent* c, $JRSUIConstants$Orientation* orientation, $JRSUIConstants$State* state) {
	$nc($nc(this->thumbPainter)->state)->set(orientation);
	$nc($nc(this->thumbPainter)->state)->set(state);
	$init($JRSUIConstants$Focused);
	$nc($nc(this->thumbPainter)->state)->set($nc(this->slider)->hasFocus() ? static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Focused::YES) : static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Focused::NO));
	$nc($nc(this->thumbPainter)->state)->set($(getDirection(orientation)));
	$nc(this->thumbPainter)->paint(g, c, $nc(this->thumbRect)->x, $nc(this->thumbRect)->y, $nc(this->thumbRect)->width, $nc(this->thumbRect)->height);
}

$JRSUIConstants$Direction* AquaSliderUI::getDirection($JRSUIConstants$Orientation* orientation) {
	if (shouldUseArrowThumb()) {
		$init($JRSUIConstants$Orientation);
		$init($JRSUIConstants$Direction);
		return orientation == $JRSUIConstants$Orientation::HORIZONTAL ? $JRSUIConstants$Direction::DOWN : $JRSUIConstants$Direction::RIGHT;
	}
	$init($JRSUIConstants$Direction);
	return $JRSUIConstants$Direction::NONE;
}

$JRSUIConstants$State* AquaSliderUI::getState() {
	if (!$nc(this->slider)->isEnabled()) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::DISABLED;
	}
	if (this->fIsDragging) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::PRESSED;
	}
	if (!$AquaFocusHandler::isActive(this->slider)) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::INACTIVE;
	}
	$init($JRSUIConstants$State);
	return $JRSUIConstants$State::ACTIVE;
}

void AquaSliderUI::paintTicks($Graphics* g) {
	if ($nc(this->slider)->isEnabled()) {
		$nc(g)->setColor(this->tickColor);
	} else {
		if (this->disabledTickColor == nullptr) {
			int32_t var$0 = $nc(this->tickColor)->getRed();
			int32_t var$1 = $nc(this->tickColor)->getGreen();
			int32_t var$2 = $nc(this->tickColor)->getBlue();
			$set(this, disabledTickColor, $new($Color, var$0, var$1, var$2, $nc(this->tickColor)->getAlpha() / 2));
		}
		$nc(g)->setColor(this->disabledTickColor);
	}
	$BasicSliderUI::paintTicks(g);
}

void AquaSliderUI::calculateThumbLocation() {
	$BasicSliderUI::calculateThumbLocation();
	if (shouldUseArrowThumb()) {
		bool isHorizonatal = $nc(this->slider)->getOrientation() == $SwingConstants::HORIZONTAL;
		$var($JRSUIConstants$Size, size, $AquaUtilControlSize::getUserSizeFrom(this->slider));
		$init($JRSUIConstants$Size);
		if (size == $JRSUIConstants$Size::REGULAR) {
			if (isHorizonatal) {
				$nc(this->thumbRect)->y += 3;
			} else {
				$nc(this->thumbRect)->x += 2;
			}
			return;
		}
		if (size == $JRSUIConstants$Size::SMALL) {
			if (isHorizonatal) {
				$nc(this->thumbRect)->y += 2;
			} else {
				$nc(this->thumbRect)->x += 2;
			}
			return;
		}
		if (size == $JRSUIConstants$Size::MINI) {
			if (isHorizonatal) {
				$nc(this->thumbRect)->y += 1;
			}
			return;
		}
	}
}

void AquaSliderUI::calculateThumbSize() {
	$useLocalCurrentObjectStackCache();
	$var($AquaUtilControlSize$SizeDescriptor, descriptor, shouldUseArrowThumb() ? $cast($AquaUtilControlSize$SizeDescriptor, $nc(AquaSliderUI::pointingThumbDescriptor)->get()) : $cast($AquaUtilControlSize$SizeDescriptor, $nc(AquaSliderUI::roundThumbDescriptor)->get()));
	$var($AquaUtilControlSize$SizeVariant, variant, $nc(descriptor)->get(static_cast<$JComponent*>(this->slider)));
	if ($nc(this->slider)->getOrientation() == $SwingConstants::HORIZONTAL) {
		$nc(this->thumbRect)->setSize($nc(variant)->w, variant->h);
	} else {
		$nc(this->thumbRect)->setSize($nc(variant)->h, variant->w);
	}
}

bool AquaSliderUI::shouldUseArrowThumb() {
	bool var$0 = $nc(this->slider)->getPaintTicks();
	if (var$0 || $nc(this->slider)->getPaintLabels()) {
		return true;
	}
	$var($Object, shouldPaintArrowThumbProperty, $nc(this->slider)->getClientProperty("Slider.paintThumbArrowShape"_s));
	if (shouldPaintArrowThumbProperty != nullptr && $instanceOf($Boolean, shouldPaintArrowThumbProperty)) {
		return $nc(($cast($Boolean, shouldPaintArrowThumbProperty)))->booleanValue();
	}
	return false;
}

void AquaSliderUI::calculateTickRect() {
	int32_t tickLength = $nc(this->slider)->getPaintTicks() ? getTickLength() : 0;
	if ($nc(this->slider)->getOrientation() == $SwingConstants::HORIZONTAL) {
		$nc(this->tickRect)->height = tickLength;
		$nc(this->tickRect)->x = $nc(this->trackRect)->x + this->trackBuffer;
		$nc(this->tickRect)->y = $nc(this->trackRect)->y + $nc(this->trackRect)->height - ($nc(this->tickRect)->height / 2);
		$nc(this->tickRect)->width = $nc(this->trackRect)->width - (this->trackBuffer * 2);
	} else {
		$nc(this->tickRect)->width = tickLength;
		$nc(this->tickRect)->x = $nc(this->trackRect)->x + $nc(this->trackRect)->width - ($nc(this->tickRect)->width / 2);
		$nc(this->tickRect)->y = $nc(this->trackRect)->y + this->trackBuffer;
		$nc(this->tickRect)->height = $nc(this->trackRect)->height - (this->trackBuffer * 2);
	}
}

$Dimension* AquaSliderUI::getPreferredHorizontalSize() {
	return $new($Dimension, 190, 21);
}

$Dimension* AquaSliderUI::getPreferredVerticalSize() {
	return $new($Dimension, 21, 190);
}

$ChangeListener* AquaSliderUI::createChangeListener($JSlider* s) {
	return $new($AquaSliderUI$4, this);
}

int32_t AquaSliderUI::getScale() {
	if (!$nc(this->slider)->getSnapToTicks()) {
		return 1;
	}
	int32_t scale = $nc(this->slider)->getMinorTickSpacing();
	if (scale < 1) {
		scale = $nc(this->slider)->getMajorTickSpacing();
	}
	if (scale < 1) {
		return 1;
	}
	return scale;
}

void clinit$AquaSliderUI($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(AquaSliderUI::roundThumbDescriptor, $new($AquaSliderUI$1));
	$assignStatic(AquaSliderUI::pointingThumbDescriptor, $new($AquaSliderUI$2));
	$var($JRSUIState, var$0, $JRSUIStateFactory::getSliderTrack());
	$assignStatic(AquaSliderUI::trackPainter, $AquaPainter::create(var$0, $$new($AquaSliderUI$3)));
}

AquaSliderUI::AquaSliderUI() {
}

$Class* AquaSliderUI::load$($String* name, bool initialize) {
	$loadClass(AquaSliderUI, name, initialize, &_AquaSliderUI_ClassInfo_, clinit$AquaSliderUI, allocate$AquaSliderUI);
	return class$;
}

$Class* AquaSliderUI::class$ = nullptr;

		} // laf
	} // apple
} // com