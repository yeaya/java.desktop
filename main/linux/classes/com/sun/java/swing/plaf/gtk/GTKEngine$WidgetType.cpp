#include <com/sun/java/swing/plaf/gtk/GTKEngine$WidgetType.h>

#include <com/sun/java/swing/plaf/gtk/GTKEngine.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef BUTTON
#undef CHECK_BOX
#undef CHECK_BOX_MENU_ITEM
#undef COLOR_CHOOSER
#undef COMBO_BOX
#undef COMBO_BOX_ARROW_BUTTON
#undef COMBO_BOX_TEXT_FIELD
#undef DESKTOP_ICON
#undef DESKTOP_PANE
#undef EDITOR_PANE
#undef FORMATTED_TEXT_FIELD
#undef HANDLE_BOX
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
#undef IMAGE
#undef INTERNAL_FRAME
#undef INTERNAL_FRAME_TITLE_PANE
#undef LABEL
#undef LIST
#undef MENU
#undef MENU_BAR
#undef MENU_ITEM
#undef MENU_ITEM_ACCELERATOR
#undef OPTION_PANE
#undef PANEL
#undef PASSWORD_FIELD
#undef POPUP_MENU
#undef POPUP_MENU_SEPARATOR
#undef RADIO_BUTTON
#undef RADIO_BUTTON_MENU_ITEM
#undef ROOT_PANE
#undef SCROLL_PANE
#undef SPINNER
#undef SPINNER_ARROW_BUTTON
#undef SPINNER_TEXT_FIELD
#undef SPLIT_PANE
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

