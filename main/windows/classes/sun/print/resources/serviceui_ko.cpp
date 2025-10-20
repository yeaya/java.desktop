#include <sun/print/resources/serviceui_ko.h>

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

$MethodInfo _serviceui_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(serviceui_ko::*)()>(&serviceui_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _serviceui_ko_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.print.resources.serviceui_ko",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_serviceui_ko_MethodInfo_
};

$Object* allocate$serviceui_ko($Class* clazz) {
	return $of($alloc(serviceui_ko));
}

void serviceui_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serviceui_ko::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("Automatic-Feeder"_s),
			$of(u"\uc790\ub3d9 \uacf5\uae09\uae30"_s)
		}),
		$$new($ObjectArray, {
			$of("Cassette"_s),
			$of(u"\uce74\uc138\ud2b8"_s)
		}),
		$$new($ObjectArray, {
			$of("Form-Source"_s),
			$of(u"\uc591\uc2dd \uc18c\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("Large-Format"_s),
			$of(u"\ud070 \ud615\uc2dd"_s)
		}),
		$$new($ObjectArray, {
			$of("Manual-Envelope"_s),
			$of(u"\uc218\ub3d9 \ubd09\ud22c"_s)
		}),
		$$new($ObjectArray, {
			$of("Small-Format"_s),
			$of(u"\uc791\uc740 \ud615\uc2dd"_s)
		}),
		$$new($ObjectArray, {
			$of("Tractor-Feeder"_s),
			$of(u"\ud2b8\ub799\ud130 \uacf5\uae09\uae30"_s)
		}),
		$$new($ObjectArray, {
			$of("a"_s),
			$of("Engineering A"_s)
		}),
		$$new($ObjectArray, {
			$of("accepting-jobs"_s),
			$of(u"\uc791\uc5c5 \uc2b9\uc778"_s)
		}),
		$$new($ObjectArray, {
			$of("auto-select"_s),
			$of(u"\uc790\ub3d9 \uc120\ud0dd"_s)
		}),
		$$new($ObjectArray, {
			$of("b"_s),
			$of("Engineering B"_s)
		}),
		$$new($ObjectArray, {
			$of("border.chromaticity"_s),
			$of(u"\uc0c9\uc0c1 \ubaa8\uc591"_s)
		}),
		$$new($ObjectArray, {
			$of("border.copies"_s),
			$of(u"\ubcf5\uc0ac"_s)
		}),
		$$new($ObjectArray, {
			$of("border.jobattributes"_s),
			$of(u"\uc791\uc5c5 \uc18d\uc131"_s)
		}),
		$$new($ObjectArray, {
			$of("border.margins"_s),
			$of(u"\uc5ec\ubc31"_s)
		}),
		$$new($ObjectArray, {
			$of("border.media"_s),
			$of(u"\ub9e4\uccb4"_s)
		}),
		$$new($ObjectArray, {
			$of("border.orientation"_s),
			$of(u"\ubc29\ud5a5"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printrange"_s),
			$of(u"\uc778\uc1c4 \ubc94\uc704"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printservice"_s),
			$of(u"\uc778\uc1c4 \uc11c\ube44\uc2a4"_s)
		}),
		$$new($ObjectArray, {
			$of("border.quality"_s),
			$of(u"\ud488\uc9c8"_s)
		}),
		$$new($ObjectArray, {
			$of("border.sides"_s),
			$of(u"\uce21\uba74"_s)
		}),
		$$new($ObjectArray, {
			$of("bottom"_s),
			$of(u"\uc544\ub798\ucabd"_s)
		}),
		$$new($ObjectArray, {
			$of("button.cancel"_s),
			$of(u"\ucde8\uc18c"_s)
		}),
		$$new($ObjectArray, {
			$of("button.ok"_s),
			$of(u"\ud655\uc778"_s)
		}),
		$$new($ObjectArray, {
			$of("button.print"_s),
			$of(u"\uc778\uc1c4"_s)
		}),
		$$new($ObjectArray, {
			$of("button.properties"_s),
			$of(u"\uc18d\uc131(&R)..."_s)
		}),
		$$new($ObjectArray, {
			$of("c"_s),
			$of("Engineering C"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.collate"_s),
			$of(u"\ud55c \ubd80\uc529 \uc778\uc1c4(&C)"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.jobsheets"_s),
			$of(u"\ubc30\ub108 \ud398\uc774\uc9c0(&B)"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.printtofile"_s),
			$of(u"\ud30c\uc77c\ub85c \uc778\uc1c4(&F)"_s)
		}),
		$$new($ObjectArray, {
			$of("d"_s),
			$of("Engineering D"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.noprintermsg"_s),
			$of(u"\uc778\uc1c4 \uc11c\ube44\uc2a4\ub97c \ucc3e\uc744 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.overwrite"_s),
			$of(u"\uc774 \ud30c\uc77c\uc774 \uc874\uc7ac\ud569\ub2c8\ub2e4. \uae30\uc874 \ud30c\uc77c\uc744 \uacb9\uccd0 \uc4f0\uaca0\uc2b5\ub2c8\uae4c?"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.owtitle"_s),
			$of(u"\ud30c\uc77c\ub85c \uc778\uc1c4"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtitle"_s),
			$of(u"\uc778\uc1c4"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtofile"_s),
			$of(u"\ud30c\uc77c\ub85c \uc778\uc1c4"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.pstitle"_s),
			$of(u"\ud398\uc774\uc9c0 \uc124\uc815"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.writeerror"_s),
			$of(u"\ud30c\uc77c\uc5d0 \uc4f8 \uc218 \uc5c6\uc74c:"_s)
		}),
		$$new($ObjectArray, {
			$of("e"_s),
			$of("Engineering E"_s)
		}),
		$$new($ObjectArray, {
			$of("envelope"_s),
			$of("Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("error.destination"_s),
			$of(u"\ubd80\uc801\ud569\ud55c \ud30c\uc77c \uc774\ub984: \ub2e4\uc2dc \uc2dc\ub3c4\ud558\uc2ed\uc2dc\uc624."_s)
		}),
		$$new($ObjectArray, {
			$of("error.pagerange"_s),
			$of(u"\ubd80\uc801\ud569\ud55c \ud398\uc774\uc9c0 \ubc94\uc704: \uac12\uc744 \ub2e4\uc2dc \uc785\ub825\ud558\uc2ed\uc2dc\uc624(\uc608: 1-3,5,7-10)."_s)
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
			$of(u"\uc544\ub798\ucabd(&B)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.inches"_s),
			$of(u"(\uc778\uce58)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.info"_s),
			$of(u"\uc815\ubcf4:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.jobname"_s),
			$of(u"\uc791\uc5c5 \uc774\ub984(&J):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.leftmargin"_s),
			$of(u"\uc67c\ucabd(&F)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.millimetres"_s),
			$of("(mm)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.numcopies"_s),
			$of(u"\ub9e4\uc218(&O):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.priority"_s),
			$of(u"\uc6b0\uc120\uc21c\uc704(&R):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.psname"_s),
			$of(u"\uc774\ub984(&N):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.pstype"_s),
			$of(u"\uc720\ud615:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.rangeto"_s),
			$of(u"\uc885\ub8cc"_s)
		}),
		$$new($ObjectArray, {
			$of("label.rightmargin"_s),
			$of(u"\uc624\ub978\ucabd(&R)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.size"_s),
			$of(u"\ud06c\uae30(&Z):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.source"_s),
			$of(u"\uc18c\uc2a4(&C):"_s)
		}),
		$$new($ObjectArray, {
			$of("label.status"_s),
			$of(u"\uc0c1\ud0dc:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.topmargin"_s),
			$of(u"\uc704\ucabd(&T)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.username"_s),
			$of(u"\uc0ac\uc6a9\uc790 \uc774\ub984(&U):"_s)
		}),
		$$new($ObjectArray, {
			$of("large-capacity"_s),
			$of(u"\ud070 \uc6a9\ub7c9"_s)
		}),
		$$new($ObjectArray, {
			$of("ledger"_s),
			$of("Ledger"_s)
		}),
		$$new($ObjectArray, {
			$of("main"_s),
			$of(u"\uc8fc"_s)
		}),
		$$new($ObjectArray, {
			$of("manual"_s),
			$of(u"\uc218\ub3d9"_s)
		}),
		$$new($ObjectArray, {
			$of("middle"_s),
			$of(u"\uac00\uc6b4\ub370"_s)
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
			$of(u"5\" x 7\" \uc6a9\uc9c0"_s)
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
			$of(u"8\" x 10\" \uc6a9\uc9c0"_s)
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
			$of(u"\uc791\uc5c5 \uc2b9\uc778 \uc548\ud568"_s)
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
			$of(u"\uc0c9\uc0c1(&C)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.draftq"_s),
			$of(u"\ucd08\uc548(&F)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.duplex"_s),
			$of(u"\uc591\uba74(&D)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.highq"_s),
			$of(u"\ub192\uc74c(&H)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.landscape"_s),
			$of(u"\uac00\ub85c(&L)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.monochrome"_s),
			$of(u"\ub2e8\uc0c9(&M)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.normalq"_s),
			$of(u"\ubcf4\ud1b5(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.oneside"_s),
			$of(u"\ub2e8\uba74(&O)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.portrait"_s),
			$of(u"\uc138\ub85c(&P)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangeall"_s),
			$of(u"\uc804\uccb4(&L)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangepages"_s),
			$of(u"\ud398\uc774\uc9c0(&E)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revlandscape"_s),
			$of(u"\uac00\ub85c \ubc18\uc804(&N)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revportrait"_s),
			$of(u"\uc138\ub85c \ubc18\uc804(&I)"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.tumble"_s),
			$of(u"\ud68c\uc804\uc2dd(&T)"_s)
		}),
		$$new($ObjectArray, {
			$of("side"_s),
			$of(u"\uce21\uba74"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.appearance"_s),
			$of(u"\ubaa8\uc591(&A)"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.general"_s),
			$of(u"\uc77c\ubc18 \uc0ac\ud56d(&G)"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.pagesetup"_s),
			$of(u"\ud398\uc774\uc9c0 \uc124\uc815(&S)"_s)
		}),
		$$new($ObjectArray, {
			$of("tabloid"_s),
			$of("Tabloid"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"\uc704\ucabd"_s)
		})
	});
}

serviceui_ko::serviceui_ko() {
}

$Class* serviceui_ko::load$($String* name, bool initialize) {
	$loadClass(serviceui_ko, name, initialize, &_serviceui_ko_ClassInfo_, allocate$serviceui_ko);
	return class$;
}

$Class* serviceui_ko::class$ = nullptr;

		} // resources
	} // print
} // sun