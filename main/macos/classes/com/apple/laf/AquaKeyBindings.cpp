#include <com/apple/laf/AquaKeyBindings.h>

#include <com/apple/laf/AquaKeyBindings$AquaMultilineAction.h>
#include <com/apple/laf/AquaKeyBindings$BindingsProvider.h>
#include <com/apple/laf/AquaKeyBindings$LateBoundInputMap.h>
#include <com/apple/laf/AquaKeyBindings$SimpleBinding.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/text/DefaultEditorKit$DefaultKeyTypedAction.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Keymap.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $AquaKeyBindings$BindingsProviderArray = $Array<::com::apple::laf::AquaKeyBindings$BindingsProvider>;
using $AquaKeyBindings$AquaMultilineAction = ::com::apple::laf::AquaKeyBindings$AquaMultilineAction;
using $AquaKeyBindings$BindingsProvider = ::com::apple::laf::AquaKeyBindings$BindingsProvider;
using $AquaKeyBindings$LateBoundInputMap = ::com::apple::laf::AquaKeyBindings$LateBoundInputMap;
using $AquaKeyBindings$SimpleBinding = ::com::apple::laf::AquaKeyBindings$SimpleBinding;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $JTextField = ::javax::swing::JTextField;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $DefaultEditorKit$DefaultKeyTypedAction = ::javax::swing::text::DefaultEditorKit$DefaultKeyTypedAction;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $Keymap = ::javax::swing::text::Keymap;
using $TextAction = ::javax::swing::text::TextAction;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaKeyBindings_FieldInfo_[] = {
	{"instance", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaKeyBindings;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaKeyBindings, instance$)},
	{"defaultKeyTypedAction", "Ljavax/swing/text/DefaultEditorKit$DefaultKeyTypedAction;", nullptr, $FINAL, $field(AquaKeyBindings, defaultKeyTypedAction)},
	{"upMultilineAction", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaKeyBindings, upMultilineAction)},
	{"downMultilineAction", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaKeyBindings, downMultilineAction)},
	{"pageUpMultiline", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaKeyBindings, pageUpMultiline)},
	{"pageDownMultiline", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaKeyBindings, pageDownMultiline)},
	{"commonTextEditorBindings", "[Ljava/lang/String;", nullptr, $FINAL, $field(AquaKeyBindings, commonTextEditorBindings)},
	{"moveUpMultilineAction", "Ljavax/swing/text/TextAction;", nullptr, $FINAL, $field(AquaKeyBindings, moveUpMultilineAction)},
	{"moveDownMultilineAction", "Ljavax/swing/text/TextAction;", nullptr, $FINAL, $field(AquaKeyBindings, moveDownMultilineAction)},
	{"pageUpMultilineAction", "Ljavax/swing/text/TextAction;", nullptr, $FINAL, $field(AquaKeyBindings, pageUpMultilineAction)},
	{"pageDownMultilineAction", "Ljavax/swing/text/TextAction;", nullptr, $FINAL, $field(AquaKeyBindings, pageDownMultilineAction)},
	{}
};

$MethodInfo _AquaKeyBindings_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaKeyBindings::*)()>(&AquaKeyBindings::init$))},
	{"getComboBoxInputMap", "()Lcom/apple/laf/AquaKeyBindings$LateBoundInputMap;", nullptr, 0},
	{"getFormattedTextFieldInputMap", "()Lcom/apple/laf/AquaKeyBindings$LateBoundInputMap;", nullptr, 0},
	{"getListInputMap", "()Lcom/apple/laf/AquaKeyBindings$LateBoundInputMap;", nullptr, 0},
	{"getMultiLineTextInputMap", "()Lcom/apple/laf/AquaKeyBindings$LateBoundInputMap;", nullptr, 0},
	{"getPasswordFieldInputMap", "()Lcom/apple/laf/AquaKeyBindings$LateBoundInputMap;", nullptr, 0},
	{"getScrollBarInputMap", "()Lcom/apple/laf/AquaKeyBindings$LateBoundInputMap;", nullptr, 0},
	{"getScrollBarRightToLeftInputMap", "()Lcom/apple/laf/AquaKeyBindings$LateBoundInputMap;", nullptr, 0},
	{"getScrollPaneInputMap", "()Lcom/apple/laf/AquaKeyBindings$LateBoundInputMap;", nullptr, 0},
	{"getSliderInputMap", "()Lcom/apple/laf/AquaKeyBindings$LateBoundInputMap;", nullptr, 0},
	{"getSliderRightToLeftInputMap", "()Lcom/apple/laf/AquaKeyBindings$LateBoundInputMap;", nullptr, 0},
	{"getSpinnerInputMap", "()Lcom/apple/laf/AquaKeyBindings$LateBoundInputMap;", nullptr, 0},
	{"getTableInputMap", "()Lcom/apple/laf/AquaKeyBindings$LateBoundInputMap;", nullptr, 0},
	{"getTableRightToLeftInputMap", "()Lcom/apple/laf/AquaKeyBindings$LateBoundInputMap;", nullptr, 0},
	{"getTextFieldInputMap", "()Lcom/apple/laf/AquaKeyBindings$LateBoundInputMap;", nullptr, 0},
	{"getTreeInputMap", "()Lcom/apple/laf/AquaKeyBindings$LateBoundInputMap;", nullptr, 0},
	{"getTreeRightToLeftInputMap", "()Lcom/apple/laf/AquaKeyBindings$LateBoundInputMap;", nullptr, 0},
	{"installAquaUpDownActions", "(Ljavax/swing/text/JTextComponent;)V", nullptr, 0},
	{"instance", "()Lcom/apple/laf/AquaKeyBindings;", nullptr, $STATIC, $method(static_cast<AquaKeyBindings*(*)()>(&AquaKeyBindings::instance))},
	{"setDefaultAction", "(Ljava/lang/String;)V", nullptr, 0},
	{}
};

