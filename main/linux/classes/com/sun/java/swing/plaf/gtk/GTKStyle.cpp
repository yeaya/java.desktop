#include <com/sun/java/swing/plaf/gtk/GTKStyle.h>

#include <com/sun/java/swing/plaf/gtk/GTKColorType.h>
#include <com/sun/java/swing/plaf/gtk/GTKConstants$StateType.h>
#include <com/sun/java/swing/plaf/gtk/GTKConstants$TextDirection.h>
#include <com/sun/java/swing/plaf/gtk/GTKEngine$CustomRegion.h>
#include <com/sun/java/swing/plaf/gtk/GTKEngine$WidgetType.h>
#include <com/sun/java/swing/plaf/gtk/GTKGraphicsUtils.h>
#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel.h>
#include <com/sun/java/swing/plaf/gtk/GTKPainter.h>
#include <com/sun/java/swing/plaf/gtk/GTKStyle$GTKStockIcon.h>
#include <com/sun/java/swing/plaf/gtk/Metacity.h>
#include <com/sun/java/swing/plaf/gtk/PangoFonts.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Toolkit.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/Number.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/DimensionUIResource.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <sun/awt/UNIXToolkit.h>
#include <jcpp.h>

#undef ARROW_BUTTON
#undef BACKGROUND
#undef BLACK
#undef BLACK_COLOR
#undef BUTTON
#undef BUTTON_DEFAULT_BORDER_INSETS
#undef CHECK_BOX
#undef CHECK_BOX_MENU_ITEM
#undef CHILD_SPACING
#undef CLASS_SPECIFIC_MAP
#undef COMBO_BOX
#undef DEFAULT_FONT
#undef DESKTOP_ICON
#undef DESKTOP_PANE
#undef EDITOR_PANE
#undef ENABLED
#undef FOCUS
#undef FOREGROUND
#undef FORMATTED_TEXT_FIELD
#undef GTK_GRAPHICS
#undef GTK_LOCK
#undef HORIZONTAL
#undef HSCROLL_BAR
#undef ICONS_MAP
#undef ICON_PROPERTY_PREFIX
#undef INSTANCE
#undef INTERNAL_FRAME
#undef KEY_TEXT_ANTIALIASING
#undef KEY_TEXT_LCD_CONTRAST
#undef LABEL
#undef LIST
#undef LTR
#undef MENU
#undef MENU_BAR
#undef MENU_ITEM
#undef MENU_ITEM_ACCELERATOR
#undef OPTION_PANE
#undef PANEL
#undef PASSWORD_FIELD
#undef PLAIN
#undef POPUP_MENU
#undef POPUP_MENU_SEPARATOR
#undef PRESSED
#undef PROGRESS_BAR
#undef RADIO_BUTTON
#undef RADIO_BUTTON_MENU_ITEM
#undef ROOT_PANE
#undef RTL
#undef SCROLL_BAR
#undef SCROLL_PANE
#undef SELECTED
#undef SEPARATOR
#undef SLIDER
#undef SLIDER_TRACK
#undef SPINNER
#undef SPLIT_PANE_DIVIDER
#undef TABBED_PANE
#undef TABBED_PANE_CONTENT
#undef TABBED_PANE_TAB
#undef TABLE
#undef TEXT_AREA
#undef TEXT_BACKGROUND
#undef TEXT_FIELD
#undef TEXT_FOREGROUND
#undef TEXT_PANE
#undef TITLED_BORDER
#undef TOGGLE_BUTTON
#undef TOOL_BAR
#undef TOOL_BAR_DRAG_WINDOW
#undef TOOL_BAR_SEPARATOR
#undef TOOL_TIP
#undef TREE
#undef TREE_CELL
#undef VIEWPORT
#undef VSCROLL_BAR
#undef WHITE
#undef WHITE_COLOR

