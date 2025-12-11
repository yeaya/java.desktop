#include <com/sun/java/swing/plaf/gtk/GTKEngine.h>

#include <com/sun/java/swing/plaf/gtk/GTKConstants$ArrowType.h>
#include <com/sun/java/swing/plaf/gtk/GTKConstants$ExpanderStyle.h>
#include <com/sun/java/swing/plaf/gtk/GTKConstants$Orientation.h>
#include <com/sun/java/swing/plaf/gtk/GTKConstants$PositionType.h>
#include <com/sun/java/swing/plaf/gtk/GTKConstants$ShadowType.h>
#include <com/sun/java/swing/plaf/gtk/GTKConstants$StateType.h>
#include <com/sun/java/swing/plaf/gtk/GTKConstants$TextDirection.h>
#include <com/sun/java/swing/plaf/gtk/GTKEngine$CustomRegion.h>
#include <com/sun/java/swing/plaf/gtk/GTKEngine$Settings.h>
#include <com/sun/java/swing/plaf/gtk/GTKEngine$WidgetType.h>
#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel.h>
#include <com/sun/java/swing/plaf/gtk/GTKRegion.h>
#include <java/awt/Color.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/Toolkit.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/PackedColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/util/HashMap.h>
#include <java/util/Hashtable.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JProgressBar.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <sun/awt/UNIXToolkit.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <sun/swing/ImageCache.h>
#include <jcpp.h>

#undef ARROW_BUTTON
#undef BAND_OFFSETS
#undef BUTTON
#undef CACHE_SIZE
#undef CHECK_BOX
#undef CHECK_BOX_MENU_ITEM
#undef COLOR_CHOOSER
#undef COLOR_MODELS
#undef COMBO_BOX
#undef COMBO_BOX_ARROW_BUTTON
#undef COMBO_BOX_TEXT_FIELD
#undef DESKTOP_ICON
#undef DESKTOP_PANE
#undef EAST
#undef EDITOR_PANE
#undef FILE_CHOOSER
#undef FOCUSED
#undef FORMATTED_TEXT_FIELD
#undef GTK_LOCK
#undef HANDLE_BOX
#undef HORIZONTAL
#undef HORIZONTAL_SPLIT
#undef HPROGRESS_BAR
#undef HSCROLL_BAR
#undef HSCROLL_BAR_BUTTON_LEFT
#undef HSCROLL_BAR_BUTTON_RIGHT
#undef HSCROLL_BAR_THUMB
#undef HSCROLL_BAR_TRACK
#undef HSEPARATOR
#undef HSLIDER
#undef HSLIDER_THUMB
#undef HSLIDER_TRACK
#undef HSPLIT_PANE_DIVIDER
#undef INSTANCE
#undef INTERNAL_FRAME
#undef INTERNAL_FRAME_TITLE_PANE
#undef LABEL
#undef LIST
#undef LTR
#undef MENU
#undef MENU_BAR
#undef MENU_ITEM
#undef MENU_ITEM_ACCELERATOR
#undef NONE
#undef NORTH
#undef OPTION_PANE
#undef PANEL
#undef PASSWORD_FIELD
#undef POPUP_MENU
#undef POPUP_MENU_SEPARATOR
#undef PROGRESS_BAR
#undef RADIO_BUTTON
#undef RADIO_BUTTON_MENU_ITEM
#undef ROOT_PANE
#undef RTL
#undef SCROLL_BAR
#undef SCROLL_BAR_THUMB
#undef SCROLL_BAR_TRACK
#undef SCROLL_PANE
#undef SEPARATOR
#undef SLIDER
#undef SLIDER_THUMB
#undef SLIDER_TRACK
#undef SOUTH
#undef SPINNER
#undef SPINNER_ARROW_BUTTON
#undef SPINNER_TEXT_FIELD
#undef SPLIT_PANE
#undef SPLIT_PANE_DIVIDER
#undef TABBED_PANE
#undef TABBED_PANE_CONTENT
#undef TABBED_PANE_TAB
#undef TABBED_PANE_TAB_AREA
#undef TABLE
#undef TABLE_HEADER
#undef TEXT_AREA
#undef TEXT_FIELD
#undef TEXT_PANE
#undef TITLED_BORDER
#undef TOGGLE_BUTTON
#undef TOOL_BAR
#undef TOOL_BAR_CONTENT
#undef TOOL_BAR_DRAG_WINDOW
#undef TOOL_BAR_SEPARATOR
#undef TOOL_TIP
#undef TREE
#undef TREE_CELL
#undef VIEWPORT
#undef VPROGRESS_BAR
#undef VSCROLL_BAR
#undef VSCROLL_BAR_BUTTON_DOWN
#undef VSCROLL_BAR_BUTTON_UP
#undef VSCROLL_BAR_THUMB
#undef VSCROLL_BAR_TRACK
#undef VSEPARATOR
#undef VSLIDER
#undef VSLIDER_THUMB
#undef VSLIDER_TRACK
#undef VSPLIT_PANE_DIVIDER
#undef WEST

using $GTKEngine$WidgetTypeArray = $Array<::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType>;
using $ColorModelArray = $Array<::java::awt::image::ColorModel>;
using $intArray2 = $Array<int32_t, 2>;
using $GTKConstants$ArrowType = ::com::sun::java::swing::plaf::gtk::GTKConstants$ArrowType;
using $GTKConstants$ExpanderStyle = ::com::sun::java::swing::plaf::gtk::GTKConstants$ExpanderStyle;
using $GTKConstants$Orientation = ::com::sun::java::swing::plaf::gtk::GTKConstants$Orientation;
using $GTKConstants$PositionType = ::com::sun::java::swing::plaf::gtk::GTKConstants$PositionType;
using $GTKConstants$ShadowType = ::com::sun::java::swing::plaf::gtk::GTKConstants$ShadowType;
using $GTKConstants$StateType = ::com::sun::java::swing::plaf::gtk::GTKConstants$StateType;
using $GTKConstants$TextDirection = ::com::sun::java::swing::plaf::gtk::GTKConstants$TextDirection;
using $GTKEngine$CustomRegion = ::com::sun::java::swing::plaf::gtk::GTKEngine$CustomRegion;
using $GTKEngine$Settings = ::com::sun::java::swing::plaf::gtk::GTKEngine$Settings;
using $GTKEngine$WidgetType = ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType;
using $GTKLookAndFeel = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel;
using $GTKRegion = ::com::sun::java::swing::plaf::gtk::GTKRegion;
using $Color = ::java::awt::Color;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $Toolkit = ::java::awt::Toolkit;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $PackedColorModel = ::java::awt::image::PackedColorModel;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Hashtable = ::java::util::Hashtable;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JProgressBar = ::javax::swing::JProgressBar;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JSeparator = ::javax::swing::JSeparator;
using $JSlider = ::javax::swing::JSlider;
using $JSplitPane = ::javax::swing::JSplitPane;
using $JToolBar = ::javax::swing::JToolBar;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $SwingConstants = ::javax::swing::SwingConstants;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $UNIXToolkit = ::sun::awt::UNIXToolkit;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;
using $ImageCache = ::sun::swing::ImageCache;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKEngine_FieldInfo_[] = {
	{"INSTANCE", "Lcom/sun/java/swing/plaf/gtk/GTKEngine;", nullptr, $STATIC | $FINAL, $staticField(GTKEngine, INSTANCE)},
	{"CACHE_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GTKEngine, CACHE_SIZE)},
	{"regionToWidgetTypeMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljavax/swing/plaf/synth/Region;Ljava/lang/Object;>;", $PRIVATE | $STATIC, $staticField(GTKEngine, regionToWidgetTypeMap)},
	{"cache", "Lsun/swing/ImageCache;", nullptr, $PRIVATE, $field(GTKEngine, cache)},
	{"x0", "I", nullptr, $PRIVATE, $field(GTKEngine, x0)},
	{"y0", "I", nullptr, $PRIVATE, $field(GTKEngine, y0)},
	{"w0", "I", nullptr, $PRIVATE, $field(GTKEngine, w0)},
	{"h0", "I", nullptr, $PRIVATE, $field(GTKEngine, h0)},
	{"graphics", "Ljava/awt/Graphics;", nullptr, $PRIVATE, $field(GTKEngine, graphics)},
	{"cacheArgs", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(GTKEngine, cacheArgs)},
	{"COLOR_MODELS", "[Ljava/awt/image/ColorModel;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GTKEngine, COLOR_MODELS)},
	{"BAND_OFFSETS", "[[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GTKEngine, BAND_OFFSETS)},
	{}
};

$MethodInfo _GTKEngine_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GTKEngine::*)()>(&GTKEngine::init$))},
	{"finishPainting", "()Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"finishPainting", "(Z)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"getSetting", "(Lcom/sun/java/swing/plaf/gtk/GTKEngine$Settings;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getTextDirection", "(Ljavax/swing/plaf/synth/SynthContext;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($SynthContext*)>(&GTKEngine::getTextDirection))},
	{"getWidgetType", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $STATIC, $method(static_cast<$GTKEngine$WidgetType*(*)($JComponent*,$Region*)>(&GTKEngine::getWidgetType))},
	{"nativeFinishPainting", "([III)I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(GTKEngine::*)($ints*,int32_t,int32_t)>(&GTKEngine::nativeFinishPainting))},
	{"nativeSetRangeValue", "(IDDDD)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(GTKEngine::*)(int32_t,double,double,double,double)>(&GTKEngine::nativeSetRangeValue))},
	{"nativeStartPainting", "(II)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(GTKEngine::*)(int32_t,int32_t)>(&GTKEngine::nativeStartPainting))},
	{"native_get_gtk_setting", "(I)Ljava/lang/Object;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$Object*(GTKEngine::*)(int32_t)>(&GTKEngine::native_get_gtk_setting))},
	{"native_paint_arrow", "(IIILjava/lang/String;IIIII)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(GTKEngine::*)(int32_t,int32_t,int32_t,$String*,int32_t,int32_t,int32_t,int32_t,int32_t)>(&GTKEngine::native_paint_arrow))},
	{"native_paint_background", "(IIIIII)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(GTKEngine::*)(int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&GTKEngine::native_paint_background))},
	{"native_paint_box", "(IIILjava/lang/String;IIIIII)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(GTKEngine::*)(int32_t,int32_t,int32_t,$String*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&GTKEngine::native_paint_box))},
	{"native_paint_box_gap", "(IIILjava/lang/String;IIIIIII)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(GTKEngine::*)(int32_t,int32_t,int32_t,$String*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&GTKEngine::native_paint_box_gap))},
	{"native_paint_check", "(IILjava/lang/String;IIII)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(GTKEngine::*)(int32_t,int32_t,$String*,int32_t,int32_t,int32_t,int32_t)>(&GTKEngine::native_paint_check))},
	{"native_paint_expander", "(IILjava/lang/String;IIIII)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(GTKEngine::*)(int32_t,int32_t,$String*,int32_t,int32_t,int32_t,int32_t,int32_t)>(&GTKEngine::native_paint_expander))},
	{"native_paint_extension", "(IIILjava/lang/String;IIIII)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(GTKEngine::*)(int32_t,int32_t,int32_t,$String*,int32_t,int32_t,int32_t,int32_t,int32_t)>(&GTKEngine::native_paint_extension))},
	{"native_paint_flat_box", "(IIILjava/lang/String;IIIIZ)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(GTKEngine::*)(int32_t,int32_t,int32_t,$String*,int32_t,int32_t,int32_t,int32_t,bool)>(&GTKEngine::native_paint_flat_box))},
	{"native_paint_focus", "(IILjava/lang/String;IIII)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(GTKEngine::*)(int32_t,int32_t,$String*,int32_t,int32_t,int32_t,int32_t)>(&GTKEngine::native_paint_focus))},
	{"native_paint_handle", "(IIILjava/lang/String;IIIII)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(GTKEngine::*)(int32_t,int32_t,int32_t,$String*,int32_t,int32_t,int32_t,int32_t,int32_t)>(&GTKEngine::native_paint_handle))},
	{"native_paint_hline", "(IILjava/lang/String;IIII)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(GTKEngine::*)(int32_t,int32_t,$String*,int32_t,int32_t,int32_t,int32_t)>(&GTKEngine::native_paint_hline))},
	{"native_paint_option", "(IILjava/lang/String;IIII)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(GTKEngine::*)(int32_t,int32_t,$String*,int32_t,int32_t,int32_t,int32_t)>(&GTKEngine::native_paint_option))},
	{"native_paint_shadow", "(IIILjava/lang/String;IIIIII)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(GTKEngine::*)(int32_t,int32_t,int32_t,$String*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&GTKEngine::native_paint_shadow))},
	{"native_paint_slider", "(IIILjava/lang/String;IIIIIZ)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(GTKEngine::*)(int32_t,int32_t,int32_t,$String*,int32_t,int32_t,int32_t,int32_t,int32_t,bool)>(&GTKEngine::native_paint_slider))},
	{"native_paint_vline", "(IILjava/lang/String;IIII)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(GTKEngine::*)(int32_t,int32_t,$String*,int32_t,int32_t,int32_t,int32_t)>(&GTKEngine::native_paint_vline))},
	{"native_switch_theme", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(GTKEngine::*)()>(&GTKEngine::native_switch_theme))},
	{"paintArrow", "(Ljava/awt/Graphics;Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/Region;ILcom/sun/java/swing/plaf/gtk/GTKConstants$ShadowType;Lcom/sun/java/swing/plaf/gtk/GTKConstants$ArrowType;Ljava/lang/String;IIII)V", nullptr, $PUBLIC},
	{"paintBackground", "(Ljava/awt/Graphics;Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/Region;ILjava/awt/Color;IIII)V", nullptr, $PUBLIC},
	{"paintBox", "(Ljava/awt/Graphics;Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/Region;ILcom/sun/java/swing/plaf/gtk/GTKConstants$ShadowType;Ljava/lang/String;IIII)V", nullptr, $PUBLIC},
	{"paintBoxGap", "(Ljava/awt/Graphics;Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/Region;ILcom/sun/java/swing/plaf/gtk/GTKConstants$ShadowType;Ljava/lang/String;IIIILcom/sun/java/swing/plaf/gtk/GTKConstants$PositionType;II)V", nullptr, $PUBLIC},
	{"paintCachedImage", "(Ljava/awt/Graphics;IIII[Ljava/lang/Object;)Z", nullptr, $PUBLIC | $TRANSIENT},
	{"paintCheck", "(Ljava/awt/Graphics;Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/Region;Ljava/lang/String;IIII)V", nullptr, $PUBLIC},
	{"paintExpander", "(Ljava/awt/Graphics;Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/Region;ILcom/sun/java/swing/plaf/gtk/GTKConstants$ExpanderStyle;Ljava/lang/String;IIII)V", nullptr, $PUBLIC},
	{"paintExtension", "(Ljava/awt/Graphics;Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/Region;ILcom/sun/java/swing/plaf/gtk/GTKConstants$ShadowType;Ljava/lang/String;IIIILcom/sun/java/swing/plaf/gtk/GTKConstants$PositionType;I)V", nullptr, $PUBLIC},
	{"paintFlatBox", "(Ljava/awt/Graphics;Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/Region;ILcom/sun/java/swing/plaf/gtk/GTKConstants$ShadowType;Ljava/lang/String;IIIILjavax/swing/plaf/synth/ColorType;)V", nullptr, $PUBLIC},
	{"paintFocus", "(Ljava/awt/Graphics;Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/Region;ILjava/lang/String;IIII)V", nullptr, $PUBLIC},
	{"paintHandle", "(Ljava/awt/Graphics;Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/Region;ILcom/sun/java/swing/plaf/gtk/GTKConstants$ShadowType;Ljava/lang/String;IIIILcom/sun/java/swing/plaf/gtk/GTKConstants$Orientation;)V", nullptr, $PUBLIC},
	{"paintHline", "(Ljava/awt/Graphics;Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/Region;ILjava/lang/String;IIII)V", nullptr, $PUBLIC},
	{"paintOption", "(Ljava/awt/Graphics;Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/Region;Ljava/lang/String;IIII)V", nullptr, $PUBLIC},
	{"paintShadow", "(Ljava/awt/Graphics;Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/Region;ILcom/sun/java/swing/plaf/gtk/GTKConstants$ShadowType;Ljava/lang/String;IIII)V", nullptr, $PUBLIC},
	{"paintSlider", "(Ljava/awt/Graphics;Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/Region;ILcom/sun/java/swing/plaf/gtk/GTKConstants$ShadowType;Ljava/lang/String;IIIILcom/sun/java/swing/plaf/gtk/GTKConstants$Orientation;Z)V", nullptr, $PUBLIC},
	{"paintVline", "(Ljava/awt/Graphics;Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/Region;ILjava/lang/String;IIII)V", nullptr, $PUBLIC},
	{"setRangeValue", "(Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/Region;DDDD)V", nullptr, 0},
	{"startPainting", "(Ljava/awt/Graphics;IIII[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"themeChanged", "()V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_nativeFinishPainting 6
#define _METHOD_INDEX_nativeSetRangeValue 7
#define _METHOD_INDEX_nativeStartPainting 8
#define _METHOD_INDEX_native_get_gtk_setting 9
#define _METHOD_INDEX_native_paint_arrow 10
#define _METHOD_INDEX_native_paint_background 11
#define _METHOD_INDEX_native_paint_box 12
#define _METHOD_INDEX_native_paint_box_gap 13
#define _METHOD_INDEX_native_paint_check 14
#define _METHOD_INDEX_native_paint_expander 15
#define _METHOD_INDEX_native_paint_extension 16
#define _METHOD_INDEX_native_paint_flat_box 17
#define _METHOD_INDEX_native_paint_focus 18
#define _METHOD_INDEX_native_paint_handle 19
#define _METHOD_INDEX_native_paint_hline 20
#define _METHOD_INDEX_native_paint_option 21
#define _METHOD_INDEX_native_paint_shadow 22
#define _METHOD_INDEX_native_paint_slider 23
#define _METHOD_INDEX_native_paint_vline 24
#define _METHOD_INDEX_native_switch_theme 25

$InnerClassInfo _GTKEngine_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKEngine$CustomRegion", "com.sun.java.swing.plaf.gtk.GTKEngine", "CustomRegion", $STATIC},
	{"com.sun.java.swing.plaf.gtk.GTKEngine$Settings", "com.sun.java.swing.plaf.gtk.GTKEngine", "Settings", $STATIC | $FINAL | $ENUM},
	{"com.sun.java.swing.plaf.gtk.GTKEngine$WidgetType", "com.sun.java.swing.plaf.gtk.GTKEngine", "WidgetType", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _GTKEngine_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKEngine",
	"java.lang.Object",
	nullptr,
	_GTKEngine_FieldInfo_,
	_GTKEngine_MethodInfo_,
	nullptr,
	nullptr,
	_GTKEngine_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKEngine$CustomRegion,com.sun.java.swing.plaf.gtk.GTKEngine$Settings,com.sun.java.swing.plaf.gtk.GTKEngine$WidgetType"
};

$Object* allocate$GTKEngine($Class* clazz) {
	return $of($alloc(GTKEngine));
}

GTKEngine* GTKEngine::INSTANCE = nullptr;
$HashMap* GTKEngine::regionToWidgetTypeMap = nullptr;
$ColorModelArray* GTKEngine::COLOR_MODELS = nullptr;
$intArray2* GTKEngine::BAND_OFFSETS = nullptr;

void GTKEngine::init$() {
	$set(this, cache, $new($ImageCache, GTKEngine::CACHE_SIZE));
}

void GTKEngine::native_paint_arrow(int32_t widgetType, int32_t state, int32_t shadowType, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arrowType) {
	$prepareNative(GTKEngine, native_paint_arrow, void, int32_t widgetType, int32_t state, int32_t shadowType, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, int32_t arrowType);
	$invokeNative(widgetType, state, shadowType, detail, x, y, width, height, arrowType);
	$finishNative();
}

void GTKEngine::native_paint_box(int32_t widgetType, int32_t state, int32_t shadowType, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, int32_t synthState, int32_t dir) {
	$prepareNative(GTKEngine, native_paint_box, void, int32_t widgetType, int32_t state, int32_t shadowType, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, int32_t synthState, int32_t dir);
	$invokeNative(widgetType, state, shadowType, detail, x, y, width, height, synthState, dir);
	$finishNative();
}

void GTKEngine::native_paint_box_gap(int32_t widgetType, int32_t state, int32_t shadowType, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, int32_t gapSide, int32_t gapX, int32_t gapWidth) {
	$prepareNative(GTKEngine, native_paint_box_gap, void, int32_t widgetType, int32_t state, int32_t shadowType, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, int32_t gapSide, int32_t gapX, int32_t gapWidth);
	$invokeNative(widgetType, state, shadowType, detail, x, y, width, height, gapSide, gapX, gapWidth);
	$finishNative();
}

void GTKEngine::native_paint_check(int32_t widgetType, int32_t synthState, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height) {
	$prepareNative(GTKEngine, native_paint_check, void, int32_t widgetType, int32_t synthState, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height);
	$invokeNative(widgetType, synthState, detail, x, y, width, height);
	$finishNative();
}

void GTKEngine::native_paint_expander(int32_t widgetType, int32_t state, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, int32_t expanderStyle) {
	$prepareNative(GTKEngine, native_paint_expander, void, int32_t widgetType, int32_t state, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, int32_t expanderStyle);
	$invokeNative(widgetType, state, detail, x, y, width, height, expanderStyle);
	$finishNative();
}

void GTKEngine::native_paint_extension(int32_t widgetType, int32_t state, int32_t shadowType, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, int32_t placement) {
	$prepareNative(GTKEngine, native_paint_extension, void, int32_t widgetType, int32_t state, int32_t shadowType, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, int32_t placement);
	$invokeNative(widgetType, state, shadowType, detail, x, y, width, height, placement);
	$finishNative();
}

void GTKEngine::native_paint_flat_box(int32_t widgetType, int32_t state, int32_t shadowType, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, bool hasFocus) {
	$prepareNative(GTKEngine, native_paint_flat_box, void, int32_t widgetType, int32_t state, int32_t shadowType, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, bool hasFocus);
	$invokeNative(widgetType, state, shadowType, detail, x, y, width, height, hasFocus);
	$finishNative();
}

void GTKEngine::native_paint_focus(int32_t widgetType, int32_t state, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height) {
	$prepareNative(GTKEngine, native_paint_focus, void, int32_t widgetType, int32_t state, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height);
	$invokeNative(widgetType, state, detail, x, y, width, height);
	$finishNative();
}

void GTKEngine::native_paint_handle(int32_t widgetType, int32_t state, int32_t shadowType, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, int32_t orientation) {
	$prepareNative(GTKEngine, native_paint_handle, void, int32_t widgetType, int32_t state, int32_t shadowType, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, int32_t orientation);
	$invokeNative(widgetType, state, shadowType, detail, x, y, width, height, orientation);
	$finishNative();
}

void GTKEngine::native_paint_hline(int32_t widgetType, int32_t state, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height) {
	$prepareNative(GTKEngine, native_paint_hline, void, int32_t widgetType, int32_t state, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height);
	$invokeNative(widgetType, state, detail, x, y, width, height);
	$finishNative();
}

void GTKEngine::native_paint_option(int32_t widgetType, int32_t synthState, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height) {
	$prepareNative(GTKEngine, native_paint_option, void, int32_t widgetType, int32_t synthState, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height);
	$invokeNative(widgetType, synthState, detail, x, y, width, height);
	$finishNative();
}

void GTKEngine::native_paint_shadow(int32_t widgetType, int32_t state, int32_t shadowType, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, int32_t synthState, int32_t dir) {
	$prepareNative(GTKEngine, native_paint_shadow, void, int32_t widgetType, int32_t state, int32_t shadowType, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, int32_t synthState, int32_t dir);
	$invokeNative(widgetType, state, shadowType, detail, x, y, width, height, synthState, dir);
	$finishNative();
}

void GTKEngine::native_paint_slider(int32_t widgetType, int32_t state, int32_t shadowType, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, int32_t orientation, bool hasFocus) {
	$prepareNative(GTKEngine, native_paint_slider, void, int32_t widgetType, int32_t state, int32_t shadowType, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height, int32_t orientation, bool hasFocus);
	$invokeNative(widgetType, state, shadowType, detail, x, y, width, height, orientation, hasFocus);
	$finishNative();
}

void GTKEngine::native_paint_vline(int32_t widgetType, int32_t state, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height) {
	$prepareNative(GTKEngine, native_paint_vline, void, int32_t widgetType, int32_t state, $String* detail, int32_t x, int32_t y, int32_t width, int32_t height);
	$invokeNative(widgetType, state, detail, x, y, width, height);
	$finishNative();
}

void GTKEngine::native_paint_background(int32_t widgetType, int32_t state, int32_t x, int32_t y, int32_t width, int32_t height) {
	$prepareNative(GTKEngine, native_paint_background, void, int32_t widgetType, int32_t state, int32_t x, int32_t y, int32_t width, int32_t height);
	$invokeNative(widgetType, state, x, y, width, height);
	$finishNative();
}

$Object* GTKEngine::native_get_gtk_setting(int32_t property) {
	$var($Object, $ret, nullptr);
	$prepareNative(GTKEngine, native_get_gtk_setting, $Object*, int32_t property);
	$assign($ret, $invokeNativeObject(property));
	$finishNative();
	return $ret;
}

void GTKEngine::nativeSetRangeValue(int32_t widgetType, double value, double min, double max, double visible) {
	$prepareNative(GTKEngine, nativeSetRangeValue, void, int32_t widgetType, double value, double min, double max, double visible);
	$invokeNative(widgetType, value, min, max, visible);
	$finishNative();
}

void GTKEngine::nativeStartPainting(int32_t w, int32_t h) {
	$prepareNative(GTKEngine, nativeStartPainting, void, int32_t w, int32_t h);
	$invokeNative(w, h);
	$finishNative();
}

int32_t GTKEngine::nativeFinishPainting($ints* buffer, int32_t width, int32_t height) {
	int32_t $ret = 0;
	$prepareNative(GTKEngine, nativeFinishPainting, int32_t, $ints* buffer, int32_t width, int32_t height);
	$ret = $invokeNative(buffer, width, height);
	$finishNative();
	return $ret;
}

void GTKEngine::native_switch_theme() {
	$prepareNative(GTKEngine, native_switch_theme, void);
	$invokeNative();
	$finishNative();
}

$GTKEngine$WidgetType* GTKEngine::getWidgetType($JComponent* c, $Region* id) {
	$init(GTKEngine);
	$useLocalCurrentObjectStackCache();
	$var($Object, value, $nc(GTKEngine::regionToWidgetTypeMap)->get(id));
	if ($instanceOf($GTKEngine$WidgetType, value)) {
		return $cast($GTKEngine$WidgetType, value);
	}
	$var($GTKEngine$WidgetTypeArray, widgets, $cast($GTKEngine$WidgetTypeArray, value));
	if (c == nullptr) {
		return $nc(widgets)->get(0);
	}
	if ($instanceOf($JScrollBar, c)) {
		return ($nc(($cast($JScrollBar, c)))->getOrientation() == $JScrollBar::HORIZONTAL) ? $nc(widgets)->get(0) : widgets->get(1);
	} else if ($instanceOf($JSeparator, c)) {
		$var($JSeparator, separator, $cast($JSeparator, c));
		if ($instanceOf($JPopupMenu, $($nc(separator)->getParent()))) {
			$init($GTKEngine$WidgetType);
			return $GTKEngine$WidgetType::POPUP_MENU_SEPARATOR;
		} else if ($instanceOf($JToolBar, $(separator->getParent()))) {
			$init($GTKEngine$WidgetType);
			return $GTKEngine$WidgetType::TOOL_BAR_SEPARATOR;
		}
		return ($nc(separator)->getOrientation() == $JSeparator::HORIZONTAL) ? $nc(widgets)->get(0) : widgets->get(1);
	} else if ($instanceOf($JSlider, c)) {
		return ($nc(($cast($JSlider, c)))->getOrientation() == $JSlider::HORIZONTAL) ? $nc(widgets)->get(0) : widgets->get(1);
	} else if ($instanceOf($JProgressBar, c)) {
		return ($nc(($cast($JProgressBar, c)))->getOrientation() == $JProgressBar::HORIZONTAL) ? $nc(widgets)->get(0) : widgets->get(1);
	} else if ($instanceOf($JSplitPane, c)) {
		return ($nc(($cast($JSplitPane, c)))->getOrientation() == $JSplitPane::HORIZONTAL_SPLIT) ? $nc(widgets)->get(1) : widgets->get(0);
	} else {
		$init($Region);
		if (id == $Region::LABEL) {
			if ($instanceOf($ListCellRenderer, c)) {
				return $nc(widgets)->get(1);
			} else {
				return $nc(widgets)->get(0);
			}
		} else {
			if (id == $Region::TEXT_FIELD) {
				$var($String, name, $nc(c)->getName());
				if (name != nullptr && name->startsWith("ComboBox"_s)) {
					return $nc(widgets)->get(1);
				} else {
					return $nc(widgets)->get(0);
				}
			} else {
				if (id == $Region::FORMATTED_TEXT_FIELD) {
					$var($String, name, $nc(c)->getName());
					if (name != nullptr && name->startsWith("Spinner"_s)) {
						return $nc(widgets)->get(1);
					} else {
						return $nc(widgets)->get(0);
					}
				} else {
					if (id == $Region::ARROW_BUTTON) {
						if ($instanceOf($JScrollBar, $($nc(c)->getParent()))) {
							$var($Integer, prop, $cast($Integer, c->getClientProperty("__arrow_direction__"_s)));
							int32_t dir = (prop != nullptr) ? $nc(prop)->intValue() : $SwingConstants::WEST;
							switch (dir) {
							case $SwingConstants::WEST:
								{
									$init($GTKEngine$WidgetType);
									return $GTKEngine$WidgetType::HSCROLL_BAR_BUTTON_LEFT;
								}
							case $SwingConstants::EAST:
								{
									$init($GTKEngine$WidgetType);
									return $GTKEngine$WidgetType::HSCROLL_BAR_BUTTON_RIGHT;
								}
							case $SwingConstants::NORTH:
								{
									$init($GTKEngine$WidgetType);
									return $GTKEngine$WidgetType::VSCROLL_BAR_BUTTON_UP;
								}
							case $SwingConstants::SOUTH:
								{
									$init($GTKEngine$WidgetType);
									return $GTKEngine$WidgetType::VSCROLL_BAR_BUTTON_DOWN;
								}
							default:
								{
									return nullptr;
								}
							}
						} else if ($instanceOf($JComboBox, $(c->getParent()))) {
							$init($GTKEngine$WidgetType);
							return $GTKEngine$WidgetType::COMBO_BOX_ARROW_BUTTON;
						} else {
							$init($GTKEngine$WidgetType);
							return $GTKEngine$WidgetType::SPINNER_ARROW_BUTTON;
						}
					}
				}
			}
		}
	}
	return nullptr;
}

int32_t GTKEngine::getTextDirection($SynthContext* context) {
	$init(GTKEngine);
	$useLocalCurrentObjectStackCache();
	$init($GTKConstants$TextDirection);
	$GTKConstants$TextDirection* dir = $GTKConstants$TextDirection::NONE;
	$var($JComponent, comp, $nc(context)->getComponent());
	if (comp != nullptr) {
		$var($ComponentOrientation, co, comp->getComponentOrientation());
		if (co != nullptr) {
			dir = co->isLeftToRight() ? $GTKConstants$TextDirection::LTR : $GTKConstants$TextDirection::RTL;
		}
	}
	return $nc(dir)->ordinal();
}

void GTKEngine::paintArrow($Graphics* g, $SynthContext* context, $Region* id, int32_t state, $GTKConstants$ShadowType* shadowType, $GTKConstants$ArrowType* direction, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	state = $nc($($GTKLookAndFeel::synthStateToGTKStateType(state)))->ordinal();
	int32_t widget = $nc($(getWidgetType($($nc(context)->getComponent()), id)))->ordinal();
	int32_t var$0 = widget;
	int32_t var$1 = state;
	int32_t var$2 = $nc(shadowType)->ordinal();
	$var($String, var$3, detail);
	int32_t var$4 = x - this->x0;
	int32_t var$5 = y - this->y0;
	int32_t var$6 = w;
	int32_t var$7 = h;
	native_paint_arrow(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, $nc(direction)->ordinal());
}

void GTKEngine::paintBox($Graphics* g, $SynthContext* context, $Region* id, int32_t state, $GTKConstants$ShadowType* shadowType, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	int32_t gtkState = $nc($($GTKLookAndFeel::synthStateToGTKStateType(state)))->ordinal();
	int32_t synthState = $nc(context)->getComponentState();
	int32_t dir = getTextDirection(context);
	int32_t widget = $nc($(getWidgetType($(context->getComponent()), id)))->ordinal();
	native_paint_box(widget, gtkState, $nc(shadowType)->ordinal(), detail, x - this->x0, y - this->y0, w, h, synthState, dir);
}

void GTKEngine::paintBoxGap($Graphics* g, $SynthContext* context, $Region* id, int32_t state, $GTKConstants$ShadowType* shadowType, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h, $GTKConstants$PositionType* boxGapType, int32_t tabBegin, int32_t size) {
	$useLocalCurrentObjectStackCache();
	state = $nc($($GTKLookAndFeel::synthStateToGTKStateType(state)))->ordinal();
	int32_t widget = $nc($(getWidgetType($($nc(context)->getComponent()), id)))->ordinal();
	int32_t var$0 = widget;
	int32_t var$1 = state;
	int32_t var$2 = $nc(shadowType)->ordinal();
	$var($String, var$3, detail);
	int32_t var$4 = x - this->x0;
	int32_t var$5 = y - this->y0;
	int32_t var$6 = w;
	int32_t var$7 = h;
	native_paint_box_gap(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, $nc(boxGapType)->ordinal(), tabBegin, size);
}

void GTKEngine::paintCheck($Graphics* g, $SynthContext* context, $Region* id, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	int32_t synthState = $nc(context)->getComponentState();
	int32_t widget = $nc($(getWidgetType($(context->getComponent()), id)))->ordinal();
	native_paint_check(widget, synthState, detail, x - this->x0, y - this->y0, w, h);
}

void GTKEngine::paintExpander($Graphics* g, $SynthContext* context, $Region* id, int32_t state, $GTKConstants$ExpanderStyle* expanderStyle, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	state = $nc($($GTKLookAndFeel::synthStateToGTKStateType(state)))->ordinal();
	int32_t widget = $nc($(getWidgetType($($nc(context)->getComponent()), id)))->ordinal();
	native_paint_expander(widget, state, detail, x - this->x0, y - this->y0, w, h, $nc(expanderStyle)->ordinal());
}

void GTKEngine::paintExtension($Graphics* g, $SynthContext* context, $Region* id, int32_t state, $GTKConstants$ShadowType* shadowType, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h, $GTKConstants$PositionType* placement, int32_t tabIndex) {
	$useLocalCurrentObjectStackCache();
	state = $nc($($GTKLookAndFeel::synthStateToGTKStateType(state)))->ordinal();
	int32_t widget = $nc($(getWidgetType($($nc(context)->getComponent()), id)))->ordinal();
	int32_t var$0 = widget;
	int32_t var$1 = state;
	int32_t var$2 = $nc(shadowType)->ordinal();
	$var($String, var$3, detail);
	int32_t var$4 = x - this->x0;
	int32_t var$5 = y - this->y0;
	int32_t var$6 = w;
	int32_t var$7 = h;
	native_paint_extension(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, $nc(placement)->ordinal());
}

void GTKEngine::paintFlatBox($Graphics* g, $SynthContext* context, $Region* id, int32_t state, $GTKConstants$ShadowType* shadowType, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h, $ColorType* colorType) {
	$useLocalCurrentObjectStackCache();
	state = $nc($($GTKLookAndFeel::synthStateToGTKStateType(state)))->ordinal();
	int32_t widget = $nc($(getWidgetType($($nc(context)->getComponent()), id)))->ordinal();
	int32_t var$0 = widget;
	int32_t var$1 = state;
	int32_t var$2 = $nc(shadowType)->ordinal();
	$var($String, var$3, detail);
	int32_t var$4 = x - this->x0;
	int32_t var$5 = y - this->y0;
	int32_t var$6 = w;
	int32_t var$7 = h;
	native_paint_flat_box(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, $nc($($nc(context)->getComponent()))->hasFocus());
}

void GTKEngine::paintFocus($Graphics* g, $SynthContext* context, $Region* id, int32_t state, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	state = $nc($($GTKLookAndFeel::synthStateToGTKStateType(state)))->ordinal();
	int32_t widget = $nc($(getWidgetType($($nc(context)->getComponent()), id)))->ordinal();
	native_paint_focus(widget, state, detail, x - this->x0, y - this->y0, w, h);
}

void GTKEngine::paintHandle($Graphics* g, $SynthContext* context, $Region* id, int32_t state, $GTKConstants$ShadowType* shadowType, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h, $GTKConstants$Orientation* orientation) {
	$useLocalCurrentObjectStackCache();
	state = $nc($($GTKLookAndFeel::synthStateToGTKStateType(state)))->ordinal();
	int32_t widget = $nc($(getWidgetType($($nc(context)->getComponent()), id)))->ordinal();
	int32_t var$0 = widget;
	int32_t var$1 = state;
	int32_t var$2 = $nc(shadowType)->ordinal();
	$var($String, var$3, detail);
	int32_t var$4 = x - this->x0;
	int32_t var$5 = y - this->y0;
	int32_t var$6 = w;
	int32_t var$7 = h;
	native_paint_handle(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, $nc(orientation)->ordinal());
}

void GTKEngine::paintHline($Graphics* g, $SynthContext* context, $Region* id, int32_t state, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	state = $nc($($GTKLookAndFeel::synthStateToGTKStateType(state)))->ordinal();
	int32_t widget = $nc($(getWidgetType($($nc(context)->getComponent()), id)))->ordinal();
	native_paint_hline(widget, state, detail, x - this->x0, y - this->y0, w, h);
}

void GTKEngine::paintOption($Graphics* g, $SynthContext* context, $Region* id, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	int32_t synthState = $nc(context)->getComponentState();
	int32_t widget = $nc($(getWidgetType($(context->getComponent()), id)))->ordinal();
	native_paint_option(widget, synthState, detail, x - this->x0, y - this->y0, w, h);
}

void GTKEngine::paintShadow($Graphics* g, $SynthContext* context, $Region* id, int32_t state, $GTKConstants$ShadowType* shadowType, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	int32_t gtkState = $nc($($GTKLookAndFeel::synthStateToGTKStateType(state)))->ordinal();
	int32_t synthState = $nc(context)->getComponentState();
	$var($Container, parent, $nc($(context->getComponent()))->getParent());
	if ($GTKLookAndFeel::is3()) {
		if (parent != nullptr && $instanceOf($JComboBox, $(parent->getParent()))) {
			if ($nc($(parent->getParent()))->hasFocus()) {
				synthState |= $SynthConstants::FOCUSED;
			}
		}
	}
	int32_t dir = getTextDirection(context);
	int32_t widget = $nc($(getWidgetType($(context->getComponent()), id)))->ordinal();
	native_paint_shadow(widget, gtkState, $nc(shadowType)->ordinal(), detail, x - this->x0, y - this->y0, w, h, synthState, dir);
}

void GTKEngine::paintSlider($Graphics* g, $SynthContext* context, $Region* id, int32_t state, $GTKConstants$ShadowType* shadowType, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h, $GTKConstants$Orientation* orientation, bool hasFocus) {
	$useLocalCurrentObjectStackCache();
	state = $nc($($GTKLookAndFeel::synthStateToGTKStateType(state)))->ordinal();
	int32_t widget = $nc($(getWidgetType($($nc(context)->getComponent()), id)))->ordinal();
	int32_t var$0 = widget;
	int32_t var$1 = state;
	int32_t var$2 = $nc(shadowType)->ordinal();
	$var($String, var$3, detail);
	int32_t var$4 = x - this->x0;
	int32_t var$5 = y - this->y0;
	int32_t var$6 = w;
	int32_t var$7 = h;
	native_paint_slider(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, $nc(orientation)->ordinal(), hasFocus);
}

void GTKEngine::paintVline($Graphics* g, $SynthContext* context, $Region* id, int32_t state, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	state = $nc($($GTKLookAndFeel::synthStateToGTKStateType(state)))->ordinal();
	int32_t widget = $nc($(getWidgetType($($nc(context)->getComponent()), id)))->ordinal();
	native_paint_vline(widget, state, detail, x - this->x0, y - this->y0, w, h);
}

void GTKEngine::paintBackground($Graphics* g, $SynthContext* context, $Region* id, int32_t state, $Color* color, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	state = $nc($($GTKLookAndFeel::synthStateToGTKStateType(state)))->ordinal();
	int32_t widget = $nc($(getWidgetType($($nc(context)->getComponent()), id)))->ordinal();
	native_paint_background(widget, state, x - this->x0, y - this->y0, w, h);
}

bool GTKEngine::paintCachedImage($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, $ObjectArray* args) {
	if (w <= 0 || h <= 0) {
		return true;
	}
	$var($Image, img, $nc(this->cache)->getImage($of(this)->getClass(), nullptr, w, h, args));
	if (img != nullptr) {
		$nc(g)->drawImage(img, x, y, nullptr);
		return true;
	}
	return false;
}

void GTKEngine::startPainting($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, $ObjectArray* args) {
	nativeStartPainting(w, h);
	this->x0 = x;
	this->y0 = y;
	this->w0 = w;
	this->h0 = h;
	$set(this, graphics, g);
	$set(this, cacheArgs, args);
}

$BufferedImage* GTKEngine::finishPainting() {
	return finishPainting(true);
}

$BufferedImage* GTKEngine::finishPainting(bool useCache) {
	$useLocalCurrentObjectStackCache();
	$var($DataBufferInt, dataBuffer, $new($DataBufferInt, this->w0 * this->h0));
	int32_t transparency = nativeFinishPainting($($SunWritableRaster::stealData(dataBuffer, 0)), this->w0, this->h0);
	$SunWritableRaster::markDirty(static_cast<$DataBuffer*>(dataBuffer));
	$var($ints, bands, $nc(GTKEngine::BAND_OFFSETS)->get(transparency - 1));
	$var($WritableRaster, raster, $Raster::createPackedRaster(static_cast<$DataBuffer*>(dataBuffer), this->w0, this->h0, this->w0, bands, ($Point*)nullptr));
	$var($ColorModel, cm, $nc(GTKEngine::COLOR_MODELS)->get(transparency - 1));
	$var($BufferedImage, img, $new($BufferedImage, cm, raster, false, ($Hashtable*)nullptr));
	if (useCache) {
		$nc(this->cache)->setImage($of(this)->getClass(), nullptr, this->w0, this->h0, this->cacheArgs, img);
	}
	$nc(this->graphics)->drawImage(img, this->x0, this->y0, nullptr);
	return img;
}

void GTKEngine::themeChanged() {
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		native_switch_theme();
	}
	$nc(this->cache)->flush();
}

$Object* GTKEngine::getSetting($GTKEngine$Settings* property) {
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		return $of(native_get_gtk_setting($nc(property)->ordinal()));
	}
}

void GTKEngine::setRangeValue($SynthContext* context, $Region* id, double value, double min, double max, double visible) {
	$useLocalCurrentObjectStackCache();
	int32_t widget = $nc($(getWidgetType($($nc(context)->getComponent()), id)))->ordinal();
	nativeSetRangeValue(widget, value, min, max, visible);
}

void clinit$GTKEngine($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(GTKEngine::INSTANCE, $new(GTKEngine));
	{
		$Toolkit::getDefaultToolkit();
		$assignStatic(GTKEngine::regionToWidgetTypeMap, $new($HashMap, 50));
		$init($Region);
		$init($GTKEngine$WidgetType);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::ARROW_BUTTON, $$new($GTKEngine$WidgetTypeArray, {
			$GTKEngine$WidgetType::SPINNER_ARROW_BUTTON,
			$GTKEngine$WidgetType::COMBO_BOX_ARROW_BUTTON,
			$GTKEngine$WidgetType::HSCROLL_BAR_BUTTON_LEFT,
			$GTKEngine$WidgetType::HSCROLL_BAR_BUTTON_RIGHT,
			$GTKEngine$WidgetType::VSCROLL_BAR_BUTTON_UP,
			$GTKEngine$WidgetType::VSCROLL_BAR_BUTTON_DOWN
		}));
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::BUTTON, $GTKEngine$WidgetType::BUTTON);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::CHECK_BOX, $GTKEngine$WidgetType::CHECK_BOX);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::CHECK_BOX_MENU_ITEM, $GTKEngine$WidgetType::CHECK_BOX_MENU_ITEM);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::COLOR_CHOOSER, $GTKEngine$WidgetType::COLOR_CHOOSER);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::FILE_CHOOSER, $GTKEngine$WidgetType::OPTION_PANE);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::COMBO_BOX, $GTKEngine$WidgetType::COMBO_BOX);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::DESKTOP_ICON, $GTKEngine$WidgetType::DESKTOP_ICON);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::DESKTOP_PANE, $GTKEngine$WidgetType::DESKTOP_PANE);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::EDITOR_PANE, $GTKEngine$WidgetType::EDITOR_PANE);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::FORMATTED_TEXT_FIELD, $$new($GTKEngine$WidgetTypeArray, {
			$GTKEngine$WidgetType::FORMATTED_TEXT_FIELD,
			$GTKEngine$WidgetType::SPINNER_TEXT_FIELD
		}));
		$init($GTKRegion);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($GTKRegion::HANDLE_BOX, $GTKEngine$WidgetType::HANDLE_BOX);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::INTERNAL_FRAME, $GTKEngine$WidgetType::INTERNAL_FRAME);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::INTERNAL_FRAME_TITLE_PANE, $GTKEngine$WidgetType::INTERNAL_FRAME_TITLE_PANE);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::LABEL, $$new($GTKEngine$WidgetTypeArray, {
			$GTKEngine$WidgetType::LABEL,
			$GTKEngine$WidgetType::COMBO_BOX_TEXT_FIELD
		}));
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::LIST, $GTKEngine$WidgetType::LIST);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::MENU, $GTKEngine$WidgetType::MENU);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::MENU_BAR, $GTKEngine$WidgetType::MENU_BAR);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::MENU_ITEM, $GTKEngine$WidgetType::MENU_ITEM);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::MENU_ITEM_ACCELERATOR, $GTKEngine$WidgetType::MENU_ITEM_ACCELERATOR);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::OPTION_PANE, $GTKEngine$WidgetType::OPTION_PANE);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::PANEL, $GTKEngine$WidgetType::PANEL);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::PASSWORD_FIELD, $GTKEngine$WidgetType::PASSWORD_FIELD);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::POPUP_MENU, $GTKEngine$WidgetType::POPUP_MENU);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::POPUP_MENU_SEPARATOR, $GTKEngine$WidgetType::POPUP_MENU_SEPARATOR);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::PROGRESS_BAR, $$new($GTKEngine$WidgetTypeArray, {
			$GTKEngine$WidgetType::HPROGRESS_BAR,
			$GTKEngine$WidgetType::VPROGRESS_BAR
		}));
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::RADIO_BUTTON, $GTKEngine$WidgetType::RADIO_BUTTON);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::RADIO_BUTTON_MENU_ITEM, $GTKEngine$WidgetType::RADIO_BUTTON_MENU_ITEM);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::ROOT_PANE, $GTKEngine$WidgetType::ROOT_PANE);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::SCROLL_BAR, $$new($GTKEngine$WidgetTypeArray, {
			$GTKEngine$WidgetType::HSCROLL_BAR,
			$GTKEngine$WidgetType::VSCROLL_BAR
		}));
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::SCROLL_BAR_THUMB, $$new($GTKEngine$WidgetTypeArray, {
			$GTKEngine$WidgetType::HSCROLL_BAR_THUMB,
			$GTKEngine$WidgetType::VSCROLL_BAR_THUMB
		}));
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::SCROLL_BAR_TRACK, $$new($GTKEngine$WidgetTypeArray, {
			$GTKEngine$WidgetType::HSCROLL_BAR_TRACK,
			$GTKEngine$WidgetType::VSCROLL_BAR_TRACK
		}));
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::SCROLL_PANE, $GTKEngine$WidgetType::SCROLL_PANE);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::SEPARATOR, $$new($GTKEngine$WidgetTypeArray, {
			$GTKEngine$WidgetType::HSEPARATOR,
			$GTKEngine$WidgetType::VSEPARATOR
		}));
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::SLIDER, $$new($GTKEngine$WidgetTypeArray, {
			$GTKEngine$WidgetType::HSLIDER,
			$GTKEngine$WidgetType::VSLIDER
		}));
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::SLIDER_THUMB, $$new($GTKEngine$WidgetTypeArray, {
			$GTKEngine$WidgetType::HSLIDER_THUMB,
			$GTKEngine$WidgetType::VSLIDER_THUMB
		}));
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::SLIDER_TRACK, $$new($GTKEngine$WidgetTypeArray, {
			$GTKEngine$WidgetType::HSLIDER_TRACK,
			$GTKEngine$WidgetType::VSLIDER_TRACK
		}));
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::SPINNER, $GTKEngine$WidgetType::SPINNER);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::SPLIT_PANE, $GTKEngine$WidgetType::SPLIT_PANE);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::SPLIT_PANE_DIVIDER, $$new($GTKEngine$WidgetTypeArray, {
			$GTKEngine$WidgetType::HSPLIT_PANE_DIVIDER,
			$GTKEngine$WidgetType::VSPLIT_PANE_DIVIDER
		}));
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::TABBED_PANE, $GTKEngine$WidgetType::TABBED_PANE);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::TABBED_PANE_CONTENT, $GTKEngine$WidgetType::TABBED_PANE_CONTENT);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::TABBED_PANE_TAB, $GTKEngine$WidgetType::TABBED_PANE_TAB);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::TABBED_PANE_TAB_AREA, $GTKEngine$WidgetType::TABBED_PANE_TAB_AREA);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::TABLE, $GTKEngine$WidgetType::TABLE);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::TABLE_HEADER, $GTKEngine$WidgetType::TABLE_HEADER);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::TEXT_AREA, $GTKEngine$WidgetType::TEXT_AREA);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::TEXT_FIELD, $$new($GTKEngine$WidgetTypeArray, {
			$GTKEngine$WidgetType::TEXT_FIELD,
			$GTKEngine$WidgetType::COMBO_BOX_TEXT_FIELD
		}));
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::TEXT_PANE, $GTKEngine$WidgetType::TEXT_PANE);
		$init($GTKEngine$CustomRegion);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($GTKEngine$CustomRegion::TITLED_BORDER, $GTKEngine$WidgetType::TITLED_BORDER);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::TOGGLE_BUTTON, $GTKEngine$WidgetType::TOGGLE_BUTTON);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::TOOL_BAR, $GTKEngine$WidgetType::TOOL_BAR);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::TOOL_BAR_CONTENT, $GTKEngine$WidgetType::TOOL_BAR);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::TOOL_BAR_DRAG_WINDOW, $GTKEngine$WidgetType::TOOL_BAR_DRAG_WINDOW);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::TOOL_BAR_SEPARATOR, $GTKEngine$WidgetType::TOOL_BAR_SEPARATOR);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::TOOL_TIP, $GTKEngine$WidgetType::TOOL_TIP);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::TREE, $GTKEngine$WidgetType::TREE);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::TREE_CELL, $GTKEngine$WidgetType::TREE_CELL);
		$nc(GTKEngine::regionToWidgetTypeMap)->put($Region::VIEWPORT, $GTKEngine$WidgetType::VIEWPORT);
	}
	$assignStatic(GTKEngine::COLOR_MODELS, $new($ColorModelArray, {
		static_cast<$ColorModel*>($$new($DirectColorModel, 24, 0x00FF0000, 0x0000FF00, 255, 0)),
		static_cast<$ColorModel*>($$new($DirectColorModel, 25, 0x00FF0000, 0x0000FF00, 255, 0x01000000)),
		$($ColorModel::getRGBdefault())
	}));
	$assignStatic(GTKEngine::BAND_OFFSETS, $new($intArray2, {
		$$new($ints, {
			0x00FF0000,
			0x0000FF00,
			255
		}),
		$$new($ints, {
			0x00FF0000,
			0x0000FF00,
			255,
			0x01000000
		}),
		$$new($ints, {
			0x00FF0000,
			0x0000FF00,
			255,
			(int32_t)0xFF000000
		})
	}));
}

GTKEngine::GTKEngine() {
}

$Class* GTKEngine::load$($String* name, bool initialize) {
	$loadClass(GTKEngine, name, initialize, &_GTKEngine_ClassInfo_, clinit$GTKEngine, allocate$GTKEngine);
	return class$;
}

$Class* GTKEngine::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com