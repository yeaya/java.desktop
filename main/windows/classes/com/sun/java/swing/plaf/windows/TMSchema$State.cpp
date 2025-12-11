#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Control.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Prop.h>
#include <com/sun/java/swing/plaf/windows/TMSchema.h>
#include <java/lang/Enum.h>
#include <java/util/EnumMap.h>
#include <sun/awt/windows/ThemeReader.h>
#include <jcpp.h>

#undef ACTIVE
#undef ASSIST
#undef BITMAP
#undef BP_CHECKBOX
#undef BP_PUSHBUTTON
#undef BP_RADIOBUTTON
#undef BULLETDISABLED
#undef BULLETNORMAL
#undef CHECKED
#undef CHECKEDDISABLED
#undef CHECKEDHOT
#undef CHECKEDNORMAL
#undef CHECKEDPRESSED
#undef CHECKMARKDISABLED
#undef CHECKMARKNORMAL
#undef CLOSED
#undef CP_BACKGROUND
#undef CP_BORDER
#undef CP_COMBOBOX
#undef CP_CUEBANNER
#undef CP_DROPDOWNBUTTON
#undef CP_DROPDOWNBUTTONLEFT
#undef CP_DROPDOWNBUTTONRIGHT
#undef CP_READONLY
#undef CP_TRANSPARENTBACKGROUND
#undef DEFAULTED
#undef DISABLED
#undef DISABLEDHOT
#undef DISABLEDPUSHED
#undef DOWNDISABLED
#undef DOWNHOT
#undef DOWNHOVER
#undef DOWNNORMAL
#undef DOWNPRESSED
#undef EP_EDITTEXT
#undef FOCUSED
#undef HOT
#undef HOTCHECKED
#undef HOVER
#undef HP_HEADERITEM
#undef HP_HEADERSORTARROW
#undef ICONHOT
#undef ICONNORMAL
#undef ICONPRESSED
#undef ICONSORTEDHOT
#undef ICONSORTEDNORMAL
#undef ICONSORTEDPRESSED
#undef IMAGECOUNT
#undef INACTIVE
#undef INACTIVEDISABLED
#undef INACTIVEHOT
#undef INACTIVENORMAL
#undef INACTIVEPUSHED
#undef LBCP_BORDER_HSCROLL
#undef LBCP_BORDER_HVSCROLL
#undef LBCP_BORDER_NOSCROLL
#undef LBCP_BORDER_VSCROLL
#undef LEFTDISABLED
#undef LEFTHOT
#undef LEFTHOVER
#undef LEFTNORMAL
#undef LEFTPRESSED
#undef MIXEDDISABLED
#undef MIXEDHOT
#undef MIXEDNORMAL
#undef MIXEDPRESSED
#undef MP_BARBACKGROUND
#undef MP_BARITEM
#undef MP_POPUPCHECK
#undef MP_POPUPCHECKBACKGROUND
#undef MP_POPUPITEM
#undef MP_POPUPSUBMENU
#undef NORMAL
#undef OPENED
#undef PRESSED
#undef PUSHED
#undef READONLY
#undef RIGHTDISABLED
#undef RIGHTHOT
#undef RIGHTHOVER
#undef RIGHTNORMAL
#undef RIGHTPRESSED
#undef SBP_ARROWBTN
#undef SBP_GRIPPERHORZ
#undef SBP_GRIPPERVERT
#undef SBP_SCROLLBAR
#undef SBP_THUMBBTNHORZ
#undef SBP_THUMBBTNVERT
#undef SELECTED
#undef SORTEDDOWN
#undef SORTEDHOT
#undef SORTEDNORMAL
#undef SORTEDPRESSED
#undef SORTEDUP
#undef SPNP_DOWN
#undef SPNP_UP
#undef TABP_TABITEM
#undef TABP_TABITEMLEFTEDGE
#undef TABP_TABITEMRIGHTEDGE
#undef TKP_THUMB
#undef TKP_THUMBBOTTOM
#undef TKP_THUMBRIGHT
#undef TKP_THUMBTOP
#undef TKP_THUMBVERT
#undef TKP_TRACK
#undef TKP_TRACKVERT
#undef TP_BUTTON
#undef TVP_GLYPH
#undef UNCHECKEDDISABLED
#undef UNCHECKEDHOT
#undef UNCHECKEDNORMAL
#undef UNCHECKEDPRESSED
#undef UPDISABLED
#undef UPHOT
#undef UPHOVER
#undef UPNORMAL
#undef UPPRESSED
#undef WINDOW
#undef WP_CAPTION
#undef WP_CLOSEBUTTON
#undef WP_FRAMEBOTTOM
#undef WP_FRAMELEFT
#undef WP_FRAMERIGHT
#undef WP_MAXBUTTON
#undef WP_MAXCAPTION
#undef WP_MINBUTTON
#undef WP_MINCAPTION
#undef WP_RESTOREBUTTON
#undef WP_WINDOW

