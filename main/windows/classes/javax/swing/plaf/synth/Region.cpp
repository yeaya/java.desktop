#include <javax/swing/plaf/synth/Region.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/UIDefaults.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef ARROW_BUTTON
#undef BUTTON
#undef CHECK_BOX
#undef CHECK_BOX_MENU_ITEM
#undef COLOR_CHOOSER
#undef COMBO_BOX
#undef DESKTOP_ICON
#undef DESKTOP_PANE
#undef EDITOR_PANE
#undef ENGLISH
#undef FILE_CHOOSER
#undef FORMATTED_TEXT_FIELD
#undef INTERNAL_FRAME
#undef INTERNAL_FRAME_TITLE_PANE
#undef LABEL
#undef LIST
#undef LOWER_CASE_NAME_MAP_KEY
#undef MENU
#undef MENU_BAR
#undef MENU_ITEM
#undef MENU_ITEM_ACCELERATOR
#undef OPTION_PANE
#undef PANEL
#undef PASSWORD_FIELD
#undef POPUP_MENU
#undef POPUP_MENU_SEPARATOR
#undef PROGRESS_BAR
#undef RADIO_BUTTON
#undef RADIO_BUTTON_MENU_ITEM
#undef ROOT_PANE
#undef SCROLL_BAR
#undef SCROLL_BAR_THUMB
#undef SCROLL_BAR_TRACK
#undef SCROLL_PANE
#undef SEPARATOR
#undef SLIDER
#undef SLIDER_THUMB
#undef SLIDER_TRACK
#undef SPINNER
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
#undef TOGGLE_BUTTON
#undef TOOL_BAR
#undef TOOL_BAR_CONTENT
#undef TOOL_BAR_DRAG_WINDOW
#undef TOOL_BAR_SEPARATOR
#undef TOOL_TIP
#undef TREE
#undef TREE_CELL
#undef UI_TO_REGION_MAP_KEY
#undef VIEWPORT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $JComponent = ::javax::swing::JComponent;
using $UIDefaults = ::javax::swing::UIDefaults;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _Region_FieldInfo_[] = {
	{"UI_TO_REGION_MAP_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Region, UI_TO_REGION_MAP_KEY)},
	{"LOWER_CASE_NAME_MAP_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Region, LOWER_CASE_NAME_MAP_KEY)},
	{"ARROW_BUTTON", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, ARROW_BUTTON)},
	{"BUTTON", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, BUTTON)},
	{"CHECK_BOX", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, CHECK_BOX)},
	{"CHECK_BOX_MENU_ITEM", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, CHECK_BOX_MENU_ITEM)},
	{"COLOR_CHOOSER", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, COLOR_CHOOSER)},
	{"COMBO_BOX", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, COMBO_BOX)},
	{"DESKTOP_PANE", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, DESKTOP_PANE)},
	{"DESKTOP_ICON", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, DESKTOP_ICON)},
	{"EDITOR_PANE", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, EDITOR_PANE)},
	{"FILE_CHOOSER", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, FILE_CHOOSER)},
	{"FORMATTED_TEXT_FIELD", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, FORMATTED_TEXT_FIELD)},
	{"INTERNAL_FRAME", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, INTERNAL_FRAME)},
	{"INTERNAL_FRAME_TITLE_PANE", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, INTERNAL_FRAME_TITLE_PANE)},
	{"LABEL", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, LABEL)},
	{"LIST", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, LIST)},
	{"MENU", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, MENU)},
	{"MENU_BAR", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, MENU_BAR)},
	{"MENU_ITEM", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, MENU_ITEM)},
	{"MENU_ITEM_ACCELERATOR", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, MENU_ITEM_ACCELERATOR)},
	{"OPTION_PANE", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, OPTION_PANE)},
	{"PANEL", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, PANEL)},
	{"PASSWORD_FIELD", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, PASSWORD_FIELD)},
	{"POPUP_MENU", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, POPUP_MENU)},
	{"POPUP_MENU_SEPARATOR", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, POPUP_MENU_SEPARATOR)},
	{"PROGRESS_BAR", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, PROGRESS_BAR)},
	{"RADIO_BUTTON", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, RADIO_BUTTON)},
	{"RADIO_BUTTON_MENU_ITEM", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, RADIO_BUTTON_MENU_ITEM)},
	{"ROOT_PANE", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, ROOT_PANE)},
	{"SCROLL_BAR", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, SCROLL_BAR)},
	{"SCROLL_BAR_TRACK", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, SCROLL_BAR_TRACK)},
	{"SCROLL_BAR_THUMB", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, SCROLL_BAR_THUMB)},
	{"SCROLL_PANE", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, SCROLL_PANE)},
	{"SEPARATOR", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, SEPARATOR)},
	{"SLIDER", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, SLIDER)},
	{"SLIDER_TRACK", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, SLIDER_TRACK)},
	{"SLIDER_THUMB", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, SLIDER_THUMB)},
	{"SPINNER", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, SPINNER)},
	{"SPLIT_PANE", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, SPLIT_PANE)},
	{"SPLIT_PANE_DIVIDER", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, SPLIT_PANE_DIVIDER)},
	{"TABBED_PANE", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, TABBED_PANE)},
	{"TABBED_PANE_TAB", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, TABBED_PANE_TAB)},
	{"TABBED_PANE_TAB_AREA", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, TABBED_PANE_TAB_AREA)},
	{"TABBED_PANE_CONTENT", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, TABBED_PANE_CONTENT)},
	{"TABLE", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, TABLE)},
	{"TABLE_HEADER", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, TABLE_HEADER)},
	{"TEXT_AREA", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, TEXT_AREA)},
	{"TEXT_FIELD", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, TEXT_FIELD)},
	{"TEXT_PANE", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, TEXT_PANE)},
	{"TOGGLE_BUTTON", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, TOGGLE_BUTTON)},
	{"TOOL_BAR", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, TOOL_BAR)},
	{"TOOL_BAR_CONTENT", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, TOOL_BAR_CONTENT)},
	{"TOOL_BAR_DRAG_WINDOW", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, TOOL_BAR_DRAG_WINDOW)},
	{"TOOL_TIP", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, TOOL_TIP)},
	{"TOOL_BAR_SEPARATOR", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, TOOL_BAR_SEPARATOR)},
	{"TREE", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, TREE)},
	{"TREE_CELL", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, TREE_CELL)},
	{"VIEWPORT", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Region, VIEWPORT)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Region, name)},
	{"subregion", "Z", nullptr, $PRIVATE | $FINAL, $field(Region, subregion)},
	{}
};

