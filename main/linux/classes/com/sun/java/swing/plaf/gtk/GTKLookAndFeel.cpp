#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel.h>

#include <com/sun/java/swing/plaf/gtk/GTKColorType.h>
#include <com/sun/java/swing/plaf/gtk/GTKConstants$PositionType.h>
#include <com/sun/java/swing/plaf/gtk/GTKConstants$StateType.h>
#include <com/sun/java/swing/plaf/gtk/GTKEngine$Settings.h>
#include <com/sun/java/swing/plaf/gtk/GTKEngine.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>
#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel$1.h>
#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel$1FontLazyValue.h>
#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel$2.h>
#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel$3.h>
#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel$GnomeLayoutStyle.h>
#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel$WeakPCL.h>
#include <com/sun/java/swing/plaf/gtk/GTKStyle$GTKLazyValue.h>
#include <com/sun/java/swing/plaf/gtk/GTKStyle$GTKStockIconInfo.h>
#include <com/sun/java/swing/plaf/gtk/GTKStyle.h>
#include <com/sun/java/swing/plaf/gtk/GTKStyleFactory.h>
#include <com/sun/java/swing/plaf/gtk/PangoFonts.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Insets.h>
#include <java/awt/Toolkit.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/InternalError.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/LayoutStyle.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIDefaults$LazyInputMap.h>
#include <javax/swing/UIDefaults$LazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/BorderUIResource$EmptyBorderUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/DimensionUIResource.h>
#include <javax/swing/plaf/InsetsUIResource.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthStyleFactory.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/UNIXToolkit$GtkVersions.h>
#include <sun/awt/UNIXToolkit.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/swing/DefaultLayoutStyle.h>
#include <sun/swing/SwingAccessor$UIDefaultsAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef ACTIVE
#undef BACKGROUND
#undef BLACK
#undef BLACK_COLOR
#undef BOTTOM
#undef BUTTON
#undef CHECK_BOX
#undef CHECK_BOX_MENU_ITEM
#undef COLOR_CHOOSER
#undef COMBO_BOX
#undef DARK
#undef DESKTOP_PANE
#undef DISABLED
#undef EDITOR_PANE
#undef ENABLED
#undef FALSE
#undef FOREGROUND
#undef FORMATTED_TEXT_FIELD
#undef GTK2
#undef GTK3
#undef GTK_CURSOR_BLINK
#undef GTK_CURSOR_BLINK_TIME
#undef GTK_FONT_NAME
#undef GTK_ICON_SIZES
#undef INSENSITIVE
#undef INSTANCE
#undef INTERNAL_FRAME
#undef IS_3
#undef LABEL
#undef LEADING
#undef LEFT
#undef LIGHT
#undef LIST
#undef MENU
#undef MENU_BAR
#undef MENU_ITEM
#undef MID
#undef MOUSE_OVER
#undef NORMAL
#undef OPTION_PANE
#undef PANEL
#undef PASSWORD_FIELD
#undef POPUP_MENU
#undef PRELIGHT
#undef PRESSED
#undef PROGRESS_BAR
#undef RADIO_BUTTON
#undef RADIO_BUTTON_MENU_ITEM
#undef RIGHT
#undef SCROLL_BAR
#undef SCROLL_PANE
#undef SELECTED
#undef SLIDER_TRACK
#undef SPINNER
#undef SPLIT_PANE
#undef TABBED_PANE
#undef TABBED_PANE_TAB
#undef TABLE
#undef TABLE_HEADER
#undef TEXT_AREA
#undef TEXT_BACKGROUND
#undef TEXT_FIELD
#undef TEXT_FOREGROUND
#undef TEXT_PANE
#undef TOGGLE_BUTTON
#undef TOOL_BAR
#undef TOOL_TIP
#undef TOP
#undef TREE
#undef TRUE
#undef VIEWPORT
#undef WHITE

using $GTKColorType = ::com::sun::java::swing::plaf::gtk::GTKColorType;
using $GTKConstants$PositionType = ::com::sun::java::swing::plaf::gtk::GTKConstants$PositionType;
using $GTKConstants$StateType = ::com::sun::java::swing::plaf::gtk::GTKConstants$StateType;
using $GTKEngine = ::com::sun::java::swing::plaf::gtk::GTKEngine;
using $GTKEngine$Settings = ::com::sun::java::swing::plaf::gtk::GTKEngine$Settings;
using $GTKFileChooserUI = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI;
using $GTKLookAndFeel$1 = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel$1;
using $GTKLookAndFeel$1FontLazyValue = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel$1FontLazyValue;
using $GTKLookAndFeel$2 = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel$2;
using $GTKLookAndFeel$3 = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel$3;
using $GTKLookAndFeel$GnomeLayoutStyle = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel$GnomeLayoutStyle;
using $GTKLookAndFeel$WeakPCL = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel$WeakPCL;
using $GTKStyle = ::com::sun::java::swing::plaf::gtk::GTKStyle;
using $GTKStyle$GTKLazyValue = ::com::sun::java::swing::plaf::gtk::GTKStyle$GTKLazyValue;
using $GTKStyle$GTKStockIconInfo = ::com::sun::java::swing::plaf::gtk::GTKStyle$GTKStockIconInfo;
using $GTKStyleFactory = ::com::sun::java::swing::plaf::gtk::GTKStyleFactory;
using $PangoFonts = ::com::sun::java::swing::plaf::gtk::PangoFonts;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $Insets = ::java::awt::Insets;
using $Toolkit = ::java::awt::Toolkit;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $JComponent = ::javax::swing::JComponent;
using $JTextField = ::javax::swing::JTextField;
using $LayoutStyle = ::javax::swing::LayoutStyle;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyInputMap = ::javax::swing::UIDefaults$LazyInputMap;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;
using $UIManager = ::javax::swing::UIManager;
using $BorderUIResource$EmptyBorderUIResource = ::javax::swing::plaf::BorderUIResource$EmptyBorderUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $DimensionUIResource = ::javax::swing::plaf::DimensionUIResource;
using $InsetsUIResource = ::javax::swing::plaf::InsetsUIResource;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthStyleFactory = ::javax::swing::plaf::synth::SynthStyleFactory;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $SunToolkit = ::sun::awt::SunToolkit;
using $UNIXToolkit = ::sun::awt::UNIXToolkit;
using $UNIXToolkit$GtkVersions = ::sun::awt::UNIXToolkit$GtkVersions;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $DefaultLayoutStyle = ::sun::swing::DefaultLayoutStyle;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingAccessor$UIDefaultsAccessor = ::sun::swing::SwingAccessor$UIDefaultsAccessor;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKLookAndFeel$$Lambda$lambda$initComponentDefaults$0 : public $UIDefaults$LazyValue {
	$class(GTKLookAndFeel$$Lambda$lambda$initComponentDefaults$0, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return GTKLookAndFeel::lambda$initComponentDefaults$0(t);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GTKLookAndFeel$$Lambda$lambda$initComponentDefaults$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo GTKLookAndFeel$$Lambda$lambda$initComponentDefaults$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GTKLookAndFeel$$Lambda$lambda$initComponentDefaults$0::*)()>(&GTKLookAndFeel$$Lambda$lambda$initComponentDefaults$0::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo GTKLookAndFeel$$Lambda$lambda$initComponentDefaults$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$$Lambda$lambda$initComponentDefaults$0",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	nullptr,
	methodInfos
};
$Class* GTKLookAndFeel$$Lambda$lambda$initComponentDefaults$0::load$($String* name, bool initialize) {
	$loadClass(GTKLookAndFeel$$Lambda$lambda$initComponentDefaults$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GTKLookAndFeel$$Lambda$lambda$initComponentDefaults$0::class$ = nullptr;

$FieldInfo _GTKLookAndFeel_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GTKLookAndFeel, $assertionsDisabled)},
	{"IS_22", "Z", nullptr, $PRIVATE | $STATIC, $staticField(GTKLookAndFeel, IS_22)},
	{"IS_3", "Z", nullptr, $PRIVATE | $STATIC, $staticField(GTKLookAndFeel, IS_3)},
	{"aaTextInfo", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;", $STATIC, $staticField(GTKLookAndFeel, aaTextInfo)},
	{"gtkAAFontSettingsCond", "Z", nullptr, $PRIVATE | $STATIC, $staticField(GTKLookAndFeel, gtkAAFontSettingsCond)},
	{"fallbackFont", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(GTKLookAndFeel, fallbackFont)},
	{"inInitialize", "Z", nullptr, $PRIVATE, $field(GTKLookAndFeel, inInitialize)},
	{"pclInstalled", "Z", nullptr, $PRIVATE, $field(GTKLookAndFeel, pclInstalled)},
	{"styleFactory", "Lcom/sun/java/swing/plaf/gtk/GTKStyleFactory;", nullptr, $PRIVATE, $field(GTKLookAndFeel, styleFactory)},
	{"gtkThemeName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(GTKLookAndFeel, gtkThemeName)},
	{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Lcom/sun/java/swing/plaf/gtk/GTKLookAndFeel;>;", $STATIC, $staticField(GTKLookAndFeel, queue)},
	{}
};

$MethodInfo _GTKLookAndFeel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GTKLookAndFeel::*)()>(&GTKLookAndFeel::init$))},
	{"SwingOrientationConstantToGTK", "(I)Lcom/sun/java/swing/plaf/gtk/GTKConstants$PositionType;", nullptr, $STATIC, $method(static_cast<$GTKConstants$PositionType*(*)(int32_t)>(&GTKLookAndFeel::SwingOrientationConstantToGTK))},
	{"configIconSizes", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(GTKLookAndFeel::*)($String*)>(&GTKLookAndFeel::configIconSizes))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&GTKLookAndFeel::createUI))},
	{"flushUnreferenced", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&GTKLookAndFeel::flushUnreferenced))},
	{"getDefaults", "()Ljavax/swing/UIDefaults;", nullptr, $PUBLIC},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getGTKStyleFactory", "()Lcom/sun/java/swing/plaf/gtk/GTKStyleFactory;", nullptr, $PRIVATE, $method(static_cast<$GTKStyleFactory*(GTKLookAndFeel::*)()>(&GTKLookAndFeel::getGTKStyleFactory))},
	{"getGtkThemeName", "()Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)()>(&GTKLookAndFeel::getGtkThemeName))},
	{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLayoutStyle", "()Ljavax/swing/LayoutStyle;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"initComponentDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED},
	{"initResourceBundle", "(Ljavax/swing/UIDefaults;)V", nullptr, $PRIVATE, $method(static_cast<void(GTKLookAndFeel::*)($UIDefaults*)>(&GTKLookAndFeel::initResourceBundle))},
	{"initSystemColorDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED},
	{"initialize", "()V", nullptr, $PUBLIC},
	{"installPropertyChangeListeners", "()V", nullptr, $PRIVATE, $method(static_cast<void(GTKLookAndFeel::*)()>(&GTKLookAndFeel::installPropertyChangeListeners))},
	{"is2_2", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&GTKLookAndFeel::is2_2))},
	{"is3", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&GTKLookAndFeel::is3))},
	{"isLeftToRight", "(Ljava/awt/Component;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Component*)>(&GTKLookAndFeel::isLeftToRight))},
	{"isNativeLookAndFeel", "()Z", nullptr, $PUBLIC},
	{"isSupportedLookAndFeel", "()Z", nullptr, $PUBLIC},
	{"isText", "(Ljavax/swing/plaf/synth/Region;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Region*)>(&GTKLookAndFeel::isText))},
	{"lambda$initComponentDefaults$0", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&GTKLookAndFeel::lambda$initComponentDefaults$0))},
	{"loadStyles", "()V", nullptr, $PRIVATE, $method(static_cast<void(GTKLookAndFeel::*)()>(&GTKLookAndFeel::loadStyles))},
	{"loadSystemColors", "(Ljavax/swing/UIDefaults;[Ljava/lang/String;Z)V", nullptr, $PROTECTED},
	{"shouldUpdateStyleOnAncestorChanged", "()Z", nullptr, $PUBLIC},
	{"synthStateToGTKState", "(Ljavax/swing/plaf/synth/Region;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($Region*,int32_t)>(&GTKLookAndFeel::synthStateToGTKState))},
	{"synthStateToGTKStateType", "(I)Lcom/sun/java/swing/plaf/gtk/GTKConstants$StateType;", nullptr, $STATIC, $method(static_cast<$GTKConstants$StateType*(*)(int32_t)>(&GTKLookAndFeel::synthStateToGTKStateType))},
	{}
};

