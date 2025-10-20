#include <HeadlessJSeparator.h>

#include <HeadlessJSeparator$1.h>
#include <HeadlessJSeparator$2.h>
#include <HeadlessJSeparator$3.h>
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
#include <javax/swing/JSeparator.h>
#include <jcpp.h>

#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $HeadlessJSeparator$1 = ::HeadlessJSeparator$1;
using $HeadlessJSeparator$2 = ::HeadlessJSeparator$2;
using $HeadlessJSeparator$3 = ::HeadlessJSeparator$3;
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
using $JSeparator = ::javax::swing::JSeparator;

$MethodInfo _HeadlessJSeparator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJSeparator::*)()>(&HeadlessJSeparator::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJSeparator::main))},
	{}
};

$InnerClassInfo _HeadlessJSeparator_InnerClassesInfo_[] = {
	{"HeadlessJSeparator$3", nullptr, nullptr, 0},
	{"HeadlessJSeparator$2", nullptr, nullptr, 0},
	{"HeadlessJSeparator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJSeparator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJSeparator",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJSeparator_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessJSeparator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessJSeparator$3,HeadlessJSeparator$2,HeadlessJSeparator$1"
};

$Object* allocate$HeadlessJSeparator($Class* clazz) {
	return $of($alloc(HeadlessJSeparator));
}

void HeadlessJSeparator::init$() {
}

void HeadlessJSeparator::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($JSeparator, sp, $new($JSeparator));
	sp->getAccessibleContext();
	sp->isFocusTraversable();
	sp->setEnabled(false);
	sp->setEnabled(true);
	sp->requestFocus();
	sp->requestFocusInWindow();
	sp->getPreferredSize();
	sp->getMaximumSize();
	sp->getMinimumSize();
	sp->contains(1, 2);
	$var($Component, c1, sp->add(static_cast<$Component*>($$new($HeadlessJSeparator$1))));
	$var($Component, c2, sp->add(static_cast<$Component*>($$new($HeadlessJSeparator$2))));
	$var($Component, c3, sp->add(static_cast<$Component*>($$new($HeadlessJSeparator$3))));
	$var($Insets, ins, sp->getInsets());
	sp->getAlignmentY();
	sp->getAlignmentX();
	sp->getGraphics();
	sp->setVisible(false);
	sp->setVisible(true);
	$init($Color);
	sp->setForeground($Color::red);
	sp->setBackground($Color::red);
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
					sp->setFont(f1);
					sp->setFont(f2);
					sp->setFont(f3);
					sp->setFont(f4);
					sp->getFontMetrics(f1);
					sp->getFontMetrics(f2);
					sp->getFontMetrics(f3);
					sp->getFontMetrics(f4);
				}
			}
		}
	}
	sp->enable();
	sp->disable();
	sp->reshape(10, 10, 10, 10);
	sp->getBounds($$new($Rectangle, 1, 1, 1, 1));
	sp->getSize($$new($Dimension, 1, 2));
	sp->getLocation($$new($Point, 1, 2));
	sp->getX();
	sp->getY();
	sp->getWidth();
	sp->getHeight();
	sp->isOpaque();
	sp->isValidateRoot();
	sp->isOptimizedDrawingEnabled();
	sp->isDoubleBuffered();
	sp->getComponentCount();
	sp->countComponents();
	sp->getComponent(1);
	sp->getComponent(2);
	$var($ComponentArray, cs, sp->getComponents());
	sp->getLayout();
	sp->setLayout($$new($FlowLayout));
	sp->doLayout();
	sp->layout();
	sp->invalidate();
	sp->validate();
	sp->remove(0);
	sp->remove(c2);
	sp->removeAll();
	sp->preferredSize();
	sp->minimumSize();
	sp->getComponentAt(1, 2);
	sp->locate(1, 2);
	sp->getComponentAt($$new($Point, 1, 2));
	sp->isFocusCycleRoot($$new($Container));
	sp->transferFocusBackward();
	sp->setName("goober"_s);
	sp->getName();
	sp->getParent();
	sp->getGraphicsConfiguration();
	sp->getTreeLock();
	sp->getToolkit();
	sp->isValid();
	sp->isDisplayable();
	sp->isVisible();
	sp->isShowing();
	sp->isEnabled();
	sp->enable(false);
	sp->enable(true);
	sp->enableInputMethods(false);
	sp->enableInputMethods(true);
	sp->show();
	sp->show(false);
	sp->show(true);
	sp->hide();
	sp->getForeground();
	sp->isForegroundSet();
	sp->getBackground();
	sp->isBackgroundSet();
	sp->getFont();
	sp->isFontSet();
	$var($Container, c, $new($Container));
	c->add(static_cast<$Component*>(sp));
	sp->getLocale();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			sp->setLocale(locale);
		}
	}
	sp->getColorModel();
	sp->getLocation();
	bool exceptions = false;
	try {
		sp->getLocationOnScreen();
	} catch ($IllegalComponentStateException&) {
		$var($IllegalComponentStateException, e, $catch());
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	sp->location();
	sp->setLocation(1, 2);
	sp->move(1, 2);
	sp->setLocation($$new($Point, 1, 2));
	sp->getSize();
	sp->size();
	sp->setSize(1, 32);
	sp->resize(1, 32);
	sp->setSize($$new($Dimension, 1, 32));
	sp->resize($$new($Dimension, 1, 32));
	sp->getBounds();
	sp->bounds();
	sp->setBounds(10, 10, 10, 10);
	sp->setBounds($$new($Rectangle, 10, 10, 10, 10));
	sp->isLightweight();
	sp->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	sp->getCursor();
	sp->isCursorSet();
	sp->inside(1, 2);
	sp->contains($$new($Point, 1, 2));
	sp->isFocusable();
	sp->setFocusable(true);
	sp->setFocusable(false);
	sp->transferFocus();
	sp->getFocusCycleRootAncestor();
	sp->nextFocus();
	sp->transferFocusUpCycle();
	sp->hasFocus();
	sp->isFocusOwner();
	sp->toString();
	$init($ComponentOrientation);
	sp->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	sp->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	sp->setComponentOrientation($ComponentOrientation::UNKNOWN);
	sp->getComponentOrientation();
}

HeadlessJSeparator::HeadlessJSeparator() {
}

$Class* HeadlessJSeparator::load$($String* name, bool initialize) {
	$loadClass(HeadlessJSeparator, name, initialize, &_HeadlessJSeparator_ClassInfo_, allocate$HeadlessJSeparator);
	return class$;
}

$Class* HeadlessJSeparator::class$ = nullptr;