using $GTKEngine$WidgetTypeArray = $Array<::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType>;
using $GTKEngine = ::com::sun::java::swing::plaf::gtk::GTKEngine;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKEngine$WidgetType_FieldInfo_[] = {
	{"BUTTON", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, BUTTON)},
	{"CHECK_BOX", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, CHECK_BOX)},
	{"CHECK_BOX_MENU_ITEM", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, CHECK_BOX_MENU_ITEM)},
	{"COLOR_CHOOSER", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, COLOR_CHOOSER)},
	{"COMBO_BOX", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, COMBO_BOX)},
	{"COMBO_BOX_ARROW_BUTTON", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, COMBO_BOX_ARROW_BUTTON)},
	{"COMBO_BOX_TEXT_FIELD", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, COMBO_BOX_TEXT_FIELD)},
	{"DESKTOP_ICON", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, DESKTOP_ICON)},
	{"DESKTOP_PANE", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, DESKTOP_PANE)},
	{"EDITOR_PANE", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, EDITOR_PANE)},
	{"FORMATTED_TEXT_FIELD", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, FORMATTED_TEXT_FIELD)},
	{"HANDLE_BOX", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, HANDLE_BOX)},
	{"HPROGRESS_BAR", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, HPROGRESS_BAR)},
	{"HSCROLL_BAR", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, HSCROLL_BAR)},
	{"HSCROLL_BAR_BUTTON_LEFT", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, HSCROLL_BAR_BUTTON_LEFT)},
	{"HSCROLL_BAR_BUTTON_RIGHT", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, HSCROLL_BAR_BUTTON_RIGHT)},
	{"HSCROLL_BAR_TRACK", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, HSCROLL_BAR_TRACK)},
	{"HSCROLL_BAR_THUMB", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, HSCROLL_BAR_THUMB)},
	{"HSEPARATOR", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, HSEPARATOR)},
	{"HSLIDER", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, HSLIDER)},
	{"HSLIDER_TRACK", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, HSLIDER_TRACK)},
	{"HSLIDER_THUMB", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, HSLIDER_THUMB)},
	{"HSPLIT_PANE_DIVIDER", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, HSPLIT_PANE_DIVIDER)},
	{"INTERNAL_FRAME", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, INTERNAL_FRAME)},
	{"INTERNAL_FRAME_TITLE_PANE", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, INTERNAL_FRAME_TITLE_PANE)},
	{"IMAGE", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, IMAGE)},
	{"LABEL", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, LABEL)},
	{"LIST", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, LIST)},
	{"MENU", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, MENU)},
	{"MENU_BAR", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, MENU_BAR)},
	{"MENU_ITEM", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, MENU_ITEM)},
	{"MENU_ITEM_ACCELERATOR", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, MENU_ITEM_ACCELERATOR)},
	{"OPTION_PANE", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, OPTION_PANE)},
	{"PANEL", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, PANEL)},
	{"PASSWORD_FIELD", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, PASSWORD_FIELD)},
	{"POPUP_MENU", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, POPUP_MENU)},
	{"POPUP_MENU_SEPARATOR", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, POPUP_MENU_SEPARATOR)},
	{"RADIO_BUTTON", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, RADIO_BUTTON)},
	{"RADIO_BUTTON_MENU_ITEM", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, RADIO_BUTTON_MENU_ITEM)},
	{"ROOT_PANE", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, ROOT_PANE)},
	{"SCROLL_PANE", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, SCROLL_PANE)},
	{"SPINNER", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, SPINNER)},
	{"SPINNER_ARROW_BUTTON", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, SPINNER_ARROW_BUTTON)},
	{"SPINNER_TEXT_FIELD", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, SPINNER_TEXT_FIELD)},
	{"SPLIT_PANE", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, SPLIT_PANE)},
	{"TABBED_PANE", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, TABBED_PANE)},
	{"TABBED_PANE_TAB_AREA", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, TABBED_PANE_TAB_AREA)},
	{"TABBED_PANE_CONTENT", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, TABBED_PANE_CONTENT)},
	{"TABBED_PANE_TAB", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, TABBED_PANE_TAB)},
	{"TABLE", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, TABLE)},
	{"TABLE_HEADER", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, TABLE_HEADER)},
	{"TEXT_AREA", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, TEXT_AREA)},
	{"TEXT_FIELD", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, TEXT_FIELD)},
	{"TEXT_PANE", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, TEXT_PANE)},
	{"TITLED_BORDER", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, TITLED_BORDER)},
	{"TOGGLE_BUTTON", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, TOGGLE_BUTTON)},
	{"TOOL_BAR", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, TOOL_BAR)},
	{"TOOL_BAR_DRAG_WINDOW", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, TOOL_BAR_DRAG_WINDOW)},
	{"TOOL_BAR_SEPARATOR", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, TOOL_BAR_SEPARATOR)},
	{"TOOL_TIP", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, TOOL_TIP)},
	{"TREE", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, TREE)},
	{"TREE_CELL", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, TREE_CELL)},
	{"VIEWPORT", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, VIEWPORT)},
	{"VPROGRESS_BAR", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, VPROGRESS_BAR)},
	{"VSCROLL_BAR", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, VSCROLL_BAR)},
	{"VSCROLL_BAR_BUTTON_UP", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, VSCROLL_BAR_BUTTON_UP)},
	{"VSCROLL_BAR_BUTTON_DOWN", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, VSCROLL_BAR_BUTTON_DOWN)},
	{"VSCROLL_BAR_TRACK", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, VSCROLL_BAR_TRACK)},
	{"VSCROLL_BAR_THUMB", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, VSCROLL_BAR_THUMB)},
	{"VSEPARATOR", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, VSEPARATOR)},
	{"VSLIDER", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, VSLIDER)},
	{"VSLIDER_TRACK", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, VSLIDER_TRACK)},
	{"VSLIDER_THUMB", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, VSLIDER_THUMB)},
	{"VSPLIT_PANE_DIVIDER", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$WidgetType, VSPLIT_PANE_DIVIDER)},
	{"$VALUES", "[Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(GTKEngine$WidgetType, $VALUES)},
	{}
};

