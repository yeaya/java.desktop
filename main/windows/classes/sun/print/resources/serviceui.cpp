#include <sun/print/resources/serviceui.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace print {
		namespace resources {

$MethodInfo _serviceui_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(serviceui::*)()>(&serviceui::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _serviceui_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.print.resources.serviceui",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_serviceui_MethodInfo_
};

$Object* allocate$serviceui($Class* clazz) {
	return $of($alloc(serviceui));
}

void serviceui::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serviceui::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("Automatic-Feeder"_s),
			$of("Automatic Feeder"_s)
		}),
		$$new($ObjectArray, {
			$of("Cassette"_s),
			$of("Cassette"_s)
		}),
		$$new($ObjectArray, {
			$of("Form-Source"_s),
			$of("Form Source"_s)
		}),
		$$new($ObjectArray, {
			$of("Large-Format"_s),
			$of("Large Format"_s)
		}),
		$$new($ObjectArray, {
			$of("Manual-Envelope"_s),
			$of("Manual Envelope"_s)
		}),
		$$new($ObjectArray, {
			$of("Small-Format"_s),
			$of("Small Format"_s)
		}),
		$$new($ObjectArray, {
			$of("Tractor-Feeder"_s),
			$of("Tractor Feeder"_s)
		}),
		$$new($ObjectArray, {
			$of("a"_s),
			$of("Engineering A"_s)
		}),
		$$new($ObjectArray, {
			$of("accepting-jobs"_s),
			$of("Accepting jobs"_s)
		}),
		$$new($ObjectArray, {
			$of("auto-select"_s),
			$of("Automatically Select"_s)
		}),
		$$new($ObjectArray, {
			$of("b"_s),
			$of("Engineering B"_s)
		}),
		$$new($ObjectArray, {
			$of("border.chromaticity"_s),
			$of("Color Appearance"_s)
		}),
		$$new($ObjectArray, {
			$of("border.copies"_s),
			$of("Copies"_s)
		}),
		$$new($ObjectArray, {
			$of("border.jobattributes"_s),
			$of("Job Attributes"_s)
		}),
		$$new($ObjectArray, {
			$of("border.margins"_s),
			$of("Margins"_s)
		}),
		$$new($ObjectArray, {
			$of("border.media"_s),
			$of("Media"_s)
		}),
		$$new($ObjectArray, {
			$of("border.orientation"_s),
			$of("Orientation"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printrange"_s),
			$of("Print Range"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printservice"_s),
			$of("Print Service"_s)
		}),
		$$new($ObjectArray, {
			$of("border.quality"_s),
			$of("Quality"_s)
		}),
		$$new($ObjectArray, {
			$of("border.sides"_s),
			$of("Sides"_s)
		}),
		$$new($ObjectArray, {
			$of("bottom"_s),
			$of("Bottom"_s)
		}),
		$$new($ObjectArray, {
			$of("button.cancel"_s),
			$of("Cancel"_s)
		}),
		$$new($ObjectArray, {
			$of("button.ok"_s),
			$of("OK"_s)
		}),
		$$new($ObjectArray, {
			$of("button.print"_s),
			$of("Print"_s)
		}),
		$$new($ObjectArray, {
			$of("button.properties"_s),
			$of("P&roperties..."_s)
		}),
		$$new($ObjectArray, {
			$of("c"_s),
			$of("Engineering C"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.collate"_s),
			$of("&Collate"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.jobsheets"_s),
			$of("&Banner Page"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.printtofile"_s),
			$of("Print To &File"_s)
		}),
		$$new($ObjectArray, {
			$of("d"_s),
			$of("Engineering D"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.noprintermsg"_s),
			$of("No print service found."_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.overwrite"_s),
			$of("This file already exists.  Would you like to overwrite the existing file?"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.owtitle"_s),
			$of("Print To File"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtitle"_s),
			$of("Print"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtofile"_s),
			$of("Print To File"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.pstitle"_s),
			$of("Page Setup"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.writeerror"_s),
			$of("Cannot write to file:"_s)
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
			$of("Invalid filename; please try again"_s)
		}),
		$$new($ObjectArray, {
			$of("error.pagerange"_s),
			$of("Invalid page range; please re-enter values (e.g. 1-3,5,7-10)"_s)
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
			$of("&bottom"_s)
		}),
		$$new($ObjectArray, {
			$of("label.inches"_s),
			$of("(in)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.info"_s),
			$of("Info:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.jobname"_s),
			$of("&Job Name:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.leftmargin"_s),
			$of("le&ft"_s)
		}),
		$$new($ObjectArray, {
			$of("label.millimetres"_s),
			$of("(mm)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.numcopies"_s),
			$of("Number &of copies:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.priority"_s),
			$of("P&riority:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.psname"_s),
			$of("&Name:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.pstype"_s),
			$of("Type:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.rangeto"_s),
			$of("To"_s)
		}),
		$$new($ObjectArray, {
			$of("label.rightmargin"_s),
			$of("&right"_s)
		}),
		$$new($ObjectArray, {
			$of("label.size"_s),
			$of("Si&ze:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.source"_s),
			$of("Sour&ce:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.status"_s),
			$of("Status:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.topmargin"_s),
			$of("&top"_s)
		}),
		$$new($ObjectArray, {
			$of("label.username"_s),
			$of("&User Name:"_s)
		}),
		$$new($ObjectArray, {
			$of("large-capacity"_s),
			$of("Large Capacity"_s)
		}),
		$$new($ObjectArray, {
			$of("ledger"_s),
			$of("Ledger"_s)
		}),
		$$new($ObjectArray, {
			$of("main"_s),
			$of("Main"_s)
		}),
		$$new($ObjectArray, {
			$of("manual"_s),
			$of("Manual"_s)
		}),
		$$new($ObjectArray, {
			$of("middle"_s),
			$of("Middle"_s)
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
			$of("Not accepting jobs"_s)
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
			$of("&Color"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.draftq"_s),
			$of("Dra&ft"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.duplex"_s),
			$of("&Duplex"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.highq"_s),
			$of("&High"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.landscape"_s),
			$of("&Landscape"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.monochrome"_s),
			$of("&Monochrome"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.normalq"_s),
			$of("&Normal"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.oneside"_s),
			$of("&One Side"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.portrait"_s),
			$of("&Portrait"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangeall"_s),
			$of("A&ll"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangepages"_s),
			$of("Pag&es"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revlandscape"_s),
			$of("Reverse La&ndscape"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revportrait"_s),
			$of("Reverse Portra&it"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.tumble"_s),
			$of("&Tumble"_s)
		}),
		$$new($ObjectArray, {
			$of("side"_s),
			$of("Side"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.appearance"_s),
			$of("&Appearance"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.general"_s),
			$of("&General"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.pagesetup"_s),
			$of("Page &Setup"_s)
		}),
		$$new($ObjectArray, {
			$of("tabloid"_s),
			$of("Tabloid"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of("Top"_s)
		})
	});
}

serviceui::serviceui() {
}

$Class* serviceui::load$($String* name, bool initialize) {
	$loadClass(serviceui, name, initialize, &_serviceui_ClassInfo_, allocate$serviceui);
	return class$;
}

$Class* serviceui::class$ = nullptr;

		} // resources
	} // print
} // sun