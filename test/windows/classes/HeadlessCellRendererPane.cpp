#include <HeadlessCellRendererPane.h>

#include <HeadlessCellRendererPane$1.h>
#include <HeadlessCellRendererPane$2.h>
#include <HeadlessCellRendererPane$3.h>
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
#include <javax/swing/CellRendererPane.h>
#include <jcpp.h>

#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $HeadlessCellRendererPane$1 = ::HeadlessCellRendererPane$1;
using $HeadlessCellRendererPane$2 = ::HeadlessCellRendererPane$2;
using $HeadlessCellRendererPane$3 = ::HeadlessCellRendererPane$3;
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
using $CellRendererPane = ::javax::swing::CellRendererPane;

$MethodInfo _HeadlessCellRendererPane_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessCellRendererPane::*)()>(&HeadlessCellRendererPane::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessCellRendererPane::main))},
	{}
};

$InnerClassInfo _HeadlessCellRendererPane_InnerClassesInfo_[] = {
	{"HeadlessCellRendererPane$3", nullptr, nullptr, 0},
	{"HeadlessCellRendererPane$2", nullptr, nullptr, 0},
	{"HeadlessCellRendererPane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessCellRendererPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessCellRendererPane",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessCellRendererPane_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessCellRendererPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessCellRendererPane$3,HeadlessCellRendererPane$2,HeadlessCellRendererPane$1"
};

$Object* allocate$HeadlessCellRendererPane($Class* clazz) {
	return $of($alloc(HeadlessCellRendererPane));
}

void HeadlessCellRendererPane::init$() {
}

void HeadlessCellRendererPane::main($StringArray* args) {
	$var($CellRendererPane, crp, $new($CellRendererPane));
	$var($Component, c1, crp->add(static_cast<$Component*>($$new($HeadlessCellRendererPane$1))));
	$var($Component, c2, crp->add(static_cast<$Component*>($$new($HeadlessCellRendererPane$2))));
	$var($Component, c3, crp->add(static_cast<$Component*>($$new($HeadlessCellRendererPane$3))));
	crp->setLayout($$new($FlowLayout));
	crp->invalidate();
	crp->getAccessibleContext();
	crp->getComponentCount();
	crp->countComponents();
	crp->getComponent(1);
	crp->getComponent(2);
	$var($ComponentArray, cs, crp->getComponents());
	$var($Insets, ins, crp->getInsets());
	$assign(ins, crp->insets());
	crp->getLayout();
	crp->setLayout($$new($FlowLayout));
	crp->setLayout($$new($FlowLayout));
	crp->doLayout();
	crp->layout();
	crp->invalidate();
	crp->validate();
	crp->remove(0);
	crp->remove(c2);
	crp->removeAll();
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
					crp->setFont(f1);
					crp->setFont(f2);
					crp->setFont(f3);
					crp->setFont(f4);
					crp->getFontMetrics(f1);
					crp->getFontMetrics(f2);
					crp->getFontMetrics(f3);
					crp->getFontMetrics(f4);
				}
			}
		}
	}
	crp->getPreferredSize();
	crp->preferredSize();
	crp->getMinimumSize();
	crp->minimumSize();
	crp->getMaximumSize();
	crp->getAlignmentX();
	crp->getAlignmentY();
	crp->getComponentAt(1, 2);
	crp->locate(1, 2);
	crp->getComponentAt($$new($Point, 1, 2));
	crp->isFocusCycleRoot($$new($Container));
	crp->transferFocusBackward();
	crp->setName("goober"_s);
	crp->getName();
	crp->getParent();
	crp->getGraphicsConfiguration();
	crp->getTreeLock();
	crp->getToolkit();
	crp->isValid();
	crp->isDisplayable();
	crp->isVisible();
	crp->isShowing();
	crp->isEnabled();
	crp->setEnabled(false);
	crp->setEnabled(true);
	crp->enable();
	crp->enable(false);
	crp->enable(true);
	crp->disable();
	crp->isDoubleBuffered();
	crp->enableInputMethods(false);
	crp->enableInputMethods(true);
	crp->setVisible(false);
	crp->setVisible(true);
	crp->show();
	crp->show(false);
	crp->show(true);
	crp->hide();
	crp->getForeground();
	$init($Color);
	crp->setForeground($Color::red);
	crp->isForegroundSet();
	crp->getBackground();
	crp->setBackground($Color::red);
	crp->isBackgroundSet();
	crp->getFont();
	crp->isFontSet();
	bool exceptions = false;
	try {
		$var($Container, c, $new($Container));
		c->add(static_cast<$Component*>(crp));
		crp->getLocale();
	} catch ($IllegalComponentStateException&) {
		$var($IllegalComponentStateException, e, $catch());
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			crp->setLocale(locale);
		}
	}
	crp->getColorModel();
	crp->getLocation();
	exceptions = false;
	try {
		crp->getLocationOnScreen();
	} catch ($IllegalComponentStateException&) {
		$var($IllegalComponentStateException, e, $catch());
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	crp->location();
	crp->setLocation(1, 2);
	crp->move(1, 2);
	crp->setLocation($$new($Point, 1, 2));
	crp->getSize();
	crp->size();
	crp->setSize(1, 32);
	crp->resize(1, 32);
	crp->setSize($$new($Dimension, 1, 32));
	crp->resize($$new($Dimension, 1, 32));
	crp->getBounds();
	crp->bounds();
	crp->setBounds(10, 10, 10, 10);
	crp->reshape(10, 10, 10, 10);
	crp->setBounds($$new($Rectangle, 10, 10, 10, 10));
	crp->getX();
	crp->getY();
	crp->getWidth();
	crp->getHeight();
	crp->getBounds($$new($Rectangle, 1, 1, 1, 1));
	crp->getSize($$new($Dimension, 1, 2));
	crp->getLocation($$new($Point, 1, 2));
	crp->isOpaque();
	crp->isLightweight();
	crp->getGraphics();
	crp->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	crp->getCursor();
	crp->isCursorSet();
	crp->contains(1, 2);
	crp->inside(1, 2);
	crp->contains($$new($Point, 1, 2));
	crp->isFocusTraversable();
	crp->isFocusable();
	crp->setFocusable(true);
	crp->setFocusable(false);
	crp->requestFocus();
	crp->requestFocusInWindow();
	crp->transferFocus();
	crp->getFocusCycleRootAncestor();
	crp->nextFocus();
	crp->transferFocusUpCycle();
	crp->hasFocus();
	crp->isFocusOwner();
	crp->toString();
	$init($ComponentOrientation);
	crp->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	crp->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	crp->setComponentOrientation($ComponentOrientation::UNKNOWN);
	crp->getComponentOrientation();
}

HeadlessCellRendererPane::HeadlessCellRendererPane() {
}

$Class* HeadlessCellRendererPane::load$($String* name, bool initialize) {
	$loadClass(HeadlessCellRendererPane, name, initialize, &_HeadlessCellRendererPane_ClassInfo_, allocate$HeadlessCellRendererPane);
	return class$;
}

$Class* HeadlessCellRendererPane::class$ = nullptr;