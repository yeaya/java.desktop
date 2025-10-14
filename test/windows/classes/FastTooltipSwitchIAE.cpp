#include <FastTooltipSwitchIAE.h>

#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JToolTip.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JComponent = ::javax::swing::JComponent;
using $JToolTip = ::javax::swing::JToolTip;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class FastTooltipSwitchIAE$$Lambda$lambda$main$0 : public $Runnable {
	$class(FastTooltipSwitchIAE$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		FastTooltipSwitchIAE::lambda$main$0(laf);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FastTooltipSwitchIAE$$Lambda$lambda$main$0>());
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FastTooltipSwitchIAE$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(FastTooltipSwitchIAE$$Lambda$lambda$main$0, laf)},
	{}
};
$MethodInfo FastTooltipSwitchIAE$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(FastTooltipSwitchIAE$$Lambda$lambda$main$0::*)($UIManager$LookAndFeelInfo*)>(&FastTooltipSwitchIAE$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo FastTooltipSwitchIAE$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"FastTooltipSwitchIAE$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* FastTooltipSwitchIAE$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(FastTooltipSwitchIAE$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FastTooltipSwitchIAE$$Lambda$lambda$main$0::class$ = nullptr;

class FastTooltipSwitchIAE$$Lambda$doTest$1 : public $Runnable {
	$class(FastTooltipSwitchIAE$$Lambda$doTest$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		FastTooltipSwitchIAE::doTest();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FastTooltipSwitchIAE$$Lambda$doTest$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FastTooltipSwitchIAE$$Lambda$doTest$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FastTooltipSwitchIAE$$Lambda$doTest$1::*)()>(&FastTooltipSwitchIAE$$Lambda$doTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo FastTooltipSwitchIAE$$Lambda$doTest$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"FastTooltipSwitchIAE$$Lambda$doTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* FastTooltipSwitchIAE$$Lambda$doTest$1::load$($String* name, bool initialize) {
	$loadClass(FastTooltipSwitchIAE$$Lambda$doTest$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FastTooltipSwitchIAE$$Lambda$doTest$1::class$ = nullptr;

$FieldInfo _FastTooltipSwitchIAE_FieldInfo_[] = {
	{"oneByOneSize", "Ljava/awt/Dimension;", nullptr, $STATIC, $staticField(FastTooltipSwitchIAE, oneByOneSize)},
	{}
};

$MethodInfo _FastTooltipSwitchIAE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FastTooltipSwitchIAE::*)()>(&FastTooltipSwitchIAE::init$))},
	{"doTest", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&FastTooltipSwitchIAE::doTest))},
	{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&FastTooltipSwitchIAE::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&FastTooltipSwitchIAE::main))},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&FastTooltipSwitchIAE::setLookAndFeel))},
	{}
};

$ClassInfo _FastTooltipSwitchIAE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"FastTooltipSwitchIAE",
	"java.lang.Object",
	nullptr,
	_FastTooltipSwitchIAE_FieldInfo_,
	_FastTooltipSwitchIAE_MethodInfo_
};

$Object* allocate$FastTooltipSwitchIAE($Class* clazz) {
	return $of($alloc(FastTooltipSwitchIAE));
}

$Dimension* FastTooltipSwitchIAE::oneByOneSize = nullptr;

void FastTooltipSwitchIAE::init$() {
}

void FastTooltipSwitchIAE::main($StringArray* args) {
	$init(FastTooltipSwitchIAE);
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				try {
					$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(FastTooltipSwitchIAE$$Lambda$lambda$main$0, laf)));
					$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(FastTooltipSwitchIAE$$Lambda$doTest$1)));
					$init($System);
					$nc($System::out)->println($$str({"Test passed for LookAndFeel "_s, $($nc(laf)->getClassName())}));
				} catch ($Exception&) {
					$var($Exception, e, $catch());
					$throwNew($RuntimeException, $$str({"Test failed for "_s, $($nc(laf)->getClassName())}), e);
				}
			}
		}
	}
}

void FastTooltipSwitchIAE::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$init(FastTooltipSwitchIAE);
	try {
		$init($System);
		$nc($System::out)->println($$str({"LookAndFeel: "_s, $($nc(laf)->getClassName())}));
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
	} catch ($UnsupportedLookAndFeelException&) {
		$var($UnsupportedLookAndFeelException, ignored, $catch());
		$init($System);
		$nc($System::err)->println($$str({"Unsupported L&F: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InstantiationException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void FastTooltipSwitchIAE::doTest() {
	$init(FastTooltipSwitchIAE);
	$var($JToolTip, toolTip, $new($JToolTip));
	toolTip->setTipText("<html><h1>Hello world</h1></html>"_s);
	toolTip->setMinimumSize(FastTooltipSwitchIAE::oneByOneSize);
	toolTip->setMaximumSize(FastTooltipSwitchIAE::oneByOneSize);
	toolTip->setPreferredSize(FastTooltipSwitchIAE::oneByOneSize);
	toolTip->setBounds(100, 100, 1, 1);
	$var($BufferedImage, img, $new($BufferedImage, 100, 100, $BufferedImage::TYPE_INT_ARGB));
	$var($Graphics2D, g2d, img->createGraphics());
	toolTip->paint(g2d);
	$nc(g2d)->dispose();
}

void FastTooltipSwitchIAE::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	$init(FastTooltipSwitchIAE);
	setLookAndFeel(laf);
}

void clinit$FastTooltipSwitchIAE($Class* class$) {
	$assignStatic(FastTooltipSwitchIAE::oneByOneSize, $new($Dimension, 1, 1));
}

FastTooltipSwitchIAE::FastTooltipSwitchIAE() {
}

$Class* FastTooltipSwitchIAE::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(FastTooltipSwitchIAE$$Lambda$lambda$main$0::classInfo$.name)) {
			return FastTooltipSwitchIAE$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(FastTooltipSwitchIAE$$Lambda$doTest$1::classInfo$.name)) {
			return FastTooltipSwitchIAE$$Lambda$doTest$1::load$(name, initialize);
		}
	}
	$loadClass(FastTooltipSwitchIAE, name, initialize, &_FastTooltipSwitchIAE_ClassInfo_, clinit$FastTooltipSwitchIAE, allocate$FastTooltipSwitchIAE);
	return class$;
}

$Class* FastTooltipSwitchIAE::class$ = nullptr;