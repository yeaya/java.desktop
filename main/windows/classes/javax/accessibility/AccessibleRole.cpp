#include <javax/accessibility/AccessibleRole.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleBundle.h>
#include <jcpp.h>

#undef ALERT
#undef AWT_COMPONENT
#undef CANVAS
#undef CHECK_BOX
#undef COLOR_CHOOSER
#undef COLUMN_HEADER
#undef COMBO_BOX
#undef DATE_EDITOR
#undef DESKTOP_ICON
#undef DESKTOP_PANE
#undef DIALOG
#undef DIRECTORY_PANE
#undef EDITBAR
#undef FILE_CHOOSER
#undef FILLER
#undef FONT_CHOOSER
#undef FOOTER
#undef FRAME
#undef GLASS_PANE
#undef GROUP_BOX
#undef HEADER
#undef HTML_CONTAINER
#undef HYPERLINK
#undef ICON
#undef INTERNAL_FRAME
#undef LABEL
#undef LAYERED_PANE
#undef LIST
#undef LIST_ITEM
#undef MENU
#undef MENU_BAR
#undef MENU_ITEM
#undef OPTION_PANE
#undef PAGE_TAB
#undef PAGE_TAB_LIST
#undef PANEL
#undef PARAGRAPH
#undef PASSWORD_TEXT
#undef POPUP_MENU
#undef PROGRESS_BAR
#undef PROGRESS_MONITOR
#undef PUSH_BUTTON
#undef RADIO_BUTTON
#undef ROOT_PANE
#undef ROW_HEADER
#undef RULER
#undef SCROLL_BAR
#undef SCROLL_PANE
#undef SEPARATOR
#undef SLIDER
#undef SPIN_BOX
#undef SPLIT_PANE
#undef STATUS_BAR
#undef SWING_COMPONENT
#undef TABLE
#undef TEXT
#undef TOGGLE_BUTTON
#undef TOOL_BAR
#undef TOOL_TIP
#undef TREE
#undef UNKNOWN
#undef VIEWPORT
#undef WINDOW

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleBundle = ::javax::accessibility::AccessibleBundle;

namespace javax {
	namespace accessibility {

$FieldInfo _AccessibleRole_FieldInfo_[] = {
	{"ALERT", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, ALERT)},
	{"COLUMN_HEADER", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, COLUMN_HEADER)},
	{"CANVAS", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, CANVAS)},
	{"COMBO_BOX", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, COMBO_BOX)},
	{"DESKTOP_ICON", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, DESKTOP_ICON)},
	{"HTML_CONTAINER", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, HTML_CONTAINER)},
	{"INTERNAL_FRAME", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, INTERNAL_FRAME)},
	{"DESKTOP_PANE", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, DESKTOP_PANE)},
	{"OPTION_PANE", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, OPTION_PANE)},
	{"WINDOW", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, WINDOW)},
	{"FRAME", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, FRAME)},
	{"DIALOG", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, DIALOG)},
	{"COLOR_CHOOSER", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, COLOR_CHOOSER)},
	{"DIRECTORY_PANE", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, DIRECTORY_PANE)},
	{"FILE_CHOOSER", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, FILE_CHOOSER)},
	{"FILLER", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, FILLER)},
	{"HYPERLINK", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, HYPERLINK)},
	{"ICON", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, ICON)},
	{"LABEL", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, LABEL)},
	{"ROOT_PANE", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, ROOT_PANE)},
	{"GLASS_PANE", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, GLASS_PANE)},
	{"LAYERED_PANE", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, LAYERED_PANE)},
	{"LIST", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, LIST)},
	{"LIST_ITEM", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, LIST_ITEM)},
	{"MENU_BAR", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, MENU_BAR)},
	{"POPUP_MENU", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, POPUP_MENU)},
	{"MENU", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, MENU)},
	{"MENU_ITEM", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, MENU_ITEM)},
	{"SEPARATOR", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, SEPARATOR)},
	{"PAGE_TAB_LIST", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, PAGE_TAB_LIST)},
	{"PAGE_TAB", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, PAGE_TAB)},
	{"PANEL", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, PANEL)},
	{"PROGRESS_BAR", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, PROGRESS_BAR)},
	{"PASSWORD_TEXT", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, PASSWORD_TEXT)},
	{"PUSH_BUTTON", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, PUSH_BUTTON)},
	{"TOGGLE_BUTTON", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, TOGGLE_BUTTON)},
	{"CHECK_BOX", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, CHECK_BOX)},
	{"RADIO_BUTTON", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, RADIO_BUTTON)},
	{"ROW_HEADER", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, ROW_HEADER)},
	{"SCROLL_PANE", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, SCROLL_PANE)},
	{"SCROLL_BAR", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, SCROLL_BAR)},
	{"VIEWPORT", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, VIEWPORT)},
	{"SLIDER", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, SLIDER)},
	{"SPLIT_PANE", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, SPLIT_PANE)},
	{"TABLE", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, TABLE)},
	{"TEXT", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, TEXT)},
	{"TREE", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, TREE)},
	{"TOOL_BAR", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, TOOL_BAR)},
	{"TOOL_TIP", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, TOOL_TIP)},
	{"AWT_COMPONENT", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, AWT_COMPONENT)},
	{"SWING_COMPONENT", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, SWING_COMPONENT)},
	{"UNKNOWN", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, UNKNOWN)},
	{"STATUS_BAR", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, STATUS_BAR)},
	{"DATE_EDITOR", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, DATE_EDITOR)},
	{"SPIN_BOX", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, SPIN_BOX)},
	{"FONT_CHOOSER", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, FONT_CHOOSER)},
	{"GROUP_BOX", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, GROUP_BOX)},
	{"HEADER", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, HEADER)},
	{"FOOTER", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, FOOTER)},
	{"PARAGRAPH", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, PARAGRAPH)},
	{"RULER", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, RULER)},
	{"EDITBAR", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, EDITBAR)},
	{"PROGRESS_MONITOR", "Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AccessibleRole, PROGRESS_MONITOR)},
	{}
};

