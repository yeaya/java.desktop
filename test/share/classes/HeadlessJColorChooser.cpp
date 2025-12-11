#include <HeadlessJColorChooser.h>

#include <HeadlessJColorChooser$1.h>
#include <HeadlessJColorChooser$2.h>
#include <HeadlessJColorChooser$3.h>
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
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $HeadlessJColorChooser$1 = ::HeadlessJColorChooser$1;
using $HeadlessJColorChooser$2 = ::HeadlessJColorChooser$2;
using $HeadlessJColorChooser$3 = ::HeadlessJColorChooser$3;
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
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent = ::javax::swing::JComponent;

$MethodInfo _HeadlessJColorChooser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJColorChooser::*)()>(&HeadlessJColorChooser::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJColorChooser::main))},
	{}
};

$InnerClassInfo _HeadlessJColorChooser_InnerClassesInfo_[] = {
	{"HeadlessJColorChooser$3", nullptr, nullptr, 0},
	{"HeadlessJColorChooser$2", nullptr, nullptr, 0},
	{"HeadlessJColorChooser$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJColorChooser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJColorChooser",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJColorChooser_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessJColorChooser_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessJColorChooser$3,HeadlessJColorChooser$2,HeadlessJColorChooser$1"
};

$Object* allocate$HeadlessJColorChooser($Class* clazz) {
	return $of($alloc(HeadlessJColorChooser));
}

void HeadlessJColorChooser::init$() {
}

void HeadlessJColorChooser::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($JColorChooser, cc, nullptr);
	$assign(cc, $new($JColorChooser));
	cc->getAccessibleContext();
	cc->isFocusTraversable();
	cc->setEnabled(false);
	cc->setEnabled(true);
	cc->requestFocus();
	cc->requestFocusInWindow();
	cc->getPreferredSize();
	cc->getMaximumSize();
	cc->getMinimumSize();
	cc->contains(1, 2);
	$var($Component, c1, cc->add(static_cast<$Component*>($$new($HeadlessJColorChooser$1))));
	$var($Component, c2, cc->add(static_cast<$Component*>($$new($HeadlessJColorChooser$2))));
	$var($Component, c3, cc->add(static_cast<$Component*>($$new($HeadlessJColorChooser$3))));
	$var($Insets, ins, cc->getInsets());
	cc->getAlignmentY();
	cc->getAlignmentX();
	cc->getGraphics();
	cc->setVisible(false);
	cc->setVisible(true);
	$init($Color);
	cc->setForeground($Color::red);
	cc->setBackground($Color::red);
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
					cc->setFont(f1);
					cc->setFont(f2);
					cc->setFont(f3);
					cc->setFont(f4);
					cc->getFontMetrics(f1);
					cc->getFontMetrics(f2);
					cc->getFontMetrics(f3);
					cc->getFontMetrics(f4);
				}
			}
		}
	}
	cc->enable();
	cc->disable();
	cc->reshape(10, 10, 10, 10);
	cc->getBounds($$new($Rectangle, 1, 1, 1, 1));
	cc->getSize($$new($Dimension, 1, 2));
	cc->getLocation($$new($Point, 1, 2));
	cc->getX();
	cc->getY();
	cc->getWidth();
	cc->getHeight();
	cc->isOpaque();
	cc->isValidateRoot();
	cc->isOptimizedDrawingEnabled();
	cc->isDoubleBuffered();
	cc->getComponentCount();
	cc->countComponents();
	cc->getComponent(1);
	cc->getComponent(2);
	$var($ComponentArray, cs, cc->getComponents());
	cc->getLayout();
	cc->setLayout($$new($FlowLayout));
	cc->doLayout();
	cc->layout();
	cc->invalidate();
	cc->validate();
	cc->remove(0);
	cc->remove(c2);
	cc->removeAll();
	cc->preferredSize();
	cc->minimumSize();
	cc->getComponentAt(1, 2);
	cc->locate(1, 2);
	cc->getComponentAt($$new($Point, 1, 2));
	cc->isFocusCycleRoot($$new($Container));
	cc->transferFocusBackward();
	cc->setName("goober"_s);
	cc->getName();
	cc->getParent();
	cc->getGraphicsConfiguration();
	cc->getTreeLock();
	cc->getToolkit();
	cc->isValid();
	cc->isDisplayable();
	cc->isVisible();
	cc->isShowing();
	cc->isEnabled();
	cc->enable(false);
	cc->enable(true);
	cc->enableInputMethods(false);
	cc->enableInputMethods(true);
	cc->show();
	cc->show(false);
	cc->show(true);
	cc->hide();
	cc->getForeground();
	cc->isForegroundSet();
	cc->getBackground();
	cc->isBackgroundSet();
	cc->getFont();
	cc->isFontSet();
	$var($Container, c, $new($Container));
	c->add(static_cast<$Component*>(cc));
	cc->getLocale();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			cc->setLocale(locale);
		}
	}
	cc->getColorModel();
	cc->getLocation();
	bool exceptions = false;
	try {
		cc->getLocationOnScreen();
	} catch ($IllegalComponentStateException& e) {
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	cc->location();
	cc->setLocation(1, 2);
	cc->move(1, 2);
	cc->setLocation($$new($Point, 1, 2));
	cc->getSize();
	cc->size();
	cc->setSize(1, 32);
	cc->resize(1, 32);
	cc->setSize($$new($Dimension, 1, 32));
	cc->resize($$new($Dimension, 1, 32));
	cc->getBounds();
	cc->bounds();
	cc->setBounds(10, 10, 10, 10);
	cc->setBounds($$new($Rectangle, 10, 10, 10, 10));
	cc->isLightweight();
	cc->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	cc->getCursor();
	cc->isCursorSet();
	cc->inside(1, 2);
	cc->contains($$new($Point, 1, 2));
	cc->isFocusable();
	cc->setFocusable(true);
	cc->setFocusable(false);
	cc->transferFocus();
	cc->getFocusCycleRootAncestor();
	cc->nextFocus();
	cc->transferFocusUpCycle();
	cc->hasFocus();
	cc->isFocusOwner();
	cc->toString();
	$init($ComponentOrientation);
	cc->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	cc->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	cc->setComponentOrientation($ComponentOrientation::UNKNOWN);
	cc->getComponentOrientation();
}

HeadlessJColorChooser::HeadlessJColorChooser() {
}

$Class* HeadlessJColorChooser::load$($String* name, bool initialize) {
	$loadClass(HeadlessJColorChooser, name, initialize, &_HeadlessJColorChooser_ClassInfo_, allocate$HeadlessJColorChooser);
	return class$;
}

$Class* HeadlessJColorChooser::class$ = nullptr;