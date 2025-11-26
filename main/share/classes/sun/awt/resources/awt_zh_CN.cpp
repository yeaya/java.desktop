#include <sun/awt/resources/awt_zh_CN.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace resources {

$MethodInfo _awt_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(awt_zh_CN::*)()>(&awt_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _awt_zh_CN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.resources.awt_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_awt_zh_CN_MethodInfo_
};

$Object* allocate$awt_zh_CN($Class* clazz) {
	return $of($alloc(awt_zh_CN));
}

void awt_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awt_zh_CN::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AWT.CompositionWindowTitle"_s),
			$of(u"\u8f93\u5165\u7a97\u53e3"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.CrosshairCursor"_s),
			$of(u"\u5341\u5b57\u5149\u6807"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultCursor"_s),
			$of(u"\u9ed8\u8ba4\u5149\u6807"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultDragCursor"_s),
			$of(u"\u9ed8\u8ba4\u62d6\u52a8\u5149\u6807"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultDropCursor"_s),
			$of(u"\u9ed8\u8ba4\u653e\u7f6e\u5149\u6807"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultNoDropCursor"_s),
			$of(u"\u9ed8\u8ba4\u65e0\u62d6\u52a8\u5149\u6807"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.EResizeCursor"_s),
			$of(u"\u201c\u5411\u4e1c\u8c03\u6574\u5927\u5c0f\u201d\u5149\u6807"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.HandCursor"_s),
			$of(u"\u624b\u578b\u5149\u6807"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.HostInputMethodDisplayName"_s),
			$of(u"\u7cfb\u7edf\u8f93\u5165\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InconsistentDLLsWarning"_s),
			$of(u"\u57fa\u4e8e\u6587\u672c\u7684\u64cd\u4f5c\u53ef\u80fd\u4e0d\u80fd\u6b63\u5e38\u8fd0\u884c, \u56e0\u4e3a\u7cfb\u7edf\u4e0a\u5b89\u88c5\u4e86\u4e00\u5957\u4e0d\u4e00\u81f4\u7684\u52a8\u6001\u94fe\u63a5\u5e93 (DLL)\u3002\u6709\u5173\u6b64\u95ee\u9898\u7684\u8be6\u7ec6\u4fe1\u606f\u548c\u5efa\u8bae\u7684\u89e3\u51b3\u65b9\u6848, \u8bf7\u53c2\u9605 java.sun.com \u7f51\u7ad9\u4e0a\u7684 Java(TM) 2 SDK, \u6807\u51c6\u7248\u53d1\u884c\u8bf4\u660e\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodCreationFailed"_s),
			$of(u"\u65e0\u6cd5\u521b\u5efa{0}\u3002\u539f\u56e0: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.ja"_s),
			$of(u"\u65e5\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.ko"_s),
			$of(u"\u671d\u9c9c\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh"_s),
			$of(u"\u4e2d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh_CN"_s),
			$of(u"\u7b80\u4f53\u4e2d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh_TW"_s),
			$of(u"\u7e41\u4f53\u4e2d\u6587"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodSelectionMenu"_s),
			$of(u"\u9009\u62e9\u8f93\u5165\u7a97\u53e3"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.Less"_s),
			$of(u"\u5c0f\u4e8e\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.MoveCursor"_s),
			$of(u"\u79fb\u52a8\u5149\u6807"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NEResizeCursor"_s),
			$of(u"\u201c\u5411\u4e1c\u5317\u65b9\u5411\u8c03\u6574\u5927\u5c0f\u201d\u5149\u6807"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NResizeCursor"_s),
			$of(u"\u201c\u5411\u5317\u8c03\u6574\u5927\u5c0f\u201d\u5149\u6807"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NWResizeCursor"_s),
			$of(u"\u201c\u5411\u897f\u5317\u65b9\u5411\u8c03\u6574\u5927\u5c0f\u201d\u5149\u6807"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SEResizeCursor"_s),
			$of(u"\u201c\u5411\u4e1c\u5357\u65b9\u5411\u8c03\u6574\u5927\u5c0f\u201d\u5149\u6807"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SResizeCursor"_s),
			$of(u"\u201c\u5411\u5357\u8c03\u6574\u5927\u5c0f\u201d\u5149\u6807"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SWResizeCursor"_s),
			$of(u"\u201c\u5411\u897f\u5357\u65b9\u5411\u8c03\u6574\u5927\u5c0f\u201d\u5149\u6807"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.TextCursor"_s),
			$of(u"\u6587\u672c\u5149\u6807"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.WResizeCursor"_s),
			$of(u"\u201c\u5411\u897f\u8c03\u6574\u5927\u5c0f\u201d\u5149\u6807"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.WaitCursor"_s),
			$of(u"\u6c99\u6f0f\u5149\u6807"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.accept"_s),
			$of(u"\u63a5\u53d7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.add"_s),
			$of("NumPad +"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.again"_s),
			$of(u"\u91cd\u65b0"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.allCandidates"_s),
			$of(u"\u6240\u6709\u5019\u9009\u9879"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.alphanumeric"_s),
			$of(u"\u5b57\u6bcd\u6570\u5b57"_s)
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
			$of(u"& \u7b26\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.asterisk"_s),
			$of(u"\u661f\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.at"_s),
			$of(u"@ \u7b26\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backQuote"_s),
			$of(u"\u540e\u5f15\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backSlash"_s),
			$of(u"\u53cd\u659c\u6760"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backSpace"_s),
			$of("Backspace"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.begin"_s),
			$of(u"\u5f00\u59cb"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.braceLeft"_s),
			$of(u"\u5de6\u82b1\u62ec\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.braceRight"_s),
			$of(u"\u53f3\u82b1\u62ec\u53f7"_s)
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
			$of(u"\u6291\u626c\u7b26\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.clear"_s),
			$of("Clear"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.closeBracket"_s),
			$of(u"\u53f3\u65b9\u62ec\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.codeInput"_s),
			$of(u"\u4ee3\u7801\u8f93\u5165"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.colon"_s),
			$of(u"\u5192\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.comma"_s),
			$of(u"\u9017\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.compose"_s),
			$of(u"\u7f16\u5199"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.context"_s),
			$of(u"\u4e0a\u4e0b\u6587\u83dc\u5355"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.control"_s),
			$of("Ctrl"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.convert"_s),
			$of(u"\u8f6c\u6362"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.copy"_s),
			$of(u"\u590d\u5236"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.cut"_s),
			$of(u"\u526a\u5207"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAboveDot"_s),
			$of(u"\u4e0a\u6807\u70b9"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAboveRing"_s),
			$of(u"\u4e0a\u6807\u5706\u5708"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadAcute"_s),
			$of(u"\u5e26\u5c16\u97f3\u7b26\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadBreve"_s),
			$of(u"\u77ed\u97f3\u7b26\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCaron"_s),
			$of(u"\u5012\u7f6e\u97f3\u8c03\u7b26\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCedilla"_s),
			$of(u"\u53d8\u97f3\u7b26\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadCircumflex"_s),
			$of(u"\u5e26\u6291\u626c\u7b26\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadDiaeresis"_s),
			$of(u"\u5206\u97f3\u7b26\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadDoubleAcute"_s),
			$of(u"\u53cc\u5c16\u97f3\u7b26\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadGrave"_s),
			$of(u"\u6291\u97f3\u7b26\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadIota"_s),
			$of(u"\u963f\u5c14\u5854\u7b26\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadMacron"_s),
			$of(u"\u957f\u97f3\u7b26\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadOgonek"_s),
			$of(u"\u53cd\u5c3e\u5f62\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadSemivoicedSound"_s),
			$of(u"\u534a\u6d4a\u97f3\u7b26\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadTilde"_s),
			$of(u"\u816d\u5316\u7b26\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.deadVoicedSound"_s),
			$of(u"\u6d4a\u97f3\u7b26\u53f7"_s)
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
			$of(u"\u7f8e\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.down"_s),
			$of(u"\u5411\u4e0b\u7bad\u5934"_s)
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
			$of(u"\u7b49\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.escape"_s),
			$of("Esc"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.euro"_s),
			$of(u"\u6b27\u5143"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.exclamationMark"_s),
			$of(u"\u611f\u53f9\u53f7"_s)
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
			$of(u"\u6700\u7ec8"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.find"_s),
			$of(u"\u67e5\u627e"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.fullWidth"_s),
			$of(u"\u5168\u89d2"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.greater"_s),
			$of(u"\u5927\u4e8e\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.halfWidth"_s),
			$of(u"\u534a\u89d2"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.help"_s),
			$of(u"\u5e2e\u52a9"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.hiragana"_s),
			$of(u"\u5e73\u5047\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.home"_s),
			$of("Home"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.inputMethodOnOff"_s),
			$of(u"\u6253\u5f00/\u5173\u95ed\u8f93\u5165\u65b9\u6cd5"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.insert"_s),
			$of("Insert"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.invertedExclamationMark"_s),
			$of(u"\u5012\u7f6e\u611f\u53f9\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseHiragana"_s),
			$of(u"\u65e5\u8bed\u5e73\u5047\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseKatakana"_s),
			$of(u"\u65e5\u8bed\u7247\u5047\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseRoman"_s),
			$of(u"\u65e5\u8bed\u7f57\u9a6c\u5b57\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kana"_s),
			$of(u"\u5047\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kanaLock"_s),
			$of("Kana Lock"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kanji"_s),
			$of(u"\u65e5\u672c\u6c49\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.katakana"_s),
			$of(u"\u7247\u5047\u540d"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.left"_s),
			$of(u"\u5411\u5de6\u7bad\u5934"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.leftParenthesis"_s),
			$of(u"\u5de6\u62ec\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.meta"_s),
			$of("Meta"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.minus"_s),
			$of(u"\u51cf\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.modechange"_s),
			$of(u"\u6a21\u5f0f\u66f4\u6539"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.multiply"_s),
			$of("NumPad *"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.noconvert"_s),
			$of(u"\u4e0d\u8f6c\u6362"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numLock"_s),
			$of("Num Lock"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numberSign"_s),
			$of(u"\u4e95\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numpad"_s),
			$of("NumPad"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.openBracket"_s),
			$of(u"\u5de6\u65b9\u62ec\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.paste"_s),
			$of(u"\u7c98\u8d34"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pause"_s),
			$of("Pause"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.period"_s),
			$of(u"\u53e5\u70b9"_s)
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
			$of(u"\u52a0\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.previousCandidate"_s),
			$of(u"\u4e0a\u4e00\u4e2a\u5019\u9009\u9879"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.printScreen"_s),
			$of("Print Screen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.props"_s),
			$of(u"\u5c0f\u9053\u5177"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.quote"_s),
			$of(u"\u5f15\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.quoteDbl"_s),
			$of(u"\u53cc\u5f15\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.right"_s),
			$of(u"\u5411\u53f3\u7bad\u5934"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.rightParenthesis"_s),
			$of(u"\u53f3\u62ec\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.romanCharacters"_s),
			$of(u"\u7f57\u9a6c\u5b57\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.scrollLock"_s),
			$of("Scroll Lock"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.semicolon"_s),
			$of(u"\u5206\u53f7"_s)
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
			$of(u"\u659c\u6760"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.space"_s),
			$of(u"\u7a7a\u683c"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.stop"_s),
			$of(u"\u505c\u6b62"_s)
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
			$of(u"\u672a\u5b9a\u4e49"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.underscore"_s),
			$of(u"\u4e0b\u5212\u7ebf"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.undo"_s),
			$of(u"\u64a4\u6d88"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.unknown"_s),
			$of(u"\u672a\u77e5"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.up"_s),
			$of(u"\u5411\u4e0a\u7bad\u5934"_s)
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

awt_zh_CN::awt_zh_CN() {
}

$Class* awt_zh_CN::load$($String* name, bool initialize) {
	$loadClass(awt_zh_CN, name, initialize, &_awt_zh_CN_ClassInfo_, allocate$awt_zh_CN);
	return class$;
}

$Class* awt_zh_CN::class$ = nullptr;

		} // resources
	} // awt
} // sun