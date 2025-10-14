#include <sun/print/resources/serviceui_ja.h>

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
	namespace print {
		namespace resources {

$MethodInfo _serviceui_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(serviceui_ja::*)()>(&serviceui_ja::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _serviceui_ja_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.print.resources.serviceui_ja",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_serviceui_ja_MethodInfo_
};

$Object* allocate$serviceui_ja($Class* clazz) {
	return $of($alloc(serviceui_ja));
}

void serviceui_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serviceui_ja::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("Automatic-Feeder"_s),
			$of(u"\u81ea\u52d5\u30d5\u30a3\u30fc\u30c0"_s)
		}),
		$$new($ObjectArray, {
			$of("Cassette"_s),
			$of(u"\u30ab\u30bb\u30c3\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("Form-Source"_s),
			$of(u"\u30d5\u30a9\u30fc\u30e0\u30fb\u30bd\u30fc\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("Large-Format"_s),
			$of(u"\u30e9\u30fc\u30b8\u30fb\u30d5\u30a9\u30fc\u30de\u30c3\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("Manual-Envelope"_s),
			$of(u"\u30de\u30cb\u30e5\u30a2\u30eb\u5c01\u7b52"_s)
		}),
		$$new($ObjectArray, {
			$of("Small-Format"_s),
			$of(u"\u30b9\u30e2\u30fc\u30eb\u30fb\u30d5\u30a9\u30fc\u30de\u30c3\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("Tractor-Feeder"_s),
			$of(u"\u30c8\u30e9\u30af\u30bf\u30fb\u30d5\u30a3\u30fc\u30c0"_s)
		}),
		$$new($ObjectArray, {
			$of("a"_s),
			$of(u"\u30a8\u30f3\u30b8\u30cb\u30a2\u30ea\u30f3\u30b0A"_s)
		}),
		$$new($ObjectArray, {
			$of("accepting-jobs"_s),
			$of(u"\u30b8\u30e7\u30d6\u3092\u53d7\u3051\u4ed8\u3051\u3066\u3044\u307e\u3059"_s)
		}),
		$$new($ObjectArray, {
			$of("auto-select"_s),
			$of(u"\u81ea\u52d5\u9078\u629e"_s)
		}),
		$$new($ObjectArray, {
			$of("b"_s),
			$of(u"\u30a8\u30f3\u30b8\u30cb\u30a2\u30ea\u30f3\u30b0B"_s)
		}),
		$$new($ObjectArray, {
			$of("border.chromaticity"_s),
			$of(u"\u8272\u306e\u8868\u73fe"_s)
		}),
		$$new($ObjectArray, {
			$of("border.copies"_s),
			$of(u"\u5370\u5237\u90e8\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("border.jobattributes"_s),
			$of(u"\u30b8\u30e7\u30d6\u306e\u5c5e\u6027"_s)
		}),
		$$new($ObjectArray, {
			$of("border.margins"_s),
			$of(u"\u30de\u30fc\u30b8\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("border.media"_s),
			$of(u"\u30e1\u30c7\u30a3\u30a2"_s)
		}),
		$$new($ObjectArray, {
			$of("border.orientation"_s),
			$of(u"\u7528\u7d19\u306e\u5411\u304d"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printrange"_s),
			$of(u"\u5370\u5237\u7bc4\u56f2"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printservice"_s),
			$of(u"\u5370\u5237\u30b5\u30fc\u30d3\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("border.quality"_s),
			$of(u"\u54c1\u8cea"_s)
		}),
		$$new($ObjectArray, {
			$of("border.sides"_s),
			$of(u"\u9762"_s)
		}),
		$$new($ObjectArray, {
			$of("bottom"_s),
			$of(u"\u4e0b\u90e8"_s)
		}),
		$$new($ObjectArray, {
			$of("button.cancel"_s),
			$of(u"\u53d6\u6d88"_s)
		}),
		$$new($ObjectArray, {
			$of("button.ok"_s),
			$of("OK"_s)
		}),
		$$new($ObjectArray, {
			$of("button.print"_s),
			$of(u"\u5370\u5237"_s)
		}),
		$$new($ObjectArray, {
			$of("button.properties"_s),
			$of(u"\u30d7\u30ed\u30d1\u30c6\u30a3(&R)..."_s)
		}),
		$$new($ObjectArray, {
			$of("c"_s),
			$of(u"\u30a8\u30f3\u30b8\u30cb\u30a2\u30ea\u30f3\u30b0C"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.collate"_s),
			$of(u"\u4e01\u5408\u3044(&C)"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.jobsheets"_s),
			$of(u"\u30d0\u30ca\u30fc\u30fb\u30da\u30fc\u30b8(&B)"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.printtofile"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u306b\u51fa\u529b(&F)"_s)
		}),
		$$new($ObjectArray, {
			$of("d"_s),
			$of(u"\u30a8\u30f3\u30b8\u30cb\u30a2\u30ea\u30f3\u30b0D"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.noprintermsg"_s),
			$of(u"\u5370\u5237\u30b5\u30fc\u30d3\u30b9\u304c\u898b\u3064\u304b\u308a\u307e\u305b\u3093\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.overwrite"_s),
			$of(u"\u3053\u306e\u30d5\u30a1\u30a4\u30eb\u306f\u3059\u3067\u306b\u5b58\u5728\u3057\u307e\u3059\u3002\u65e2\u5b58\u306e\u30d5\u30a1\u30a4\u30eb\u306b\u4e0a\u66f8\u304d\u3057\u307e\u3059\u304b\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.owtitle"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u306b\u51fa\u529b"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtitle"_s),
			$of(u"\u5370\u5237"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtofile"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u306b\u51fa\u529b"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.pstitle"_s),
			$of(u"\u30da\u30fc\u30b8\u8a2d\u5b9a"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.writeerror"_s),
			$of(u"\u30d5\u30a1\u30a4\u30eb\u306b\u66f8\u304d\u8fbc\u3081\u307e\u305b\u3093:"_s)
		}),
		$$new($ObjectArray, {
			$of("e"_s),
			$of(u"\u30a8\u30f3\u30b8\u30cb\u30a2\u30ea\u30f3\u30b0E"_s)
		}),
		$$new($ObjectArray, {
			$of("envelope"_s),
			$of(u"\u5c01\u7b52"_s)
		}),
		$$new($ObjectArray, {
			$of("error.destination"_s),
			$of(u"\u7121\u52b9\u306a\u30d5\u30a1\u30a4\u30eb\u540d\u3002\u30d5\u30a1\u30a4\u30eb\u540d\u3092\u518d\u5165\u529b\u3057\u3066\u304f\u3060\u3055\u3044"_s)
		}),
		$$new($ObjectArray, {
			$of("error.pagerange"_s),
			$of(u"\u7121\u52b9\u306a\u30da\u30fc\u30b8\u7bc4\u56f2\u3002\u5024\u3092\u518d\u5165\u529b\u3057\u3066\u304f\u3060\u3055\u3044(\u4f8b\u30011-3,5,7-10)"_s)
		}),
		$$new($ObjectArray, {
			$of("executive"_s),
			$of(u"\u30a8\u30b0\u30bc\u30af\u30c6\u30a3\u30d6"_s)
		}),
		$$new($ObjectArray, {
			$of("folio"_s),
			$of(u"\u30d5\u30a9\u30ea\u30aa"_s)
		}),
		$$new($ObjectArray, {
			$of("invite-envelope"_s),
			$of(u"\u62db\u5f85\u5c01\u7b52"_s)
		}),
		$$new($ObjectArray, {
			$of("invoice"_s),
			$of(u"\u30a4\u30f3\u30dc\u30a4\u30b9"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-2a0"_s),
			$of("2A0 (ISO/DIN & JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-4a0"_s),
			$of("4A0 (ISO/DIN & JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-a0"_s),
			$of("A0 (ISO/DIN & JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-a1"_s),
			$of("A1 (ISO/DIN & JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-a10"_s),
			$of("A10 (ISO/DIN & JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-a2"_s),
			$of("A2 (ISO/DIN & JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-a3"_s),
			$of("A3 (ISO/DIN & JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-a4"_s),
			$of("A4 (ISO/DIN & JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-a5"_s),
			$of("A5 (ISO/DIN & JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-a6"_s),
			$of("A6 (ISO/DIN & JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-a7"_s),
			$of("A7 (ISO/DIN & JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-a8"_s),
			$of("A8 (ISO/DIN & JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-a9"_s),
			$of("A9 (ISO/DIN & JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-b0"_s),
			$of("B0 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-b1"_s),
			$of("B1 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-b10"_s),
			$of("B10 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-b2"_s),
			$of("B2 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-b3"_s),
			$of("B3 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-b4"_s),
			$of("B4 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-b5"_s),
			$of("B5 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-b6"_s),
			$of("B6 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-b7"_s),
			$of("B7 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-b8"_s),
			$of("B8 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-b9"_s),
			$of("B9 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-c0"_s),
			$of("C0 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-c1"_s),
			$of("C1 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-c10"_s),
			$of("C10 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-c2"_s),
			$of("C2 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-c3"_s),
			$of("C3 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-c4"_s),
			$of("C4 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-c5"_s),
			$of("C5 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-c6"_s),
			$of("C6 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-c7"_s),
			$of("C7 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-c8"_s),
			$of("C8 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-c9"_s),
			$of("C9 (ISO/DIN)"_s)
		}),
		$$new($ObjectArray, {
			$of("iso-designated-long"_s),
			$of(u"ISO DL(\u9577\u5bf8)"_s)
		}),
		$$new($ObjectArray, {
			$of("italian-envelope"_s),
			$of(u"\u30a4\u30bf\u30ea\u30a2\u5c01\u7b52"_s)
		}),
		$$new($ObjectArray, {
			$of("italy-envelope"_s),
			$of(u"\u30a4\u30bf\u30ea\u30a2\u5c01\u7b52"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese-postcard"_s),
			$of(u"\u306f\u304c\u304d(JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("jis-b0"_s),
			$of("B0 (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("jis-b1"_s),
			$of("B1 (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("jis-b10"_s),
			$of("B10 (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("jis-b2"_s),
			$of("B2 (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("jis-b3"_s),
			$of("B3 (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("jis-b4"_s),
			$of("B4 (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("jis-b5"_s),
			$of("B5 (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("jis-b6"_s),
			$of("B6 (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("jis-b7"_s),
			$of("B7 (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("jis-b8"_s),
			$of("B8 (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("jis-b9"_s),
			$of("B9 (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.bottommargin"_s),
			$of(u"\u4e0b(&B)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.inches"_s),
			$of("(in)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.info"_s),
			$of(u"\u60c5\u5831:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.jobname"_s),
			$of(u"\u30b8\u30e7\u30d6\u540d(&J):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.leftmargin"_s),
			$of(u"\u5de6(&F)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.millimetres"_s),
			$of("(mm)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.numcopies"_s),
			$of(u"\u5370\u5237\u90e8\u6570(&O):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.priority"_s),
			$of(u"\u512a\u5148\u5ea6(&R):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.psname"_s),
			$of(u"\u540d\u524d(&N):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.pstype"_s),
			$of(u"\u30bf\u30a4\u30d7:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.rangeto"_s),
			$of(u"\u5370\u5237\u7bc4\u56f2"_s)
		}),
		$$new($ObjectArray, {
			$of("label.rightmargin"_s),
			$of(u"\u53f3(&R)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.size"_s),
			$of(u"\u30b5\u30a4\u30ba(&Z):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.source"_s),
			$of(u"\u30bd\u30fc\u30b9(&C):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.status"_s),
			$of(u"\u72b6\u614b:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.topmargin"_s),
			$of(u"\u4e0a(&T)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.username"_s),
			$of(u"\u30e6\u30fc\u30b6\u30fc\u540d(&U):"_s)
		}),
		$$new($ObjectArray, {
			$of("large-capacity"_s),
			$of(u"\u5927\u5bb9\u91cf"_s)
		}),
		$$new($ObjectArray, {
			$of("ledger"_s),
			$of(u"\u30ec\u30c3\u30b8\u30e3"_s)
		}),
		$$new($ObjectArray, {
			$of("main"_s),
			$of(u"\u30e1\u30a4\u30f3"_s)
		}),
		$$new($ObjectArray, {
			$of("manual"_s),
			$of(u"\u30de\u30cb\u30e5\u30a2\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("middle"_s),
			$of(u"\u4e2d\u9593"_s)
		}),
		$$new($ObjectArray, {
			$of("monarch-envelope"_s),
			$of(u"\u30e2\u30ca\u30fc\u30af\u5c01\u7b52"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x13-envelope"_s),
			$of(u"10x15\u5c01\u7b52"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x14-envelope"_s),
			$of(u"10x15\u5c01\u7b52"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x15-envelope"_s),
			$of(u"10x15\u5c01\u7b52"_s)
		}),
		$$new($ObjectArray, {
			$of("na-5x7"_s),
			$of(u"5x7\u30a4\u30f3\u30c1\u7528\u7d19"_s)
		}),
		$$new($ObjectArray, {
			$of("na-6x9-envelope"_s),
			$of(u"6x9\u5c01\u7b52"_s)
		}),
		$$new($ObjectArray, {
			$of("na-7x9-envelope"_s),
			$of(u"6x7\u5c01\u7b52"_s)
		}),
		$$new($ObjectArray, {
			$of("na-8x10"_s),
			$of(u"8x10\u30a4\u30f3\u30c1\u7528\u7d19"_s)
		}),
		$$new($ObjectArray, {
			$of("na-9x11-envelope"_s),
			$of(u"9x11\u5c01\u7b52"_s)
		}),
		$$new($ObjectArray, {
			$of("na-9x12-envelope"_s),
			$of(u"9x12\u5c01\u7b52"_s)
		}),
		$$new($ObjectArray, {
			$of("na-legal"_s),
			$of(u"\u30ea\u30fc\u30ac\u30eb"_s)
		}),
		$$new($ObjectArray, {
			$of("na-letter"_s),
			$of(u"\u30ec\u30bf\u30fc"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-10-envelope"_s),
			$of(u"No. 10\u5c01\u7b52"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-11-envelope"_s),
			$of(u"No. 11\u5c01\u7b52"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-12-envelope"_s),
			$of(u"No. 12\u5c01\u7b52"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-14-envelope"_s),
			$of(u"No. 14\u5c01\u7b52"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-9-envelope"_s),
			$of(u"No. 9\u5c01\u7b52"_s)
		}),
		$$new($ObjectArray, {
			$of("not-accepting-jobs"_s),
			$of(u"\u30b8\u30e7\u30d6\u3092\u53d7\u3051\u4ed8\u3051\u307e\u305b\u3093"_s)
		}),
		$$new($ObjectArray, {
			$of("oufuko-postcard"_s),
			$of(u"\u5f80\u5fa9\u306f\u304c\u304d(JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("personal-envelope"_s),
			$of(u"\u500b\u4eba\u7528\u5c01\u7b52"_s)
		}),
		$$new($ObjectArray, {
			$of("quarto"_s),
			$of(u"\u30af\u30a9\u30fc\u30c8"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.color"_s),
			$of(u"\u30ab\u30e9\u30fc(&C)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.draftq"_s),
			$of(u"\u30c9\u30e9\u30d5\u30c8(&F)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.duplex"_s),
			$of(u"\u4e21\u9762(&D)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.highq"_s),
			$of(u"\u9ad8(&H)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.landscape"_s),
			$of(u"\u6a2a(&L)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.monochrome"_s),
			$of(u"\u30e2\u30ce\u30af\u30ed(&M)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.normalq"_s),
			$of(u"\u6a19\u6e96(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.oneside"_s),
			$of(u"\u7247\u9762(&O)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.portrait"_s),
			$of(u"\u7e26(&P)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangeall"_s),
			$of(u"\u3059\u3079\u3066(&L)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangepages"_s),
			$of(u"\u30da\u30fc\u30b8(&E)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revlandscape"_s),
			$of(u"\u30e9\u30f3\u30c9\u30b9\u30b1\u30fc\u30d7(\u53cd\u8ee2)(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revportrait"_s),
			$of(u"\u30dd\u30fc\u30c8\u30ec\u30a4\u30c8(\u53cd\u8ee2)(&I)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.tumble"_s),
			$of(u"\u53cd\u8ee2(&T)"_s)
		}),
		$$new($ObjectArray, {
			$of("side"_s),
			$of(u"\u9762"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.appearance"_s),
			$of(u"\u5916\u89b3(&A)"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.general"_s),
			$of(u"\u4e00\u822c(&G)"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.pagesetup"_s),
			$of(u"\u30da\u30fc\u30b8\u8a2d\u5b9a(&S)"_s)
		}),
		$$new($ObjectArray, {
			$of("tabloid"_s),
			$of(u"\u30bf\u30d6\u30ed\u30a4\u30c9"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"\u4e0a\u90e8"_s)
		})
	});
}

serviceui_ja::serviceui_ja() {
}

$Class* serviceui_ja::load$($String* name, bool initialize) {
	$loadClass(serviceui_ja, name, initialize, &_serviceui_ja_ClassInfo_, allocate$serviceui_ja);
	return class$;
}

$Class* serviceui_ja::class$ = nullptr;

		} // resources
	} // print
} // sun