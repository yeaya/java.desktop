#include <bug6302464.h>

#include <bug6302464$CustomLookAndFeel.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Toolkit.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/HashSet.h>
#include <java/util/Map.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <jcpp.h>

#undef ANTIALIASING_HINTS
#undef EXCLUDED_LAFS
#undef KEY_TEXT_ANTIALIASING
#undef KEY_TEXT_LCD_CONTRAST
#undef TYPE_INT_RGB
#undef VALUE_TEXT_ANTIALIAS_GASP
#undef VALUE_TEXT_ANTIALIAS_LCD_HBGR
#undef VALUE_TEXT_ANTIALIAS_LCD_HRGB
#undef VALUE_TEXT_ANTIALIAS_LCD_VBGR
#undef VALUE_TEXT_ANTIALIAS_LCD_VRGB
#undef VALUE_TEXT_ANTIALIAS_OFF
#undef WHITE

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug6302464$CustomLookAndFeel = ::bug6302464$CustomLookAndFeel;
using $Color = ::java::awt::Color;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $RenderingHints = ::java::awt::RenderingHints;
using $Toolkit = ::java::awt::Toolkit;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $HashSet = ::java::util::HashSet;
using $Map = ::java::util::Map;
using $JLabel = ::javax::swing::JLabel;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;

class bug6302464$$Lambda$testAntialiasingProperties : public $Runnable {
	$class(bug6302464$$Lambda$testAntialiasingProperties, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug6302464::testAntialiasingProperties();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6302464$$Lambda$testAntialiasingProperties>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug6302464$$Lambda$testAntialiasingProperties::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6302464$$Lambda$testAntialiasingProperties::*)()>(&bug6302464$$Lambda$testAntialiasingProperties::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6302464$$Lambda$testAntialiasingProperties::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6302464$$Lambda$testAntialiasingProperties",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug6302464$$Lambda$testAntialiasingProperties::load$($String* name, bool initialize) {
	$loadClass(bug6302464$$Lambda$testAntialiasingProperties, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6302464$$Lambda$testAntialiasingProperties::class$ = nullptr;

$FieldInfo _bug6302464_FieldInfo_[] = {
	{"ANTIALIASING_HINTS", "[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug6302464, ANTIALIASING_HINTS)},
	{"EXCLUDED_LAFS", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug6302464, EXCLUDED_LAFS)},
	{}
};

$MethodInfo _bug6302464_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6302464::*)()>(&bug6302464::init$))},
	{"getAntialiasedColors", "(Ljava/lang/Object;I)Ljava/util/HashSet;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$HashSet*(*)(Object$*,int32_t)>(&bug6302464::getAntialiasedColors))},
	{"isExcludedLAF", "(Ljavax/swing/UIManager$LookAndFeelInfo;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($UIManager$LookAndFeelInfo*)>(&bug6302464::isExcludedLAF))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6302464::main)), "java.lang.Exception"},
	{"setLookAndFeel", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&bug6302464::setLookAndFeel))},
	{"setMetalLookAndFeel", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6302464::setMetalLookAndFeel))},
	{"testAntialiasingHints", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6302464::testAntialiasingHints))},
	{"testAntialiasingProperties", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6302464::testAntialiasingProperties))},
	{"testCustomLAF", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6302464::testCustomLAF))},
	{"testCustomLAF", "(Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(bool)>(&bug6302464::testCustomLAF)), "java.lang.Exception"},
	{"testFontRenderingContext", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6302464::testFontRenderingContext))},
	{"testFontRenderingContext", "(Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(Object$*)>(&bug6302464::testFontRenderingContext))},
	{"testLAFAAHints", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6302464::testLAFAAHints))},
	{"testLAFAAHints", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&bug6302464::testLAFAAHints))},
	{}
};

$InnerClassInfo _bug6302464_InnerClassesInfo_[] = {
	{"bug6302464$CustomLookAndFeel", "bug6302464", "CustomLookAndFeel", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug6302464_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6302464",
	"java.lang.Object",
	nullptr,
	_bug6302464_FieldInfo_,
	_bug6302464_MethodInfo_,
	nullptr,
	nullptr,
	_bug6302464_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6302464$CustomLookAndFeel"
};

$Object* allocate$bug6302464($Class* clazz) {
	return $of($alloc(bug6302464));
}

$ObjectArray* bug6302464::ANTIALIASING_HINTS = nullptr;
$StringArray* bug6302464::EXCLUDED_LAFS = nullptr;

void bug6302464::init$() {
}

void bug6302464::main($StringArray* args) {
	$init(bug6302464);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6302464$$Lambda$testAntialiasingProperties)));
}

void bug6302464::testAntialiasingProperties() {
	$init(bug6302464);
	testCustomLAF();
	testFontRenderingContext();
	testAntialiasingHints();
	testLAFAAHints();
}