using $TMSchema$StateArray = $Array<::com::sun::java::swing::plaf::windows::TMSchema$State>;
using $EnumArray = $Array<::java::lang::Enum>;
using $TMSchema$Control = ::com::sun::java::swing::plaf::windows::TMSchema$Control;
using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$Prop = ::com::sun::java::swing::plaf::windows::TMSchema$Prop;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumMap = ::java::util::EnumMap;
using $ThemeReader = ::sun::awt::windows::ThemeReader;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _TMSchema$State_FieldInfo_[] = {
	{"ACTIVE", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, ACTIVE)},
	{"ASSIST", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, ASSIST)},
	{"BITMAP", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, BITMAP)},
	{"CHECKED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, CHECKED)},
	{"CHECKEDDISABLED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, CHECKEDDISABLED)},
	{"CHECKEDHOT", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, CHECKEDHOT)},
	{"CHECKEDNORMAL", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, CHECKEDNORMAL)},
	{"CHECKEDPRESSED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, CHECKEDPRESSED)},
	{"CHECKMARKNORMAL", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, CHECKMARKNORMAL)},
	{"CHECKMARKDISABLED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, CHECKMARKDISABLED)},
	{"BULLETNORMAL", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, BULLETNORMAL)},
	{"BULLETDISABLED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, BULLETDISABLED)},
	{"CLOSED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, CLOSED)},
	{"DEFAULTED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, DEFAULTED)},
	{"DISABLED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, DISABLED)},
	{"DISABLEDHOT", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, DISABLEDHOT)},
	{"DISABLEDPUSHED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, DISABLEDPUSHED)},
	{"DOWNDISABLED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, DOWNDISABLED)},
	{"DOWNHOT", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, DOWNHOT)},
	{"DOWNNORMAL", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, DOWNNORMAL)},
	{"DOWNPRESSED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, DOWNPRESSED)},
	{"FOCUSED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, FOCUSED)},
	{"HOT", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, HOT)},
	{"HOTCHECKED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, HOTCHECKED)},
	{"ICONHOT", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, ICONHOT)},
	{"ICONNORMAL", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, ICONNORMAL)},
	{"ICONPRESSED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, ICONPRESSED)},
	{"ICONSORTEDHOT", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, ICONSORTEDHOT)},
	{"ICONSORTEDNORMAL", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, ICONSORTEDNORMAL)},
	{"ICONSORTEDPRESSED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, ICONSORTEDPRESSED)},
	{"INACTIVE", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, INACTIVE)},
	{"INACTIVENORMAL", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, INACTIVENORMAL)},
	{"INACTIVEHOT", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, INACTIVEHOT)},
	{"INACTIVEPUSHED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, INACTIVEPUSHED)},
	{"INACTIVEDISABLED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, INACTIVEDISABLED)},
	{"LEFTDISABLED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, LEFTDISABLED)},
	{"LEFTHOT", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, LEFTHOT)},
	{"LEFTNORMAL", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, LEFTNORMAL)},
	{"LEFTPRESSED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, LEFTPRESSED)},
	{"MIXEDDISABLED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, MIXEDDISABLED)},
	{"MIXEDHOT", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, MIXEDHOT)},
	{"MIXEDNORMAL", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, MIXEDNORMAL)},
	{"MIXEDPRESSED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, MIXEDPRESSED)},
	{"NORMAL", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, NORMAL)},
	{"PRESSED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, PRESSED)},
	{"OPENED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, OPENED)},
	{"PUSHED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, PUSHED)},
	{"READONLY", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, READONLY)},
	{"RIGHTDISABLED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, RIGHTDISABLED)},
	{"RIGHTHOT", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, RIGHTHOT)},
	{"RIGHTNORMAL", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, RIGHTNORMAL)},
	{"RIGHTPRESSED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, RIGHTPRESSED)},
	{"SELECTED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, SELECTED)},
	{"UNCHECKEDDISABLED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, UNCHECKEDDISABLED)},
	{"UNCHECKEDHOT", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, UNCHECKEDHOT)},
	{"UNCHECKEDNORMAL", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, UNCHECKEDNORMAL)},
	{"UNCHECKEDPRESSED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, UNCHECKEDPRESSED)},
	{"UPDISABLED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, UPDISABLED)},
	{"UPHOT", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, UPHOT)},
	{"UPNORMAL", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, UPNORMAL)},
	{"UPPRESSED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, UPPRESSED)},
	{"HOVER", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, HOVER)},
	{"UPHOVER", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, UPHOVER)},
	{"DOWNHOVER", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, DOWNHOVER)},
	{"LEFTHOVER", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, LEFTHOVER)},
	{"RIGHTHOVER", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, RIGHTHOVER)},
	{"SORTEDDOWN", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, SORTEDDOWN)},
	{"SORTEDHOT", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, SORTEDHOT)},
	{"SORTEDNORMAL", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, SORTEDNORMAL)},
	{"SORTEDPRESSED", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, SORTEDPRESSED)},
	{"SORTEDUP", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TMSchema$State, SORTEDUP)},
	{"$VALUES", "[Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(TMSchema$State, $VALUES)},
	{"stateMap", "Ljava/util/EnumMap;", "Ljava/util/EnumMap<Lcom/sun/java/swing/plaf/windows/TMSchema$Part;[Lcom/sun/java/swing/plaf/windows/TMSchema$State;>;", $PRIVATE | $STATIC, $staticField(TMSchema$State, stateMap)},
	{}
};

$MethodInfo _TMSchema$State_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$TMSchema$StateArray*(*)()>(&TMSchema$State::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(TMSchema$State::*)($String*,int32_t)>(&TMSchema$State::init$))},
	{"getValue", "(Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Lcom/sun/java/swing/plaf/windows/TMSchema$State;)I", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<int32_t(*)($TMSchema$Part*,TMSchema$State*)>(&TMSchema$State::getValue))},
	{"initStates", "()V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)()>(&TMSchema$State::initStates))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TMSchema$State*(*)($String*)>(&TMSchema$State::valueOf))},
	{"values", "()[Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TMSchema$StateArray*(*)()>(&TMSchema$State::values))},
	{}
};

$InnerClassInfo _TMSchema$State_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.TMSchema$State", "com.sun.java.swing.plaf.windows.TMSchema", "State", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _TMSchema$State_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.java.swing.plaf.windows.TMSchema$State",
	"java.lang.Enum",
	nullptr,
	_TMSchema$State_FieldInfo_,
	_TMSchema$State_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/java/swing/plaf/windows/TMSchema$State;>;",
	nullptr,
	_TMSchema$State_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.TMSchema"
};

