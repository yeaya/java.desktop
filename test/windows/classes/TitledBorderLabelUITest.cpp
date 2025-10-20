#include <TitledBorderLabelUITest.h>

#include <TitledBorderLabelUITest$TestLookAndFeel.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalLabelUI.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

#undef SIZE
#undef TYPE_INT_RGB

using $TitledBorderLabelUITest$TestLookAndFeel = ::TitledBorderLabelUITest$TestLookAndFeel;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $TitledBorder = ::javax::swing::border::TitledBorder;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $MetalLabelUI = ::javax::swing::plaf::metal::MetalLabelUI;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

class TitledBorderLabelUITest$$Lambda$createAndShowGUI : public $Runnable {
	$class(TitledBorderLabelUITest$$Lambda$createAndShowGUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TitledBorderLabelUITest::createAndShowGUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TitledBorderLabelUITest$$Lambda$createAndShowGUI>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TitledBorderLabelUITest$$Lambda$createAndShowGUI::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TitledBorderLabelUITest$$Lambda$createAndShowGUI::*)()>(&TitledBorderLabelUITest$$Lambda$createAndShowGUI::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TitledBorderLabelUITest$$Lambda$createAndShowGUI::classInfo$ = {
	$PUBLIC | $FINAL,
	"TitledBorderLabelUITest$$Lambda$createAndShowGUI",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TitledBorderLabelUITest$$Lambda$createAndShowGUI::load$($String* name, bool initialize) {
	$loadClass(TitledBorderLabelUITest$$Lambda$createAndShowGUI, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TitledBorderLabelUITest$$Lambda$createAndShowGUI::class$ = nullptr;

$FieldInfo _TitledBorderLabelUITest_FieldInfo_[] = {
	{"SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TitledBorderLabelUITest, SIZE)},
	{"useLAF", "Z", nullptr, $PRIVATE | $STATIC, $staticField(TitledBorderLabelUITest, useLAF)},
	{}
};

$MethodInfo _TitledBorderLabelUITest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TitledBorderLabelUITest::*)()>(&TitledBorderLabelUITest::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TitledBorderLabelUITest::createAndShowGUI))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TitledBorderLabelUITest::main)), "java.lang.Exception"},
	{"paintToImage", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JComponent*)>(&TitledBorderLabelUITest::paintToImage))},
	{}
};

$InnerClassInfo _TitledBorderLabelUITest_InnerClassesInfo_[] = {
	{"TitledBorderLabelUITest$TestLabelUI", "TitledBorderLabelUITest", "TestLabelUI", $PUBLIC | $STATIC},
	{"TitledBorderLabelUITest$TestLookAndFeel", "TitledBorderLabelUITest", "TestLookAndFeel", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TitledBorderLabelUITest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TitledBorderLabelUITest",
	"java.lang.Object",
	nullptr,
	_TitledBorderLabelUITest_FieldInfo_,
	_TitledBorderLabelUITest_MethodInfo_,
	nullptr,
	nullptr,
	_TitledBorderLabelUITest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TitledBorderLabelUITest$TestLabelUI,TitledBorderLabelUITest$TestLookAndFeel"
};

$Object* allocate$TitledBorderLabelUITest($Class* clazz) {
	return $of($alloc(TitledBorderLabelUITest));
}

bool TitledBorderLabelUITest::useLAF = false;

void TitledBorderLabelUITest::init$() {
}

void TitledBorderLabelUITest::main($StringArray* args) {
	$init(TitledBorderLabelUITest);
	TitledBorderLabelUITest::useLAF = "LAF"_s->equals($nc(args)->get(0));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TitledBorderLabelUITest$$Lambda$createAndShowGUI)));
}

void TitledBorderLabelUITest::createAndShowGUI() {
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($TitledBorderLabelUITest$TestLookAndFeel)));
		$var($JLabel, label, $new($JLabel, "Test Label"_s));
		label->setSize(TitledBorderLabelUITest::SIZE, TitledBorderLabelUITest::SIZE);
		$var($TitledBorder, border, $new($TitledBorder, "ABCDEF"_s));
		label->setBorder($$new($TitledBorder, static_cast<$Border*>(border)));
		$init(TitledBorderLabelUITest);
		if (TitledBorderLabelUITest::useLAF) {
			$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($NimbusLookAndFeel)));
		} else {
			$load($MetalLabelUI);
			$nc($($UIManager::getDefaults()))->put("LabelUI"_s, $($MetalLabelUI::class$->getName()));
		}
		$SwingUtilities::updateComponentTreeUI(label);
		paintToImage(label);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void TitledBorderLabelUITest::paintToImage($JComponent* comp) {
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, image, $new($BufferedImage, TitledBorderLabelUITest::SIZE, TitledBorderLabelUITest::SIZE, $BufferedImage::TYPE_INT_RGB));
	$var($Graphics2D, g, image->createGraphics());
	$nc(comp)->paint(g);
	$nc(g)->dispose();
}

TitledBorderLabelUITest::TitledBorderLabelUITest() {
}

$Class* TitledBorderLabelUITest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TitledBorderLabelUITest$$Lambda$createAndShowGUI::classInfo$.name)) {
			return TitledBorderLabelUITest$$Lambda$createAndShowGUI::load$(name, initialize);
		}
	}
	$loadClass(TitledBorderLabelUITest, name, initialize, &_TitledBorderLabelUITest_ClassInfo_, allocate$TitledBorderLabelUITest);
	return class$;
}

$Class* TitledBorderLabelUITest::class$ = nullptr;