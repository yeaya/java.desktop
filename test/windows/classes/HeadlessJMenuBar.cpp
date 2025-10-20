#include <HeadlessJMenuBar.h>

#include <HeadlessJMenuBar$1.h>
#include <HeadlessJMenuBar$2.h>
#include <HeadlessJMenuBar$3.h>
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
#include <javax/swing/JMenuBar.h>
#include <jcpp.h>

#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $HeadlessJMenuBar$1 = ::HeadlessJMenuBar$1;
using $HeadlessJMenuBar$2 = ::HeadlessJMenuBar$2;
using $HeadlessJMenuBar$3 = ::HeadlessJMenuBar$3;
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
using $JMenuBar = ::javax::swing::JMenuBar;

$MethodInfo _HeadlessJMenuBar_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJMenuBar::*)()>(&HeadlessJMenuBar::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJMenuBar::main))},
	{}
};

$InnerClassInfo _HeadlessJMenuBar_InnerClassesInfo_[] = {
	{"HeadlessJMenuBar$3", nullptr, nullptr, 0},
	{"HeadlessJMenuBar$2", nullptr, nullptr, 0},
	{"HeadlessJMenuBar$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJMenuBar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJMenuBar",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJMenuBar_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessJMenuBar_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessJMenuBar$3,HeadlessJMenuBar$2,HeadlessJMenuBar$1"
};

$Object* allocate$HeadlessJMenuBar($Class* clazz) {
	return $of($alloc(HeadlessJMenuBar));
}

void HeadlessJMenuBar::init$() {
}

void HeadlessJMenuBar::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($JMenuBar, mb, $new($JMenuBar));
	mb->getAccessibleContext();
	mb->isFocusTraversable();
	mb->setEnabled(false);
	mb->setEnabled(true);
	mb->requestFocus();
	mb->requestFocusInWindow();
	mb->getPreferredSize();
	mb->getMaximumSize();
	mb->getMinimumSize();
	mb->contains(1, 2);
	$var($Component, c1, mb->add(static_cast<$Component*>($$new($HeadlessJMenuBar$1))));
	$var($Component, c2, mb->add(static_cast<$Component*>($$new($HeadlessJMenuBar$2))));
	$var($Component, c3, mb->add(static_cast<$Component*>($$new($HeadlessJMenuBar$3))));
	$var($Insets, ins, mb->getInsets());
	mb->getAlignmentY();
	mb->getAlignmentX();
	mb->getGraphics();
	mb->setVisible(false);
	mb->setVisible(true);
	$init($Color);
	mb->setForeground($Color::red);
	mb->setBackground($Color::red);
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
					mb->setFont(f1);
					mb->setFont(f2);
					mb->setFont(f3);
					mb->setFont(f4);
					mb->getFontMetrics(f1);
					mb->getFontMetrics(f2);
					mb->getFontMetrics(f3);
					mb->getFontMetrics(f4);
				}
			}
		}
	}
	mb->enable();
	mb->disable();
	mb->reshape(10, 10, 10, 10);
	mb->getBounds($$new($Rectangle, 1, 1, 1, 1));
	mb->getSize($$new($Dimension, 1, 2));
	mb->getLocation($$new($Point, 1, 2));
	mb->getX();
	mb->getY();
	mb->getWidth();
	mb->getHeight();
	mb->isOpaque();
	mb->isValidateRoot();
	mb->isOptimizedDrawingEnabled();
	mb->isDoubleBuffered();
	mb->getComponentCount();
	mb->countComponents();
	mb->getComponent(1);
	mb->getComponent(2);
	$var($ComponentArray, cs, mb->getComponents());
	mb->getLayout();
	mb->setLayout($$new($FlowLayout));
	mb->doLayout();
	mb->layout();
	mb->invalidate();
	mb->validate();
	mb->remove(0);
	mb->remove(c2);
	mb->removeAll();
	mb->preferredSize();
	mb->minimumSize();
	mb->getComponentAt(1, 2);
	mb->locate(1, 2);
	mb->getComponentAt($$new($Point, 1, 2));
	mb->isFocusCycleRoot($$new($Container));
	mb->transferFocusBackward();
	mb->setName("goober"_s);
	mb->getName();
	mb->getParent();
	mb->getGraphicsConfiguration();
	mb->getTreeLock();
	mb->getToolkit();
	mb->isValid();
	mb->isDisplayable();
	mb->isVisible();
	mb->isShowing();
	mb->isEnabled();
	mb->enable(false);
	mb->enable(true);
	mb->enableInputMethods(false);
	mb->enableInputMethods(true);
	mb->show();
	mb->show(false);
	mb->show(true);
	mb->hide();
	mb->getForeground();
	mb->isForegroundSet();
	mb->getBackground();
	mb->isBackgroundSet();
	mb->getFont();
	mb->isFontSet();
	$var($Container, c, $new($Container));
	c->add(static_cast<$Component*>(mb));
	mb->getLocale();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			mb->setLocale(locale);
		}
	}
	mb->getColorModel();
	mb->getLocation();
	bool exceptions = false;
	try {
		mb->getLocationOnScreen();
	} catch ($IllegalComponentStateException&) {
		$var($IllegalComponentStateException, e, $catch());
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	mb->location();
	mb->setLocation(1, 2);
	mb->move(1, 2);
	mb->setLocation($$new($Point, 1, 2));
	mb->getSize();
	mb->size();
	mb->setSize(1, 32);
	mb->resize(1, 32);
	mb->setSize($$new($Dimension, 1, 32));
	mb->resize($$new($Dimension, 1, 32));
	mb->getBounds();
	mb->bounds();
	mb->setBounds(10, 10, 10, 10);
	mb->setBounds($$new($Rectangle, 10, 10, 10, 10));
	mb->isLightweight();
	mb->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	mb->getCursor();
	mb->isCursorSet();
	mb->inside(1, 2);
	mb->contains($$new($Point, 1, 2));
	mb->isFocusable();
	mb->setFocusable(true);
	mb->setFocusable(false);
	mb->transferFocus();
	mb->getFocusCycleRootAncestor();
	mb->nextFocus();
	mb->transferFocusUpCycle();
	mb->hasFocus();
	mb->isFocusOwner();
	mb->toString();
	$init($ComponentOrientation);
	mb->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	mb->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	mb->setComponentOrientation($ComponentOrientation::UNKNOWN);
	mb->getComponentOrientation();
}

HeadlessJMenuBar::HeadlessJMenuBar() {
}

$Class* HeadlessJMenuBar::load$($String* name, bool initialize) {
	$loadClass(HeadlessJMenuBar, name, initialize, &_HeadlessJMenuBar_ClassInfo_, allocate$HeadlessJMenuBar);
	return class$;
}

$Class* HeadlessJMenuBar::class$ = nullptr;