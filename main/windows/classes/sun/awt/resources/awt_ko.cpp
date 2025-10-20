#include <sun/awt/resources/awt_ko.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace resources {

$MethodInfo _awt_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(awt_ko::*)()>(&awt_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _awt_ko_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.resources.awt_ko",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_awt_ko_MethodInfo_
};

$Object* allocate$awt_ko($Class* clazz) {
	return $of($alloc(awt_ko));
}

void awt_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awt_ko::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AWT.CompositionWindowTitle"_s),
			$of(u"\uc785\ub825 \ucc3d"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.CrosshairCursor"_s),
			$of(u"\uc2ed\uc790 \ucee4\uc11c"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultCursor"_s),
			$of(u"\uae30\ubcf8 \ucee4\uc11c"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultDragCursor"_s),
			$of(u"\uae30\ubcf8 \ub04c\uae30 \ucee4\uc11c"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultDropCursor"_s),
			$of(u"\uae30\ubcf8 \ub193\uae30 \ucee4\uc11c"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultNoDropCursor"_s),
			$of(u"\uae30\ubcf8 NoDrag \ucee4\uc11c"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.EResizeCursor"_s),
			$of(u"\ub3d9\ucabd \ubc29\ud5a5 \ud06c\uae30 \uc870\uc815 \ucee4\uc11c"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.HandCursor"_s),
			$of(u"\uc190 \ucee4\uc11c"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.HostInputMethodDisplayName"_s),
			$of(u"\uc2dc\uc2a4\ud15c \uc785\ub825 \ubc29\ubc95"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InconsistentDLLsWarning"_s),
			$of(u"\uc2dc\uc2a4\ud15c\uc5d0 \uc124\uce58\ub41c DLL(Dynamic Linking Libraries) \uc9d1\ud569\uc774 \uc77c\uce58\ud558\uc9c0 \uc54a\uc544 \ud14d\uc2a4\ud2b8 \uae30\ubc18 \uc791\uc5c5\uc774 \uc81c\ub300\ub85c \uc791\ub3d9\ud558\uc9c0 \uc54a\uc744 \uc218 \uc788\uc2b5\ub2c8\ub2e4. \uc774 \ubb38\uc81c\uc5d0 \ub300\ud55c \uc790\uc138\ud55c \ub0b4\uc6a9\uacfc \ud574\uacb0 \ubc29\ubc95 \uc81c\uc548 \uc0ac\ud56d\uc740 java.sun.com\uc758 Java(TM) 2 SDK, Standard Edition Release Notes\ub97c \ucc38\uc870\ud558\uc2ed\uc2dc\uc624."_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodCreationFailed"_s),
			$of(u"{0}\uc744(\ub97c) \uc0dd\uc131\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4. \uc6d0\uc778: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.ja"_s),
			$of(u"\uc77c\ubcf8\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.ko"_s),
			$of(u"\ud55c\uad6d\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh"_s),
			$of(u"\uc911\uad6d\uc5b4"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh_CN"_s),
			$of(u"\uc911\uad6d\uc5b4 \uac04\uccb4"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh_TW"_s),
			$of(u"\uc911\uad6d\uc5b4 \ubc88\uccb4"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodSelectionMenu"_s),
			$of(u"\uc785\ub825 \ubc29\ubc95 \uc120\ud0dd"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.Less"_s),
			$of("Less"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.MoveCursor"_s),
			$of(u"\uc774\ub3d9 \ucee4\uc11c"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NEResizeCursor"_s),
			$of(u"\ubd81\ub3d9 \ubc29\ud5a5 \ud06c\uae30 \uc870\uc815 \ucee4\uc11c"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NResizeCursor"_s),
			$of(u"\ubd81\ucabd \ubc29\ud5a5 \ud06c\uae30 \uc870\uc815 \ucee4\uc11c"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NWResizeCursor"_s),
			$of(u"\ubd81\uc11c \ubc29\ud5a5 \ud06c\uae30 \uc870\uc815 \ucee4\uc11c"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SEResizeCursor"_s),
			$of(u"\ub0a8\ub3d9 \ubc29\ud5a5 \ud06c\uae30 \uc870\uc815 \ucee4\uc11c"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SResizeCursor"_s),
			$of(u"\ub0a8\ucabd \ubc29\ud5a5 \ud06c\uae30 \uc870\uc815 \ucee4\uc11c"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SWResizeCursor"_s),
			$of(u"\ub0a8\uc11c \ubc29\ud5a5 \ud06c\uae30 \uc870\uc815 \ucee4\uc11c"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.TextCursor"_s),
			$of(u"\ud14d\uc2a4\ud2b8 \ucee4\uc11c"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.WResizeCursor"_s),
			$of(u"\uc11c\ucabd \ubc29\ud5a5 \ud06c\uae30 \uc870\uc815 \ucee4\uc11c"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.WaitCursor"_s),
			$of(u"\ub300\uae30 \ucee4\uc11c"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.accept"_s),
			$of(u"\ub3d9\uc758"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.add"_s),
			$of("NumPad +"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.again"_s),
			$of(u"\ub2e4\uc2dc"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.allCandidates"_s),
			$of(u"\ubaa8\ub4e0 \ud6c4\ubcf4"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.alphanumeric"_s),
			$of(u"\uc601\uc22b\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.alt"_s),
			$of("Alt"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.altGraph"_s),
			$of("Alt Graph"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.ampersand"_s),
			$of("Ampersand"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.asterisk"_s),
			$of("Asterisk"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.at"_s),
			$of("At"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backQuote"_s),
			$of("Back Quote"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backSlash"_s),
			$of("Back Slash"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backSpace"_s),
			$of("Backspace"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.begin"_s),
			$of("Begin"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.braceLeft"_s),
			$of("Left Brace"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.braceRight"_s),
			$of("Right Brace"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.cancel"_s),
			$of("Cancel"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.capsLock"_s),
			$of("Caps Lock"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.circumflex"_s),
			$of("Circumflex"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.clear"_s),
			$of("Clear"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.closeBracket"_s),
			$of("Close Bracket"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.codeInput"_s),
			$of(u"\ucf54\ub4dc \uc785\ub825"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.colon"_s),
			$of("Colon"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.comma"_s),
			$of("Comma"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.compose"_s),
			$of(u"\uad6c\uc131"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.context"_s),
			$of("Context Menu"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.control"_s),
			$of("Ctrl"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.convert"_s),
			$of(u"\ubcc0\ud658"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.copy"_s),
			$of(u"\ubcf5\uc0ac"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.cut"_s),
			$of(u"\uc798\ub77c\ub0b4\uae30"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAboveDot"_s),
			$of("Dead Above Dot"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAboveRing"_s),
			$of("Dead Above Ring"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAcute"_s),
			$of("Dead Acute"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadBreve"_s),
			$of("Dead Breve"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCaron"_s),
			$of("Dead Caron"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCedilla"_s),
			$of("Dead Cedilla"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCircumflex"_s),
			$of("Dead Circumflex"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadDiaeresis"_s),
			$of("Dead Diaeresis"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadDoubleAcute"_s),
			$of("Dead Double Acute"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadGrave"_s),
			$of("Dead Grave"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadIota"_s),
			$of("Dead Iota"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadMacron"_s),
			$of("Dead Macron"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadOgonek"_s),
			$of("Dead Ogonek"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadSemivoicedSound"_s),
			$of("Dead Semivoiced Sound"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadTilde"_s),
			$of("Dead Tilde"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadVoicedSound"_s),
			$of("Dead Voiced Sound"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.decimal"_s),
			$of("NumPad ."_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.delete"_s),
			$of("Delete"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.divide"_s),
			$of("NumPad /"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.dollar"_s),
			$of("Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.down"_s),
			$of("Down"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.end"_s),
			$of("End"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.enter"_s),
			$of("Enter"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.equals"_s),
			$of("Equals"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.escape"_s),
			$of("Escape"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.euro"_s),
			$of("Euro"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.exclamationMark"_s),
			$of("Exclamation Mark"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f1"_s),
			$of("F1"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f10"_s),
			$of("F10"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f11"_s),
			$of("F11"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f12"_s),
			$of("F12"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f13"_s),
			$of("F13"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f14"_s),
			$of("F14"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f15"_s),
			$of("F15"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f16"_s),
			$of("F16"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f17"_s),
			$of("F17"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f18"_s),
			$of("F18"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f19"_s),
			$of("F19"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f2"_s),
			$of("F2"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f20"_s),
			$of("F20"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f21"_s),
			$of("F21"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f22"_s),
			$of("F22"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f23"_s),
			$of("F23"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f24"_s),
			$of("F24"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f3"_s),
			$of("F3"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f4"_s),
			$of("F4"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f5"_s),
			$of("F5"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f6"_s),
			$of("F6"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f7"_s),
			$of("F7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f8"_s),
			$of("F8"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.f9"_s),
			$of("F9"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.final"_s),
			$of("Final"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.find"_s),
			$of(u"\ucc3e\uae30"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.fullWidth"_s),
			$of("Full-Width"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.greater"_s),
			$of("Greater"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.halfWidth"_s),
			$of("Half-Width"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.help"_s),
			$of("Help"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.hiragana"_s),
			$of(u"\ud788\ub77c\uac00\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.home"_s),
			$of("Home"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.inputMethodOnOff"_s),
			$of(u"\uc785\ub825 \ubc29\ubc95 \uc124\uc815/\ud574\uc81c"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.insert"_s),
			$of("Insert"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.invertedExclamationMark"_s),
			$of("Inverted Exclamation Mark"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseHiragana"_s),
			$of(u"\uc77c\ubcf8\uc5b4 \ud788\ub77c\uac00\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseKatakana"_s),
			$of(u"\uc77c\ubcf8\uc5b4 \uac00\ud0c0\uce74\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseRoman"_s),
			$of(u"\uc77c\ubcf8\uc5b4 \ub85c\ub9c8 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kana"_s),
			$of(u"\uac00\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kanaLock"_s),
			$of(u"\uac00\ub098 \uc7a0\uae08"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kanji"_s),
			$of(u"\uac04\uc9c0"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.katakana"_s),
			$of(u"\uac00\ud0c0\uce74\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.left"_s),
			$of("Left"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.leftParenthesis"_s),
			$of("Left Parenthesis"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.meta"_s),
			$of("Meta"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.minus"_s),
			$of("Minus"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.modechange"_s),
			$of(u"\ubaa8\ub4dc \ubcc0\uacbd"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.multiply"_s),
			$of("NumPad *"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.noconvert"_s),
			$of(u"\ubcc0\ud658 \uc548\ud568"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numLock"_s),
			$of("Num Lock"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numberSign"_s),
			$of("Number Sign"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numpad"_s),
			$of("NumPad"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.openBracket"_s),
			$of("Open Bracket"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.paste"_s),
			$of(u"\ubd99\uc5ec\ub123\uae30"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pause"_s),
			$of("Pause"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.period"_s),
			$of("Period"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pgdn"_s),
			$of("Page Down"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pgup"_s),
			$of("Page Up"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.plus"_s),
			$of("Plus"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.previousCandidate"_s),
			$of(u"\uc774\uc804 \ud6c4\ubcf4"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.printScreen"_s),
			$of("Print Screen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.props"_s),
			$of("Props"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.quote"_s),
			$of("Quote"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.quoteDbl"_s),
			$of("Double Quote"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.right"_s),
			$of("Right"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.rightParenthesis"_s),
			$of("Right Parenthesis"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.romanCharacters"_s),
			$of(u"\ub85c\ub9c8 \ubb38\uc790"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.scrollLock"_s),
			$of("Scroll Lock"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.semicolon"_s),
			$of("Semicolon"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.separater"_s),
			$of("NumPad ,"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.separator"_s),
			$of("NumPad ,"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.shift"_s),
			$of("Shift"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.slash"_s),
			$of("Slash"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.space"_s),
			$of("Space"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.stop"_s),
			$of(u"\uc815\uc9c0"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.subtract"_s),
			$of("NumPad -"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.tab"_s),
			$of("Tab"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.undefined"_s),
			$of(u"\uc815\uc758\ub418\uc9c0 \uc54a\uc74c"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.underscore"_s),
			$of("Underscore"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.undo"_s),
			$of(u"\uc2e4\ud589 \ucde8\uc18c"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.unknown"_s),
			$of(u"\uc54c \uc218 \uc5c6\uc74c"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.up"_s),
			$of("Up"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.windows"_s),
			$of("Windows"_s)
		}),
		$$new($ObjectArray, {
			$of("java.awt.def.delay"_s),
			$of("30"_s)
		}),
		$$new($ObjectArray, {
			$of("java.awt.im.style"_s),
			$of("on-the-spot"_s)
		})
	});
}

awt_ko::awt_ko() {
}

$Class* awt_ko::load$($String* name, bool initialize) {
	$loadClass(awt_ko, name, initialize, &_awt_ko_ClassInfo_, allocate$awt_ko);
	return class$;
}

$Class* awt_ko::class$ = nullptr;

		} // resources
	} // awt
} // sun