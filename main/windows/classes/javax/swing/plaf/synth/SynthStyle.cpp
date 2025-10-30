#include <javax/swing/plaf/synth/SynthStyle.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/Insets.h>
#include <java/lang/Number.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIDefaults$LazyInputMap.h>
#include <javax/swing/UIDefaults$LazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthBorder.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef BACKGROUND
#undef BLACK
#undef DEFAULT_VALUES
#undef DISABLED
#undef ENABLED
#undef FOREGROUND
#undef RED
#undef SYNTH_GRAPHICS
#undef TEXT_BACKGROUND
#undef TEXT_FOREGROUND

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Font = ::java::awt::Font;
using $Insets = ::java::awt::Insets;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JTextField = ::javax::swing::JTextField;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyInputMap = ::javax::swing::UIDefaults$LazyInputMap;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthBorder = ::javax::swing::plaf::synth::SynthBorder;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthGraphicsUtils = ::javax::swing::plaf::synth::SynthGraphicsUtils;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthStyle_FieldInfo_[] = {
	{"DEFAULT_VALUES", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;", $PRIVATE | $STATIC, $staticField(SynthStyle, DEFAULT_VALUES)},
	{"SYNTH_GRAPHICS", "Ljavax/swing/plaf/synth/SynthGraphicsUtils;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthStyle, SYNTH_GRAPHICS)},
	{}
};

$MethodInfo _SynthStyle_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthStyle::*)()>(&SynthStyle::init$))},
	{"get", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getBoolean", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/lang/Object;Z)Z", nullptr, $PUBLIC},
	{"getColor", "(Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/ColorType;)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getColorForState", "(Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/ColorType;)Ljava/awt/Color;", nullptr, $PROTECTED | $ABSTRACT},
	{"getDefaultValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)(Object$*)>(&SynthStyle::getDefaultValue))},
	{"getFont", "(Ljavax/swing/plaf/synth/SynthContext;)Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getFontForState", "(Ljavax/swing/plaf/synth/SynthContext;)Ljava/awt/Font;", nullptr, $PROTECTED | $ABSTRACT},
	{"getGraphicsUtils", "(Ljavax/swing/plaf/synth/SynthContext;)Ljavax/swing/plaf/synth/SynthGraphicsUtils;", nullptr, $PUBLIC},
	{"getIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/lang/Object;)Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getInsets", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getInt", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/lang/Object;I)I", nullptr, $PUBLIC},
	{"getPainter", "(Ljavax/swing/plaf/synth/SynthContext;)Ljavax/swing/plaf/synth/SynthPainter;", nullptr, $PUBLIC},
	{"getString", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"installDefaults", "(Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/SynthUI;)V", nullptr, 0},
	{"installDefaults", "(Ljavax/swing/plaf/synth/SynthContext;)V", nullptr, $PUBLIC},
	{"isOpaque", "(Ljavax/swing/plaf/synth/SynthContext;)Z", nullptr, $PUBLIC},
	{"populateDefaultValues", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&SynthStyle::populateDefaultValues))},
	{"uninstallDefaults", "(Ljavax/swing/plaf/synth/SynthContext;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SynthStyle_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.synth.SynthStyle",
	"java.lang.Object",
	nullptr,
	_SynthStyle_FieldInfo_,
	_SynthStyle_MethodInfo_
};

$Object* allocate$SynthStyle($Class* clazz) {
	return $of($alloc(SynthStyle));
}

$Map* SynthStyle::DEFAULT_VALUES = nullptr;
$SynthGraphicsUtils* SynthStyle::SYNTH_GRAPHICS = nullptr;

