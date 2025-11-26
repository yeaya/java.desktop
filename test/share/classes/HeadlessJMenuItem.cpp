#include <HeadlessJMenuItem.h>

#include <HeadlessJMenuItem$1.h>
#include <HeadlessJMenuItem$2.h>
#include <HeadlessJMenuItem$3.h>
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
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <jcpp.h>

#undef BOLD
#undef CROSSHAIR_CURSOR
#undef ITALIC
#undef LEFT_TO_RIGHT
#undef PLAIN
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $HeadlessJMenuItem$1 = ::HeadlessJMenuItem$1;
using $HeadlessJMenuItem$2 = ::HeadlessJMenuItem$2;
using $HeadlessJMenuItem$3 = ::HeadlessJMenuItem$3;
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
using $JMenuItem = ::javax::swing::JMenuItem;

$MethodInfo _HeadlessJMenuItem_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessJMenuItem::*)()>(&HeadlessJMenuItem::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessJMenuItem::main))},
	{}
};

$InnerClassInfo _HeadlessJMenuItem_InnerClassesInfo_[] = {
	{"HeadlessJMenuItem$3", nullptr, nullptr, 0},
	{"HeadlessJMenuItem$2", nullptr, nullptr, 0},
	{"HeadlessJMenuItem$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJMenuItem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessJMenuItem",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessJMenuItem_MethodInfo_,
	nullptr,
	nullptr,
	_HeadlessJMenuItem_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HeadlessJMenuItem$3,HeadlessJMenuItem$2,HeadlessJMenuItem$1"
};

$Object* allocate$HeadlessJMenuItem($Class* clazz) {
	return $of($alloc(HeadlessJMenuItem));
}

void HeadlessJMenuItem::init$() {
}

void HeadlessJMenuItem::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($JMenuItem, mi, $new($JMenuItem));
	mi->getAccessibleContext();
	mi->isFocusTraversable();
	mi->setEnabled(false);
	mi->setEnabled(true);
	mi->requestFocus();
	mi->requestFocusInWindow();
	mi->getPreferredSize();
	mi->getMaximumSize();
	mi->getMinimumSize();
	mi->contains(1, 2);
	$var($Component, c1, mi->add(static_cast<$Component*>($$new($HeadlessJMenuItem$1))));
	$var($Component, c2, mi->add(static_cast<$Component*>($$new($HeadlessJMenuItem$2))));
	$var($Component, c3, mi->add(static_cast<$Component*>($$new($HeadlessJMenuItem$3))));
	$var($Insets, ins, mi->getInsets());
	mi->getAlignmentY();
	mi->getAlignmentX();
	mi->getGraphics();
	mi->setVisible(false);
	mi->setVisible(true);
	$init($Color);
	mi->setForeground($Color::red);
	mi->setBackground($Color::red);
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
					mi->setFont(f1);
					mi->setFont(f2);
					mi->setFont(f3);
					mi->setFont(f4);
					mi->getFontMetrics(f1);
					mi->getFontMetrics(f2);
					mi->getFontMetrics(f3);
					mi->getFontMetrics(f4);
				}
			}
		}
	}
	mi->enable();
	mi->disable();
	mi->reshape(10, 10, 10, 10);
	mi->getBounds($$new($Rectangle, 1, 1, 1, 1));
	mi->getSize($$new($Dimension, 1, 2));
	mi->getLocation($$new($Point, 1, 2));
	mi->getX();
	mi->getY();
	mi->getWidth();
	mi->getHeight();
	mi->isOpaque();
	mi->isValidateRoot();
	mi->isOptimizedDrawingEnabled();
	mi->isDoubleBuffered();
	mi->getComponentCount();
	mi->countComponents();
	mi->getComponent(1);
	mi->getComponent(2);
	$var($ComponentArray, cs, mi->getComponents());
	mi->getLayout();
	mi->setLayout($$new($FlowLayout));
	mi->doLayout();
	mi->layout();
	mi->invalidate();
	mi->validate();
	mi->remove(0);
	mi->remove(c2);
	mi->removeAll();
	mi->preferredSize();
	mi->minimumSize();
	mi->getComponentAt(1, 2);
	mi->locate(1, 2);
	mi->getComponentAt($$new($Point, 1, 2));
	mi->isFocusCycleRoot($$new($Container));
	mi->transferFocusBackward();
	mi->setName("goober"_s);
	mi->getName();
	mi->getParent();
	mi->getGraphicsConfiguration();
	mi->getTreeLock();
	mi->getToolkit();
	mi->isValid();
	mi->isDisplayable();
	mi->isVisible();
	mi->isShowing();
	mi->isEnabled();
	mi->enable(false);
	mi->enable(true);
	mi->enableInputMethods(false);
	mi->enableInputMethods(true);
	mi->show();
	mi->show(false);
	mi->show(true);
	mi->hide();
	mi->getForeground();
	mi->isForegroundSet();
	mi->getBackground();
	mi->isBackgroundSet();
	mi->getFont();
	mi->isFontSet();
	$var($Container, c, $new($Container));
	c->add(static_cast<$Component*>(mi));
	mi->getLocale();
	{
		$var($LocaleArray, arr$, $Locale::getAvailableLocales());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Locale, locale, arr$->get(i$));
			mi->setLocale(locale);
		}
	}
	mi->getColorModel();
	mi->getLocation();
	bool exceptions = false;
	try {
		mi->getLocationOnScreen();
	} catch ($IllegalComponentStateException& e) {
		exceptions = true;
	}
	if (!exceptions) {
		$throwNew($RuntimeException, "IllegalComponentStateException did not occur when expected"_s);
	}
	mi->location();
	mi->setLocation(1, 2);
	mi->move(1, 2);
	mi->setLocation($$new($Point, 1, 2));
	mi->getSize();
	mi->size();
	mi->setSize(1, 32);
	mi->resize(1, 32);
	mi->setSize($$new($Dimension, 1, 32));
	mi->resize($$new($Dimension, 1, 32));
	mi->getBounds();
	mi->bounds();
	mi->setBounds(10, 10, 10, 10);
	mi->setBounds($$new($Rectangle, 10, 10, 10, 10));
	mi->isLightweight();
	mi->setCursor($$new($Cursor, $Cursor::CROSSHAIR_CURSOR));
	mi->getCursor();
	mi->isCursorSet();
	mi->inside(1, 2);
	mi->contains($$new($Point, 1, 2));
	mi->isFocusable();
	mi->setFocusable(true);
	mi->setFocusable(false);
	mi->transferFocus();
	mi->getFocusCycleRootAncestor();
	mi->nextFocus();
	mi->transferFocusUpCycle();
	mi->hasFocus();
	mi->isFocusOwner();
	mi->toString();
	$init($ComponentOrientation);
	mi->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	mi->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
	mi->setComponentOrientation($ComponentOrientation::UNKNOWN);
	mi->getComponentOrientation();
}

HeadlessJMenuItem::HeadlessJMenuItem() {
}

$Class* HeadlessJMenuItem::load$($String* name, bool initialize) {
	$loadClass(HeadlessJMenuItem, name, initialize, &_HeadlessJMenuItem_ClassInfo_, allocate$HeadlessJMenuItem);
	return class$;
}

$Class* HeadlessJMenuItem::class$ = nullptr;