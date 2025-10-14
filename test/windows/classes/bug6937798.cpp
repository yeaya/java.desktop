#include <bug6937798.h>

#include <bug6937798$1.h>
#include <bug6937798$2.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTable.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $bug6937798$1 = ::bug6937798$1;
using $bug6937798$2 = ::bug6937798$2;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JTable = ::javax::swing::JTable;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;
using $TableModel = ::javax::swing::table::TableModel;

$MethodInfo _bug6937798_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6937798::*)()>(&bug6937798::init$))},
	{"createCountryTable", "()Ljavax/swing/JTable;", nullptr, $PROTECTED},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&bug6937798::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6937798_InnerClassesInfo_[] = {
	{"bug6937798$2", nullptr, nullptr, 0},
	{"bug6937798$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6937798_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6937798",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6937798_MethodInfo_,
	nullptr,
	nullptr,
	_bug6937798_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6937798$2,bug6937798$1"
};

$Object* allocate$bug6937798($Class* clazz) {
	return $of($alloc(bug6937798));
}

void bug6937798::main($StringArray* args) {
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($NimbusLookAndFeel)));
	$SwingUtilities::invokeAndWait($$new($bug6937798$1));
}

void bug6937798::init$() {
	$var($JTable, table, createCountryTable());
	$nc(table)->setShowGrid(true);
	table->setSize(100, 100);
	int32_t var$0 = table->getWidth();
	$var($BufferedImage, im, $new($BufferedImage, var$0, table->getHeight(), $BufferedImage::TYPE_INT_ARGB));
	$var($Graphics, g, im->getGraphics());
	table->print(g);
	$nc(g)->dispose();
	for (int32_t i = 0; i < im->getHeight(); ++i) {
		for (int32_t j = 0; j < im->getWidth(); ++j) {
			int32_t var$1 = im->getRGB(i, j);
			if (var$1 == $nc($(table->getGridColor()))->getRGB()) {
				$init($System);
				$nc($System::out)->println("got it!"_s);
				return;
			}
		}
	}
	$throwNew($RuntimeException, "no table\'s grid detected...."_s);
}