$InnerClassInfo _GTKLookAndFeel_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$4", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$GnomeLayoutStyle", "com.sun.java.swing.plaf.gtk.GTKLookAndFeel", "GnomeLayoutStyle", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$WeakPCL", "com.sun.java.swing.plaf.gtk.GTKLookAndFeel", "WeakPCL", $STATIC},
	{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$3", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$2", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$1", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$1FontLazyValue", nullptr, "FontLazyValue", 0},
	{}
};

$ClassInfo _GTKLookAndFeel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKLookAndFeel",
	"javax.swing.plaf.synth.SynthLookAndFeel",
	nullptr,
	_GTKLookAndFeel_FieldInfo_,
	_GTKLookAndFeel_MethodInfo_,
	nullptr,
	nullptr,
	_GTKLookAndFeel_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$4,com.sun.java.swing.plaf.gtk.GTKLookAndFeel$GnomeLayoutStyle,com.sun.java.swing.plaf.gtk.GTKLookAndFeel$WeakPCL,com.sun.java.swing.plaf.gtk.GTKLookAndFeel$WeakPCL$1,com.sun.java.swing.plaf.gtk.GTKLookAndFeel$3,com.sun.java.swing.plaf.gtk.GTKLookAndFeel$2,com.sun.java.swing.plaf.gtk.GTKLookAndFeel$1,com.sun.java.swing.plaf.gtk.GTKLookAndFeel$1FontLazyValue"
};

$Object* allocate$GTKLookAndFeel($Class* clazz) {
	return $of($alloc(GTKLookAndFeel));
}

bool GTKLookAndFeel::$assertionsDisabled = false;
bool GTKLookAndFeel::IS_22 = false;
bool GTKLookAndFeel::IS_3 = false;
$Map* GTKLookAndFeel::aaTextInfo = nullptr;
bool GTKLookAndFeel::gtkAAFontSettingsCond = false;
$String* GTKLookAndFeel::gtkThemeName = nullptr;
$ReferenceQueue* GTKLookAndFeel::queue = nullptr;

void GTKLookAndFeel::init$() {
	$SynthLookAndFeel::init$();
}

bool GTKLookAndFeel::is2_2() {
	$init(GTKLookAndFeel);
	return GTKLookAndFeel::IS_22;
}

bool GTKLookAndFeel::is3() {
	$init(GTKLookAndFeel);
	return GTKLookAndFeel::IS_3;
}

$GTKConstants$PositionType* GTKLookAndFeel::SwingOrientationConstantToGTK(int32_t side) {
	$init(GTKLookAndFeel);
	$useLocalCurrentObjectStackCache();
	switch (side) {
	case $SwingConstants::LEFT:
		{
			$init($GTKConstants$PositionType);
			return $GTKConstants$PositionType::LEFT;
		}
	case $SwingConstants::RIGHT:
		{
			$init($GTKConstants$PositionType);
			return $GTKConstants$PositionType::RIGHT;
		}
	case $SwingConstants::TOP:
		{
			$init($GTKConstants$PositionType);
			return $GTKConstants$PositionType::TOP;
		}
	case $SwingConstants::BOTTOM:
		{
			$init($GTKConstants$PositionType);
			return $GTKConstants$PositionType::BOTTOM;
		}
	}
	if (!GTKLookAndFeel::$assertionsDisabled) {
		$throwNew($AssertionError, $of($$str({"Unknown orientation: "_s, $$str(side)})));
	}
	$init($GTKConstants$PositionType);
	return $GTKConstants$PositionType::TOP;
}

$GTKConstants$StateType* GTKLookAndFeel::synthStateToGTKStateType(int32_t state) {
	$init(GTKLookAndFeel);
	$GTKConstants$StateType* result = nullptr;
	switch (state) {
	case $SynthConstants::PRESSED:
		{
			$init($GTKConstants$StateType);
			result = $GTKConstants$StateType::ACTIVE;
			break;
		}
	case $SynthConstants::MOUSE_OVER:
		{
			$init($GTKConstants$StateType);
			result = $GTKConstants$StateType::PRELIGHT;
			break;
		}
	case $SynthConstants::SELECTED:
		{
			$init($GTKConstants$StateType);
			result = $GTKConstants$StateType::SELECTED;
			break;
		}
	case $SynthConstants::DISABLED:
		{
			$init($GTKConstants$StateType);
			result = $GTKConstants$StateType::INSENSITIVE;
			break;
		}
	case $SynthConstants::ENABLED:
		{}
	default:
		{
			$init($GTKConstants$StateType);
			result = $GTKConstants$StateType::NORMAL;
			break;
		}
	}
	return result;
}

int32_t GTKLookAndFeel::synthStateToGTKState($Region* region, int32_t state) {
	$init(GTKLookAndFeel);
	if (((int32_t)(state & (uint32_t)$SynthConstants::PRESSED)) != 0) {
		$init($Region);
		if (region == $Region::RADIO_BUTTON || region == $Region::CHECK_BOX || region == $Region::MENU || region == $Region::MENU_ITEM || region == $Region::RADIO_BUTTON_MENU_ITEM || region == $Region::CHECK_BOX_MENU_ITEM || region == $Region::SPLIT_PANE) {
			state = $SynthConstants::MOUSE_OVER;
		} else {
			state = $SynthConstants::PRESSED;
		}
	} else {
		$init($Region);
		if (region == $Region::TABBED_PANE_TAB) {
			if (((int32_t)(state & (uint32_t)$SynthConstants::DISABLED)) != 0) {
				state = $SynthConstants::DISABLED;
			} else if (((int32_t)(state & (uint32_t)$SynthConstants::SELECTED)) != 0) {
				state = $SynthConstants::ENABLED;
			} else {
				state = $SynthConstants::PRESSED;
			}
		} else if (((int32_t)(state & (uint32_t)$SynthConstants::SELECTED)) != 0) {
			if (region == $Region::MENU) {
				state = $SynthConstants::MOUSE_OVER;
			} else {
				if (region == $Region::RADIO_BUTTON || region == $Region::TOGGLE_BUTTON || region == $Region::RADIO_BUTTON_MENU_ITEM || region == $Region::CHECK_BOX_MENU_ITEM || region == $Region::CHECK_BOX || region == $Region::BUTTON) {
					if (((int32_t)(state & (uint32_t)$SynthConstants::DISABLED)) != 0) {
						state = $SynthConstants::DISABLED;
					} else if (((int32_t)(state & (uint32_t)$SynthConstants::MOUSE_OVER)) != 0) {
						state = $SynthConstants::MOUSE_OVER;
					} else {
						state = $SynthConstants::PRESSED;
					}
				} else {
					state = $SynthConstants::SELECTED;
				}
			}
		} else if (((int32_t)(state & (uint32_t)$SynthConstants::MOUSE_OVER)) != 0) {
			state = $SynthConstants::MOUSE_OVER;
		} else if (((int32_t)(state & (uint32_t)$SynthConstants::DISABLED)) != 0) {
			state = $SynthConstants::DISABLED;
		} else {
			if (region == $Region::SLIDER_TRACK) {
				state = $SynthConstants::PRESSED;
			} else {
				state = $SynthConstants::ENABLED;
			}
		}
	}
	return state;
}

bool GTKLookAndFeel::isText($Region* region) {
	$init(GTKLookAndFeel);
	$init($Region);
	return (region == $Region::TEXT_FIELD || region == $Region::FORMATTED_TEXT_FIELD || region == $Region::LIST || region == $Region::PASSWORD_FIELD || region == $Region::SPINNER || region == $Region::TABLE || region == $Region::TEXT_AREA || region == $Region::TEXT_PANE || region == $Region::TREE);
}

$UIDefaults* GTKLookAndFeel::getDefaults() {
	$useLocalCurrentObjectStackCache();
	$var($UIDefaults, table, $SynthLookAndFeel::getDefaults());
	$init($Boolean);
	$nc(table)->put("TabbedPane.isTabRollover"_s, $Boolean::FALSE);
	table->put("Synth.doNotSetTextAA"_s, $($Boolean::valueOf(true)));
	initResourceBundle(table);
	initSystemColorDefaults(table);
	initComponentDefaults(table);
	installPropertyChangeListeners();
	return table;
}

void GTKLookAndFeel::installPropertyChangeListeners() {
	$useLocalCurrentObjectStackCache();
	if (!this->pclInstalled) {
		$var($Toolkit, kit, $Toolkit::getDefaultToolkit());
		$var($GTKLookAndFeel$WeakPCL, pcl, $new($GTKLookAndFeel$WeakPCL, this, kit, "gnome.Net/ThemeName"_s));
		$nc(kit)->addPropertyChangeListener($(pcl->getKey()), pcl);
		$assign(pcl, $new($GTKLookAndFeel$WeakPCL, this, kit, "gnome.Gtk/FontName"_s));
		kit->addPropertyChangeListener($(pcl->getKey()), pcl);
		$assign(pcl, $new($GTKLookAndFeel$WeakPCL, this, kit, "gnome.Xft/DPI"_s));
		kit->addPropertyChangeListener($(pcl->getKey()), pcl);
		flushUnreferenced();
		this->pclInstalled = true;
	}
}

void GTKLookAndFeel::initResourceBundle($UIDefaults* table) {
	$nc($($SwingAccessor::getUIDefaultsAccessor()))->addInternalBundle(table, "com.sun.java.swing.plaf.gtk.resources.gtk"_s);
}

