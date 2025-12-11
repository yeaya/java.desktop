#include <Test6741426.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

#undef HEIGHT
#undef TYPE_INT_ARGB
#undef WIDTH

using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComboBox = ::javax::swing::JComboBox;
using $JTextField = ::javax::swing::JTextField;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

$FieldInfo _Test6741426_FieldInfo_[] = {
	{"WIDTH", "I", nullptr, $STATIC | $FINAL, $constField(Test6741426, WIDTH)},
	{"HEIGHT", "I", nullptr, $STATIC | $FINAL, $constField(Test6741426, HEIGHT)},
	{}
};

$MethodInfo _Test6741426_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6741426::*)()>(&Test6741426::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test6741426::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Test6741426_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6741426",
	"java.lang.Object",
	"java.lang.Runnable",
	_Test6741426_FieldInfo_,
	_Test6741426_MethodInfo_
};

$Object* allocate$Test6741426($Class* clazz) {
	return $of($alloc(Test6741426));
}

void Test6741426::init$() {
}

void Test6741426::run() {
	$useLocalCurrentObjectStackCache();
	$var($JComboBox, cb, $new($JComboBox));
	$var($JTextField, tf, $new($JTextField));
	tf->setBorder($(cb->getBorder()));
	$var($BufferedImage, img, $new($BufferedImage, Test6741426::WIDTH, Test6741426::HEIGHT, $BufferedImage::TYPE_INT_ARGB));
	tf->setSize(Test6741426::WIDTH, Test6741426::HEIGHT);
	tf->paint($(img->getGraphics()));
}

void Test6741426::main($StringArray* args) {
	$init(Test6741426);
	$useLocalCurrentObjectStackCache();
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($NimbusLookAndFeel)));
	$SwingUtilities::invokeAndWait($$new(Test6741426));
}

Test6741426::Test6741426() {
}

$Class* Test6741426::load$($String* name, bool initialize) {
	$loadClass(Test6741426, name, initialize, &_Test6741426_ClassInfo_, allocate$Test6741426);
	return class$;
}

$Class* Test6741426::class$ = nullptr;