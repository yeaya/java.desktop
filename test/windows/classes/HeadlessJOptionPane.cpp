#include <HeadlessJOptionPane.h>

#include <HeadlessJOptionPane$1.h>
#include <HeadlessJOptionPane$2.h>
#include <HeadlessJOptionPane$3.h>
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
#include <javax/swing/JOptionPane.h>
#include <jcpp.h>

#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $HeadlessJOptionPane$1 = ::HeadlessJOptionPane$1;
using $HeadlessJOptionPane$2 = ::HeadlessJOptionPane$2;
using $HeadlessJOptionPane$3 = ::HeadlessJOptionPane$3;
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
using $JOptionPane = ::javax::swing::JOptionPane;

$MethodInfo _HeadlessJOptionPane_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJOptionPane::*)()>(&HeadlessJOptionPane::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJOptionPane::main))},
	{}
};

$InnerClassInfo _HeadlessJOptionPane_InnerClassesInfo_[] = {
	{"HeadlessJOptionPane$3", nullptr, nullptr, 0},
	{"HeadlessJOptionPane$2", nullptr, nullptr, 0},
	{"HeadlessJOptionPane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJOptionPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJOptionPane",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJOptionPane_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessJOptionPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessJOptionPane$3,HeadlessJOptionPane$2,HeadlessJOptionPane$1"
};

$Object* allocate$HeadlessJOptionPane($Class* clazz) {
	return $of($alloc(HeadlessJOptionPane));
}

void HeadlessJOptionPane::init$() {
}

void HeadlessJOptionPane::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($JOptionPane, op, $new($JOptionPane));
	op->getAccessibleContext();
	op->isFocusTraversable();
	op->setEnabled(false);
	op->setEnabled(true);
	op->requestFocus();
	op->requestFocusInWindow();
	op->getPreferredSize();
	op->getMaximumSize();
	op->getMinimumSize();
	op->contains(1, 2);
	$var($Component, c1, op->add(static_cast<$Component*>($$new($HeadlessJOptionPane$1))));
	$var($Component, c2, op->add(static_cast<$Component*>($$new($HeadlessJOptionPane$2))));
	$var($Component, c3, op->add(static_cast<$Component*>($$new($HeadlessJOptionPane$3))));
	$var($Insets, ins, op->getInsets());
	op->getAlignmentY();
	op->getAlignmentX();
	op->getGraphics();
	op->setVisible(false);
	op->setVisible(true);
	$init($Color);
	op->setForeground($Color::red);
	op->setBackground($Color::red);
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
					op->setFont(f1);
					op->setFont(f2);
					op->setFont(f3);
					op->setFont(f4);
					op->getFontMetrics(f1);
					op->getFontMetrics(f2);
					op->getFontMetrics(f3);
					op->getFontMetrics(f4);
				}
			}
		}
	}
	op->enable();
	op->disable();
	op->reshape(10, 10, 10, 10);
	op->getBounds($$new($Rectangle, 1, 1, 1, 1));
	op->getSize($$new($Dimension, 1, 2));
	op->getLocation($$new($Point, 1, 2));
	op->getX();
	op->getY();
	op->getWidth();
	op->getHeight();
	op->isOpaque();
	op->isValidateRoot();
	op->isOptimizedDrawingEnabled();
	op->isDoubleBuffered();
	op->getComponentCount();
	op->countComponents();
	op->getComponent(1);
	op->getComponent(2);
	$var($ComponentArray, cs, op->getComponents());
	op->getLayout();
	op->setLayout($$new($FlowLayout));
	op->doLayout();
	op->layout();
	op->invalidate();
	op->validate();
	op->remove(0);
	op->remove(c2);
	op->removeAll();
	op->preferredSize();
	op->minimumSize();
	op->getComponentAt(1, 2);
	op->locate(1, 2);
	op->getComponentAt($$new($Point, 1, 2));
	op->isFocusCycleRoot($$new($Container));
	op->transferFocusBackward();
	op->setName("goober"_s);
	op->getName();
	op->getParent();
	op->getGraphicsConfiguration();
	op->getTreeLock();
	op->getToolkit();
	op->isValid();
	op->isDisplayable();
	op->isVisible();
	op->isShowing();
	op->isEnabled();
	op->enable(false);
	op->enable(true);
	op->enableInputMethods(false);
	op->enableInputMethods(true);
	op->show();
	op->show(false);
	op->show(true);
	op->hide();
	op->getForeground();
	op->isForegroundSet();
	op->getBackground();
	op->isBackgroundSet();
	op->getFont();
	op->isFontSet();
	$var($Container, c, $new($Container));
	c->add(static_cast<$Component*>(op));
	op->getLocale();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			op->setLocale(locale);
		}
	}
	op->getColorModel();
	op->getLocation();
	bool exceptions = false;
	try {
		op->getLocationOnScreen();
	} catch ($IllegalComponentStateException&) {
		$var($IllegalComponentStateException, e, $catch());
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	op->location();
	op->setLocation(1, 2);
	op->move(1, 2);
	op->setLocation($$new($Point, 1, 2));
	op->getSize();
	op->size();
	op->setSize(1, 32);
	op->resize(1, 32);
	op->setSize($$new($Dimension, 1, 32));
	op->resize($$new($Dimension, 1, 32));
	op->getBounds();
	op->bounds();
	op->setBounds(10, 10, 10, 10);
	op->setBounds($$new($Rectangle, 10, 10, 10, 10));
	op->isLightweight();
	op->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	op->getCursor();
	op->isCursorSet();
	op->inside(1, 2);
	op->contains($$new($Point, 1, 2));
	op->isFocusable();
	op->setFocusable(true);
	op->setFocusable(false);
	op->transferFocus();
	op->getFocusCycleRootAncestor();
	op->nextFocus();
	op->transferFocusUpCycle();
	op->hasFocus();
	op->isFocusOwner();
	op->toString();
	$init($ComponentOrientation);
	op->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	op->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	op->setComponentOrientation($ComponentOrientation::UNKNOWN);
	op->getComponentOrientation();
}

HeadlessJOptionPane::HeadlessJOptionPane() {
}

$Class* HeadlessJOptionPane::load$($String* name, bool initialize) {
	$loadClass(HeadlessJOptionPane, name, initialize, &_HeadlessJOptionPane_ClassInfo_, allocate$HeadlessJOptionPane);
	return class$;
}

$Class* HeadlessJOptionPane::class$ = nullptr;