void SynthStyle::populateDefaultValues() {
	$init(SynthStyle);
	$useLocalCurrentObjectStackCache();
	$var($Object, buttonMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		$of("SPACE"_s),
		$of("pressed"_s),
		$of("released SPACE"_s),
		$of("released"_s)
	})));
	$nc(SynthStyle::DEFAULT_VALUES)->put("Button.focusInputMap"_s, buttonMap);
	$nc(SynthStyle::DEFAULT_VALUES)->put("CheckBox.focusInputMap"_s, buttonMap);
	$nc(SynthStyle::DEFAULT_VALUES)->put("RadioButton.focusInputMap"_s, buttonMap);
	$nc(SynthStyle::DEFAULT_VALUES)->put("ToggleButton.focusInputMap"_s, buttonMap);
	$nc(SynthStyle::DEFAULT_VALUES)->put("SynthArrowButton.focusInputMap"_s, buttonMap);
	$init($Color);
	$nc(SynthStyle::DEFAULT_VALUES)->put("List.dropLineColor"_s, $Color::BLACK);
	$nc(SynthStyle::DEFAULT_VALUES)->put("Tree.dropLineColor"_s, $Color::BLACK);
	$nc(SynthStyle::DEFAULT_VALUES)->put("Table.dropLineColor"_s, $Color::BLACK);
	$nc(SynthStyle::DEFAULT_VALUES)->put("Table.dropLineShortColor"_s, $Color::RED);
	$init($DefaultEditorKit);
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
	$nc(SynthStyle::DEFAULT_VALUES)->put("EditorPane.focusInputMap"_s, multilineInputMap);
	$nc(SynthStyle::DEFAULT_VALUES)->put("TextArea.focusInputMap"_s, multilineInputMap);
	$nc(SynthStyle::DEFAULT_VALUES)->put("TextPane.focusInputMap"_s, multilineInputMap);
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
	$nc(SynthStyle::DEFAULT_VALUES)->put("TextField.focusInputMap"_s, fieldInputMap);
	$nc(SynthStyle::DEFAULT_VALUES)->put("PasswordField.focusInputMap"_s, fieldInputMap);
	$nc(SynthStyle::DEFAULT_VALUES)->put("ComboBox.ancestorInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
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
	})));
	$nc(SynthStyle::DEFAULT_VALUES)->put("Desktop.ancestorInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		$of("ctrl F5"_s),
		$of("restore"_s),
		$of("ctrl F4"_s),
		$of("close"_s),
		$of("ctrl F7"_s),
		$of("move"_s),
		$of("ctrl F8"_s),
		$of("resize"_s),
		$of("RIGHT"_s),
		$of("right"_s),
		$of("KP_RIGHT"_s),
		$of("right"_s),
		$of("shift RIGHT"_s),
		$of("shrinkRight"_s),
		$of("shift KP_RIGHT"_s),
		$of("shrinkRight"_s),
		$of("LEFT"_s),
		$of("left"_s),
		$of("KP_LEFT"_s),
		$of("left"_s),
		$of("shift LEFT"_s),
		$of("shrinkLeft"_s),
		$of("shift KP_LEFT"_s),
		$of("shrinkLeft"_s),
		$of("UP"_s),
		$of("up"_s),
		$of("KP_UP"_s),
		$of("up"_s),
		$of("shift UP"_s),
		$of("shrinkUp"_s),
		$of("shift KP_UP"_s),
		$of("shrinkUp"_s),
		$of("DOWN"_s),
		$of("down"_s),
		$of("KP_DOWN"_s),
		$of("down"_s),
		$of("shift DOWN"_s),
		$of("shrinkDown"_s),
		$of("shift KP_DOWN"_s),
		$of("shrinkDown"_s),
		$of("ESCAPE"_s),
		$of("escape"_s),
		$of("ctrl F9"_s),
		$of("minimize"_s),
		$of("ctrl F10"_s),
		$of("maximize"_s),
		$of("ctrl F6"_s),
		$of("selectNextFrame"_s),
		$of("ctrl TAB"_s),
		$of("selectNextFrame"_s),
		$of("ctrl alt F6"_s),
		$of("selectNextFrame"_s),
		$of("shift ctrl alt F6"_s),
		$of("selectPreviousFrame"_s),
		$of("ctrl F12"_s),
		$of("navigateNext"_s),
		$of("shift ctrl F12"_s),
		$of("navigatePrevious"_s)
	})));
	$nc(SynthStyle::DEFAULT_VALUES)->put("FileChooser.ancestorInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		$of("ESCAPE"_s),
		$of("cancelSelection"_s),
		$of("F2"_s),
		$of("editFileName"_s),
		$of("F5"_s),
		$of("refresh"_s),
		$of("BACK_SPACE"_s),
		$of("Go Up"_s),
		$of("ENTER"_s),
		$of("approveSelection"_s),
		$of("ctrl ENTER"_s),
		$of("approveSelection"_s)
	})));
	$nc(SynthStyle::DEFAULT_VALUES)->put("FormattedTextField.focusInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
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
	})));
	$load($BasicLookAndFeel);
	$nc(SynthStyle::DEFAULT_VALUES)->put("InternalFrame.icon"_s, $($SwingUtilities2::makeIcon($BasicLookAndFeel::class$, $BasicLookAndFeel::class$, "icons/JavaCup16.png"_s)));
	$nc(SynthStyle::DEFAULT_VALUES)->put("InternalFrame.windowBindings"_s, $$new($ObjectArray, {
		$of("shift ESCAPE"_s),
		$of("showSystemMenu"_s),
		$of("ctrl SPACE"_s),
		$of("showSystemMenu"_s),
		$of("ESCAPE"_s),
		$of("hideSystemMenu"_s)
	}));
	$nc(SynthStyle::DEFAULT_VALUES)->put("List.focusInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
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
	})));
	$nc(SynthStyle::DEFAULT_VALUES)->put("List.focusInputMap.RightToLeft"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
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
	})));
	$nc(SynthStyle::DEFAULT_VALUES)->put("MenuBar.windowBindings"_s, $$new($ObjectArray, {
		$of("F10"_s),
		$of("takeFocus"_s)
	}));
	$nc(SynthStyle::DEFAULT_VALUES)->put("OptionPane.windowBindings"_s, $$new($ObjectArray, {
		$of("ESCAPE"_s),
		$of("close"_s)
	}));
	$nc(SynthStyle::DEFAULT_VALUES)->put("RootPane.defaultButtonWindowKeyBindings"_s, $$new($ObjectArray, {
		$of("ENTER"_s),
		$of("press"_s),
		$of("released ENTER"_s),
		$of("release"_s),
		$of("ctrl ENTER"_s),
		$of("press"_s),
		$of("ctrl released ENTER"_s),
		$of("release"_s)
	}));
	$nc(SynthStyle::DEFAULT_VALUES)->put("RootPane.ancestorInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		$of("shift F10"_s),
		$of("postPopup"_s)
	})));
	$nc(SynthStyle::DEFAULT_VALUES)->put("ScrollBar.anecstorInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
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
	})));
	$nc(SynthStyle::DEFAULT_VALUES)->put("ScrollBar.ancestorInputMap.RightToLeft"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		$of("RIGHT"_s),
		$of("negativeUnitIncrement"_s),
		$of("KP_RIGHT"_s),
		$of("negativeUnitIncrement"_s),
		$of("LEFT"_s),
		$of("positiveUnitIncrement"_s),
		$of("KP_LEFT"_s),
		$of("positiveUnitIncrement"_s)
	})));
	$nc(SynthStyle::DEFAULT_VALUES)->put("ScrollPane.ancestorInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
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
	})));
	$nc(SynthStyle::DEFAULT_VALUES)->put("ScrollPane.ancestorInputMap.RightToLeft"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		$of("ctrl PAGE_UP"_s),
		$of("scrollRight"_s),
		$of("ctrl PAGE_DOWN"_s),
		$of("scrollLeft"_s)
	})));
	$nc(SynthStyle::DEFAULT_VALUES)->put("SplitPane.ancestorInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
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
	})));
	$nc(SynthStyle::DEFAULT_VALUES)->put("Spinner.ancestorInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		$of("UP"_s),
		$of("increment"_s),
		$of("KP_UP"_s),
		$of("increment"_s),
		$of("DOWN"_s),
		$of("decrement"_s),
		$of("KP_DOWN"_s),
		$of("decrement"_s)
	})));
	$nc(SynthStyle::DEFAULT_VALUES)->put("Slider.focusInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
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
		$of("ctrl PAGE_DOWN"_s),
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
		$of("ctrl PAGE_UP"_s),
		$of("positiveBlockIncrement"_s),
		$of("HOME"_s),
		$of("minScroll"_s),
		$of("END"_s),
		$of("maxScroll"_s)
	})));
	$nc(SynthStyle::DEFAULT_VALUES)->put("Slider.focusInputMap.RightToLeft"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		$of("RIGHT"_s),
		$of("negativeUnitIncrement"_s),
		$of("KP_RIGHT"_s),
		$of("negativeUnitIncrement"_s),
		$of("LEFT"_s),
		$of("positiveUnitIncrement"_s),
		$of("KP_LEFT"_s),
		$of("positiveUnitIncrement"_s)
	})));
	$nc(SynthStyle::DEFAULT_VALUES)->put("TabbedPane.ancestorInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		$of("ctrl PAGE_DOWN"_s),
		$of("navigatePageDown"_s),
		$of("ctrl PAGE_UP"_s),
		$of("navigatePageUp"_s),
		$of("ctrl UP"_s),
		$of("requestFocus"_s),
		$of("ctrl KP_UP"_s),
		$of("requestFocus"_s)
	})));
	$nc(SynthStyle::DEFAULT_VALUES)->put("TabbedPane.focusInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
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
		$of("requestFocusForVisibleComponent"_s)
	})));
	$nc(SynthStyle::DEFAULT_VALUES)->put("Table.ancestorInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
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
	})));
	$nc(SynthStyle::DEFAULT_VALUES)->put("TableHeader.ancestorInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		$of("SPACE"_s),
		$of("toggleSortOrder"_s),
		$of("LEFT"_s),
		$of("selectColumnToLeft"_s),
		$of("KP_LEFT"_s),
		$of("selectColumnToLeft"_s),
		$of("RIGHT"_s),
		$of("selectColumnToRight"_s),
		$of("KP_RIGHT"_s),
		$of("selectColumnToRight"_s),
		$of("alt LEFT"_s),
		$of("moveColumnLeft"_s),
		$of("alt KP_LEFT"_s),
		$of("moveColumnLeft"_s),
		$of("alt RIGHT"_s),
		$of("moveColumnRight"_s),
		$of("alt KP_RIGHT"_s),
		$of("moveColumnRight"_s),
		$of("alt shift LEFT"_s),
		$of("resizeLeft"_s),
		$of("alt shift KP_LEFT"_s),
		$of("resizeLeft"_s),
		$of("alt shift RIGHT"_s),
		$of("resizeRight"_s),
		$of("alt shift KP_RIGHT"_s),
		$of("resizeRight"_s),
		$of("ESCAPE"_s),
		$of("focusTable"_s)
	})));
	$nc(SynthStyle::DEFAULT_VALUES)->put("Tree.ancestorInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		$of("ESCAPE"_s),
		$of("cancel"_s)
	})));
	$nc(SynthStyle::DEFAULT_VALUES)->put("Tree.focusInputMap"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		$of("ADD"_s),
		$of("expand"_s),
		$of("SUBTRACT"_s),
		$of("collapse"_s),
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
	})));
	$nc(SynthStyle::DEFAULT_VALUES)->put("Tree.focusInputMap.RightToLeft"_s, $$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		$of("RIGHT"_s),
		$of("selectParent"_s),
		$of("KP_RIGHT"_s),
		$of("selectParent"_s),
		$of("LEFT"_s),
		$of("selectChild"_s),
		$of("KP_LEFT"_s),
		$of("selectChild"_s)
	})));
}

