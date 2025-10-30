#include <HeadlessJProgressBar.h>

#include <HeadlessJProgressBar$1.h>
#include <HeadlessJProgressBar$2.h>
#include <HeadlessJProgressBar$3.h>
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
#include <javax/swing/JProgressBar.h>
#include <jcpp.h>

#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $HeadlessJProgressBar$1 = ::HeadlessJProgressBar$1;
using $HeadlessJProgressBar$2 = ::HeadlessJProgressBar$2;
using $HeadlessJProgressBar$3 = ::HeadlessJProgressBar$3;
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
using $JProgressBar = ::javax::swing::JProgressBar;

$MethodInfo _HeadlessJProgressBar_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJProgressBar::*)()>(&HeadlessJProgressBar::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJProgressBar::main))},
	{}
};

$InnerClassInfo _HeadlessJProgressBar_InnerClassesInfo_[] = {
	{"HeadlessJProgressBar$3", nullptr, nullptr, 0},
	{"HeadlessJProgressBar$2", nullptr, nullptr, 0},
	{"HeadlessJProgressBar$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJProgressBar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJProgressBar",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJProgressBar_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessJProgressBar_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessJProgressBar$3,HeadlessJProgressBar$2,HeadlessJProgressBar$1"
};

$Object* allocate$HeadlessJProgressBar($Class* clazz) {
	return $of($alloc(HeadlessJProgressBar));
}

void HeadlessJProgressBar::init$() {
}

void HeadlessJProgressBar::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($JProgressBar, pb, $new($JProgressBar));
	pb->getAccessibleContext();
	pb->isFocusTraversable();
	pb->setEnabled(false);
	pb->setEnabled(true);
	pb->requestFocus();
	pb->requestFocusInWindow();
	pb->getPreferredSize();
	pb->getMaximumSize();
	pb->getMinimumSize();
	pb->contains(1, 2);
	$var($Component, c1, pb->add(static_cast<$Component*>($$new($HeadlessJProgressBar$1))));
	$var($Component, c2, pb->add(static_cast<$Component*>($$new($HeadlessJProgressBar$2))));
	$var($Component, c3, pb->add(static_cast<$Component*>($$new($HeadlessJProgressBar$3))));
	$var($Insets, ins, pb->getInsets());
	pb->getAlignmentY();
	pb->getAlignmentX();
	pb->getGraphics();
	pb->setVisible(false);
	pb->setVisible(true);
	$init($Color);
	pb->setForeground($Color::red);
	pb->setBackground($Color::red);
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
					pb->setFont(f1);
					pb->setFont(f2);
					pb->setFont(f3);
					pb->setFont(f4);
					pb->getFontMetrics(f1);
					pb->getFontMetrics(f2);
					pb->getFontMetrics(f3);
					pb->getFontMetrics(f4);
				}
			}
		}
	}
	pb->enable();
	pb->disable();
	pb->reshape(10, 10, 10, 10);
	pb->getBounds($$new($Rectangle, 1, 1, 1, 1));
	pb->getSize($$new($Dimension, 1, 2));
	pb->getLocation($$new($Point, 1, 2));
	pb->getX();
	pb->getY();
	pb->getWidth();
	pb->getHeight();
	pb->isOpaque();
	pb->isValidateRoot();
	pb->isOptimizedDrawingEnabled();
	pb->isDoubleBuffered();
	pb->getComponentCount();
	pb->countComponents();
	pb->getComponent(1);
	pb->getComponent(2);
	$var($ComponentArray, cs, pb->getComponents());
	pb->getLayout();
	pb->setLayout($$new($FlowLayout));
	pb->doLayout();
	pb->layout();
	pb->invalidate();
	pb->validate();
	pb->remove(0);
	pb->remove(c2);
	pb->removeAll();
	pb->preferredSize();
	pb->minimumSize();
	pb->getComponentAt(1, 2);
	pb->locate(1, 2);
	pb->getComponentAt($$new($Point, 1, 2));
	pb->isFocusCycleRoot($$new($Container));
	pb->transferFocusBackward();
	pb->setName("goober"_s);
	pb->getName();
	pb->getParent();
	pb->getGraphicsConfiguration();
	pb->getTreeLock();
	pb->getToolkit();
	pb->isValid();
	pb->isDisplayable();
	pb->isVisible();
	pb->isShowing();
	pb->isEnabled();
	pb->enable(false);
	pb->enable(true);
	pb->enableInputMethods(false);
	pb->enableInputMethods(true);
	pb->show();
	pb->show(false);
	pb->show(true);
	pb->hide();
	pb->getForeground();
	pb->isForegroundSet();
	pb->getBackground();
	pb->isBackgroundSet();
	pb->getFont();
	pb->isFontSet();
	$var($Container, c, $new($Container));
	c->add(static_cast<$Component*>(pb));
	pb->getLocale();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			pb->setLocale(locale);
		}
	}
	pb->getColorModel();
	pb->getLocation();
	bool exceptions = false;
	try {
		pb->getLocationOnScreen();
	} catch ($IllegalComponentStateException& e) {
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	pb->location();
	pb->setLocation(1, 2);
	pb->move(1, 2);
	pb->setLocation($$new($Point, 1, 2));
	pb->getSize();
	pb->size();
	pb->setSize(1, 32);
	pb->resize(1, 32);
	pb->setSize($$new($Dimension, 1, 32));
	pb->resize($$new($Dimension, 1, 32));
	pb->getBounds();
	pb->bounds();
	pb->setBounds(10, 10, 10, 10);
	pb->setBounds($$new($Rectangle, 10, 10, 10, 10));
	pb->isLightweight();
	pb->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	pb->getCursor();
	pb->isCursorSet();
	pb->inside(1, 2);
	pb->contains($$new($Point, 1, 2));
	pb->isFocusable();
	pb->setFocusable(true);
	pb->setFocusable(false);
	pb->transferFocus();
	pb->getFocusCycleRootAncestor();
	pb->nextFocus();
	pb->transferFocusUpCycle();
	pb->hasFocus();
	pb->isFocusOwner();
	pb->toString();
	$init($ComponentOrientation);
	pb->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	pb->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	pb->setComponentOrientation($ComponentOrientation::UNKNOWN);
	pb->getComponentOrientation();
}

HeadlessJProgressBar::HeadlessJProgressBar() {
}

$Class* HeadlessJProgressBar::load$($String* name, bool initialize) {
	$loadClass(HeadlessJProgressBar, name, initialize, &_HeadlessJProgressBar_ClassInfo_, allocate$HeadlessJProgressBar);
	return class$;
}

$Class* HeadlessJProgressBar::class$ = nullptr;