void GTKLookAndFeel::initComponentDefaults($UIDefaults* table) {
	$useLocalCurrentObjectStackCache();
	$SynthLookAndFeel::initComponentDefaults(table);
	$var($UIDefaults$LazyValue, zeroBorder, static_cast<$UIDefaults$LazyValue*>($new(GTKLookAndFeel$$Lambda$lambda$initComponentDefaults$0)));
	$var($Object, focusBorder, $new($GTKStyle$GTKLazyValue, "com.sun.java.swing.plaf.gtk.GTKPainter$ListTableFocusBorder"_s, "getUnselectedCellBorder"_s));
	$var($Object, focusSelectedBorder, $new($GTKStyle$GTKLazyValue, "com.sun.java.swing.plaf.gtk.GTKPainter$ListTableFocusBorder"_s, "getSelectedCellBorder"_s));
	$var($Object, noFocusBorder, $new($GTKStyle$GTKLazyValue, "com.sun.java.swing.plaf.gtk.GTKPainter$ListTableFocusBorder"_s, "getNoFocusCellBorder"_s));
	$var($SynthStyleFactory, factory, getStyleFactory());
	$init($Region);
	$var($GTKStyle, tableStyle, $cast($GTKStyle, $nc(factory)->getStyle(nullptr, $Region::TREE)));
	$init($GTKColorType);
	$var($Color, tableBg, $nc(tableStyle)->getGTKColor($SynthConstants::ENABLED, $GTKColorType::TEXT_BACKGROUND));
	$var($Color, tableFocusCellBg, tableStyle->getGTKColor($SynthConstants::ENABLED, $GTKColorType::BACKGROUND));
	$var($Color, tableFocusCellFg, tableStyle->getGTKColor($SynthConstants::ENABLED, $GTKColorType::FOREGROUND));
	$var($GTKStyle, progStyle, $cast($GTKStyle, factory->getStyle(nullptr, $Region::PROGRESS_BAR)));
	int32_t progXThickness = $nc(progStyle)->getXThickness();
	int32_t progYThickness = progStyle->getYThickness();
	int32_t hProgWidth = 150 - (progXThickness * 2);
	int32_t hProgHeight = 20 - (progYThickness * 2);
	int32_t vProgWidth = 22 - (progXThickness * 2);
	int32_t vProgHeight = 80 - (progYThickness * 2);
	$var($Integer, caretBlinkRate, nullptr);
	$init($Boolean);
	$init($GTKEngine);
	$init($GTKEngine$Settings);
	if ($nc($Boolean::FALSE)->equals($($nc($GTKEngine::INSTANCE)->getSetting($GTKEngine$Settings::GTK_CURSOR_BLINK)))) {
		$assign(caretBlinkRate, $Integer::valueOf(0));
	} else {
		$assign(caretBlinkRate, $cast($Integer, $nc($GTKEngine::INSTANCE)->getSetting($GTKEngine$Settings::GTK_CURSOR_BLINK_TIME)));
		if (caretBlinkRate == nullptr) {
			$assign(caretBlinkRate, $Integer::valueOf(500));
		}
	}
	$var($Insets, zeroInsets, $new($InsetsUIResource, 0, 0, 0, 0));
	$var($Double, defaultCaretAspectRatio, $Double::valueOf(0.025));
	$var($Color, caretColor, $nc(table)->getColor("caretColor"_s));
	$var($Color, controlText, table->getColor("controlText"_s));
	$init($DefaultEditorKit);
	$init($JTextField);
	$var($Object, fieldInputMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		$of("ctrl C"_s),
		$of($DefaultEditorKit::copyAction),
		$of("ctrl V"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("ctrl X"_s),
		$of($DefaultEditorKit::cutAction),
		$of("COPY"_s),
		$of($DefaultEditorKit::copyAction),
		$of("PASTE"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("CUT"_s),
		$of($DefaultEditorKit::cutAction),
		$of("control INSERT"_s),
		$of($DefaultEditorKit::copyAction),
		$of("shift INSERT"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("shift DELETE"_s),
		$of($DefaultEditorKit::cutAction),
		$of("shift LEFT"_s),
		$of($DefaultEditorKit::selectionBackwardAction),
		$of("shift KP_LEFT"_s),
		$of($DefaultEditorKit::selectionBackwardAction),
		$of("shift RIGHT"_s),
		$of($DefaultEditorKit::selectionForwardAction),
		$of("shift KP_RIGHT"_s),
		$of($DefaultEditorKit::selectionForwardAction),
		$of("ctrl LEFT"_s),
		$of($DefaultEditorKit::previousWordAction),
		$of("ctrl KP_LEFT"_s),
		$of($DefaultEditorKit::previousWordAction),
		$of("ctrl RIGHT"_s),
		$of($DefaultEditorKit::nextWordAction),
		$of("ctrl KP_RIGHT"_s),
		$of($DefaultEditorKit::nextWordAction),
		$of("ctrl shift LEFT"_s),
		$of($DefaultEditorKit::selectionPreviousWordAction),
		$of("ctrl shift KP_LEFT"_s),
		$of($DefaultEditorKit::selectionPreviousWordAction),
		$of("ctrl shift RIGHT"_s),
		$of($DefaultEditorKit::selectionNextWordAction),
		$of("ctrl shift KP_RIGHT"_s),
		$of($DefaultEditorKit::selectionNextWordAction),
		$of("ctrl A"_s),
		$of($DefaultEditorKit::selectAllAction),
		$of("HOME"_s),
		$of($DefaultEditorKit::beginLineAction),
		$of("END"_s),
		$of($DefaultEditorKit::endLineAction),
		$of("shift HOME"_s),
		$of($DefaultEditorKit::selectionBeginLineAction),
		$of("shift END"_s),
		$of($DefaultEditorKit::selectionEndLineAction),
		$of("BACK_SPACE"_s),
		$of($DefaultEditorKit::deletePrevCharAction),
		$of("shift BACK_SPACE"_s),
		$of($DefaultEditorKit::deletePrevCharAction),
		$of("ctrl H"_s),
		$of($DefaultEditorKit::deletePrevCharAction),
		$of("DELETE"_s),
		$of($DefaultEditorKit::deleteNextCharAction),
		$of("ctrl DELETE"_s),
		$of($DefaultEditorKit::deleteNextWordAction),
		$of("ctrl BACK_SPACE"_s),
		$of($DefaultEditorKit::deletePrevWordAction),
		$of("RIGHT"_s),
		$of($DefaultEditorKit::forwardAction),
		$of("LEFT"_s),
		$of($DefaultEditorKit::backwardAction),
		$of("KP_RIGHT"_s),
		$of($DefaultEditorKit::forwardAction),
		$of("KP_LEFT"_s),
		$of($DefaultEditorKit::backwardAction),
		$of("ENTER"_s),
		$of($JTextField::notifyAction),
		$of("ctrl BACK_SLASH"_s),
		$of("unselect"_s),
		$of("control shift O"_s),
		$of("toggle-componentOrientation"_s)
	})));
	$var($Object, passwordInputMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		$of("ctrl C"_s),
		$of($DefaultEditorKit::copyAction),
		$of("ctrl V"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("ctrl X"_s),
		$of($DefaultEditorKit::cutAction),
		$of("COPY"_s),
		$of($DefaultEditorKit::copyAction),
		$of("PASTE"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("CUT"_s),
		$of($DefaultEditorKit::cutAction),
		$of("control INSERT"_s),
		$of($DefaultEditorKit::copyAction),
		$of("shift INSERT"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("shift DELETE"_s),
		$of($DefaultEditorKit::cutAction),
		$of("shift LEFT"_s),
		$of($DefaultEditorKit::selectionBackwardAction),
		$of("shift KP_LEFT"_s),
		$of($DefaultEditorKit::selectionBackwardAction),
		$of("shift RIGHT"_s),
		$of($DefaultEditorKit::selectionForwardAction),
		$of("shift KP_RIGHT"_s),
		$of($DefaultEditorKit::selectionForwardAction),
		$of("ctrl LEFT"_s),
		$of($DefaultEditorKit::beginLineAction),
		$of("ctrl KP_LEFT"_s),
		$of($DefaultEditorKit::beginLineAction),
		$of("ctrl RIGHT"_s),
		$of($DefaultEditorKit::endLineAction),
		$of("ctrl KP_RIGHT"_s),
		$of($DefaultEditorKit::endLineAction),
		$of("ctrl shift LEFT"_s),
		$of($DefaultEditorKit::selectionBeginLineAction),
		$of("ctrl shift KP_LEFT"_s),
		$of($DefaultEditorKit::selectionBeginLineAction),
		$of("ctrl shift RIGHT"_s),
		$of($DefaultEditorKit::selectionEndLineAction),
		$of("ctrl shift KP_RIGHT"_s),
		$of($DefaultEditorKit::selectionEndLineAction),
		$of("ctrl A"_s),
		$of($DefaultEditorKit::selectAllAction),
		$of("HOME"_s),
		$of($DefaultEditorKit::beginLineAction),
		$of("END"_s),
		$of($DefaultEditorKit::endLineAction),
		$of("shift HOME"_s),
		$of($DefaultEditorKit::selectionBeginLineAction),
		$of("shift END"_s),
		$of($DefaultEditorKit::selectionEndLineAction),
		$of("BACK_SPACE"_s),
		$of($DefaultEditorKit::deletePrevCharAction),
		$of("shift BACK_SPACE"_s),
		$of($DefaultEditorKit::deletePrevCharAction),
		$of("ctrl H"_s),
		$of($DefaultEditorKit::deletePrevCharAction),
		$of("DELETE"_s),
		$of($DefaultEditorKit::deleteNextCharAction),
		$of("RIGHT"_s),
		$of($DefaultEditorKit::forwardAction),
		$of("LEFT"_s),
		$of($DefaultEditorKit::backwardAction),
		$of("KP_RIGHT"_s),
		$of($DefaultEditorKit::forwardAction),
		$of("KP_LEFT"_s),
		$of($DefaultEditorKit::backwardAction),
		$of("ENTER"_s),
		$of($JTextField::notifyAction),
		$of("ctrl BACK_SLASH"_s),
		$of("unselect"_s),
		$of("control shift O"_s),
		$of("toggle-componentOrientation"_s)
	})));
	$var($Object, editorMargin, $new($InsetsUIResource, 3, 3, 3, 3));
	$var($Object, multilineInputMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		$of("ctrl C"_s),
		$of($DefaultEditorKit::copyAction),
		$of("ctrl V"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("ctrl X"_s),
		$of($DefaultEditorKit::cutAction),
		$of("COPY"_s),
		$of($DefaultEditorKit::copyAction),
		$of("PASTE"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("CUT"_s),
		$of($DefaultEditorKit::cutAction),
		$of("control INSERT"_s),
		$of($DefaultEditorKit::copyAction),
		$of("shift INSERT"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("shift DELETE"_s),
		$of($DefaultEditorKit::cutAction),
		$of("shift LEFT"_s),
		$of($DefaultEditorKit::selectionBackwardAction),
		$of("shift KP_LEFT"_s),
		$of($DefaultEditorKit::selectionBackwardAction),
		$of("shift RIGHT"_s),
		$of($DefaultEditorKit::selectionForwardAction),
		$of("shift KP_RIGHT"_s),
		$of($DefaultEditorKit::selectionForwardAction),
		$of("ctrl LEFT"_s),
		$of($DefaultEditorKit::previousWordAction),
		$of("ctrl KP_LEFT"_s),
		$of($DefaultEditorKit::previousWordAction),
		$of("ctrl RIGHT"_s),
		$of($DefaultEditorKit::nextWordAction),
		$of("ctrl KP_RIGHT"_s),
		$of($DefaultEditorKit::nextWordAction),
		$of("ctrl shift LEFT"_s),
		$of($DefaultEditorKit::selectionPreviousWordAction),
		$of("ctrl shift KP_LEFT"_s),
		$of($DefaultEditorKit::selectionPreviousWordAction),
		$of("ctrl shift RIGHT"_s),
		$of($DefaultEditorKit::selectionNextWordAction),
		$of("ctrl shift KP_RIGHT"_s),
		$of($DefaultEditorKit::selectionNextWordAction),
		$of("ctrl A"_s),
		$of($DefaultEditorKit::selectAllAction),
		$of("HOME"_s),
		$of($DefaultEditorKit::beginLineAction),
		$of("END"_s),
		$of($DefaultEditorKit::endLineAction),
		$of("shift HOME"_s),
		$of($DefaultEditorKit::selectionBeginLineAction),
		$of("shift END"_s),
		$of($DefaultEditorKit::selectionEndLineAction),
		$of("UP"_s),
		$of($DefaultEditorKit::upAction),
		$of("KP_UP"_s),
		$of($DefaultEditorKit::upAction),
		$of("DOWN"_s),
		$of($DefaultEditorKit::downAction),
		$of("KP_DOWN"_s),
		$of($DefaultEditorKit::downAction),
		$of("PAGE_UP"_s),
		$of($DefaultEditorKit::pageUpAction),
		$of("PAGE_DOWN"_s),
		$of($DefaultEditorKit::pageDownAction),
		$of("shift PAGE_UP"_s),
		$of("selection-page-up"_s),
		$of("shift PAGE_DOWN"_s),
		$of("selection-page-down"_s),
		$of("ctrl shift PAGE_UP"_s),
		$of("selection-page-left"_s),
		$of("ctrl shift PAGE_DOWN"_s),
		$of("selection-page-right"_s),
		$of("shift UP"_s),
		$of($DefaultEditorKit::selectionUpAction),
		$of("shift KP_UP"_s),
		$of($DefaultEditorKit::selectionUpAction),
		$of("shift DOWN"_s),
		$of($DefaultEditorKit::selectionDownAction),
		$of("shift KP_DOWN"_s),
		$of($DefaultEditorKit::selectionDownAction),
		$of("ENTER"_s),
		$of($DefaultEditorKit::insertBreakAction),
		$of("BACK_SPACE"_s),
		$of($DefaultEditorKit::deletePrevCharAction),
		$of("shift BACK_SPACE"_s),
		$of($DefaultEditorKit::deletePrevCharAction),
		$of("ctrl H"_s),
		$of($DefaultEditorKit::deletePrevCharAction),
		$of("DELETE"_s),
		$of($DefaultEditorKit::deleteNextCharAction),
		$of("ctrl DELETE"_s),
		$of($DefaultEditorKit::deleteNextWordAction),
		$of("ctrl BACK_SPACE"_s),
		$of($DefaultEditorKit::deletePrevWordAction),
		$of("RIGHT"_s),
		$of($DefaultEditorKit::forwardAction),
		$of("LEFT"_s),
		$of($DefaultEditorKit::backwardAction),
		$of("KP_RIGHT"_s),
		$of($DefaultEditorKit::forwardAction),
		$of("KP_LEFT"_s),
		$of($DefaultEditorKit::backwardAction),
		$of("TAB"_s),
		$of($DefaultEditorKit::insertTabAction),
		$of("ctrl BACK_SLASH"_s),
		$of("unselect"_s),
		$of("ctrl HOME"_s),
		$of($DefaultEditorKit::beginAction),
		$of("ctrl END"_s),
		$of($DefaultEditorKit::endAction),
		$of("ctrl shift HOME"_s),
		$of($DefaultEditorKit::selectionBeginAction),
		$of("ctrl shift END"_s),
		$of($DefaultEditorKit::selectionEndAction),
		$of("ctrl T"_s),
		$of("next-link-action"_s),
		$of("ctrl shift T"_s),
		$of("previous-link-action"_s),
		$of("ctrl SPACE"_s),
		$of("activate-link-action"_s),
		$of("control shift O"_s),
		$of("toggle-componentOrientation"_s)
	})));
	{
	}
	$var($ObjectArray, defaults, $new($ObjectArray, {
		$of("ArrowButton.size"_s),
		$($of($Integer::valueOf(13))),
		$of("Button.defaultButtonFollowsFocus"_s),
		$of($Boolean::FALSE),
		$of("Button.focusInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("SPACE"_s),
			$of("pressed"_s),
			$of("released SPACE"_s),
			$of("released"_s),
			$of("ENTER"_s),
			$of("pressed"_s),
			$of("released ENTER"_s),
			$of("released"_s)
		}))),
		$of("Button.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::BUTTON)),
		$of("Button.margin"_s),
		$of(zeroInsets),
		$of("CheckBox.focusInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("SPACE"_s),
			$of("pressed"_s),
			$of("released SPACE"_s),
			$of("released"_s)
		}))),
		$of("CheckBox.icon"_s),
		$of($$new($GTKStyle$GTKLazyValue, "com.sun.java.swing.plaf.gtk.GTKIconFactory"_s, "getCheckBoxIcon"_s)),
		$of("CheckBox.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::CHECK_BOX)),
		$of("CheckBox.margin"_s),
		$of(zeroInsets),
		$of("CheckBoxMenuItem.arrowIcon"_s),
		($Object*)nullptr,
		$of("CheckBoxMenuItem.checkIcon"_s),
		$of($$new($GTKStyle$GTKLazyValue, "com.sun.java.swing.plaf.gtk.GTKIconFactory"_s, "getCheckBoxMenuItemCheckIcon"_s)),
		$of("CheckBoxMenuItem.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::CHECK_BOX_MENU_ITEM)),
		$of("CheckBoxMenuItem.margin"_s),
		$of(zeroInsets),
		$of("CheckBoxMenuItem.alignAcceleratorText"_s),
		$of($Boolean::FALSE),
		$of("ColorChooser.showPreviewPanelText"_s),
		$of($Boolean::FALSE),
		$of("ColorChooser.panels"_s),
		$of($$new($GTKLookAndFeel$1, this)),
		$of("ColorChooser.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::COLOR_CHOOSER)),
		$of("ComboBox.ancestorInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("ESCAPE"_s),
			$of("hidePopup"_s),
			$of("PAGE_UP"_s),
			$of("pageUpPassThrough"_s),
			$of("PAGE_DOWN"_s),
			$of("pageDownPassThrough"_s),
			$of("HOME"_s),
			$of("homePassThrough"_s),
			$of("END"_s),
			$of("endPassThrough"_s),
			$of("DOWN"_s),
			$of("selectNext"_s),
			$of("KP_DOWN"_s),
			$of("selectNext"_s),
			$of("alt DOWN"_s),
			$of("togglePopup"_s),
			$of("alt KP_DOWN"_s),
			$of("togglePopup"_s),
			$of("alt UP"_s),
			$of("togglePopup"_s),
			$of("alt KP_UP"_s),
			$of("togglePopup"_s),
			$of("SPACE"_s),
			$of("spacePopup"_s),
			$of("ENTER"_s),
			$of("enterPressed"_s),
			$of("UP"_s),
			$of("selectPrevious"_s),
			$of("KP_UP"_s),
			$of("selectPrevious"_s)
		}))),
		$of("ComboBox.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::COMBO_BOX)),
		$of("ComboBox.isEnterSelectablePopup"_s),
		$of($Boolean::TRUE),
		$of("EditorPane.caretForeground"_s),
		$of(caretColor),
		$of("EditorPane.caretAspectRatio"_s),
		$of(defaultCaretAspectRatio),
		$of("EditorPane.caretBlinkRate"_s),
		$of(caretBlinkRate),
		$of("EditorPane.margin"_s),
		editorMargin,
		$of("EditorPane.focusInputMap"_s),
		multilineInputMap,
		$of("EditorPane.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::EDITOR_PANE)),
		$of("FileChooser.ancestorInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("ESCAPE"_s),
			$of("cancelSelection"_s),
			$of("ctrl ENTER"_s),
			$of("approveSelection"_s)
		}))),
		$of("FileChooserUI"_s),
		$of("com.sun.java.swing.plaf.gtk.GTKLookAndFeel"_s),
		$of("FormattedTextField.caretForeground"_s),
		$of(caretColor),
		$of("FormattedTextField.caretAspectRatio"_s),
		$of(defaultCaretAspectRatio),
		$of("FormattedTextField.caretBlinkRate"_s),
		$of(caretBlinkRate),
		$of("FormattedTextField.focusInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("ctrl C"_s),
			$of($DefaultEditorKit::copyAction),
			$of("ctrl V"_s),
			$of($DefaultEditorKit::pasteAction),
			$of("ctrl X"_s),
			$of($DefaultEditorKit::cutAction),
			$of("COPY"_s),
			$of($DefaultEditorKit::copyAction),
			$of("PASTE"_s),
			$of($DefaultEditorKit::pasteAction),
			$of("CUT"_s),
			$of($DefaultEditorKit::cutAction),
			$of("control INSERT"_s),
			$of($DefaultEditorKit::copyAction),
			$of("shift INSERT"_s),
			$of($DefaultEditorKit::pasteAction),
			$of("shift DELETE"_s),
			$of($DefaultEditorKit::cutAction),
			$of("shift LEFT"_s),
			$of($DefaultEditorKit::selectionBackwardAction),
			$of("shift KP_LEFT"_s),
			$of($DefaultEditorKit::selectionBackwardAction),
			$of("shift RIGHT"_s),
			$of($DefaultEditorKit::selectionForwardAction),
			$of("shift KP_RIGHT"_s),
			$of($DefaultEditorKit::selectionForwardAction),
			$of("ctrl LEFT"_s),
			$of($DefaultEditorKit::previousWordAction),
			$of("ctrl KP_LEFT"_s),
			$of($DefaultEditorKit::previousWordAction),
			$of("ctrl RIGHT"_s),
			$of($DefaultEditorKit::nextWordAction),
			$of("ctrl KP_RIGHT"_s),
			$of($DefaultEditorKit::nextWordAction),
			$of("ctrl shift LEFT"_s),
			$of($DefaultEditorKit::selectionPreviousWordAction),
			$of("ctrl shift KP_LEFT"_s),
			$of($DefaultEditorKit::selectionPreviousWordAction),
			$of("ctrl shift RIGHT"_s),
			$of($DefaultEditorKit::selectionNextWordAction),
			$of("ctrl shift KP_RIGHT"_s),
			$of($DefaultEditorKit::selectionNextWordAction),
			$of("ctrl A"_s),
			$of($DefaultEditorKit::selectAllAction),
			$of("HOME"_s),
			$of($DefaultEditorKit::beginLineAction),
			$of("END"_s),
			$of($DefaultEditorKit::endLineAction),
			$of("shift HOME"_s),
			$of($DefaultEditorKit::selectionBeginLineAction),
			$of("shift END"_s),
			$of($DefaultEditorKit::selectionEndLineAction),
			$of("BACK_SPACE"_s),
			$of($DefaultEditorKit::deletePrevCharAction),
			$of("shift BACK_SPACE"_s),
			$of($DefaultEditorKit::deletePrevCharAction),
			$of("ctrl H"_s),
			$of($DefaultEditorKit::deletePrevCharAction),
			$of("DELETE"_s),
			$of($DefaultEditorKit::deleteNextCharAction),
			$of("ctrl DELETE"_s),
			$of($DefaultEditorKit::deleteNextWordAction),
			$of("ctrl BACK_SPACE"_s),
			$of($DefaultEditorKit::deletePrevWordAction),
			$of("RIGHT"_s),
			$of($DefaultEditorKit::forwardAction),
			$of("LEFT"_s),
			$of($DefaultEditorKit::backwardAction),
			$of("KP_RIGHT"_s),
			$of($DefaultEditorKit::forwardAction),
			$of("KP_LEFT"_s),
			$of($DefaultEditorKit::backwardAction),
			$of("ENTER"_s),
			$of($JTextField::notifyAction),
			$of("ctrl BACK_SLASH"_s),
			$of("unselect"_s),
			$of("control shift O"_s),
			$of("toggle-componentOrientation"_s),
			$of("ESCAPE"_s),
			$of("reset-field-edit"_s),
			$of("UP"_s),
			$of("increment"_s),
			$of("KP_UP"_s),
			$of("increment"_s),
			$of("DOWN"_s),
			$of("decrement"_s),
			$of("KP_DOWN"_s),
			$of("decrement"_s)
		}))),
		$of("FormattedTextField.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::FORMATTED_TEXT_FIELD)),
		$of("InternalFrameTitlePane.titlePaneLayout"_s),
		$of($$new($GTKStyle$GTKLazyValue, "com.sun.java.swing.plaf.gtk.Metacity"_s, "getTitlePaneLayout"_s)),
		$of("InternalFrame.windowBindings"_s),
		$of($$new($ObjectArray, {
			$of("shift ESCAPE"_s),
			$of("showSystemMenu"_s),
			$of("ctrl SPACE"_s),
			$of("showSystemMenu"_s),
			$of("ESCAPE"_s),
			$of("hideSystemMenu"_s)
		})),
		$of("InternalFrame.layoutTitlePaneAtOrigin"_s),
		$of($Boolean::TRUE),
		$of("InternalFrame.useTaskBar"_s),
		$of($Boolean::TRUE),
		$of("InternalFrameTitlePane.iconifyButtonOpacity"_s),
		($Object*)nullptr,
		$of("InternalFrameTitlePane.maximizeButtonOpacity"_s),
		($Object*)nullptr,
		$of("InternalFrameTitlePane.closeButtonOpacity"_s),
		($Object*)nullptr,
		$of("Label.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::LABEL)),
		$of("List.background"_s),
		$of(tableBg),
		$of("List.focusCellHighlightBorder"_s),
		focusBorder,
		$of("List.focusSelectedCellHighlightBorder"_s),
		focusSelectedBorder,
		$of("List.noFocusBorder"_s),
		noFocusBorder,
		$of("List.focusInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("ctrl C"_s),
			$of("copy"_s),
			$of("ctrl V"_s),
			$of("paste"_s),
			$of("ctrl X"_s),
			$of("cut"_s),
			$of("COPY"_s),
			$of("copy"_s),
			$of("PASTE"_s),
			$of("paste"_s),
			$of("CUT"_s),
			$of("cut"_s),
			$of("control INSERT"_s),
			$of("copy"_s),
			$of("shift INSERT"_s),
			$of("paste"_s),
			$of("shift DELETE"_s),
			$of("cut"_s),
			$of("UP"_s),
			$of("selectPreviousRow"_s),
			$of("KP_UP"_s),
			$of("selectPreviousRow"_s),
			$of("shift UP"_s),
			$of("selectPreviousRowExtendSelection"_s),
			$of("shift KP_UP"_s),
			$of("selectPreviousRowExtendSelection"_s),
			$of("ctrl shift UP"_s),
			$of("selectPreviousRowExtendSelection"_s),
			$of("ctrl shift KP_UP"_s),
			$of("selectPreviousRowExtendSelection"_s),
			$of("ctrl UP"_s),
			$of("selectPreviousRowChangeLead"_s),
			$of("ctrl KP_UP"_s),
			$of("selectPreviousRowChangeLead"_s),
			$of("DOWN"_s),
			$of("selectNextRow"_s),
			$of("KP_DOWN"_s),
			$of("selectNextRow"_s),
			$of("shift DOWN"_s),
			$of("selectNextRowExtendSelection"_s),
			$of("shift KP_DOWN"_s),
			$of("selectNextRowExtendSelection"_s),
			$of("ctrl shift DOWN"_s),
			$of("selectNextRowExtendSelection"_s),
			$of("ctrl shift KP_DOWN"_s),
			$of("selectNextRowExtendSelection"_s),
			$of("ctrl DOWN"_s),
			$of("selectNextRowChangeLead"_s),
			$of("ctrl KP_DOWN"_s),
			$of("selectNextRowChangeLead"_s),
			$of("LEFT"_s),
			$of("selectPreviousColumn"_s),
			$of("KP_LEFT"_s),
			$of("selectPreviousColumn"_s),
			$of("shift LEFT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("shift KP_LEFT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("ctrl shift LEFT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("ctrl shift KP_LEFT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("ctrl LEFT"_s),
			$of("selectPreviousColumnChangeLead"_s),
			$of("ctrl KP_LEFT"_s),
			$of("selectPreviousColumnChangeLead"_s),
			$of("RIGHT"_s),
			$of("selectNextColumn"_s),
			$of("KP_RIGHT"_s),
			$of("selectNextColumn"_s),
			$of("shift RIGHT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("shift KP_RIGHT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("ctrl shift RIGHT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("ctrl shift KP_RIGHT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("ctrl RIGHT"_s),
			$of("selectNextColumnChangeLead"_s),
			$of("ctrl KP_RIGHT"_s),
			$of("selectNextColumnChangeLead"_s),
			$of("HOME"_s),
			$of("selectFirstRow"_s),
			$of("shift HOME"_s),
			$of("selectFirstRowExtendSelection"_s),
			$of("ctrl shift HOME"_s),
			$of("selectFirstRowExtendSelection"_s),
			$of("ctrl HOME"_s),
			$of("selectFirstRowChangeLead"_s),
			$of("END"_s),
			$of("selectLastRow"_s),
			$of("shift END"_s),
			$of("selectLastRowExtendSelection"_s),
			$of("ctrl shift END"_s),
			$of("selectLastRowExtendSelection"_s),
			$of("ctrl END"_s),
			$of("selectLastRowChangeLead"_s),
			$of("PAGE_UP"_s),
			$of("scrollUp"_s),
			$of("shift PAGE_UP"_s),
			$of("scrollUpExtendSelection"_s),
			$of("ctrl shift PAGE_UP"_s),
			$of("scrollUpExtendSelection"_s),
			$of("ctrl PAGE_UP"_s),
			$of("scrollUpChangeLead"_s),
			$of("PAGE_DOWN"_s),
			$of("scrollDown"_s),
			$of("shift PAGE_DOWN"_s),
			$of("scrollDownExtendSelection"_s),
			$of("ctrl shift PAGE_DOWN"_s),
			$of("scrollDownExtendSelection"_s),
			$of("ctrl PAGE_DOWN"_s),
			$of("scrollDownChangeLead"_s),
			$of("ctrl A"_s),
			$of("selectAll"_s),
			$of("ctrl SLASH"_s),
			$of("selectAll"_s),
			$of("ctrl BACK_SLASH"_s),
			$of("clearSelection"_s),
			$of("SPACE"_s),
			$of("addToSelection"_s),
			$of("ctrl SPACE"_s),
			$of("toggleAndAnchor"_s),
			$of("shift SPACE"_s),
			$of("extendTo"_s),
			$of("ctrl shift SPACE"_s),
			$of("moveSelectionTo"_s)
		}))),
		$of("List.focusInputMap.RightToLeft"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("LEFT"_s),
			$of("selectNextColumn"_s),
			$of("KP_LEFT"_s),
			$of("selectNextColumn"_s),
			$of("shift LEFT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("shift KP_LEFT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("ctrl shift LEFT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("ctrl shift KP_LEFT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("ctrl LEFT"_s),
			$of("selectNextColumnChangeLead"_s),
			$of("ctrl KP_LEFT"_s),
			$of("selectNextColumnChangeLead"_s),
			$of("RIGHT"_s),
			$of("selectPreviousColumn"_s),
			$of("KP_RIGHT"_s),
			$of("selectPreviousColumn"_s),
			$of("shift RIGHT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("shift KP_RIGHT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("ctrl shift RIGHT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("ctrl shift KP_RIGHT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("ctrl RIGHT"_s),
			$of("selectPreviousColumnChangeLead"_s),
			$of("ctrl KP_RIGHT"_s),
			$of("selectPreviousColumnChangeLead"_s)
		}))),
		$of("List.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::LIST)),
		$of("List.rendererUseUIBorder"_s),
		$of($Boolean::FALSE),
		$of("Menu.arrowIcon"_s),
		$of($$new($GTKStyle$GTKLazyValue, "com.sun.java.swing.plaf.gtk.GTKIconFactory"_s, "getMenuArrowIcon"_s)),
		$of("Menu.checkIcon"_s),
		($Object*)nullptr,
		$of("Menu.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::MENU)),
		$of("Menu.margin"_s),
		$of(zeroInsets),
		$of("Menu.cancelMode"_s),
		$of("hideMenuTree"_s),
		$of("Menu.alignAcceleratorText"_s),
		$of($Boolean::FALSE),
		$of("Menu.useMenuBarForTopLevelMenus"_s),
		$of($Boolean::TRUE),
		$of("MenuBar.windowBindings"_s),
		$of($$new($ObjectArray, {
			$of("F10"_s),
			$of("takeFocus"_s)
		})),
		$of("MenuBar.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::MENU_BAR)),
		$of("MenuItem.arrowIcon"_s),
		($Object*)nullptr,
		$of("MenuItem.checkIcon"_s),
		($Object*)nullptr,
		$of("MenuItem.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::MENU_ITEM)),
		$of("MenuItem.margin"_s),
		$of(zeroInsets),
		$of("MenuItem.alignAcceleratorText"_s),
		$of($Boolean::FALSE),
		$of("OptionPane.setButtonMargin"_s),
		$of($Boolean::FALSE),
		$of("OptionPane.sameSizeButtons"_s),
		$of($Boolean::TRUE),
		$of("OptionPane.buttonOrientation"_s),
		$($of($Integer::valueOf($SwingConstants::RIGHT))),
		$of("OptionPane.minimumSize"_s),
		$of($$new($DimensionUIResource, 262, 90)),
		$of("OptionPane.buttonPadding"_s),
		$($of($Integer::valueOf(10))),
		$of("OptionPane.windowBindings"_s),
		$of($$new($ObjectArray, {
			$of("ESCAPE"_s),
			$of("close"_s)
		})),
		$of("OptionPane.buttonClickThreshhold"_s),
		$($of($Integer::valueOf(500))),
		$of("OptionPane.isYesLast"_s),
		$of($Boolean::TRUE),
		$of("OptionPane.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::OPTION_PANE)),
		$of("Panel.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::PANEL)),
		$of("PasswordField.caretForeground"_s),
		$of(caretColor),
		$of("PasswordField.caretAspectRatio"_s),
		$of(defaultCaretAspectRatio),
		$of("PasswordField.caretBlinkRate"_s),
		$of(caretBlinkRate),
		$of("PasswordField.margin"_s),
		$of(zeroInsets),
		$of("PasswordField.focusInputMap"_s),
		passwordInputMap,
		$of("PasswordField.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::PASSWORD_FIELD)),
		$of("PopupMenu.consumeEventOnClose"_s),
		$of($Boolean::FALSE),
		$of("PopupMenu.selectedWindowInputMapBindings"_s),
		$of($$new($ObjectArray, {
			$of("ESCAPE"_s),
			$of("cancel"_s),
			$of("DOWN"_s),
			$of("selectNext"_s),
			$of("KP_DOWN"_s),
			$of("selectNext"_s),
			$of("UP"_s),
			$of("selectPrevious"_s),
			$of("KP_UP"_s),
			$of("selectPrevious"_s),
			$of("LEFT"_s),
			$of("selectParent"_s),
			$of("KP_LEFT"_s),
			$of("selectParent"_s),
			$of("RIGHT"_s),
			$of("selectChild"_s),
			$of("KP_RIGHT"_s),
			$of("selectChild"_s),
			$of("ENTER"_s),
			$of("return"_s),
			$of("SPACE"_s),
			$of("return"_s)
		})),
		$of("PopupMenu.selectedWindowInputMapBindings.RightToLeft"_s),
		$of($$new($ObjectArray, {
			$of("LEFT"_s),
			$of("selectChild"_s),
			$of("KP_LEFT"_s),
			$of("selectChild"_s),
			$of("RIGHT"_s),
			$of("selectParent"_s),
			$of("KP_RIGHT"_s),
			$of("selectParent"_s)
		})),
		$of("PopupMenu.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::POPUP_MENU)),
		$of("ProgressBar.horizontalSize"_s),
		$of($$new($DimensionUIResource, hProgWidth, hProgHeight)),
		$of("ProgressBar.verticalSize"_s),
		$of($$new($DimensionUIResource, vProgWidth, vProgHeight)),
		$of("ProgressBar.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::PROGRESS_BAR)),
		$of("RadioButton.focusInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("SPACE"_s),
			$of("pressed"_s),
			$of("released SPACE"_s),
			$of("released"_s),
			$of("RETURN"_s),
			$of("pressed"_s)
		}))),
		$of("RadioButton.icon"_s),
		$of($$new($GTKStyle$GTKLazyValue, "com.sun.java.swing.plaf.gtk.GTKIconFactory"_s, "getRadioButtonIcon"_s)),
		$of("RadioButton.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::RADIO_BUTTON)),
		$of("RadioButton.margin"_s),
		$of(zeroInsets),
		$of("RadioButtonMenuItem.arrowIcon"_s),
		($Object*)nullptr,
		$of("RadioButtonMenuItem.checkIcon"_s),
		$of($$new($GTKStyle$GTKLazyValue, "com.sun.java.swing.plaf.gtk.GTKIconFactory"_s, "getRadioButtonMenuItemCheckIcon"_s)),
		$of("RadioButtonMenuItem.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::RADIO_BUTTON_MENU_ITEM)),
		$of("RadioButtonMenuItem.margin"_s),
		$of(zeroInsets),
		$of("RadioButtonMenuItem.alignAcceleratorText"_s),
		$of($Boolean::FALSE),
		$of("RootPane.defaultButtonWindowKeyBindings"_s),
		$of($$new($ObjectArray, {
			$of("ENTER"_s),
			$of("press"_s),
			$of("released ENTER"_s),
			$of("release"_s),
			$of("ctrl ENTER"_s),
			$of("press"_s),
			$of("ctrl released ENTER"_s),
			$of("release"_s)
		})),
		$of("ScrollBar.squareButtons"_s),
		$of($Boolean::FALSE),
		$of("ScrollBar.thumbHeight"_s),
		$($of($Integer::valueOf(14))),
		$of("ScrollBar.width"_s),
		$($of($Integer::valueOf(16))),
		$of("ScrollBar.minimumThumbSize"_s),
		$of($$new($Dimension, 8, 8)),
		$of("ScrollBar.maximumThumbSize"_s),
		$of($$new($Dimension, 4096, 4096)),
		$of("ScrollBar.allowsAbsolutePositioning"_s),
		$of($Boolean::TRUE),
		$of("ScrollBar.alwaysShowThumb"_s),
		$of($Boolean::TRUE),
		$of("ScrollBar.ancestorInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("RIGHT"_s),
			$of("positiveUnitIncrement"_s),
			$of("KP_RIGHT"_s),
			$of("positiveUnitIncrement"_s),
			$of("DOWN"_s),
			$of("positiveUnitIncrement"_s),
			$of("KP_DOWN"_s),
			$of("positiveUnitIncrement"_s),
			$of("PAGE_DOWN"_s),
			$of("positiveBlockIncrement"_s),
			$of("LEFT"_s),
			$of("negativeUnitIncrement"_s),
			$of("KP_LEFT"_s),
			$of("negativeUnitIncrement"_s),
			$of("UP"_s),
			$of("negativeUnitIncrement"_s),
			$of("KP_UP"_s),
			$of("negativeUnitIncrement"_s),
			$of("PAGE_UP"_s),
			$of("negativeBlockIncrement"_s),
			$of("HOME"_s),
			$of("minScroll"_s),
			$of("END"_s),
			$of("maxScroll"_s)
		}))),
		$of("ScrollBar.ancestorInputMap.RightToLeft"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("RIGHT"_s),
			$of("negativeUnitIncrement"_s),
			$of("KP_RIGHT"_s),
			$of("negativeUnitIncrement"_s),
			$of("LEFT"_s),
			$of("positiveUnitIncrement"_s),
			$of("KP_LEFT"_s),
			$of("positiveUnitIncrement"_s)
		}))),
		$of("Spinner.disableOnBoundaryValues"_s),
		$of($Boolean::TRUE),
		$of("ScrollPane.fillUpperCorner"_s),
		$of($Boolean::TRUE),
		$of("ScrollPane.fillLowerCorner"_s),
		$of($Boolean::TRUE),
		$of("ScrollPane.ancestorInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("RIGHT"_s),
			$of("unitScrollRight"_s),
			$of("KP_RIGHT"_s),
			$of("unitScrollRight"_s),
			$of("DOWN"_s),
			$of("unitScrollDown"_s),
			$of("KP_DOWN"_s),
			$of("unitScrollDown"_s),
			$of("LEFT"_s),
			$of("unitScrollLeft"_s),
			$of("KP_LEFT"_s),
			$of("unitScrollLeft"_s),
			$of("UP"_s),
			$of("unitScrollUp"_s),
			$of("KP_UP"_s),
			$of("unitScrollUp"_s),
			$of("PAGE_UP"_s),
			$of("scrollUp"_s),
			$of("PAGE_DOWN"_s),
			$of("scrollDown"_s),
			$of("ctrl PAGE_UP"_s),
			$of("scrollLeft"_s),
			$of("ctrl PAGE_DOWN"_s),
			$of("scrollRight"_s),
			$of("ctrl HOME"_s),
			$of("scrollHome"_s),
			$of("ctrl END"_s),
			$of("scrollEnd"_s)
		}))),
		$of("ScrollPane.ancestorInputMap.RightToLeft"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("ctrl PAGE_UP"_s),
			$of("scrollRight"_s),
			$of("ctrl PAGE_DOWN"_s),
			$of("scrollLeft"_s)
		}))),
		$of("ScrollPane.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::SCROLL_PANE)),
		$of("Separator.insets"_s),
		$of(zeroInsets),
		$of("Separator.thickness"_s),
		$($of($Integer::valueOf(2))),
		$of("Slider.paintValue"_s),
		$of($Boolean::TRUE),
		$of("Slider.thumbWidth"_s),
		$($of($Integer::valueOf(30))),
		$of("Slider.thumbHeight"_s),
		$($of($Integer::valueOf(14))),
		$of("Slider.focusInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("RIGHT"_s),
			$of("positiveUnitIncrement"_s),
			$of("KP_RIGHT"_s),
			$of("positiveUnitIncrement"_s),
			$of("DOWN"_s),
			$of("negativeUnitIncrement"_s),
			$of("KP_DOWN"_s),
			$of("negativeUnitIncrement"_s),
			$of("PAGE_DOWN"_s),
			$of("negativeBlockIncrement"_s),
			$of("LEFT"_s),
			$of("negativeUnitIncrement"_s),
			$of("KP_LEFT"_s),
			$of("negativeUnitIncrement"_s),
			$of("UP"_s),
			$of("positiveUnitIncrement"_s),
			$of("KP_UP"_s),
			$of("positiveUnitIncrement"_s),
			$of("PAGE_UP"_s),
			$of("positiveBlockIncrement"_s),
			$of("HOME"_s),
			$of("minScroll"_s),
			$of("END"_s),
			$of("maxScroll"_s)
		}))),
		$of("Slider.focusInputMap.RightToLeft"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("RIGHT"_s),
			$of("negativeUnitIncrement"_s),
			$of("KP_RIGHT"_s),
			$of("negativeUnitIncrement"_s),
			$of("LEFT"_s),
			$of("positiveUnitIncrement"_s),
			$of("KP_LEFT"_s),
			$of("positiveUnitIncrement"_s)
		}))),
		$of("Slider.onlyLeftMouseButtonDrag"_s),
		$of($Boolean::FALSE),
		$of("Spinner.ancestorInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("UP"_s),
			$of("increment"_s),
			$of("KP_UP"_s),
			$of("increment"_s),
			$of("DOWN"_s),
			$of("decrement"_s),
			$of("KP_DOWN"_s),
			$of("decrement"_s)
		}))),
		$of("Spinner.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::SPINNER)),
		$of("Spinner.editorAlignment"_s),
		$($of($Integer::valueOf($JTextField::LEADING))),
		$of("SplitPane.ancestorInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("UP"_s),
			$of("negativeIncrement"_s),
			$of("DOWN"_s),
			$of("positiveIncrement"_s),
			$of("LEFT"_s),
			$of("negativeIncrement"_s),
			$of("RIGHT"_s),
			$of("positiveIncrement"_s),
			$of("KP_UP"_s),
			$of("negativeIncrement"_s),
			$of("KP_DOWN"_s),
			$of("positiveIncrement"_s),
			$of("KP_LEFT"_s),
			$of("negativeIncrement"_s),
			$of("KP_RIGHT"_s),
			$of("positiveIncrement"_s),
			$of("HOME"_s),
			$of("selectMin"_s),
			$of("END"_s),
			$of("selectMax"_s),
			$of("F8"_s),
			$of("startResize"_s),
			$of("F6"_s),
			$of("toggleFocus"_s),
			$of("ctrl TAB"_s),
			$of("focusOutForward"_s),
			$of("ctrl shift TAB"_s),
			$of("focusOutBackward"_s)
		}))),
		$of("SplitPane.size"_s),
		$($of($Integer::valueOf(7))),
		$of("SplitPane.oneTouchOffset"_s),
		$($of($Integer::valueOf(2))),
		$of("SplitPane.oneTouchButtonSize"_s),
		$($of($Integer::valueOf(5))),
		$of("SplitPane.supportsOneTouchButtons"_s),
		$of($Boolean::FALSE),
		$of("TabbedPane.focusInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("RIGHT"_s),
			$of("navigateRight"_s),
			$of("KP_RIGHT"_s),
			$of("navigateRight"_s),
			$of("LEFT"_s),
			$of("navigateLeft"_s),
			$of("KP_LEFT"_s),
			$of("navigateLeft"_s),
			$of("UP"_s),
			$of("navigateUp"_s),
			$of("KP_UP"_s),
			$of("navigateUp"_s),
			$of("DOWN"_s),
			$of("navigateDown"_s),
			$of("KP_DOWN"_s),
			$of("navigateDown"_s),
			$of("ctrl DOWN"_s),
			$of("requestFocusForVisibleComponent"_s),
			$of("ctrl KP_DOWN"_s),
			$of("requestFocusForVisibleComponent"_s),
			$of("SPACE"_s),
			$of("selectTabWithFocus"_s)
		}))),
		$of("TabbedPane.ancestorInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("ctrl TAB"_s),
			$of("navigateNext"_s),
			$of("ctrl shift TAB"_s),
			$of("navigatePrevious"_s),
			$of("ctrl PAGE_DOWN"_s),
			$of("navigatePageDown"_s),
			$of("ctrl PAGE_UP"_s),
			$of("navigatePageUp"_s),
			$of("ctrl UP"_s),
			$of("requestFocus"_s),
			$of("ctrl KP_UP"_s),
			$of("requestFocus"_s)
		}))),
		$of("TabbedPane.labelShift"_s),
		$($of($Integer::valueOf(3))),
		$of("TabbedPane.selectedLabelShift"_s),
		$($of($Integer::valueOf(3))),
		$of("TabbedPane.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::TABBED_PANE)),
		$of("TabbedPane.selectedTabPadInsets"_s),
		$of($$new($InsetsUIResource, 2, 2, 0, 1)),
		$of("Table.scrollPaneBorder"_s),
		$of(zeroBorder),
		$of("Table.background"_s),
		$of(tableBg),
		$of("Table.focusCellBackground"_s),
		$of(tableFocusCellBg),
		$of("Table.focusCellForeground"_s),
		$of(tableFocusCellFg),
		$of("Table.focusCellHighlightBorder"_s),
		focusBorder,
		$of("Table.focusSelectedCellHighlightBorder"_s),
		focusSelectedBorder,
		$of("Table.ancestorInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("ctrl C"_s),
			$of("copy"_s),
			$of("ctrl V"_s),
			$of("paste"_s),
			$of("ctrl X"_s),
			$of("cut"_s),
			$of("COPY"_s),
			$of("copy"_s),
			$of("PASTE"_s),
			$of("paste"_s),
			$of("CUT"_s),
			$of("cut"_s),
			$of("control INSERT"_s),
			$of("copy"_s),
			$of("shift INSERT"_s),
			$of("paste"_s),
			$of("shift DELETE"_s),
			$of("cut"_s),
			$of("RIGHT"_s),
			$of("selectNextColumn"_s),
			$of("KP_RIGHT"_s),
			$of("selectNextColumn"_s),
			$of("shift RIGHT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("shift KP_RIGHT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("ctrl shift RIGHT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("ctrl shift KP_RIGHT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("ctrl RIGHT"_s),
			$of("selectNextColumnChangeLead"_s),
			$of("ctrl KP_RIGHT"_s),
			$of("selectNextColumnChangeLead"_s),
			$of("LEFT"_s),
			$of("selectPreviousColumn"_s),
			$of("KP_LEFT"_s),
			$of("selectPreviousColumn"_s),
			$of("shift LEFT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("shift KP_LEFT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("ctrl shift LEFT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("ctrl shift KP_LEFT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("ctrl LEFT"_s),
			$of("selectPreviousColumnChangeLead"_s),
			$of("ctrl KP_LEFT"_s),
			$of("selectPreviousColumnChangeLead"_s),
			$of("DOWN"_s),
			$of("selectNextRow"_s),
			$of("KP_DOWN"_s),
			$of("selectNextRow"_s),
			$of("shift DOWN"_s),
			$of("selectNextRowExtendSelection"_s),
			$of("shift KP_DOWN"_s),
			$of("selectNextRowExtendSelection"_s),
			$of("ctrl shift DOWN"_s),
			$of("selectNextRowExtendSelection"_s),
			$of("ctrl shift KP_DOWN"_s),
			$of("selectNextRowExtendSelection"_s),
			$of("ctrl DOWN"_s),
			$of("selectNextRowChangeLead"_s),
			$of("ctrl KP_DOWN"_s),
			$of("selectNextRowChangeLead"_s),
			$of("UP"_s),
			$of("selectPreviousRow"_s),
			$of("KP_UP"_s),
			$of("selectPreviousRow"_s),
			$of("shift UP"_s),
			$of("selectPreviousRowExtendSelection"_s),
			$of("shift KP_UP"_s),
			$of("selectPreviousRowExtendSelection"_s),
			$of("ctrl shift UP"_s),
			$of("selectPreviousRowExtendSelection"_s),
			$of("ctrl shift KP_UP"_s),
			$of("selectPreviousRowExtendSelection"_s),
			$of("ctrl UP"_s),
			$of("selectPreviousRowChangeLead"_s),
			$of("ctrl KP_UP"_s),
			$of("selectPreviousRowChangeLead"_s),
			$of("HOME"_s),
			$of("selectFirstColumn"_s),
			$of("shift HOME"_s),
			$of("selectFirstColumnExtendSelection"_s),
			$of("ctrl shift HOME"_s),
			$of("selectFirstRowExtendSelection"_s),
			$of("ctrl HOME"_s),
			$of("selectFirstRow"_s),
			$of("END"_s),
			$of("selectLastColumn"_s),
			$of("shift END"_s),
			$of("selectLastColumnExtendSelection"_s),
			$of("ctrl shift END"_s),
			$of("selectLastRowExtendSelection"_s),
			$of("ctrl END"_s),
			$of("selectLastRow"_s),
			$of("PAGE_UP"_s),
			$of("scrollUpChangeSelection"_s),
			$of("shift PAGE_UP"_s),
			$of("scrollUpExtendSelection"_s),
			$of("ctrl shift PAGE_UP"_s),
			$of("scrollLeftExtendSelection"_s),
			$of("ctrl PAGE_UP"_s),
			$of("scrollLeftChangeSelection"_s),
			$of("PAGE_DOWN"_s),
			$of("scrollDownChangeSelection"_s),
			$of("shift PAGE_DOWN"_s),
			$of("scrollDownExtendSelection"_s),
			$of("ctrl shift PAGE_DOWN"_s),
			$of("scrollRightExtendSelection"_s),
			$of("ctrl PAGE_DOWN"_s),
			$of("scrollRightChangeSelection"_s),
			$of("TAB"_s),
			$of("selectNextColumnCell"_s),
			$of("shift TAB"_s),
			$of("selectPreviousColumnCell"_s),
			$of("ENTER"_s),
			$of("selectNextRowCell"_s),
			$of("shift ENTER"_s),
			$of("selectPreviousRowCell"_s),
			$of("ctrl A"_s),
			$of("selectAll"_s),
			$of("ctrl SLASH"_s),
			$of("selectAll"_s),
			$of("ctrl BACK_SLASH"_s),
			$of("clearSelection"_s),
			$of("ESCAPE"_s),
			$of("cancel"_s),
			$of("F2"_s),
			$of("startEditing"_s),
			$of("SPACE"_s),
			$of("addToSelection"_s),
			$of("ctrl SPACE"_s),
			$of("toggleAndAnchor"_s),
			$of("shift SPACE"_s),
			$of("extendTo"_s),
			$of("ctrl shift SPACE"_s),
			$of("moveSelectionTo"_s),
			$of("F8"_s),
			$of("focusHeader"_s)
		}))),
		$of("Table.ancestorInputMap.RightToLeft"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("RIGHT"_s),
			$of("selectPreviousColumn"_s),
			$of("KP_RIGHT"_s),
			$of("selectPreviousColumn"_s),
			$of("shift RIGHT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("shift KP_RIGHT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("ctrl shift RIGHT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("ctrl shift KP_RIGHT"_s),
			$of("selectPreviousColumnExtendSelection"_s),
			$of("shift RIGHT"_s),
			$of("selectPreviousColumnChangeLead"_s),
			$of("shift KP_RIGHT"_s),
			$of("selectPreviousColumnChangeLead"_s),
			$of("LEFT"_s),
			$of("selectNextColumn"_s),
			$of("KP_LEFT"_s),
			$of("selectNextColumn"_s),
			$of("shift LEFT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("shift KP_LEFT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("ctrl shift LEFT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("ctrl shift KP_LEFT"_s),
			$of("selectNextColumnExtendSelection"_s),
			$of("ctrl LEFT"_s),
			$of("selectNextColumnChangeLead"_s),
			$of("ctrl KP_LEFT"_s),
			$of("selectNextColumnChangeLead"_s),
			$of("ctrl PAGE_UP"_s),
			$of("scrollRightChangeSelection"_s),
			$of("ctrl PAGE_DOWN"_s),
			$of("scrollLeftChangeSelection"_s),
			$of("ctrl shift PAGE_UP"_s),
			$of("scrollRightExtendSelection"_s),
			$of("ctrl shift PAGE_DOWN"_s),
			$of("scrollLeftExtendSelection"_s)
		}))),
		$of("Table.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::TABLE)),
		$of("Table.ascendingSortIcon"_s),
		$of($$new($GTKStyle$GTKLazyValue, "com.sun.java.swing.plaf.gtk.GTKIconFactory"_s, "getAscendingSortIcon"_s)),
		$of("Table.descendingSortIcon"_s),
		$of($$new($GTKStyle$GTKLazyValue, "com.sun.java.swing.plaf.gtk.GTKIconFactory"_s, "getDescendingSortIcon"_s)),
		$of("TableHeader.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::TABLE_HEADER)),
		$of("TableHeader.alignSorterArrow"_s),
		$of($Boolean::TRUE),
		$of("TextArea.caretForeground"_s),
		$of(caretColor),
		$of("TextArea.caretAspectRatio"_s),
		$of(defaultCaretAspectRatio),
		$of("TextArea.caretBlinkRate"_s),
		$of(caretBlinkRate),
		$of("TextArea.margin"_s),
		$of(zeroInsets),
		$of("TextArea.focusInputMap"_s),
		multilineInputMap,
		$of("TextArea.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::TEXT_AREA)),
		$of("TextField.caretForeground"_s),
		$of(caretColor),
		$of("TextField.caretAspectRatio"_s),
		$of(defaultCaretAspectRatio),
		$of("TextField.caretBlinkRate"_s),
		$of(caretBlinkRate),
		$of("TextField.margin"_s),
		$of(zeroInsets),
		$of("TextField.focusInputMap"_s),
		fieldInputMap,
		$of("TextField.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::TEXT_FIELD)),
		$of("TextPane.caretForeground"_s),
		$of(caretColor),
		$of("TextPane.caretAspectRatio"_s),
		$of(defaultCaretAspectRatio),
		$of("TextPane.caretBlinkRate"_s),
		$of(caretBlinkRate),
		$of("TextPane.margin"_s),
		editorMargin,
		$of("TextPane.focusInputMap"_s),
		multilineInputMap,
		$of("TextPane.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::TEXT_PANE)),
		$of("TitledBorder.titleColor"_s),
		$of(controlText),
		$of("TitledBorder.border"_s),
		$of($$new($GTKLookAndFeel$2, this)),
		$of("ToggleButton.focusInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("SPACE"_s),
			$of("pressed"_s),
			$of("released SPACE"_s),
			$of("released"_s)
		}))),
		$of("ToggleButton.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::TOGGLE_BUTTON)),
		$of("ToggleButton.margin"_s),
		$of(zeroInsets),
		$of("ToolBar.separatorSize"_s),
		$of($$new($DimensionUIResource, 10, 10)),
		$of("ToolBar.handleIcon"_s),
		$of($$new($GTKLookAndFeel$3, this)),
		$of("ToolBar.ancestorInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("UP"_s),
			$of("navigateUp"_s),
			$of("KP_UP"_s),
			$of("navigateUp"_s),
			$of("DOWN"_s),
			$of("navigateDown"_s),
			$of("KP_DOWN"_s),
			$of("navigateDown"_s),
			$of("LEFT"_s),
			$of("navigateLeft"_s),
			$of("KP_LEFT"_s),
			$of("navigateLeft"_s),
			$of("RIGHT"_s),
			$of("navigateRight"_s),
			$of("KP_RIGHT"_s),
			$of("navigateRight"_s)
		}))),
		$of("ToolBar.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::TOOL_BAR)),
		$of("ToolTip.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::TOOL_TIP)),
		$of("Tree.padding"_s),
		$($of($Integer::valueOf(4))),
		$of("Tree.background"_s),
		$of(tableBg),
		$of("Tree.drawHorizontalLines"_s),
		$of($Boolean::FALSE),
		$of("Tree.drawVerticalLines"_s),
		$of($Boolean::FALSE),
		$of("Tree.rowHeight"_s),
		$($of($Integer::valueOf(-1))),
		$of("Tree.scrollsOnExpand"_s),
		$of($Boolean::FALSE),
		$of("Tree.expanderSize"_s),
		$($of($Integer::valueOf(10))),
		$of("Tree.repaintWholeRow"_s),
		$of($Boolean::TRUE),
		$of("Tree.closedIcon"_s),
		($Object*)nullptr,
		$of("Tree.leafIcon"_s),
		($Object*)nullptr,
		$of("Tree.openIcon"_s),
		($Object*)nullptr,
		$of("Tree.expandedIcon"_s),
		$of($$new($GTKStyle$GTKLazyValue, "com.sun.java.swing.plaf.gtk.GTKIconFactory"_s, "getTreeExpandedIcon"_s)),
		$of("Tree.collapsedIcon"_s),
		$of($$new($GTKStyle$GTKLazyValue, "com.sun.java.swing.plaf.gtk.GTKIconFactory"_s, "getTreeCollapsedIcon"_s)),
		$of("Tree.leftChildIndent"_s),
		$($of($Integer::valueOf(2))),
		$of("Tree.rightChildIndent"_s),
		$($of($Integer::valueOf(12))),
		$of("Tree.scrollsHorizontallyAndVertically"_s),
		$of($Boolean::FALSE),
		$of("Tree.drawsFocusBorder"_s),
		$of($Boolean::TRUE),
		$of("Tree.focusInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("ctrl C"_s),
			$of("copy"_s),
			$of("ctrl V"_s),
			$of("paste"_s),
			$of("ctrl X"_s),
			$of("cut"_s),
			$of("COPY"_s),
			$of("copy"_s),
			$of("PASTE"_s),
			$of("paste"_s),
			$of("CUT"_s),
			$of("cut"_s),
			$of("control INSERT"_s),
			$of("copy"_s),
			$of("shift INSERT"_s),
			$of("paste"_s),
			$of("shift DELETE"_s),
			$of("cut"_s),
			$of("UP"_s),
			$of("selectPrevious"_s),
			$of("KP_UP"_s),
			$of("selectPrevious"_s),
			$of("shift UP"_s),
			$of("selectPreviousExtendSelection"_s),
			$of("shift KP_UP"_s),
			$of("selectPreviousExtendSelection"_s),
			$of("ctrl shift UP"_s),
			$of("selectPreviousExtendSelection"_s),
			$of("ctrl shift KP_UP"_s),
			$of("selectPreviousExtendSelection"_s),
			$of("ctrl UP"_s),
			$of("selectPreviousChangeLead"_s),
			$of("ctrl KP_UP"_s),
			$of("selectPreviousChangeLead"_s),
			$of("DOWN"_s),
			$of("selectNext"_s),
			$of("KP_DOWN"_s),
			$of("selectNext"_s),
			$of("shift DOWN"_s),
			$of("selectNextExtendSelection"_s),
			$of("shift KP_DOWN"_s),
			$of("selectNextExtendSelection"_s),
			$of("ctrl shift DOWN"_s),
			$of("selectNextExtendSelection"_s),
			$of("ctrl shift KP_DOWN"_s),
			$of("selectNextExtendSelection"_s),
			$of("ctrl DOWN"_s),
			$of("selectNextChangeLead"_s),
			$of("ctrl KP_DOWN"_s),
			$of("selectNextChangeLead"_s),
			$of("RIGHT"_s),
			$of("selectChild"_s),
			$of("KP_RIGHT"_s),
			$of("selectChild"_s),
			$of("LEFT"_s),
			$of("selectParent"_s),
			$of("KP_LEFT"_s),
			$of("selectParent"_s),
			$of("typed +"_s),
			$of("expand"_s),
			$of("typed -"_s),
			$of("collapse"_s),
			$of("BACK_SPACE"_s),
			$of("moveSelectionToParent"_s),
			$of("PAGE_UP"_s),
			$of("scrollUpChangeSelection"_s),
			$of("shift PAGE_UP"_s),
			$of("scrollUpExtendSelection"_s),
			$of("ctrl shift PAGE_UP"_s),
			$of("scrollUpExtendSelection"_s),
			$of("ctrl PAGE_UP"_s),
			$of("scrollUpChangeLead"_s),
			$of("PAGE_DOWN"_s),
			$of("scrollDownChangeSelection"_s),
			$of("shift PAGE_DOWN"_s),
			$of("scrollDownExtendSelection"_s),
			$of("ctrl shift PAGE_DOWN"_s),
			$of("scrollDownExtendSelection"_s),
			$of("ctrl PAGE_DOWN"_s),
			$of("scrollDownChangeLead"_s),
			$of("HOME"_s),
			$of("selectFirst"_s),
			$of("shift HOME"_s),
			$of("selectFirstExtendSelection"_s),
			$of("ctrl shift HOME"_s),
			$of("selectFirstExtendSelection"_s),
			$of("ctrl HOME"_s),
			$of("selectFirstChangeLead"_s),
			$of("END"_s),
			$of("selectLast"_s),
			$of("shift END"_s),
			$of("selectLastExtendSelection"_s),
			$of("ctrl shift END"_s),
			$of("selectLastExtendSelection"_s),
			$of("ctrl END"_s),
			$of("selectLastChangeLead"_s),
			$of("F2"_s),
			$of("startEditing"_s),
			$of("ctrl A"_s),
			$of("selectAll"_s),
			$of("ctrl SLASH"_s),
			$of("selectAll"_s),
			$of("ctrl BACK_SLASH"_s),
			$of("clearSelection"_s),
			$of("ctrl LEFT"_s),
			$of("scrollLeft"_s),
			$of("ctrl KP_LEFT"_s),
			$of("scrollLeft"_s),
			$of("ctrl RIGHT"_s),
			$of("scrollRight"_s),
			$of("ctrl KP_RIGHT"_s),
			$of("scrollRight"_s),
			$of("SPACE"_s),
			$of("addToSelection"_s),
			$of("ctrl SPACE"_s),
			$of("toggleAndAnchor"_s),
			$of("shift SPACE"_s),
			$of("extendTo"_s),
			$of("ctrl shift SPACE"_s),
			$of("moveSelectionTo"_s)
		}))),
		$of("Tree.focusInputMap.RightToLeft"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("RIGHT"_s),
			$of("selectParent"_s),
			$of("KP_RIGHT"_s),
			$of("selectParent"_s),
			$of("LEFT"_s),
			$of("selectChild"_s),
			$of("KP_LEFT"_s),
			$of("selectChild"_s)
		}))),
		$of("Tree.ancestorInputMap"_s),
		$of($$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			$of("ESCAPE"_s),
			$of("cancel"_s)
		}))),
		$of("Tree.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::TREE)),
		$of("Viewport.font"_s),
		$of($$new($GTKLookAndFeel$1FontLazyValue, this, $Region::VIEWPORT))
	}));
	table->putDefaults(defaults);
	if (this->fallbackFont != nullptr) {
		table->put("TitledBorder.font"_s, this->fallbackFont);
	}
	if (GTKLookAndFeel::aaTextInfo != nullptr) {
		table->putAll(GTKLookAndFeel::aaTextInfo);
	}
}