void bug6302464::testCustomLAF() {
	$init(bug6302464);
	try {
		testCustomLAF(false);
		testCustomLAF(true);
	} catch ($Exception& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void bug6302464::testCustomLAF(bool useAAHints) {
	$init(bug6302464);
	$useLocalCurrentObjectStackCache();
	$var($bug6302464$CustomLookAndFeel, customLAF, $new($bug6302464$CustomLookAndFeel, useAAHints));
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>(customLAF));
	$var($JLabel, label, $new($JLabel));
	$init($RenderingHints);
	$var($Object, aaHint, label->getClientProperty($RenderingHints::KEY_TEXT_ANTIALIASING));
	$var($Object, lcdContrastHint, label->getClientProperty($RenderingHints::KEY_TEXT_LCD_CONTRAST));
	if (!$equals(aaHint, customLAF->getAAHint())) {
		$throwNew($RuntimeException, "AA hint from custom L&F is not set"_s);
	}
	if (!$equals(lcdContrastHint, customLAF->getLCDContarstHint())) {
		$throwNew($RuntimeException, "AA hint from custom L&F is not set"_s);
	}
}

void bug6302464::testFontRenderingContext() {
	$init(bug6302464);
	$useLocalCurrentObjectStackCache();
	{
		$var($ObjectArray, arr$, bug6302464::ANTIALIASING_HINTS);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Object0, aaHint, arr$->get(i$));
			{
				testFontRenderingContext(aaHint);
			}
		}
	}
}

void bug6302464::testFontRenderingContext(Object$* aaHint) {
	$init(bug6302464);
	$useLocalCurrentObjectStackCache();
	$var($JLabel, label, $new($JLabel, "Test"_s));
	$init($RenderingHints);
	label->putClientProperty($RenderingHints::KEY_TEXT_ANTIALIASING, aaHint);
	$var($FontRenderContext, frc, $nc($(label->getFontMetrics($(label->getFont()))))->getFontRenderContext());
	if (!$nc($of(aaHint))->equals($($nc(frc)->getAntiAliasingHint()))) {
		$throwNew($RuntimeException, "Wrong aa hint in FontRenderContext"_s);
	}
}

void bug6302464::testAntialiasingHints() {
	$init(bug6302464);
	$useLocalCurrentObjectStackCache();
	setMetalLookAndFeel();
	bool isMacOSX14 = false;
	bool isMacOSXBigSur = false;
	if ($nc($($System::getProperty("os.name"_s)))->contains("OS X"_s)) {
		$var($String, version, $System::getProperty("os.version"_s, ""_s));
		if ($nc(version)->startsWith("10."_s)) {
			$assign(version, version->substring(3));
			int32_t periodIndex = version->indexOf((int32_t)u'.');
			if (periodIndex != -1) {
				$assign(version, version->substring(0, periodIndex));
			}
			try {
				int32_t v = $Integer::parseInt(version);
				isMacOSX14 = (v >= 14);
			} catch ($NumberFormatException& e) {
			}
		} else if (version->startsWith("11."_s)) {
			isMacOSXBigSur = true;
		}
	}
	if (!isMacOSX14 && !isMacOSXBigSur) {
		$init($RenderingHints);
		$var($HashSet, colorsAAOff, getAntialiasedColors($RenderingHints::VALUE_TEXT_ANTIALIAS_OFF, 100));
		if ($nc(colorsAAOff)->size() > 2) {
			$throwNew($RuntimeException, "Wrong number of antialiased colors."_s);
		}
	}
	$init($RenderingHints);
	$var($HashSet, colorsAAOnLCD100, getAntialiasedColors($RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_HRGB, 100));
	if ($nc(colorsAAOnLCD100)->size() <= 2) {
		$throwNew($RuntimeException, "Wrong number of antialiased ANTIALIAS_LCD_HRGB_100 colors."_s);
	}
	$var($HashSet, colorsAAOnLCD250, getAntialiasedColors($RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_HRGB, 250));
	if ($nc(colorsAAOnLCD250)->size() <= 2) {
		$throwNew($RuntimeException, "Wrong number of antialiased ANTIALIAS_LCD_HRGB_250 colors."_s);
	}
	if ($nc(colorsAAOnLCD100)->equals(colorsAAOnLCD250)) {
		$throwNew($RuntimeException, "LCD contrast is not used."_s);
	}
}