$MethodInfo _AccessibleRole_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(AccessibleRole::*)($String*)>(&AccessibleRole::init$))},
	{}
};

$ClassInfo _AccessibleRole_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.accessibility.AccessibleRole",
	"javax.accessibility.AccessibleBundle",
	nullptr,
	_AccessibleRole_FieldInfo_,
	_AccessibleRole_MethodInfo_
};

$Object* allocate$AccessibleRole($Class* clazz) {
	return $of($alloc(AccessibleRole));
}


AccessibleRole* AccessibleRole::ALERT = nullptr;

AccessibleRole* AccessibleRole::COLUMN_HEADER = nullptr;

AccessibleRole* AccessibleRole::CANVAS = nullptr;

AccessibleRole* AccessibleRole::COMBO_BOX = nullptr;

AccessibleRole* AccessibleRole::DESKTOP_ICON = nullptr;

AccessibleRole* AccessibleRole::HTML_CONTAINER = nullptr;

AccessibleRole* AccessibleRole::INTERNAL_FRAME = nullptr;

AccessibleRole* AccessibleRole::DESKTOP_PANE = nullptr;

AccessibleRole* AccessibleRole::OPTION_PANE = nullptr;

AccessibleRole* AccessibleRole::WINDOW = nullptr;

AccessibleRole* AccessibleRole::FRAME = nullptr;

AccessibleRole* AccessibleRole::DIALOG = nullptr;

AccessibleRole* AccessibleRole::COLOR_CHOOSER = nullptr;

AccessibleRole* AccessibleRole::DIRECTORY_PANE = nullptr;

AccessibleRole* AccessibleRole::FILE_CHOOSER = nullptr;

AccessibleRole* AccessibleRole::FILLER = nullptr;

AccessibleRole* AccessibleRole::HYPERLINK = nullptr;

AccessibleRole* AccessibleRole::ICON = nullptr;

AccessibleRole* AccessibleRole::LABEL = nullptr;

AccessibleRole* AccessibleRole::ROOT_PANE = nullptr;

AccessibleRole* AccessibleRole::GLASS_PANE = nullptr;

AccessibleRole* AccessibleRole::LAYERED_PANE = nullptr;

AccessibleRole* AccessibleRole::LIST = nullptr;

AccessibleRole* AccessibleRole::LIST_ITEM = nullptr;

AccessibleRole* AccessibleRole::MENU_BAR = nullptr;

AccessibleRole* AccessibleRole::POPUP_MENU = nullptr;

AccessibleRole* AccessibleRole::MENU = nullptr;

AccessibleRole* AccessibleRole::MENU_ITEM = nullptr;

AccessibleRole* AccessibleRole::SEPARATOR = nullptr;

AccessibleRole* AccessibleRole::PAGE_TAB_LIST = nullptr;

AccessibleRole* AccessibleRole::PAGE_TAB = nullptr;

AccessibleRole* AccessibleRole::PANEL = nullptr;

AccessibleRole* AccessibleRole::PROGRESS_BAR = nullptr;

AccessibleRole* AccessibleRole::PASSWORD_TEXT = nullptr;

AccessibleRole* AccessibleRole::PUSH_BUTTON = nullptr;

AccessibleRole* AccessibleRole::TOGGLE_BUTTON = nullptr;

AccessibleRole* AccessibleRole::CHECK_BOX = nullptr;

AccessibleRole* AccessibleRole::RADIO_BUTTON = nullptr;

AccessibleRole* AccessibleRole::ROW_HEADER = nullptr;

