#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Control.h>
#include <com/sun/java/swing/plaf/windows/TMSchema.h>
#include <java/awt/Component.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef BP_CHECKBOX
#undef BP_GROUPBOX
#undef BP_PUSHBUTTON
#undef BP_RADIOBUTTON
#undef BUTTON
#undef COMBOBOX
#undef CP_BACKGROUND
#undef CP_BORDER
#undef CP_COMBOBOX
#undef CP_CUEBANNER
#undef CP_DROPDOWNBUTTON
#undef CP_DROPDOWNBUTTONLEFT
#undef CP_DROPDOWNBUTTONRIGHT
#undef CP_READONLY
#undef CP_TRANSPARENTBACKGROUND
#undef EDIT
#undef EP_EDIT
#undef EP_EDITTEXT
#undef HEADER
#undef HP_HEADERITEM
#undef HP_HEADERSORTARROW
#undef LBCP_BORDER_HSCROLL
#undef LBCP_BORDER_HVSCROLL
#undef LBCP_BORDER_NOSCROLL
#undef LBCP_BORDER_VSCROLL
#undef LBCP_ITEM
#undef LBP_LISTBOX
#undef LISTBOX
#undef LISTVIEW
#undef LVP_LISTVIEW
#undef MENU
#undef MP_BARBACKGROUND
#undef MP_BARITEM
#undef MP_POPUPBACKGROUND
#undef MP_POPUPBORDERS
#undef MP_POPUPCHECK
#undef MP_POPUPCHECKBACKGROUND
#undef MP_POPUPGUTTER
#undef MP_POPUPITEM
#undef MP_POPUPSEPARATOR
#undef MP_POPUPSUBMENU
#undef PP_BAR
#undef PP_BARVERT
#undef PP_CHUNK
#undef PP_CHUNKVERT
#undef PP_PROGRESS
#undef PROGRESS
#undef REBAR
#undef RP_GRIPPER
#undef RP_GRIPPERVERT
#undef SBP_ARROWBTN
#undef SBP_GRIPPERHORZ
#undef SBP_GRIPPERVERT
#undef SBP_LOWERTRACKHORZ
#undef SBP_LOWERTRACKVERT
#undef SBP_SCROLLBAR
#undef SBP_SIZEBOX
#undef SBP_THUMBBTNHORZ
#undef SBP_THUMBBTNVERT
#undef SBP_UPPERTRACKHORZ
#undef SBP_UPPERTRACKVERT
#undef SCROLLBAR
#undef SPIN
#undef SPNP_DOWN
#undef SPNP_UP
#undef TAB
#undef TABP_PANE
#undef TABP_TABITEM
#undef TABP_TABITEMLEFTEDGE
#undef TABP_TABITEMRIGHTEDGE
#undef TKP_THUMB
#undef TKP_THUMBBOTTOM
#undef TKP_THUMBLEFT
#undef TKP_THUMBRIGHT
#undef TKP_THUMBTOP
#undef TKP_THUMBVERT
#undef TKP_TICS
#undef TKP_TICSVERT
#undef TKP_TRACK
#undef TKP_TRACKVERT
#undef TOOLBAR
#undef TP_BUTTON
#undef TP_SEPARATOR
#undef TP_SEPARATORVERT
#undef TP_TOOLBAR
#undef TRACKBAR
#undef TREEVIEW
#undef TVP_GLYPH
#undef TVP_TREEVIEW
#undef WINDOW
#undef WP_CAPTION
#undef WP_CLOSEBUTTON
#undef WP_FRAMEBOTTOM
#undef WP_FRAMELEFT
#undef WP_FRAMERIGHT
#undef WP_MAXBUTTON
#undef WP_MAXCAPTION
#undef WP_MDICLOSEBUTTON
#undef WP_MDIMINBUTTON
#undef WP_MDIRESTOREBUTTON
#undef WP_MDISYSBUTTON
#undef WP_MINBUTTON
#undef WP_MINCAPTION
#undef WP_RESTOREBUTTON
#undef WP_SYSBUTTON
#undef WP_WINDOW