$Object* SynthStyle::getDefaultValue(Object$* key) {
	$init(SynthStyle);
	$synchronized(SynthStyle::class$) {
		if (SynthStyle::DEFAULT_VALUES == nullptr) {
			$assignStatic(SynthStyle::DEFAULT_VALUES, $new($HashMap));
			populateDefaultValues();
		}
		$var($Object, value, $nc(SynthStyle::DEFAULT_VALUES)->get(key));
		if ($instanceOf($UIDefaults$LazyValue, value)) {
			$assign(value, $nc(($cast($UIDefaults$LazyValue, value)))->createValue(nullptr));
			$nc(SynthStyle::DEFAULT_VALUES)->put(key, value);
		}
		return $of(value);
	}
}

void SynthStyle::init$() {
}

$SynthGraphicsUtils* SynthStyle::getGraphicsUtils($SynthContext* context) {
	return SynthStyle::SYNTH_GRAPHICS;
}

$Color* SynthStyle::getColor($SynthContext* context, $ColorType* type) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, c, $nc(context)->getComponent());
	$var($Region, id, context->getRegion());
	if (((int32_t)(context->getComponentState() & (uint32_t)$SynthConstants::DISABLED)) != 0) {
		if ($instanceOf($JTextComponent, c)) {
			$var($JTextComponent, txt, $cast($JTextComponent, c));
			$var($Color, disabledColor, $nc(txt)->getDisabledTextColor());
			if (disabledColor == nullptr || $instanceOf($UIResource, disabledColor)) {
				return getColorForState(context, type);
			}
		} else {
			$init($ColorType);
			if (($instanceOf($JLabel, c) || $instanceOf($JMenuItem, c)) && (type == $ColorType::FOREGROUND || type == $ColorType::TEXT_FOREGROUND)) {
				return getColorForState(context, type);
			}
		}
	}
	$var($Color, color, nullptr);
	if (!$nc(id)->isSubregion()) {
		$init($ColorType);
		if (type == $ColorType::BACKGROUND) {
			$assign(color, $nc(c)->getBackground());
		} else {
			if (type == $ColorType::FOREGROUND) {
				$assign(color, $nc(c)->getForeground());
			} else {
				if (type == $ColorType::TEXT_FOREGROUND) {
					$assign(color, $nc(c)->getForeground());
				}
			}
		}
	}
	if (color == nullptr || $instanceOf($UIResource, color)) {
		$assign(color, getColorForState(context, type));
	}
	if (color == nullptr) {
		$init($ColorType);
		if (type == $ColorType::BACKGROUND || type == $ColorType::TEXT_BACKGROUND) {
			return $nc(c)->getBackground();
		} else {
			if (type == $ColorType::FOREGROUND || type == $ColorType::TEXT_FOREGROUND) {
				return $nc(c)->getForeground();
			}
		}
	}
	return color;
}

