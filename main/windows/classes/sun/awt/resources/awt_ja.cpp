#include <sun/awt/resources/awt_ja.h>

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

$MethodInfo _awt_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(awt_ja::*)()>(&awt_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _awt_ja_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.resources.awt_ja",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_awt_ja_MethodInfo_
};

$Object* allocate$awt_ja($Class* clazz) {
	return $of($alloc(awt_ja));
}

void awt_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awt_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AWT.CompositionWindowTitle"_s),
			$of(u"\u5165\u529b\u30a6\u30a3\u30f3\u30c9\u30a6"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.CrosshairCursor"_s),
			$of(u"\u5341\u5b57\u30ab\u30fc\u30bd\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultCursor"_s),
			$of(u"\u30c7\u30d5\u30a9\u30eb\u30c8\u306e\u30ab\u30fc\u30bd\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultDragCursor"_s),
			$of(u"\u30c7\u30d5\u30a9\u30eb\u30c8\u306e\u30c9\u30e9\u30c3\u30b0\u30fb\u30ab\u30fc\u30bd\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultDropCursor"_s),
			$of(u"\u30c7\u30d5\u30a9\u30eb\u30c8\u306e\u30c9\u30ed\u30c3\u30d7\u30fb\u30ab\u30fc\u30bd\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.DefaultNoDropCursor"_s),
			$of(u"\u30c7\u30d5\u30a9\u30eb\u30c8\u306e\u30c9\u30e9\u30c3\u30b0\u7981\u6b62\u30ab\u30fc\u30bd\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.EResizeCursor"_s),
			$of(u"\u6771\u65b9\u5411\u306e\u30ea\u30b5\u30a4\u30ba\u30fb\u30ab\u30fc\u30bd\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.HandCursor"_s),
			$of(u"\u6307\u578b\u30ab\u30fc\u30bd\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.HostInputMethodDisplayName"_s),
			$of(u"\u30b7\u30b9\u30c6\u30e0\u5165\u529b\u30e1\u30bd\u30c3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InconsistentDLLsWarning"_s),
			$of(u"\u30b7\u30b9\u30c6\u30e0\u306b\u30a4\u30f3\u30b9\u30c8\u30fc\u30eb\u3055\u308c\u3066\u3044\u308b\u4e00\u9023\u306e\u30c0\u30a4\u30ca\u30df\u30c3\u30af\u30fb\u30ea\u30f3\u30af\u30fb\u30e9\u30a4\u30d6\u30e9\u30ea(DLL)\u306b\u77db\u76fe\u304c\u3042\u308b\u305f\u3081\u3001\u30c6\u30ad\u30b9\u30c8\u30fb\u30d9\u30fc\u30b9\u306e\u64cd\u4f5c\u304c\u6b63\u3057\u304f\u52d5\u4f5c\u3057\u307e\u305b\u3093\u3002\u3053\u306e\u554f\u984c\u306e\u8a73\u7d30\u3068\u56de\u907f\u7b56\u306f\u3001java.sun.com\u4e0a\u306b\u3042\u308bJava(TM) 2 SDK, Standard Edition\u306e\u30ea\u30ea\u30fc\u30b9\u30fb\u30ce\u30fc\u30c8\u3092\u53c2\u7167\u3057\u3066\u304f\u3060\u3055\u3044\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodCreationFailed"_s),
			$of(u"{0}\u3092\u4f5c\u6210\u3067\u304d\u307e\u305b\u3093\u3067\u3057\u305f\u3002\u7406\u7531: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.ja"_s),
			$of(u"\u65e5\u672c\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.ko"_s),
			$of(u"\u97d3\u56fd\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh"_s),
			$of(u"\u4e2d\u56fd\u8a9e"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh_CN"_s),
			$of(u"\u4e2d\u56fd\u8a9e(\u7c21\u4f53\u5b57)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodLanguage.zh_TW"_s),
			$of(u"\u4e2d\u56fd\u8a9e(\u7e41\u4f53\u5b57)"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.InputMethodSelectionMenu"_s),
			$of(u"\u5165\u529b\u30e1\u30bd\u30c3\u30c9\u306e\u9078\u629e"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.Less"_s),
			$of(u"\u3088\u308a\u5c0f\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.MoveCursor"_s),
			$of(u"\u79fb\u52d5\u30ab\u30fc\u30bd\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NEResizeCursor"_s),
			$of(u"\u5317\u6771\u65b9\u5411\u306e\u30ea\u30b5\u30a4\u30ba\u30fb\u30ab\u30fc\u30bd\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NResizeCursor"_s),
			$of(u"\u5317\u65b9\u5411\u306e\u30ea\u30b5\u30a4\u30ba\u30fb\u30ab\u30fc\u30bd\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.NWResizeCursor"_s),
			$of(u"\u5317\u897f\u65b9\u5411\u306e\u30ea\u30b5\u30a4\u30ba\u30fb\u30ab\u30fc\u30bd\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SEResizeCursor"_s),
			$of(u"\u5357\u6771\u65b9\u5411\u306e\u30ea\u30b5\u30a4\u30ba\u30fb\u30ab\u30fc\u30bd\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SResizeCursor"_s),
			$of(u"\u5357\u65b9\u5411\u306e\u30ea\u30b5\u30a4\u30ba\u30fb\u30ab\u30fc\u30bd\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.SWResizeCursor"_s),
			$of(u"\u5357\u897f\u65b9\u5411\u306e\u30ea\u30b5\u30a4\u30ba\u30fb\u30ab\u30fc\u30bd\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.TextCursor"_s),
			$of(u"\u30c6\u30ad\u30b9\u30c8\u30fb\u30ab\u30fc\u30bd\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.WResizeCursor"_s),
			$of(u"\u897f\u65b9\u5411\u306e\u30ea\u30b5\u30a4\u30ba\u30fb\u30ab\u30fc\u30bd\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.WaitCursor"_s),
			$of(u"\u5f85\u6a5f\u30ab\u30fc\u30bd\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.accept"_s),
			$of(u"\u78ba\u5b9a"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.add"_s),
			$of("NumPad +"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.again"_s),
			$of(u"\u518d\u5ea6"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.allCandidates"_s),
			$of(u"\u5168\u5019\u88dc"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.alphanumeric"_s),
			$of(u"\u82f1\u6570\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.alt"_s),
			$of("Alt"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.altGraph"_s),
			$of(u"Alt\u30b0\u30e9\u30d5"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.ampersand"_s),
			$of(u"\u30a2\u30f3\u30d1\u30b5\u30f3\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.asterisk"_s),
			$of(u"\u30a2\u30b9\u30bf\u30ea\u30b9\u30af"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.at"_s),
			$of(u"\u30a2\u30c3\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backQuote"_s),
			$of(u"\u9006\u5f15\u7528\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backSlash"_s),
			$of(u"\u30d0\u30c3\u30af\u30b9\u30e9\u30c3\u30b7\u30e5"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.backSpace"_s),
			$of("Backspace"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.begin"_s),
			$of(u"\u958b\u59cb"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.braceLeft"_s),
			$of(u"\u5de6\u4e2d\u30ab\u30c3\u30b3"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.braceRight"_s),
			$of(u"\u53f3\u4e2d\u30ab\u30c3\u30b3"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.cancel"_s),
			$of(u"\u53d6\u6d88"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.capsLock"_s),
			$of("Caps Lock"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.circumflex"_s),
			$of(u"\u66f2\u6298\u30a2\u30af\u30bb\u30f3\u30c8\u8a18\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.clear"_s),
			$of(u"\u30af\u30ea\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.closeBracket"_s),
			$of(u"\u53f3\u5927\u30ab\u30c3\u30b3"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.codeInput"_s),
			$of(u"\u30b3\u30fc\u30c9\u5165\u529b"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.colon"_s),
			$of(u"\u30b3\u30ed\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.comma"_s),
			$of(u"\u30ab\u30f3\u30de"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.compose"_s),
			$of(u"\u4f5c\u6210"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.context"_s),
			$of(u"\u30b3\u30f3\u30c6\u30ad\u30b9\u30c8\u30fb\u30e1\u30cb\u30e5\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.control"_s),
			$of("Ctrl"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.convert"_s),
			$of(u"\u5909\u63db"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.copy"_s),
			$of(u"\u30b3\u30d4\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.cut"_s),
			$of(u"\u5207\u53d6\u308a"_s)
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
			$of(u"\u30c9\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.down"_s),
			$of(u"\u4e0b"_s)
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
			$of(u"\u30e6\u30fc\u30ed"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.exclamationMark"_s),
			$of(u"\u611f\u5606\u7b26"_s)
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
			$of(u"\u6700\u7d42"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.find"_s),
			$of(u"\u691c\u7d22"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.fullWidth"_s),
			$of(u"\u5168\u89d2"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.greater"_s),
			$of(u"\u3088\u308a\u5927\u304d\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.halfWidth"_s),
			$of(u"\u534a\u89d2"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.help"_s),
			$of(u"\u30d8\u30eb\u30d7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.hiragana"_s),
			$of(u"\u3072\u3089\u304c\u306a"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.home"_s),
			$of("Home"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.inputMethodOnOff"_s),
			$of(u"\u5165\u529b\u30e1\u30bd\u30c3\u30c9On-Off"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.insert"_s),
			$of("Insert"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.invertedExclamationMark"_s),
			$of(u"\u9006\u611f\u5606\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseHiragana"_s),
			$of(u"\u65e5\u672c\u8a9e\u306e\u3072\u3089\u304c\u306a"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseKatakana"_s),
			$of(u"\u65e5\u672c\u8a9e\u306e\u30ab\u30bf\u30ab\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.japaneseRoman"_s),
			$of(u"\u65e5\u672c\u8a9e\u306e\u30ed\u30fc\u30de\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kana"_s),
			$of(u"\u304b\u306a"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kanaLock"_s),
			$of(u"\u30ab\u30ca\u30fb\u30ed\u30c3\u30af"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.kanji"_s),
			$of(u"\u6f22\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.katakana"_s),
			$of(u"\u30ab\u30bf\u30ab\u30ca"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.left"_s),
			$of(u"\u5de6"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.leftParenthesis"_s),
			$of(u"\u5de6\u4e38\u30ab\u30c3\u30b3"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.meta"_s),
			$of(u"\u30e1\u30bf"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.minus"_s),
			$of(u"\u30de\u30a4\u30ca\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.modechange"_s),
			$of(u"\u30e2\u30fc\u30c9\u5909\u66f4"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.multiply"_s),
			$of("NumPad *"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.noconvert"_s),
			$of(u"\u7121\u5909\u63db"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numLock"_s),
			$of("Num Lock"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numberSign"_s),
			$of(u"\u756a\u53f7\u8a18\u53f7"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.numpad"_s),
			$of("NumPad"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.openBracket"_s),
			$of(u"\u5de6\u5927\u30ab\u30c3\u30b3"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.paste"_s),
			$of(u"\u8cbc\u4ed8\u3051"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.pause"_s),
			$of(u"\u4e00\u6642\u505c\u6b62"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.period"_s),
			$of(u"\u30d4\u30ea\u30aa\u30c9"_s)
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
			$of(u"\u30d7\u30e9\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.previousCandidate"_s),
			$of(u"\u524d\u5019\u88dc"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.printScreen"_s),
			$of("Print Screen"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.props"_s),
			$of(u"\u30d7\u30ed\u30d1\u30c6\u30a3"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.quote"_s),
			$of(u"\u5f15\u7528\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.quoteDbl"_s),
			$of(u"\u4e8c\u91cd\u5f15\u7528\u7b26"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.right"_s),
			$of(u"\u53f3"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.rightParenthesis"_s),
			$of(u"\u53f3\u4e38\u30ab\u30c3\u30b3"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.romanCharacters"_s),
			$of(u"\u30ed\u30fc\u30de\u5b57"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.scrollLock"_s),
			$of("Scroll Lock"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.semicolon"_s),
			$of(u"\u30bb\u30df\u30b3\u30ed\u30f3"_s)
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
			$of(u"\u30b9\u30e9\u30c3\u30b7\u30e5"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.space"_s),
			$of(u"\u30b9\u30da\u30fc\u30b9"_s)
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
			$of(u"\u672a\u5b9a\u7fa9"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.underscore"_s),
			$of(u"\u30a2\u30f3\u30c0\u30fc\u30b9\u30b3\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.undo"_s),
			$of(u"\u5143\u306b\u623b\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.unknown"_s),
			$of(u"\u4e0d\u660e"_s)
		}),
		$$new($ObjectArray, {
			$of("AWT.up"_s),
			$of(u"\u4e0a"_s)
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
			$of(u"\u5373\u5ea7"_s)
		})
	});
}

awt_ja::awt_ja() {
}

$Class* awt_ja::load$($String* name, bool initialize) {
	$loadClass(awt_ja, name, initialize, &_awt_ja_ClassInfo_, allocate$awt_ja);
	return class$;
}

$Class* awt_ja::class$ = nullptr;

		} // resources
	} // awt
} // sun