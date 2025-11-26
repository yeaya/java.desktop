#include <HeadlessJInternalFrame_JDesktopIcon.h>

#include <HeadlessJInternalFrame_JDesktopIcon$1.h>
#include <HeadlessJInternalFrame_JDesktopIcon$2.h>
#include <HeadlessJInternalFrame_JDesktopIcon$3.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/IllegalComponentStateException.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/image/ColorModel.h>
#include <java/util/Locale.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $HeadlessJInternalFrame_JDesktopIcon$1 = ::HeadlessJInternalFrame_JDesktopIcon$1;
using $HeadlessJInternalFrame_JDesktopIcon$2 = ::HeadlessJInternalFrame_JDesktopIcon$2;
using $HeadlessJInternalFrame_JDesktopIcon$3 = ::HeadlessJInternalFrame_JDesktopIcon$3;
using $ComponentArray = $Array<::java::awt::Component>;
using $LocaleArray = $Array<::java::util::Locale>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $FlowLayout = ::java::awt::FlowLayout;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $IllegalComponentStateException = ::java::awt::IllegalComponentStateException;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Locale = ::java::util::Locale;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;

$MethodInfo _HeadlessJInternalFrame_JDesktopIcon_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJInternalFrame_JDesktopIcon::*)()>(&HeadlessJInternalFrame_JDesktopIcon::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJInternalFrame_JDesktopIcon::main))},
	{}
};

