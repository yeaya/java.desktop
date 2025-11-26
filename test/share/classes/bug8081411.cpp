#include <bug8081411.h>

#include <bug8081411$CenteredSynthIcon.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <javax/swing/plaf/synth/SynthIcon.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <jcpp.h>

#undef ENABLED
#undef RED
#undef TEST_COLOR
#undef TYPE_INT_RGB

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug8081411$CenteredSynthIcon = ::bug8081411$CenteredSynthIcon;
using $Color = ::java::awt::Color;
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
using $AbstractButton = ::javax::swing::AbstractButton;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JMenuItem = ::javax::swing::JMenuItem;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthGraphicsUtils = ::javax::swing::plaf::synth::SynthGraphicsUtils;
using $SynthIcon = ::javax::swing::plaf::synth::SynthIcon;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;

class bug8081411$$Lambda$testSynthIcon : public $Runnable {
	$class(bug8081411$$Lambda$testSynthIcon, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8081411::testSynthIcon();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8081411$$Lambda$testSynthIcon>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8081411$$Lambda$testSynthIcon::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8081411$$Lambda$testSynthIcon::*)()>(&bug8081411$$Lambda$testSynthIcon::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8081411$$Lambda$testSynthIcon::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8081411$$Lambda$testSynthIcon",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8081411$$Lambda$testSynthIcon::load$($String* name, bool initialize) {
	$loadClass(bug8081411$$Lambda$testSynthIcon, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8081411$$Lambda$testSynthIcon::class$ = nullptr;

$FieldInfo _bug8081411_FieldInfo_[] = {
	{"TEST_COLOR", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8081411, TEST_COLOR)},
	{}
};

$MethodInfo _bug8081411_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8081411::*)()>(&bug8081411::init$))},
	{"checkAndSetNimbusLookAndFeel", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&bug8081411::checkAndSetNimbusLookAndFeel))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8081411::main)), "java.lang.Exception"},
	{"paintAndCheckIcon", "(Ljavax/swing/Icon;Ljavax/swing/plaf/synth/SynthContext;II)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Icon*,$SynthContext*,int32_t,int32_t)>(&bug8081411::paintAndCheckIcon))},
	{"testSynthIcon", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8081411::testSynthIcon))},
	{}
};

$InnerClassInfo _bug8081411_InnerClassesInfo_[] = {
	{"bug8081411$CenteredSynthIcon", "bug8081411", "CenteredSynthIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug8081411_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8081411",
	"java.lang.Object",
	nullptr,
	_bug8081411_FieldInfo_,
	_bug8081411_MethodInfo_,
	nullptr,
	nullptr,
	_bug8081411_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8081411$CenteredSynthIcon"
};

$Object* allocate$bug8081411($Class* clazz) {
	return $of($alloc(bug8081411));
}

$Color* bug8081411::TEST_COLOR = nullptr;

void bug8081411::init$() {
}

void bug8081411::main($StringArray* args) {
	$init(bug8081411);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8081411$$Lambda$testSynthIcon)));
}

void bug8081411::testSynthIcon() {
	$init(bug8081411);
	$useLocalCurrentObjectStackCache();
	if (!checkAndSetNimbusLookAndFeel()) {
		return;
	}
	$var($JMenuItem, menu, $new($JMenuItem));
	$var($Icon, subMenuIcon, $UIManager::getIcon("Menu.arrowIcon"_s));
	if (!($instanceOf($SynthIcon, subMenuIcon))) {
		$throwNew($RuntimeException, "Icon is not a SynthIcon!"_s);
	}
	$var($Region, region, $SynthLookAndFeel::getRegion(menu));
	$var($SynthStyle, style, $SynthLookAndFeel::getStyle(menu, region));
	$var($SynthContext, synthContext, $new($SynthContext, menu, region, style, $SynthConstants::ENABLED));
	int32_t width = $SynthGraphicsUtils::getIconWidth(subMenuIcon, synthContext);
	int32_t height = $SynthGraphicsUtils::getIconHeight(subMenuIcon, synthContext);
	paintAndCheckIcon(subMenuIcon, synthContext, width, height);
	int32_t newWidth = width * 17;
	int32_t newHeight = height * 37;
	$var($Icon, centeredIcon, $new($bug8081411$CenteredSynthIcon, $cast($SynthIcon, subMenuIcon), newWidth, newHeight));
	paintAndCheckIcon(centeredIcon, synthContext, newWidth, newHeight);
}

void bug8081411::paintAndCheckIcon($Icon* icon, $SynthContext* synthContext, int32_t width, int32_t height) {
	$init(bug8081411);
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, buffImage, $new($BufferedImage, width, height, $BufferedImage::TYPE_INT_RGB));
	$var($Graphics, g, buffImage->createGraphics());
	$init($Color);
	$nc(g)->setColor($Color::RED);
	g->fillRect(0, 0, width, height);
	$SynthGraphicsUtils::paintIcon(icon, synthContext, g, 0, 0, width, height);
	g->dispose();
	$var($Color, iconCenterColor, $new($Color, buffImage->getRGB(width / 2, height / 2)));
	if (!$nc(bug8081411::TEST_COLOR)->equals(iconCenterColor)) {
		$throwNew($RuntimeException, "Icon is painted incorrectly!"_s);
	}
}

bool bug8081411::checkAndSetNimbusLookAndFeel() {
	$init(bug8081411);
	$useLocalCurrentObjectStackCache();
	try {
		{
			$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($UIManager$LookAndFeelInfo, info, arr$->get(i$));
				{
					if ("Nimbus"_s->equals($($nc(info)->getName()))) {
						$UIManager::setLookAndFeel($($nc(info)->getClassName()));
						return true;
					}
				}
			}
		}
		return false;
	} catch ($Exception& ignore) {
		return false;
	}
	$shouldNotReachHere();
}

void clinit$bug8081411($Class* class$) {
	$assignStatic(bug8081411::TEST_COLOR, $new($Color, 71, 71, 72));
}

bug8081411::bug8081411() {
}

$Class* bug8081411::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug8081411$$Lambda$testSynthIcon::classInfo$.name)) {
			return bug8081411$$Lambda$testSynthIcon::load$(name, initialize);
		}
	}
	$loadClass(bug8081411, name, initialize, &_bug8081411_ClassInfo_, clinit$bug8081411, allocate$bug8081411);
	return class$;
}

$Class* bug8081411::class$ = nullptr;