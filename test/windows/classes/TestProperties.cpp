#include <TestProperties.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

$FieldInfo _TestProperties_FieldInfo_[] = {
	{"windowsProperties", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestProperties, windowsProperties)},
	{"aquaProperties", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestProperties, aquaProperties)},
	{"gtkProperties", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestProperties, gtkProperties)},
	{"motifProperties", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestProperties, motifProperties)},
	{"nimbusProperties", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestProperties, nimbusProperties)},
	{"metalProperties", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestProperties, metalProperties)},
	{}
};

$MethodInfo _TestProperties_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestProperties::*)()>(&TestProperties::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestProperties::main)), "java.lang.Exception"},
	{"test", "([Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestProperties::test))},
	{}
};

$ClassInfo _TestProperties_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"TestProperties",
	"java.lang.Object",
	nullptr,
	_TestProperties_FieldInfo_,
	_TestProperties_MethodInfo_
};

$Object* allocate$TestProperties($Class* clazz) {
	return $of($alloc(TestProperties));
}

$StringArray* TestProperties::windowsProperties = nullptr;
$StringArray* TestProperties::aquaProperties = nullptr;
$StringArray* TestProperties::gtkProperties = nullptr;
$StringArray* TestProperties::motifProperties = nullptr;
$StringArray* TestProperties::nimbusProperties = nullptr;
$StringArray* TestProperties::metalProperties = nullptr;

void TestProperties::init$() {
}

void TestProperties::main($StringArray* args) {
	$init(TestProperties);
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($MetalLookAndFeel)));
	test(TestProperties::metalProperties);
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($NimbusLookAndFeel)));
	test(TestProperties::nimbusProperties);
	$UIManager::setLookAndFeel("com.sun.java.swing.plaf.motif.MotifLookAndFeel"_s);
	test(TestProperties::motifProperties);
	try {
		$UIManager::setLookAndFeel("com.sun.java.swing.plaf.windows.WindowsLookAndFeel"_s);
		test(TestProperties::windowsProperties);
	} catch ($Exception&) {
		$catch();
	}
	try {
		$UIManager::setLookAndFeel("com.apple.laf.AquaLookAndFeel"_s);
		test(TestProperties::aquaProperties);
	} catch ($Exception&) {
		$catch();
	}
	try {
		$UIManager::setLookAndFeel("com.sun.java.swing.plaf.gtk.GTKLookAndFeel"_s);
		test(TestProperties::gtkProperties);
	} catch ($Exception&) {
		$catch();
	}
}

void TestProperties::test($StringArray* properties) {
	$init(TestProperties);
	{
		$var($StringArray, arr$, properties);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, name, arr$->get(i$));
			{
				$var($String, value, $UIManager::getString(name));
				if (value == nullptr) {
					$init($System);
					$nc($System::err)->println($$str({"Current LookAndFeel = "_s, $($nc($($UIManager::getLookAndFeel()))->getDescription())}));
					$nc($System::err)->printf("The value for %s property is null\n"_s, $$new($ObjectArray, {$of(name)}));
					$throwNew($Error);
				}
			}
		}
	}
}

void clinit$TestProperties($Class* class$) {
	$assignStatic(TestProperties::windowsProperties, $new($StringArray, {
		"FileChooser.viewMenuButtonToolTipText"_s,
		"FileChooser.viewMenuButtonAccessibleName"_s
	}));
	$assignStatic(TestProperties::aquaProperties, $new($StringArray, {"FileChooser.mac.newFolder"_s}));
	$assignStatic(TestProperties::gtkProperties, $new($StringArray, {"FileChooser.renameFileDialogText"_s}));
	$assignStatic(TestProperties::motifProperties, $new($StringArray, {"FileChooser.enterFolderNameLabel.textAndMnemonic"_s}));
	$assignStatic(TestProperties::nimbusProperties, $new($StringArray, {"FileChooser.refreshActionLabelText"_s}));
	$assignStatic(TestProperties::metalProperties, $new($StringArray, {"MetalTitlePane.iconify.titleAndMnemonic"_s}));
}

TestProperties::TestProperties() {
}

$Class* TestProperties::load$($String* name, bool initialize) {
	$loadClass(TestProperties, name, initialize, &_TestProperties_ClassInfo_, clinit$TestProperties, allocate$TestProperties);
	return class$;
}

$Class* TestProperties::class$ = nullptr;