using $GTKColorType = ::com::sun::java::swing::plaf::gtk::GTKColorType;
using $GTKConstants$StateType = ::com::sun::java::swing::plaf::gtk::GTKConstants$StateType;
using $GTKConstants$TextDirection = ::com::sun::java::swing::plaf::gtk::GTKConstants$TextDirection;
using $GTKEngine$CustomRegion = ::com::sun::java::swing::plaf::gtk::GTKEngine$CustomRegion;
using $GTKEngine$WidgetType = ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType;
using $GTKGraphicsUtils = ::com::sun::java::swing::plaf::gtk::GTKGraphicsUtils;
using $GTKLookAndFeel = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel;
using $GTKPainter = ::com::sun::java::swing::plaf::gtk::GTKPainter;
using $GTKStyle$GTKStockIcon = ::com::sun::java::swing::plaf::gtk::GTKStyle$GTKStockIcon;
using $Metacity = ::com::sun::java::swing::plaf::gtk::Metacity;
using $PangoFonts = ::com::sun::java::swing::plaf::gtk::PangoFonts;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $RenderingHints = ::java::awt::RenderingHints;
using $Toolkit = ::java::awt::Toolkit;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JSeparator = ::javax::swing::JSeparator;
using $JToolBar = ::javax::swing::JToolBar;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $UIManager = ::javax::swing::UIManager;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $DimensionUIResource = ::javax::swing::plaf::DimensionUIResource;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthGraphicsUtils = ::javax::swing::plaf::synth::SynthGraphicsUtils;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $UNIXToolkit = ::sun::awt::UNIXToolkit;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKStyle_FieldInfo_[] = {
	{"ICON_PROPERTY_PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GTKStyle, ICON_PROPERTY_PREFIX)},
	{"BLACK_COLOR", "Ljava/awt/Color;", nullptr, $STATIC | $FINAL, $staticField(GTKStyle, BLACK_COLOR)},
	{"WHITE_COLOR", "Ljava/awt/Color;", nullptr, $STATIC | $FINAL, $staticField(GTKStyle, WHITE_COLOR)},
	{"DEFAULT_FONT", "Ljava/awt/Font;", nullptr, $STATIC | $FINAL, $staticField(GTKStyle, DEFAULT_FONT)},
	{"BUTTON_DEFAULT_BORDER_INSETS", "Ljava/awt/Insets;", nullptr, $STATIC | $FINAL, $staticField(GTKStyle, BUTTON_DEFAULT_BORDER_INSETS)},
	{"GTK_GRAPHICS", "Lcom/sun/java/swing/plaf/gtk/GTKGraphicsUtils;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GTKStyle, GTK_GRAPHICS)},
	{"CLASS_SPECIFIC_MAP", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(GTKStyle, CLASS_SPECIFIC_MAP)},
	{"ICONS_MAP", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/java/swing/plaf/gtk/GTKStyle$GTKStockIcon;>;", $PRIVATE | $STATIC | $FINAL, $staticField(GTKStyle, ICONS_MAP)},
	{"font", "Ljava/awt/Font;", nullptr, $PRIVATE | $FINAL, $field(GTKStyle, font)},
	{"widgetType", "I", nullptr, $PRIVATE | $FINAL, $field(GTKStyle, widgetType)},
	{"xThickness", "I", nullptr, $PRIVATE | $FINAL, $field(GTKStyle, xThickness)},
	{"yThickness", "I", nullptr, $PRIVATE | $FINAL, $field(GTKStyle, yThickness)},
	{}
};

$MethodInfo _GTKStyle_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Font;Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;)V", nullptr, 0, $method(static_cast<void(GTKStyle::*)($Font*,$GTKEngine$WidgetType*)>(&GTKStyle::init$))},
	{"get", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getButtonInsets", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PRIVATE, $method(static_cast<$Insets*(GTKStyle::*)($SynthContext*,$Insets*)>(&GTKStyle::getButtonInsets))},
	{"getClassSpecificBoolValue", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/lang/String;Z)Z", nullptr, 0},
	{"getClassSpecificInsetsValue", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/lang/String;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, 0},
	{"getClassSpecificIntValue", "(Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;Ljava/lang/String;I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($GTKEngine$WidgetType*,$String*,int32_t)>(&GTKStyle::getClassSpecificIntValue))},
	{"getClassSpecificIntValue", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/lang/String;I)I", nullptr, 0},
	{"getClassSpecificValue", "(Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($GTKEngine$WidgetType*,$String*)>(&GTKStyle::getClassSpecificValue))},
	{"getClassSpecificValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0},
	{"getColor", "(Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/ColorType;)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getColorForState", "(Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/ColorType;)Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getDefaultFont", "()Ljava/awt/Font;", nullptr, 0},
	{"getFontForState", "(Ljavax/swing/plaf/synth/SynthContext;)Ljava/awt/Font;", nullptr, $PROTECTED},
	{"getGTKColor", "(ILjavax/swing/plaf/synth/ColorType;)Ljava/awt/Color;", nullptr, 0},
	{"getGTKColor", "(III)Ljava/awt/Color;", nullptr, 0},
	{"getGTKColor", "(Ljavax/swing/plaf/synth/SynthContext;ILjavax/swing/plaf/synth/ColorType;)Ljava/awt/Color;", nullptr, 0},
	{"getGraphicsUtils", "(Ljavax/swing/plaf/synth/SynthContext;)Ljavax/swing/plaf/synth/SynthGraphicsUtils;", nullptr, $PUBLIC},
	{"getInsets", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getMenuBarInsets", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PRIVATE, $method(static_cast<$Insets*(GTKStyle::*)($SynthContext*,$Insets*)>(&GTKStyle::getMenuBarInsets))},
	{"getMenuItemInsets", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PRIVATE, $method(static_cast<$Insets*(GTKStyle::*)($SynthContext*,$Insets*)>(&GTKStyle::getMenuItemInsets))},
	{"getPainter", "(Ljavax/swing/plaf/synth/SynthContext;)Ljavax/swing/plaf/synth/SynthPainter;", nullptr, $PUBLIC},
	{"getRadioInsets", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PRIVATE, $method(static_cast<$Insets*(GTKStyle::*)($SynthContext*,$Insets*)>(&GTKStyle::getRadioInsets))},
	{"getScrollBarInsets", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PRIVATE, $method(static_cast<$Insets*(GTKStyle::*)($SynthContext*,$Insets*)>(&GTKStyle::getScrollBarInsets))},
	{"getSeparatorInsets", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PRIVATE, $method(static_cast<$Insets*(GTKStyle::*)($SynthContext*,$Insets*)>(&GTKStyle::getSeparatorInsets))},
	{"getSimpleInsets", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Insets;I)Ljava/awt/Insets;", nullptr, $PRIVATE, $method(static_cast<$Insets*(GTKStyle::*)($SynthContext*,$Insets*,int32_t)>(&GTKStyle::getSimpleInsets))},
	{"getSliderTrackInsets", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PRIVATE, $method(static_cast<$Insets*(GTKStyle::*)($SynthContext*,$Insets*)>(&GTKStyle::getSliderTrackInsets))},
	{"getStockIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/lang/String;I)Ljavax/swing/Icon;", nullptr, $PRIVATE, $method(static_cast<$Icon*(GTKStyle::*)($SynthContext*,$String*,int32_t)>(&GTKStyle::getStockIcon))},
	{"getStyleSpecificColor", "(Ljavax/swing/plaf/synth/SynthContext;ILjavax/swing/plaf/synth/ColorType;)Ljava/awt/Color;", nullptr, $PRIVATE, $method(static_cast<$Color*(GTKStyle::*)($SynthContext*,int32_t,$ColorType*)>(&GTKStyle::getStyleSpecificColor))},
	{"getStyleSpecificIcon", "(Ljava/lang/String;Lcom/sun/java/swing/plaf/gtk/GTKConstants$TextDirection;I)Ljavax/swing/Icon;", nullptr, $PRIVATE, $method(static_cast<$Icon*(GTKStyle::*)($String*,$GTKConstants$TextDirection*,int32_t)>(&GTKStyle::getStyleSpecificIcon))},
	{"getTabbedPaneTabInsets", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PRIVATE, $method(static_cast<$Insets*(GTKStyle::*)($SynthContext*,$Insets*)>(&GTKStyle::getTabbedPaneTabInsets))},
	{"getTextFieldInsets", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PRIVATE, $method(static_cast<$Insets*(GTKStyle::*)($SynthContext*,$Insets*)>(&GTKStyle::getTextFieldInsets))},
	{"getThicknessInsets", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PRIVATE, $method(static_cast<$Insets*(GTKStyle::*)($SynthContext*,$Insets*)>(&GTKStyle::getThicknessInsets))},
	{"getXThickness", "()I", nullptr, 0},
	{"getYThickness", "()I", nullptr, 0},
	{"installDefaults", "(Ljavax/swing/plaf/synth/SynthContext;)V", nullptr, $PUBLIC},
	{"isOpaque", "(Ljavax/swing/plaf/synth/SynthContext;)Z", nullptr, $PUBLIC},
	{"nativeGetClassValue", "(ILjava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$Object*(*)(int32_t,$String*)>(&GTKStyle::nativeGetClassValue))},
	{"nativeGetColorForState", "(III)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t)>(&GTKStyle::nativeGetColorForState))},
	{"nativeGetPangoFontName", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)(int32_t)>(&GTKStyle::nativeGetPangoFontName))},
	{"nativeGetXThickness", "(I)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t)>(&GTKStyle::nativeGetXThickness))},
	{"nativeGetYThickness", "(I)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t)>(&GTKStyle::nativeGetYThickness))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_nativeGetClassValue 40
#define _METHOD_INDEX_nativeGetColorForState 41
#define _METHOD_INDEX_nativeGetPangoFontName 42
#define _METHOD_INDEX_nativeGetXThickness 43
#define _METHOD_INDEX_nativeGetYThickness 44

$InnerClassInfo _GTKStyle_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKStyle$GTKLazyValue", "com.sun.java.swing.plaf.gtk.GTKStyle", "GTKLazyValue", $STATIC},
	{"com.sun.java.swing.plaf.gtk.GTKStyle$GTKStockIcon", "com.sun.java.swing.plaf.gtk.GTKStyle", "GTKStockIcon", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.gtk.GTKStyle$GTKStockIconInfo", "com.sun.java.swing.plaf.gtk.GTKStyle", "GTKStockIconInfo", $STATIC},
	{}
};

$ClassInfo _GTKStyle_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKStyle",
	"javax.swing.plaf.synth.SynthStyle",
	"com.sun.java.swing.plaf.gtk.GTKConstants",
	_GTKStyle_FieldInfo_,
	_GTKStyle_MethodInfo_,
	nullptr,
	nullptr,
	_GTKStyle_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKStyle$GTKLazyValue,com.sun.java.swing.plaf.gtk.GTKStyle$GTKStockIcon,com.sun.java.swing.plaf.gtk.GTKStyle$GTKStockIconInfo"
};

$Object* allocate$GTKStyle($Class* clazz) {
	return $of($alloc(GTKStyle));
}

int32_t GTKStyle::hashCode() {
	 return this->$SynthStyle::hashCode();
}

bool GTKStyle::equals(Object$* arg0) {
	 return this->$SynthStyle::equals(arg0);
}

$Object* GTKStyle::clone() {
	 return this->$SynthStyle::clone();
}

$String* GTKStyle::toString() {
	 return this->$SynthStyle::toString();
}

void GTKStyle::finalize() {
	this->$SynthStyle::finalize();
}

$String* GTKStyle::ICON_PROPERTY_PREFIX = nullptr;
$Color* GTKStyle::BLACK_COLOR = nullptr;
$Color* GTKStyle::WHITE_COLOR = nullptr;
$Font* GTKStyle::DEFAULT_FONT = nullptr;
$Insets* GTKStyle::BUTTON_DEFAULT_BORDER_INSETS = nullptr;
$GTKGraphicsUtils* GTKStyle::GTK_GRAPHICS = nullptr;
$Map* GTKStyle::CLASS_SPECIFIC_MAP = nullptr;
$Map* GTKStyle::ICONS_MAP = nullptr;

int32_t GTKStyle::nativeGetXThickness(int32_t widgetType) {
	$init(GTKStyle);
	int32_t $ret = 0;
	$prepareNativeStatic(GTKStyle, nativeGetXThickness, int32_t, int32_t widgetType);
	$ret = $invokeNativeStatic(widgetType);
	$finishNativeStatic();
	return $ret;
}

int32_t GTKStyle::nativeGetYThickness(int32_t widgetType) {
	$init(GTKStyle);
	int32_t $ret = 0;
	$prepareNativeStatic(GTKStyle, nativeGetYThickness, int32_t, int32_t widgetType);
	$ret = $invokeNativeStatic(widgetType);
	$finishNativeStatic();
	return $ret;
}

int32_t GTKStyle::nativeGetColorForState(int32_t widgetType, int32_t state, int32_t typeID) {
	$init(GTKStyle);
	int32_t $ret = 0;
	$prepareNativeStatic(GTKStyle, nativeGetColorForState, int32_t, int32_t widgetType, int32_t state, int32_t typeID);
	$ret = $invokeNativeStatic(widgetType, state, typeID);
	$finishNativeStatic();
	return $ret;
}

$Object* GTKStyle::nativeGetClassValue(int32_t widgetType, $String* key) {
	$init(GTKStyle);
	$var($Object, $ret, nullptr);
	$prepareNativeStatic(GTKStyle, nativeGetClassValue, $Object*, int32_t widgetType, $String* key);
	$assign($ret, $invokeNativeStaticObject(widgetType, key));
	$finishNativeStatic();
	return $ret;
}

$String* GTKStyle::nativeGetPangoFontName(int32_t widgetType) {
	$init(GTKStyle);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(GTKStyle, nativeGetPangoFontName, $String*, int32_t widgetType);
	$assign($ret, $invokeNativeStaticObject(widgetType));
	$finishNativeStatic();
	return $ret;
}

void GTKStyle::init$($Font* userFont, $GTKEngine$WidgetType* widgetType) {
	$useLocalCurrentObjectStackCache();
	$SynthStyle::init$();
	this->widgetType = $nc(widgetType)->ordinal();
	$var($String, pangoFontName, nullptr);
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		this->xThickness = nativeGetXThickness(this->widgetType);
		this->yThickness = nativeGetYThickness(this->widgetType);
		$assign(pangoFontName, nativeGetPangoFontName(this->widgetType));
	}
	$var($Font, pangoFont, nullptr);
	if (pangoFontName != nullptr) {
		$assign(pangoFont, $PangoFonts::lookupFont(pangoFontName));
	}
	if (pangoFont != nullptr) {
		$set(this, font, pangoFont);
	} else if (userFont != nullptr) {
		$set(this, font, userFont);
	} else {
		$set(this, font, GTKStyle::DEFAULT_FONT);
	}
}

void GTKStyle::installDefaults($SynthContext* context) {
	$useLocalCurrentObjectStackCache();
	$SynthStyle::installDefaults(context);
	$init($GTKLookAndFeel);
	$var($Map, aaTextInfo, $GTKLookAndFeel::aaTextInfo);
	if (aaTextInfo != nullptr && !$nc($($nc(context)->getRegion()))->isSubregion()) {
		$init($RenderingHints);
		$nc($(context->getComponent()))->putClientProperty($RenderingHints::KEY_TEXT_ANTIALIASING, $(aaTextInfo->get($RenderingHints::KEY_TEXT_ANTIALIASING)));
		$nc($(context->getComponent()))->putClientProperty($RenderingHints::KEY_TEXT_LCD_CONTRAST, $(aaTextInfo->get($RenderingHints::KEY_TEXT_LCD_CONTRAST)));
	}
}

$SynthGraphicsUtils* GTKStyle::getGraphicsUtils($SynthContext* context) {
	return GTKStyle::GTK_GRAPHICS;
}

$SynthPainter* GTKStyle::getPainter($SynthContext* state) {
	$init($GTKPainter);
	return $GTKPainter::INSTANCE;
}

$Color* GTKStyle::getColorForState($SynthContext* context, $ColorType* type$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ColorType, type, type$renamed);
	$init($ColorType);
	$init($GTKColorType);
	if (type == $ColorType::FOCUS || type == $GTKColorType::BLACK) {
		return GTKStyle::BLACK_COLOR;
	} else {
		if (type == $GTKColorType::WHITE) {
			return GTKStyle::WHITE_COLOR;
		}
	}
	$var($Region, id, $nc(context)->getRegion());
	int32_t state = context->getComponentState();
	state = $GTKLookAndFeel::synthStateToGTKState(id, state);
	$init($Region);
	if (type == $ColorType::TEXT_FOREGROUND && (id == $Region::BUTTON || id == $Region::CHECK_BOX || id == $Region::CHECK_BOX_MENU_ITEM || id == $Region::MENU || id == $Region::MENU_ITEM || id == $Region::RADIO_BUTTON || id == $Region::RADIO_BUTTON_MENU_ITEM || id == $Region::TABBED_PANE_TAB || id == $Region::TOGGLE_BUTTON || id == $Region::TOOL_TIP || id == $Region::MENU_ITEM_ACCELERATOR)) {
		$assign(type, $ColorType::FOREGROUND);
	} else {
		if (id == $Region::TABLE || id == $Region::LIST || id == $Region::TREE || id == $Region::TREE_CELL) {
			if (type == $ColorType::FOREGROUND) {
				$assign(type, $ColorType::TEXT_FOREGROUND);
				if (state == $SynthConstants::PRESSED) {
					state = $SynthConstants::SELECTED;
				}
			} else {
				if (type == $ColorType::BACKGROUND) {
					$assign(type, $ColorType::TEXT_BACKGROUND);
				}
			}
		}
	}
	return getStyleSpecificColor(context, state, type);
}

$Color* GTKStyle::getStyleSpecificColor($SynthContext* context, int32_t state, $ColorType* type) {
	state = $nc($($GTKLookAndFeel::synthStateToGTKStateType(state)))->ordinal();
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		int32_t rgb = nativeGetColorForState(this->widgetType, state, $nc(type)->getID());
		return $new($ColorUIResource, rgb);
	}
}

$Color* GTKStyle::getGTKColor(int32_t state, $ColorType* type) {
	return getGTKColor(($SynthContext*)nullptr, state, type);
}

$Color* GTKStyle::getGTKColor(int32_t widgetType, int32_t state, int32_t colorType) {
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		int32_t rgb = nativeGetColorForState(widgetType, state, colorType);
		return $new($ColorUIResource, rgb);
	}
}

$Color* GTKStyle::getGTKColor($SynthContext* context, int32_t state, $ColorType* type) {
	$useLocalCurrentObjectStackCache();
	if (context != nullptr) {
		$var($JComponent, c, context->getComponent());
		$var($Region, id, context->getRegion());
		state = $GTKLookAndFeel::synthStateToGTKState(id, state);
		if (!$nc(id)->isSubregion() && ((int32_t)(state & (uint32_t)$SynthConstants::ENABLED)) != 0) {
			$init($ColorType);
			if (type == $ColorType::BACKGROUND || type == $ColorType::TEXT_BACKGROUND) {
				$var($Color, bg, $nc(c)->getBackground());
				if (!($instanceOf($UIResource, bg))) {
					return bg;
				}
			} else {
				if (type == $ColorType::FOREGROUND || type == $ColorType::TEXT_FOREGROUND) {
					$var($Color, fg, $nc(c)->getForeground());
					if (!($instanceOf($UIResource, fg))) {
						return fg;
					}
				}
			}
		}
	}
	return getStyleSpecificColor(context, state, type);
}

$Color* GTKStyle::getColor($SynthContext* context, $ColorType* type$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ColorType, type, type$renamed);
	$var($JComponent, c, $nc(context)->getComponent());
	$var($Region, id, context->getRegion());
	int32_t state = context->getComponentState();
	if ($nc(c)->getName() == "Table.cellRenderer"_s) {
		$init($ColorType);
		if (type == $ColorType::BACKGROUND) {
			return c->getBackground();
		}
		if (type == $ColorType::FOREGROUND) {
			return c->getForeground();
		}
	}
	$init($Region);
	$init($ColorType);
	if (id == $Region::LABEL && type == $ColorType::TEXT_FOREGROUND) {
		$assign(type, $ColorType::FOREGROUND);
	}
	if (!$nc(id)->isSubregion() && ((int32_t)(state & (uint32_t)$SynthConstants::ENABLED)) != 0) {
		if (type == $ColorType::BACKGROUND) {
			return $nc(c)->getBackground();
		} else {
			if (type == $ColorType::FOREGROUND) {
				return $nc(c)->getForeground();
			} else {
				if (type == $ColorType::TEXT_FOREGROUND) {
					$var($Color, color, $nc(c)->getForeground());
					if (color != nullptr && !($instanceOf($UIResource, color))) {
						return color;
					}
				}
			}
		}
	}
	return getColorForState(context, type);
}

$Font* GTKStyle::getDefaultFont() {
	return this->font;
}

$Font* GTKStyle::getFontForState($SynthContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($Font, propFont, $UIManager::getFont($$str({$($nc($($nc(context)->getRegion()))->getName()), ".font"_s})));
	if (propFont != nullptr) {
		return propFont;
	}
	return this->font;
}

int32_t GTKStyle::getXThickness() {
	return this->xThickness;
}

int32_t GTKStyle::getYThickness() {
	return this->yThickness;
}

$Insets* GTKStyle::getInsets($SynthContext* state, $Insets* insets$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, insets, insets$renamed);
	$var($Region, id, $nc(state)->getRegion());
	$var($JComponent, component, state->getComponent());
	$var($String, name, ($nc(id)->isSubregion()) ? ($String*)nullptr : $nc(component)->getName());
	if (insets == nullptr) {
		$assign(insets, $new($Insets, 0, 0, 0, 0));
	} else {
		$nc(insets)->top = (insets->bottom = (insets->left = (insets->right = 0)));
	}
	if (id == $Region::ARROW_BUTTON || id == $Region::BUTTON || id == $Region::TOGGLE_BUTTON) {
		if ("Spinner.previousButton"_s == name || "Spinner.nextButton"_s == name) {
			return getSimpleInsets(state, insets, 1);
		} else {
			return getButtonInsets(state, insets);
		}
	} else {
		if (id == $Region::CHECK_BOX || id == $Region::RADIO_BUTTON) {
			return getRadioInsets(state, insets);
		} else {
			if (id == $Region::MENU_BAR) {
				return getMenuBarInsets(state, insets);
			} else {
				if (id == $Region::MENU || id == $Region::MENU_ITEM || id == $Region::CHECK_BOX_MENU_ITEM || id == $Region::RADIO_BUTTON_MENU_ITEM) {
					return getMenuItemInsets(state, insets);
				} else {
					if (id == $Region::FORMATTED_TEXT_FIELD) {
						return getTextFieldInsets(state, insets);
					} else {
						if (id == $Region::INTERNAL_FRAME) {
							$init($Metacity);
							$assign(insets, $nc($Metacity::INSTANCE)->getBorderInsets(state, insets));
						} else {
							if (id == $Region::LABEL) {
								if ("TableHeader.renderer"_s == name) {
									return getButtonInsets(state, insets);
								} else if ($instanceOf($ListCellRenderer, component)) {
									return getTextFieldInsets(state, insets);
								} else if ("Tree.cellRenderer"_s == name) {
									return getSimpleInsets(state, insets, 1);
								}
							} else {
								if (id == $Region::OPTION_PANE) {
									return getSimpleInsets(state, insets, 6);
								} else {
									if (id == $Region::POPUP_MENU) {
										return getSimpleInsets(state, insets, 2);
									} else {
										if (id == $Region::PROGRESS_BAR || id == $Region::SLIDER || id == $Region::TABBED_PANE || id == $Region::TABBED_PANE_CONTENT || id == $Region::TOOL_BAR || id == $Region::TOOL_BAR_DRAG_WINDOW || id == $Region::TOOL_TIP) {
											return getThicknessInsets(state, insets);
										} else {
											if (id == $Region::SCROLL_BAR) {
												return getScrollBarInsets(state, insets);
											} else {
												if (id == $Region::SLIDER_TRACK) {
													return getSliderTrackInsets(state, insets);
												} else {
													if (id == $Region::TABBED_PANE_TAB) {
														return getTabbedPaneTabInsets(state, insets);
													} else {
														if (id == $Region::TEXT_FIELD || id == $Region::PASSWORD_FIELD) {
															if (name == "Tree.cellEditor"_s) {
																return getSimpleInsets(state, insets, 1);
															}
															return getTextFieldInsets(state, insets);
														} else {
															if (id == $Region::SEPARATOR || id == $Region::POPUP_MENU_SEPARATOR || id == $Region::TOOL_BAR_SEPARATOR) {
																return getSeparatorInsets(state, insets);
															} else {
																$init($GTKEngine$CustomRegion);
																if (id == $GTKEngine$CustomRegion::TITLED_BORDER) {
																	return getThicknessInsets(state, insets);
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return insets;
}

$Insets* GTKStyle::getButtonInsets($SynthContext* context, $Insets* insets) {
	$useLocalCurrentObjectStackCache();
	int32_t CHILD_SPACING = 1;
	int32_t focusSize = getClassSpecificIntValue(context, "focus-line-width"_s, 1);
	int32_t focusPad = getClassSpecificIntValue(context, "focus-padding"_s, 1);
	int32_t xThickness = getXThickness();
	int32_t yThickness = getYThickness();
	int32_t w = focusSize + focusPad + xThickness + CHILD_SPACING;
	int32_t h = focusSize + focusPad + yThickness + CHILD_SPACING;
	$nc(insets)->left = (insets->right = w);
	insets->top = (insets->bottom = h);
	$var($Component, component, $nc(context)->getComponent());
	bool var$0 = ($instanceOf($JButton, component)) && !($instanceOf($JToolBar, $($nc(component)->getParent())));
	if (var$0 && $nc(($cast($JButton, component)))->isDefaultCapable()) {
		$var($Insets, defaultInsets, getClassSpecificInsetsValue(context, "default-border"_s, GTKStyle::BUTTON_DEFAULT_BORDER_INSETS));
		insets->left += $nc(defaultInsets)->left;
		insets->right += defaultInsets->right;
		insets->top += defaultInsets->top;
		insets->bottom += defaultInsets->bottom;
	}
	return insets;
}

$Insets* GTKStyle::getRadioInsets($SynthContext* context, $Insets* insets) {
	$useLocalCurrentObjectStackCache();
	int32_t focusSize = getClassSpecificIntValue(context, "focus-line-width"_s, 1);
	int32_t focusPad = getClassSpecificIntValue(context, "focus-padding"_s, 1);
	int32_t totalFocus = focusSize + focusPad;
	$nc(insets)->top = totalFocus;
	insets->bottom = totalFocus;
	if ($nc($($nc($($nc(context)->getComponent()))->getComponentOrientation()))->isLeftToRight()) {
		insets->left = 0;
		insets->right = totalFocus;
	} else {
		insets->left = totalFocus;
		insets->right = 0;
	}
	return insets;
}

$Insets* GTKStyle::getMenuBarInsets($SynthContext* context, $Insets* insets) {
	int32_t internalPadding = getClassSpecificIntValue(context, "internal-padding"_s, 1);
	int32_t xThickness = getXThickness();
	int32_t yThickness = getYThickness();
	$nc(insets)->left = (insets->right = xThickness + internalPadding);
	insets->top = (insets->bottom = yThickness + internalPadding);
	return insets;
}

$Insets* GTKStyle::getMenuItemInsets($SynthContext* context, $Insets* insets) {
	int32_t horizPadding = getClassSpecificIntValue(context, "horizontal-padding"_s, 3);
	int32_t xThickness = getXThickness();
	int32_t yThickness = getYThickness();
	$nc(insets)->left = (insets->right = xThickness + horizPadding);
	insets->top = (insets->bottom = yThickness);
	return insets;
}

$Insets* GTKStyle::getThicknessInsets($SynthContext* context, $Insets* insets) {
	$nc(insets)->left = (insets->right = getXThickness());
	insets->top = (insets->bottom = getYThickness());
	return insets;
}

$Insets* GTKStyle::getSeparatorInsets($SynthContext* context, $Insets* insets) {
	int32_t horizPadding = 0;
	$init($Region);
	if ($nc(context)->getRegion() == $Region::POPUP_MENU_SEPARATOR) {
		horizPadding = getClassSpecificIntValue(context, "horizontal-padding"_s, 3);
	}
	$nc(insets)->right = (insets->left = getXThickness() + horizPadding);
	insets->top = (insets->bottom = getYThickness());
	return insets;
}

$Insets* GTKStyle::getSliderTrackInsets($SynthContext* context, $Insets* insets) {
	int32_t focusSize = getClassSpecificIntValue(context, "focus-line-width"_s, 1);
	int32_t focusPad = getClassSpecificIntValue(context, "focus-padding"_s, 1);
	$nc(insets)->top = (insets->bottom = (insets->left = (insets->right = focusSize + focusPad)));
	return insets;
}

$Insets* GTKStyle::getSimpleInsets($SynthContext* context, $Insets* insets, int32_t n) {
	$nc(insets)->top = (insets->bottom = (insets->right = (insets->left = n)));
	return insets;
}

$Insets* GTKStyle::getTabbedPaneTabInsets($SynthContext* context, $Insets* insets) {
	int32_t xThickness = getXThickness();
	int32_t yThickness = getYThickness();
	int32_t focusSize = getClassSpecificIntValue(context, "focus-line-width"_s, 1);
	int32_t pad = 2;
	$nc(insets)->left = (insets->right = focusSize + pad + xThickness);
	insets->top = (insets->bottom = focusSize + pad + yThickness);
	return insets;
}

$Insets* GTKStyle::getTextFieldInsets($SynthContext* context, $Insets* insets$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, insets, insets$renamed);
	$assign(insets, getClassSpecificInsetsValue(context, "inner-border"_s, $(getSimpleInsets(context, insets, 2))));
	int32_t xThickness = getXThickness();
	int32_t yThickness = getYThickness();
	bool interiorFocus = getClassSpecificBoolValue(context, "interior-focus"_s, true);
	int32_t focusSize = 0;
	if (!interiorFocus) {
		focusSize = getClassSpecificIntValue(context, "focus-line-width"_s, 1);
	}
	$nc(insets)->left += focusSize + xThickness;
	insets->right += focusSize + xThickness;
	insets->top += focusSize + yThickness;
	insets->bottom += focusSize + yThickness;
	return insets;
}

$Insets* GTKStyle::getScrollBarInsets($SynthContext* context, $Insets* insets) {
	$useLocalCurrentObjectStackCache();
	int32_t troughBorder = getClassSpecificIntValue(context, "trough-border"_s, 1);
	$nc(insets)->left = (insets->right = (insets->top = (insets->bottom = troughBorder)));
	$var($JComponent, c, $nc(context)->getComponent());
	if ($instanceOf($JScrollPane, $($nc(c)->getParent()))) {
		$init($GTKEngine$WidgetType);
		int32_t spacing = getClassSpecificIntValue($GTKEngine$WidgetType::SCROLL_PANE, "scrollbar-spacing"_s, 3);
		if ($nc(($cast($JScrollBar, c)))->getOrientation() == $JScrollBar::HORIZONTAL) {
			insets->top += spacing;
		} else if ($nc($(c->getComponentOrientation()))->isLeftToRight()) {
			insets->left += spacing;
		} else {
			insets->right += spacing;
		}
	} else if (c->isFocusable()) {
		int32_t focusSize = getClassSpecificIntValue(context, "focus-line-width"_s, 1);
		int32_t focusPad = getClassSpecificIntValue(context, "focus-padding"_s, 1);
		int32_t totalFocus = focusSize + focusPad;
		insets->left += totalFocus;
		insets->right += totalFocus;
		insets->top += totalFocus;
		insets->bottom += totalFocus;
	}
	return insets;
}

$Object* GTKStyle::getClassSpecificValue($GTKEngine$WidgetType* wt, $String* key) {
	$init(GTKStyle);
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		return $of(nativeGetClassValue($nc(wt)->ordinal(), key));
	}
}

int32_t GTKStyle::getClassSpecificIntValue($GTKEngine$WidgetType* wt, $String* key, int32_t defaultValue) {
	$init(GTKStyle);
	$var($Object, value, getClassSpecificValue(wt, key));
	if ($instanceOf($Number, value)) {
		return $nc(($cast($Number, value)))->intValue();
	}
	return defaultValue;
}

$Object* GTKStyle::getClassSpecificValue($String* key) {
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		return $of(nativeGetClassValue(this->widgetType, key));
	}
}

int32_t GTKStyle::getClassSpecificIntValue($SynthContext* context, $String* key, int32_t defaultValue) {
	$var($Object, value, getClassSpecificValue(key));
	if ($instanceOf($Number, value)) {
		return $nc(($cast($Number, value)))->intValue();
	}
	return defaultValue;
}

$Insets* GTKStyle::getClassSpecificInsetsValue($SynthContext* context, $String* key, $Insets* defaultValue) {
	$var($Object, value, getClassSpecificValue(key));
	if ($instanceOf($Insets, value)) {
		return $cast($Insets, value);
	}
	return defaultValue;
}

bool GTKStyle::getClassSpecificBoolValue($SynthContext* context, $String* key, bool defaultValue) {
	$var($Object, value, getClassSpecificValue(key));
	if ($instanceOf($Boolean, value)) {
		return $nc(($cast($Boolean, value)))->booleanValue();
	}
	return defaultValue;
}

bool GTKStyle::isOpaque($SynthContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($Region, region, $nc(context)->getRegion());
	$init($Region);
	if (region == $Region::COMBO_BOX || region == $Region::DESKTOP_PANE || region == $Region::DESKTOP_ICON || region == $Region::INTERNAL_FRAME || region == $Region::LIST || region == $Region::MENU_BAR || region == $Region::PANEL || region == $Region::POPUP_MENU || region == $Region::PROGRESS_BAR || region == $Region::ROOT_PANE || region == $Region::SCROLL_PANE || region == $Region::SPLIT_PANE_DIVIDER || region == $Region::TABLE || region == $Region::TEXT_AREA || region == $Region::TOOL_BAR_DRAG_WINDOW || region == $Region::TOOL_TIP || region == $Region::TREE || region == $Region::VIEWPORT || region == $Region::TEXT_PANE) {
		return true;
	}
	if (!$GTKLookAndFeel::is3()) {
		if (region == $Region::EDITOR_PANE || region == $Region::FORMATTED_TEXT_FIELD || region == $Region::PASSWORD_FIELD || region == $Region::SPINNER || region == $Region::TEXT_FIELD) {
			return true;
		}
	}
	$var($Component, c, context->getComponent());
	$var($String, name, $nc(c)->getName());
	if (name == "ComboBox.renderer"_s || name == "ComboBox.listRenderer"_s) {
		return true;
	}
	return false;
}

$Object* GTKStyle::get($SynthContext* context, Object$* key) {
	$useLocalCurrentObjectStackCache();
	$var($String, classKey, $cast($String, $nc(GTKStyle::CLASS_SPECIFIC_MAP)->get(key)));
	if (classKey != nullptr) {
		$var($Object, value, getClassSpecificValue(classKey));
		if (value != nullptr) {
			bool var$0 = "Slider.thumbWidth"_s->equals(key);
			if (var$0 && $of(value)->equals($($Integer::valueOf(31)))) {
				return $of($Integer::valueOf(14));
			}
			return $of(value);
		}
	}
	if ($equals(key, "ScrollPane.viewportBorderInsets"_s)) {
		return $of(getThicknessInsets(context, $$new($Insets, 0, 0, 0, 0)));
	} else if ($equals(key, "Slider.tickColor"_s)) {
		$init($ColorType);
		return $of(getColorForState(context, $ColorType::FOREGROUND));
	} else if ($equals(key, "ScrollBar.minimumThumbSize"_s)) {
		int32_t len = getClassSpecificIntValue(context, "min-slider-length"_s, 21);
		if (len == 21) {
			len = 40;
		}
		$var($JScrollBar, sb, $cast($JScrollBar, $nc(context)->getComponent()));
		if ($nc(sb)->getOrientation() == $JScrollBar::HORIZONTAL) {
			return $of($new($DimensionUIResource, len, 0));
		} else {
			return $of($new($DimensionUIResource, 0, len));
		}
	} else if ($equals(key, "Separator.thickness"_s)) {
		$var($JSeparator, sep, $cast($JSeparator, $nc(context)->getComponent()));
		if (getClassSpecificBoolValue(context, "wide-separators"_s, false)) {
			if ($nc(sep)->getOrientation() == $JSeparator::HORIZONTAL) {
				return $of($Integer::valueOf(getClassSpecificIntValue(context, "separator-height"_s, 0)));
			} else {
				return $of($Integer::valueOf(getClassSpecificIntValue(context, "separator-width"_s, 0)));
			}
		}
		if ($nc(sep)->getOrientation() == $JSeparator::HORIZONTAL) {
			return $of($Integer::valueOf(getYThickness()));
		} else {
			return $of($Integer::valueOf(getXThickness()));
		}
	} else if ($equals(key, "ToolBar.separatorSize"_s)) {
		if (getClassSpecificBoolValue(context, "wide-separators"_s, false)) {
			int32_t var$1 = getClassSpecificIntValue(context, "separator-width"_s, 2);
			return $of($new($DimensionUIResource, var$1, getClassSpecificIntValue(context, "separator-height"_s, 2)));
		}
		$init($GTKEngine$WidgetType);
		int32_t size = getClassSpecificIntValue($GTKEngine$WidgetType::TOOL_BAR, "space-size"_s, 12);
		return $of($new($DimensionUIResource, size, size));
	} else if ($equals(key, "ScrollBar.buttonSize"_s)) {
		$var($JScrollBar, sb, $cast($JScrollBar, $nc($($nc(context)->getComponent()))->getParent()));
		bool horiz = ($nc(sb)->getOrientation() == $JScrollBar::HORIZONTAL);
		$init($GTKEngine$WidgetType);
		$GTKEngine$WidgetType* wt = horiz ? $GTKEngine$WidgetType::HSCROLL_BAR : $GTKEngine$WidgetType::VSCROLL_BAR;
		int32_t sliderWidth = getClassSpecificIntValue(wt, "slider-width"_s, 14);
		int32_t stepperSize = getClassSpecificIntValue(wt, "stepper-size"_s, 14);
		return $of(horiz ? $of($new($DimensionUIResource, stepperSize, sliderWidth)) : $of($new($DimensionUIResource, sliderWidth, stepperSize)));
	} else if ($equals(key, "ArrowButton.size"_s)) {
		$var($String, name, $nc($($nc(context)->getComponent()))->getName());
		if (name != nullptr && name->startsWith("Spinner"_s)) {
			$var($String, pangoFontName, nullptr);
			$init($UNIXToolkit);
			$synchronized($UNIXToolkit::GTK_LOCK) {
				$init($GTKEngine$WidgetType);
				$assign(pangoFontName, nativeGetPangoFontName($GTKEngine$WidgetType::SPINNER->ordinal()));
			}
			int32_t arrowSize = (pangoFontName != nullptr) ? $PangoFonts::getFontSize(pangoFontName) : 10;
			return $of($Integer::valueOf((arrowSize + (getXThickness() * 2))));
		}
	} else {
		bool var$3 = "CheckBox.iconTextGap"_s->equals(key);
		if (var$3 || "RadioButton.iconTextGap"_s->equals(key)) {
			int32_t indicatorSpacing = getClassSpecificIntValue(context, "indicator-spacing"_s, 2);
			int32_t focusSize = getClassSpecificIntValue(context, "focus-line-width"_s, 1);
			int32_t focusPad = getClassSpecificIntValue(context, "focus-padding"_s, 1);
			return $of($Integer::valueOf(indicatorSpacing + focusSize + focusPad));
		} else {
			bool var$5 = $GTKLookAndFeel::is3();
			if (var$5 && "ComboBox.forceOpaque"_s->equals(key)) {
				return $of($Boolean::valueOf(true));
			} else if ("Tree.expanderSize"_s->equals(key)) {
				$var($Object, value, getClassSpecificValue("expander-size"_s));
				if ($instanceOf($Integer, value)) {
					return $of($Integer::valueOf($nc(($cast($Integer, value)))->intValue() + 4));
				}
				return $of(nullptr);
			}
		}
	}
	$var($GTKStyle$GTKStockIcon, stockIcon, nullptr);
	$synchronized(GTKStyle::ICONS_MAP) {
		$assign(stockIcon, $cast($GTKStyle$GTKStockIcon, $nc(GTKStyle::ICONS_MAP)->get(key)));
	}
	if (stockIcon != nullptr) {
		return $of(stockIcon);
	}
	if (!$equals(key, "engine"_s)) {
		$var($Object, value, $UIManager::get(key));
		if ($equals(key, "Table.rowHeight"_s)) {
			int32_t focusLineWidth = getClassSpecificIntValue(context, "focus-line-width"_s, 0);
			if (value == nullptr && focusLineWidth > 0) {
				$assign(value, $Integer::valueOf(16 + 2 * focusLineWidth));
			}
		}
		return $of(value);
	}
	return $of(nullptr);
}

$Icon* GTKStyle::getStockIcon($SynthContext* context, $String* key, int32_t type) {
	$useLocalCurrentObjectStackCache();
	$init($GTKConstants$TextDirection);
	$GTKConstants$TextDirection* direction = $GTKConstants$TextDirection::LTR;
	if (context != nullptr) {
		$var($ComponentOrientation, co, $nc($(context->getComponent()))->getComponentOrientation());
		if (co != nullptr && !co->isLeftToRight()) {
			direction = $GTKConstants$TextDirection::RTL;
		}
	}
	$var($Icon, icon, getStyleSpecificIcon(key, direction, type));
	if (icon != nullptr) {
		return icon;
	}
	$var($String, propName, $str({GTKStyle::ICON_PROPERTY_PREFIX, key, $$str(u'.'), $$str(type), $$str(u'.'), (direction == $GTKConstants$TextDirection::RTL ? "rtl"_s : "ltr"_s)}));
	$var($Image, img, $cast($Image, $nc($($Toolkit::getDefaultToolkit()))->getDesktopProperty(propName)));
	if (img != nullptr) {
		return $new($ImageIcon, img);
	}
	return nullptr;
}

$Icon* GTKStyle::getStyleSpecificIcon($String* key, $GTKConstants$TextDirection* direction, int32_t type) {
	$useLocalCurrentObjectStackCache();
	$var($UNIXToolkit, tk, $cast($UNIXToolkit, $Toolkit::getDefaultToolkit()));
	$var($Image, img, $nc(tk)->getStockIcon(this->widgetType, key, type, $nc(direction)->ordinal(), nullptr));
	return (img != nullptr) ? static_cast<$Icon*>($new($ImageIcon, img)) : ($Icon*)nullptr;
}

void clinit$GTKStyle($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(GTKStyle::ICON_PROPERTY_PREFIX, "gtk.icon."_s);
	$init($Color);
	$assignStatic(GTKStyle::BLACK_COLOR, $new($ColorUIResource, $Color::BLACK));
	$assignStatic(GTKStyle::WHITE_COLOR, $new($ColorUIResource, $Color::WHITE));
	$assignStatic(GTKStyle::DEFAULT_FONT, $new($FontUIResource, "sansserif"_s, $Font::PLAIN, 10));
	$assignStatic(GTKStyle::BUTTON_DEFAULT_BORDER_INSETS, $new($Insets, 1, 1, 1, 1));
	$assignStatic(GTKStyle::GTK_GRAPHICS, $new($GTKGraphicsUtils));
	{
		$assignStatic(GTKStyle::CLASS_SPECIFIC_MAP, $new($HashMap));
		$nc(GTKStyle::CLASS_SPECIFIC_MAP)->put("Slider.thumbHeight"_s, "slider-width"_s);
		$nc(GTKStyle::CLASS_SPECIFIC_MAP)->put("Slider.thumbWidth"_s, "slider-length"_s);
		$nc(GTKStyle::CLASS_SPECIFIC_MAP)->put("Slider.trackBorder"_s, "trough-border"_s);
		$nc(GTKStyle::CLASS_SPECIFIC_MAP)->put("SplitPane.size"_s, "handle-size"_s);
		$nc(GTKStyle::CLASS_SPECIFIC_MAP)->put("ScrollBar.thumbHeight"_s, "slider-width"_s);
		$nc(GTKStyle::CLASS_SPECIFIC_MAP)->put("ScrollBar.width"_s, "slider-width"_s);
		$nc(GTKStyle::CLASS_SPECIFIC_MAP)->put("TextArea.caretForeground"_s, "cursor-color"_s);
		$nc(GTKStyle::CLASS_SPECIFIC_MAP)->put("TextArea.caretAspectRatio"_s, "cursor-aspect-ratio"_s);
		$nc(GTKStyle::CLASS_SPECIFIC_MAP)->put("TextField.caretForeground"_s, "cursor-color"_s);
		$nc(GTKStyle::CLASS_SPECIFIC_MAP)->put("TextField.caretAspectRatio"_s, "cursor-aspect-ratio"_s);
		$nc(GTKStyle::CLASS_SPECIFIC_MAP)->put("PasswordField.caretForeground"_s, "cursor-color"_s);
		$nc(GTKStyle::CLASS_SPECIFIC_MAP)->put("PasswordField.caretAspectRatio"_s, "cursor-aspect-ratio"_s);
		$nc(GTKStyle::CLASS_SPECIFIC_MAP)->put("FormattedTextField.caretForeground"_s, "cursor-color"_s);
		$nc(GTKStyle::CLASS_SPECIFIC_MAP)->put("FormattedTextField.caretAspectRatio"_s, "cursor-aspect-"_s);
		$nc(GTKStyle::CLASS_SPECIFIC_MAP)->put("TextPane.caretForeground"_s, "cursor-color"_s);
		$nc(GTKStyle::CLASS_SPECIFIC_MAP)->put("TextPane.caretAspectRatio"_s, "cursor-aspect-ratio"_s);
		$nc(GTKStyle::CLASS_SPECIFIC_MAP)->put("EditorPane.caretForeground"_s, "cursor-color"_s);
		$nc(GTKStyle::CLASS_SPECIFIC_MAP)->put("EditorPane.caretAspectRatio"_s, "cursor-aspect-ratio"_s);
		$assignStatic(GTKStyle::ICONS_MAP, $new($HashMap));
		$nc(GTKStyle::ICONS_MAP)->put("FileChooser.cancelIcon"_s, $$new($GTKStyle$GTKStockIcon, "gtk-cancel"_s, 4));
		$nc(GTKStyle::ICONS_MAP)->put("FileChooser.okIcon"_s, $$new($GTKStyle$GTKStockIcon, "gtk-ok"_s, 4));
		$nc(GTKStyle::ICONS_MAP)->put("OptionPane.yesIcon"_s, $$new($GTKStyle$GTKStockIcon, "gtk-yes"_s, 4));
		$nc(GTKStyle::ICONS_MAP)->put("OptionPane.noIcon"_s, $$new($GTKStyle$GTKStockIcon, "gtk-no"_s, 4));
		$nc(GTKStyle::ICONS_MAP)->put("OptionPane.cancelIcon"_s, $$new($GTKStyle$GTKStockIcon, "gtk-cancel"_s, 4));
		$nc(GTKStyle::ICONS_MAP)->put("OptionPane.okIcon"_s, $$new($GTKStyle$GTKStockIcon, "gtk-ok"_s, 4));
		$var($UNIXToolkit, tk, $cast($UNIXToolkit, $Toolkit::getDefaultToolkit()));
		if ($nc(tk)->checkGtkVersion(3, 10, 0)) {
			$nc(GTKStyle::ICONS_MAP)->put("OptionPane.errorIcon"_s, $$new($GTKStyle$GTKStockIcon, "dialog-error"_s, 6));
			$nc(GTKStyle::ICONS_MAP)->put("OptionPane.informationIcon"_s, $$new($GTKStyle$GTKStockIcon, "dialog-information"_s, 6));
			$nc(GTKStyle::ICONS_MAP)->put("OptionPane.warningIcon"_s, $$new($GTKStyle$GTKStockIcon, "dialog-warning"_s, 6));
			$nc(GTKStyle::ICONS_MAP)->put("OptionPane.questionIcon"_s, $$new($GTKStyle$GTKStockIcon, "dialog-question"_s, 6));
		} else {
			$nc(GTKStyle::ICONS_MAP)->put("OptionPane.errorIcon"_s, $$new($GTKStyle$GTKStockIcon, "gtk-dialog-error"_s, 6));
			$nc(GTKStyle::ICONS_MAP)->put("OptionPane.informationIcon"_s, $$new($GTKStyle$GTKStockIcon, "gtk-dialog-info"_s, 6));
			$nc(GTKStyle::ICONS_MAP)->put("OptionPane.warningIcon"_s, $$new($GTKStyle$GTKStockIcon, "gtk-dialog-warning"_s, 6));
			$nc(GTKStyle::ICONS_MAP)->put("OptionPane.questionIcon"_s, $$new($GTKStyle$GTKStockIcon, "gtk-dialog-question"_s, 6));
		}
	}
}

GTKStyle::GTKStyle() {
}

$Class* GTKStyle::load$($String* name, bool initialize) {
	$loadClass(GTKStyle, name, initialize, &_GTKStyle_ClassInfo_, clinit$GTKStyle, allocate$GTKStyle);
	return class$;
}

$Class* GTKStyle::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com