$Font* SynthStyle::getFont($SynthContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, c, $nc(context)->getComponent());
	if (context->getComponentState() == $SynthConstants::ENABLED) {
		return $nc(c)->getFont();
	}
	$var($Font, cFont, $nc(c)->getFont());
	if (cFont != nullptr && !($instanceOf($UIResource, cFont))) {
		return cFont;
	}
	return getFontForState(context);
}

$Insets* SynthStyle::getInsets($SynthContext* context, $Insets* insets$renamed) {
	$var($Insets, insets, insets$renamed);
	if (insets == nullptr) {
		$assign(insets, $new($Insets, 0, 0, 0, 0));
	}
	$nc(insets)->top = (insets->bottom = (insets->left = (insets->right = 0)));
	return insets;
}

$SynthPainter* SynthStyle::getPainter($SynthContext* context) {
	return nullptr;
}

bool SynthStyle::isOpaque($SynthContext* context) {
	return true;
}

$Object* SynthStyle::get($SynthContext* context, Object$* key) {
	return $of(getDefaultValue(key));
}

void SynthStyle::installDefaults($SynthContext* context, $SynthUI* ui) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(context)->isSubregion()) {
		$var($JComponent, c, context->getComponent());
		$var($Border, border, $nc(c)->getBorder());
		if (border == nullptr || $instanceOf($UIResource, border)) {
			c->setBorder($$new($SynthBorder, ui, $(getInsets(context, nullptr))));
		}
	}
	installDefaults(context);
}