$MethodInfo _Region_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(static_cast<void(Region::*)($String*,bool)>(&Region::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PROTECTED, $method(static_cast<void(Region::*)($String*,$String*,bool)>(&Region::init$))},
	{"getLowerCaseName", "()Ljava/lang/String;", nullptr, 0},
	{"getLowerCaseNameMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljavax/swing/plaf/synth/Region;Ljava/lang/String;>;", $PRIVATE | $STATIC, $method(static_cast<$Map*(*)()>(&Region::getLowerCaseNameMap))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRegion", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/Region;", nullptr, $STATIC, $method(static_cast<Region*(*)($JComponent*)>(&Region::getRegion))},
	{"getUItoRegionMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljavax/swing/plaf/synth/Region;>;", $PRIVATE | $STATIC, $method(static_cast<$Map*(*)()>(&Region::getUItoRegionMap))},
	{"isSubregion", "()Z", nullptr, $PUBLIC},
	{"registerUIs", "(Ljavax/swing/UIDefaults;)V", nullptr, $STATIC, $method(static_cast<void(*)($UIDefaults*)>(&Region::registerUIs))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Region_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.Region",
	"java.lang.Object",
	nullptr,
	_Region_FieldInfo_,
	_Region_MethodInfo_
};

$Object* allocate$Region($Class* clazz) {
	return $of($alloc(Region));
}

$Object* Region::UI_TO_REGION_MAP_KEY = nullptr;
$Object* Region::LOWER_CASE_NAME_MAP_KEY = nullptr;

Region* Region::ARROW_BUTTON = nullptr;

Region* Region::BUTTON = nullptr;

Region* Region::CHECK_BOX = nullptr;

Region* Region::CHECK_BOX_MENU_ITEM = nullptr;

Region* Region::COLOR_CHOOSER = nullptr;

Region* Region::COMBO_BOX = nullptr;

Region* Region::DESKTOP_PANE = nullptr;

Region* Region::DESKTOP_ICON = nullptr;

Region* Region::EDITOR_PANE = nullptr;

Region* Region::FILE_CHOOSER = nullptr;

Region* Region::FORMATTED_TEXT_FIELD = nullptr;

Region* Region::INTERNAL_FRAME = nullptr;

Region* Region::INTERNAL_FRAME_TITLE_PANE = nullptr;

Region* Region::LABEL = nullptr;

Region* Region::LIST = nullptr;

Region* Region::MENU = nullptr;

Region* Region::MENU_BAR = nullptr;

Region* Region::MENU_ITEM = nullptr;

Region* Region::MENU_ITEM_ACCELERATOR = nullptr;

Region* Region::OPTION_PANE = nullptr;

Region* Region::PANEL = nullptr;

Region* Region::PASSWORD_FIELD = nullptr;

Region* Region::POPUP_MENU = nullptr;

Region* Region::POPUP_MENU_SEPARATOR = nullptr;

Region* Region::PROGRESS_BAR = nullptr;

Region* Region::RADIO_BUTTON = nullptr;

Region* Region::RADIO_BUTTON_MENU_ITEM = nullptr;

Region* Region::ROOT_PANE = nullptr;

Region* Region::SCROLL_BAR = nullptr;

Region* Region::SCROLL_BAR_TRACK = nullptr;

Region* Region::SCROLL_BAR_THUMB = nullptr;

Region* Region::SCROLL_PANE = nullptr;

Region* Region::SEPARATOR = nullptr;

Region* Region::SLIDER = nullptr;

Region* Region::SLIDER_TRACK = nullptr;

Region* Region::SLIDER_THUMB = nullptr;

Region* Region::SPINNER = nullptr;

Region* Region::SPLIT_PANE = nullptr;

Region* Region::SPLIT_PANE_DIVIDER = nullptr;

Region* Region::TABBED_PANE = nullptr;

Region* Region::TABBED_PANE_TAB = nullptr;

Region* Region::TABBED_PANE_TAB_AREA = nullptr;

Region* Region::TABBED_PANE_CONTENT = nullptr;

Region* Region::TABLE = nullptr;

Region* Region::TABLE_HEADER = nullptr;

Region* Region::TEXT_AREA = nullptr;

Region* Region::TEXT_FIELD = nullptr;

Region* Region::TEXT_PANE = nullptr;

Region* Region::TOGGLE_BUTTON = nullptr;

Region* Region::TOOL_BAR = nullptr;

Region* Region::TOOL_BAR_CONTENT = nullptr;

Region* Region::TOOL_BAR_DRAG_WINDOW = nullptr;

Region* Region::TOOL_TIP = nullptr;

Region* Region::TOOL_BAR_SEPARATOR = nullptr;

Region* Region::TREE = nullptr;

Region* Region::TREE_CELL = nullptr;

Region* Region::VIEWPORT = nullptr;

$Map* Region::getUItoRegionMap() {
	$init(Region);
	$var($AppContext, context, $AppContext::getAppContext());
	$var($Map, map, $cast($Map, $nc(context)->get(Region::UI_TO_REGION_MAP_KEY)));
	if (map == nullptr) {
		$assign(map, $new($HashMap));
		map->put("ArrowButtonUI"_s, Region::ARROW_BUTTON);
		map->put("ButtonUI"_s, Region::BUTTON);
		map->put("CheckBoxUI"_s, Region::CHECK_BOX);
		map->put("CheckBoxMenuItemUI"_s, Region::CHECK_BOX_MENU_ITEM);
		map->put("ColorChooserUI"_s, Region::COLOR_CHOOSER);
		map->put("ComboBoxUI"_s, Region::COMBO_BOX);
		map->put("DesktopPaneUI"_s, Region::DESKTOP_PANE);
		map->put("DesktopIconUI"_s, Region::DESKTOP_ICON);
		map->put("EditorPaneUI"_s, Region::EDITOR_PANE);
		map->put("FileChooserUI"_s, Region::FILE_CHOOSER);
		map->put("FormattedTextFieldUI"_s, Region::FORMATTED_TEXT_FIELD);
		map->put("InternalFrameUI"_s, Region::INTERNAL_FRAME);
		map->put("InternalFrameTitlePaneUI"_s, Region::INTERNAL_FRAME_TITLE_PANE);
		map->put("LabelUI"_s, Region::LABEL);
		map->put("ListUI"_s, Region::LIST);
		map->put("MenuUI"_s, Region::MENU);
		map->put("MenuBarUI"_s, Region::MENU_BAR);
		map->put("MenuItemUI"_s, Region::MENU_ITEM);
		map->put("OptionPaneUI"_s, Region::OPTION_PANE);
		map->put("PanelUI"_s, Region::PANEL);
		map->put("PasswordFieldUI"_s, Region::PASSWORD_FIELD);
		map->put("PopupMenuUI"_s, Region::POPUP_MENU);
		map->put("PopupMenuSeparatorUI"_s, Region::POPUP_MENU_SEPARATOR);
		map->put("ProgressBarUI"_s, Region::PROGRESS_BAR);
		map->put("RadioButtonUI"_s, Region::RADIO_BUTTON);
		map->put("RadioButtonMenuItemUI"_s, Region::RADIO_BUTTON_MENU_ITEM);
		map->put("RootPaneUI"_s, Region::ROOT_PANE);
		map->put("ScrollBarUI"_s, Region::SCROLL_BAR);
		map->put("ScrollPaneUI"_s, Region::SCROLL_PANE);
		map->put("SeparatorUI"_s, Region::SEPARATOR);
		map->put("SliderUI"_s, Region::SLIDER);
		map->put("SpinnerUI"_s, Region::SPINNER);
		map->put("SplitPaneUI"_s, Region::SPLIT_PANE);
		map->put("TabbedPaneUI"_s, Region::TABBED_PANE);
		map->put("TableUI"_s, Region::TABLE);
		map->put("TableHeaderUI"_s, Region::TABLE_HEADER);
		map->put("TextAreaUI"_s, Region::TEXT_AREA);
		map->put("TextFieldUI"_s, Region::TEXT_FIELD);
		map->put("TextPaneUI"_s, Region::TEXT_PANE);
		map->put("ToggleButtonUI"_s, Region::TOGGLE_BUTTON);
		map->put("ToolBarUI"_s, Region::TOOL_BAR);
		map->put("ToolTipUI"_s, Region::TOOL_TIP);
		map->put("ToolBarSeparatorUI"_s, Region::TOOL_BAR_SEPARATOR);
		map->put("TreeUI"_s, Region::TREE);
		map->put("ViewportUI"_s, Region::VIEWPORT);
		context->put(Region::UI_TO_REGION_MAP_KEY, map);
	}
	return map;
}

$Map* Region::getLowerCaseNameMap() {
	$init(Region);
	$var($AppContext, context, $AppContext::getAppContext());
	$var($Map, map, $cast($Map, $nc(context)->get(Region::LOWER_CASE_NAME_MAP_KEY)));
	if (map == nullptr) {
		$assign(map, $new($HashMap));
		context->put(Region::LOWER_CASE_NAME_MAP_KEY, map);
	}
	return map;
}

Region* Region::getRegion($JComponent* c) {
	$init(Region);
	return $cast(Region, $nc($(getUItoRegionMap()))->get($($nc(c)->getUIClassID())));
}

void Region::registerUIs($UIDefaults* table) {
	$init(Region);
	{
		$var($Iterator, i$, $nc($($nc($(getUItoRegionMap()))->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, key, i$->next());
			{
				$nc(table)->put(key, "javax.swing.plaf.synth.SynthLookAndFeel"_s);
			}
		}
	}
}

void Region::init$($String* name, bool subregion) {
	if (name == nullptr) {
		$throwNew($NullPointerException, "You must specify a non-null name"_s);
	}
	$set(this, name, name);
	this->subregion = subregion;
}

void Region::init$($String* name, $String* ui, bool subregion) {
	Region::init$(name, subregion);
	if (ui != nullptr) {
		$nc($(getUItoRegionMap()))->put(ui, this);
	}
}

bool Region::isSubregion() {
	return this->subregion;
}

$String* Region::getName() {
	return this->name;
}

$String* Region::getLowerCaseName() {
	$var($Map, lowerCaseNameMap, getLowerCaseNameMap());
	$var($String, lowerCaseName, $cast($String, $nc(lowerCaseNameMap)->get(this)));
	if (lowerCaseName == nullptr) {
		$init($Locale);
		$assign(lowerCaseName, $nc(this->name)->toLowerCase($Locale::ENGLISH));
		lowerCaseNameMap->put(this, lowerCaseName);
	}
	return lowerCaseName;
}

$String* Region::toString() {
	return this->name;
}

void clinit$Region($Class* class$) {
	$assignStatic(Region::UI_TO_REGION_MAP_KEY, $new($Object));
	$assignStatic(Region::LOWER_CASE_NAME_MAP_KEY, $new($Object));
	$assignStatic(Region::ARROW_BUTTON, $new(Region, "ArrowButton"_s, false));
	$assignStatic(Region::BUTTON, $new(Region, "Button"_s, false));
	$assignStatic(Region::CHECK_BOX, $new(Region, "CheckBox"_s, false));
	$assignStatic(Region::CHECK_BOX_MENU_ITEM, $new(Region, "CheckBoxMenuItem"_s, false));
	$assignStatic(Region::COLOR_CHOOSER, $new(Region, "ColorChooser"_s, false));
	$assignStatic(Region::COMBO_BOX, $new(Region, "ComboBox"_s, false));
	$assignStatic(Region::DESKTOP_PANE, $new(Region, "DesktopPane"_s, false));
	$assignStatic(Region::DESKTOP_ICON, $new(Region, "DesktopIcon"_s, false));
	$assignStatic(Region::EDITOR_PANE, $new(Region, "EditorPane"_s, false));
	$assignStatic(Region::FILE_CHOOSER, $new(Region, "FileChooser"_s, false));
	$assignStatic(Region::FORMATTED_TEXT_FIELD, $new(Region, "FormattedTextField"_s, false));
	$assignStatic(Region::INTERNAL_FRAME, $new(Region, "InternalFrame"_s, false));
	$assignStatic(Region::INTERNAL_FRAME_TITLE_PANE, $new(Region, "InternalFrameTitlePane"_s, false));
	$assignStatic(Region::LABEL, $new(Region, "Label"_s, false));
	$assignStatic(Region::LIST, $new(Region, "List"_s, false));
	$assignStatic(Region::MENU, $new(Region, "Menu"_s, false));
	$assignStatic(Region::MENU_BAR, $new(Region, "MenuBar"_s, false));
	$assignStatic(Region::MENU_ITEM, $new(Region, "MenuItem"_s, false));
	$assignStatic(Region::MENU_ITEM_ACCELERATOR, $new(Region, "MenuItemAccelerator"_s, true));
	$assignStatic(Region::OPTION_PANE, $new(Region, "OptionPane"_s, false));
	$assignStatic(Region::PANEL, $new(Region, "Panel"_s, false));
	$assignStatic(Region::PASSWORD_FIELD, $new(Region, "PasswordField"_s, false));
	$assignStatic(Region::POPUP_MENU, $new(Region, "PopupMenu"_s, false));
	$assignStatic(Region::POPUP_MENU_SEPARATOR, $new(Region, "PopupMenuSeparator"_s, false));
	$assignStatic(Region::PROGRESS_BAR, $new(Region, "ProgressBar"_s, false));
	$assignStatic(Region::RADIO_BUTTON, $new(Region, "RadioButton"_s, false));
	$assignStatic(Region::RADIO_BUTTON_MENU_ITEM, $new(Region, "RadioButtonMenuItem"_s, false));
	$assignStatic(Region::ROOT_PANE, $new(Region, "RootPane"_s, false));
	$assignStatic(Region::SCROLL_BAR, $new(Region, "ScrollBar"_s, false));
	$assignStatic(Region::SCROLL_BAR_TRACK, $new(Region, "ScrollBarTrack"_s, true));
	$assignStatic(Region::SCROLL_BAR_THUMB, $new(Region, "ScrollBarThumb"_s, true));
	$assignStatic(Region::SCROLL_PANE, $new(Region, "ScrollPane"_s, false));
	$assignStatic(Region::SEPARATOR, $new(Region, "Separator"_s, false));
	$assignStatic(Region::SLIDER, $new(Region, "Slider"_s, false));
	$assignStatic(Region::SLIDER_TRACK, $new(Region, "SliderTrack"_s, true));
	$assignStatic(Region::SLIDER_THUMB, $new(Region, "SliderThumb"_s, true));
	$assignStatic(Region::SPINNER, $new(Region, "Spinner"_s, false));
	$assignStatic(Region::SPLIT_PANE, $new(Region, "SplitPane"_s, false));
	$assignStatic(Region::SPLIT_PANE_DIVIDER, $new(Region, "SplitPaneDivider"_s, true));
	$assignStatic(Region::TABBED_PANE, $new(Region, "TabbedPane"_s, false));
	$assignStatic(Region::TABBED_PANE_TAB, $new(Region, "TabbedPaneTab"_s, true));
	$assignStatic(Region::TABBED_PANE_TAB_AREA, $new(Region, "TabbedPaneTabArea"_s, true));
	$assignStatic(Region::TABBED_PANE_CONTENT, $new(Region, "TabbedPaneContent"_s, true));
	$assignStatic(Region::TABLE, $new(Region, "Table"_s, false));
	$assignStatic(Region::TABLE_HEADER, $new(Region, "TableHeader"_s, false));
	$assignStatic(Region::TEXT_AREA, $new(Region, "TextArea"_s, false));
	$assignStatic(Region::TEXT_FIELD, $new(Region, "TextField"_s, false));
	$assignStatic(Region::TEXT_PANE, $new(Region, "TextPane"_s, false));
	$assignStatic(Region::TOGGLE_BUTTON, $new(Region, "ToggleButton"_s, false));
	$assignStatic(Region::TOOL_BAR, $new(Region, "ToolBar"_s, false));
	$assignStatic(Region::TOOL_BAR_CONTENT, $new(Region, "ToolBarContent"_s, true));
	$assignStatic(Region::TOOL_BAR_DRAG_WINDOW, $new(Region, "ToolBarDragWindow"_s, false));
	$assignStatic(Region::TOOL_TIP, $new(Region, "ToolTip"_s, false));
	$assignStatic(Region::TOOL_BAR_SEPARATOR, $new(Region, "ToolBarSeparator"_s, false));
	$assignStatic(Region::TREE, $new(Region, "Tree"_s, false));
	$assignStatic(Region::TREE_CELL, $new(Region, "TreeCell"_s, true));
	$assignStatic(Region::VIEWPORT, $new(Region, "Viewport"_s, false));
}

Region::Region() {
}

$Class* Region::load$($String* name, bool initialize) {
	$loadClass(Region, name, initialize, &_Region_ClassInfo_, clinit$Region, allocate$Region);
	return class$;
}

$Class* Region::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax