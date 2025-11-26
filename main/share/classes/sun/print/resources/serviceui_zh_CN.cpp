#include <sun/print/resources/serviceui_zh_CN.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace print {
		namespace resources {

$MethodInfo _serviceui_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(serviceui_zh_CN::*)()>(&serviceui_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _serviceui_zh_CN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.print.resources.serviceui_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_serviceui_zh_CN_MethodInfo_
};

$Object* allocate$serviceui_zh_CN($Class* clazz) {
	return $of($alloc(serviceui_zh_CN));
}

void serviceui_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serviceui_zh_CN::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("Automatic-Feeder"_s),
			$of(u"\u81ea\u52a8\u9988\u9001\u5668"_s)
		}),
		$$new($ObjectArray, {
			$of("Cassette"_s),
			$of(u"\u7eb8\u76d2"_s)
		}),
		$$new($ObjectArray, {
			$of("Form-Source"_s),
			$of(u"\u8868\u683c\u6765\u6e90"_s)
		}),
		$$new($ObjectArray, {
			$of("Large-Format"_s),
			$of(u"\u5927\u53f7\u7248\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("Manual-Envelope"_s),
			$of(u"\u624b\u52a8\u4fe1\u5c01"_s)
		}),
		$$new($ObjectArray, {
			$of("Small-Format"_s),
			$of(u"\u5c0f\u53f7\u7248\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("Tractor-Feeder"_s),
			$of(u"\u7275\u5f15\u5f0f\u9988\u9001\u5668"_s)
		}),
		$$new($ObjectArray, {
			$of("a"_s),
			$of(u"\u5de5\u7a0b A"_s)
		}),
		$$new($ObjectArray, {
			$of("accepting-jobs"_s),
			$of(u"\u63a5\u53d7\u4f5c\u4e1a"_s)
		}),
		$$new($ObjectArray, {
			$of("auto-select"_s),
			$of(u"\u81ea\u52a8\u9009\u62e9"_s)
		}),
		$$new($ObjectArray, {
			$of("b"_s),
			$of(u"\u5de5\u7a0b B"_s)
		}),
		$$new($ObjectArray, {
			$of("border.chromaticity"_s),
			$of(u"\u989c\u8272\u5916\u89c2"_s)
		}),
		$$new($ObjectArray, {
			$of("border.copies"_s),
			$of(u"\u4efd\u6570"_s)
		}),
		$$new($ObjectArray, {
			$of("border.jobattributes"_s),
			$of(u"\u4f5c\u4e1a\u5c5e\u6027"_s)
		}),
		$$new($ObjectArray, {
			$of("border.margins"_s),
			$of(u"\u8fb9\u8ddd"_s)
		}),
		$$new($ObjectArray, {
			$of("border.media"_s),
			$of(u"\u4ecb\u8d28"_s)
		}),
		$$new($ObjectArray, {
			$of("border.orientation"_s),
			$of(u"\u65b9\u5411"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printrange"_s),
			$of(u"\u6253\u5370\u533a\u57df"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printservice"_s),
			$of(u"\u6253\u5370\u670d\u52a1"_s)
		}),
		$$new($ObjectArray, {
			$of("border.quality"_s),
			$of(u"\u8d28\u91cf"_s)
		}),
		$$new($ObjectArray, {
			$of("border.sides"_s),
			$of(u"\u8fb9"_s)
		}),
		$$new($ObjectArray, {
			$of("bottom"_s),
			$of(u"\u4e0b"_s)
		}),
		$$new($ObjectArray, {
			$of("button.cancel"_s),
			$of(u"\u53d6\u6d88"_s)
		}),
		$$new($ObjectArray, {
			$of("button.ok"_s),
			$of(u"\u786e\u5b9a"_s)
		}),
		$$new($ObjectArray, {
			$of("button.print"_s),
			$of(u"\u6253\u5370"_s)
		}),
		$$new($ObjectArray, {
			$of("button.properties"_s),
			$of(u"\u5c5e\u6027(&R)..."_s)
		}),
		$$new($ObjectArray, {
			$of("c"_s),
			$of(u"\u5de5\u7a0b C"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.collate"_s),
			$of(u"\u9010\u4efd\u6253\u5370(&C)"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.jobsheets"_s),
			$of(u"\u6807\u5e1c\u9875(&B)"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.printtofile"_s),
			$of(u"\u6253\u5370\u5230\u6587\u4ef6(&F)"_s)
		}),
		$$new($ObjectArray, {
			$of("d"_s),
			$of(u"\u5de5\u7a0b D"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.noprintermsg"_s),
			$of(u"\u627e\u4e0d\u5230\u6253\u5370\u670d\u52a1\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.overwrite"_s),
			$of(u"\u8be5\u6587\u4ef6\u5df2\u7ecf\u5b58\u5728\u3002\u662f\u5426\u8981\u8986\u76d6\u73b0\u6709\u6587\u4ef6?"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.owtitle"_s),
			$of(u"\u6253\u5370\u5230\u6587\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtitle"_s),
			$of(u"\u6253\u5370"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtofile"_s),
			$of(u"\u6253\u5370\u5230\u6587\u4ef6"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.pstitle"_s),
			$of(u"\u9875\u9762\u8bbe\u7f6e"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.writeerror"_s),
			$of(u"\u65e0\u6cd5\u5199\u5165\u6587\u4ef6:"_s)
		}),
		$$new($ObjectArray, {
			$of("e"_s),
			$of(u"\u5de5\u7a0b E"_s)
		}),
		$$new($ObjectArray, {
			$of("envelope"_s),
			$of(u"\u4fe1\u5c01"_s)
		}),
		$$new($ObjectArray, {
			$of("error.destination"_s),
			$of(u"\u65e0\u6548\u7684\u6587\u4ef6\u540d; \u8bf7\u91cd\u8bd5"_s)
		}),
		$$new($ObjectArray, {
			$of("error.pagerange"_s),
			$of(u"\u65e0\u6548\u7684\u9875\u9762\u8303\u56f4; \u8bf7\u91cd\u65b0\u8f93\u5165\u6570\u503c (\u4f8b\u5982 1-3,5,7-10)"_s)
		}),
		$$new($ObjectArray, {
			$of("executive"_s),
			$of(u"\u6267\u884c\u7a0b\u5e8f"_s)
		}),
		$$new($ObjectArray, {
			$of("folio"_s),
			$of(u"\u5bf9\u5f00\u9875"_s)
		}),
		$$new($ObjectArray, {
			$of("invite-envelope"_s),
			$of(u"\u9080\u8bf7\u51fd\u4fe1\u5c01"_s)
		}),
		$$new($ObjectArray, {
			$of("invoice"_s),
			$of(u"\u53d1\u7968"_s)
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
			$of(u"ISO \u6307\u5b9a\u957f\u5ea6"_s)
		}),
		$$new($ObjectArray, {
			$of("italian-envelope"_s),
			$of(u"\u610f\u5927\u5229\u4fe1\u5c01"_s)
		}),
		$$new($ObjectArray, {
			$of("italy-envelope"_s),
			$of(u"\u610f\u5927\u5229\u4fe1\u5c01"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese-postcard"_s),
			$of(u"\u660e\u4fe1\u7247 (JIS)"_s)
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
			$of(u"\u4e0b\u8fb9\u8ddd(&B)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.inches"_s),
			$of(u"(\u82f1\u5bf8)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.info"_s),
			$of(u"\u4fe1\u606f: "_s)
		}),
		$$new($ObjectArray, {
			$of("label.jobname"_s),
			$of(u"\u4f5c\u4e1a\u540d(&J):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.leftmargin"_s),
			$of(u"\u5de6\u8fb9\u8ddd(&F)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.millimetres"_s),
			$of(u"(\u6beb\u7c73)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.numcopies"_s),
			$of(u"\u6253\u5370\u4efd\u6570(&O):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.priority"_s),
			$of(u"\u4f18\u5148\u7ea7(&R):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.psname"_s),
			$of(u"\u540d\u79f0(&N):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.pstype"_s),
			$of(u"\u7c7b\u578b: "_s)
		}),
		$$new($ObjectArray, {
			$of("label.rangeto"_s),
			$of(u"\u81f3"_s)
		}),
		$$new($ObjectArray, {
			$of("label.rightmargin"_s),
			$of(u"\u53f3\u8fb9\u8ddd(&R)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.size"_s),
			$of(u"\u5927\u5c0f(&Z):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.source"_s),
			$of(u"\u6765\u6e90(&C):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.status"_s),
			$of(u"\u72b6\u6001: "_s)
		}),
		$$new($ObjectArray, {
			$of("label.topmargin"_s),
			$of(u"\u4e0a\u8fb9\u8ddd(&T)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.username"_s),
			$of(u"\u7528\u6237\u540d(&U):"_s)
		}),
		$$new($ObjectArray, {
			$of("large-capacity"_s),
			$of(u"\u5927\u5bb9\u91cf"_s)
		}),
		$$new($ObjectArray, {
			$of("ledger"_s),
			$of(u"\u5e10\u76ee"_s)
		}),
		$$new($ObjectArray, {
			$of("main"_s),
			$of(u"\u4e3b"_s)
		}),
		$$new($ObjectArray, {
			$of("manual"_s),
			$of(u"\u624b\u52a8"_s)
		}),
		$$new($ObjectArray, {
			$of("middle"_s),
			$of(u"\u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of("monarch-envelope"_s),
			$of(u"Monarch \u4fe1\u5c01"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x13-envelope"_s),
			$of(u"10x15 \u4fe1\u5c01"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x14-envelope"_s),
			$of(u"10x15 \u4fe1\u5c01"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x15-envelope"_s),
			$of(u"10x15 \u4fe1\u5c01"_s)
		}),
		$$new($ObjectArray, {
			$of("na-5x7"_s),
			$of(u"5\" x 7\" \u7eb8\u5f20"_s)
		}),
		$$new($ObjectArray, {
			$of("na-6x9-envelope"_s),
			$of(u"6x9 \u4fe1\u5c01"_s)
		}),
		$$new($ObjectArray, {
			$of("na-7x9-envelope"_s),
			$of(u"6x7 \u4fe1\u5c01"_s)
		}),
		$$new($ObjectArray, {
			$of("na-8x10"_s),
			$of(u"8\" x 10\" \u7eb8\u5f20"_s)
		}),
		$$new($ObjectArray, {
			$of("na-9x11-envelope"_s),
			$of(u"9x11 \u4fe1\u5c01"_s)
		}),
		$$new($ObjectArray, {
			$of("na-9x12-envelope"_s),
			$of(u"9x12 \u4fe1\u5c01"_s)
		}),
		$$new($ObjectArray, {
			$of("na-legal"_s),
			$of(u"\u6cd5\u5f8b\u6587\u4e66"_s)
		}),
		$$new($ObjectArray, {
			$of("na-letter"_s),
			$of(u"\u4fe1\u51fd"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-10-envelope"_s),
			$of(u"10 \u53f7\u4fe1\u5c01"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-11-envelope"_s),
			$of(u"11 \u53f7\u4fe1\u5c01"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-12-envelope"_s),
			$of(u"12 \u53f7\u4fe1\u5c01"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-14-envelope"_s),
			$of(u"14 \u53f7\u4fe1\u5c01"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-9-envelope"_s),
			$of(u"9 \u53f7\u4fe1\u5c01"_s)
		}),
		$$new($ObjectArray, {
			$of("not-accepting-jobs"_s),
			$of(u"\u4e0d\u63a5\u53d7\u4f5c\u4e1a"_s)
		}),
		$$new($ObjectArray, {
			$of("oufuko-postcard"_s),
			$of(u"\u53cc\u9762\u660e\u4fe1\u7247 (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("personal-envelope"_s),
			$of(u"\u4e2a\u4eba\u4fe1\u5c01"_s)
		}),
		$$new($ObjectArray, {
			$of("quarto"_s),
			$of(u"\u56db\u5f00\u9875"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.color"_s),
			$of(u"\u989c\u8272(&C)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.draftq"_s),
			$of(u"\u8349\u56fe(&F)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.duplex"_s),
			$of(u"\u53cc\u9762\u6253\u5370(&D)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.highq"_s),
			$of(u"\u9ad8(&H)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.landscape"_s),
			$of(u"\u6a2a\u5411(&L)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.monochrome"_s),
			$of(u"\u5355\u8272(&M)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.normalq"_s),
			$of(u"\u6b63\u5e38(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.oneside"_s),
			$of(u"\u5355\u9762(&O)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.portrait"_s),
			$of(u"\u7eb5\u5411(&P)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangeall"_s),
			$of(u"\u5168\u90e8(&L)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangepages"_s),
			$of(u"\u9875\u7801\u8303\u56f4(&E)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revlandscape"_s),
			$of(u"\u6a2a\u5411\u53cd\u9762\u6253\u5370(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revportrait"_s),
			$of(u"\u7eb5\u5411\u53cd\u9762\u6253\u5370(&I)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.tumble"_s),
			$of(u"\u7ffb\u8f6c(&T)"_s)
		}),
		$$new($ObjectArray, {
			$of("side"_s),
			$of(u"\u4fa7"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.appearance"_s),
			$of(u"\u5916\u89c2(&A)"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.general"_s),
			$of(u"\u4e00\u822c\u4fe1\u606f(&G)"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.pagesetup"_s),
			$of(u"\u9875\u9762\u8bbe\u7f6e(&S)"_s)
		}),
		$$new($ObjectArray, {
			$of("tabloid"_s),
			$of(u"\u5c0f\u62a5"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"\u4e0a"_s)
		})
	});
}

serviceui_zh_CN::serviceui_zh_CN() {
}

$Class* serviceui_zh_CN::load$($String* name, bool initialize) {
	$loadClass(serviceui_zh_CN, name, initialize, &_serviceui_zh_CN_ClassInfo_, allocate$serviceui_zh_CN);
	return class$;
}

$Class* serviceui_zh_CN::class$ = nullptr;

		} // resources
	} // print
} // sun