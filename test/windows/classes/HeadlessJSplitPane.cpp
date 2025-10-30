#include <HeadlessJSplitPane.h>

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
#include <javax/swing/JSplitPane.h>
#include <jcpp.h>

#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

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
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Locale = ::java::util::Locale;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent = ::javax::swing::JComponent;
using $JSplitPane = ::javax::swing::JSplitPane;

$MethodInfo _HeadlessJSplitPane_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJSplitPane::*)()>(&HeadlessJSplitPane::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJSplitPane::main))},
	{}
};

$ClassInfo _HeadlessJSplitPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJSplitPane",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJSplitPane_MethodInfo_
};

$Object* allocate$HeadlessJSplitPane($Class* clazz) {
	return $of($alloc(HeadlessJSplitPane));
}

void HeadlessJSplitPane::init$() {
}

void HeadlessJSplitPane::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($JSplitPane, s, $new($JSplitPane));
	s->getAccessibleContext();
	s->isFocusTraversable();
	s->setEnabled(false);
	s->setEnabled(true);
	s->requestFocus();
	s->requestFocusInWindow();
	s->getPreferredSize();
	s->getMaximumSize();
	s->getMinimumSize();
	s->contains(1, 2);
	$var($Insets, ins, s->getInsets());
	s->getAlignmentY();
	s->getAlignmentX();
	s->getGraphics();
	s->setVisible(false);
	s->setVisible(true);
	$init($Color);
	s->setForeground($Color::red);
	s->setBackground($Color::red);
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
					s->setFont(f1);
					s->setFont(f2);
					s->setFont(f3);
					s->setFont(f4);
					s->getFontMetrics(f1);
					s->getFontMetrics(f2);
					s->getFontMetrics(f3);
					s->getFontMetrics(f4);
				}
			}
		}
	}
	s->enable();
	s->disable();
	s->reshape(10, 10, 10, 10);
	s->getBounds($$new($Rectangle, 1, 1, 1, 1));
	s->getSize($$new($Dimension, 1, 2));
	s->getLocation($$new($Point, 1, 2));
	s->getX();
	s->getY();
	s->getWidth();
	s->getHeight();
	s->isOpaque();
	s->isValidateRoot();
	s->isOptimizedDrawingEnabled();
	s->isDoubleBuffered();
	s->getComponentCount();
	s->countComponents();
	s->getComponent(1);
	s->getComponent(2);
	$var($ComponentArray, cs, s->getComponents());
	s->getLayout();
	s->setLayout($$new($FlowLayout));
	s->doLayout();
	s->layout();
	s->invalidate();
	s->validate();
	s->preferredSize();
	s->minimumSize();
	s->getComponentAt(1, 2);
	s->locate(1, 2);
	s->getComponentAt($$new($Point, 1, 2));
	s->isFocusCycleRoot($$new($Container));
	s->transferFocusBackward();
	s->setName("goober"_s);
	s->getName();
	s->getParent();
	s->getGraphicsConfiguration();
	s->getTreeLock();
	s->getToolkit();
	s->isValid();
	s->isDisplayable();
	s->isVisible();
	s->isShowing();
	s->isEnabled();
	s->enable(false);
	s->enable(true);
	s->enableInputMethods(false);
	s->enableInputMethods(true);
	s->show();
	s->show(false);
	s->show(true);
	s->hide();
	s->getForeground();
	s->isForegroundSet();
	s->getBackground();
	s->isBackgroundSet();
	s->getFont();
	s->isFontSet();
	$var($Container, c, $new($Container));
	c->add(static_cast<$Component*>(s));
	s->getLocale();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			s->setLocale(locale);
		}
	}
	s->getColorModel();
	s->getLocation();
	bool exceptions = false;
	try {
		s->getLocationOnScreen();
	} catch ($IllegalComponentStateException& e) {
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	s->location();
	s->setLocation(1, 2);
	s->move(1, 2);
	s->setLocation($$new($Point, 1, 2));
	s->getSize();
	s->size();
	s->setSize(1, 32);
	s->resize(1, 32);
	s->setSize($$new($Dimension, 1, 32));
	s->resize($$new($Dimension, 1, 32));
	s->getBounds();
	s->bounds();
	s->setBounds(10, 10, 10, 10);
	s->setBounds($$new($Rectangle, 10, 10, 10, 10));
	s->isLightweight();
	s->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	s->getCursor();
	s->isCursorSet();
	s->inside(1, 2);
	s->contains($$new($Point, 1, 2));
	s->isFocusable();
	s->setFocusable(true);
	s->setFocusable(false);
	s->transferFocus();
	s->getFocusCycleRootAncestor();
	s->nextFocus();
	s->transferFocusUpCycle();
	s->hasFocus();
	s->isFocusOwner();
	s->toString();
	$init($ComponentOrientation);
	s->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	s->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	s->setComponentOrientation($ComponentOrientation::UNKNOWN);
	s->getComponentOrientation();
}

HeadlessJSplitPane::HeadlessJSplitPane() {
}

$Class* HeadlessJSplitPane::load$($String* name, bool initialize) {
	$loadClass(HeadlessJSplitPane, name, initialize, &_HeadlessJSplitPane_ClassInfo_, allocate$HeadlessJSplitPane);
	return class$;
}

$Class* HeadlessJSplitPane::class$ = nullptr;