$Object* allocate$TMSchema$State($Class* clazz) {
	return $of($alloc(TMSchema$State));
}

TMSchema$State* TMSchema$State::ACTIVE = nullptr;
TMSchema$State* TMSchema$State::ASSIST = nullptr;
TMSchema$State* TMSchema$State::BITMAP = nullptr;
TMSchema$State* TMSchema$State::CHECKED = nullptr;
TMSchema$State* TMSchema$State::CHECKEDDISABLED = nullptr;
TMSchema$State* TMSchema$State::CHECKEDHOT = nullptr;
TMSchema$State* TMSchema$State::CHECKEDNORMAL = nullptr;
TMSchema$State* TMSchema$State::CHECKEDPRESSED = nullptr;
TMSchema$State* TMSchema$State::CHECKMARKNORMAL = nullptr;
TMSchema$State* TMSchema$State::CHECKMARKDISABLED = nullptr;
TMSchema$State* TMSchema$State::BULLETNORMAL = nullptr;
TMSchema$State* TMSchema$State::BULLETDISABLED = nullptr;
TMSchema$State* TMSchema$State::CLOSED = nullptr;
TMSchema$State* TMSchema$State::DEFAULTED = nullptr;
TMSchema$State* TMSchema$State::DISABLED = nullptr;
TMSchema$State* TMSchema$State::DISABLEDHOT = nullptr;
TMSchema$State* TMSchema$State::DISABLEDPUSHED = nullptr;
TMSchema$State* TMSchema$State::DOWNDISABLED = nullptr;
TMSchema$State* TMSchema$State::DOWNHOT = nullptr;
TMSchema$State* TMSchema$State::DOWNNORMAL = nullptr;
TMSchema$State* TMSchema$State::DOWNPRESSED = nullptr;
TMSchema$State* TMSchema$State::FOCUSED = nullptr;
TMSchema$State* TMSchema$State::HOT = nullptr;
TMSchema$State* TMSchema$State::HOTCHECKED = nullptr;
TMSchema$State* TMSchema$State::ICONHOT = nullptr;
TMSchema$State* TMSchema$State::ICONNORMAL = nullptr;
TMSchema$State* TMSchema$State::ICONPRESSED = nullptr;
TMSchema$State* TMSchema$State::ICONSORTEDHOT = nullptr;
TMSchema$State* TMSchema$State::ICONSORTEDNORMAL = nullptr;
TMSchema$State* TMSchema$State::ICONSORTEDPRESSED = nullptr;
TMSchema$State* TMSchema$State::INACTIVE = nullptr;
TMSchema$State* TMSchema$State::INACTIVENORMAL = nullptr;
TMSchema$State* TMSchema$State::INACTIVEHOT = nullptr;
TMSchema$State* TMSchema$State::INACTIVEPUSHED = nullptr;
TMSchema$State* TMSchema$State::INACTIVEDISABLED = nullptr;
TMSchema$State* TMSchema$State::LEFTDISABLED = nullptr;
TMSchema$State* TMSchema$State::LEFTHOT = nullptr;
TMSchema$State* TMSchema$State::LEFTNORMAL = nullptr;
TMSchema$State* TMSchema$State::LEFTPRESSED = nullptr;
TMSchema$State* TMSchema$State::MIXEDDISABLED = nullptr;
TMSchema$State* TMSchema$State::MIXEDHOT = nullptr;
TMSchema$State* TMSchema$State::MIXEDNORMAL = nullptr;
TMSchema$State* TMSchema$State::MIXEDPRESSED = nullptr;
TMSchema$State* TMSchema$State::NORMAL = nullptr;
TMSchema$State* TMSchema$State::PRESSED = nullptr;
TMSchema$State* TMSchema$State::OPENED = nullptr;
TMSchema$State* TMSchema$State::PUSHED = nullptr;
TMSchema$State* TMSchema$State::READONLY = nullptr;
TMSchema$State* TMSchema$State::RIGHTDISABLED = nullptr;
TMSchema$State* TMSchema$State::RIGHTHOT = nullptr;
TMSchema$State* TMSchema$State::RIGHTNORMAL = nullptr;
TMSchema$State* TMSchema$State::RIGHTPRESSED = nullptr;
TMSchema$State* TMSchema$State::SELECTED = nullptr;
TMSchema$State* TMSchema$State::UNCHECKEDDISABLED = nullptr;
TMSchema$State* TMSchema$State::UNCHECKEDHOT = nullptr;
TMSchema$State* TMSchema$State::UNCHECKEDNORMAL = nullptr;
TMSchema$State* TMSchema$State::UNCHECKEDPRESSED = nullptr;
TMSchema$State* TMSchema$State::UPDISABLED = nullptr;
TMSchema$State* TMSchema$State::UPHOT = nullptr;
TMSchema$State* TMSchema$State::UPNORMAL = nullptr;
TMSchema$State* TMSchema$State::UPPRESSED = nullptr;
TMSchema$State* TMSchema$State::HOVER = nullptr;
TMSchema$State* TMSchema$State::UPHOVER = nullptr;
TMSchema$State* TMSchema$State::DOWNHOVER = nullptr;
TMSchema$State* TMSchema$State::LEFTHOVER = nullptr;
TMSchema$State* TMSchema$State::RIGHTHOVER = nullptr;
TMSchema$State* TMSchema$State::SORTEDDOWN = nullptr;
TMSchema$State* TMSchema$State::SORTEDHOT = nullptr;
TMSchema$State* TMSchema$State::SORTEDNORMAL = nullptr;
TMSchema$State* TMSchema$State::SORTEDPRESSED = nullptr;
TMSchema$State* TMSchema$State::SORTEDUP = nullptr;
$TMSchema$StateArray* TMSchema$State::$VALUES = nullptr;
$EnumMap* TMSchema$State::stateMap = nullptr;