using $TMSchema$PartArray = $Array<::com::sun::java::swing::plaf::windows::TMSchema$Part>;
using $TMSchema = ::com::sun::java::swing::plaf::windows::TMSchema;
using $TMSchema$Control = ::com::sun::java::swing::plaf::windows::TMSchema$Control;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _TMSchema$Part_FieldInfo_[] = {
	{"MENU", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, MENU)},
	{"MP_BARBACKGROUND", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, MP_BARBACKGROUND)},
	{"MP_BARITEM", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, MP_BARITEM)},
	{"MP_POPUPBACKGROUND", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, MP_POPUPBACKGROUND)},
	{"MP_POPUPBORDERS", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, MP_POPUPBORDERS)},
	{"MP_POPUPCHECK", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, MP_POPUPCHECK)},
	{"MP_POPUPCHECKBACKGROUND", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, MP_POPUPCHECKBACKGROUND)},
	{"MP_POPUPGUTTER", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, MP_POPUPGUTTER)},
	{"MP_POPUPITEM", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, MP_POPUPITEM)},
	{"MP_POPUPSEPARATOR", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, MP_POPUPSEPARATOR)},
	{"MP_POPUPSUBMENU", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, MP_POPUPSUBMENU)},
	{"BP_PUSHBUTTON", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, BP_PUSHBUTTON)},
	{"BP_RADIOBUTTON", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, BP_RADIOBUTTON)},
	{"BP_CHECKBOX", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, BP_CHECKBOX)},
	{"BP_GROUPBOX", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, BP_GROUPBOX)},
	{"CP_COMBOBOX", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, CP_COMBOBOX)},
	{"CP_DROPDOWNBUTTON", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, CP_DROPDOWNBUTTON)},
	{"CP_BACKGROUND", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, CP_BACKGROUND)},
	{"CP_TRANSPARENTBACKGROUND", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, CP_TRANSPARENTBACKGROUND)},
	{"CP_BORDER", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, CP_BORDER)},
	{"CP_READONLY", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, CP_READONLY)},
	{"CP_DROPDOWNBUTTONRIGHT", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, CP_DROPDOWNBUTTONRIGHT)},
	{"CP_DROPDOWNBUTTONLEFT", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, CP_DROPDOWNBUTTONLEFT)},
	{"CP_CUEBANNER", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, CP_CUEBANNER)},
	{"EP_EDIT", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, EP_EDIT)},
	{"EP_EDITTEXT", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, EP_EDITTEXT)},
	{"HP_HEADERITEM", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, HP_HEADERITEM)},
	{"HP_HEADERSORTARROW", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, HP_HEADERSORTARROW)},
	{"LBP_LISTBOX", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, LBP_LISTBOX)},
	{"LBCP_BORDER_HSCROLL", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, LBCP_BORDER_HSCROLL)},
	{"LBCP_BORDER_HVSCROLL", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, LBCP_BORDER_HVSCROLL)},
	{"LBCP_BORDER_NOSCROLL", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, LBCP_BORDER_NOSCROLL)},
	{"LBCP_BORDER_VSCROLL", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, LBCP_BORDER_VSCROLL)},
	{"LBCP_ITEM", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, LBCP_ITEM)},
	{"LVP_LISTVIEW", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, LVP_LISTVIEW)},
	{"PP_PROGRESS", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, PP_PROGRESS)},
	{"PP_BAR", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, PP_BAR)},
	{"PP_BARVERT", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, PP_BARVERT)},
	{"PP_CHUNK", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, PP_CHUNK)},
	{"PP_CHUNKVERT", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, PP_CHUNKVERT)},
	{"RP_GRIPPER", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, RP_GRIPPER)},
	{"RP_GRIPPERVERT", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, RP_GRIPPERVERT)},
	{"SBP_SCROLLBAR", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, SBP_SCROLLBAR)},
	{"SBP_ARROWBTN", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, SBP_ARROWBTN)},
	{"SBP_THUMBBTNHORZ", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, SBP_THUMBBTNHORZ)},
	{"SBP_THUMBBTNVERT", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, SBP_THUMBBTNVERT)},
	{"SBP_LOWERTRACKHORZ", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, SBP_LOWERTRACKHORZ)},
	{"SBP_UPPERTRACKHORZ", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, SBP_UPPERTRACKHORZ)},
	{"SBP_LOWERTRACKVERT", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, SBP_LOWERTRACKVERT)},
	{"SBP_UPPERTRACKVERT", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, SBP_UPPERTRACKVERT)},
	{"SBP_GRIPPERHORZ", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, SBP_GRIPPERHORZ)},
	{"SBP_GRIPPERVERT", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, SBP_GRIPPERVERT)},
	{"SBP_SIZEBOX", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, SBP_SIZEBOX)},
	{"SPNP_UP", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, SPNP_UP)},
	{"SPNP_DOWN", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, SPNP_DOWN)},
	{"TABP_TABITEM", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, TABP_TABITEM)},
	{"TABP_TABITEMLEFTEDGE", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, TABP_TABITEMLEFTEDGE)},
	{"TABP_TABITEMRIGHTEDGE", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, TABP_TABITEMRIGHTEDGE)},
	{"TABP_PANE", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, TABP_PANE)},
	{"TP_TOOLBAR", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, TP_TOOLBAR)},
	{"TP_BUTTON", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, TP_BUTTON)},
	{"TP_SEPARATOR", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, TP_SEPARATOR)},
	{"TP_SEPARATORVERT", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, TP_SEPARATORVERT)},
	{"TKP_TRACK", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, TKP_TRACK)},
	{"TKP_TRACKVERT", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, TKP_TRACKVERT)},
	{"TKP_THUMB", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, TKP_THUMB)},
	{"TKP_THUMBBOTTOM", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, TKP_THUMBBOTTOM)},
	{"TKP_THUMBTOP", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, TKP_THUMBTOP)},
	{"TKP_THUMBVERT", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, TKP_THUMBVERT)},
	{"TKP_THUMBLEFT", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, TKP_THUMBLEFT)},
	{"TKP_THUMBRIGHT", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, TKP_THUMBRIGHT)},
	{"TKP_TICS", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, TKP_TICS)},
	{"TKP_TICSVERT", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, TKP_TICSVERT)},
	{"TVP_TREEVIEW", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, TVP_TREEVIEW)},
	{"TVP_GLYPH", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, TVP_GLYPH)},
	{"WP_WINDOW", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, WP_WINDOW)},
	{"WP_CAPTION", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, WP_CAPTION)},
	{"WP_MINCAPTION", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, WP_MINCAPTION)},
	{"WP_MAXCAPTION", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, WP_MAXCAPTION)},
	{"WP_FRAMELEFT", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, WP_FRAMELEFT)},
	{"WP_FRAMERIGHT", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, WP_FRAMERIGHT)},
	{"WP_FRAMEBOTTOM", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, WP_FRAMEBOTTOM)},
	{"WP_SYSBUTTON", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, WP_SYSBUTTON)},
	{"WP_MDISYSBUTTON", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, WP_MDISYSBUTTON)},
	{"WP_MINBUTTON", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, WP_MINBUTTON)},
	{"WP_MDIMINBUTTON", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, WP_MDIMINBUTTON)},
	{"WP_MAXBUTTON", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, WP_MAXBUTTON)},
	{"WP_CLOSEBUTTON", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, WP_CLOSEBUTTON)},
	{"WP_MDICLOSEBUTTON", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, WP_MDICLOSEBUTTON)},
	{"WP_RESTOREBUTTON", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, WP_RESTOREBUTTON)},
	{"WP_MDIRESTOREBUTTON", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$Part, WP_MDIRESTOREBUTTON)},
	{"$VALUES", "[Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(TMSchema$Part, $VALUES)},
	{"control", "Lcom/sun/java/swing/plaf/windows/TMSchema$Control;", nullptr, $PRIVATE | $FINAL, $field(TMSchema$Part, control)},
	{"value", "I", nullptr, $PRIVATE | $FINAL, $field(TMSchema$Part, value)},
	{}
};