void GTKLookAndFeel::initSystemColorDefaults($UIDefaults* table) {
	$useLocalCurrentObjectStackCache();
	$var($SynthStyleFactory, factory, getStyleFactory());
	$init($Region);
	$var($GTKStyle, windowStyle, $cast($GTKStyle, $nc(factory)->getStyle(nullptr, $Region::INTERNAL_FRAME)));
	$init($GTKColorType);
	$nc(table)->put("window"_s, $($nc(windowStyle)->getGTKColor($SynthConstants::ENABLED, $GTKColorType::BACKGROUND)));
	table->put("windowText"_s, $($nc(windowStyle)->getGTKColor($SynthConstants::ENABLED, $GTKColorType::TEXT_FOREGROUND)));
	$var($GTKStyle, entryStyle, $cast($GTKStyle, factory->getStyle(nullptr, $Region::TEXT_FIELD)));
	table->put("text"_s, $($nc(entryStyle)->getGTKColor($SynthConstants::ENABLED, $GTKColorType::TEXT_BACKGROUND)));
	table->put("textText"_s, $($nc(entryStyle)->getGTKColor($SynthConstants::ENABLED, $GTKColorType::TEXT_FOREGROUND)));
	table->put("textHighlight"_s, $($nc(entryStyle)->getGTKColor($SynthConstants::SELECTED, $GTKColorType::TEXT_BACKGROUND)));
	table->put("textHighlightText"_s, $($nc(entryStyle)->getGTKColor($SynthConstants::SELECTED, $GTKColorType::TEXT_FOREGROUND)));
	table->put("textInactiveText"_s, $($nc(entryStyle)->getGTKColor($SynthConstants::DISABLED, $GTKColorType::TEXT_FOREGROUND)));
	$var($Object, caretColor, $nc(entryStyle)->getClassSpecificValue("cursor-color"_s));
	if (caretColor == nullptr) {
		$assign(caretColor, $GTKStyle::BLACK_COLOR);
	}
	table->put("caretColor"_s, caretColor);
	$var($GTKStyle, menuStyle, $cast($GTKStyle, factory->getStyle(nullptr, $Region::MENU_ITEM)));
	table->put("menu"_s, $($nc(menuStyle)->getGTKColor($SynthConstants::ENABLED, $GTKColorType::BACKGROUND)));
	table->put("menuText"_s, $($nc(menuStyle)->getGTKColor($SynthConstants::ENABLED, $GTKColorType::TEXT_FOREGROUND)));
	$var($GTKStyle, scrollbarStyle, $cast($GTKStyle, factory->getStyle(nullptr, $Region::SCROLL_BAR)));
	table->put("scrollbar"_s, $($nc(scrollbarStyle)->getGTKColor($SynthConstants::ENABLED, $GTKColorType::BACKGROUND)));
	$var($GTKStyle, infoStyle, $cast($GTKStyle, factory->getStyle(nullptr, $Region::OPTION_PANE)));
	table->put("info"_s, $($nc(infoStyle)->getGTKColor($SynthConstants::ENABLED, $GTKColorType::BACKGROUND)));
	table->put("infoText"_s, $($nc(infoStyle)->getGTKColor($SynthConstants::ENABLED, $GTKColorType::TEXT_FOREGROUND)));
	$var($GTKStyle, desktopStyle, $cast($GTKStyle, factory->getStyle(nullptr, $Region::DESKTOP_PANE)));
	table->put("desktop"_s, $($nc(desktopStyle)->getGTKColor($SynthConstants::ENABLED, $GTKColorType::BACKGROUND)));
	$var($GTKStyle, widgetStyle, $cast($GTKStyle, factory->getStyle(nullptr, $Region::LABEL)));
	$var($Color, bg, $nc(widgetStyle)->getGTKColor($SynthConstants::ENABLED, $GTKColorType::BACKGROUND));
	table->put("control"_s, bg);
	table->put("controlHighlight"_s, bg);
	table->put("controlText"_s, $(widgetStyle->getGTKColor($SynthConstants::ENABLED, $GTKColorType::TEXT_FOREGROUND)));
	table->put("controlLtHighlight"_s, $(widgetStyle->getGTKColor($SynthConstants::ENABLED, $GTKColorType::LIGHT)));
	table->put("controlShadow"_s, $(widgetStyle->getGTKColor($SynthConstants::ENABLED, $GTKColorType::DARK)));
	table->put("controlDkShadow"_s, $(widgetStyle->getGTKColor($SynthConstants::ENABLED, $GTKColorType::BLACK)));
	table->put("light"_s, $(widgetStyle->getGTKColor($SynthConstants::ENABLED, $GTKColorType::LIGHT)));
	table->put("mid"_s, $(widgetStyle->getGTKColor($SynthConstants::ENABLED, $GTKColorType::MID)));
	table->put("dark"_s, $(widgetStyle->getGTKColor($SynthConstants::ENABLED, $GTKColorType::DARK)));
	table->put("black"_s, $(widgetStyle->getGTKColor($SynthConstants::ENABLED, $GTKColorType::BLACK)));
	table->put("white"_s, $(widgetStyle->getGTKColor($SynthConstants::ENABLED, $GTKColorType::WHITE)));
}

$ComponentUI* GTKLookAndFeel::createUI($JComponent* c) {
	$init(GTKLookAndFeel);
	$useLocalCurrentObjectStackCache();
	$var($String, key, $nc($($nc(c)->getUIClassID()))->intern());
	if (key == "FileChooserUI"_s) {
		return $GTKFileChooserUI::createUI(c);
	}
	return $SynthLookAndFeel::createUI(c);
}

$String* GTKLookAndFeel::getGtkThemeName() {
	$init(GTKLookAndFeel);
	return GTKLookAndFeel::gtkThemeName;
}

bool GTKLookAndFeel::isLeftToRight($Component* c) {
	$init(GTKLookAndFeel);
	return $nc($($nc(c)->getComponentOrientation()))->isLeftToRight();
}

void GTKLookAndFeel::initialize() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	if ($instanceOf($UNIXToolkit, toolkit) && !$nc(($cast($UNIXToolkit, toolkit)))->loadGTK()) {
		$throwNew($InternalError, "Unable to load native GTK libraries"_s);
	}
	$init($UNIXToolkit$GtkVersions);
	if ($UNIXToolkit::getGtkVersion() == $UNIXToolkit$GtkVersions::GTK2) {
		$var($String, version, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "jdk.gtk.version"_s)))));
		if (version != nullptr) {
			GTKLookAndFeel::IS_22 = version->equals("2.2"_s);
		} else {
			GTKLookAndFeel::IS_22 = true;
		}
	} else {
		if ($UNIXToolkit::getGtkVersion() == $UNIXToolkit$GtkVersions::GTK3) {
			GTKLookAndFeel::IS_3 = true;
		}
	}
	$SynthLookAndFeel::initialize();
	this->inInitialize = true;
	loadStyles();
	this->inInitialize = false;
	GTKLookAndFeel::gtkAAFontSettingsCond = $SwingUtilities2::isLocalDisplay();
	$assignStatic(GTKLookAndFeel::aaTextInfo, $new($HashMap, 2));
	$SwingUtilities2::putAATextInfo(GTKLookAndFeel::gtkAAFontSettingsCond, GTKLookAndFeel::aaTextInfo);
}