$MethodInfo _GTKEngine$WidgetType_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$GTKEngine$WidgetTypeArray*(*)()>(&GTKEngine$WidgetType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(GTKEngine$WidgetType::*)($String*,int32_t)>(&GTKEngine$WidgetType::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<GTKEngine$WidgetType*(*)($String*)>(&GTKEngine$WidgetType::valueOf))},
	{"values", "()[Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$GTKEngine$WidgetTypeArray*(*)()>(&GTKEngine$WidgetType::values))},
	{}
};

$InnerClassInfo _GTKEngine$WidgetType_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKEngine$WidgetType", "com.sun.java.swing.plaf.gtk.GTKEngine", "WidgetType", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _GTKEngine$WidgetType_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.java.swing.plaf.gtk.GTKEngine$WidgetType",
	"java.lang.Enum",
	nullptr,
	_GTKEngine$WidgetType_FieldInfo_,
	_GTKEngine$WidgetType_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;>;",
	nullptr,
	_GTKEngine$WidgetType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKEngine"
};

$Object* allocate$GTKEngine$WidgetType($Class* clazz) {
	return $of($alloc(GTKEngine$WidgetType));
}

GTKEngine$WidgetType* GTKEngine$WidgetType::BUTTON = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::CHECK_BOX = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::CHECK_BOX_MENU_ITEM = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::COLOR_CHOOSER = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::COMBO_BOX = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::COMBO_BOX_ARROW_BUTTON = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::COMBO_BOX_TEXT_FIELD = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::DESKTOP_ICON = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::DESKTOP_PANE = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::EDITOR_PANE = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::FORMATTED_TEXT_FIELD = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::HANDLE_BOX = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::HPROGRESS_BAR = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::HSCROLL_BAR = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::HSCROLL_BAR_BUTTON_LEFT = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::HSCROLL_BAR_BUTTON_RIGHT = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::HSCROLL_BAR_TRACK = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::HSCROLL_BAR_THUMB = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::HSEPARATOR = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::HSLIDER = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::HSLIDER_TRACK = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::HSLIDER_THUMB = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::HSPLIT_PANE_DIVIDER = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::INTERNAL_FRAME = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::INTERNAL_FRAME_TITLE_PANE = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::IMAGE = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::LABEL = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::LIST = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::MENU = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::MENU_BAR = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::MENU_ITEM = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::MENU_ITEM_ACCELERATOR = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::OPTION_PANE = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::PANEL = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::PASSWORD_FIELD = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::POPUP_MENU = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::POPUP_MENU_SEPARATOR = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::RADIO_BUTTON = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::RADIO_BUTTON_MENU_ITEM = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::ROOT_PANE = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::SCROLL_PANE = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::SPINNER = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::SPINNER_ARROW_BUTTON = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::SPINNER_TEXT_FIELD = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::SPLIT_PANE = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::TABBED_PANE = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::TABBED_PANE_TAB_AREA = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::TABBED_PANE_CONTENT = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::TABBED_PANE_TAB = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::TABLE = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::TABLE_HEADER = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::TEXT_AREA = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::TEXT_FIELD = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::TEXT_PANE = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::TITLED_BORDER = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::TOGGLE_BUTTON = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::TOOL_BAR = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::TOOL_BAR_DRAG_WINDOW = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::TOOL_BAR_SEPARATOR = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::TOOL_TIP = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::TREE = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::TREE_CELL = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::VIEWPORT = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::VPROGRESS_BAR = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::VSCROLL_BAR = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::VSCROLL_BAR_BUTTON_UP = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::VSCROLL_BAR_BUTTON_DOWN = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::VSCROLL_BAR_TRACK = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::VSCROLL_BAR_THUMB = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::VSEPARATOR = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::VSLIDER = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::VSLIDER_TRACK = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::VSLIDER_THUMB = nullptr;
GTKEngine$WidgetType* GTKEngine$WidgetType::VSPLIT_PANE_DIVIDER = nullptr;
$GTKEngine$WidgetTypeArray* GTKEngine$WidgetType::$VALUES = nullptr;