$MethodInfo _TMSchema$Part_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$TMSchema$PartArray*(*)()>(&TMSchema$Part::$values))},
	{"<init>", "(Ljava/lang/String;ILcom/sun/java/swing/plaf/windows/TMSchema$Control;I)V", "(Lcom/sun/java/swing/plaf/windows/TMSchema$Control;I)V", $PRIVATE, $method(static_cast<void(TMSchema$Part::*)($String*,int32_t,$TMSchema$Control*,int32_t)>(&TMSchema$Part::init$))},
	{"getControlName", "(Ljava/awt/Component;)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(TMSchema$Part::*)($Component*)>(&TMSchema$Part::getControlName))},
	{"getValue", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(TMSchema$Part::*)()>(&TMSchema$Part::getValue))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TMSchema$Part*(*)($String*)>(&TMSchema$Part::valueOf))},
	{"values", "()[Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TMSchema$PartArray*(*)()>(&TMSchema$Part::values))},
	{}
};

$InnerClassInfo _TMSchema$Part_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.TMSchema$Part", "com.sun.java.swing.plaf.windows.TMSchema", "Part", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _TMSchema$Part_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.java.swing.plaf.windows.TMSchema$Part",
	"java.lang.Enum",
	nullptr,
	_TMSchema$Part_FieldInfo_,
	_TMSchema$Part_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/java/swing/plaf/windows/TMSchema$Part;>;",
	nullptr,
	_TMSchema$Part_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.TMSchema"
};

$Object* allocate$TMSchema$Part($Class* clazz) {
	return $of($alloc(TMSchema$Part));
}

TMSchema$Part* TMSchema$Part::MENU = nullptr;
TMSchema$Part* TMSchema$Part::MP_BARBACKGROUND = nullptr;
TMSchema$Part* TMSchema$Part::MP_BARITEM = nullptr;
TMSchema$Part* TMSchema$Part::MP_POPUPBACKGROUND = nullptr;
TMSchema$Part* TMSchema$Part::MP_POPUPBORDERS = nullptr;
TMSchema$Part* TMSchema$Part::MP_POPUPCHECK = nullptr;
TMSchema$Part* TMSchema$Part::MP_POPUPCHECKBACKGROUND = nullptr;
TMSchema$Part* TMSchema$Part::MP_POPUPGUTTER = nullptr;
TMSchema$Part* TMSchema$Part::MP_POPUPITEM = nullptr;
TMSchema$Part* TMSchema$Part::MP_POPUPSEPARATOR = nullptr;
TMSchema$Part* TMSchema$Part::MP_POPUPSUBMENU = nullptr;
TMSchema$Part* TMSchema$Part::BP_PUSHBUTTON = nullptr;
TMSchema$Part* TMSchema$Part::BP_RADIOBUTTON = nullptr;
TMSchema$Part* TMSchema$Part::BP_CHECKBOX = nullptr;
TMSchema$Part* TMSchema$Part::BP_GROUPBOX = nullptr;
TMSchema$Part* TMSchema$Part::CP_COMBOBOX = nullptr;
TMSchema$Part* TMSchema$Part::CP_DROPDOWNBUTTON = nullptr;
TMSchema$Part* TMSchema$Part::CP_BACKGROUND = nullptr;
TMSchema$Part* TMSchema$Part::CP_TRANSPARENTBACKGROUND = nullptr;
TMSchema$Part* TMSchema$Part::CP_BORDER = nullptr;
TMSchema$Part* TMSchema$Part::CP_READONLY = nullptr;
TMSchema$Part* TMSchema$Part::CP_DROPDOWNBUTTONRIGHT = nullptr;
TMSchema$Part* TMSchema$Part::CP_DROPDOWNBUTTONLEFT = nullptr;
TMSchema$Part* TMSchema$Part::CP_CUEBANNER = nullptr;
TMSchema$Part* TMSchema$Part::EP_EDIT = nullptr;
TMSchema$Part* TMSchema$Part::EP_EDITTEXT = nullptr;
TMSchema$Part* TMSchema$Part::HP_HEADERITEM = nullptr;
TMSchema$Part* TMSchema$Part::HP_HEADERSORTARROW = nullptr;
TMSchema$Part* TMSchema$Part::LBP_LISTBOX = nullptr;
TMSchema$Part* TMSchema$Part::LBCP_BORDER_HSCROLL = nullptr;
TMSchema$Part* TMSchema$Part::LBCP_BORDER_HVSCROLL = nullptr;
TMSchema$Part* TMSchema$Part::LBCP_BORDER_NOSCROLL = nullptr;
TMSchema$Part* TMSchema$Part::LBCP_BORDER_VSCROLL = nullptr;
TMSchema$Part* TMSchema$Part::LBCP_ITEM = nullptr;
TMSchema$Part* TMSchema$Part::LVP_LISTVIEW = nullptr;
TMSchema$Part* TMSchema$Part::PP_PROGRESS = nullptr;
TMSchema$Part* TMSchema$Part::PP_BAR = nullptr;
TMSchema$Part* TMSchema$Part::PP_BARVERT = nullptr;
TMSchema$Part* TMSchema$Part::PP_CHUNK = nullptr;
TMSchema$Part* TMSchema$Part::PP_CHUNKVERT = nullptr;
TMSchema$Part* TMSchema$Part::RP_GRIPPER = nullptr;
TMSchema$Part* TMSchema$Part::RP_GRIPPERVERT = nullptr;
TMSchema$Part* TMSchema$Part::SBP_SCROLLBAR = nullptr;
TMSchema$Part* TMSchema$Part::SBP_ARROWBTN = nullptr;
TMSchema$Part* TMSchema$Part::SBP_THUMBBTNHORZ = nullptr;
TMSchema$Part* TMSchema$Part::SBP_THUMBBTNVERT = nullptr;
TMSchema$Part* TMSchema$Part::SBP_LOWERTRACKHORZ = nullptr;
TMSchema$Part* TMSchema$Part::SBP_UPPERTRACKHORZ = nullptr;
TMSchema$Part* TMSchema$Part::SBP_LOWERTRACKVERT = nullptr;
TMSchema$Part* TMSchema$Part::SBP_UPPERTRACKVERT = nullptr;
TMSchema$Part* TMSchema$Part::SBP_GRIPPERHORZ = nullptr;
TMSchema$Part* TMSchema$Part::SBP_GRIPPERVERT = nullptr;
TMSchema$Part* TMSchema$Part::SBP_SIZEBOX = nullptr;
TMSchema$Part* TMSchema$Part::SPNP_UP = nullptr;
TMSchema$Part* TMSchema$Part::SPNP_DOWN = nullptr;
TMSchema$Part* TMSchema$Part::TABP_TABITEM = nullptr;
TMSchema$Part* TMSchema$Part::TABP_TABITEMLEFTEDGE = nullptr;
TMSchema$Part* TMSchema$Part::TABP_TABITEMRIGHTEDGE = nullptr;
TMSchema$Part* TMSchema$Part::TABP_PANE = nullptr;
TMSchema$Part* TMSchema$Part::TP_TOOLBAR = nullptr;
TMSchema$Part* TMSchema$Part::TP_BUTTON = nullptr;
TMSchema$Part* TMSchema$Part::TP_SEPARATOR = nullptr;
TMSchema$Part* TMSchema$Part::TP_SEPARATORVERT = nullptr;
TMSchema$Part* TMSchema$Part::TKP_TRACK = nullptr;
TMSchema$Part* TMSchema$Part::TKP_TRACKVERT = nullptr;
TMSchema$Part* TMSchema$Part::TKP_THUMB = nullptr;
TMSchema$Part* TMSchema$Part::TKP_THUMBBOTTOM = nullptr;
TMSchema$Part* TMSchema$Part::TKP_THUMBTOP = nullptr;
TMSchema$Part* TMSchema$Part::TKP_THUMBVERT = nullptr;
TMSchema$Part* TMSchema$Part::TKP_THUMBLEFT = nullptr;
TMSchema$Part* TMSchema$Part::TKP_THUMBRIGHT = nullptr;
TMSchema$Part* TMSchema$Part::TKP_TICS = nullptr;
TMSchema$Part* TMSchema$Part::TKP_TICSVERT = nullptr;
TMSchema$Part* TMSchema$Part::TVP_TREEVIEW = nullptr;
TMSchema$Part* TMSchema$Part::TVP_GLYPH = nullptr;
TMSchema$Part* TMSchema$Part::WP_WINDOW = nullptr;
TMSchema$Part* TMSchema$Part::WP_CAPTION = nullptr;
TMSchema$Part* TMSchema$Part::WP_MINCAPTION = nullptr;
TMSchema$Part* TMSchema$Part::WP_MAXCAPTION = nullptr;
TMSchema$Part* TMSchema$Part::WP_FRAMELEFT = nullptr;
TMSchema$Part* TMSchema$Part::WP_FRAMERIGHT = nullptr;
TMSchema$Part* TMSchema$Part::WP_FRAMEBOTTOM = nullptr;
TMSchema$Part* TMSchema$Part::WP_SYSBUTTON = nullptr;
TMSchema$Part* TMSchema$Part::WP_MDISYSBUTTON = nullptr;
TMSchema$Part* TMSchema$Part::WP_MINBUTTON = nullptr;
TMSchema$Part* TMSchema$Part::WP_MDIMINBUTTON = nullptr;
TMSchema$Part* TMSchema$Part::WP_MAXBUTTON = nullptr;
TMSchema$Part* TMSchema$Part::WP_CLOSEBUTTON = nullptr;
TMSchema$Part* TMSchema$Part::WP_MDICLOSEBUTTON = nullptr;
TMSchema$Part* TMSchema$Part::WP_RESTOREBUTTON = nullptr;
TMSchema$Part* TMSchema$Part::WP_MDIRESTOREBUTTON = nullptr;
$TMSchema$PartArray* TMSchema$Part::$VALUES = nullptr;

$TMSchema$PartArray* TMSchema$Part::$values() {
	$init(TMSchema$Part);
	return $new($TMSchema$PartArray, {
		TMSchema$Part::MENU,
		TMSchema$Part::MP_BARBACKGROUND,
		TMSchema$Part::MP_BARITEM,
		TMSchema$Part::MP_POPUPBACKGROUND,
		TMSchema$Part::MP_POPUPBORDERS,
		TMSchema$Part::MP_POPUPCHECK,
		TMSchema$Part::MP_POPUPCHECKBACKGROUND,
		TMSchema$Part::MP_POPUPGUTTER,
		TMSchema$Part::MP_POPUPITEM,
		TMSchema$Part::MP_POPUPSEPARATOR,
		TMSchema$Part::MP_POPUPSUBMENU,
		TMSchema$Part::BP_PUSHBUTTON,
		TMSchema$Part::BP_RADIOBUTTON,
		TMSchema$Part::BP_CHECKBOX,
		TMSchema$Part::BP_GROUPBOX,
		TMSchema$Part::CP_COMBOBOX,
		TMSchema$Part::CP_DROPDOWNBUTTON,
		TMSchema$Part::CP_BACKGROUND,
		TMSchema$Part::CP_TRANSPARENTBACKGROUND,
		TMSchema$Part::CP_BORDER,
		TMSchema$Part::CP_READONLY,
		TMSchema$Part::CP_DROPDOWNBUTTONRIGHT,
		TMSchema$Part::CP_DROPDOWNBUTTONLEFT,
		TMSchema$Part::CP_CUEBANNER,
		TMSchema$Part::EP_EDIT,
		TMSchema$Part::EP_EDITTEXT,
		TMSchema$Part::HP_HEADERITEM,
		TMSchema$Part::HP_HEADERSORTARROW,
		TMSchema$Part::LBP_LISTBOX,
		TMSchema$Part::LBCP_BORDER_HSCROLL,
		TMSchema$Part::LBCP_BORDER_HVSCROLL,
		TMSchema$Part::LBCP_BORDER_NOSCROLL,
		TMSchema$Part::LBCP_BORDER_VSCROLL,
		TMSchema$Part::LBCP_ITEM,
		TMSchema$Part::LVP_LISTVIEW,
		TMSchema$Part::PP_PROGRESS,
		TMSchema$Part::PP_BAR,
		TMSchema$Part::PP_BARVERT,
		TMSchema$Part::PP_CHUNK,
		TMSchema$Part::PP_CHUNKVERT,
		TMSchema$Part::RP_GRIPPER,
		TMSchema$Part::RP_GRIPPERVERT,
		TMSchema$Part::SBP_SCROLLBAR,
		TMSchema$Part::SBP_ARROWBTN,
		TMSchema$Part::SBP_THUMBBTNHORZ,
		TMSchema$Part::SBP_THUMBBTNVERT,
		TMSchema$Part::SBP_LOWERTRACKHORZ,
		TMSchema$Part::SBP_UPPERTRACKHORZ,
		TMSchema$Part::SBP_LOWERTRACKVERT,
		TMSchema$Part::SBP_UPPERTRACKVERT,
		TMSchema$Part::SBP_GRIPPERHORZ,
		TMSchema$Part::SBP_GRIPPERVERT,
		TMSchema$Part::SBP_SIZEBOX,
		TMSchema$Part::SPNP_UP,
		TMSchema$Part::SPNP_DOWN,
		TMSchema$Part::TABP_TABITEM,
		TMSchema$Part::TABP_TABITEMLEFTEDGE,
		TMSchema$Part::TABP_TABITEMRIGHTEDGE,
		TMSchema$Part::TABP_PANE,
		TMSchema$Part::TP_TOOLBAR,
		TMSchema$Part::TP_BUTTON,
		TMSchema$Part::TP_SEPARATOR,
		TMSchema$Part::TP_SEPARATORVERT,
		TMSchema$Part::TKP_TRACK,
		TMSchema$Part::TKP_TRACKVERT,
		TMSchema$Part::TKP_THUMB,
		TMSchema$Part::TKP_THUMBBOTTOM,
		TMSchema$Part::TKP_THUMBTOP,
		TMSchema$Part::TKP_THUMBVERT,
		TMSchema$Part::TKP_THUMBLEFT,
		TMSchema$Part::TKP_THUMBRIGHT,
		TMSchema$Part::TKP_TICS,
		TMSchema$Part::TKP_TICSVERT,
		TMSchema$Part::TVP_TREEVIEW,
		TMSchema$Part::TVP_GLYPH,
		TMSchema$Part::WP_WINDOW,
		TMSchema$Part::WP_CAPTION,
		TMSchema$Part::WP_MINCAPTION,
		TMSchema$Part::WP_MAXCAPTION,
		TMSchema$Part::WP_FRAMELEFT,
		TMSchema$Part::WP_FRAMERIGHT,
		TMSchema$Part::WP_FRAMEBOTTOM,
		TMSchema$Part::WP_SYSBUTTON,
		TMSchema$Part::WP_MDISYSBUTTON,
		TMSchema$Part::WP_MINBUTTON,
		TMSchema$Part::WP_MDIMINBUTTON,
		TMSchema$Part::WP_MAXBUTTON,
		TMSchema$Part::WP_CLOSEBUTTON,
		TMSchema$Part::WP_MDICLOSEBUTTON,
		TMSchema$Part::WP_RESTOREBUTTON,
		TMSchema$Part::WP_MDIRESTOREBUTTON
	});
}

$TMSchema$PartArray* TMSchema$Part::values() {
	$init(TMSchema$Part);
	return $cast($TMSchema$PartArray, TMSchema$Part::$VALUES->clone());
}

TMSchema$Part* TMSchema$Part::valueOf($String* name) {
	$init(TMSchema$Part);
	return $cast(TMSchema$Part, $Enum::valueOf(TMSchema$Part::class$, name));
}

void TMSchema$Part::init$($String* $enum$name, int32_t $enum$ordinal, $TMSchema$Control* control, int32_t value) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, control, control);
	this->value = value;
}

int32_t TMSchema$Part::getValue() {
	return this->value;
}

$String* TMSchema$Part::getControlName($Component* component) {
	$var($String, str, ""_s);
	if ($instanceOf($JComponent, component)) {
		$var($JComponent, c, $cast($JComponent, component));
		$var($String, subAppName, $cast($String, $nc(c)->getClientProperty("XPStyle.subAppName"_s)));
		if (subAppName != nullptr) {
			$assign(str, $str({subAppName, "::"_s}));
		}
	}
	return $str({str, $(this->control->toString())});
}

$String* TMSchema$Part::toString() {
	$var($String, var$0, $$str({$(this->control->toString()), "."_s}));
	return $concat(var$0, $(name()));
}

void clinit$TMSchema$Part($Class* class$) {
	$init($TMSchema$Control);
	$assignStatic(TMSchema$Part::MENU, $new(TMSchema$Part, "MENU"_s, 0, $TMSchema$Control::MENU, 0));
	$assignStatic(TMSchema$Part::MP_BARBACKGROUND, $new(TMSchema$Part, "MP_BARBACKGROUND"_s, 1, $TMSchema$Control::MENU, 7));
	$assignStatic(TMSchema$Part::MP_BARITEM, $new(TMSchema$Part, "MP_BARITEM"_s, 2, $TMSchema$Control::MENU, 8));
	$assignStatic(TMSchema$Part::MP_POPUPBACKGROUND, $new(TMSchema$Part, "MP_POPUPBACKGROUND"_s, 3, $TMSchema$Control::MENU, 9));
	$assignStatic(TMSchema$Part::MP_POPUPBORDERS, $new(TMSchema$Part, "MP_POPUPBORDERS"_s, 4, $TMSchema$Control::MENU, 10));
	$assignStatic(TMSchema$Part::MP_POPUPCHECK, $new(TMSchema$Part, "MP_POPUPCHECK"_s, 5, $TMSchema$Control::MENU, 11));
	$assignStatic(TMSchema$Part::MP_POPUPCHECKBACKGROUND, $new(TMSchema$Part, "MP_POPUPCHECKBACKGROUND"_s, 6, $TMSchema$Control::MENU, 12));
	$assignStatic(TMSchema$Part::MP_POPUPGUTTER, $new(TMSchema$Part, "MP_POPUPGUTTER"_s, 7, $TMSchema$Control::MENU, 13));
	$assignStatic(TMSchema$Part::MP_POPUPITEM, $new(TMSchema$Part, "MP_POPUPITEM"_s, 8, $TMSchema$Control::MENU, 14));
	$assignStatic(TMSchema$Part::MP_POPUPSEPARATOR, $new(TMSchema$Part, "MP_POPUPSEPARATOR"_s, 9, $TMSchema$Control::MENU, 15));
	$assignStatic(TMSchema$Part::MP_POPUPSUBMENU, $new(TMSchema$Part, "MP_POPUPSUBMENU"_s, 10, $TMSchema$Control::MENU, 16));
	$assignStatic(TMSchema$Part::BP_PUSHBUTTON, $new(TMSchema$Part, "BP_PUSHBUTTON"_s, 11, $TMSchema$Control::BUTTON, 1));
	$assignStatic(TMSchema$Part::BP_RADIOBUTTON, $new(TMSchema$Part, "BP_RADIOBUTTON"_s, 12, $TMSchema$Control::BUTTON, 2));
	$assignStatic(TMSchema$Part::BP_CHECKBOX, $new(TMSchema$Part, "BP_CHECKBOX"_s, 13, $TMSchema$Control::BUTTON, 3));
	$assignStatic(TMSchema$Part::BP_GROUPBOX, $new(TMSchema$Part, "BP_GROUPBOX"_s, 14, $TMSchema$Control::BUTTON, 4));
	$assignStatic(TMSchema$Part::CP_COMBOBOX, $new(TMSchema$Part, "CP_COMBOBOX"_s, 15, $TMSchema$Control::COMBOBOX, 0));
	$assignStatic(TMSchema$Part::CP_DROPDOWNBUTTON, $new(TMSchema$Part, "CP_DROPDOWNBUTTON"_s, 16, $TMSchema$Control::COMBOBOX, 1));
	$assignStatic(TMSchema$Part::CP_BACKGROUND, $new(TMSchema$Part, "CP_BACKGROUND"_s, 17, $TMSchema$Control::COMBOBOX, 2));
	$assignStatic(TMSchema$Part::CP_TRANSPARENTBACKGROUND, $new(TMSchema$Part, "CP_TRANSPARENTBACKGROUND"_s, 18, $TMSchema$Control::COMBOBOX, 3));
	$assignStatic(TMSchema$Part::CP_BORDER, $new(TMSchema$Part, "CP_BORDER"_s, 19, $TMSchema$Control::COMBOBOX, 4));
	$assignStatic(TMSchema$Part::CP_READONLY, $new(TMSchema$Part, "CP_READONLY"_s, 20, $TMSchema$Control::COMBOBOX, 5));
	$assignStatic(TMSchema$Part::CP_DROPDOWNBUTTONRIGHT, $new(TMSchema$Part, "CP_DROPDOWNBUTTONRIGHT"_s, 21, $TMSchema$Control::COMBOBOX, 6));
	$assignStatic(TMSchema$Part::CP_DROPDOWNBUTTONLEFT, $new(TMSchema$Part, "CP_DROPDOWNBUTTONLEFT"_s, 22, $TMSchema$Control::COMBOBOX, 7));
	$assignStatic(TMSchema$Part::CP_CUEBANNER, $new(TMSchema$Part, "CP_CUEBANNER"_s, 23, $TMSchema$Control::COMBOBOX, 8));
	$assignStatic(TMSchema$Part::EP_EDIT, $new(TMSchema$Part, "EP_EDIT"_s, 24, $TMSchema$Control::EDIT, 0));
	$assignStatic(TMSchema$Part::EP_EDITTEXT, $new(TMSchema$Part, "EP_EDITTEXT"_s, 25, $TMSchema$Control::EDIT, 1));
	$assignStatic(TMSchema$Part::HP_HEADERITEM, $new(TMSchema$Part, "HP_HEADERITEM"_s, 26, $TMSchema$Control::HEADER, 1));
	$assignStatic(TMSchema$Part::HP_HEADERSORTARROW, $new(TMSchema$Part, "HP_HEADERSORTARROW"_s, 27, $TMSchema$Control::HEADER, 4));
	$assignStatic(TMSchema$Part::LBP_LISTBOX, $new(TMSchema$Part, "LBP_LISTBOX"_s, 28, $TMSchema$Control::LISTBOX, 0));
	$assignStatic(TMSchema$Part::LBCP_BORDER_HSCROLL, $new(TMSchema$Part, "LBCP_BORDER_HSCROLL"_s, 29, $TMSchema$Control::LISTBOX, 1));
	$assignStatic(TMSchema$Part::LBCP_BORDER_HVSCROLL, $new(TMSchema$Part, "LBCP_BORDER_HVSCROLL"_s, 30, $TMSchema$Control::LISTBOX, 2));
	$assignStatic(TMSchema$Part::LBCP_BORDER_NOSCROLL, $new(TMSchema$Part, "LBCP_BORDER_NOSCROLL"_s, 31, $TMSchema$Control::LISTBOX, 3));
	$assignStatic(TMSchema$Part::LBCP_BORDER_VSCROLL, $new(TMSchema$Part, "LBCP_BORDER_VSCROLL"_s, 32, $TMSchema$Control::LISTBOX, 4));
	$assignStatic(TMSchema$Part::LBCP_ITEM, $new(TMSchema$Part, "LBCP_ITEM"_s, 33, $TMSchema$Control::LISTBOX, 5));
	$assignStatic(TMSchema$Part::LVP_LISTVIEW, $new(TMSchema$Part, "LVP_LISTVIEW"_s, 34, $TMSchema$Control::LISTVIEW, 0));
	$assignStatic(TMSchema$Part::PP_PROGRESS, $new(TMSchema$Part, "PP_PROGRESS"_s, 35, $TMSchema$Control::PROGRESS, 0));
	$assignStatic(TMSchema$Part::PP_BAR, $new(TMSchema$Part, "PP_BAR"_s, 36, $TMSchema$Control::PROGRESS, 1));
	$assignStatic(TMSchema$Part::PP_BARVERT, $new(TMSchema$Part, "PP_BARVERT"_s, 37, $TMSchema$Control::PROGRESS, 2));
	$assignStatic(TMSchema$Part::PP_CHUNK, $new(TMSchema$Part, "PP_CHUNK"_s, 38, $TMSchema$Control::PROGRESS, 3));
	$assignStatic(TMSchema$Part::PP_CHUNKVERT, $new(TMSchema$Part, "PP_CHUNKVERT"_s, 39, $TMSchema$Control::PROGRESS, 4));
	$assignStatic(TMSchema$Part::RP_GRIPPER, $new(TMSchema$Part, "RP_GRIPPER"_s, 40, $TMSchema$Control::REBAR, 1));
	$assignStatic(TMSchema$Part::RP_GRIPPERVERT, $new(TMSchema$Part, "RP_GRIPPERVERT"_s, 41, $TMSchema$Control::REBAR, 2));
	$assignStatic(TMSchema$Part::SBP_SCROLLBAR, $new(TMSchema$Part, "SBP_SCROLLBAR"_s, 42, $TMSchema$Control::SCROLLBAR, 0));
	$assignStatic(TMSchema$Part::SBP_ARROWBTN, $new(TMSchema$Part, "SBP_ARROWBTN"_s, 43, $TMSchema$Control::SCROLLBAR, 1));
	$assignStatic(TMSchema$Part::SBP_THUMBBTNHORZ, $new(TMSchema$Part, "SBP_THUMBBTNHORZ"_s, 44, $TMSchema$Control::SCROLLBAR, 2));
	$assignStatic(TMSchema$Part::SBP_THUMBBTNVERT, $new(TMSchema$Part, "SBP_THUMBBTNVERT"_s, 45, $TMSchema$Control::SCROLLBAR, 3));
	$assignStatic(TMSchema$Part::SBP_LOWERTRACKHORZ, $new(TMSchema$Part, "SBP_LOWERTRACKHORZ"_s, 46, $TMSchema$Control::SCROLLBAR, 4));
	$assignStatic(TMSchema$Part::SBP_UPPERTRACKHORZ, $new(TMSchema$Part, "SBP_UPPERTRACKHORZ"_s, 47, $TMSchema$Control::SCROLLBAR, 5));
	$assignStatic(TMSchema$Part::SBP_LOWERTRACKVERT, $new(TMSchema$Part, "SBP_LOWERTRACKVERT"_s, 48, $TMSchema$Control::SCROLLBAR, 6));
	$assignStatic(TMSchema$Part::SBP_UPPERTRACKVERT, $new(TMSchema$Part, "SBP_UPPERTRACKVERT"_s, 49, $TMSchema$Control::SCROLLBAR, 7));
	$assignStatic(TMSchema$Part::SBP_GRIPPERHORZ, $new(TMSchema$Part, "SBP_GRIPPERHORZ"_s, 50, $TMSchema$Control::SCROLLBAR, 8));
	$assignStatic(TMSchema$Part::SBP_GRIPPERVERT, $new(TMSchema$Part, "SBP_GRIPPERVERT"_s, 51, $TMSchema$Control::SCROLLBAR, 9));
	$assignStatic(TMSchema$Part::SBP_SIZEBOX, $new(TMSchema$Part, "SBP_SIZEBOX"_s, 52, $TMSchema$Control::SCROLLBAR, 10));
	$assignStatic(TMSchema$Part::SPNP_UP, $new(TMSchema$Part, "SPNP_UP"_s, 53, $TMSchema$Control::SPIN, 1));
	$assignStatic(TMSchema$Part::SPNP_DOWN, $new(TMSchema$Part, "SPNP_DOWN"_s, 54, $TMSchema$Control::SPIN, 2));
	$assignStatic(TMSchema$Part::TABP_TABITEM, $new(TMSchema$Part, "TABP_TABITEM"_s, 55, $TMSchema$Control::TAB, 1));
	$assignStatic(TMSchema$Part::TABP_TABITEMLEFTEDGE, $new(TMSchema$Part, "TABP_TABITEMLEFTEDGE"_s, 56, $TMSchema$Control::TAB, 2));
	$assignStatic(TMSchema$Part::TABP_TABITEMRIGHTEDGE, $new(TMSchema$Part, "TABP_TABITEMRIGHTEDGE"_s, 57, $TMSchema$Control::TAB, 3));
	$assignStatic(TMSchema$Part::TABP_PANE, $new(TMSchema$Part, "TABP_PANE"_s, 58, $TMSchema$Control::TAB, 9));
	$assignStatic(TMSchema$Part::TP_TOOLBAR, $new(TMSchema$Part, "TP_TOOLBAR"_s, 59, $TMSchema$Control::TOOLBAR, 0));
	$assignStatic(TMSchema$Part::TP_BUTTON, $new(TMSchema$Part, "TP_BUTTON"_s, 60, $TMSchema$Control::TOOLBAR, 1));
	$assignStatic(TMSchema$Part::TP_SEPARATOR, $new(TMSchema$Part, "TP_SEPARATOR"_s, 61, $TMSchema$Control::TOOLBAR, 5));
	$assignStatic(TMSchema$Part::TP_SEPARATORVERT, $new(TMSchema$Part, "TP_SEPARATORVERT"_s, 62, $TMSchema$Control::TOOLBAR, 6));
	$assignStatic(TMSchema$Part::TKP_TRACK, $new(TMSchema$Part, "TKP_TRACK"_s, 63, $TMSchema$Control::TRACKBAR, 1));
	$assignStatic(TMSchema$Part::TKP_TRACKVERT, $new(TMSchema$Part, "TKP_TRACKVERT"_s, 64, $TMSchema$Control::TRACKBAR, 2));
	$assignStatic(TMSchema$Part::TKP_THUMB, $new(TMSchema$Part, "TKP_THUMB"_s, 65, $TMSchema$Control::TRACKBAR, 3));
	$assignStatic(TMSchema$Part::TKP_THUMBBOTTOM, $new(TMSchema$Part, "TKP_THUMBBOTTOM"_s, 66, $TMSchema$Control::TRACKBAR, 4));
	$assignStatic(TMSchema$Part::TKP_THUMBTOP, $new(TMSchema$Part, "TKP_THUMBTOP"_s, 67, $TMSchema$Control::TRACKBAR, 5));
	$assignStatic(TMSchema$Part::TKP_THUMBVERT, $new(TMSchema$Part, "TKP_THUMBVERT"_s, 68, $TMSchema$Control::TRACKBAR, 6));
	$assignStatic(TMSchema$Part::TKP_THUMBLEFT, $new(TMSchema$Part, "TKP_THUMBLEFT"_s, 69, $TMSchema$Control::TRACKBAR, 7));
	$assignStatic(TMSchema$Part::TKP_THUMBRIGHT, $new(TMSchema$Part, "TKP_THUMBRIGHT"_s, 70, $TMSchema$Control::TRACKBAR, 8));
	$assignStatic(TMSchema$Part::TKP_TICS, $new(TMSchema$Part, "TKP_TICS"_s, 71, $TMSchema$Control::TRACKBAR, 9));
	$assignStatic(TMSchema$Part::TKP_TICSVERT, $new(TMSchema$Part, "TKP_TICSVERT"_s, 72, $TMSchema$Control::TRACKBAR, 10));
	$assignStatic(TMSchema$Part::TVP_TREEVIEW, $new(TMSchema$Part, "TVP_TREEVIEW"_s, 73, $TMSchema$Control::TREEVIEW, 0));
	$assignStatic(TMSchema$Part::TVP_GLYPH, $new(TMSchema$Part, "TVP_GLYPH"_s, 74, $TMSchema$Control::TREEVIEW, 2));
	$assignStatic(TMSchema$Part::WP_WINDOW, $new(TMSchema$Part, "WP_WINDOW"_s, 75, $TMSchema$Control::WINDOW, 0));
	$assignStatic(TMSchema$Part::WP_CAPTION, $new(TMSchema$Part, "WP_CAPTION"_s, 76, $TMSchema$Control::WINDOW, 1));
	$assignStatic(TMSchema$Part::WP_MINCAPTION, $new(TMSchema$Part, "WP_MINCAPTION"_s, 77, $TMSchema$Control::WINDOW, 3));
	$assignStatic(TMSchema$Part::WP_MAXCAPTION, $new(TMSchema$Part, "WP_MAXCAPTION"_s, 78, $TMSchema$Control::WINDOW, 5));
	$assignStatic(TMSchema$Part::WP_FRAMELEFT, $new(TMSchema$Part, "WP_FRAMELEFT"_s, 79, $TMSchema$Control::WINDOW, 7));
	$assignStatic(TMSchema$Part::WP_FRAMERIGHT, $new(TMSchema$Part, "WP_FRAMERIGHT"_s, 80, $TMSchema$Control::WINDOW, 8));
	$assignStatic(TMSchema$Part::WP_FRAMEBOTTOM, $new(TMSchema$Part, "WP_FRAMEBOTTOM"_s, 81, $TMSchema$Control::WINDOW, 9));
	$assignStatic(TMSchema$Part::WP_SYSBUTTON, $new(TMSchema$Part, "WP_SYSBUTTON"_s, 82, $TMSchema$Control::WINDOW, 13));
	$assignStatic(TMSchema$Part::WP_MDISYSBUTTON, $new(TMSchema$Part, "WP_MDISYSBUTTON"_s, 83, $TMSchema$Control::WINDOW, 14));
	$assignStatic(TMSchema$Part::WP_MINBUTTON, $new(TMSchema$Part, "WP_MINBUTTON"_s, 84, $TMSchema$Control::WINDOW, 15));
	$assignStatic(TMSchema$Part::WP_MDIMINBUTTON, $new(TMSchema$Part, "WP_MDIMINBUTTON"_s, 85, $TMSchema$Control::WINDOW, 16));
	$assignStatic(TMSchema$Part::WP_MAXBUTTON, $new(TMSchema$Part, "WP_MAXBUTTON"_s, 86, $TMSchema$Control::WINDOW, 17));
	$assignStatic(TMSchema$Part::WP_CLOSEBUTTON, $new(TMSchema$Part, "WP_CLOSEBUTTON"_s, 87, $TMSchema$Control::WINDOW, 18));
	$assignStatic(TMSchema$Part::WP_MDICLOSEBUTTON, $new(TMSchema$Part, "WP_MDICLOSEBUTTON"_s, 88, $TMSchema$Control::WINDOW, 20));
	$assignStatic(TMSchema$Part::WP_RESTOREBUTTON, $new(TMSchema$Part, "WP_RESTOREBUTTON"_s, 89, $TMSchema$Control::WINDOW, 21));
	$assignStatic(TMSchema$Part::WP_MDIRESTOREBUTTON, $new(TMSchema$Part, "WP_MDIRESTOREBUTTON"_s, 90, $TMSchema$Control::WINDOW, 22));
	$assignStatic(TMSchema$Part::$VALUES, TMSchema$Part::$values());
}

TMSchema$Part::TMSchema$Part() {
}

$Class* TMSchema$Part::load$($String* name, bool initialize) {
	$loadClass(TMSchema$Part, name, initialize, &_TMSchema$Part_ClassInfo_, clinit$TMSchema$Part, allocate$TMSchema$Part);
	return class$;
}

$Class* TMSchema$Part::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com