void GTKLookAndFeel::flushUnreferenced() {
	$init(GTKLookAndFeel);
	$var($GTKLookAndFeel$WeakPCL, pcl, nullptr);
	while (($assign(pcl, $cast($GTKLookAndFeel$WeakPCL, $nc(GTKLookAndFeel::queue)->poll()))) != nullptr) {
		$nc(pcl)->dispose();
	}
}

bool GTKLookAndFeel::isSupportedLookAndFeel() {
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	return ($instanceOf($SunToolkit, toolkit) && $nc(($cast($SunToolkit, toolkit)))->isNativeGTKAvailable());
}

bool GTKLookAndFeel::isNativeLookAndFeel() {
	return true;
}

$String* GTKLookAndFeel::getDescription() {
	return "GTK look and feel"_s;
}

$String* GTKLookAndFeel::getName() {
	return "GTK look and feel"_s;
}

$String* GTKLookAndFeel::getID() {
	return "GTK"_s;
}

void GTKLookAndFeel::loadSystemColors($UIDefaults* table, $StringArray* systemColors, bool useNative) {
	$SynthLookAndFeel::loadSystemColors(table, systemColors, false);
}

void GTKLookAndFeel::loadStyles() {
	$useLocalCurrentObjectStackCache();
	$assignStatic(GTKLookAndFeel::gtkThemeName, $cast($String, $nc($($Toolkit::getDefaultToolkit()))->getDesktopProperty("gnome.Net/ThemeName"_s)));
	setStyleFactory($(getGTKStyleFactory()));
	if (!this->inInitialize) {
		$var($UIDefaults, table, $UIManager::getLookAndFeelDefaults());
		initSystemColorDefaults(table);
		initComponentDefaults(table);
	}
}

