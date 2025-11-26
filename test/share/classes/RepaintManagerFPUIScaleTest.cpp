#include <RepaintManagerFPUIScaleTest.h>

#include <RepaintManagerFPUIScaleTest$1.h>
#include <RepaintManagerFPUIScaleTest$2.h>
#include <RepaintManagerFPUIScaleTest$TestListCellRenderer.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Image.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/AbstractMultiResolutionImage.h>
#include <java/awt/image/BaseMultiResolutionImage.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/Serializable.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JList.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef BLUE
#undef COLORS
#undef GRAY
#undef GREEN
#undef HORIZONTAL
#undef INSTRUCTIONS
#undef MINUTES
#undef N
#undef ORANGE
#undef RED
#undef TYPE_INT_RGB
#undef WHITE

using $RepaintManagerFPUIScaleTest$1 = ::RepaintManagerFPUIScaleTest$1;
using $RepaintManagerFPUIScaleTest$2 = ::RepaintManagerFPUIScaleTest$2;
using $RepaintManagerFPUIScaleTest$TestListCellRenderer = ::RepaintManagerFPUIScaleTest$TestListCellRenderer;
using $ColorArray = $Array<::java::awt::Color>;
using $ImageArray = $Array<::java::awt::Image>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Image = ::java::awt::Image;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $AbstractMultiResolutionImage = ::java::awt::image::AbstractMultiResolutionImage;
using $BaseMultiResolutionImage = ::java::awt::image::BaseMultiResolutionImage;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $AbstractButton = ::javax::swing::AbstractButton;
using $DefaultListCellRenderer = ::javax::swing::DefaultListCellRenderer;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JList = ::javax::swing::JList;
using $JPanel = ::javax::swing::JPanel;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class RepaintManagerFPUIScaleTest$$Lambda$createUI : public $Runnable {
	$class(RepaintManagerFPUIScaleTest$$Lambda$createUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		RepaintManagerFPUIScaleTest::createUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RepaintManagerFPUIScaleTest$$Lambda$createUI>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo RepaintManagerFPUIScaleTest$$Lambda$createUI::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RepaintManagerFPUIScaleTest$$Lambda$createUI::*)()>(&RepaintManagerFPUIScaleTest$$Lambda$createUI::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo RepaintManagerFPUIScaleTest$$Lambda$createUI::classInfo$ = {
	$PUBLIC | $FINAL,
	"RepaintManagerFPUIScaleTest$$Lambda$createUI",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* RepaintManagerFPUIScaleTest$$Lambda$createUI::load$($String* name, bool initialize) {
	$loadClass(RepaintManagerFPUIScaleTest$$Lambda$createUI, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RepaintManagerFPUIScaleTest$$Lambda$createUI::class$ = nullptr;

class RepaintManagerFPUIScaleTest$$Lambda$lambda$createUI$0$1 : public $ActionListener {
	$class(RepaintManagerFPUIScaleTest$$Lambda$lambda$createUI$0$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JFrame* mainFrame) {
		$set(this, mainFrame, mainFrame);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		RepaintManagerFPUIScaleTest::lambda$createUI$0(mainFrame, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RepaintManagerFPUIScaleTest$$Lambda$lambda$createUI$0$1>());
	}
	$JFrame* mainFrame = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RepaintManagerFPUIScaleTest$$Lambda$lambda$createUI$0$1::fieldInfos[2] = {
	{"mainFrame", "Ljavax/swing/JFrame;", nullptr, $PUBLIC, $field(RepaintManagerFPUIScaleTest$$Lambda$lambda$createUI$0$1, mainFrame)},
	{}
};
$MethodInfo RepaintManagerFPUIScaleTest$$Lambda$lambda$createUI$0$1::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(RepaintManagerFPUIScaleTest$$Lambda$lambda$createUI$0$1::*)($JFrame*)>(&RepaintManagerFPUIScaleTest$$Lambda$lambda$createUI$0$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo RepaintManagerFPUIScaleTest$$Lambda$lambda$createUI$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"RepaintManagerFPUIScaleTest$$Lambda$lambda$createUI$0$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* RepaintManagerFPUIScaleTest$$Lambda$lambda$createUI$0$1::load$($String* name, bool initialize) {
	$loadClass(RepaintManagerFPUIScaleTest$$Lambda$lambda$createUI$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RepaintManagerFPUIScaleTest$$Lambda$lambda$createUI$0$1::class$ = nullptr;

$FieldInfo _RepaintManagerFPUIScaleTest_FieldInfo_[] = {
	{"testResult", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(RepaintManagerFPUIScaleTest, testResult)},
	{"countDownLatch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(RepaintManagerFPUIScaleTest, countDownLatch)},
	{"INSTRUCTIONS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RepaintManagerFPUIScaleTest, INSTRUCTIONS)},
	{"COLORS", "[Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC, $staticField(RepaintManagerFPUIScaleTest, COLORS)},
	{}
};

$MethodInfo _RepaintManagerFPUIScaleTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RepaintManagerFPUIScaleTest::*)()>(&RepaintManagerFPUIScaleTest::init$))},
	{"createComponent", "()Ljavax/swing/JComponent;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JComponent*(*)()>(&RepaintManagerFPUIScaleTest::createComponent))},
	{"createTestImage", "(III)Ljava/awt/Image;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Image*(*)(int32_t,int32_t,int32_t)>(&RepaintManagerFPUIScaleTest::createTestImage))},
	{"createTestImage", "(IIDDLjava/awt/Color;)Ljava/awt/Image;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Image*(*)(int32_t,int32_t,double,double,$Color*)>(&RepaintManagerFPUIScaleTest::createTestImage))},
	{"createUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&RepaintManagerFPUIScaleTest::createUI))},
	{"lambda$createUI$0", "(Ljavax/swing/JFrame;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JFrame*,$ActionEvent*)>(&RepaintManagerFPUIScaleTest::lambda$createUI$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&RepaintManagerFPUIScaleTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _RepaintManagerFPUIScaleTest_InnerClassesInfo_[] = {
	{"RepaintManagerFPUIScaleTest$TestListCellRenderer", "RepaintManagerFPUIScaleTest", "TestListCellRenderer", $STATIC},
	{"RepaintManagerFPUIScaleTest$2", nullptr, nullptr, 0},
	{"RepaintManagerFPUIScaleTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RepaintManagerFPUIScaleTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"RepaintManagerFPUIScaleTest",
	"java.lang.Object",
	nullptr,
	_RepaintManagerFPUIScaleTest_FieldInfo_,
	_RepaintManagerFPUIScaleTest_MethodInfo_,
	nullptr,
	nullptr,
	_RepaintManagerFPUIScaleTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"RepaintManagerFPUIScaleTest$TestListCellRenderer,RepaintManagerFPUIScaleTest$2,RepaintManagerFPUIScaleTest$1"
};

$Object* allocate$RepaintManagerFPUIScaleTest($Class* clazz) {
	return $of($alloc(RepaintManagerFPUIScaleTest));
}

$volatile(bool) RepaintManagerFPUIScaleTest::testResult = false;
$volatile($CountDownLatch*) RepaintManagerFPUIScaleTest::countDownLatch = nullptr;
$String* RepaintManagerFPUIScaleTest::INSTRUCTIONS = nullptr;
$ColorArray* RepaintManagerFPUIScaleTest::COLORS = nullptr;

void RepaintManagerFPUIScaleTest::init$() {
}

void RepaintManagerFPUIScaleTest::main($StringArray* args) {
	$init(RepaintManagerFPUIScaleTest);
	$assignStatic(RepaintManagerFPUIScaleTest::countDownLatch, $new($CountDownLatch, 1));
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(RepaintManagerFPUIScaleTest$$Lambda$createUI)));
	$init($TimeUnit);
	$nc(RepaintManagerFPUIScaleTest::countDownLatch)->await(15, $TimeUnit::MINUTES);
	if (!RepaintManagerFPUIScaleTest::testResult) {
		$throwNew($RuntimeException, "Test fails!"_s);
	}
}

void RepaintManagerFPUIScaleTest::createUI() {
	$init(RepaintManagerFPUIScaleTest);
	$useLocalCurrentObjectStackCache();
	$var($JFrame, mainFrame, $new($JFrame, "Motif L&F icons test"_s));
	$var($GridBagLayout, layout, $new($GridBagLayout));
	$var($JPanel, mainControlPanel, $new($JPanel, static_cast<$LayoutManager*>(layout)));
	$var($JPanel, resultButtonPanel, $new($JPanel, static_cast<$LayoutManager*>(layout)));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	$var($JComponent, testPanel, createComponent());
	gbc->gridx = 0;
	gbc->gridy = 0;
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	mainControlPanel->add(static_cast<$Component*>(testPanel), $of(gbc));
	$var($JTextArea, instructionTextArea, $new($JTextArea));
	instructionTextArea->setText(RepaintManagerFPUIScaleTest::INSTRUCTIONS);
	instructionTextArea->setEditable(false);
	$init($Color);
	instructionTextArea->setBackground($Color::white);
	gbc->gridx = 0;
	gbc->gridy = 1;
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	mainControlPanel->add(static_cast<$Component*>(instructionTextArea), $of(gbc));
	$var($JButton, passButton, $new($JButton, "Pass"_s));
	passButton->setActionCommand("Pass"_s);
	passButton->addActionListener(static_cast<$ActionListener*>($$new(RepaintManagerFPUIScaleTest$$Lambda$lambda$createUI$0$1, mainFrame)));
	$var($JButton, failButton, $new($JButton, "Fail"_s));
	failButton->setActionCommand("Fail"_s);
	failButton->addActionListener($$new($RepaintManagerFPUIScaleTest$1, mainFrame));
	gbc->gridx = 0;
	gbc->gridy = 0;
	resultButtonPanel->add(static_cast<$Component*>(passButton), $of(gbc));
	gbc->gridx = 1;
	gbc->gridy = 0;
	resultButtonPanel->add(static_cast<$Component*>(failButton), $of(gbc));
	gbc->gridx = 0;
	gbc->gridy = 2;
	mainControlPanel->add(static_cast<$Component*>(resultButtonPanel), $of(gbc));
	mainFrame->add(static_cast<$Component*>(mainControlPanel));
	mainFrame->pack();
	mainFrame->addWindowListener($$new($RepaintManagerFPUIScaleTest$2, mainFrame));
	mainFrame->setVisible(true);
}

$JComponent* RepaintManagerFPUIScaleTest::createComponent() {
	$init(RepaintManagerFPUIScaleTest);
	$useLocalCurrentObjectStackCache();
	int32_t N = 100;
	$var($StringArray, data, $new($StringArray, N));
	for (int32_t i = 0; i < N; ++i) {
		data->set(i, $$str({"Floating point test List Item: "_s, $$str(i)}));
	}
	$var($JList, list, $new($JList, data));
	list->setCellRenderer($$new($RepaintManagerFPUIScaleTest$TestListCellRenderer));
	$var($JScrollPane, scrollPane, $new($JScrollPane, list));
	return scrollPane;
}

$Image* RepaintManagerFPUIScaleTest::createTestImage(int32_t width, int32_t height, int32_t colorindex) {
	$init(RepaintManagerFPUIScaleTest);
	$useLocalCurrentObjectStackCache();
	$var($Color, color, $nc(RepaintManagerFPUIScaleTest::COLORS)->get($mod(colorindex, $nc(RepaintManagerFPUIScaleTest::COLORS)->length)));
	$var($AffineTransform, tx, $nc($($nc($($nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getDefaultScreenDevice()))->getDefaultConfiguration()))->getDefaultTransform());
	$var($Image, baseImage, createTestImage(width, height, (double)1, (double)1, color));
	int32_t var$0 = width;
	int32_t var$1 = height;
	double var$2 = $nc(tx)->getScaleX();
	$var($Image, rvImage, createTestImage(var$0, var$1, var$2, tx->getScaleY(), color));
	return $new($BaseMultiResolutionImage, $$new($ImageArray, {
		baseImage,
		rvImage
	}));
}

$Image* RepaintManagerFPUIScaleTest::createTestImage(int32_t w, int32_t h, double scaleX, double scaleY, $Color* color) {
	$init(RepaintManagerFPUIScaleTest);
	$useLocalCurrentObjectStackCache();
	int32_t width = $cast(int32_t, $Math::ceil(scaleX * w));
	int32_t height = $cast(int32_t, $Math::ceil(scaleY * h));
	$var($BufferedImage, img, $new($BufferedImage, width, height, $BufferedImage::TYPE_INT_RGB));
	$var($Graphics2D, g, img->createGraphics());
	$init($Color);
	$nc(g)->setColor($Color::WHITE);
	g->fillRect(0, 0, width, height);
	g->scale(scaleX, scaleY);
	g->setColor(color);
	int32_t d = 1;
	int32_t d2 = 2 * d;
	g->drawLine(d, h / 2, w - d2, h / 2);
	g->drawLine(w / 2, d, w / 2, h - d2);
	g->drawRect(d, d, w - d2, h - d2);
	g->dispose();
	return img;
}

void RepaintManagerFPUIScaleTest::lambda$createUI$0($JFrame* mainFrame, $ActionEvent* e) {
	$init(RepaintManagerFPUIScaleTest);
	RepaintManagerFPUIScaleTest::testResult = true;
	$nc(mainFrame)->dispose();
	$nc(RepaintManagerFPUIScaleTest::countDownLatch)->countDown();
}

void clinit$RepaintManagerFPUIScaleTest($Class* class$) {
	$assignStatic(RepaintManagerFPUIScaleTest::INSTRUCTIONS, "INSTRUCTIONS:\nCheck JScrollPane correctly repaints the view when UI scale has floating point value:\n\n1. Scroll down the JScrollPane\n2. Select some values\nIf the scrolled selected value is painted without artifacts,press PASS, else press FAIL."_s);
	RepaintManagerFPUIScaleTest::testResult = false;
	$init($Color);
	$assignStatic(RepaintManagerFPUIScaleTest::COLORS, $new($ColorArray, {
		$Color::RED,
		$Color::ORANGE,
		$Color::GREEN,
		$Color::BLUE,
		$Color::GRAY
	}));
}

RepaintManagerFPUIScaleTest::RepaintManagerFPUIScaleTest() {
}

$Class* RepaintManagerFPUIScaleTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(RepaintManagerFPUIScaleTest$$Lambda$createUI::classInfo$.name)) {
			return RepaintManagerFPUIScaleTest$$Lambda$createUI::load$(name, initialize);
		}
		if (name->equals(RepaintManagerFPUIScaleTest$$Lambda$lambda$createUI$0$1::classInfo$.name)) {
			return RepaintManagerFPUIScaleTest$$Lambda$lambda$createUI$0$1::load$(name, initialize);
		}
	}
	$loadClass(RepaintManagerFPUIScaleTest, name, initialize, &_RepaintManagerFPUIScaleTest_ClassInfo_, clinit$RepaintManagerFPUIScaleTest, allocate$RepaintManagerFPUIScaleTest);
	return class$;
}

$Class* RepaintManagerFPUIScaleTest::class$ = nullptr;