$TMSchema$StateArray* TMSchema$State::$values() {
	$init(TMSchema$State);
	return $new($TMSchema$StateArray, {
		TMSchema$State::ACTIVE,
		TMSchema$State::ASSIST,
		TMSchema$State::BITMAP,
		TMSchema$State::CHECKED,
		TMSchema$State::CHECKEDDISABLED,
		TMSchema$State::CHECKEDHOT,
		TMSchema$State::CHECKEDNORMAL,
		TMSchema$State::CHECKEDPRESSED,
		TMSchema$State::CHECKMARKNORMAL,
		TMSchema$State::CHECKMARKDISABLED,
		TMSchema$State::BULLETNORMAL,
		TMSchema$State::BULLETDISABLED,
		TMSchema$State::CLOSED,
		TMSchema$State::DEFAULTED,
		TMSchema$State::DISABLED,
		TMSchema$State::DISABLEDHOT,
		TMSchema$State::DISABLEDPUSHED,
		TMSchema$State::DOWNDISABLED,
		TMSchema$State::DOWNHOT,
		TMSchema$State::DOWNNORMAL,
		TMSchema$State::DOWNPRESSED,
		TMSchema$State::FOCUSED,
		TMSchema$State::HOT,
		TMSchema$State::HOTCHECKED,
		TMSchema$State::ICONHOT,
		TMSchema$State::ICONNORMAL,
		TMSchema$State::ICONPRESSED,
		TMSchema$State::ICONSORTEDHOT,
		TMSchema$State::ICONSORTEDNORMAL,
		TMSchema$State::ICONSORTEDPRESSED,
		TMSchema$State::INACTIVE,
		TMSchema$State::INACTIVENORMAL,
		TMSchema$State::INACTIVEHOT,
		TMSchema$State::INACTIVEPUSHED,
		TMSchema$State::INACTIVEDISABLED,
		TMSchema$State::LEFTDISABLED,
		TMSchema$State::LEFTHOT,
		TMSchema$State::LEFTNORMAL,
		TMSchema$State::LEFTPRESSED,
		TMSchema$State::MIXEDDISABLED,
		TMSchema$State::MIXEDHOT,
		TMSchema$State::MIXEDNORMAL,
		TMSchema$State::MIXEDPRESSED,
		TMSchema$State::NORMAL,
		TMSchema$State::PRESSED,
		TMSchema$State::OPENED,
		TMSchema$State::PUSHED,
		TMSchema$State::READONLY,
		TMSchema$State::RIGHTDISABLED,
		TMSchema$State::RIGHTHOT,
		TMSchema$State::RIGHTNORMAL,
		TMSchema$State::RIGHTPRESSED,
		TMSchema$State::SELECTED,
		TMSchema$State::UNCHECKEDDISABLED,
		TMSchema$State::UNCHECKEDHOT,
		TMSchema$State::UNCHECKEDNORMAL,
		TMSchema$State::UNCHECKEDPRESSED,
		TMSchema$State::UPDISABLED,
		TMSchema$State::UPHOT,
		TMSchema$State::UPNORMAL,
		TMSchema$State::UPPRESSED,
		TMSchema$State::HOVER,
		TMSchema$State::UPHOVER,
		TMSchema$State::DOWNHOVER,
		TMSchema$State::LEFTHOVER,
		TMSchema$State::RIGHTHOVER,
		TMSchema$State::SORTEDDOWN,
		TMSchema$State::SORTEDHOT,
		TMSchema$State::SORTEDNORMAL,
		TMSchema$State::SORTEDPRESSED,
		TMSchema$State::SORTEDUP
	});
}

$TMSchema$StateArray* TMSchema$State::values() {
	$init(TMSchema$State);
	return $cast($TMSchema$StateArray, TMSchema$State::$VALUES->clone());
}

TMSchema$State* TMSchema$State::valueOf($String* name) {
	$init(TMSchema$State);
	return $cast(TMSchema$State, $Enum::valueOf(TMSchema$State::class$, name));
}