AccessibleRole* AccessibleRole::SCROLL_PANE = nullptr;

AccessibleRole* AccessibleRole::SCROLL_BAR = nullptr;

AccessibleRole* AccessibleRole::VIEWPORT = nullptr;

AccessibleRole* AccessibleRole::SLIDER = nullptr;

AccessibleRole* AccessibleRole::SPLIT_PANE = nullptr;

AccessibleRole* AccessibleRole::TABLE = nullptr;

AccessibleRole* AccessibleRole::TEXT = nullptr;

AccessibleRole* AccessibleRole::TREE = nullptr;

AccessibleRole* AccessibleRole::TOOL_BAR = nullptr;

AccessibleRole* AccessibleRole::TOOL_TIP = nullptr;

AccessibleRole* AccessibleRole::AWT_COMPONENT = nullptr;

AccessibleRole* AccessibleRole::SWING_COMPONENT = nullptr;

AccessibleRole* AccessibleRole::UNKNOWN = nullptr;

AccessibleRole* AccessibleRole::STATUS_BAR = nullptr;

AccessibleRole* AccessibleRole::DATE_EDITOR = nullptr;

AccessibleRole* AccessibleRole::SPIN_BOX = nullptr;

AccessibleRole* AccessibleRole::FONT_CHOOSER = nullptr;

AccessibleRole* AccessibleRole::GROUP_BOX = nullptr;

AccessibleRole* AccessibleRole::HEADER = nullptr;

AccessibleRole* AccessibleRole::FOOTER = nullptr;

AccessibleRole* AccessibleRole::PARAGRAPH = nullptr;

AccessibleRole* AccessibleRole::RULER = nullptr;

AccessibleRole* AccessibleRole::EDITBAR = nullptr;

AccessibleRole* AccessibleRole::PROGRESS_MONITOR = nullptr;

void AccessibleRole::init$($String* key) {
	$AccessibleBundle::init$();
	$set(this, key, key);
}

