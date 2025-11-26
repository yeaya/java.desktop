#include <HeadlessJScrollBar.h>

#include <HeadlessJScrollBar$1.h>
#include <HeadlessJScrollBar$2.h>
#include <HeadlessJScrollBar$3.h>
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
#include <javax/swing/JScrollBar.h>
#include <jcpp.h>

#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $HeadlessJScrollBar$1 = ::HeadlessJScrollBar$1;
using $HeadlessJScrollBar$2 = ::HeadlessJScrollBar$2;
using $HeadlessJScrollBar$3 = ::HeadlessJScrollBar$3;
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
using $JScrollBar = ::javax::swing::JScrollBar;

$MethodInfo _HeadlessJScrollBar_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJScrollBar::*)()>(&HeadlessJScrollBar::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJScrollBar::main))},
	{}
};

$InnerClassInfo _HeadlessJScrollBar_InnerClassesInfo_[] = {
	{"HeadlessJScrollBar$3", nullptr, nullptr, 0},
	{"HeadlessJScrollBar$2", nullptr, nullptr, 0},
	{"HeadlessJScrollBar$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJScrollBar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJScrollBar",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJScrollBar_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessJScrollBar_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessJScrollBar$3,HeadlessJScrollBar$2,HeadlessJScrollBar$1"
};

$Object* allocate$HeadlessJScrollBar($Class* clazz) {
	return $of($alloc(HeadlessJScrollBar));
}

void HeadlessJScrollBar::init$() {
}

void HeadlessJScrollBar::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($JScrollBar, sb, $new($JScrollBar));
	sb->getAccessibleContext();
	sb->isFocusTraversable();
	sb->setEnabled(false);
	sb->setEnabled(true);
	sb->requestFocus();
	sb->requestFocusInWindow();
	sb->getPreferredSize();
	sb->getMaximumSize();
	sb->getMinimumSize();
	sb->contains(1, 2);
	$var($Component, c1, sb->add(static_cast<$Component*>($$new($HeadlessJScrollBar$1))));
	$var($Component, c2, sb->add(static_cast<$Component*>($$new($HeadlessJScrollBar$2))));
	$var($Component, c3, sb->add(static_cast<$Component*>($$new($HeadlessJScrollBar$3))));
	$var($Insets, ins, sb->getInsets());
	sb->getAlignmentY();
	sb->getAlignmentX();
	sb->getGraphics();
	sb->setVisible(false);
	sb->setVisible(true);
	$init($Color);
	sb->setForeground($Color::red);
	sb->setBackground($Color::red);
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
					sb->setFont(f1);
					sb->setFont(f2);
					sb->setFont(f3);
					sb->setFont(f4);
					sb->getFontMetrics(f1);
					sb->getFontMetrics(f2);
					sb->getFontMetrics(f3);
					sb->getFontMetrics(f4);
				}
			}
		}
	}
	sb->enable();
	sb->disable();
	sb->reshape(10, 10, 10, 10);
	sb->getBounds($$new($Rectangle, 1, 1, 1, 1));
	sb->getSize($$new($Dimension, 1, 2));
	sb->getLocation($$new($Point, 1, 2));
	sb->getX();
	sb->getY();
	sb->getWidth();
	sb->getHeight();
	sb->isOpaque();
	sb->isValidateRoot();
	sb->isOptimizedDrawingEnabled();
	sb->isDoubleBuffered();
	sb->getComponentCount();
	sb->countComponents();
	sb->getComponent(1);
	sb->getComponent(2);
	$var($ComponentArray, cs, sb->getComponents());
	sb->getLayout();
	sb->setLayout($$new($FlowLayout));
	sb->doLayout();
	sb->layout();
	sb->invalidate();
	sb->validate();
	sb->remove(0);
	sb->remove(c2);
	sb->removeAll();
	sb->preferredSize();
	sb->minimumSize();
	sb->getComponentAt(1, 2);
	sb->locate(1, 2);
	sb->getComponentAt($$new($Point, 1, 2));
	sb->isFocusCycleRoot($$new($Container));
	sb->transferFocusBackward();
	sb->setName("goober"_s);
	sb->getName();
	sb->getParent();
	sb->getGraphicsConfiguration();
	sb->getTreeLock();
	sb->getToolkit();
	sb->isValid();
	sb->isDisplayable();
	sb->isVisible();
	sb->isShowing();
	sb->isEnabled();
	sb->enable(false);
	sb->enable(true);
	sb->enableInputMethods(false);
	sb->enableInputMethods(true);
	sb->show();
	sb->show(false);
	sb->show(true);
	sb->hide();
	sb->getForeground();
	sb->isForegroundSet();
	sb->getBackground();
	sb->isBackgroundSet();
	sb->getFont();
	sb->isFontSet();
	$var($Container, c, $new($Container));
	c->add(static_cast<$Component*>(sb));
	sb->getLocale();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			sb->setLocale(locale);
		}
	}
	sb->getColorModel();
	sb->getLocation();
	bool exceptions = false;
	try {
		sb->getLocationOnScreen();
	} catch ($IllegalComponentStateException& e) {
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	sb->location();
	sb->setLocation(1, 2);
	sb->move(1, 2);
	sb->setLocation($$new($Point, 1, 2));
	sb->getSize();
	sb->size();
	sb->setSize(1, 32);
	sb->resize(1, 32);
	sb->setSize($$new($Dimension, 1, 32));
	sb->resize($$new($Dimension, 1, 32));
	sb->getBounds();
	sb->bounds();
	sb->setBounds(10, 10, 10, 10);
	sb->setBounds($$new($Rectangle, 10, 10, 10, 10));
	sb->isLightweight();
	sb->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	sb->getCursor();
	sb->isCursorSet();
	sb->inside(1, 2);
	sb->contains($$new($Point, 1, 2));
	sb->isFocusable();
	sb->setFocusable(true);
	sb->setFocusable(false);
	sb->transferFocus();
	sb->getFocusCycleRootAncestor();
	sb->nextFocus();
	sb->transferFocusUpCycle();
	sb->hasFocus();
	sb->isFocusOwner();
	sb->toString();
	$init($ComponentOrientation);
	sb->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	sb->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	sb->setComponentOrientation($ComponentOrientation::UNKNOWN);
	sb->getComponentOrientation();
}

HeadlessJScrollBar::HeadlessJScrollBar() {
}

$Class* HeadlessJScrollBar::load$($String* name, bool initialize) {
	$loadClass(HeadlessJScrollBar, name, initialize, &_HeadlessJScrollBar_ClassInfo_, allocate$HeadlessJScrollBar);
	return class$;
}

$Class* HeadlessJScrollBar::class$ = nullptr;