void TMSchema$State::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void TMSchema$State::initStates() {
	$load(TMSchema$State);
	$synchronized(class$) {
		$init(TMSchema$State);
		$useLocalCurrentObjectStackCache();
		$load($TMSchema$Part);
		$assignStatic(TMSchema$State::stateMap, $new($EnumMap, $TMSchema$Part::class$));
		$init($TMSchema$Part);
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::EP_EDITTEXT), $of($$new($TMSchema$StateArray, {
			TMSchema$State::NORMAL,
			TMSchema$State::HOT,
			TMSchema$State::SELECTED,
			TMSchema$State::DISABLED,
			TMSchema$State::FOCUSED,
			TMSchema$State::READONLY,
			TMSchema$State::ASSIST
		})));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::BP_PUSHBUTTON), $of($$new($TMSchema$StateArray, {
			TMSchema$State::NORMAL,
			TMSchema$State::HOT,
			TMSchema$State::PRESSED,
			TMSchema$State::DISABLED,
			TMSchema$State::DEFAULTED
		})));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::BP_RADIOBUTTON), $of($$new($TMSchema$StateArray, {
			TMSchema$State::UNCHECKEDNORMAL,
			TMSchema$State::UNCHECKEDHOT,
			TMSchema$State::UNCHECKEDPRESSED,
			TMSchema$State::UNCHECKEDDISABLED,
			TMSchema$State::CHECKEDNORMAL,
			TMSchema$State::CHECKEDHOT,
			TMSchema$State::CHECKEDPRESSED,
			TMSchema$State::CHECKEDDISABLED
		})));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::BP_CHECKBOX), $of($$new($TMSchema$StateArray, {
			TMSchema$State::UNCHECKEDNORMAL,
			TMSchema$State::UNCHECKEDHOT,
			TMSchema$State::UNCHECKEDPRESSED,
			TMSchema$State::UNCHECKEDDISABLED,
			TMSchema$State::CHECKEDNORMAL,
			TMSchema$State::CHECKEDHOT,
			TMSchema$State::CHECKEDPRESSED,
			TMSchema$State::CHECKEDDISABLED,
			TMSchema$State::MIXEDNORMAL,
			TMSchema$State::MIXEDHOT,
			TMSchema$State::MIXEDPRESSED,
			TMSchema$State::MIXEDDISABLED
		})));
		$var($TMSchema$StateArray, comboBoxStates, $new($TMSchema$StateArray, {
			TMSchema$State::NORMAL,
			TMSchema$State::HOT,
			TMSchema$State::PRESSED,
			TMSchema$State::DISABLED
		}));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::CP_COMBOBOX), $of(comboBoxStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::CP_DROPDOWNBUTTON), $of(comboBoxStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::CP_BACKGROUND), $of(comboBoxStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::CP_TRANSPARENTBACKGROUND), $of(comboBoxStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::CP_BORDER), $of(comboBoxStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::CP_READONLY), $of(comboBoxStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::CP_DROPDOWNBUTTONRIGHT), $of(comboBoxStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::CP_DROPDOWNBUTTONLEFT), $of(comboBoxStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::CP_CUEBANNER), $of(comboBoxStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::HP_HEADERITEM), $of($$new($TMSchema$StateArray, {
			TMSchema$State::NORMAL,
			TMSchema$State::HOT,
			TMSchema$State::PRESSED,
			TMSchema$State::SORTEDNORMAL,
			TMSchema$State::SORTEDHOT,
			TMSchema$State::SORTEDPRESSED,
			TMSchema$State::ICONNORMAL,
			TMSchema$State::ICONHOT,
			TMSchema$State::ICONPRESSED,
			TMSchema$State::ICONSORTEDNORMAL,
			TMSchema$State::ICONSORTEDHOT,
			TMSchema$State::ICONSORTEDPRESSED
		})));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::HP_HEADERSORTARROW), $of($$new($TMSchema$StateArray, {
			TMSchema$State::SORTEDDOWN,
			TMSchema$State::SORTEDUP
		})));
		$var($TMSchema$StateArray, listBoxStates, $new($TMSchema$StateArray, {
			TMSchema$State::NORMAL,
			TMSchema$State::PRESSED,
			TMSchema$State::HOT,
			TMSchema$State::DISABLED
		}));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::LBCP_BORDER_HSCROLL), $of(listBoxStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::LBCP_BORDER_HVSCROLL), $of(listBoxStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::LBCP_BORDER_NOSCROLL), $of(listBoxStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::LBCP_BORDER_VSCROLL), $of(listBoxStates));
		$var($TMSchema$StateArray, scrollBarStates, $new($TMSchema$StateArray, {
			TMSchema$State::NORMAL,
			TMSchema$State::HOT,
			TMSchema$State::PRESSED,
			TMSchema$State::DISABLED,
			TMSchema$State::HOVER
		}));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::SBP_SCROLLBAR), $of(scrollBarStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::SBP_THUMBBTNVERT), $of(scrollBarStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::SBP_THUMBBTNHORZ), $of(scrollBarStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::SBP_GRIPPERVERT), $of(scrollBarStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::SBP_GRIPPERHORZ), $of(scrollBarStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::SBP_ARROWBTN), $of($$new($TMSchema$StateArray, {
			TMSchema$State::UPNORMAL,
			TMSchema$State::UPHOT,
			TMSchema$State::UPPRESSED,
			TMSchema$State::UPDISABLED,
			TMSchema$State::DOWNNORMAL,
			TMSchema$State::DOWNHOT,
			TMSchema$State::DOWNPRESSED,
			TMSchema$State::DOWNDISABLED,
			TMSchema$State::LEFTNORMAL,
			TMSchema$State::LEFTHOT,
			TMSchema$State::LEFTPRESSED,
			TMSchema$State::LEFTDISABLED,
			TMSchema$State::RIGHTNORMAL,
			TMSchema$State::RIGHTHOT,
			TMSchema$State::RIGHTPRESSED,
			TMSchema$State::RIGHTDISABLED,
			TMSchema$State::UPHOVER,
			TMSchema$State::DOWNHOVER,
			TMSchema$State::LEFTHOVER,
			TMSchema$State::RIGHTHOVER
		})));
		$var($TMSchema$StateArray, spinnerStates, $new($TMSchema$StateArray, {
			TMSchema$State::NORMAL,
			TMSchema$State::HOT,
			TMSchema$State::PRESSED,
			TMSchema$State::DISABLED
		}));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::SPNP_UP), $of(spinnerStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::SPNP_DOWN), $of(spinnerStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::TVP_GLYPH), $of($$new($TMSchema$StateArray, {
			TMSchema$State::CLOSED,
			TMSchema$State::OPENED
		})));
		$var($TMSchema$StateArray, frameButtonStates, $new($TMSchema$StateArray, {
			TMSchema$State::NORMAL,
			TMSchema$State::HOT,
			TMSchema$State::PUSHED,
			TMSchema$State::DISABLED,
			TMSchema$State::INACTIVENORMAL,
			TMSchema$State::INACTIVEHOT,
			TMSchema$State::INACTIVEPUSHED,
			TMSchema$State::INACTIVEDISABLED
		}));
		$init($TMSchema$Control);
		$var($String, var$0, $TMSchema$Control::WINDOW->toString());
		int32_t var$1 = $TMSchema$Part::WP_CLOSEBUTTON->getValue();
		$init($TMSchema$Prop);
		if ($ThemeReader::getInt(var$0, var$1, 1, $TMSchema$Prop::IMAGECOUNT->getValue()) == 10) {
			$assign(frameButtonStates, $new($TMSchema$StateArray, {
				TMSchema$State::NORMAL,
				TMSchema$State::HOT,
				TMSchema$State::PUSHED,
				TMSchema$State::DISABLED,
				(TMSchema$State*)nullptr,
				TMSchema$State::INACTIVENORMAL,
				TMSchema$State::INACTIVEHOT,
				TMSchema$State::INACTIVEPUSHED,
				TMSchema$State::INACTIVEDISABLED,
				(TMSchema$State*)nullptr
			}));
		}
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::WP_MINBUTTON), $of(frameButtonStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::WP_MAXBUTTON), $of(frameButtonStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::WP_RESTOREBUTTON), $of(frameButtonStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::WP_CLOSEBUTTON), $of(frameButtonStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::TKP_TRACK), $of($$new($TMSchema$StateArray, {TMSchema$State::NORMAL})));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::TKP_TRACKVERT), $of($$new($TMSchema$StateArray, {TMSchema$State::NORMAL})));
		$var($TMSchema$StateArray, sliderThumbStates, $new($TMSchema$StateArray, {
			TMSchema$State::NORMAL,
			TMSchema$State::HOT,
			TMSchema$State::PRESSED,
			TMSchema$State::FOCUSED,
			TMSchema$State::DISABLED
		}));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::TKP_THUMB), $of(sliderThumbStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::TKP_THUMBBOTTOM), $of(sliderThumbStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::TKP_THUMBTOP), $of(sliderThumbStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::TKP_THUMBVERT), $of(sliderThumbStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::TKP_THUMBRIGHT), $of(sliderThumbStates));
		$var($TMSchema$StateArray, tabStates, $new($TMSchema$StateArray, {
			TMSchema$State::NORMAL,
			TMSchema$State::HOT,
			TMSchema$State::SELECTED,
			TMSchema$State::DISABLED,
			TMSchema$State::FOCUSED
		}));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::TABP_TABITEM), $of(tabStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::TABP_TABITEMLEFTEDGE), $of(tabStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::TABP_TABITEMRIGHTEDGE), $of(tabStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::TP_BUTTON), $of($$new($TMSchema$StateArray, {
			TMSchema$State::NORMAL,
			TMSchema$State::HOT,
			TMSchema$State::PRESSED,
			TMSchema$State::DISABLED,
			TMSchema$State::CHECKED,
			TMSchema$State::HOTCHECKED
		})));
		$var($TMSchema$StateArray, frameStates, $new($TMSchema$StateArray, {
			TMSchema$State::ACTIVE,
			TMSchema$State::INACTIVE
		}));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::WP_WINDOW), $of(frameStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::WP_FRAMELEFT), $of(frameStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::WP_FRAMERIGHT), $of(frameStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::WP_FRAMEBOTTOM), $of(frameStates));
		$var($TMSchema$StateArray, captionStates, $new($TMSchema$StateArray, {
			TMSchema$State::ACTIVE,
			TMSchema$State::INACTIVE,
			TMSchema$State::DISABLED
		}));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::WP_CAPTION), $of(captionStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::WP_MINCAPTION), $of(captionStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::WP_MAXCAPTION), $of(captionStates));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::MP_BARBACKGROUND), $of($$new($TMSchema$StateArray, {
			TMSchema$State::ACTIVE,
			TMSchema$State::INACTIVE
		})));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::MP_BARITEM), $of($$new($TMSchema$StateArray, {
			TMSchema$State::NORMAL,
			TMSchema$State::HOT,
			TMSchema$State::PUSHED,
			TMSchema$State::DISABLED,
			TMSchema$State::DISABLEDHOT,
			TMSchema$State::DISABLEDPUSHED
		})));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::MP_POPUPCHECK), $of($$new($TMSchema$StateArray, {
			TMSchema$State::CHECKMARKNORMAL,
			TMSchema$State::CHECKMARKDISABLED,
			TMSchema$State::BULLETNORMAL,
			TMSchema$State::BULLETDISABLED
		})));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::MP_POPUPCHECKBACKGROUND), $of($$new($TMSchema$StateArray, {
			TMSchema$State::DISABLEDPUSHED,
			TMSchema$State::NORMAL,
			TMSchema$State::BITMAP
		})));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::MP_POPUPITEM), $of($$new($TMSchema$StateArray, {
			TMSchema$State::NORMAL,
			TMSchema$State::HOT,
			TMSchema$State::DISABLED,
			TMSchema$State::DISABLEDHOT
		})));
		$nc(TMSchema$State::stateMap)->put(static_cast<$Enum*>($TMSchema$Part::MP_POPUPSUBMENU), $of($$new($TMSchema$StateArray, {
			TMSchema$State::NORMAL,
			TMSchema$State::DISABLED
		})));
	}
}