$GTKStyleFactory* GTKLookAndFeel::getGTKStyleFactory() {
	$useLocalCurrentObjectStackCache();
	$init($GTKEngine);
	$var($GTKEngine, engine, $GTKEngine::INSTANCE);
	$init($GTKEngine$Settings);
	$var($Object, iconSizes, $nc(engine)->getSetting($GTKEngine$Settings::GTK_ICON_SIZES));
	if ($instanceOf($String, iconSizes)) {
		if (!configIconSizes($cast($String, iconSizes))) {
			$nc($System::err)->println($$str({"Error parsing gtk-icon-sizes string: \'"_s, iconSizes, "\'"_s}));
		}
	}
	$var($Object, fontName, $nc($($Toolkit::getDefaultToolkit()))->getDesktopProperty("gnome.Gtk/FontName"_s));
	if (!($instanceOf($String, fontName))) {
		$assign(fontName, engine->getSetting($GTKEngine$Settings::GTK_FONT_NAME));
		if (!($instanceOf($String, fontName))) {
			$assign(fontName, "sans 10"_s);
		}
	}
	if (this->styleFactory == nullptr) {
		$set(this, styleFactory, $new($GTKStyleFactory));
	}
	$var($Font, defaultFont, $PangoFonts::lookupFont($cast($String, fontName)));
	$set(this, fallbackFont, defaultFont);
	$nc(this->styleFactory)->initStyles(defaultFont);
	return this->styleFactory;
}

