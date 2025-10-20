#include <ColorCustomizationTest.h>

#include <ColorCustomizationTest$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

#undef BLUE
#undef GREEN
#undef HEIGHT
#undef LABEL
#undef RED
#undef TYPE_INT_ARGB
#undef WIDTH

using $ColorCustomizationTest$1 = ::ColorCustomizationTest$1;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

$FieldInfo _ColorCustomizationTest_FieldInfo_[] = {
	{"WIDTH", "I", nullptr, $STATIC | $FINAL, $constField(ColorCustomizationTest, WIDTH)},
	{"HEIGHT", "I", nullptr, $STATIC | $FINAL, $constField(ColorCustomizationTest, HEIGHT)},
	{"nimbus", "Ljavax/swing/plaf/nimbus/NimbusLookAndFeel;", nullptr, $STATIC, $staticField(ColorCustomizationTest, nimbus)},
	{"label", "Ljavax/swing/JLabel;", nullptr, $FINAL, $field(ColorCustomizationTest, label)},
	{"g", "Ljava/awt/Graphics;", nullptr, $FINAL, $field(ColorCustomizationTest, g)},
	{}
};

$MethodInfo _ColorCustomizationTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ColorCustomizationTest::*)()>(&ColorCustomizationTest::init$))},
	{"check", "(Ljava/awt/Color;)V", nullptr, 0},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ColorCustomizationTest::main)), "java.lang.Exception"},
	{"test", "()V", nullptr, 0},
	{"testBaseColor", "()V", nullptr, 0},
	{"testInheritance", "()V", nullptr, 0},
	{"testNames", "()V", nullptr, 0},
	{"testOverrides", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _ColorCustomizationTest_InnerClassesInfo_[] = {
	{"ColorCustomizationTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ColorCustomizationTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ColorCustomizationTest",
	"java.lang.Object",
	nullptr,
	_ColorCustomizationTest_FieldInfo_,
	_ColorCustomizationTest_MethodInfo_,
	nullptr,
	nullptr,
	_ColorCustomizationTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ColorCustomizationTest$1"
};

$Object* allocate$ColorCustomizationTest($Class* clazz) {
	return $of($alloc(ColorCustomizationTest));
}

$NimbusLookAndFeel* ColorCustomizationTest::nimbus = nullptr;

void ColorCustomizationTest::init$() {
	$set(this, label, $new($JLabel));
	$nc(this->label)->setSize(200, 100);
	$set(this, g, $$new($BufferedImage, ColorCustomizationTest::WIDTH, ColorCustomizationTest::HEIGHT, $BufferedImage::TYPE_INT_ARGB)->getGraphics());
}

void ColorCustomizationTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$init(ColorCustomizationTest);
	$assignStatic(ColorCustomizationTest::nimbus, $new($NimbusLookAndFeel));
	try {
		$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>(ColorCustomizationTest::nimbus));
	} catch ($UnsupportedLookAndFeelException&) {
		$var($UnsupportedLookAndFeelException, e, $catch());
		$throwNew($Error, "Unable to set Nimbus LAF"_s);
	}
	$SwingUtilities::invokeAndWait($$new($ColorCustomizationTest$1));
}

void ColorCustomizationTest::check($Color* c) {
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::updateComponentTreeUI(this->label);
	$nc(this->label)->paint(this->g);
	int32_t var$0 = $nc($($nc(this->label)->getBackground()))->getRGB();
	if (var$0 != $nc(c)->getRGB()) {
		$init($System);
		$nc($System::err)->println("Color mismatch!"_s);
		$nc($System::err)->println($$str({"   found: "_s, $($nc(this->label)->getBackground())}));
		$nc($System::err)->println($$str({"   expected: "_s, c}));
		$throwNew($RuntimeException, "Test failed"_s);
	}
}

void ColorCustomizationTest::test() {
	testOverrides();
	testInheritance();
	testNames();
	testBaseColor();
}

void ColorCustomizationTest::testOverrides() {
	$useLocalCurrentObjectStackCache();
	$var($Color, defaultColor, $nc(this->label)->getBackground());
	$var($UIDefaults, defs, $new($UIDefaults));
	$init($Color);
	defs->put("Label.background"_s, $$new($ColorUIResource, $Color::RED));
	$nc(this->label)->putClientProperty("Nimbus.Overrides"_s, defs);
	check($Color::RED);
	$assign(defs, $new($UIDefaults));
	defs->put("Label.background"_s, $$new($ColorUIResource, $Color::GREEN));
	$nc(this->label)->putClientProperty("Nimbus.Overrides"_s, defs);
	check($Color::GREEN);
	$nc(this->label)->putClientProperty("Nimbus.Overrides"_s, nullptr);
	check(defaultColor);
}

void ColorCustomizationTest::testInheritance() {
	$useLocalCurrentObjectStackCache();
	$var($Color, defaultColor, $nc(this->label)->getBackground());
	$init($Color);
	$UIManager::put("Label[Enabled].background"_s, $$new($ColorUIResource, $Color::RED));
	$var($UIDefaults, defs, $new($UIDefaults));
	defs->put("Label.background"_s, $$new($ColorUIResource, $Color::GREEN));
	$nc(this->label)->putClientProperty("Nimbus.Overrides"_s, defs);
	check($Color::RED);
	$nc(this->label)->putClientProperty("Nimbus.Overrides.InheritDefaults"_s, $($Boolean::valueOf(false)));
	check($Color::GREEN);
	$nc(this->label)->putClientProperty("Nimbus.Overrides.InheritDefaults"_s, $($Boolean::valueOf(true)));
	check($Color::RED);
	$UIManager::put("Label[Enabled].background"_s, nullptr);
	$nc(this->label)->putClientProperty("Nimbus.Overrides.InheritDefaults"_s, $($Boolean::valueOf(false)));
	$nc(this->label)->putClientProperty("Nimbus.Overrides"_s, nullptr);
	check(defaultColor);
}

void ColorCustomizationTest::testNames() {
	$useLocalCurrentObjectStackCache();
	$var($Color, defaultColor, $nc(this->label)->getBackground());
	$init($Color);
	$UIManager::put("\"BlueLabel\"[Enabled].background"_s, $$new($ColorUIResource, $Color::BLUE));
	$UIManager::put("\"RedLabel\"[Enabled].background"_s, $$new($ColorUIResource, $Color::RED));
	$init($Region);
	$nc(ColorCustomizationTest::nimbus)->register$($Region::LABEL, "\"BlueLabel\""_s);
	$nc(ColorCustomizationTest::nimbus)->register$($Region::LABEL, "\"RedLabel\""_s);
	$nc(this->label)->setName("BlueLabel"_s);
	check($Color::BLUE);
	$nc(this->label)->setName("RedLabel"_s);
	check($Color::RED);
	$nc(this->label)->setName(nullptr);
	check(defaultColor);
}

void ColorCustomizationTest::testBaseColor() {
	$init($Color);
	$UIManager::put("control"_s, $Color::GREEN);
	check($Color::GREEN);
}

ColorCustomizationTest::ColorCustomizationTest() {
}

$Class* ColorCustomizationTest::load$($String* name, bool initialize) {
	$loadClass(ColorCustomizationTest, name, initialize, &_ColorCustomizationTest_ClassInfo_, allocate$ColorCustomizationTest);
	return class$;
}

$Class* ColorCustomizationTest::class$ = nullptr;