$HashSet* bug6302464::getAntialiasedColors(Object$* aaHint, int32_t lcdContrast) {
	$init(bug6302464);
	$useLocalCurrentObjectStackCache();
	$var($JLabel, label, $new($JLabel, "ABCD"_s));
	label->setSize($(label->getPreferredSize()));
	$init($RenderingHints);
	label->putClientProperty($RenderingHints::KEY_TEXT_ANTIALIASING, aaHint);
	label->putClientProperty($RenderingHints::KEY_TEXT_LCD_CONTRAST, $($Integer::valueOf(lcdContrast)));
	int32_t w = label->getWidth();
	int32_t h = label->getHeight();
	$var($BufferedImage, buffImage, $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_RGB));
	$var($Graphics2D, g, buffImage->createGraphics());
	$init($Color);
	$nc(g)->setColor($Color::WHITE);
	g->fillRect(0, 0, w, h);
	label->paint(g);
	g->dispose();
	$var($HashSet, colors, $new($HashSet));
	for (int32_t i = 0; i < w; ++i) {
		for (int32_t j = 0; j < h; ++j) {
			$var($Color, color, $new($Color, buffImage->getRGB(i, j)));
			colors->add(color);
		}
	}
	return colors;
}

void bug6302464::setMetalLookAndFeel() {
	$init(bug6302464);
	setLookAndFeel("javax.swing.plaf.metal.MetalLookAndFeel"_s);
}

void bug6302464::setLookAndFeel($String* lafClass) {
	$init(bug6302464);
	try {
		$UIManager::setLookAndFeel(lafClass);
	} catch ($UnsupportedLookAndFeelException& ignored) {
	} catch ($Exception& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void bug6302464::testLAFAAHints() {
	$init(bug6302464);
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lafInfo, arr$->get(i$));
			{
				testLAFAAHints(lafInfo);
			}
		}
	}
}

bool bug6302464::isExcludedLAF($UIManager$LookAndFeelInfo* lafInfo) {
	$init(bug6302464);
	$useLocalCurrentObjectStackCache();
	{
		$var($StringArray, arr$, bug6302464::EXCLUDED_LAFS);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, excludedLaf, arr$->get(i$));
			{
				if ($nc($($nc(lafInfo)->getName()))->equals(excludedLaf)) {
					return true;
				}
			}
		}
	}
	return false;
}

void bug6302464::testLAFAAHints($UIManager$LookAndFeelInfo* lafInfo) {
	$init(bug6302464);
	$useLocalCurrentObjectStackCache();
	setLookAndFeel($($nc(lafInfo)->getClassName()));
	$init($RenderingHints);
	$var($Object, uiAAHint, $nc($($UIManager::getDefaults()))->get($RenderingHints::KEY_TEXT_ANTIALIASING));
	$var($Object, uiLCDContrastHint, $nc($($UIManager::getDefaults()))->get($RenderingHints::KEY_TEXT_LCD_CONTRAST));
	$var($Object, aaHints, $nc($($Toolkit::getDefaultToolkit()))->getDesktopProperty("awt.font.desktophints"_s));
	if (isExcludedLAF(lafInfo)) {
		if (uiAAHint != nullptr || uiLCDContrastHint != nullptr) {
			$throwNew($RuntimeException, "Rendering hints set for excluded L&F"_s);
		}
	} else if ($instanceOf($Map, aaHints)) {
		$var($Map, map, $cast($Map, aaHints));
		if (!$equals(uiAAHint, $nc(map)->get($RenderingHints::KEY_TEXT_ANTIALIASING))) {
			$throwNew($RuntimeException, "UI defaults contains wrong aa hint"_s);
		}
		if (!$equals(uiLCDContrastHint, $nc(map)->get($RenderingHints::KEY_TEXT_LCD_CONTRAST))) {
			$throwNew($RuntimeException, "UI defaults contains wronglcd contrast hint"_s);
		}
	} else if (uiAAHint != nullptr || uiLCDContrastHint != nullptr) {
		$throwNew($RuntimeException, "Rendering hints set for empty desktopproperties"_s);
	}
}

void clinit$bug6302464($Class* class$) {
	$init($RenderingHints);
	$assignStatic(bug6302464::ANTIALIASING_HINTS, $new($ObjectArray, {
		$RenderingHints::VALUE_TEXT_ANTIALIAS_GASP,
		$RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_HRGB,
		$RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_HBGR,
		$RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_VRGB,
		$RenderingHints::VALUE_TEXT_ANTIALIAS_LCD_VBGR
	}));
	$assignStatic(bug6302464::EXCLUDED_LAFS, $new($StringArray, {"CDE/Motif"_s}));
}

bug6302464::bug6302464() {
}

$Class* bug6302464::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug6302464$$Lambda$testAntialiasingProperties::classInfo$.name)) {
			return bug6302464$$Lambda$testAntialiasingProperties::load$(name, initialize);
		}
	}
	$loadClass(bug6302464, name, initialize, &_bug6302464_ClassInfo_, clinit$bug6302464, allocate$bug6302464);
	return class$;
}

$Class* bug6302464::class$ = nullptr;