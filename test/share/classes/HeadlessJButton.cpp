#include <HeadlessJButton.h>

#include <HeadlessJButton$1.h>
#include <HeadlessJButton$2.h>
#include <HeadlessJButton$3.h>
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
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $HeadlessJButton$1 = ::HeadlessJButton$1;
using $HeadlessJButton$2 = ::HeadlessJButton$2;
using $HeadlessJButton$3 = ::HeadlessJButton$3;
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
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;

$MethodInfo _HeadlessJButton_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJButton::*)()>(&HeadlessJButton::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJButton::main))},
	{}
};

$InnerClassInfo _HeadlessJButton_InnerClassesInfo_[] = {
	{"HeadlessJButton$3", nullptr, nullptr, 0},
	{"HeadlessJButton$2", nullptr, nullptr, 0},
	{"HeadlessJButton$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJButton_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJButton",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJButton_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessJButton_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessJButton$3,HeadlessJButton$2,HeadlessJButton$1"
};

$Object* allocate$HeadlessJButton($Class* clazz) {
	return $of($alloc(HeadlessJButton));
}

void HeadlessJButton::init$() {
}

void HeadlessJButton::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($JButton, b, $new($JButton));
	$assign(b, $new($JButton, "Press me"_s));
	b->getAccessibleContext();
	b->isFocusTraversable();
	b->setEnabled(false);
	b->setEnabled(true);
	b->requestFocus();
	b->requestFocusInWindow();
	b->getPreferredSize();
	b->getMaximumSize();
	b->getMinimumSize();
	b->contains(1, 2);
	$var($Component, c1, b->add(static_cast<$Component*>($$new($HeadlessJButton$1))));
	$var($Component, c2, b->add(static_cast<$Component*>($$new($HeadlessJButton$2))));
	$var($Component, c3, b->add(static_cast<$Component*>($$new($HeadlessJButton$3))));
	$var($Insets, ins, b->getInsets());
	b->getAlignmentY();
	b->getAlignmentX();
	b->getGraphics();
	b->setVisible(false);
	b->setVisible(true);
	$init($Color);
	b->setForeground($Color::red);
	b->setBackground($Color::red);
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
					b->setFont(f1);
					b->setFont(f2);
					b->setFont(f3);
					b->setFont(f4);
					b->getFontMetrics(f1);
					b->getFontMetrics(f2);
					b->getFontMetrics(f3);
					b->getFontMetrics(f4);
				}
			}
		}
	}
	b->enable();
	b->disable();
	b->reshape(10, 10, 10, 10);
	b->getBounds($$new($Rectangle, 1, 1, 1, 1));
	b->getSize($$new($Dimension, 1, 2));
	b->getLocation($$new($Point, 1, 2));
	b->getX();
	b->getY();
	b->getWidth();
	b->getHeight();
	b->isOpaque();
	b->isValidateRoot();
	b->isOptimizedDrawingEnabled();
	b->isDoubleBuffered();
	b->getComponentCount();
	b->countComponents();
	b->getComponent(1);
	b->getComponent(2);
	$var($ComponentArray, cs, b->getComponents());
	b->getLayout();
	b->setLayout($$new($FlowLayout));
	b->doLayout();
	b->layout();
	b->invalidate();
	b->validate();
	b->remove(0);
	b->remove(c2);
	b->removeAll();
	b->preferredSize();
	b->minimumSize();
	b->getComponentAt(1, 2);
	b->locate(1, 2);
	b->getComponentAt($$new($Point, 1, 2));
	b->isFocusCycleRoot($$new($Container));
	b->transferFocusBackward();
	b->setName("goober"_s);
	b->getName();
	b->getParent();
	b->getGraphicsConfiguration();
	b->getTreeLock();
	b->getToolkit();
	b->isValid();
	b->isDisplayable();
	b->isVisible();
	b->isShowing();
	b->isEnabled();
	b->enable(false);
	b->enable(true);
	b->enableInputMethods(false);
	b->enableInputMethods(true);
	b->show();
	b->show(false);
	b->show(true);
	b->hide();
	b->getForeground();
	b->isForegroundSet();
	b->getBackground();
	b->isBackgroundSet();
	b->getFont();
	b->isFontSet();
	$var($Container, c, $new($Container));
	c->add(static_cast<$Component*>(b));
	b->getLocale();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			b->setLocale(locale);
		}
	}
	b->getColorModel();
	b->getLocation();
	bool exceptions = false;
	try {
		b->getLocationOnScreen();
	} catch ($IllegalComponentStateException& e) {
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	b->location();
	b->setLocation(1, 2);
	b->move(1, 2);
	b->setLocation($$new($Point, 1, 2));
	b->getSize();
	b->size();
	b->setSize(1, 32);
	b->resize(1, 32);
	b->setSize($$new($Dimension, 1, 32));
	b->resize($$new($Dimension, 1, 32));
	b->getBounds();
	b->bounds();
	b->setBounds(10, 10, 10, 10);
	b->setBounds($$new($Rectangle, 10, 10, 10, 10));
	b->isLightweight();
	b->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	b->getCursor();
	b->isCursorSet();
	b->inside(1, 2);
	b->contains($$new($Point, 1, 2));
	b->isFocusable();
	b->setFocusable(true);
	b->setFocusable(false);
	b->transferFocus();
	b->getFocusCycleRootAncestor();
	b->nextFocus();
	b->transferFocusUpCycle();
	b->hasFocus();
	b->isFocusOwner();
	b->toString();
	$init($ComponentOrientation);
	b->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	b->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	b->setComponentOrientation($ComponentOrientation::UNKNOWN);
	b->getComponentOrientation();
}

HeadlessJButton::HeadlessJButton() {
}

$Class* HeadlessJButton::load$($String* name, bool initialize) {
	$loadClass(HeadlessJButton, name, initialize, &_HeadlessJButton_ClassInfo_, allocate$HeadlessJButton);
	return class$;
}

$Class* HeadlessJButton::class$ = nullptr;