int32_t TMSchema$State::getValue($TMSchema$Part* part, TMSchema$State* state) {
	$load(TMSchema$State);
	$synchronized(class$) {
		$init(TMSchema$State);
		if (TMSchema$State::stateMap == nullptr) {
			initStates();
		}
		$var($EnumArray, states, $cast($EnumArray, $nc(TMSchema$State::stateMap)->get(part)));
		if (states != nullptr) {
			for (int32_t i = 0; i < states->length; ++i) {
				if ($equals(state, states->get(i))) {
					return i + 1;
				}
			}
		}
		if (state == nullptr || state == TMSchema$State::NORMAL) {
			return 1;
		}
		return 0;
	}
}

void clinit$TMSchema$State($Class* class$) {
	$assignStatic(TMSchema$State::ACTIVE, $new(TMSchema$State, "ACTIVE"_s, 0));
	$assignStatic(TMSchema$State::ASSIST, $new(TMSchema$State, "ASSIST"_s, 1));
	$assignStatic(TMSchema$State::BITMAP, $new(TMSchema$State, "BITMAP"_s, 2));
	$assignStatic(TMSchema$State::CHECKED, $new(TMSchema$State, "CHECKED"_s, 3));
	$assignStatic(TMSchema$State::CHECKEDDISABLED, $new(TMSchema$State, "CHECKEDDISABLED"_s, 4));
	$assignStatic(TMSchema$State::CHECKEDHOT, $new(TMSchema$State, "CHECKEDHOT"_s, 5));
	$assignStatic(TMSchema$State::CHECKEDNORMAL, $new(TMSchema$State, "CHECKEDNORMAL"_s, 6));
	$assignStatic(TMSchema$State::CHECKEDPRESSED, $new(TMSchema$State, "CHECKEDPRESSED"_s, 7));
	$assignStatic(TMSchema$State::CHECKMARKNORMAL, $new(TMSchema$State, "CHECKMARKNORMAL"_s, 8));
	$assignStatic(TMSchema$State::CHECKMARKDISABLED, $new(TMSchema$State, "CHECKMARKDISABLED"_s, 9));
	$assignStatic(TMSchema$State::BULLETNORMAL, $new(TMSchema$State, "BULLETNORMAL"_s, 10));
	$assignStatic(TMSchema$State::BULLETDISABLED, $new(TMSchema$State, "BULLETDISABLED"_s, 11));
	$assignStatic(TMSchema$State::CLOSED, $new(TMSchema$State, "CLOSED"_s, 12));
	$assignStatic(TMSchema$State::DEFAULTED, $new(TMSchema$State, "DEFAULTED"_s, 13));
	$assignStatic(TMSchema$State::DISABLED, $new(TMSchema$State, "DISABLED"_s, 14));
	$assignStatic(TMSchema$State::DISABLEDHOT, $new(TMSchema$State, "DISABLEDHOT"_s, 15));
	$assignStatic(TMSchema$State::DISABLEDPUSHED, $new(TMSchema$State, "DISABLEDPUSHED"_s, 16));
	$assignStatic(TMSchema$State::DOWNDISABLED, $new(TMSchema$State, "DOWNDISABLED"_s, 17));
	$assignStatic(TMSchema$State::DOWNHOT, $new(TMSchema$State, "DOWNHOT"_s, 18));
	$assignStatic(TMSchema$State::DOWNNORMAL, $new(TMSchema$State, "DOWNNORMAL"_s, 19));
	$assignStatic(TMSchema$State::DOWNPRESSED, $new(TMSchema$State, "DOWNPRESSED"_s, 20));
	$assignStatic(TMSchema$State::FOCUSED, $new(TMSchema$State, "FOCUSED"_s, 21));
	$assignStatic(TMSchema$State::HOT, $new(TMSchema$State, "HOT"_s, 22));
	$assignStatic(TMSchema$State::HOTCHECKED, $new(TMSchema$State, "HOTCHECKED"_s, 23));
	$assignStatic(TMSchema$State::ICONHOT, $new(TMSchema$State, "ICONHOT"_s, 24));
	$assignStatic(TMSchema$State::ICONNORMAL, $new(TMSchema$State, "ICONNORMAL"_s, 25));
	$assignStatic(TMSchema$State::ICONPRESSED, $new(TMSchema$State, "ICONPRESSED"_s, 26));
	$assignStatic(TMSchema$State::ICONSORTEDHOT, $new(TMSchema$State, "ICONSORTEDHOT"_s, 27));
	$assignStatic(TMSchema$State::ICONSORTEDNORMAL, $new(TMSchema$State, "ICONSORTEDNORMAL"_s, 28));
	$assignStatic(TMSchema$State::ICONSORTEDPRESSED, $new(TMSchema$State, "ICONSORTEDPRESSED"_s, 29));
	$assignStatic(TMSchema$State::INACTIVE, $new(TMSchema$State, "INACTIVE"_s, 30));
	$assignStatic(TMSchema$State::INACTIVENORMAL, $new(TMSchema$State, "INACTIVENORMAL"_s, 31));
	$assignStatic(TMSchema$State::INACTIVEHOT, $new(TMSchema$State, "INACTIVEHOT"_s, 32));
	$assignStatic(TMSchema$State::INACTIVEPUSHED, $new(TMSchema$State, "INACTIVEPUSHED"_s, 33));
	$assignStatic(TMSchema$State::INACTIVEDISABLED, $new(TMSchema$State, "INACTIVEDISABLED"_s, 34));
	$assignStatic(TMSchema$State::LEFTDISABLED, $new(TMSchema$State, "LEFTDISABLED"_s, 35));
	$assignStatic(TMSchema$State::LEFTHOT, $new(TMSchema$State, "LEFTHOT"_s, 36));
	$assignStatic(TMSchema$State::LEFTNORMAL, $new(TMSchema$State, "LEFTNORMAL"_s, 37));
	$assignStatic(TMSchema$State::LEFTPRESSED, $new(TMSchema$State, "LEFTPRESSED"_s, 38));
	$assignStatic(TMSchema$State::MIXEDDISABLED, $new(TMSchema$State, "MIXEDDISABLED"_s, 39));
	$assignStatic(TMSchema$State::MIXEDHOT, $new(TMSchema$State, "MIXEDHOT"_s, 40));
	$assignStatic(TMSchema$State::MIXEDNORMAL, $new(TMSchema$State, "MIXEDNORMAL"_s, 41));
	$assignStatic(TMSchema$State::MIXEDPRESSED, $new(TMSchema$State, "MIXEDPRESSED"_s, 42));
	$assignStatic(TMSchema$State::NORMAL, $new(TMSchema$State, "NORMAL"_s, 43));
	$assignStatic(TMSchema$State::PRESSED, $new(TMSchema$State, "PRESSED"_s, 44));
	$assignStatic(TMSchema$State::OPENED, $new(TMSchema$State, "OPENED"_s, 45));
	$assignStatic(TMSchema$State::PUSHED, $new(TMSchema$State, "PUSHED"_s, 46));
	$assignStatic(TMSchema$State::READONLY, $new(TMSchema$State, "READONLY"_s, 47));
	$assignStatic(TMSchema$State::RIGHTDISABLED, $new(TMSchema$State, "RIGHTDISABLED"_s, 48));
	$assignStatic(TMSchema$State::RIGHTHOT, $new(TMSchema$State, "RIGHTHOT"_s, 49));
	$assignStatic(TMSchema$State::RIGHTNORMAL, $new(TMSchema$State, "RIGHTNORMAL"_s, 50));
	$assignStatic(TMSchema$State::RIGHTPRESSED, $new(TMSchema$State, "RIGHTPRESSED"_s, 51));
	$assignStatic(TMSchema$State::SELECTED, $new(TMSchema$State, "SELECTED"_s, 52));
	$assignStatic(TMSchema$State::UNCHECKEDDISABLED, $new(TMSchema$State, "UNCHECKEDDISABLED"_s, 53));
	$assignStatic(TMSchema$State::UNCHECKEDHOT, $new(TMSchema$State, "UNCHECKEDHOT"_s, 54));
	$assignStatic(TMSchema$State::UNCHECKEDNORMAL, $new(TMSchema$State, "UNCHECKEDNORMAL"_s, 55));
	$assignStatic(TMSchema$State::UNCHECKEDPRESSED, $new(TMSchema$State, "UNCHECKEDPRESSED"_s, 56));
	$assignStatic(TMSchema$State::UPDISABLED, $new(TMSchema$State, "UPDISABLED"_s, 57));
	$assignStatic(TMSchema$State::UPHOT, $new(TMSchema$State, "UPHOT"_s, 58));
	$assignStatic(TMSchema$State::UPNORMAL, $new(TMSchema$State, "UPNORMAL"_s, 59));
	$assignStatic(TMSchema$State::UPPRESSED, $new(TMSchema$State, "UPPRESSED"_s, 60));
	$assignStatic(TMSchema$State::HOVER, $new(TMSchema$State, "HOVER"_s, 61));
	$assignStatic(TMSchema$State::UPHOVER, $new(TMSchema$State, "UPHOVER"_s, 62));
	$assignStatic(TMSchema$State::DOWNHOVER, $new(TMSchema$State, "DOWNHOVER"_s, 63));
	$assignStatic(TMSchema$State::LEFTHOVER, $new(TMSchema$State, "LEFTHOVER"_s, 64));
	$assignStatic(TMSchema$State::RIGHTHOVER, $new(TMSchema$State, "RIGHTHOVER"_s, 65));
	$assignStatic(TMSchema$State::SORTEDDOWN, $new(TMSchema$State, "SORTEDDOWN"_s, 66));
	$assignStatic(TMSchema$State::SORTEDHOT, $new(TMSchema$State, "SORTEDHOT"_s, 67));
	$assignStatic(TMSchema$State::SORTEDNORMAL, $new(TMSchema$State, "SORTEDNORMAL"_s, 68));
	$assignStatic(TMSchema$State::SORTEDPRESSED, $new(TMSchema$State, "SORTEDPRESSED"_s, 69));
	$assignStatic(TMSchema$State::SORTEDUP, $new(TMSchema$State, "SORTEDUP"_s, 70));
	$assignStatic(TMSchema$State::$VALUES, TMSchema$State::$values());
}

TMSchema$State::TMSchema$State() {
}

$Class* TMSchema$State::load$($String* name, bool initialize) {
	$loadClass(TMSchema$State, name, initialize, &_TMSchema$State_ClassInfo_, clinit$TMSchema$State, allocate$TMSchema$State);
	return class$;
}

$Class* TMSchema$State::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com