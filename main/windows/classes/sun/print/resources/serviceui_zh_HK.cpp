#include <sun/print/resources/serviceui_zh_HK.h>

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

$MethodInfo _serviceui_zh_HK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(serviceui_zh_HK::*)()>(&serviceui_zh_HK::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _serviceui_zh_HK_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.print.resources.serviceui_zh_HK",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_serviceui_zh_HK_MethodInfo_
};

$Object* allocate$serviceui_zh_HK($Class* clazz) {
	return $of($alloc(serviceui_zh_HK));
}

void serviceui_zh_HK::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serviceui_zh_HK::getContents() {
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("Automatic-Feeder"_s),
			$of(u"\u81ea\u52d5\u994b\u7d19\u5668"_s)
		}),
		$$new($ObjectArray, {
			$of("Cassette"_s),
			$of(u"\u5361\u5f0f\u78c1\u5e36\u6a5f"_s)
		}),
		$$new($ObjectArray, {
			$of("Form-Source"_s),
			$of(u"\u8868\u683c\u4f86\u6e90"_s)
		}),
		$$new($ObjectArray, {
			$of("Large-Format"_s),
			$of(u"\u5927\u683c\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("Manual-Envelope"_s),
			$of(u"\u624b\u9001\u5c01\u5957"_s)
		}),
		$$new($ObjectArray, {
			$of("Small-Format"_s),
			$of(u"\u5c0f\u683c\u5f0f"_s)
		}),
		$$new($ObjectArray, {
			$of("Tractor-Feeder"_s),
			$of(u"\u62d6\u66f3\u994b\u7d19\u5668"_s)
		}),
		$$new($ObjectArray, {
			$of("a"_s),
			$of(u"\u5de5\u7a0b A"_s)
		}),
		$$new($ObjectArray, {
			$of("accepting-jobs"_s),
			$of(u"\u63a5\u53d7\u7684\u5de5\u4f5c"_s)
		}),
		$$new($ObjectArray, {
			$of("auto-select"_s),
			$of(u"\u81ea\u52d5\u9078\u53d6"_s)
		}),
		$$new($ObjectArray, {
			$of("b"_s),
			$of(u"\u5de5\u7a0b B"_s)
		}),
		$$new($ObjectArray, {
			$of("border.chromaticity"_s),
			$of(u"\u8272\u5f69\u5916\u89c0"_s)
		}),
		$$new($ObjectArray, {
			$of("border.copies"_s),
			$of(u"\u4efd\u6578"_s)
		}),
		$$new($ObjectArray, {
			$of("border.jobattributes"_s),
			$of(u"\u5de5\u4f5c\u5c6c\u6027"_s)
		}),
		$$new($ObjectArray, {
			$of("border.margins"_s),
			$of(u"\u908a\u8ddd"_s)
		}),
		$$new($ObjectArray, {
			$of("border.media"_s),
			$of(u"\u5a92\u9ad4"_s)
		}),
		$$new($ObjectArray, {
			$of("border.orientation"_s),
			$of(u"\u65b9\u5411"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printrange"_s),
			$of(u"\u5217\u5370\u7bc4\u570d"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printservice"_s),
			$of(u"\u5217\u5370\u670d\u52d9"_s)
		}),
		$$new($ObjectArray, {
			$of("border.quality"_s),
			$of(u"\u54c1\u8cea"_s)
		}),
		$$new($ObjectArray, {
			$of("border.sides"_s),
			$of(u"\u908a"_s)
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
			$of(u"\u78ba\u5b9a"_s)
		}),
		$$new($ObjectArray, {
			$of("button.print"_s),
			$of(u"\u5217\u5370"_s)
		}),
		$$new($ObjectArray, {
			$of("button.properties"_s),
			$of(u"\u7279\u6027(&R)..."_s)
		}),
		$$new($ObjectArray, {
			$of("c"_s),
			$of(u"\u5de5\u7a0b C"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.collate"_s),
			$of(u"\u7406\u5e8f(&C)"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.jobsheets"_s),
			$of(u"\u6a19\u984c\u9801(&B)"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.printtofile"_s),
			$of(u"\u5217\u5370\u81f3\u6a94\u6848(&F)"_s)
		}),
		$$new($ObjectArray, {
			$of("d"_s),
			$of(u"\u5de5\u7a0b D"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.noprintermsg"_s),
			$of(u"\u627e\u4e0d\u5230\u5217\u5370\u670d\u52d9\u3002"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.overwrite"_s),
			$of(u"\u9019\u500b\u6a94\u6848\u5df2\u7d93\u5b58\u5728\u3002\u60a8\u8981\u8986\u5beb\u5df2\u5b58\u5728\u7684\u6a94\u6848\u55ce\uff1f"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.owtitle"_s),
			$of(u"\u5217\u5370\u81f3\u6a94\u6848"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtitle"_s),
			$of(u"\u5217\u5370"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtofile"_s),
			$of(u"\u5217\u5370\u81f3\u6a94\u6848"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.pstitle"_s),
			$of(u"\u9801\u9762\u8a2d\u5b9a"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.writeerror"_s),
			$of(u"\u7121\u6cd5\u5beb\u5165\u81f3\u6a94\u6848:"_s)
		}),
		$$new($ObjectArray, {
			$of("e"_s),
			$of(u"\u5de5\u7a0b E"_s)
		}),
		$$new($ObjectArray, {
			$of("envelope"_s),
			$of(u"\u5c01\u5957"_s)
		}),
		$$new($ObjectArray, {
			$of("error.destination"_s),
			$of(u"\u7121\u6548\u7684\u6a94\u540d; \u8acb\u518d\u8a66\u4e00\u6b21"_s)
		}),
		$$new($ObjectArray, {
			$of("error.pagerange"_s),
			$of(u"\u7121\u6548\u7684\u9801\u9762\u7bc4\u570d; \u8acb\u91cd\u65b0\u8f38\u5165\u6578\u503c (\u4f8b\u5982 1-3,5,7-10)"_s)
		}),
		$$new($ObjectArray, {
			$of("executive"_s),
			$of("Executive"_s)
		}),
		$$new($ObjectArray, {
			$of("folio"_s),
			$of("Folio"_s)
		}),
		$$new($ObjectArray, {
			$of("invite-envelope"_s),
			$of("Invitation Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("invoice"_s),
			$of("Invoice"_s)
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
			$of("ISO Designated Long"_s)
		}),
		$$new($ObjectArray, {
			$of("italian-envelope"_s),
			$of("Italy Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("italy-envelope"_s),
			$of("Italy Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese-postcard"_s),
			$of("Postcard (JIS)"_s)
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
			$of(u"\u5e95\u90e8\u908a\u8ddd(&B)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.inches"_s),
			$of("(in)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.info"_s),
			$of(u"\u8cc7\u8a0a: "_s)
		}),
		$$new($ObjectArray, {
			$of("label.jobname"_s),
			$of(u"\u5de5\u4f5c\u540d\u7a31(&J):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.leftmargin"_s),
			$of(u"\u5de6\u908a\u8ddd(&F)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.millimetres"_s),
			$of("(mm)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.numcopies"_s),
			$of(u"\u5217\u5370\u4efd\u6578(&O): "_s)
		}),
		$$new($ObjectArray, {
			$of("label.priority"_s),
			$of(u"\u512a\u5148\u6b0a(&R):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.psname"_s),
			$of(u"\u540d\u7a31(&N):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.pstype"_s),
			$of(u"\u985e\u578b: "_s)
		}),
		$$new($ObjectArray, {
			$of("label.rangeto"_s),
			$of(u"\u81f3"_s)
		}),
		$$new($ObjectArray, {
			$of("label.rightmargin"_s),
			$of(u"\u53f3\u908a\u8ddd(&R)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.size"_s),
			$of(u"\u5927\u5c0f(&Z):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.source"_s),
			$of(u"\u4f86\u6e90(&C): "_s)
		}),
		$$new($ObjectArray, {
			$of("label.status"_s),
			$of(u"\u72c0\u614b: "_s)
		}),
		$$new($ObjectArray, {
			$of("label.topmargin"_s),
			$of(u"\u9802\u7aef\u908a\u8ddd(&T)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.username"_s),
			$of(u"\u4f7f\u7528\u8005\u540d\u7a31(&U):"_s)
		}),
		$$new($ObjectArray, {
			$of("large-capacity"_s),
			$of(u"\u5927\u5bb9\u91cf"_s)
		}),
		$$new($ObjectArray, {
			$of("ledger"_s),
			$of("Ledger"_s)
		}),
		$$new($ObjectArray, {
			$of("main"_s),
			$of(u"\u4e3b"_s)
		}),
		$$new($ObjectArray, {
			$of("manual"_s),
			$of(u"\u624b\u9001"_s)
		}),
		$$new($ObjectArray, {
			$of("middle"_s),
			$of(u"\u4e2d"_s)
		}),
		$$new($ObjectArray, {
			$of("monarch-envelope"_s),
			$of("Monarch Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x13-envelope"_s),
			$of("10x15 Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x14-envelope"_s),
			$of("10x15 Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x15-envelope"_s),
			$of("10x15 Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("na-5x7"_s),
			$of("5\" x 7\" Paper"_s)
		}),
		$$new($ObjectArray, {
			$of("na-6x9-envelope"_s),
			$of("6x9 Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("na-7x9-envelope"_s),
			$of("6x7 Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("na-8x10"_s),
			$of("8\" x 10\" Paper"_s)
		}),
		$$new($ObjectArray, {
			$of("na-9x11-envelope"_s),
			$of("9x11 Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("na-9x12-envelope"_s),
			$of("9x12 Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("na-legal"_s),
			$of("Legal"_s)
		}),
		$$new($ObjectArray, {
			$of("na-letter"_s),
			$of("Letter"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-10-envelope"_s),
			$of("No. 10 Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-11-envelope"_s),
			$of("No. 11 Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-12-envelope"_s),
			$of("No. 12 Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-14-envelope"_s),
			$of("No. 14 Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-9-envelope"_s),
			$of("No. 9 Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("not-accepting-jobs"_s),
			$of(u"\u4e0d\u63a5\u53d7\u7684\u5de5\u4f5c"_s)
		}),
		$$new($ObjectArray, {
			$of("oufuko-postcard"_s),
			$of("Double Postcard (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("personal-envelope"_s),
			$of("Personal Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("quarto"_s),
			$of("Quarto"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.color"_s),
			$of(u"\u984f\u8272(&C)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.draftq"_s),
			$of(u"\u8349\u7a3f(&F)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.duplex"_s),
			$of(u"\u96d9\u9762\u5217\u5370(&D)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.highq"_s),
			$of(u"\u9ad8(&H)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.landscape"_s),
			$of(u"\u6a6b\u5411(&L)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.monochrome"_s),
			$of(u"\u55ae\u8272(&M)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.normalq"_s),
			$of(u"\u6b63\u5e38(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.oneside"_s),
			$of(u"\u55ae\u9762(&O)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.portrait"_s),
			$of(u"\u76f4\u5411(&P)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangeall"_s),
			$of(u"\u5168\u90e8(&L)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangepages"_s),
			$of(u"\u9801\u9762(&E)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revlandscape"_s),
			$of(u"\u53cd\u5411\u6a6b\u5370(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revportrait"_s),
			$of(u"\u53cd\u5411\u76f4\u5370(&I)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.tumble"_s),
			$of(u"\u7ffb\u8f49(&T)"_s)
		}),
		$$new($ObjectArray, {
			$of("side"_s),
			$of(u"\u908a"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.appearance"_s),
			$of(u"\u5916\u89c0(&A)"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.general"_s),
			$of(u"\u4e00\u822c(&G)"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.pagesetup"_s),
			$of(u"\u9801\u9762\u8a2d\u5b9a(&S)"_s)
		}),
		$$new($ObjectArray, {
			$of("tabloid"_s),
			$of("Tabloid"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"\u4e0a"_s)
		})
	});
}

serviceui_zh_HK::serviceui_zh_HK() {
}

$Class* serviceui_zh_HK::load$($String* name, bool initialize) {
	$loadClass(serviceui_zh_HK, name, initialize, &_serviceui_zh_HK_ClassInfo_, allocate$serviceui_zh_HK);
	return class$;
}

$Class* serviceui_zh_HK::class$ = nullptr;

		} // resources
	} // print
} // sun