$InnerClassInfo _HeadlessJInternalFrame_JDesktopIcon_InnerClassesInfo_[] = {
	{"HeadlessJInternalFrame_JDesktopIcon$3", nullptr, nullptr, 0},
	{"HeadlessJInternalFrame_JDesktopIcon$2", nullptr, nullptr, 0},
	{"HeadlessJInternalFrame_JDesktopIcon$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJInternalFrame_JDesktopIcon_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJInternalFrame_JDesktopIcon",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJInternalFrame_JDesktopIcon_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessJInternalFrame_JDesktopIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessJInternalFrame_JDesktopIcon$3,HeadlessJInternalFrame_JDesktopIcon$2,HeadlessJInternalFrame_JDesktopIcon$1"
};

$Object* allocate$HeadlessJInternalFrame_JDesktopIcon($Class* clazz) {
	return $of($alloc(HeadlessJInternalFrame_JDesktopIcon));
}

void HeadlessJInternalFrame_JDesktopIcon::init$() {
}

void HeadlessJInternalFrame_JDesktopIcon::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($JInternalFrame$JDesktopIcon, jdi, $new($JInternalFrame$JDesktopIcon, $$new($JInternalFrame)));
	jdi->getAccessibleContext();
	jdi->isFocusTraversable();
	jdi->setEnabled(false);
	jdi->setEnabled(true);
	jdi->requestFocus();
	jdi->requestFocusInWindow();
	jdi->getPreferredSize();
	jdi->getMaximumSize();
	jdi->getMinimumSize();
	jdi->contains(1, 2);
	$var($Component, c1, jdi->add(static_cast<$Component*>($$new($HeadlessJInternalFrame_JDesktopIcon$1))));
	$var($Component, c2, jdi->add(static_cast<$Component*>($$new($HeadlessJInternalFrame_JDesktopIcon$2))));
	$var($Component, c3, jdi->add(static_cast<$Component*>($$new($HeadlessJInternalFrame_JDesktopIcon$3))));
	$var($Insets, ins, jdi->getInsets());
	jdi->getAlignmentY();
	jdi->getAlignmentX();
	jdi->getGraphics();
	jdi->setVisible(false);
	jdi->setVisible(true);
	$init($Color);
	jdi->setForeground($Color::red);
	jdi->setBackground($Color::red);
	{
		$var($StringArray, arr$, $nc($($Toolkit::getDefaultToolkit()))->getFontList());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, font, arr$->get(i$));
			{
				for (int32_t j = 8; j < 17; ++j) {
					$var($Font, f1, $new($Font, font, $Font::PLAIN, j));
					$var($Font, f2, $new($Font, font, $Font::BOLD, j));
					$var($Font, f3, $new($Font, font, $Font::ITALIC, j));
					$var($Font, f4, $new($Font, font, $Font::BOLD | $Font::ITALIC, j));
					jdi->setFont(f1);
					jdi->setFont(f2);
					jdi->setFont(f3);
					jdi->setFont(f4);
					jdi->getFontMetrics(f1);
					jdi->getFontMetrics(f2);
					jdi->getFontMetrics(f3);
					jdi->getFontMetrics(f4);
				}
			}
		}
	}
	jdi->enable();
	jdi->disable();
	jdi->reshape(10, 10, 10, 10);
	jdi->getBounds($$new($Rectangle, 1, 1, 1, 1));
	jdi->getSize($$new($Dimension, 1, 2));
	jdi->getLocation($$new($Point, 1, 2));
	jdi->getX();
	jdi->getY();
	jdi->getWidth();
	jdi->getHeight();
	jdi->isOpaque();
	jdi->isValidateRoot();
	jdi->isOptimizedDrawingEnabled();
	jdi->isDoubleBuffered();
	jdi->getComponentCount();
	jdi->countComponents();
	jdi->getComponent(1);
	jdi->getComponent(2);
	$var($ComponentArray, cs, jdi->getComponents());
	jdi->getLayout();
	jdi->setLayout($$new($FlowLayout));
	jdi->doLayout();
	jdi->layout();
	jdi->invalidate();
	jdi->validate();
	jdi->remove(0);
	jdi->remove(c2);
	jdi->removeAll();
	jdi->preferredSize();
	jdi->minimumSize();
	jdi->getComponentAt(1, 2);
	jdi->locate(1, 2);
	jdi->getComponentAt($$new($Point, 1, 2));
	jdi->isFocusCycleRoot($$new($Container));
	jdi->transferFocusBackward();
	jdi->setName("goober"_s);
	jdi->getName();
	jdi->getParent();
	jdi->getGraphicsConfiguration();
	jdi->getTreeLock();
	jdi->getToolkit();
	jdi->isValid();
	jdi->isDisplayable();
	jdi->isVisible();
	jdi->isShowing();
	jdi->isEnabled();
	jdi->enable(false);
	jdi->enable(true);
	jdi->enableInputMethods(false);
	jdi->enableInputMethods(true);
	jdi->show();
	jdi->show(false);
	jdi->show(true);
	jdi->hide();
	jdi->getForeground();
	jdi->isForegroundSet();
	jdi->getBackground();
	jdi->isBackgroundSet();
	jdi->getFont();
	jdi->isFontSet();
	$var($Container, c, $new($Container));
	c->add(static_cast<$Component*>(jdi));
	jdi->getLocale();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			jdi->setLocale(locale);
		}
	}
	jdi->getColorModel();
	jdi->getLocation();
	bool exceptions = false;
	try {
		jdi->getLocationOnScreen();
	} catch ($IllegalComponentStateException& e) {
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	jdi->location();
	jdi->setLocation(1, 2);
	jdi->move(1, 2);
	jdi->setLocation($$new($Point, 1, 2));
	jdi->getSize();
	jdi->size();
	jdi->setSize(1, 32);
	jdi->resize(1, 32);
	jdi->setSize($$new($Dimension, 1, 32));
	jdi->resize($$new($Dimension, 1, 32));
	jdi->getBounds();
	jdi->bounds();
	jdi->setBounds(10, 10, 10, 10);
	jdi->setBounds($$new($Rectangle, 10, 10, 10, 10));
	jdi->isLightweight();
	jdi->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	jdi->getCursor();
	jdi->isCursorSet();
	jdi->inside(1, 2);
	jdi->contains($$new($Point, 1, 2));
	jdi->isFocusable();
	jdi->setFocusable(true);
	jdi->setFocusable(false);
	jdi->transferFocus();
	jdi->getFocusCycleRootAncestor();
	jdi->nextFocus();
	jdi->transferFocusUpCycle();
	jdi->hasFocus();
	jdi->isFocusOwner();
	jdi->toString();
	$init($ComponentOrientation);
	jdi->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	jdi->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	jdi->setComponentOrientation($ComponentOrientation::UNKNOWN);
	jdi->getComponentOrientation();
}

HeadlessJInternalFrame_JDesktopIcon::HeadlessJInternalFrame_JDesktopIcon() {
}

$Class* HeadlessJInternalFrame_JDesktopIcon::load$($String* name, bool initialize) {
	$loadClass(HeadlessJInternalFrame_JDesktopIcon, name, initialize, &_HeadlessJInternalFrame_JDesktopIcon_ClassInfo_, allocate$HeadlessJInternalFrame_JDesktopIcon);
	return class$;
}

$Class* HeadlessJInternalFrame_JDesktopIcon::class$ = nullptr;