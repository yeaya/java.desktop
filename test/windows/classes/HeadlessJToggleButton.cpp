#include <HeadlessJToggleButton.h>

#include <HeadlessJToggleButton$1.h>
#include <HeadlessJToggleButton$2.h>
#include <HeadlessJToggleButton$3.h>
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
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToggleButton.h>
#include <jcpp.h>

#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $HeadlessJToggleButton$1 = ::HeadlessJToggleButton$1;
using $HeadlessJToggleButton$2 = ::HeadlessJToggleButton$2;
using $HeadlessJToggleButton$3 = ::HeadlessJToggleButton$3;
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
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $JToggleButton = ::javax::swing::JToggleButton;

$MethodInfo _HeadlessJToggleButton_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJToggleButton::*)()>(&HeadlessJToggleButton::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJToggleButton::main))},
	{}
};

$InnerClassInfo _HeadlessJToggleButton_InnerClassesInfo_[] = {
	{"HeadlessJToggleButton$3", nullptr, nullptr, 0},
	{"HeadlessJToggleButton$2", nullptr, nullptr, 0},
	{"HeadlessJToggleButton$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJToggleButton_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJToggleButton",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJToggleButton_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessJToggleButton_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessJToggleButton$3,HeadlessJToggleButton$2,HeadlessJToggleButton$1"
};

$Object* allocate$HeadlessJToggleButton($Class* clazz) {
	return $of($alloc(HeadlessJToggleButton));
}

void HeadlessJToggleButton::init$() {
}

void HeadlessJToggleButton::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($JToggleButton, tb, $new($JToggleButton));
	tb->getAccessibleContext();
	tb->isFocusTraversable();
	tb->setEnabled(false);
	tb->setEnabled(true);
	tb->requestFocus();
	tb->requestFocusInWindow();
	tb->getPreferredSize();
	tb->getMaximumSize();
	tb->getMinimumSize();
	tb->contains(1, 2);
	$var($Component, c1, tb->add(static_cast<$Component*>($$new($HeadlessJToggleButton$1))));
	$var($Component, c2, tb->add(static_cast<$Component*>($$new($HeadlessJToggleButton$2))));
	$var($Component, c3, tb->add(static_cast<$Component*>($$new($HeadlessJToggleButton$3))));
	$var($Insets, ins, tb->getInsets());
	tb->getAlignmentY();
	tb->getAlignmentX();
	tb->getGraphics();
	tb->setVisible(false);
	tb->setVisible(true);
	$init($Color);
	tb->setForeground($Color::red);
	tb->setBackground($Color::red);
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
					tb->setFont(f1);
					tb->setFont(f2);
					tb->setFont(f3);
					tb->setFont(f4);
					tb->getFontMetrics(f1);
					tb->getFontMetrics(f2);
					tb->getFontMetrics(f3);
					tb->getFontMetrics(f4);
				}
			}
		}
	}
	tb->enable();
	tb->disable();
	tb->reshape(10, 10, 10, 10);
	tb->getBounds($$new($Rectangle, 1, 1, 1, 1));
	tb->getSize($$new($Dimension, 1, 2));
	tb->getLocation($$new($Point, 1, 2));
	tb->getX();
	tb->getY();
	tb->getWidth();
	tb->getHeight();
	tb->isOpaque();
	tb->isValidateRoot();
	tb->isOptimizedDrawingEnabled();
	tb->isDoubleBuffered();
	tb->getComponentCount();
	tb->countComponents();
	tb->getComponent(1);
	tb->getComponent(2);
	$var($ComponentArray, cs, tb->getComponents());
	tb->getLayout();
	tb->setLayout($$new($FlowLayout));
	tb->doLayout();
	tb->layout();
	tb->invalidate();
	tb->validate();
	tb->remove(0);
	tb->remove(c2);
	tb->removeAll();
	tb->preferredSize();
	tb->minimumSize();
	tb->getComponentAt(1, 2);
	tb->locate(1, 2);
	tb->getComponentAt($$new($Point, 1, 2));
	tb->isFocusCycleRoot($$new($Container));
	tb->transferFocusBackward();
	tb->setName("goober"_s);
	tb->getName();
	tb->getParent();
	tb->getGraphicsConfiguration();
	tb->getTreeLock();
	tb->getToolkit();
	tb->isValid();
	tb->isDisplayable();
	tb->isVisible();
	tb->isShowing();
	tb->isEnabled();
	tb->enable(false);
	tb->enable(true);
	tb->enableInputMethods(false);
	tb->enableInputMethods(true);
	tb->show();
	tb->show(false);
	tb->show(true);
	tb->hide();
	tb->getForeground();
	tb->isForegroundSet();
	tb->getBackground();
	tb->isBackgroundSet();
	tb->getFont();
	tb->isFontSet();
	$var($Container, c, $new($Container));
	c->add(static_cast<$Component*>(tb));
	tb->getLocale();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			tb->setLocale(locale);
		}
	}
	tb->getColorModel();
	tb->getLocation();
	bool exceptions = false;
	try {
		tb->getLocationOnScreen();
	} catch ($IllegalComponentStateException&) {
		$var($IllegalComponentStateException, e, $catch());
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	tb->location();
	tb->setLocation(1, 2);
	tb->move(1, 2);
	tb->setLocation($$new($Point, 1, 2));
	tb->getSize();
	tb->size();
	tb->setSize(1, 32);
	tb->resize(1, 32);
	tb->setSize($$new($Dimension, 1, 32));
	tb->resize($$new($Dimension, 1, 32));
	tb->getBounds();
	tb->bounds();
	tb->setBounds(10, 10, 10, 10);
	tb->setBounds($$new($Rectangle, 10, 10, 10, 10));
	tb->isLightweight();
	tb->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	tb->getCursor();
	tb->isCursorSet();
	tb->inside(1, 2);
	tb->contains($$new($Point, 1, 2));
	tb->isFocusable();
	tb->setFocusable(true);
	tb->setFocusable(false);
	tb->transferFocus();
	tb->getFocusCycleRootAncestor();
	tb->nextFocus();
	tb->transferFocusUpCycle();
	tb->hasFocus();
	tb->isFocusOwner();
	tb->toString();
	$init($ComponentOrientation);
	tb->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	tb->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	tb->setComponentOrientation($ComponentOrientation::UNKNOWN);
	tb->getComponentOrientation();
}

HeadlessJToggleButton::HeadlessJToggleButton() {
}

$Class* HeadlessJToggleButton::load$($String* name, bool initialize) {
	$loadClass(HeadlessJToggleButton, name, initialize, &_HeadlessJToggleButton_ClassInfo_, allocate$HeadlessJToggleButton);
	return class$;
}

$Class* HeadlessJToggleButton::class$ = nullptr;