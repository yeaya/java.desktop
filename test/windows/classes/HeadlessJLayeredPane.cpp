#include <HeadlessJLayeredPane.h>

#include <HeadlessJLayeredPane$1.h>
#include <HeadlessJLayeredPane$2.h>
#include <HeadlessJLayeredPane$3.h>
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
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLayeredPane.h>
#include <jcpp.h>

#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $HeadlessJLayeredPane$1 = ::HeadlessJLayeredPane$1;
using $HeadlessJLayeredPane$2 = ::HeadlessJLayeredPane$2;
using $HeadlessJLayeredPane$3 = ::HeadlessJLayeredPane$3;
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
using $JLayeredPane = ::javax::swing::JLayeredPane;

$MethodInfo _HeadlessJLayeredPane_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJLayeredPane::*)()>(&HeadlessJLayeredPane::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJLayeredPane::main))},
	{}
};

$InnerClassInfo _HeadlessJLayeredPane_InnerClassesInfo_[] = {
	{"HeadlessJLayeredPane$3", nullptr, nullptr, 0},
	{"HeadlessJLayeredPane$2", nullptr, nullptr, 0},
	{"HeadlessJLayeredPane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJLayeredPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJLayeredPane",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJLayeredPane_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessJLayeredPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessJLayeredPane$3,HeadlessJLayeredPane$2,HeadlessJLayeredPane$1"
};

$Object* allocate$HeadlessJLayeredPane($Class* clazz) {
	return $of($alloc(HeadlessJLayeredPane));
}

void HeadlessJLayeredPane::init$() {
}

void HeadlessJLayeredPane::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($JLayeredPane, lp, $new($JLayeredPane));
	lp->getAccessibleContext();
	lp->isFocusTraversable();
	lp->setEnabled(false);
	lp->setEnabled(true);
	lp->requestFocus();
	lp->requestFocusInWindow();
	lp->getPreferredSize();
	lp->getMaximumSize();
	lp->getMinimumSize();
	lp->contains(1, 2);
	$var($Component, c1, lp->add(static_cast<$Component*>($$new($HeadlessJLayeredPane$1))));
	$var($Component, c2, lp->add(static_cast<$Component*>($$new($HeadlessJLayeredPane$2))));
	$var($Component, c3, lp->add(static_cast<$Component*>($$new($HeadlessJLayeredPane$3))));
	$var($Insets, ins, lp->getInsets());
	lp->getAlignmentY();
	lp->getAlignmentX();
	lp->getGraphics();
	lp->setVisible(false);
	lp->setVisible(true);
	$init($Color);
	lp->setForeground($Color::red);
	lp->setBackground($Color::red);
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
					lp->setFont(f1);
					lp->setFont(f2);
					lp->setFont(f3);
					lp->setFont(f4);
					lp->getFontMetrics(f1);
					lp->getFontMetrics(f2);
					lp->getFontMetrics(f3);
					lp->getFontMetrics(f4);
				}
			}
		}
	}
	lp->enable();
	lp->disable();
	lp->reshape(10, 10, 10, 10);
	lp->getBounds($$new($Rectangle, 1, 1, 1, 1));
	lp->getSize($$new($Dimension, 1, 2));
	lp->getLocation($$new($Point, 1, 2));
	lp->getX();
	lp->getY();
	lp->getWidth();
	lp->getHeight();
	lp->isOpaque();
	lp->isValidateRoot();
	lp->isOptimizedDrawingEnabled();
	lp->isDoubleBuffered();
	lp->getComponentCount();
	lp->countComponents();
	lp->getComponent(1);
	lp->getComponent(2);
	$var($ComponentArray, cs, lp->getComponents());
	lp->getLayout();
	lp->setLayout($$new($FlowLayout));
	lp->doLayout();
	lp->layout();
	lp->invalidate();
	lp->validate();
	lp->remove(0);
	lp->remove(c2);
	lp->removeAll();
	lp->preferredSize();
	lp->minimumSize();
	lp->getComponentAt(1, 2);
	lp->locate(1, 2);
	lp->getComponentAt($$new($Point, 1, 2));
	lp->isFocusCycleRoot($$new($Container));
	lp->transferFocusBackward();
	lp->setName("goober"_s);
	lp->getName();
	lp->getParent();
	lp->getGraphicsConfiguration();
	lp->getTreeLock();
	lp->getToolkit();
	lp->isValid();
	lp->isDisplayable();
	lp->isVisible();
	lp->isShowing();
	lp->isEnabled();
	lp->enable(false);
	lp->enable(true);
	lp->enableInputMethods(false);
	lp->enableInputMethods(true);
	lp->show();
	lp->show(false);
	lp->show(true);
	lp->hide();
	lp->getForeground();
	lp->isForegroundSet();
	lp->getBackground();
	lp->isBackgroundSet();
	lp->getFont();
	lp->isFontSet();
	$var($Container, c, $new($Container));
	c->add(static_cast<$Component*>(lp));
	lp->getLocale();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			lp->setLocale(locale);
		}
	}
	lp->getColorModel();
	lp->getLocation();
	bool exceptions = false;
	try {
		lp->getLocationOnScreen();
	} catch ($IllegalComponentStateException&) {
		$var($IllegalComponentStateException, e, $catch());
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	lp->location();
	lp->setLocation(1, 2);
	lp->move(1, 2);
	lp->setLocation($$new($Point, 1, 2));
	lp->getSize();
	lp->size();
	lp->setSize(1, 32);
	lp->resize(1, 32);
	lp->setSize($$new($Dimension, 1, 32));
	lp->resize($$new($Dimension, 1, 32));
	lp->getBounds();
	lp->bounds();
	lp->setBounds(10, 10, 10, 10);
	lp->setBounds($$new($Rectangle, 10, 10, 10, 10));
	lp->isLightweight();
	lp->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	lp->getCursor();
	lp->isCursorSet();
	lp->inside(1, 2);
	lp->contains($$new($Point, 1, 2));
	lp->isFocusable();
	lp->setFocusable(true);
	lp->setFocusable(false);
	lp->transferFocus();
	lp->getFocusCycleRootAncestor();
	lp->nextFocus();
	lp->transferFocusUpCycle();
	lp->hasFocus();
	lp->isFocusOwner();
	lp->toString();
	$init($ComponentOrientation);
	lp->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	lp->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	lp->setComponentOrientation($ComponentOrientation::UNKNOWN);
	lp->getComponentOrientation();
}

HeadlessJLayeredPane::HeadlessJLayeredPane() {
}

$Class* HeadlessJLayeredPane::load$($String* name, bool initialize) {
	$loadClass(HeadlessJLayeredPane, name, initialize, &_HeadlessJLayeredPane_ClassInfo_, allocate$HeadlessJLayeredPane);
	return class$;
}

$Class* HeadlessJLayeredPane::class$ = nullptr;