void SynthStyle::installDefaults($SynthContext* context) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(context)->isSubregion()) {
		$var($JComponent, c, context->getComponent());
		$var($Region, region, context->getRegion());
		$var($Font, font, $nc(c)->getFont());
		if (font == nullptr || ($instanceOf($UIResource, font))) {
			c->setFont($(getFontForState(context)));
		}
		$var($Color, background, c->getBackground());
		if (background == nullptr || ($instanceOf($UIResource, background))) {
			$init($ColorType);
			c->setBackground($(getColorForState(context, $ColorType::BACKGROUND)));
		}
		$var($Color, foreground, c->getForeground());
		if (foreground == nullptr || ($instanceOf($UIResource, foreground))) {
			$init($ColorType);
			c->setForeground($(getColorForState(context, $ColorType::FOREGROUND)));
		}
		$LookAndFeel::installProperty(c, "opaque"_s, $($Boolean::valueOf(isOpaque(context))));
	}
}

void SynthStyle::uninstallDefaults($SynthContext* context) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(context)->isSubregion()) {
		$var($JComponent, c, context->getComponent());
		$var($Border, border, $nc(c)->getBorder());
		if ($instanceOf($UIResource, border)) {
			c->setBorder(nullptr);
		}
	}
}

int32_t SynthStyle::getInt($SynthContext* context, Object$* key, int32_t defaultValue) {
	$var($Object, value, get(context, key));
	if ($instanceOf($Number, value)) {
		return $nc(($cast($Number, value)))->intValue();
	}
	return defaultValue;
}

bool SynthStyle::getBoolean($SynthContext* context, Object$* key, bool defaultValue) {
	$var($Object, value, get(context, key));
	if ($instanceOf($Boolean, value)) {
		return $nc(($cast($Boolean, value)))->booleanValue();
	}
	return defaultValue;
}

$Icon* SynthStyle::getIcon($SynthContext* context, Object$* key) {
	$var($Object, value, get(context, key));
	if ($instanceOf($Icon, value)) {
		return $cast($Icon, value);
	}
	return nullptr;
}

$String* SynthStyle::getString($SynthContext* context, Object$* key, $String* defaultValue) {
	$var($Object, value, get(context, key));
	if ($instanceOf($String, value)) {
		return $cast($String, value);
	}
	return defaultValue;
}

void clinit$SynthStyle($Class* class$) {
	$assignStatic(SynthStyle::SYNTH_GRAPHICS, $new($SynthGraphicsUtils));
}

SynthStyle::SynthStyle() {
}

$Class* SynthStyle::load$($String* name, bool initialize) {
	$loadClass(SynthStyle, name, initialize, &_SynthStyle_ClassInfo_, clinit$SynthStyle, allocate$SynthStyle);
	return class$;
}

$Class* SynthStyle::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax