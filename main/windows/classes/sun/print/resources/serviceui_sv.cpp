#include <sun/print/resources/serviceui_sv.h>

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

$MethodInfo _serviceui_sv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(serviceui_sv::*)()>(&serviceui_sv::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _serviceui_sv_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.print.resources.serviceui_sv",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_serviceui_sv_MethodInfo_
};

$Object* allocate$serviceui_sv($Class* clazz) {
	return $of($alloc(serviceui_sv));
}

void serviceui_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serviceui_sv::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("Automatic-Feeder"_s),
			$of("Automatisk matning"_s)
		}),
		$$new($ObjectArray, {
			$of("Cassette"_s),
			$of("Kassett"_s)
		}),
		$$new($ObjectArray, {
			$of("Form-Source"_s),
			$of(u"Formul\u00e4rk\u00e4lla"_s)
		}),
		$$new($ObjectArray, {
			$of("Large-Format"_s),
			$of("Stort format"_s)
		}),
		$$new($ObjectArray, {
			$of("Manual-Envelope"_s),
			$of("Manuell kuvertmatning"_s)
		}),
		$$new($ObjectArray, {
			$of("Small-Format"_s),
			$of("Litet format"_s)
		}),
		$$new($ObjectArray, {
			$of("Tractor-Feeder"_s),
			$of("Traktormatning"_s)
		}),
		$$new($ObjectArray, {
			$of("a"_s),
			$of("Engineering A"_s)
		}),
		$$new($ObjectArray, {
			$of("accepting-jobs"_s),
			$of("Accepterar jobb"_s)
		}),
		$$new($ObjectArray, {
			$of("auto-select"_s),
			$of(u"V\u00e4lj automatiskt"_s)
		}),
		$$new($ObjectArray, {
			$of("b"_s),
			$of("Engineering B"_s)
		}),
		$$new($ObjectArray, {
			$of("border.chromaticity"_s),
			$of(u"F\u00e4rg"_s)
		}),
		$$new($ObjectArray, {
			$of("border.copies"_s),
			$of("Antal exemplar"_s)
		}),
		$$new($ObjectArray, {
			$of("border.jobattributes"_s),
			$of("Utskriftsattribut"_s)
		}),
		$$new($ObjectArray, {
			$of("border.margins"_s),
			$of("Marginaler"_s)
		}),
		$$new($ObjectArray, {
			$of("border.media"_s),
			$of("Media"_s)
		}),
		$$new($ObjectArray, {
			$of("border.orientation"_s),
			$of("Orientering"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printrange"_s),
			$of("Utskriftsintervall"_s)
		}),
		$$new($ObjectArray, {
			$of("border.printservice"_s),
			$of(u"Utskriftstj\u00e4nst"_s)
		}),
		$$new($ObjectArray, {
			$of("border.quality"_s),
			$of("Kvalitet"_s)
		}),
		$$new($ObjectArray, {
			$of("border.sides"_s),
			$of("Sidor"_s)
		}),
		$$new($ObjectArray, {
			$of("bottom"_s),
			$of("Botten"_s)
		}),
		$$new($ObjectArray, {
			$of("button.cancel"_s),
			$of("Avbryt"_s)
		}),
		$$new($ObjectArray, {
			$of("button.ok"_s),
			$of("OK"_s)
		}),
		$$new($ObjectArray, {
			$of("button.print"_s),
			$of("Skriv ut"_s)
		}),
		$$new($ObjectArray, {
			$of("button.properties"_s),
			$of("&Egenskaper..."_s)
		}),
		$$new($ObjectArray, {
			$of("c"_s),
			$of("Engineering C"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.collate"_s),
			$of("&Sortera"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.jobsheets"_s),
			$of(u"F&\u00f6rs\u00e4ttsblad"_s)
		}),
		$$new($ObjectArray, {
			$of("checkbox.printtofile"_s),
			$of("Skriv ut till &fil"_s)
		}),
		$$new($ObjectArray, {
			$of("d"_s),
			$of("Engineering D"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.noprintermsg"_s),
			$of(u"Hittade ingen utskriftstj\u00e4nst."_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.overwrite"_s),
			$of(u"Denna fil finns redan.  Vill du skriva \u00f6ver den befintliga filen?"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.owtitle"_s),
			$of("Skriv till fil"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtitle"_s),
			$of("Skriv ut"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.printtofile"_s),
			$of("Skriv till fil"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.pstitle"_s),
			$of("Utskriftsformat"_s)
		}),
		$$new($ObjectArray, {
			$of("dialog.writeerror"_s),
			$of("Kan inte skriva till filen:"_s)
		}),
		$$new($ObjectArray, {
			$of("e"_s),
			$of("Engineering E"_s)
		}),
		$$new($ObjectArray, {
			$of("envelope"_s),
			$of("Kuvert"_s)
		}),
		$$new($ObjectArray, {
			$of("error.destination"_s),
			$of(u"Ogiltigt filnamn. F\u00f6rs\u00f6k igen."_s)
		}),
		$$new($ObjectArray, {
			$of("error.pagerange"_s),
			$of(u"Ogiltigt sidintervall. Skriv in v\u00e4rdena igen (t ex 1-3,5,7-10)"_s)
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
			$of("Invitation-kuvert"_s)
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
			$of("Italienskt kuvert"_s)
		}),
		$$new($ObjectArray, {
			$of("italy-envelope"_s),
			$of("Italienskt kuvert"_s)
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
			$of("&nederkant"_s)
		}),
		$$new($ObjectArray, {
			$of("label.inches"_s),
			$of("(tum)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.info"_s),
			$of("Info:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.jobname"_s),
			$of("&Utskrift:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.leftmargin"_s),
			$of(u"v&\u00e4nster"_s)
		}),
		$$new($ObjectArray, {
			$of("label.millimetres"_s),
			$of("(mm)"_s)
		}),
		$$new($ObjectArray, {
			$of("label.numcopies"_s),
			$of("Antal e&xemplar:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.priority"_s),
			$of("P&rioritet:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.psname"_s),
			$of("&Namn:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.pstype"_s),
			$of("Typ:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.rangeto"_s),
			$of("Till"_s)
		}),
		$$new($ObjectArray, {
			$of("label.rightmargin"_s),
			$of(u"&h\u00f6ger"_s)
		}),
		$$new($ObjectArray, {
			$of("label.size"_s),
			$of("Stor&lek:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.source"_s),
			$of(u"&K\u00e4lla:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.status"_s),
			$of("Status:"_s)
		}),
		$$new($ObjectArray, {
			$of("label.topmargin"_s),
			$of(u"&\u00f6verkant"_s)
		}),
		$$new($ObjectArray, {
			$of("label.username"_s),
			$of(u"A&nv\u00e4ndarnamn:"_s)
		}),
		$$new($ObjectArray, {
			$of("large-capacity"_s),
			$of(u"H\u00f6g kapacitet"_s)
		}),
		$$new($ObjectArray, {
			$of("ledger"_s),
			$of("Ledger"_s)
		}),
		$$new($ObjectArray, {
			$of("main"_s),
			$of("Huvud"_s)
		}),
		$$new($ObjectArray, {
			$of("manual"_s),
			$of("Manuell"_s)
		}),
		$$new($ObjectArray, {
			$of("middle"_s),
			$of("Mitten"_s)
		}),
		$$new($ObjectArray, {
			$of("monarch-envelope"_s),
			$of("Monarch-kuvert"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x13-envelope"_s),
			$of("10x15-kuvert"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x14-envelope"_s),
			$of("10x15-kuvert"_s)
		}),
		$$new($ObjectArray, {
			$of("na-10x15-envelope"_s),
			$of("10x15-kuvert"_s)
		}),
		$$new($ObjectArray, {
			$of("na-5x7"_s),
			$of("5x7-tumspapper"_s)
		}),
		$$new($ObjectArray, {
			$of("na-6x9-envelope"_s),
			$of("6x9-kuvert"_s)
		}),
		$$new($ObjectArray, {
			$of("na-7x9-envelope"_s),
			$of("6x7-kuvert"_s)
		}),
		$$new($ObjectArray, {
			$of("na-8x10"_s),
			$of("8x10-tumspapper"_s)
		}),
		$$new($ObjectArray, {
			$of("na-9x11-envelope"_s),
			$of("9x11-kuvert"_s)
		}),
		$$new($ObjectArray, {
			$of("na-9x12-envelope"_s),
			$of("9x12-kuvert"_s)
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
			$of("No. 10-kuvert"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-11-envelope"_s),
			$of("No. 11-kuvert"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-12-envelope"_s),
			$of("No. 12-kuvert"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-14-envelope"_s),
			$of("No. 14-kuvert"_s)
		}),
		$$new($ObjectArray, {
			$of("na-number-9-envelope"_s),
			$of("No. 9-kuvert"_s)
		}),
		$$new($ObjectArray, {
			$of("not-accepting-jobs"_s),
			$of("Accepterar inte jobb"_s)
		}),
		$$new($ObjectArray, {
			$of("oufuko-postcard"_s),
			$of("Double Postcard (JIS)"_s)
		}),
		$$new($ObjectArray, {
			$of("personal-envelope"_s),
			$of("Egen kuvertstorlek"_s)
		}),
		$$new($ObjectArray, {
			$of("quarto"_s),
			$of("Quarto"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.color"_s),
			$of(u"&F\u00e4rg"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.draftq"_s),
			$of("Utka&st"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.duplex"_s),
			$of("&Dubbelsidig"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.highq"_s),
			$of(u"&H\u00f6g"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.landscape"_s),
			$of("Liggan&de"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.monochrome"_s),
			$of("&Monokrom"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.normalq"_s),
			$of("&Normal"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.oneside"_s),
			$of("&Ensidig"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.portrait"_s),
			$of(u"&St\u00e5ende"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangeall"_s),
			$of("A&lla"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.rangepages"_s),
			$of("Sid&or"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revlandscape"_s),
			$of(u"Omv\u00e4nt li&ggande"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.revportrait"_s),
			$of(u"Omv\u00e4nt st\u00e5en&de"_s)
		}),
		$$new($ObjectArray, {
			$of("radiobutton.tumble"_s),
			$of(u"&V\u00e4nd"_s)
		}),
		$$new($ObjectArray, {
			$of("side"_s),
			$of("Sida"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.appearance"_s),
			$of("Fo&rmat"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.general"_s),
			$of(u"&Allm\u00e4nt"_s)
		}),
		$$new($ObjectArray, {
			$of("tab.pagesetup"_s),
			$of("&Utskriftsformat"_s)
		}),
		$$new($ObjectArray, {
			$of("tabloid"_s),
			$of("Tabloid"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of("Topp"_s)
		})
	});
}

serviceui_sv::serviceui_sv() {
}

$Class* serviceui_sv::load$($String* name, bool initialize) {
	$loadClass(serviceui_sv, name, initialize, &_serviceui_sv_ClassInfo_, allocate$serviceui_sv);
	return class$;
}

$Class* serviceui_sv::class$ = nullptr;

		} // resources
	} // print
} // sun