$GTKEngine$WidgetTypeArray* GTKEngine$WidgetType::$values() {
	$init(GTKEngine$WidgetType);
	return $new($GTKEngine$WidgetTypeArray, {
		GTKEngine$WidgetType::BUTTON,
		GTKEngine$WidgetType::CHECK_BOX,
		GTKEngine$WidgetType::CHECK_BOX_MENU_ITEM,
		GTKEngine$WidgetType::COLOR_CHOOSER,
		GTKEngine$WidgetType::COMBO_BOX,
		GTKEngine$WidgetType::COMBO_BOX_ARROW_BUTTON,
		GTKEngine$WidgetType::COMBO_BOX_TEXT_FIELD,
		GTKEngine$WidgetType::DESKTOP_ICON,
		GTKEngine$WidgetType::DESKTOP_PANE,
		GTKEngine$WidgetType::EDITOR_PANE,
		GTKEngine$WidgetType::FORMATTED_TEXT_FIELD,
		GTKEngine$WidgetType::HANDLE_BOX,
		GTKEngine$WidgetType::HPROGRESS_BAR,
		GTKEngine$WidgetType::HSCROLL_BAR,
		GTKEngine$WidgetType::HSCROLL_BAR_BUTTON_LEFT,
		GTKEngine$WidgetType::HSCROLL_BAR_BUTTON_RIGHT,
		GTKEngine$WidgetType::HSCROLL_BAR_TRACK,
		GTKEngine$WidgetType::HSCROLL_BAR_THUMB,
		GTKEngine$WidgetType::HSEPARATOR,
		GTKEngine$WidgetType::HSLIDER,
		GTKEngine$WidgetType::HSLIDER_TRACK,
		GTKEngine$WidgetType::HSLIDER_THUMB,
		GTKEngine$WidgetType::HSPLIT_PANE_DIVIDER,
		GTKEngine$WidgetType::INTERNAL_FRAME,
		GTKEngine$WidgetType::INTERNAL_FRAME_TITLE_PANE,
		GTKEngine$WidgetType::IMAGE,
		GTKEngine$WidgetType::LABEL,
		GTKEngine$WidgetType::LIST,
		GTKEngine$WidgetType::MENU,
		GTKEngine$WidgetType::MENU_BAR,
		GTKEngine$WidgetType::MENU_ITEM,
		GTKEngine$WidgetType::MENU_ITEM_ACCELERATOR,
		GTKEngine$WidgetType::OPTION_PANE,
		GTKEngine$WidgetType::PANEL,
		GTKEngine$WidgetType::PASSWORD_FIELD,
		GTKEngine$WidgetType::POPUP_MENU,
		GTKEngine$WidgetType::POPUP_MENU_SEPARATOR,
		GTKEngine$WidgetType::RADIO_BUTTON,
		GTKEngine$WidgetType::RADIO_BUTTON_MENU_ITEM,
		GTKEngine$WidgetType::ROOT_PANE,
		GTKEngine$WidgetType::SCROLL_PANE,
		GTKEngine$WidgetType::SPINNER,
		GTKEngine$WidgetType::SPINNER_ARROW_BUTTON,
		GTKEngine$WidgetType::SPINNER_TEXT_FIELD,
		GTKEngine$WidgetType::SPLIT_PANE,
		GTKEngine$WidgetType::TABBED_PANE,
		GTKEngine$WidgetType::TABBED_PANE_TAB_AREA,
		GTKEngine$WidgetType::TABBED_PANE_CONTENT,
		GTKEngine$WidgetType::TABBED_PANE_TAB,
		GTKEngine$WidgetType::TABLE,
		GTKEngine$WidgetType::TABLE_HEADER,
		GTKEngine$WidgetType::TEXT_AREA,
		GTKEngine$WidgetType::TEXT_FIELD,
		GTKEngine$WidgetType::TEXT_PANE,
		GTKEngine$WidgetType::TITLED_BORDER,
		GTKEngine$WidgetType::TOGGLE_BUTTON,
		GTKEngine$WidgetType::TOOL_BAR,
		GTKEngine$WidgetType::TOOL_BAR_DRAG_WINDOW,
		GTKEngine$WidgetType::TOOL_BAR_SEPARATOR,
		GTKEngine$WidgetType::TOOL_TIP,
		GTKEngine$WidgetType::TREE,
		GTKEngine$WidgetType::TREE_CELL,
		GTKEngine$WidgetType::VIEWPORT,
		GTKEngine$WidgetType::VPROGRESS_BAR,
		GTKEngine$WidgetType::VSCROLL_BAR,
		GTKEngine$WidgetType::VSCROLL_BAR_BUTTON_UP,
		GTKEngine$WidgetType::VSCROLL_BAR_BUTTON_DOWN,
		GTKEngine$WidgetType::VSCROLL_BAR_TRACK,
		GTKEngine$WidgetType::VSCROLL_BAR_THUMB,
		GTKEngine$WidgetType::VSEPARATOR,
		GTKEngine$WidgetType::VSLIDER,
		GTKEngine$WidgetType::VSLIDER_TRACK,
		GTKEngine$WidgetType::VSLIDER_THUMB,
		GTKEngine$WidgetType::VSPLIT_PANE_DIVIDER
	});
}

