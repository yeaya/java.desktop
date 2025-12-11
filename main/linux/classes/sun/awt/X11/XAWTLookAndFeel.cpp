#include <sun/awt/X11/XAWTLookAndFeel.h>

#include <com/sun/java/swing/plaf/motif/MotifBorders$BevelBorder.h>
#include <com/sun/java/swing/plaf/motif/MotifBorders$FocusBorder.h>
#include <com/sun/java/swing/plaf/motif/MotifLookAndFeel.h>
#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <java/awt/SystemColor.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/UIDefaults$LazyInputMap.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/plaf/BorderUIResource$CompoundBorderUIResource.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/InsetsUIResource.h>
#include <javax/swing/plaf/basic/BasicBorders$MarginBorder.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <sun/awt/X11/MotifColorUtilities.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <jcpp.h>

#undef BACKGROUND_COLOR
#undef DIALOG
#undef MONOSPACED
#undef PLAIN
#undef SANS_SERIF
#undef TRUE

using $ColorArray = $Array<::java::awt::Color>;
using $MotifBorders$BevelBorder = ::com::sun::java::swing::plaf::motif::MotifBorders$BevelBorder;
using $MotifBorders$FocusBorder = ::com::sun::java::swing::plaf::motif::MotifBorders$FocusBorder;
using $MotifLookAndFeel = ::com::sun::java::swing::plaf::motif::MotifLookAndFeel;
using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $SystemColor = ::java::awt::SystemColor;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextField = ::javax::swing::JTextField;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyInputMap = ::javax::swing::UIDefaults$LazyInputMap;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;
using $BorderUIResource$CompoundBorderUIResource = ::javax::swing::plaf::BorderUIResource$CompoundBorderUIResource;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $InsetsUIResource = ::javax::swing::plaf::InsetsUIResource;
using $BasicBorders$MarginBorder = ::javax::swing::plaf::basic::BasicBorders$MarginBorder;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $MotifColorUtilities = ::sun::awt::X11::MotifColorUtilities;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XAWTLookAndFeel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XAWTLookAndFeel::*)()>(&XAWTLookAndFeel::init$))},
	{"initComponentDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED},
	{"initSystemColorDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _XAWTLookAndFeel_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XAWTLookAndFeel",
	"com.sun.java.swing.plaf.motif.MotifLookAndFeel",
	nullptr,
	nullptr,
	_XAWTLookAndFeel_MethodInfo_
};

$Object* allocate$XAWTLookAndFeel($Class* clazz) {
	return $of($alloc(XAWTLookAndFeel));
}

void XAWTLookAndFeel::init$() {
	$MotifLookAndFeel::init$();
}

void XAWTLookAndFeel::initSystemColorDefaults($UIDefaults* table) {
	$var($StringArray, defaultSystemColors, $new($StringArray, {
		"desktop"_s,
		"#005C5C"_s,
		"activeCaption"_s,
		"#000080"_s,
		"activeCaptionText"_s,
		"#FFFFFF"_s,
		"activeCaptionBorder"_s,
		"#B24D7A"_s,
		"inactiveCaption"_s,
		"#AEB2C3"_s,
		"inactiveCaptionText"_s,
		"#000000"_s,
		"inactiveCaptionBorder"_s,
		"#AEB2C3"_s,
		"window"_s,
		"#AEB2C3"_s,
		"windowBorder"_s,
		"#AEB2C3"_s,
		"windowText"_s,
		"#000000"_s,
		"menu"_s,
		"#AEB2C3"_s,
		"menuText"_s,
		"#000000"_s,
		"text"_s,
		"#FFF7E9"_s,
		"textText"_s,
		"#000000"_s,
		"textHighlight"_s,
		"#000000"_s,
		"textHighlightText"_s,
		"#FFF7E9"_s,
		"textInactiveText"_s,
		"#808080"_s,
		"control"_s,
		"#AEB2C3"_s,
		"controlText"_s,
		"#000000"_s,
		"controlHighlight"_s,
		"#DCDEE5"_s,
		"controlLtHighlight"_s,
		"#DCDEE5"_s,
		"controlShadow"_s,
		"#63656F"_s,
		"controlLightShadow"_s,
		"#9397A5"_s,
		"controlDkShadow"_s,
		"#000000"_s,
		"scrollbar"_s,
		"#AEB2C3"_s,
		"info"_s,
		"#FFF7E9"_s,
		"infoText"_s,
		"#000000"_s
	}));
	loadSystemColors(table, defaultSystemColors, true);
}

void XAWTLookAndFeel::initComponentDefaults($UIDefaults* table) {
	$useLocalCurrentObjectStackCache();
	$MotifLookAndFeel::initComponentDefaults(table);
	$init($Font);
	$var($FontUIResource, dialogPlain12, $new($FontUIResource, $Font::DIALOG, $Font::PLAIN, 12));
	$var($FontUIResource, sansSerifPlain12, $new($FontUIResource, $Font::SANS_SERIF, $Font::PLAIN, 12));
	$var($FontUIResource, monospacedPlain12, $new($FontUIResource, $Font::MONOSPACED, $Font::PLAIN, 12));
	$init($Color);
	$var($ColorUIResource, red, $new($ColorUIResource, $Color::red));
	$var($ColorUIResource, black, $new($ColorUIResource, $Color::black));
	$var($ColorUIResource, white, $new($ColorUIResource, $Color::white));
	$var($ColorUIResource, lightGray, $new($ColorUIResource, $Color::lightGray));
	$init($SystemColor);
	$var($ColorUIResource, controlDarker, $new($ColorUIResource, static_cast<$Color*>($SystemColor::controlDkShadow)));
	$var($Color, back, $nc(table)->getColor("control"_s));
	$var($ColorArray, colors, $XComponentPeer::getSystemColors());
	$var($Color, scrollBarBackground, $nc(colors)->get($XComponentPeer::BACKGROUND_COLOR));
	int32_t var$0 = $nc(scrollBarBackground)->getRed();
	int32_t var$1 = scrollBarBackground->getGreen();
	$var($Color, trackColor, $new($Color, $MotifColorUtilities::calculateSelectFromBackground(var$0, var$1, scrollBarBackground->getBlue())));
	$var($Color, var$2, table->getColor("controlShadow"_s));
	$var($Border, loweredBevelBorder, $new($MotifBorders$BevelBorder, false, var$2, $(table->getColor("controlLtHighlight"_s))));
	$var($Color, var$3, table->getColor("controlShadow"_s));
	$var($Border, raisedBevelBorder, $new($MotifBorders$BevelBorder, true, var$3, $(table->getColor("controlLtHighlight"_s))));
	$var($Border, marginBorder, $new($BasicBorders$MarginBorder));
	$var($Color, var$4, table->getColor("control"_s));
	$var($Border, focusBorder, $new($MotifBorders$FocusBorder, var$4, $(table->getColor("activeCaptionBorder"_s))));
	$var($Border, focusBevelBorder, $new($BorderUIResource$CompoundBorderUIResource, focusBorder, loweredBevelBorder));
	$var($Border, textFieldBorder, $new($BorderUIResource$CompoundBorderUIResource, focusBevelBorder, marginBorder));
	$init($DefaultEditorKit);
	$init($JTextField);
	$var($Object, fieldInputMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		$of("COPY"_s),
		$of($DefaultEditorKit::copyAction),
		$of("PASTE"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("CUT"_s),
		$of($DefaultEditorKit::cutAction),
		$of("control C"_s),
		$of($DefaultEditorKit::copyAction),
		$of("control V"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("control X"_s),
		$of($DefaultEditorKit::cutAction),
		$of("control INSERT"_s),
		$of($DefaultEditorKit::copyAction),
		$of("shift INSERT"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("shift DELETE"_s),
		$of($DefaultEditorKit::cutAction),
		$of("control F"_s),
		$of($DefaultEditorKit::forwardAction),
		$of("control B"_s),
		$of($DefaultEditorKit::backwardAction),
		$of("control D"_s),
		$of($DefaultEditorKit::deleteNextCharAction),
		$of("typed \b"_s),
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
		$of("shift LEFT"_s),
		$of($DefaultEditorKit::selectionBackwardAction),
		$of("shift RIGHT"_s),
		$of($DefaultEditorKit::selectionForwardAction),
		$of("control LEFT"_s),
		$of($DefaultEditorKit::previousWordAction),
		$of("control RIGHT"_s),
		$of($DefaultEditorKit::nextWordAction),
		$of("control shift LEFT"_s),
		$of($DefaultEditorKit::selectionPreviousWordAction),
		$of("control shift RIGHT"_s),
		$of($DefaultEditorKit::selectionNextWordAction),
		$of("control SLASH"_s),
		$of($DefaultEditorKit::selectAllAction),
		$of("HOME"_s),
		$of($DefaultEditorKit::beginLineAction),
		$of("END"_s),
		$of($DefaultEditorKit::endLineAction),
		$of("shift HOME"_s),
		$of($DefaultEditorKit::selectionBeginLineAction),
		$of("shift END"_s),
		$of($DefaultEditorKit::selectionEndLineAction),
		$of("control BACK_SLASH"_s),
		$of("unselect"_s),
		$of("ENTER"_s),
		$of($JTextField::notifyAction),
		$of("control shift O"_s),
		$of("toggle-componentOrientation"_s)
	})));
	$var($Object, passwordInputMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		$of("COPY"_s),
		$of($DefaultEditorKit::copyAction),
		$of("PASTE"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("CUT"_s),
		$of($DefaultEditorKit::cutAction),
		$of("control C"_s),
		$of($DefaultEditorKit::copyAction),
		$of("control V"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("control X"_s),
		$of($DefaultEditorKit::cutAction),
		$of("control INSERT"_s),
		$of($DefaultEditorKit::copyAction),
		$of("shift INSERT"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("shift DELETE"_s),
		$of($DefaultEditorKit::cutAction),
		$of("control F"_s),
		$of($DefaultEditorKit::forwardAction),
		$of("control B"_s),
		$of($DefaultEditorKit::backwardAction),
		$of("control D"_s),
		$of($DefaultEditorKit::deleteNextCharAction),
		$of("typed \b"_s),
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
		$of("shift LEFT"_s),
		$of($DefaultEditorKit::selectionBackwardAction),
		$of("shift RIGHT"_s),
		$of($DefaultEditorKit::selectionForwardAction),
		$of("control LEFT"_s),
		$of($DefaultEditorKit::beginLineAction),
		$of("control RIGHT"_s),
		$of($DefaultEditorKit::endLineAction),
		$of("control shift LEFT"_s),
		$of($DefaultEditorKit::selectionBeginLineAction),
		$of("control shift RIGHT"_s),
		$of($DefaultEditorKit::selectionEndLineAction),
		$of("control SLASH"_s),
		$of($DefaultEditorKit::selectAllAction),
		$of("HOME"_s),
		$of($DefaultEditorKit::beginLineAction),
		$of("END"_s),
		$of($DefaultEditorKit::endLineAction),
		$of("shift HOME"_s),
		$of($DefaultEditorKit::selectionBeginLineAction),
		$of("shift END"_s),
		$of($DefaultEditorKit::selectionEndLineAction),
		$of("control BACK_SLASH"_s),
		$of("unselect"_s),
		$of("ENTER"_s),
		$of($JTextField::notifyAction),
		$of("control shift O"_s),
		$of("toggle-componentOrientation"_s)
	})));
	$var($Object, multilineInputMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		$of("COPY"_s),
		$of($DefaultEditorKit::copyAction),
		$of("PASTE"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("CUT"_s),
		$of($DefaultEditorKit::cutAction),
		$of("control C"_s),
		$of($DefaultEditorKit::copyAction),
		$of("control V"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("control X"_s),
		$of($DefaultEditorKit::cutAction),
		$of("control INSERT"_s),
		$of($DefaultEditorKit::copyAction),
		$of("shift INSERT"_s),
		$of($DefaultEditorKit::pasteAction),
		$of("shift DELETE"_s),
		$of($DefaultEditorKit::cutAction),
		$of("control F"_s),
		$of($DefaultEditorKit::forwardAction),
		$of("control B"_s),
		$of($DefaultEditorKit::backwardAction),
		$of("control D"_s),
		$of($DefaultEditorKit::deleteNextCharAction),
		$of("typed \b"_s),
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
		$of("shift LEFT"_s),
		$of($DefaultEditorKit::selectionBackwardAction),
		$of("shift RIGHT"_s),
		$of($DefaultEditorKit::selectionForwardAction),
		$of("control LEFT"_s),
		$of($DefaultEditorKit::previousWordAction),
		$of("control RIGHT"_s),
		$of($DefaultEditorKit::nextWordAction),
		$of("control shift LEFT"_s),
		$of($DefaultEditorKit::selectionPreviousWordAction),
		$of("control shift RIGHT"_s),
		$of($DefaultEditorKit::selectionNextWordAction),
		$of("control SLASH"_s),
		$of($DefaultEditorKit::selectAllAction),
		$of("HOME"_s),
		$of($DefaultEditorKit::beginLineAction),
		$of("END"_s),
		$of($DefaultEditorKit::endLineAction),
		$of("shift HOME"_s),
		$of($DefaultEditorKit::selectionBeginLineAction),
		$of("shift END"_s),
		$of($DefaultEditorKit::selectionEndLineAction),
		$of("control N"_s),
		$of($DefaultEditorKit::downAction),
		$of("control P"_s),
		$of($DefaultEditorKit::upAction),
		$of("UP"_s),
		$of($DefaultEditorKit::upAction),
		$of("DOWN"_s),
		$of($DefaultEditorKit::downAction),
		$of("KP_UP"_s),
		$of($DefaultEditorKit::upAction),
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
		$of("shift DOWN"_s),
		$of($DefaultEditorKit::selectionDownAction),
		$of("shift KP_UP"_s),
		$of($DefaultEditorKit::selectionUpAction),
		$of("shift KP_DOWN"_s),
		$of($DefaultEditorKit::selectionDownAction),
		$of("ENTER"_s),
		$of($DefaultEditorKit::insertBreakAction),
		$of("TAB"_s),
		$of($DefaultEditorKit::insertTabAction),
		$of("control BACK_SLASH"_s),
		$of("unselect"_s),
		$of("control HOME"_s),
		$of($DefaultEditorKit::beginAction),
		$of("control END"_s),
		$of($DefaultEditorKit::endAction),
		$of("control shift HOME"_s),
		$of($DefaultEditorKit::selectionBeginAction),
		$of("control shift END"_s),
		$of($DefaultEditorKit::selectionEndAction),
		$of("control T"_s),
		$of("next-link-action"_s),
		$of("control shift T"_s),
		$of("previous-link-action"_s),
		$of("control SPACE"_s),
		$of("activate-link-action"_s),
		$of("control shift O"_s),
		$of("toggle-componentOrientation"_s)
	})));
	$var($Object, sliderFocusInsets, $new($InsetsUIResource, 0, 0, 0, 0));
	$init($Boolean);
	$var($ObjectArray, defaults, $new($ObjectArray, {
		$of("ScrollBar.background"_s),
		$of(scrollBarBackground),
		$of("ScrollBar.foreground"_s),
		$(table->get("control"_s)),
		$of("ScrollBar.track"_s),
		$of(trackColor),
		$of("ScrollBar.trackHighlight"_s),
		$of(trackColor),
		$of("ScrollBar.thumb"_s),
		$of(scrollBarBackground),
		$of("ScrollBar.thumbHighlight"_s),
		$(table->get("controlHighlight"_s)),
		$of("ScrollBar.thumbDarkShadow"_s),
		$(table->get("controlDkShadow"_s)),
		$of("ScrollBar.thumbShadow"_s),
		$(table->get("controlShadow"_s)),
		$of("ScrollBar.border"_s),
		$of(loweredBevelBorder),
		$of("ScrollBar.allowsAbsolutePositioning"_s),
		$of($Boolean::TRUE),
		$of("ScrollBar.defaultWidth"_s),
		$($of($Integer::valueOf(17))),
		$of("ScrollBar.focusInputMap"_s),
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
			$of("ctrl PAGE_DOWN"_s),
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
			$of("ctrl PAGE_UP"_s),
			$of("negativeBlockIncrement"_s),
			$of("HOME"_s),
			$of("minScroll"_s),
			$of("END"_s),
			$of("maxScroll"_s)
		}))),
		$of("ScrollPane.font"_s),
		$of(dialogPlain12),
		$of("ScrollPane.background"_s),
		$of(scrollBarBackground),
		$of("ScrollPane.foreground"_s),
		$(table->get("controlText"_s)),
		$of("ScrollPane.border"_s),
		($Object*)nullptr,
		$of("ScrollPane.viewportBorder"_s),
		$of(loweredBevelBorder),
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
			$of("typed \b"_s),
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
		$of("TextField.caretForeground"_s),
		$of(black),
		$of("TextField.caretBlinkRate"_s),
		$($of($Integer::valueOf(500))),
		$of("TextField.inactiveForeground"_s),
		$(table->get("textInactiveText"_s)),
		$of("TextField.selectionBackground"_s),
		$(table->get("textHighlight"_s)),
		$of("TextField.selectionForeground"_s),
		$(table->get("textHighlightText"_s)),
		$of("TextField.background"_s),
		$(table->get("window"_s)),
		$of("TextField.foreground"_s),
		$(table->get("textText"_s)),
		$of("TextField.font"_s),
		$of(sansSerifPlain12),
		$of("TextField.border"_s),
		$of(textFieldBorder),
		$of("TextField.focusInputMap"_s),
		fieldInputMap,
		$of("PasswordField.caretForeground"_s),
		$of(black),
		$of("PasswordField.caretBlinkRate"_s),
		$($of($Integer::valueOf(500))),
		$of("PasswordField.inactiveForeground"_s),
		$(table->get("textInactiveText"_s)),
		$of("PasswordField.selectionBackground"_s),
		$(table->get("textHighlight"_s)),
		$of("PasswordField.selectionForeground"_s),
		$(table->get("textHighlightText"_s)),
		$of("PasswordField.background"_s),
		$(table->get("window"_s)),
		$of("PasswordField.foreground"_s),
		$(table->get("textText"_s)),
		$of("PasswordField.font"_s),
		$of(sansSerifPlain12),
		$of("PasswordField.border"_s),
		$of(textFieldBorder),
		$of("PasswordField.focusInputMap"_s),
		passwordInputMap,
		$of("TextArea.caretForeground"_s),
		$of(black),
		$of("TextArea.caretBlinkRate"_s),
		$($of($Integer::valueOf(500))),
		$of("TextArea.inactiveForeground"_s),
		$(table->get("textInactiveText"_s)),
		$of("TextArea.selectionBackground"_s),
		$(table->get("textHighlight"_s)),
		$of("TextArea.selectionForeground"_s),
		$(table->get("textHighlightText"_s)),
		$of("TextArea.background"_s),
		$(table->get("window"_s)),
		$of("TextArea.foreground"_s),
		$(table->get("textText"_s)),
		$of("TextArea.font"_s),
		$of(monospacedPlain12),
		$of("TextArea.border"_s),
		$of(marginBorder),
		$of("TextArea.focusInputMap"_s),
		multilineInputMap
	}));
	table->putDefaults(defaults);
}

XAWTLookAndFeel::XAWTLookAndFeel() {
}

$Class* XAWTLookAndFeel::load$($String* name, bool initialize) {
	$loadClass(XAWTLookAndFeel, name, initialize, &_XAWTLookAndFeel_ClassInfo_, allocate$XAWTLookAndFeel);
	return class$;
}

$Class* XAWTLookAndFeel::class$ = nullptr;

		} // X11
	} // awt
} // sun