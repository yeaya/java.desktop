#include <HeadlessJRootPane.h>

#include <HeadlessJRootPane$1.h>
#include <HeadlessJRootPane$2.h>
#include <HeadlessJRootPane$3.h>
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
#include <javax/swing/JRootPane.h>
#include <jcpp.h>

#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $HeadlessJRootPane$1 = ::HeadlessJRootPane$1;
using $HeadlessJRootPane$2 = ::HeadlessJRootPane$2;
using $HeadlessJRootPane$3 = ::HeadlessJRootPane$3;
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
using $IllegalComponentStateException = ::java::awt::IllegalComponentStateException;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Locale = ::java::util::Locale;
using $JComponent = ::javax::swing::JComponent;
using $JRootPane = ::javax::swing::JRootPane;

$MethodInfo _HeadlessJRootPane_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJRootPane::*)()>(&HeadlessJRootPane::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJRootPane::main))},
	{}
};

$InnerClassInfo _HeadlessJRootPane_InnerClassesInfo_[] = {
	{"HeadlessJRootPane$3", nullptr, nullptr, 0},
	{"HeadlessJRootPane$2", nullptr, nullptr, 0},
	{"HeadlessJRootPane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJRootPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJRootPane",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJRootPane_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessJRootPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessJRootPane$3,HeadlessJRootPane$2,HeadlessJRootPane$1"
};

$Object* allocate$HeadlessJRootPane($Class* clazz) {
	return $of($alloc(HeadlessJRootPane));
}

void HeadlessJRootPane::init$() {
}

void HeadlessJRootPane::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($JRootPane, rp, $new($JRootPane));
	rp->getAccessibleContext();
	rp->isFocusTraversable();
	rp->setEnabled(false);
	rp->setEnabled(true);
	rp->requestFocus();
	rp->requestFocusInWindow();
	rp->getPreferredSize();
	rp->getMaximumSize();
	rp->getMinimumSize();
	rp->contains(1, 2);
	$var($Component, c1, rp->add(static_cast<$Component*>($$new($HeadlessJRootPane$1))));
	$var($Component, c2, rp->add(static_cast<$Component*>($$new($HeadlessJRootPane$2))));
	$var($Component, c3, rp->add(static_cast<$Component*>($$new($HeadlessJRootPane$3))));
	$var($Insets, ins, rp->getInsets());
	rp->getAlignmentY();
	rp->getAlignmentX();
	rp->getGraphics();
	rp->setVisible(false);
	rp->setVisible(true);
	$init($Color);
	rp->setForeground($Color::red);
	rp->setBackground($Color::red);
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
					rp->setFont(f1);
					rp->setFont(f2);
					rp->setFont(f3);
					rp->setFont(f4);
					rp->getFontMetrics(f1);
					rp->getFontMetrics(f2);
					rp->getFontMetrics(f3);
					rp->getFontMetrics(f4);
				}
			}
		}
	}
	rp->enable();
	rp->disable();
	rp->reshape(10, 10, 10, 10);
	rp->getBounds($$new($Rectangle, 1, 1, 1, 1));
	rp->getSize($$new($Dimension, 1, 2));
	rp->getLocation($$new($Point, 1, 2));
	rp->getX();
	rp->getY();
	rp->getWidth();
	rp->getHeight();
	rp->isOpaque();
	rp->isValidateRoot();
	rp->isOptimizedDrawingEnabled();
	rp->isDoubleBuffered();
	rp->getComponentCount();
	rp->countComponents();
	rp->getComponent(1);
	rp->getComponent(2);
	$var($ComponentArray, cs, rp->getComponents());
	rp->getLayout();
	rp->setLayout($$new($FlowLayout));
	rp->doLayout();
	rp->layout();
	rp->invalidate();
	rp->validate();
	rp->remove(0);
	rp->remove(c2);
	rp->removeAll();
	rp->preferredSize();
	rp->minimumSize();
	rp->getComponentAt(1, 2);
	rp->locate(1, 2);
	rp->getComponentAt($$new($Point, 1, 2));
	rp->isFocusCycleRoot($$new($Container));
	rp->transferFocusBackward();
	rp->setName("goober"_s);
	rp->getName();
	rp->getParent();
	rp->getGraphicsConfiguration();
	rp->getTreeLock();
	rp->getToolkit();
	rp->isValid();
	rp->isDisplayable();
	rp->isVisible();
	rp->isShowing();
	rp->isEnabled();
	rp->enable(false);
	rp->enable(true);
	rp->enableInputMethods(false);
	rp->enableInputMethods(true);
	rp->show();
	rp->show(false);
	rp->show(true);
	rp->hide();
	rp->getForeground();
	rp->isForegroundSet();
	rp->getBackground();
	rp->isBackgroundSet();
	rp->getFont();
	rp->isFontSet();
	$var($Container, c, $new($Container));
	c->add(static_cast<$Component*>(rp));
	rp->getLocale();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			rp->setLocale(locale);
		}
	}
	rp->getColorModel();
	rp->getLocation();
	bool exceptions = false;
	try {
		rp->getLocationOnScreen();
	} catch ($IllegalComponentStateException& e) {
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	rp->location();
	rp->setLocation(1, 2);
	rp->move(1, 2);
	rp->setLocation($$new($Point, 1, 2));
	rp->getSize();
	rp->size();
	rp->setSize(1, 32);
	rp->resize(1, 32);
	rp->setSize($$new($Dimension, 1, 32));
	rp->resize($$new($Dimension, 1, 32));
	rp->getBounds();
	rp->bounds();
	rp->setBounds(10, 10, 10, 10);
	rp->setBounds($$new($Rectangle, 10, 10, 10, 10));
	rp->isLightweight();
	rp->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	rp->getCursor();
	rp->isCursorSet();
	rp->inside(1, 2);
	rp->contains($$new($Point, 1, 2));
	rp->isFocusable();
	rp->setFocusable(true);
	rp->setFocusable(false);
	rp->transferFocus();
	rp->getFocusCycleRootAncestor();
	rp->nextFocus();
	rp->transferFocusUpCycle();
	rp->hasFocus();
	rp->isFocusOwner();
	rp->toString();
	$init($ComponentOrientation);
	rp->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	rp->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	rp->setComponentOrientation($ComponentOrientation::UNKNOWN);
	rp->getComponentOrientation();
}

HeadlessJRootPane::HeadlessJRootPane() {
}

$Class* HeadlessJRootPane::load$($String* name, bool initialize) {
	$loadClass(HeadlessJRootPane, name, initialize, &_HeadlessJRootPane_ClassInfo_, allocate$HeadlessJRootPane);
	return class$;
}

$Class* HeadlessJRootPane::class$ = nullptr;