$InnerClassInfo _AquaKeyBindings_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaKeyBindings$AquaMultilineAction", "com.apple.laf.AquaKeyBindings", "AquaMultilineAction", $STATIC},
	{"com.apple.laf.AquaKeyBindings$DeleteWordAction", "com.apple.laf.AquaKeyBindings", "DeleteWordAction", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaKeyBindings$LateBoundInputMap", "com.apple.laf.AquaKeyBindings", "LateBoundInputMap", $STATIC},
	{"com.apple.laf.AquaKeyBindings$SimpleBinding", "com.apple.laf.AquaKeyBindings", "SimpleBinding", $STATIC},
	{"com.apple.laf.AquaKeyBindings$BindingsProvider", "com.apple.laf.AquaKeyBindings", "BindingsProvider", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AquaKeyBindings_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaKeyBindings",
	"java.lang.Object",
	nullptr,
	_AquaKeyBindings_FieldInfo_,
	_AquaKeyBindings_MethodInfo_,
	nullptr,
	nullptr,
	_AquaKeyBindings_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaKeyBindings$AquaMultilineAction,com.apple.laf.AquaKeyBindings$DeleteWordAction,com.apple.laf.AquaKeyBindings$LateBoundInputMap,com.apple.laf.AquaKeyBindings$SimpleBinding,com.apple.laf.AquaKeyBindings$BindingsProvider"
};

$Object* allocate$AquaKeyBindings($Class* clazz) {
	return $of($alloc(AquaKeyBindings));
}

$AquaUtils$RecyclableSingleton* AquaKeyBindings::instance$ = nullptr;
$String* AquaKeyBindings::upMultilineAction = nullptr;
$String* AquaKeyBindings::downMultilineAction = nullptr;
$String* AquaKeyBindings::pageUpMultiline = nullptr;
$String* AquaKeyBindings::pageDownMultiline = nullptr;

void AquaKeyBindings::init$() {
	$set(this, defaultKeyTypedAction, $new($DefaultEditorKit$DefaultKeyTypedAction));
	$init($JTextField);
	$init($DefaultEditorKit);
	$set(this, commonTextEditorBindings, $new($StringArray, {
		"ENTER"_s,
		$JTextField::notifyAction,
		"COPY"_s,
		$DefaultEditorKit::copyAction,
		"CUT"_s,
		$DefaultEditorKit::cutAction,
		"PASTE"_s,
		$DefaultEditorKit::pasteAction,
		"meta A"_s,
		$DefaultEditorKit::selectAllAction,
		"meta C"_s,
		$DefaultEditorKit::copyAction,
		"meta V"_s,
		$DefaultEditorKit::pasteAction,
		"meta X"_s,
		$DefaultEditorKit::cutAction,
		"meta BACK_SLASH"_s,
		"unselect"_s,
		"DELETE"_s,
		$DefaultEditorKit::deleteNextCharAction,
		"alt DELETE"_s,
		"delete-next-word"_s,
		"BACK_SPACE"_s,
		$DefaultEditorKit::deletePrevCharAction,
		"shift BACK_SPACE"_s,
		$DefaultEditorKit::deletePrevCharAction,
		"alt BACK_SPACE"_s,
		"delete-previous-word"_s,
		"LEFT"_s,
		$DefaultEditorKit::backwardAction,
		"KP_LEFT"_s,
		$DefaultEditorKit::backwardAction,
		"RIGHT"_s,
		$DefaultEditorKit::forwardAction,
		"KP_RIGHT"_s,
		$DefaultEditorKit::forwardAction,
		"shift LEFT"_s,
		$DefaultEditorKit::selectionBackwardAction,
		"shift KP_LEFT"_s,
		$DefaultEditorKit::selectionBackwardAction,
		"shift RIGHT"_s,
		$DefaultEditorKit::selectionForwardAction,
		"shift KP_RIGHT"_s,
		$DefaultEditorKit::selectionForwardAction,
		"meta LEFT"_s,
		$DefaultEditorKit::beginLineAction,
		"meta KP_LEFT"_s,
		$DefaultEditorKit::beginLineAction,
		"meta RIGHT"_s,
		$DefaultEditorKit::endLineAction,
		"meta KP_RIGHT"_s,
		$DefaultEditorKit::endLineAction,
		"shift meta LEFT"_s,
		$DefaultEditorKit::selectionBeginLineAction,
		"shift meta KP_LEFT"_s,
		$DefaultEditorKit::selectionBeginLineAction,
		"shift meta RIGHT"_s,
		$DefaultEditorKit::selectionEndLineAction,
		"shift meta KP_RIGHT"_s,
		$DefaultEditorKit::selectionEndLineAction,
		"alt LEFT"_s,
		$DefaultEditorKit::previousWordAction,
		"alt KP_LEFT"_s,
		$DefaultEditorKit::previousWordAction,
		"alt RIGHT"_s,
		$DefaultEditorKit::nextWordAction,
		"alt KP_RIGHT"_s,
		$DefaultEditorKit::nextWordAction,
		"shift alt LEFT"_s,
		$DefaultEditorKit::selectionPreviousWordAction,
		"shift alt KP_LEFT"_s,
		$DefaultEditorKit::selectionPreviousWordAction,
		"shift alt RIGHT"_s,
		$DefaultEditorKit::selectionNextWordAction,
		"shift alt KP_RIGHT"_s,
		$DefaultEditorKit::selectionNextWordAction,
		"control A"_s,
		$DefaultEditorKit::beginLineAction,
		"control B"_s,
		$DefaultEditorKit::backwardAction,
		"control D"_s,
		$DefaultEditorKit::deleteNextCharAction,
		"control E"_s,
		$DefaultEditorKit::endLineAction,
		"control F"_s,
		$DefaultEditorKit::forwardAction,
		"control H"_s,
		$DefaultEditorKit::deletePrevCharAction,
		"control W"_s,
		"delete-previous-word"_s,
		"control shift O"_s,
		"toggle-componentOrientation"_s,
		"END"_s,
		$DefaultEditorKit::endAction,
		"HOME"_s,
		$DefaultEditorKit::beginAction,
		"shift END"_s,
		$DefaultEditorKit::selectionEndAction,
		"shift HOME"_s,
		$DefaultEditorKit::selectionBeginAction,
		"PAGE_DOWN"_s,
		AquaKeyBindings::pageDownMultiline,
		"PAGE_UP"_s,
		AquaKeyBindings::pageUpMultiline,
		"shift PAGE_DOWN"_s,
		"selection-page-down"_s,
		"shift PAGE_UP"_s,
		"selection-page-up"_s,
		"meta shift PAGE_DOWN"_s,
		"selection-page-right"_s,
		"meta shift PAGE_UP"_s,
		"selection-page-left"_s,
		"meta DOWN"_s,
		$DefaultEditorKit::endAction,
		"meta KP_DOWN"_s,
		$DefaultEditorKit::endAction,
		"meta UP"_s,
		$DefaultEditorKit::beginAction,
		"meta KP_UP"_s,
		$DefaultEditorKit::beginAction,
		"shift meta DOWN"_s,
		$DefaultEditorKit::selectionEndAction,
		"shift meta KP_DOWN"_s,
		$DefaultEditorKit::selectionEndAction,
		"shift meta UP"_s,
		$DefaultEditorKit::selectionBeginAction,
		"shift meta KP_UP"_s,
		$DefaultEditorKit::selectionBeginAction
	}));
	$set(this, moveUpMultilineAction, $new($AquaKeyBindings$AquaMultilineAction, AquaKeyBindings::upMultilineAction, $DefaultEditorKit::upAction, $DefaultEditorKit::beginAction));
	$set(this, moveDownMultilineAction, $new($AquaKeyBindings$AquaMultilineAction, AquaKeyBindings::downMultilineAction, $DefaultEditorKit::downAction, $DefaultEditorKit::endAction));
	$set(this, pageUpMultilineAction, $new($AquaKeyBindings$AquaMultilineAction, AquaKeyBindings::pageUpMultiline, $DefaultEditorKit::pageUpAction, $DefaultEditorKit::beginAction));
	$set(this, pageDownMultilineAction, $new($AquaKeyBindings$AquaMultilineAction, AquaKeyBindings::pageDownMultiline, $DefaultEditorKit::pageDownAction, $DefaultEditorKit::endAction));
}

AquaKeyBindings* AquaKeyBindings::instance() {
	$init(AquaKeyBindings);
	return $cast(AquaKeyBindings, $nc(AquaKeyBindings::instance$)->get());
}

void AquaKeyBindings::setDefaultAction($String* keymapName) {
	$var($Keymap, map, $JTextComponent::getKeymap(keymapName));
	$nc(map)->setDefaultAction(this->defaultKeyTypedAction);
}

$AquaKeyBindings$LateBoundInputMap* AquaKeyBindings::getTextFieldInputMap() {
	$useLocalCurrentObjectStackCache();
	$init($DefaultEditorKit);
	return $new($AquaKeyBindings$LateBoundInputMap, $$new($AquaKeyBindings$BindingsProviderArray, {
		static_cast<$AquaKeyBindings$BindingsProvider*>($$new($AquaKeyBindings$SimpleBinding, this->commonTextEditorBindings)),
		static_cast<$AquaKeyBindings$BindingsProvider*>($$new($AquaKeyBindings$SimpleBinding, $$new($StringArray, {
			"DOWN"_s,
			$DefaultEditorKit::endLineAction,
			"KP_DOWN"_s,
			$DefaultEditorKit::endLineAction,
			"UP"_s,
			$DefaultEditorKit::beginLineAction,
			"KP_UP"_s,
			$DefaultEditorKit::beginLineAction,
			"shift DOWN"_s,
			$DefaultEditorKit::selectionEndLineAction,
			"shift KP_DOWN"_s,
			$DefaultEditorKit::selectionEndLineAction,
			"shift UP"_s,
			$DefaultEditorKit::selectionBeginLineAction,
			"shift KP_UP"_s,
			$DefaultEditorKit::selectionBeginLineAction,
			"control P"_s,
			$DefaultEditorKit::beginAction,
			"control N"_s,
			$DefaultEditorKit::endAction,
			"control V"_s,
			$DefaultEditorKit::endAction
		})))
	}));
}

$AquaKeyBindings$LateBoundInputMap* AquaKeyBindings::getPasswordFieldInputMap() {
	$useLocalCurrentObjectStackCache();
	return $new($AquaKeyBindings$LateBoundInputMap, $$new($AquaKeyBindings$BindingsProviderArray, {
		static_cast<$AquaKeyBindings$BindingsProvider*>($$new($AquaKeyBindings$SimpleBinding, $($nc($(getTextFieldInputMap()))->getBindings()))),
		static_cast<$AquaKeyBindings$BindingsProvider*>($$new($AquaKeyBindings$SimpleBinding, $$new($StringArray, {
			"alt LEFT"_s,
			($String*)nullptr,
			"alt KP_LEFT"_s,
			($String*)nullptr,
			"alt RIGHT"_s,
			($String*)nullptr,
			"alt KP_RIGHT"_s,
			($String*)nullptr,
			"shift alt LEFT"_s,
			($String*)nullptr,
			"shift alt KP_LEFT"_s,
			($String*)nullptr,
			"shift alt RIGHT"_s,
			($String*)nullptr,
			"shift alt KP_RIGHT"_s,
			($String*)nullptr
		})))
	}));
}

$AquaKeyBindings$LateBoundInputMap* AquaKeyBindings::getMultiLineTextInputMap() {
	$useLocalCurrentObjectStackCache();
	$init($DefaultEditorKit);
	return $new($AquaKeyBindings$LateBoundInputMap, $$new($AquaKeyBindings$BindingsProviderArray, {
		static_cast<$AquaKeyBindings$BindingsProvider*>($$new($AquaKeyBindings$SimpleBinding, this->commonTextEditorBindings)),
		static_cast<$AquaKeyBindings$BindingsProvider*>($$new($AquaKeyBindings$SimpleBinding, $$new($StringArray, {
			"ENTER"_s,
			$DefaultEditorKit::insertBreakAction,
			"DOWN"_s,
			AquaKeyBindings::downMultilineAction,
			"KP_DOWN"_s,
			AquaKeyBindings::downMultilineAction,
			"UP"_s,
			AquaKeyBindings::upMultilineAction,
			"KP_UP"_s,
			AquaKeyBindings::upMultilineAction,
			"shift DOWN"_s,
			$DefaultEditorKit::selectionDownAction,
			"shift KP_DOWN"_s,
			$DefaultEditorKit::selectionDownAction,
			"shift UP"_s,
			$DefaultEditorKit::selectionUpAction,
			"shift KP_UP"_s,
			$DefaultEditorKit::selectionUpAction,
			"alt shift DOWN"_s,
			$DefaultEditorKit::selectionEndParagraphAction,
			"alt shift KP_DOWN"_s,
			$DefaultEditorKit::selectionEndParagraphAction,
			"alt shift UP"_s,
			$DefaultEditorKit::selectionBeginParagraphAction,
			"alt shift KP_UP"_s,
			$DefaultEditorKit::selectionBeginParagraphAction,
			"control P"_s,
			$DefaultEditorKit::upAction,
			"control N"_s,
			$DefaultEditorKit::downAction,
			"control V"_s,
			AquaKeyBindings::pageDownMultiline,
			"TAB"_s,
			$DefaultEditorKit::insertTabAction,
			"meta SPACE"_s,
			"activate-link-action"_s,
			"meta T"_s,
			"next-link-action"_s,
			"meta shift T"_s,
			"previous-link-action"_s,
			"END"_s,
			$DefaultEditorKit::endAction,
			"HOME"_s,
			$DefaultEditorKit::beginAction,
			"shift END"_s,
			$DefaultEditorKit::selectionEndAction,
			"shift HOME"_s,
			$DefaultEditorKit::selectionBeginAction,
			"PAGE_DOWN"_s,
			AquaKeyBindings::pageDownMultiline,
			"PAGE_UP"_s,
			AquaKeyBindings::pageUpMultiline,
			"shift PAGE_DOWN"_s,
			"selection-page-down"_s,
			"shift PAGE_UP"_s,
			"selection-page-up"_s,
			"meta shift PAGE_DOWN"_s,
			"selection-page-right"_s,
			"meta shift PAGE_UP"_s,
			"selection-page-left"_s
		})))
	}));
}

$AquaKeyBindings$LateBoundInputMap* AquaKeyBindings::getFormattedTextFieldInputMap() {
	$useLocalCurrentObjectStackCache();
	return $new($AquaKeyBindings$LateBoundInputMap, $$new($AquaKeyBindings$BindingsProviderArray, {
		$(static_cast<$AquaKeyBindings$BindingsProvider*>(getTextFieldInputMap())),
		static_cast<$AquaKeyBindings$BindingsProvider*>($$new($AquaKeyBindings$SimpleBinding, $$new($StringArray, {
			"UP"_s,
			"increment"_s,
			"KP_UP"_s,
			"increment"_s,
			"DOWN"_s,
			"decrement"_s,
			"KP_DOWN"_s,
			"decrement"_s,
			"ESCAPE"_s,
			"reset-field-edit"_s
		})))
	}));
}

$AquaKeyBindings$LateBoundInputMap* AquaKeyBindings::getComboBoxInputMap() {
	$useLocalCurrentObjectStackCache();
	return $new($AquaKeyBindings$LateBoundInputMap, $$new($AquaKeyBindings$BindingsProviderArray, {static_cast<$AquaKeyBindings$BindingsProvider*>($$new($AquaKeyBindings$SimpleBinding, $$new($StringArray, {
		"ESCAPE"_s,
		"aquaHidePopup"_s,
		"PAGE_UP"_s,
		"aquaSelectPageUp"_s,
		"PAGE_DOWN"_s,
		"aquaSelectPageDown"_s,
		"HOME"_s,
		"aquaSelectHome"_s,
		"END"_s,
		"aquaSelectEnd"_s,
		"ENTER"_s,
		"enterPressed"_s,
		"UP"_s,
		"aquaSelectPrevious"_s,
		"KP_UP"_s,
		"aquaSelectPrevious"_s,
		"DOWN"_s,
		"aquaSelectNext"_s,
		"KP_DOWN"_s,
		"aquaSelectNext"_s,
		"SPACE"_s,
		"aquaSpacePressed"_s
	})))}));
}

$AquaKeyBindings$LateBoundInputMap* AquaKeyBindings::getListInputMap() {
	$useLocalCurrentObjectStackCache();
	return $new($AquaKeyBindings$LateBoundInputMap, $$new($AquaKeyBindings$BindingsProviderArray, {static_cast<$AquaKeyBindings$BindingsProvider*>($$new($AquaKeyBindings$SimpleBinding, $$new($StringArray, {
		"meta C"_s,
		"copy"_s,
		"meta V"_s,
		"paste"_s,
		"meta X"_s,
		"cut"_s,
		"COPY"_s,
		"copy"_s,
		"PASTE"_s,
		"paste"_s,
		"CUT"_s,
		"cut"_s,
		"UP"_s,
		"selectPreviousRow"_s,
		"KP_UP"_s,
		"selectPreviousRow"_s,
		"shift UP"_s,
		"selectPreviousRowExtendSelection"_s,
		"shift KP_UP"_s,
		"selectPreviousRowExtendSelection"_s,
		"DOWN"_s,
		"selectNextRow"_s,
		"KP_DOWN"_s,
		"selectNextRow"_s,
		"shift DOWN"_s,
		"selectNextRowExtendSelection"_s,
		"shift KP_DOWN"_s,
		"selectNextRowExtendSelection"_s,
		"LEFT"_s,
		"selectPreviousColumn"_s,
		"KP_LEFT"_s,
		"selectPreviousColumn"_s,
		"shift LEFT"_s,
		"selectPreviousColumnExtendSelection"_s,
		"shift KP_LEFT"_s,
		"selectPreviousColumnExtendSelection"_s,
		"RIGHT"_s,
		"selectNextColumn"_s,
		"KP_RIGHT"_s,
		"selectNextColumn"_s,
		"shift RIGHT"_s,
		"selectNextColumnExtendSelection"_s,
		"shift KP_RIGHT"_s,
		"selectNextColumnExtendSelection"_s,
		"meta A"_s,
		"selectAll"_s,
		"HOME"_s,
		"aquaHome"_s,
		"shift HOME"_s,
		"selectFirstRowExtendSelection"_s,
		"END"_s,
		"aquaEnd"_s,
		"shift END"_s,
		"selectLastRowExtendSelection"_s,
		"shift PAGE_UP"_s,
		"scrollUpExtendSelection"_s,
		"shift PAGE_DOWN"_s,
		"scrollDownExtendSelection"_s
	})))}));
}

$AquaKeyBindings$LateBoundInputMap* AquaKeyBindings::getScrollBarInputMap() {
	$useLocalCurrentObjectStackCache();
	return $new($AquaKeyBindings$LateBoundInputMap, $$new($AquaKeyBindings$BindingsProviderArray, {static_cast<$AquaKeyBindings$BindingsProvider*>($$new($AquaKeyBindings$SimpleBinding, $$new($StringArray, {
		"RIGHT"_s,
		"positiveUnitIncrement"_s,
		"KP_RIGHT"_s,
		"positiveUnitIncrement"_s,
		"DOWN"_s,
		"positiveUnitIncrement"_s,
		"KP_DOWN"_s,
		"positiveUnitIncrement"_s,
		"PAGE_DOWN"_s,
		"positiveBlockIncrement"_s,
		"LEFT"_s,
		"negativeUnitIncrement"_s,
		"KP_LEFT"_s,
		"negativeUnitIncrement"_s,
		"UP"_s,
		"negativeUnitIncrement"_s,
		"KP_UP"_s,
		"negativeUnitIncrement"_s,
		"PAGE_UP"_s,
		"negativeBlockIncrement"_s,
		"HOME"_s,
		"minScroll"_s,
		"END"_s,
		"maxScroll"_s
	})))}));
}

$AquaKeyBindings$LateBoundInputMap* AquaKeyBindings::getScrollBarRightToLeftInputMap() {
	$useLocalCurrentObjectStackCache();
	return $new($AquaKeyBindings$LateBoundInputMap, $$new($AquaKeyBindings$BindingsProviderArray, {static_cast<$AquaKeyBindings$BindingsProvider*>($$new($AquaKeyBindings$SimpleBinding, $$new($StringArray, {
		"RIGHT"_s,
		"negativeUnitIncrement"_s,
		"KP_RIGHT"_s,
		"negativeUnitIncrement"_s,
		"LEFT"_s,
		"positiveUnitIncrement"_s,
		"KP_LEFT"_s,
		"positiveUnitIncrement"_s
	})))}));
}

$AquaKeyBindings$LateBoundInputMap* AquaKeyBindings::getScrollPaneInputMap() {
	$useLocalCurrentObjectStackCache();
	return $new($AquaKeyBindings$LateBoundInputMap, $$new($AquaKeyBindings$BindingsProviderArray, {static_cast<$AquaKeyBindings$BindingsProvider*>($$new($AquaKeyBindings$SimpleBinding, $$new($StringArray, {
		"RIGHT"_s,
		"unitScrollRight"_s,
		"KP_RIGHT"_s,
		"unitScrollRight"_s,
		"DOWN"_s,
		"unitScrollDown"_s,
		"KP_DOWN"_s,
		"unitScrollDown"_s,
		"LEFT"_s,
		"unitScrollLeft"_s,
		"KP_LEFT"_s,
		"unitScrollLeft"_s,
		"UP"_s,
		"unitScrollUp"_s,
		"KP_UP"_s,
		"unitScrollUp"_s,
		"PAGE_UP"_s,
		"scrollUp"_s,
		"PAGE_DOWN"_s,
		"scrollDown"_s,
		"HOME"_s,
		"scrollHome"_s,
		"END"_s,
		"scrollEnd"_s
	})))}));
}

$AquaKeyBindings$LateBoundInputMap* AquaKeyBindings::getSliderInputMap() {
	$useLocalCurrentObjectStackCache();
	return $new($AquaKeyBindings$LateBoundInputMap, $$new($AquaKeyBindings$BindingsProviderArray, {static_cast<$AquaKeyBindings$BindingsProvider*>($$new($AquaKeyBindings$SimpleBinding, $$new($StringArray, {
		"RIGHT"_s,
		"positiveUnitIncrement"_s,
		"KP_RIGHT"_s,
		"positiveUnitIncrement"_s,
		"DOWN"_s,
		"negativeUnitIncrement"_s,
		"KP_DOWN"_s,
		"negativeUnitIncrement"_s,
		"PAGE_DOWN"_s,
		"negativeBlockIncrement"_s,
		"LEFT"_s,
		"negativeUnitIncrement"_s,
		"KP_LEFT"_s,
		"negativeUnitIncrement"_s,
		"UP"_s,
		"positiveUnitIncrement"_s,
		"KP_UP"_s,
		"positiveUnitIncrement"_s,
		"PAGE_UP"_s,
		"positiveBlockIncrement"_s,
		"HOME"_s,
		"minScroll"_s,
		"END"_s,
		"maxScroll"_s
	})))}));
}

$AquaKeyBindings$LateBoundInputMap* AquaKeyBindings::getSliderRightToLeftInputMap() {
	$useLocalCurrentObjectStackCache();
	return $new($AquaKeyBindings$LateBoundInputMap, $$new($AquaKeyBindings$BindingsProviderArray, {static_cast<$AquaKeyBindings$BindingsProvider*>($$new($AquaKeyBindings$SimpleBinding, $$new($StringArray, {
		"RIGHT"_s,
		"negativeUnitIncrement"_s,
		"KP_RIGHT"_s,
		"negativeUnitIncrement"_s,
		"LEFT"_s,
		"positiveUnitIncrement"_s,
		"KP_LEFT"_s,
		"positiveUnitIncrement"_s
	})))}));
}

$AquaKeyBindings$LateBoundInputMap* AquaKeyBindings::getSpinnerInputMap() {
	$useLocalCurrentObjectStackCache();
	return $new($AquaKeyBindings$LateBoundInputMap, $$new($AquaKeyBindings$BindingsProviderArray, {static_cast<$AquaKeyBindings$BindingsProvider*>($$new($AquaKeyBindings$SimpleBinding, $$new($StringArray, {
		"UP"_s,
		"increment"_s,
		"KP_UP"_s,
		"increment"_s,
		"DOWN"_s,
		"decrement"_s,
		"KP_DOWN"_s,
		"decrement"_s
	})))}));
}

$AquaKeyBindings$LateBoundInputMap* AquaKeyBindings::getTableInputMap() {
	$useLocalCurrentObjectStackCache();
	return $new($AquaKeyBindings$LateBoundInputMap, $$new($AquaKeyBindings$BindingsProviderArray, {static_cast<$AquaKeyBindings$BindingsProvider*>($$new($AquaKeyBindings$SimpleBinding, $$new($StringArray, {
		"meta C"_s,
		"copy"_s,
		"meta V"_s,
		"paste"_s,
		"meta X"_s,
		"cut"_s,
		"COPY"_s,
		"copy"_s,
		"PASTE"_s,
		"paste"_s,
		"CUT"_s,
		"cut"_s,
		"RIGHT"_s,
		"selectNextColumn"_s,
		"KP_RIGHT"_s,
		"selectNextColumn"_s,
		"LEFT"_s,
		"selectPreviousColumn"_s,
		"KP_LEFT"_s,
		"selectPreviousColumn"_s,
		"DOWN"_s,
		"selectNextRow"_s,
		"KP_DOWN"_s,
		"selectNextRow"_s,
		"UP"_s,
		"selectPreviousRow"_s,
		"KP_UP"_s,
		"selectPreviousRow"_s,
		"shift RIGHT"_s,
		"selectNextColumnExtendSelection"_s,
		"shift KP_RIGHT"_s,
		"selectNextColumnExtendSelection"_s,
		"shift LEFT"_s,
		"selectPreviousColumnExtendSelection"_s,
		"shift KP_LEFT"_s,
		"selectPreviousColumnExtendSelection"_s,
		"shift DOWN"_s,
		"selectNextRowExtendSelection"_s,
		"shift KP_DOWN"_s,
		"selectNextRowExtendSelection"_s,
		"shift UP"_s,
		"selectPreviousRowExtendSelection"_s,
		"shift KP_UP"_s,
		"selectPreviousRowExtendSelection"_s,
		"PAGE_UP"_s,
		"scrollUpChangeSelection"_s,
		"PAGE_DOWN"_s,
		"scrollDownChangeSelection"_s,
		"HOME"_s,
		"selectFirstColumn"_s,
		"END"_s,
		"selectLastColumn"_s,
		"shift PAGE_UP"_s,
		"scrollUpExtendSelection"_s,
		"shift PAGE_DOWN"_s,
		"scrollDownExtendSelection"_s,
		"shift HOME"_s,
		"selectFirstColumnExtendSelection"_s,
		"shift END"_s,
		"selectLastColumnExtendSelection"_s,
		"TAB"_s,
		"selectNextColumnCell"_s,
		"shift TAB"_s,
		"selectPreviousColumnCell"_s,
		"meta A"_s,
		"selectAll"_s,
		"ESCAPE"_s,
		"cancel"_s,
		"ENTER"_s,
		"selectNextRowCell"_s,
		"shift ENTER"_s,
		"selectPreviousRowCell"_s,
		"alt TAB"_s,
		"focusHeader"_s,
		"alt shift TAB"_s,
		"focusHeader"_s
	})))}));
}

$AquaKeyBindings$LateBoundInputMap* AquaKeyBindings::getTableRightToLeftInputMap() {
	$useLocalCurrentObjectStackCache();
	return $new($AquaKeyBindings$LateBoundInputMap, $$new($AquaKeyBindings$BindingsProviderArray, {static_cast<$AquaKeyBindings$BindingsProvider*>($$new($AquaKeyBindings$SimpleBinding, $$new($StringArray, {
		"RIGHT"_s,
		"selectPreviousColumn"_s,
		"KP_RIGHT"_s,
		"selectPreviousColumn"_s,
		"LEFT"_s,
		"selectNextColumn"_s,
		"KP_LEFT"_s,
		"selectNextColumn"_s,
		"shift RIGHT"_s,
		"selectPreviousColumnExtendSelection"_s,
		"shift KP_RIGHT"_s,
		"selectPreviousColumnExtendSelection"_s,
		"shift LEFT"_s,
		"selectNextColumnExtendSelection"_s,
		"shift KP_LEFT"_s,
		"selectNextColumnExtendSelection"_s,
		"ctrl PAGE_UP"_s,
		"scrollRightChangeSelection"_s,
		"ctrl PAGE_DOWN"_s,
		"scrollLeftChangeSelection"_s,
		"ctrl shift PAGE_UP"_s,
		"scrollRightExtendSelection"_s,
		"ctrl shift PAGE_DOWN"_s,
		"scrollLeftExtendSelection"_s
	})))}));
}

$AquaKeyBindings$LateBoundInputMap* AquaKeyBindings::getTreeInputMap() {
	$useLocalCurrentObjectStackCache();
	return $new($AquaKeyBindings$LateBoundInputMap, $$new($AquaKeyBindings$BindingsProviderArray, {static_cast<$AquaKeyBindings$BindingsProvider*>($$new($AquaKeyBindings$SimpleBinding, $$new($StringArray, {
		"meta C"_s,
		"copy"_s,
		"meta V"_s,
		"paste"_s,
		"meta X"_s,
		"cut"_s,
		"COPY"_s,
		"copy"_s,
		"PASTE"_s,
		"paste"_s,
		"CUT"_s,
		"cut"_s,
		"UP"_s,
		"selectPrevious"_s,
		"KP_UP"_s,
		"selectPrevious"_s,
		"shift UP"_s,
		"selectPreviousExtendSelection"_s,
		"shift KP_UP"_s,
		"selectPreviousExtendSelection"_s,
		"DOWN"_s,
		"selectNext"_s,
		"KP_DOWN"_s,
		"selectNext"_s,
		"shift DOWN"_s,
		"selectNextExtendSelection"_s,
		"shift KP_DOWN"_s,
		"selectNextExtendSelection"_s,
		"RIGHT"_s,
		"aquaExpandNode"_s,
		"KP_RIGHT"_s,
		"aquaExpandNode"_s,
		"LEFT"_s,
		"aquaCollapseNode"_s,
		"KP_LEFT"_s,
		"aquaCollapseNode"_s,
		"shift RIGHT"_s,
		"aquaExpandNode"_s,
		"shift KP_RIGHT"_s,
		"aquaExpandNode"_s,
		"shift LEFT"_s,
		"aquaCollapseNode"_s,
		"shift KP_LEFT"_s,
		"aquaCollapseNode"_s,
		"ctrl LEFT"_s,
		"aquaCollapseNode"_s,
		"ctrl KP_LEFT"_s,
		"aquaCollapseNode"_s,
		"ctrl RIGHT"_s,
		"aquaExpandNode"_s,
		"ctrl KP_RIGHT"_s,
		"aquaExpandNode"_s,
		"alt RIGHT"_s,
		"aquaFullyExpandNode"_s,
		"alt KP_RIGHT"_s,
		"aquaFullyExpandNode"_s,
		"alt LEFT"_s,
		"aquaFullyCollapseNode"_s,
		"alt KP_LEFT"_s,
		"aquaFullyCollapseNode"_s,
		"meta A"_s,
		"selectAll"_s,
		"RETURN"_s,
		"startEditing"_s
	})))}));
}

$AquaKeyBindings$LateBoundInputMap* AquaKeyBindings::getTreeRightToLeftInputMap() {
	$useLocalCurrentObjectStackCache();
	return $new($AquaKeyBindings$LateBoundInputMap, $$new($AquaKeyBindings$BindingsProviderArray, {static_cast<$AquaKeyBindings$BindingsProvider*>($$new($AquaKeyBindings$SimpleBinding, $$new($StringArray, {
		"RIGHT"_s,
		"aquaCollapseNode"_s,
		"KP_RIGHT"_s,
		"aquaCollapseNode"_s,
		"LEFT"_s,
		"aquaExpandNode"_s,
		"KP_LEFT"_s,
		"aquaExpandNode"_s,
		"shift RIGHT"_s,
		"aquaCollapseNode"_s,
		"shift KP_RIGHT"_s,
		"aquaCollapseNode"_s,
		"shift LEFT"_s,
		"aquaExpandNode"_s,
		"shift KP_LEFT"_s,
		"aquaExpandNode"_s,
		"ctrl LEFT"_s,
		"aquaExpandNode"_s,
		"ctrl KP_LEFT"_s,
		"aquaExpandNode"_s,
		"ctrl RIGHT"_s,
		"aquaCollapseNode"_s,
		"ctrl KP_RIGHT"_s,
		"aquaCollapseNode"_s
	})))}));
}

void AquaKeyBindings::installAquaUpDownActions($JTextComponent* component) {
	$var($ActionMap, actionMap, $nc(component)->getActionMap());
	$nc(actionMap)->put(AquaKeyBindings::upMultilineAction, this->moveUpMultilineAction);
	actionMap->put(AquaKeyBindings::downMultilineAction, this->moveDownMultilineAction);
	actionMap->put(AquaKeyBindings::pageUpMultiline, this->pageUpMultilineAction);
	actionMap->put(AquaKeyBindings::pageDownMultiline, this->pageDownMultilineAction);
}

void clinit$AquaKeyBindings($Class* class$) {
	$assignStatic(AquaKeyBindings::upMultilineAction, "aqua-move-up"_s);
	$assignStatic(AquaKeyBindings::downMultilineAction, "aqua-move-down"_s);
	$assignStatic(AquaKeyBindings::pageUpMultiline, "aqua-page-up"_s);
	$assignStatic(AquaKeyBindings::pageDownMultiline, "aqua-page-down"_s);
	$assignStatic(AquaKeyBindings::instance$, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, AquaKeyBindings::class$));
}

AquaKeyBindings::AquaKeyBindings() {
}

$Class* AquaKeyBindings::load$($String* name, bool initialize) {
	$loadClass(AquaKeyBindings, name, initialize, &_AquaKeyBindings_ClassInfo_, clinit$AquaKeyBindings, allocate$AquaKeyBindings);
	return class$;
}

$Class* AquaKeyBindings::class$ = nullptr;

		} // laf
	} // apple
} // com