$GTKEngine$WidgetTypeArray* GTKEngine$WidgetType::values() {
	$init(GTKEngine$WidgetType);
	return $cast($GTKEngine$WidgetTypeArray, GTKEngine$WidgetType::$VALUES->clone());
}

GTKEngine$WidgetType* GTKEngine$WidgetType::valueOf($String* name) {
	$init(GTKEngine$WidgetType);
	return $cast(GTKEngine$WidgetType, $Enum::valueOf(GTKEngine$WidgetType::class$, name));
}

void GTKEngine$WidgetType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$GTKEngine$WidgetType($Class* class$) {
	$assignStatic(GTKEngine$WidgetType::BUTTON, $new(GTKEngine$WidgetType, "BUTTON"_s, 0));
	$assignStatic(GTKEngine$WidgetType::CHECK_BOX, $new(GTKEngine$WidgetType, "CHECK_BOX"_s, 1));
	$assignStatic(GTKEngine$WidgetType::CHECK_BOX_MENU_ITEM, $new(GTKEngine$WidgetType, "CHECK_BOX_MENU_ITEM"_s, 2));
	$assignStatic(GTKEngine$WidgetType::COLOR_CHOOSER, $new(GTKEngine$WidgetType, "COLOR_CHOOSER"_s, 3));
	$assignStatic(GTKEngine$WidgetType::COMBO_BOX, $new(GTKEngine$WidgetType, "COMBO_BOX"_s, 4));
	$assignStatic(GTKEngine$WidgetType::COMBO_BOX_ARROW_BUTTON, $new(GTKEngine$WidgetType, "COMBO_BOX_ARROW_BUTTON"_s, 5));
	$assignStatic(GTKEngine$WidgetType::COMBO_BOX_TEXT_FIELD, $new(GTKEngine$WidgetType, "COMBO_BOX_TEXT_FIELD"_s, 6));
	$assignStatic(GTKEngine$WidgetType::DESKTOP_ICON, $new(GTKEngine$WidgetType, "DESKTOP_ICON"_s, 7));
	$assignStatic(GTKEngine$WidgetType::DESKTOP_PANE, $new(GTKEngine$WidgetType, "DESKTOP_PANE"_s, 8));
	$assignStatic(GTKEngine$WidgetType::EDITOR_PANE, $new(GTKEngine$WidgetType, "EDITOR_PANE"_s, 9));
	$assignStatic(GTKEngine$WidgetType::FORMATTED_TEXT_FIELD, $new(GTKEngine$WidgetType, "FORMATTED_TEXT_FIELD"_s, 10));
	$assignStatic(GTKEngine$WidgetType::HANDLE_BOX, $new(GTKEngine$WidgetType, "HANDLE_BOX"_s, 11));
	$assignStatic(GTKEngine$WidgetType::HPROGRESS_BAR, $new(GTKEngine$WidgetType, "HPROGRESS_BAR"_s, 12));
	$assignStatic(GTKEngine$WidgetType::HSCROLL_BAR, $new(GTKEngine$WidgetType, "HSCROLL_BAR"_s, 13));
	$assignStatic(GTKEngine$WidgetType::HSCROLL_BAR_BUTTON_LEFT, $new(GTKEngine$WidgetType, "HSCROLL_BAR_BUTTON_LEFT"_s, 14));
	$assignStatic(GTKEngine$WidgetType::HSCROLL_BAR_BUTTON_RIGHT, $new(GTKEngine$WidgetType, "HSCROLL_BAR_BUTTON_RIGHT"_s, 15));
	$assignStatic(GTKEngine$WidgetType::HSCROLL_BAR_TRACK, $new(GTKEngine$WidgetType, "HSCROLL_BAR_TRACK"_s, 16));
	$assignStatic(GTKEngine$WidgetType::HSCROLL_BAR_THUMB, $new(GTKEngine$WidgetType, "HSCROLL_BAR_THUMB"_s, 17));
	$assignStatic(GTKEngine$WidgetType::HSEPARATOR, $new(GTKEngine$WidgetType, "HSEPARATOR"_s, 18));
	$assignStatic(GTKEngine$WidgetType::HSLIDER, $new(GTKEngine$WidgetType, "HSLIDER"_s, 19));
	$assignStatic(GTKEngine$WidgetType::HSLIDER_TRACK, $new(GTKEngine$WidgetType, "HSLIDER_TRACK"_s, 20));
	$assignStatic(GTKEngine$WidgetType::HSLIDER_THUMB, $new(GTKEngine$WidgetType, "HSLIDER_THUMB"_s, 21));
	$assignStatic(GTKEngine$WidgetType::HSPLIT_PANE_DIVIDER, $new(GTKEngine$WidgetType, "HSPLIT_PANE_DIVIDER"_s, 22));
	$assignStatic(GTKEngine$WidgetType::INTERNAL_FRAME, $new(GTKEngine$WidgetType, "INTERNAL_FRAME"_s, 23));
	$assignStatic(GTKEngine$WidgetType::INTERNAL_FRAME_TITLE_PANE, $new(GTKEngine$WidgetType, "INTERNAL_FRAME_TITLE_PANE"_s, 24));
	$assignStatic(GTKEngine$WidgetType::IMAGE, $new(GTKEngine$WidgetType, "IMAGE"_s, 25));
	$assignStatic(GTKEngine$WidgetType::LABEL, $new(GTKEngine$WidgetType, "LABEL"_s, 26));
	$assignStatic(GTKEngine$WidgetType::LIST, $new(GTKEngine$WidgetType, "LIST"_s, 27));
	$assignStatic(GTKEngine$WidgetType::MENU, $new(GTKEngine$WidgetType, "MENU"_s, 28));
	$assignStatic(GTKEngine$WidgetType::MENU_BAR, $new(GTKEngine$WidgetType, "MENU_BAR"_s, 29));
	$assignStatic(GTKEngine$WidgetType::MENU_ITEM, $new(GTKEngine$WidgetType, "MENU_ITEM"_s, 30));
	$assignStatic(GTKEngine$WidgetType::MENU_ITEM_ACCELERATOR, $new(GTKEngine$WidgetType, "MENU_ITEM_ACCELERATOR"_s, 31));
	$assignStatic(GTKEngine$WidgetType::OPTION_PANE, $new(GTKEngine$WidgetType, "OPTION_PANE"_s, 32));
	$assignStatic(GTKEngine$WidgetType::PANEL, $new(GTKEngine$WidgetType, "PANEL"_s, 33));
	$assignStatic(GTKEngine$WidgetType::PASSWORD_FIELD, $new(GTKEngine$WidgetType, "PASSWORD_FIELD"_s, 34));
	$assignStatic(GTKEngine$WidgetType::POPUP_MENU, $new(GTKEngine$WidgetType, "POPUP_MENU"_s, 35));
	$assignStatic(GTKEngine$WidgetType::POPUP_MENU_SEPARATOR, $new(GTKEngine$WidgetType, "POPUP_MENU_SEPARATOR"_s, 36));
	$assignStatic(GTKEngine$WidgetType::RADIO_BUTTON, $new(GTKEngine$WidgetType, "RADIO_BUTTON"_s, 37));
	$assignStatic(GTKEngine$WidgetType::RADIO_BUTTON_MENU_ITEM, $new(GTKEngine$WidgetType, "RADIO_BUTTON_MENU_ITEM"_s, 38));
	$assignStatic(GTKEngine$WidgetType::ROOT_PANE, $new(GTKEngine$WidgetType, "ROOT_PANE"_s, 39));
	$assignStatic(GTKEngine$WidgetType::SCROLL_PANE, $new(GTKEngine$WidgetType, "SCROLL_PANE"_s, 40));
	$assignStatic(GTKEngine$WidgetType::SPINNER, $new(GTKEngine$WidgetType, "SPINNER"_s, 41));
	$assignStatic(GTKEngine$WidgetType::SPINNER_ARROW_BUTTON, $new(GTKEngine$WidgetType, "SPINNER_ARROW_BUTTON"_s, 42));
	$assignStatic(GTKEngine$WidgetType::SPINNER_TEXT_FIELD, $new(GTKEngine$WidgetType, "SPINNER_TEXT_FIELD"_s, 43));
	$assignStatic(GTKEngine$WidgetType::SPLIT_PANE, $new(GTKEngine$WidgetType, "SPLIT_PANE"_s, 44));
	$assignStatic(GTKEngine$WidgetType::TABBED_PANE, $new(GTKEngine$WidgetType, "TABBED_PANE"_s, 45));
	$assignStatic(GTKEngine$WidgetType::TABBED_PANE_TAB_AREA, $new(GTKEngine$WidgetType, "TABBED_PANE_TAB_AREA"_s, 46));
	$assignStatic(GTKEngine$WidgetType::TABBED_PANE_CONTENT, $new(GTKEngine$WidgetType, "TABBED_PANE_CONTENT"_s, 47));
	$assignStatic(GTKEngine$WidgetType::TABBED_PANE_TAB, $new(GTKEngine$WidgetType, "TABBED_PANE_TAB"_s, 48));
	$assignStatic(GTKEngine$WidgetType::TABLE, $new(GTKEngine$WidgetType, "TABLE"_s, 49));
	$assignStatic(GTKEngine$WidgetType::TABLE_HEADER, $new(GTKEngine$WidgetType, "TABLE_HEADER"_s, 50));
	$assignStatic(GTKEngine$WidgetType::TEXT_AREA, $new(GTKEngine$WidgetType, "TEXT_AREA"_s, 51));
	$assignStatic(GTKEngine$WidgetType::TEXT_FIELD, $new(GTKEngine$WidgetType, "TEXT_FIELD"_s, 52));
	$assignStatic(GTKEngine$WidgetType::TEXT_PANE, $new(GTKEngine$WidgetType, "TEXT_PANE"_s, 53));
	$assignStatic(GTKEngine$WidgetType::TITLED_BORDER, $new(GTKEngine$WidgetType, "TITLED_BORDER"_s, 54));
	$assignStatic(GTKEngine$WidgetType::TOGGLE_BUTTON, $new(GTKEngine$WidgetType, "TOGGLE_BUTTON"_s, 55));
	$assignStatic(GTKEngine$WidgetType::TOOL_BAR, $new(GTKEngine$WidgetType, "TOOL_BAR"_s, 56));
	$assignStatic(GTKEngine$WidgetType::TOOL_BAR_DRAG_WINDOW, $new(GTKEngine$WidgetType, "TOOL_BAR_DRAG_WINDOW"_s, 57));
	$assignStatic(GTKEngine$WidgetType::TOOL_BAR_SEPARATOR, $new(GTKEngine$WidgetType, "TOOL_BAR_SEPARATOR"_s, 58));
	$assignStatic(GTKEngine$WidgetType::TOOL_TIP, $new(GTKEngine$WidgetType, "TOOL_TIP"_s, 59));
	$assignStatic(GTKEngine$WidgetType::TREE, $new(GTKEngine$WidgetType, "TREE"_s, 60));
	$assignStatic(GTKEngine$WidgetType::TREE_CELL, $new(GTKEngine$WidgetType, "TREE_CELL"_s, 61));
	$assignStatic(GTKEngine$WidgetType::VIEWPORT, $new(GTKEngine$WidgetType, "VIEWPORT"_s, 62));
	$assignStatic(GTKEngine$WidgetType::VPROGRESS_BAR, $new(GTKEngine$WidgetType, "VPROGRESS_BAR"_s, 63));
	$assignStatic(GTKEngine$WidgetType::VSCROLL_BAR, $new(GTKEngine$WidgetType, "VSCROLL_BAR"_s, 64));
	$assignStatic(GTKEngine$WidgetType::VSCROLL_BAR_BUTTON_UP, $new(GTKEngine$WidgetType, "VSCROLL_BAR_BUTTON_UP"_s, 65));
	$assignStatic(GTKEngine$WidgetType::VSCROLL_BAR_BUTTON_DOWN, $new(GTKEngine$WidgetType, "VSCROLL_BAR_BUTTON_DOWN"_s, 66));
	$assignStatic(GTKEngine$WidgetType::VSCROLL_BAR_TRACK, $new(GTKEngine$WidgetType, "VSCROLL_BAR_TRACK"_s, 67));
	$assignStatic(GTKEngine$WidgetType::VSCROLL_BAR_THUMB, $new(GTKEngine$WidgetType, "VSCROLL_BAR_THUMB"_s, 68));
	$assignStatic(GTKEngine$WidgetType::VSEPARATOR, $new(GTKEngine$WidgetType, "VSEPARATOR"_s, 69));
	$assignStatic(GTKEngine$WidgetType::VSLIDER, $new(GTKEngine$WidgetType, "VSLIDER"_s, 70));
	$assignStatic(GTKEngine$WidgetType::VSLIDER_TRACK, $new(GTKEngine$WidgetType, "VSLIDER_TRACK"_s, 71));
	$assignStatic(GTKEngine$WidgetType::VSLIDER_THUMB, $new(GTKEngine$WidgetType, "VSLIDER_THUMB"_s, 72));
	$assignStatic(GTKEngine$WidgetType::VSPLIT_PANE_DIVIDER, $new(GTKEngine$WidgetType, "VSPLIT_PANE_DIVIDER"_s, 73));
	$assignStatic(GTKEngine$WidgetType::$VALUES, GTKEngine$WidgetType::$values());
}

GTKEngine$WidgetType::GTKEngine$WidgetType() {
}

$Class* GTKEngine$WidgetType::load$($String* name, bool initialize) {
	$loadClass(GTKEngine$WidgetType, name, initialize, &_GTKEngine$WidgetType_ClassInfo_, clinit$GTKEngine$WidgetType, allocate$GTKEngine$WidgetType);
	return class$;
}

$Class* GTKEngine$WidgetType::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com