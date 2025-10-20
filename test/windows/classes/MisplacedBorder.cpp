#include <MisplacedBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Window.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/WritableRenderedImage.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
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
#include <javax/imageio/ImageIO.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

#undef H
#undef RED
#undef W

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Window = ::java::awt::Window;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $WritableRenderedImage = ::java::awt::image::WritableRenderedImage;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ImageIO = ::javax::imageio::ImageIO;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $Border = ::javax::swing::border::Border;

class MisplacedBorder$$Lambda$lambda$main$0 : public $Runnable {
	$class(MisplacedBorder$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		MisplacedBorder::lambda$main$0(laf);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MisplacedBorder$$Lambda$lambda$main$0>());
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MisplacedBorder$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(MisplacedBorder$$Lambda$lambda$main$0, laf)},
	{}
};
$MethodInfo MisplacedBorder$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(MisplacedBorder$$Lambda$lambda$main$0::*)($UIManager$LookAndFeelInfo*)>(&MisplacedBorder$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo MisplacedBorder$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"MisplacedBorder$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* MisplacedBorder$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(MisplacedBorder$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MisplacedBorder$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _MisplacedBorder_FieldInfo_[] = {
	{"W", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MisplacedBorder, W)},
	{"H", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MisplacedBorder, H)},
	{}
};

$MethodInfo _MisplacedBorder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MisplacedBorder::*)()>(&MisplacedBorder::init$))},
	{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&MisplacedBorder::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MisplacedBorder::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&MisplacedBorder::setLookAndFeel))},
	{"step1", "(Ljavax/swing/JMenuBar;)Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE, $method(static_cast<$BufferedImage*(MisplacedBorder::*)($JMenuBar*)>(&MisplacedBorder::step1))},
	{"step2", "(Ljavax/swing/JMenuBar;)Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE, $method(static_cast<$BufferedImage*(MisplacedBorder::*)($JMenuBar*)>(&MisplacedBorder::step2))},
	{}
};

$ClassInfo _MisplacedBorder_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"MisplacedBorder",
	"java.lang.Object",
	"java.lang.Runnable",
	_MisplacedBorder_FieldInfo_,
	_MisplacedBorder_MethodInfo_
};

$Object* allocate$MisplacedBorder($Class* clazz) {
	return $of($alloc(MisplacedBorder));
}

void MisplacedBorder::init$() {
}

void MisplacedBorder::main($StringArray* args) {
	$init(MisplacedBorder);
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(MisplacedBorder$$Lambda$lambda$main$0, laf)));
				$SwingUtilities::invokeAndWait($$new(MisplacedBorder));
			}
		}
	}
	$init($System);
	$nc($System::out)->println("Test passed"_s);
}

void MisplacedBorder::run() {
	$useLocalCurrentObjectStackCache();
	$var($JMenuBar, menubar, $new($JMenuBar));
	menubar->add($$new($JMenu, ""_s));
	menubar->add($$new($JMenu, ""_s));
	$var($JFrame, frame, $new($JFrame));
	frame->setUndecorated(true);
	frame->setJMenuBar(menubar);
	frame->setSize(MisplacedBorder::W / 3, MisplacedBorder::H / 3);
	frame->setLocationRelativeTo(nullptr);
	frame->setVisible(true);
	$var($BufferedImage, bi1, step1(menubar));
	$var($BufferedImage, bi2, step2(menubar));
	frame->dispose();
	for (int32_t x = 0; x < MisplacedBorder::W; ++x) {
		for (int32_t y = 0; y < MisplacedBorder::H; ++y) {
			int32_t var$0 = $nc(bi1)->getRGB(x, y);
			if (var$0 != $nc(bi2)->getRGB(x, y)) {
				try {
					$ImageIO::write(static_cast<$RenderedImage*>(bi1), "png"_s, $$new($File, "image1.png"_s));
					$ImageIO::write(static_cast<$RenderedImage*>(bi2), "png"_s, $$new($File, "image2.png"_s));
				} catch ($IOException&) {
					$var($IOException, e, $catch());
					e->printStackTrace();
				}
				$throwNew($RuntimeException, "Failed: wrong color"_s);
			}
		}
	}
}

$BufferedImage* MisplacedBorder::step1($JMenuBar* menubar) {
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, bi1, $new($BufferedImage, MisplacedBorder::W, MisplacedBorder::H, 3));
	$var($Graphics2D, g2d, bi1->createGraphics());
	$nc(g2d)->scale((double)2, (double)2);
	$init($Color);
	g2d->setColor($Color::RED);
	g2d->fillRect(0, 0, MisplacedBorder::W, MisplacedBorder::H);
	$nc(menubar)->paintAll(g2d);
	g2d->dispose();
	return bi1;
}

$BufferedImage* MisplacedBorder::step2($JMenuBar* menubar) {
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, bi2, $new($BufferedImage, MisplacedBorder::W, MisplacedBorder::H, 3));
	$var($Graphics2D, g2d2, bi2->createGraphics());
	$nc(g2d2)->scale((double)2, (double)2);
	$init($Color);
	g2d2->setColor($Color::RED);
	g2d2->fillRect(0, 0, MisplacedBorder::W, MisplacedBorder::H);
	$nc(menubar)->paintAll(g2d2);
	$var($Component, var$0, static_cast<$Component*>(menubar));
	$var($Graphics, var$1, static_cast<$Graphics*>(g2d2));
	int32_t var$2 = menubar->getX();
	int32_t var$3 = menubar->getX();
	int32_t var$4 = menubar->getWidth();
	$nc($(menubar->getBorder()))->paintBorder(var$0, var$1, var$2, var$3, var$4, menubar->getHeight());
	g2d2->dispose();
	return bi2;
}

void MisplacedBorder::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$init(MisplacedBorder);
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
		$init($System);
		$nc($System::out)->println($$str({"LookAndFeel: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InstantiationException&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($UnsupportedLookAndFeelException&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void MisplacedBorder::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	$init(MisplacedBorder);
	setLookAndFeel(laf);
}

MisplacedBorder::MisplacedBorder() {
}

$Class* MisplacedBorder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MisplacedBorder$$Lambda$lambda$main$0::classInfo$.name)) {
			return MisplacedBorder$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(MisplacedBorder, name, initialize, &_MisplacedBorder_ClassInfo_, allocate$MisplacedBorder);
	return class$;
}

$Class* MisplacedBorder::class$ = nullptr;