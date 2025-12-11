#include <HeadlessJLabel.h>

#include <HeadlessJLabel$1.h>
#include <HeadlessJLabel$2.h>
#include <HeadlessJLabel$3.h>
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
#include <javax/swing/JLabel.h>
#include <jcpp.h>

#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $HeadlessJLabel$1 = ::HeadlessJLabel$1;
using $HeadlessJLabel$2 = ::HeadlessJLabel$2;
using $HeadlessJLabel$3 = ::HeadlessJLabel$3;
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
using $JLabel = ::javax::swing::JLabel;

$MethodInfo _HeadlessJLabel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJLabel::*)()>(&HeadlessJLabel::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJLabel::main))},
	{}
};

$InnerClassInfo _HeadlessJLabel_InnerClassesInfo_[] = {
	{"HeadlessJLabel$3", nullptr, nullptr, 0},
	{"HeadlessJLabel$2", nullptr, nullptr, 0},
	{"HeadlessJLabel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJLabel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJLabel",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJLabel_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessJLabel_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessJLabel$3,HeadlessJLabel$2,HeadlessJLabel$1"
};

$Object* allocate$HeadlessJLabel($Class* clazz) {
	return $of($alloc(HeadlessJLabel));
}

void HeadlessJLabel::init$() {
}

void HeadlessJLabel::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($JLabel, l, $new($JLabel, "<html><body><bold>Foo</bold></body></html>"_s));
	l->getAccessibleContext();
	l->isFocusTraversable();
	l->setEnabled(false);
	l->setEnabled(true);
	l->requestFocus();
	l->requestFocusInWindow();
	l->getPreferredSize();
	l->getMaximumSize();
	l->getMinimumSize();
	l->contains(1, 2);
	$var($Component, c1, l->add(static_cast<$Component*>($$new($HeadlessJLabel$1))));
	$var($Component, c2, l->add(static_cast<$Component*>($$new($HeadlessJLabel$2))));
	$var($Component, c3, l->add(static_cast<$Component*>($$new($HeadlessJLabel$3))));
	$var($Insets, ins, l->getInsets());
	l->getAlignmentY();
	l->getAlignmentX();
	l->getGraphics();
	l->setVisible(false);
	l->setVisible(true);
	$init($Color);
	l->setForeground($Color::red);
	l->setBackground($Color::red);
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
					l->setFont(f1);
					l->setFont(f2);
					l->setFont(f3);
					l->setFont(f4);
					l->getFontMetrics(f1);
					l->getFontMetrics(f2);
					l->getFontMetrics(f3);
					l->getFontMetrics(f4);
				}
			}
		}
	}
	l->enable();
	l->disable();
	l->reshape(10, 10, 10, 10);
	l->getBounds($$new($Rectangle, 1, 1, 1, 1));
	l->getSize($$new($Dimension, 1, 2));
	l->getLocation($$new($Point, 1, 2));
	l->getX();
	l->getY();
	l->getWidth();
	l->getHeight();
	l->isOpaque();
	l->isValidateRoot();
	l->isOptimizedDrawingEnabled();
	l->isDoubleBuffered();
	l->getComponentCount();
	l->countComponents();
	l->getComponent(1);
	l->getComponent(2);
	$var($ComponentArray, cs, l->getComponents());
	l->getLayout();
	l->setLayout($$new($FlowLayout));
	l->doLayout();
	l->layout();
	l->invalidate();
	l->validate();
	l->remove(0);
	l->remove(c2);
	l->removeAll();
	l->preferredSize();
	l->minimumSize();
	l->getComponentAt(1, 2);
	l->locate(1, 2);
	l->getComponentAt($$new($Point, 1, 2));
	l->isFocusCycleRoot($$new($Container));
	l->transferFocusBackward();
	l->setName("goober"_s);
	l->getName();
	l->getParent();
	l->getGraphicsConfiguration();
	l->getTreeLock();
	l->getToolkit();
	l->isValid();
	l->isDisplayable();
	l->isVisible();
	l->isShowing();
	l->isEnabled();
	l->enable(false);
	l->enable(true);
	l->enableInputMethods(false);
	l->enableInputMethods(true);
	l->show();
	l->show(false);
	l->show(true);
	l->hide();
	l->getForeground();
	l->isForegroundSet();
	l->getBackground();
	l->isBackgroundSet();
	l->getFont();
	l->isFontSet();
	$var($Container, c, $new($Container));
	c->add(static_cast<$Component*>(l));
	l->getLocale();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			l->setLocale(locale);
		}
	}
	l->getColorModel();
	l->getLocation();
	bool exceptions = false;
	try {
		l->getLocationOnScreen();
	} catch ($IllegalComponentStateException& e) {
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	l->location();
	l->setLocation(1, 2);
	l->move(1, 2);
	l->setLocation($$new($Point, 1, 2));
	l->getSize();
	l->size();
	l->setSize(1, 32);
	l->resize(1, 32);
	l->setSize($$new($Dimension, 1, 32));
	l->resize($$new($Dimension, 1, 32));
	l->getBounds();
	l->bounds();
	l->setBounds(10, 10, 10, 10);
	l->setBounds($$new($Rectangle, 10, 10, 10, 10));
	l->isLightweight();
	l->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	l->getCursor();
	l->isCursorSet();
	l->inside(1, 2);
	l->contains($$new($Point, 1, 2));
	l->isFocusable();
	l->setFocusable(true);
	l->setFocusable(false);
	l->transferFocus();
	l->getFocusCycleRootAncestor();
	l->nextFocus();
	l->transferFocusUpCycle();
	l->hasFocus();
	l->isFocusOwner();
	l->toString();
	$init($ComponentOrientation);
	l->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	l->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	l->setComponentOrientation($ComponentOrientation::UNKNOWN);
	l->getComponentOrientation();
}

HeadlessJLabel::HeadlessJLabel() {
}

$Class* HeadlessJLabel::load$($String* name, bool initialize) {
	$loadClass(HeadlessJLabel, name, initialize, &_HeadlessJLabel_ClassInfo_, allocate$HeadlessJLabel);
	return class$;
}

$Class* HeadlessJLabel::class$ = nullptr;