$JTable* bug6937798::createCountryTable() {
	$var($StringArray, headers, $new($StringArray, {
		"Name"_s,
		"Capital City"_s,
		"Language(s)"_s,
		"Monetary Unit(s)"_s,
		"EC Member"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("Albania"_s),
			$of("Tirane"_s),
			$of("Albanian, Greek"_s),
			$of("Lek"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Andorra"_s),
			$of("Andorra la Vella"_s),
			$of("Catalan, French, Spanish"_s),
			$of("French Franc, Spanish Peseta"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Austria"_s),
			$of("Vienna"_s),
			$of("German, Slovenian, Croatian"_s),
			$of("Schilling"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Belarus"_s),
			$of("Minsk"_s),
			$of("Byelorussian, Russian"_s),
			$of("Belarusian Rubel"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Belgium"_s),
			$of("Brussels"_s),
			$of("French, Flemish, German"_s),
			$of("Belgian Franc"_s),
			$of($$new($Boolean, true))
		}),
		$$new($ObjectArray, {
			$of("Bosnia & Herzegovina"_s),
			$of("Sarajevo"_s),
			$of("Serbo-Croatian"_s),
			$of("Dinar"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Bulgaria"_s),
			$of("Sofia"_s),
			$of("Bulgarian, Turkish"_s),
			$of("Lev"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Croatia"_s),
			$of("Zagreb"_s),
			$of("Serbo-Croatian"_s),
			$of("Croatian Kuna"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Czech Republic"_s),
			$of("Prague"_s),
			$of("Czech, Slovak"_s),
			$of("Koruna"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Denmark"_s),
			$of("Copenhagen"_s),
			$of("Danish"_s),
			$of("Krone"_s),
			$of($$new($Boolean, true))
		}),
		$$new($ObjectArray, {
			$of("Estonia"_s),
			$of("Tallinn"_s),
			$of("Estonian, Latvian, Lithuanian, Russian"_s),
			$of("Estonian Kroon"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Finland"_s),
			$of("Helsinki"_s),
			$of("Finnish, Swedish, Lappish"_s),
			$of("Markka"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("France"_s),
			$of("Paris"_s),
			$of("French"_s),
			$of("Franc"_s),
			$of($$new($Boolean, true))
		}),
		$$new($ObjectArray, {
			$of("Germany"_s),
			$of("Berlin"_s),
			$of("German"_s),
			$of("Deutsche Mark"_s),
			$of($$new($Boolean, true))
		}),
		$$new($ObjectArray, {
			$of("Greece"_s),
			$of("Athens"_s),
			$of("Greek, English, French"_s),
			$of("Drachma"_s),
			$of($$new($Boolean, true))
		}),
		$$new($ObjectArray, {
			$of("Hungary"_s),
			$of("Budapest"_s),
			$of("Hungarian"_s),
			$of("Forint"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Iceland"_s),
			$of("Reykjavik"_s),
			$of("Icelandic"_s),
			$of("Icelandic Krona"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Ireland"_s),
			$of("Dublin"_s),
			$of("Irish, English"_s),
			$of("Pound"_s),
			$of($$new($Boolean, true))
		}),
		$$new($ObjectArray, {
			$of("Italy"_s),
			$of("Rome"_s),
			$of("Italian"_s),
			$of("Lira"_s),
			$of($$new($Boolean, true))
		}),
		$$new($ObjectArray, {
			$of("Latvia"_s),
			$of("Riga"_s),
			$of("Lettish, Lithuanian, Russian"_s),
			$of("Lat"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Liechtenstein"_s),
			$of("Vaduz"_s),
			$of("German"_s),
			$of("Swiss Franc"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Lithuania"_s),
			$of("Vilnius"_s),
			$of("Lithuanian, Polish, Russian"_s),
			$of("Lita"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Luxembourg"_s),
			$of("Luxembourg"_s),
			$of("French, German, Letzeburgesch"_s),
			$of("Luxembourg Franc"_s),
			$of($$new($Boolean, true))
		}),
		$$new($ObjectArray, {
			$of("Macedonia"_s),
			$of("Skopje"_s),
			$of("Macedonian, Albanian, Turkish, Serbo-Croatian"_s),
			$of("Denar"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Malta"_s),
			$of("Valletta"_s),
			$of("Maltese, English"_s),
			$of("Maltese Lira"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Moldova"_s),
			$of("Chisinau"_s),
			$of("Moldovan, Russian"_s),
			$of("Leu"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Monaco"_s),
			$of("Monaco"_s),
			$of("French, English, Italian"_s),
			$of("French Franc"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("the Netherlands"_s),
			$of("Amsterdam"_s),
			$of("Dutch"_s),
			$of("Guilder"_s),
			$of($$new($Boolean, true))
		}),
		$$new($ObjectArray, {
			$of("Norway"_s),
			$of("Oslo"_s),
			$of("Norwegian"_s),
			$of("Krone"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Poland"_s),
			$of("Warsaw"_s),
			$of("Polish"_s),
			$of("Zloty"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Portugal"_s),
			$of("Lisbon"_s),
			$of("Portuguese"_s),
			$of("Escudo"_s),
			$of($$new($Boolean, true))
		}),
		$$new($ObjectArray, {
			$of("Romania"_s),
			$of("Bucharest"_s),
			$of("Romanian"_s),
			$of("Leu"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Russia"_s),
			$of("Moscow"_s),
			$of("Russian"_s),
			$of("Ruble"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("San Marino"_s),
			$of("San Marino"_s),
			$of("Italian"_s),
			$of("Italian Lira"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Slovakia"_s),
			$of("Bratislava"_s),
			$of("Slovak, Hungarian"_s),
			$of("Koruna"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Slovenia"_s),
			$of("Ljubljana"_s),
			$of("Slovenian, Serbo-Croatian"_s),
			$of("Tolar"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Spain"_s),
			$of("Madrid"_s),
			$of("Spanish"_s),
			$of("Peseta"_s),
			$of($$new($Boolean, true))
		}),
		$$new($ObjectArray, {
			$of("Sweden"_s),
			$of("Stockholm"_s),
			$of("Swedish"_s),
			$of("Krona"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Switzerland"_s),
			$of("Bern"_s),
			$of("German, French, Italian"_s),
			$of("Swiss Franc"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Turkey"_s),
			$of("Ankara"_s),
			$of("Turkish"_s),
			$of("Turkish Lira"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("Ukraine"_s),
			$of("Kiev"_s),
			$of("Ukranian, Russian, Romanian, Polish, Hungarian"_s),
			$of("Hryvnia"_s),
			$of($$new($Boolean, false))
		}),
		$$new($ObjectArray, {
			$of("United Kingdom"_s),
			$of("London"_s),
			$of("English, Welsh"_s),
			$of("British Pound"_s),
			$of($$new($Boolean, true))
		}),
		$$new($ObjectArray, {
			$of("Yugoslavia"_s),
			$of("Belgrade"_s),
			$of("Serbo-Croatian, Slovenian, Macedonian"_s),
			$of("Dinar"_s),
			$of($$new($Boolean, false))
		})
	}));
	$var($TableModel, dataModel, $new($bug6937798$2, this, headers, data));
	$var($JTable, countryTable, $new($JTable, dataModel));
	$init($Color);
	countryTable->setGridColor($Color::pink);
	countryTable->setBackground($Color::white);
	countryTable->setForeground($Color::black);
	return countryTable;
}

bug6937798::bug6937798() {
}

$Class* bug6937798::load$($String* name, bool initialize) {
	$loadClass(bug6937798, name, initialize, &_bug6937798_ClassInfo_, allocate$bug6937798);
	return class$;
}

$Class* bug6937798::class$ = nullptr;