void clinit$AccessibleRole($Class* class$) {
	$assignStatic(AccessibleRole::ALERT, $new(AccessibleRole, "alert"_s));
	$assignStatic(AccessibleRole::COLUMN_HEADER, $new(AccessibleRole, "columnheader"_s));
	$assignStatic(AccessibleRole::CANVAS, $new(AccessibleRole, "canvas"_s));
	$assignStatic(AccessibleRole::COMBO_BOX, $new(AccessibleRole, "combobox"_s));
	$assignStatic(AccessibleRole::DESKTOP_ICON, $new(AccessibleRole, "desktopicon"_s));
	$assignStatic(AccessibleRole::HTML_CONTAINER, $new(AccessibleRole, "htmlcontainer"_s));
	$assignStatic(AccessibleRole::INTERNAL_FRAME, $new(AccessibleRole, "internalframe"_s));
	$assignStatic(AccessibleRole::DESKTOP_PANE, $new(AccessibleRole, "desktoppane"_s));
	$assignStatic(AccessibleRole::OPTION_PANE, $new(AccessibleRole, "optionpane"_s));
	$assignStatic(AccessibleRole::WINDOW, $new(AccessibleRole, "window"_s));
	$assignStatic(AccessibleRole::FRAME, $new(AccessibleRole, "frame"_s));
	$assignStatic(AccessibleRole::DIALOG, $new(AccessibleRole, "dialog"_s));
	$assignStatic(AccessibleRole::COLOR_CHOOSER, $new(AccessibleRole, "colorchooser"_s));
	$assignStatic(AccessibleRole::DIRECTORY_PANE, $new(AccessibleRole, "directorypane"_s));
	$assignStatic(AccessibleRole::FILE_CHOOSER, $new(AccessibleRole, "filechooser"_s));
	$assignStatic(AccessibleRole::FILLER, $new(AccessibleRole, "filler"_s));
	$assignStatic(AccessibleRole::HYPERLINK, $new(AccessibleRole, "hyperlink"_s));
	$assignStatic(AccessibleRole::ICON, $new(AccessibleRole, "icon"_s));
	$assignStatic(AccessibleRole::LABEL, $new(AccessibleRole, "label"_s));
	$assignStatic(AccessibleRole::ROOT_PANE, $new(AccessibleRole, "rootpane"_s));
	$assignStatic(AccessibleRole::GLASS_PANE, $new(AccessibleRole, "glasspane"_s));
	$assignStatic(AccessibleRole::LAYERED_PANE, $new(AccessibleRole, "layeredpane"_s));
	$assignStatic(AccessibleRole::LIST, $new(AccessibleRole, "list"_s));
	$assignStatic(AccessibleRole::LIST_ITEM, $new(AccessibleRole, "listitem"_s));
	$assignStatic(AccessibleRole::MENU_BAR, $new(AccessibleRole, "menubar"_s));
	$assignStatic(AccessibleRole::POPUP_MENU, $new(AccessibleRole, "popupmenu"_s));
	$assignStatic(AccessibleRole::MENU, $new(AccessibleRole, "menu"_s));
	$assignStatic(AccessibleRole::MENU_ITEM, $new(AccessibleRole, "menuitem"_s));
	$assignStatic(AccessibleRole::SEPARATOR, $new(AccessibleRole, "separator"_s));
	$assignStatic(AccessibleRole::PAGE_TAB_LIST, $new(AccessibleRole, "pagetablist"_s));
	$assignStatic(AccessibleRole::PAGE_TAB, $new(AccessibleRole, "pagetab"_s));
	$assignStatic(AccessibleRole::PANEL, $new(AccessibleRole, "panel"_s));
	$assignStatic(AccessibleRole::PROGRESS_BAR, $new(AccessibleRole, "progressbar"_s));
	$assignStatic(AccessibleRole::PASSWORD_TEXT, $new(AccessibleRole, "passwordtext"_s));
	$assignStatic(AccessibleRole::PUSH_BUTTON, $new(AccessibleRole, "pushbutton"_s));
	$assignStatic(AccessibleRole::TOGGLE_BUTTON, $new(AccessibleRole, "togglebutton"_s));
	$assignStatic(AccessibleRole::CHECK_BOX, $new(AccessibleRole, "checkbox"_s));
	$assignStatic(AccessibleRole::RADIO_BUTTON, $new(AccessibleRole, "radiobutton"_s));
	$assignStatic(AccessibleRole::ROW_HEADER, $new(AccessibleRole, "rowheader"_s));
	$assignStatic(AccessibleRole::SCROLL_PANE, $new(AccessibleRole, "scrollpane"_s));
	$assignStatic(AccessibleRole::SCROLL_BAR, $new(AccessibleRole, "scrollbar"_s));
	$assignStatic(AccessibleRole::VIEWPORT, $new(AccessibleRole, "viewport"_s));
	$assignStatic(AccessibleRole::SLIDER, $new(AccessibleRole, "slider"_s));
	$assignStatic(AccessibleRole::SPLIT_PANE, $new(AccessibleRole, "splitpane"_s));
	$assignStatic(AccessibleRole::TABLE, $new(AccessibleRole, "table"_s));
	$assignStatic(AccessibleRole::TEXT, $new(AccessibleRole, "text"_s));
	$assignStatic(AccessibleRole::TREE, $new(AccessibleRole, "tree"_s));
	$assignStatic(AccessibleRole::TOOL_BAR, $new(AccessibleRole, "toolbar"_s));
	$assignStatic(AccessibleRole::TOOL_TIP, $new(AccessibleRole, "tooltip"_s));
	$assignStatic(AccessibleRole::AWT_COMPONENT, $new(AccessibleRole, "awtcomponent"_s));
	$assignStatic(AccessibleRole::SWING_COMPONENT, $new(AccessibleRole, "swingcomponent"_s));
	$assignStatic(AccessibleRole::UNKNOWN, $new(AccessibleRole, "unknown"_s));
	$assignStatic(AccessibleRole::STATUS_BAR, $new(AccessibleRole, "statusbar"_s));
	$assignStatic(AccessibleRole::DATE_EDITOR, $new(AccessibleRole, "dateeditor"_s));
	$assignStatic(AccessibleRole::SPIN_BOX, $new(AccessibleRole, "spinbox"_s));
	$assignStatic(AccessibleRole::FONT_CHOOSER, $new(AccessibleRole, "fontchooser"_s));
	$assignStatic(AccessibleRole::GROUP_BOX, $new(AccessibleRole, "groupbox"_s));
	$assignStatic(AccessibleRole::HEADER, $new(AccessibleRole, "header"_s));
	$assignStatic(AccessibleRole::FOOTER, $new(AccessibleRole, "footer"_s));
	$assignStatic(AccessibleRole::PARAGRAPH, $new(AccessibleRole, "paragraph"_s));
	$assignStatic(AccessibleRole::RULER, $new(AccessibleRole, "ruler"_s));
	$assignStatic(AccessibleRole::EDITBAR, $new(AccessibleRole, "editbar"_s));
	$assignStatic(AccessibleRole::PROGRESS_MONITOR, $new(AccessibleRole, "progressMonitor"_s));
}

AccessibleRole::AccessibleRole() {
}

$Class* AccessibleRole::load$($String* name, bool initialize) {
	$loadClass(AccessibleRole, name, initialize, &_AccessibleRole_ClassInfo_, clinit$AccessibleRole, allocate$AccessibleRole);
	return class$;
}

$Class* AccessibleRole::class$ = nullptr;

	} // accessibility
} // javax