bool GTKLookAndFeel::configIconSizes($String* sizeString) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sizes, $nc(sizeString)->split(":"_s));
	for (int32_t i = 0; i < sizes->length; ++i) {
		$var($StringArray, splits, $nc(sizes->get(i))->split("="_s));
		if (splits->length != 2) {
			return false;
		}
		$var($String, size, $($nc(splits->get(0))->trim())->intern());
		if (size->length() < 1) {
			return false;
		}
		$assign(splits, $nc(splits->get(1))->split(","_s));
		if (splits->length != 2) {
			return false;
		}
		$var($String, width, $nc(splits->get(0))->trim());
		$var($String, height, $nc(splits->get(1))->trim());
		bool var$0 = width->length() < 1;
		if (var$0 || height->length() < 1) {
			return false;
		}
		int32_t w = 0;
		int32_t h = 0;
		try {
			w = $Integer::parseInt(width);
			h = $Integer::parseInt(height);
		} catch ($NumberFormatException& nfe) {
			return false;
		}
		if (w > 0 && h > 0) {
			int32_t type = $GTKStyle$GTKStockIconInfo::getIconType(size);
			$GTKStyle$GTKStockIconInfo::setIconSize(type, w, h);
		} else {
			$nc($System::err)->println($$str({"Invalid size in gtk-icon-sizes: "_s, $$str(w), ","_s, $$str(h)}));
		}
	}
	return true;
}

bool GTKLookAndFeel::shouldUpdateStyleOnAncestorChanged() {
	return true;
}

$LayoutStyle* GTKLookAndFeel::getLayoutStyle() {
	$init($GTKLookAndFeel$GnomeLayoutStyle);
	return $GTKLookAndFeel$GnomeLayoutStyle::INSTANCE;
}

$Object* GTKLookAndFeel::lambda$initComponentDefaults$0($UIDefaults* t) {
	$init(GTKLookAndFeel);
	return $of($new($BorderUIResource$EmptyBorderUIResource, 0, 0, 0, 0));
}

void clinit$GTKLookAndFeel($Class* class$) {
	GTKLookAndFeel::$assertionsDisabled = !GTKLookAndFeel::class$->desiredAssertionStatus();
	$assignStatic(GTKLookAndFeel::gtkThemeName, "Default"_s);
	$assignStatic(GTKLookAndFeel::queue, $new($ReferenceQueue));
}

GTKLookAndFeel::GTKLookAndFeel() {
}

$Class* GTKLookAndFeel::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(GTKLookAndFeel$$Lambda$lambda$initComponentDefaults$0::classInfo$.name)) {
			return GTKLookAndFeel$$Lambda$lambda$initComponentDefaults$0::load$(name, initialize);
		}
	}
	$loadClass(GTKLookAndFeel, name, initialize, &_GTKLookAndFeel_ClassInfo_, clinit$GTKLookAndFeel, allocate$GTKLookAndFeel);
	return class$;
}

$Class* GTKLookAndFeel::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com